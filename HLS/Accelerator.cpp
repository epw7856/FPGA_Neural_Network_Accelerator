/* This file is used to produce the convolutional accelerator IP core for use in the
 * configuration of the Xilinx ZCU102 board within Vivado.
 *
 * Author: Eric Walker
 * Affiliation: University of Pittsburgh
 *
 */

#include "Accelerator.h"

/// <summary>
///	Function to load weight stream data into local buffer. The weights are loaded
/// via double buffer because the input stream struct is 64-bit (2 weight values).
/// The total number of filters loaded per function call is equal to:
/// OFM tiling parameter * IFM tiling parameter * (Filter dimension)^2
/// </summary>
void loadWeights
(
		hls::stream<ConvParamData>& streamWeights,
		FpgaData localWeights[Tm][Tn][K][K],
		int custom_K
)
{

	ConvParamData weightStore;

	// Loop for kernel # row
	for(int i = 0; i < Divided_Tm_2; ++i)
	{
		// Loop for kernel # column
		for(int j = 0; j < Tn; ++j)
		{
			// Loop for row within a kernel window
			for(int m = 0; m < custom_K; ++m)
			{
#pragma HLS loop_tripcount min=3 max=3 avg=3

				// Loop for the column within a kernel window
				for(int n = 0; n < custom_K; ++n)
				{
#pragma HLS loop_tripcount min=3 max=3 avg=3
#pragma HLS PIPELINE II=1
#pragma HLS dependence variable=localWeights intra false

					// Read the weight buffer data from the AXI stream
					weightStore = streamWeights.read();

					// Load first half of the weights
					localWeights[i][j][m][n] = weightStore.data.data1;

					// Load second half of the weights during the same pass
					if(i + Divided_Tm_2 < Tm)
					{
						localWeights[i+Divided_Tm_2][j][m][n] = weightStore.data.data2;
					}

				}
			}
		}
	}
}



/// <summary>
///	Function to load input feature map data into local buffers. Similar to LOAD_WEIGHT_DMA
///	function. The total number of input feature maps loaded per function call is equal to:
/// IFM tiling parameter * Row iteration loop tiling parameter * Col iteration loop tiling parameter
/// </summary>
void loadInputfeatureMap(hls::stream<ConvParamData> &inputFeatureMap,
		FpgaData (* IFM)[Tr][Tc],
		int custom_Tr,
		int custom_Tc){


	ConvParamData ifm_input_dma;
	for(int i=0;i<Divided_Tn_2;i++){
		for(int j=0;j<custom_Tr;j++){
#pragma HLS loop_tripcount min=13 max=13 avg=13
			for(int m=0;m<custom_Tc;m++){
#pragma HLS loop_tripcount min=13 max=13 avg=13
#pragma HLS PIPELINE II=1
#pragma HLS dependence variable=IFM intra false

				// Load first IFM buffer
				ifm_input_dma=inputFeatureMap.read();
				IFM[i][j][m]=ifm_input_dma.data.data1;

				//Load second IFM buffer
				if(i+Divided_Tn_2<Tn)
					IFM[i+Divided_Tn_2][j][m]=ifm_input_dma.data.data2;
			}
		}
	}
}



/// <summary>
///	Function to perform convolution operation using local weight and input feature map buffers. The
///	resulting output feature maps are stored in local buffers (not written to a stream). For each function
/// call, the total number of output feature maps produced is equal to the OFM loop tiling parameter.
/// </summary>
void performConvolution(  FpgaData localWeights[Tm][Tn][K][K],
			FpgaData (* IFM)[Tr][Tc],
			FpgaData OFM[Tm][Tr][Tc],
			int row,
			int col,
			int custom_k,
			int custom_Tr,
			int custom_Tc){


	for(int i=0;i<custom_k;i++){
#pragma HLS loop_tripcount min=3 max=3 avg=3
		for(int j=0;j<custom_k;j++){
#pragma HLS loop_tripcount min=3 max=3 avg=3
			for(int trr=row;(trr<row+custom_Tr);trr++){
#pragma HLS loop_tripcount min=13 max=13 avg=13
				for(int tcc=col;(tcc<col+custom_Tc);tcc++){
#pragma HLS loop_tripcount min=13 max=13 avg=13
#pragma HLS PIPELINE II=1
#pragma HLS dependence variable=OFM inter false
					for(int too=0;too<Tm; too++){
						for(int tii=0;tii<Tn;tii++){

							FpgaData add_res1;

							// Perform convolution operation
							add_res1 = localWeights[too][tii][i][j]*IFM[tii][trr-row][tcc-col];
							OFM[too][trr-row][tcc-col] = OFM[too][trr-row][tcc-col] + add_res1;
						}
					}
				}
			}
		}
	}
}

