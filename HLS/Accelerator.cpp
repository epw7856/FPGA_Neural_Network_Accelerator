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
void LOAD_WEIGHT_DMA(hls::stream<FeatureMapData> &weights,
					 FpgaData localWeights[Tm][Tn][K][K],
					 int custom_k){

	FeatureMapData weight_input_dma;

	for(int i=0;i<Divided_Tm_2;i++){
		for(int j=0;j<Tn;j++){
			for(int m=0;m<custom_k;m++){
#pragma HLS loop_tripcount min=3 max=3 avg=3
				for(int l=0;l<custom_k;l++){
#pragma HLS loop_tripcount min=3 max=3 avg=3
#pragma HLS PIPELINE II=1
#pragma HLS dependence variable=localWeights intra false

					// Load first weight buffer
					weight_input_dma=weights.read();
					localWeights[i][j][m][l]=weight_input_dma.data.data1;

					// Load second weight buffer
					if(i+Divided_Tm_2<Tm)
						localWeights[i+Divided_Tm_2][j][m][l]=weight_input_dma.data.data2;
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
void LOAD_IFM(hls::stream<FeatureMapData> &inputFeatureMap,
		FpgaData (* IFM)[Tr][Tc],
		int custom_Tr,
		int custom_Tc){


	FeatureMapData ifm_input_dma;
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
void FIRE(  FpgaData localWeights[Tm][Tn][K][K],
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
void writeOFM( hls::stream<FeatureMapData> &outputFeatureMap,
				hls::stream<BiasData> &bias,
				FpgaData OFM[Tm][Tr][Tc],
				FpgaData BIAS[Tm],
				int custom_Tr,
				int custom_Tc){

	FeatureMapData outputFeatureMap_data;
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
///	functions that load data into local arrays and perform convolution operations.
/// </summary>
void startProcessing
(
		hls::stream<FeatureMapData>& streamWeights,
		hls::stream<FeatureMapData>& streamInputFeatureMap,
		FpgaData localWeights[Tm][Tn][K][K],
		FpgaData localWeightsDB[Tm][Tn][K][K],
		FpgaData IFM[Tn][Tr][Tc],
		FpgaData IFM_DB[Tn][Tr][Tc],
		FpgaData OFM[Tm][Tr][Tc],
		int row,
		int col,
		int N,
		int custom_k,
		int custom_Tr,
		int custom_Tc
)
{
	int idx = 0;

	// Loop will iterate through the total number of ifm's (N) in increments of the ifm
	// loop tiling parameter (Tn).
	for(int i=0;i<N;i+=Tn){
#pragma HLS loop_tripcount min=6 max=6 avg=6
		if(idx%2==0){
			// Load weight data
			LOAD_WEIGHT_DMA(streamWeights,localWeights,custom_k);
			// Load input feature map data
			LOAD_IFM(streamInputFeatureMap,IFM,custom_Tr,custom_Tc);
			// Perform convolution and store local output feature map
			FIRE(localWeightsDB,IFM_DB,OFM, row, col,custom_k,custom_Tr,custom_Tc);
		}else{
			// Load weight data
			LOAD_WEIGHT_DMA(streamWeights,localWeightsDB,custom_k);
			// Load input feature map data
			LOAD_IFM(streamInputFeatureMap,IFM_DB,custom_Tr,custom_Tc);
			// Perform convolution and store local output feature map
			FIRE(localWeights,IFM,OFM, row, col,custom_k,custom_Tr,custom_Tc);
		}
		idx+=1;
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
		hls::stream<FeatureMapData>& streamWeights,
		hls::stream<FeatureMapData>& streamInputFeatureMap,
		hls::stream<BiasData>& streamBias,
		hls::stream<FeatureMapData>& streamOutputFeatureMap,
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
	// Enable parallel path computations for double buffering
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