/// <summary>
///	Function to add bias values to output feature maps and write an output stream. After the
/// write stream is created, all local OFM buffer data is reset to 0.
/// </summary>
void writeOFM( hls::stream<ConvParamData> &outputFeatureMap,
				hls::stream<BiasData> &bias,
				FpgaData OFM[Tm][Tr][Tc],
				FpgaData BIAS[Tm],
				int custom_Tr,
				int custom_Tc){

	ConvParamData outputFeatureMap_data;
	BiasData bias_input_dma;

	for(int i=0;i<Tm;i++){
#pragma HLS PIPELINE II=1
		bias_input_dma=bias.read();
		BIAS[i]=bias_input_dma.data;
	}

	for(int i=0;i<Divided_Tm_2;i++){
		for(int j=0;j<custom_Tr;j++){
#pragma HLS loop_tripcount min=13 max=13 avg=13
			for(int k=0;k<custom_Tc;k++){
#pragma HLS loop_tripcount min=13 max=13 avg=13
#pragma HLS PIPELINE II=1
#pragma HLS dependence variable=OFM intra false

				outputFeatureMap_data.last=0;
				// Signal last OFM data value and write to OFM data struct
				if (i==Divided_Tm_2-1 && j==custom_Tr-1 && k==custom_Tc-1){
					outputFeatureMap_data.last=1;
					}
				// Write OFM data to struct and then output stream
				outputFeatureMap_data.data.data1=OFM[i][j][k]+BIAS[i];
				outputFeatureMap_data.data.data2=OFM[i+Divided_Tm_2][j][k]+BIAS[i];
				outputFeatureMap.write(outputFeatureMap_data);
			}
		}
	}
	for(int j=0;j<custom_Tr;j++){
#pragma HLS loop_tripcount min=13 max=13 avg=13
		for(int k=0;k<custom_Tc;k++){
#pragma HLS loop_tripcount min=13 max=13 avg=13
#pragma HLS PIPELINE II=1
			for(int i=0;i<Tm;i++){

				// Reset output feature maps
				OFM[i][j][k] = 0;
			}
		}
	}
}



/// <summary>
///	Function to iterate through the number of sets of input feature maps and call downstream
///	functions that load data into stack-allocated arrays and perform convolution operations.
/// </summary>
void startProcessing
(
		hls::stream<ConvParamData>& streamWeights,
		hls::stream<ConvParamData>& streamInputFeatureMap,
		FpgaData localWeights[Tm][Tn][K][K],
		FpgaData localWeightsDB[Tm][Tn][K][K],
		FpgaData localIFM[Tn][Tr][Tc],
		FpgaData localIFM_DB[Tn][Tr][Tc],
		FpgaData localOFM[Tm][Tr][Tc],
		int rowIndex,
		int colIndex,
		int numIFMs,
		int custom_K,
		int custom_Tr,
		int custom_Tc
)
{
	int partitionSegment = 0;

	// Loop will iterate through the total number of ifm's (N) in increments of the ifm
	// loop tiling parameter (Tn).
	for(int i = 0 ; i < numIFMs; i += Tn)
	{
#pragma HLS loop_tripcount min=6 max=6 avg=6

		// Double buffer the current IFM set
		if(partitionSegment % 2 == 0)
		{
			// Load weight data
			loadWeights(streamWeights, localWeights, custom_K);

			// Load input feature map data
			loadInputfeatureMap(streamInputFeatureMap,localIFM,custom_Tr,custom_Tc);

			// Perform convolution and store local output feature map
			performConvolution(localWeightsDB,localIFM_DB,localOFM, rowIndex, colIndex,custom_K,custom_Tr,custom_Tc);
		}
		else
		{
			// Load weight data
			loadWeights(streamWeights,localWeightsDB,custom_K);

			// Load input feature map data
			loadInputfeatureMap(streamInputFeatureMap,localIFM_DB,custom_Tr,custom_Tc);

			// Perform convolution and store local output feature map
			performConvolution(localWeights,localIFM,localOFM, rowIndex, colIndex,custom_K,custom_Tr,custom_Tc);
		}

		partitionSegment++;
	}
}

/// <summary>
/// This is the top level function for the IP block. Receives the values referenced by the data streams
/// for the weights, input feature maps, bias values, and output feature maps as well as row/col iterators
/// and loop tiling parameters from the PS scheduler. The memory and resource configuration for the
/// arrays are defined here using pragmas. The "currentBuffer" parameter is used to create parallel paths for
/// convolution computation based on the number of sets of output feature maps. Downstream function
/// calls are made that perform the logic for loading input feature maps and weights, compute
/// convolutions, and write streaming output feature map data.
/// </summary>
void accelerator
(
		hls::stream<ConvParamData>& streamWeights,
		hls::stream<ConvParamData>& streamInputFeatureMap,
		hls::stream<BiasData>& streamBias,
		hls::stream<ConvParamData>& streamOutputFeatureMap,
		int rowIndex,
		int colIndex,
		int flag,
		int currentBuffer,
		int numIFMs,
		int custom_K,
		int custom_Tr,
		int custom_Tc
)
{

// AXI-Lite protocol for iteration and loop tiling parameters.
#pragma HLS INTERFACE s_axilite port=return bundle=CRTL_BUS
#pragma HLS INTERFACE s_axilite port=rowIndex bundle=CRTL_BUS
#pragma HLS INTERFACE s_axilite port=colIndex bundle=CRTL_BUS
#pragma HLS INTERFACE s_axilite port=flag bundle=CRTL_BUS
#pragma HLS INTERFACE s_axilite port=currentBuffer bundle=CRTL_BUS
#pragma HLS INTERFACE s_axilite port=numIFMs bundle=CRTL_BUS
#pragma HLS INTERFACE s_axilite port=custom_K bundle=CRTL_BUS
#pragma HLS INTERFACE s_axilite port=custom_Tr bundle=CRTL_BUS
#pragma HLS INTERFACE s_axilite port=custom_Tc bundle=CRTL_BUS

// AXI4-Stream protocol for weights, ifm, ofm, and bias data
#pragma HLS INTERFACE axis port=streamWeights
#pragma HLS INTERFACE axis port=streamInputFeatureMap
#pragma HLS INTERFACE axis port=streamBias
#pragma HLS INTERFACE axis port=streamOutputFeatureMap

	static FpgaData localWeights[Tm][Tn][K][K];
#pragma HLS RESOURCE variable=localWeights core=RAM_1P_BRAM
#pragma HLS ARRAY_PARTITION variable=localWeights complete dim=1
#pragma HLS ARRAY_PARTITION variable=localWeights complete dim=2

	static FpgaData localWeights_DB[Tm][Tn][K][K];
#pragma HLS RESOURCE variable=localWeightsDB core=RAM_1P_BRAM
#pragma HLS ARRAY_PARTITION variable=localWeightsDB complete dim=1
#pragma HLS ARRAY_PARTITION variable=localWeightsDB complete dim=2

	static FpgaData localIFM[Tn][Tr][Tc];
#pragma HLS ARRAY_PARTITION variable=localIFM complete dim=1

	static FpgaData localIFM_DB[Tn][Tr][Tc];
#pragma HLS ARRAY_PARTITION variable=localIFM_DB complete dim=1

	static FpgaData localOFM[Tm][Tr][Tc];
#pragma HLS RESOURCE variable=localOFM core=RAM_S2P_BRAM
#pragma HLS ARRAY_PARTITION variable=localOFM complete dim=1

	static FpgaData localOFM_DB[Tm][Tr][Tc];
#pragma HLS RESOURCE variable=localOFM_DB core=RAM_S2P_BRAM
#pragma HLS ARRAY_PARTITION variable=localOFM_DB complete dim=1

	static FpgaData localBias[Tm];
	static FpgaData localBias_DB[Tm];


	// ***** Start Data Processing *****
	// Enable parallel path computations for double buffering. This parameter is originates from the PS scheduler.
	if(currentBuffer % 2 == 0)
	{
		startProcessing(streamWeights, streamInputFeatureMap, localWeights, localWeights_DB, localIFM,
				 	 	localIFM_DB, localOFM, rowIndex, colIndex, numIFMs, custom_K, custom_Tr, custom_Tc);

		writeOFM(streamOutputFeatureMap, streamBias, localOFM_DB, localBias_DB, custom_Tr, custom_Tc);
	}
	else
	{
		startProcessing(streamWeights, streamInputFeatureMap, localWeights, localWeights_DB, localIFM,
				        localIFM_DB, localOFM_DB, rowIndex, colIndex, numIFMs, custom_K, custom_Tr, custom_Tc);

		writeOFM(streamOutputFeatureMap, streamBias, localOFM, localBias, custom_Tr, custom_Tc);
	}

}
