/*
 *
 * This code is the standalone PS scheduler to trigger the PL convolution accelerator.
 * This application targets a single APU of the ZCU102 board.
 *
 * Author: Eric Walker
 * Affiliation: University of Pittsburgh
 *
 */
 
#include "main.h"

using namespace std;

XAxiDma axiDma[4];
XAxiDma_Config* axiDmaConfig[4];
XTop accelerator;
XTop_Config* acceleratorConfig;

// Holds convolution operation data
static DmaDataDoubleBuffer weightData[FixedWeightsLength];
static DmaDataDoubleBuffer ifmData[FixedIfmLength];
static DmaDataDoubleBuffer ofmData[FixedOfmLength];
static DmaDataSingleBuffer biasData[FixedBiasLength];

// Define pointers to the local structs that hold convolution operation data
DmaDataDoubleBuffer* weightDataStartAddr = weightData;
DmaDataDoubleBuffer* ifmDataStartAddr = ifmData;
DmaDataDoubleBuffer* ofmDataStartAddr = ofmData;
DmaDataSingleBuffer* biasDataStartaddr = biasData;

void init()
{
	// Initialize AXI DMA transfer blocks.
	for(int i = 0; i < 4; ++i)
	{
			switch(i)
			{
			// Load configuration of AXI_DMA_B (bias).
			case 0:
				axiDmaConfig[i] = XAxiDma_LookupConfig(XPAR_AXIDMA_0_DEVICE_ID);
				break;

			// Load configuration of AXI_DMA_I (input feature maps).
			case 1:
				axiDmaConfig[i] = XAxiDma_LookupConfig(XPAR_AXIDMA_1_DEVICE_ID);
				break;

			// Load configuration of AXI_DMA_O (output feature maps).
			case 2:
				axiDmaConfig[i] = XAxiDma_LookupConfig(XPAR_AXIDMA_2_DEVICE_ID);
				break;

			// Load configuration of AXI_DMA_W (weights).
			case 3:
				axiDmaConfig[i] = XAxiDma_LookupConfig(XPAR_AXIDMA_3_DEVICE_ID);
				break;

			default:
				break;
			}

			if(axiDmaConfig[i])
			{
				int status = XAxiDma_CfgInitialize(&axiDma[i], axiDmaConfig[i]);

				if (status != XST_SUCCESS)
				{
					cout << "Error initializing the following AxiDMA block: " << i << endl;
				}

				// Disable interrupts
				XAxiDma_IntrDisable(&axiDma[i], XAXIDMA_IRQ_ALL_MASK, XAXIDMA_DEVICE_TO_DMA);
				XAxiDma_IntrDisable(&axiDma[i], XAXIDMA_IRQ_ALL_MASK, XAXIDMA_DMA_TO_DEVICE);
			}
	}

	// Initialize the convolution accelerator block.
	acceleratorConfig = XTop_LookupConfig(XPAR_TOP_0_DEVICE_ID);

	if(acceleratorConfig)
	{
		if (XTop_CfgInitialize(&accelerator, acceleratorConfig) != XST_SUCCESS)
		{
			cout << "Error initializing Accelerator IP." << endl;
		}
	}

	cout << "Initialization of AXI DMA blocks and Accelerator complete." << endl;

	}

int main()
{
	cout<<"================================================================="<<endl;
	cout<<"=====================Start Transmission Test====================="<<endl;
	cout<<"================================================================="<<endl;
	
    init_platform();
    init();

	// Instantiate AXI timer to time the data transfer and convolution operation.
    AxiTimer timer;
    double timeInterval;

	// Load weight buffer with data.
	for(int i = 0; i < FixedWeightsLength; ++i)
	{
		weightData[i].data.buffer1 = 222;
		weightData[i].data.buffer2 = 555;
	}
	
	// Load input feature map buffer with data.
	for(int i = 0; i < FixedIfmLength; ++i)
	{
		ifmData[i].data.buffer1 = 1;
		ifmData[i].data.buffer2 = 1;
	}

	// Load bias buffer with data.
	for(int i = 0; i < FixedBiasLength; ++i)
	{
		biasData[i].data.buffer1 = 222;
	}

	cout << "Data buffer initialization complete." << endl;

	int bufferIteration = 0;

	// Set external filter dimension and row/col tiling parameters for accelerator IP.
	XTop_Set_custom_k(&accelerator, Custom_k);
	XTop_Set_custom_Tr(&accelerator, Custom_Tr);
	XTop_Set_custom_Tc(&accelerator, Custom_Tc);

	timer.startTimer();

	// Iterate through rows, cols, and total number of output feature maps.
	for(int row = 0; row < R; row += Custom_Tr)
	{
		for(int col = 0; col < C; col += Custom_Tc)
		{
			for(int to = 0; to < M; to += Tm)
			{
				// Set the current row, col, loop iteration, and number of input feature maps.
				XTop_Set_row(&accelerator, row);
				XTop_Set_col(&accelerator, col);
				XTop_Set_num(&accelerator, bufferIteration);
				XTop_Set_N(&accelerator, N);

				// Trigger the convolution accelerator block.
				bufferIteration++;
				XTop_Start(&accelerator);

				// Stream weight data from memory.
				XAxiDma_SimpleTransfer(&axiDma[3], (INTPTR)weightDataStartAddr,
									   FixedWeightsLength * sizeof(DmaDataDoubleBuffer), XAXIDMA_DMA_TO_DEVICE);

				// Stream input feature map data from memory.
				XAxiDma_SimpleTransfer(&axiDma[1], (INTPTR)ifmDataStartAddr,
									   FixedIfmLength * sizeof(DmaDataDoubleBuffer), XAXIDMA_DMA_TO_DEVICE);

				// Stream bias data from memory.
				XAxiDma_SimpleTransfer(&axiDma[0], (INTPTR)biasDataStartaddr,
									   FixedBiasLength * sizeof(DmaDataSingleBuffer), XAXIDMA_DMA_TO_DEVICE);

				// Stream output feature map data to memory.
				XAxiDma_SimpleTransfer(&axiDma[2], (INTPTR)ofmDataStartAddr,
									   FixedOfmLength * sizeof(DmaDataDoubleBuffer), XAXIDMA_DEVICE_TO_DMA);

				// Wait for data streams to complete.
				while(XAxiDma_Busy(&axiDma[0], XAXIDMA_DMA_TO_DEVICE));
				while(XAxiDma_Busy(&axiDma[1], XAXIDMA_DMA_TO_DEVICE));
				while(XAxiDma_Busy(&axiDma[3], XAXIDMA_DMA_TO_DEVICE));
				while(XAxiDma_Busy(&axiDma[2], XAXIDMA_DEVICE_TO_DMA));

				// Wait for accelerator to complete.
				while(!XTop_IsDone(&accelerator));

			}
		}
	}
	
	// Stop the timer and print the duration of the convolutional layer operation.
	timer.stopTimer();
	timeInterval = timer.getElapsedTimerInSeconds();
	printf("Convolution Data Transfer and Processing Elapsed Time (seconds): %f\n", timeInterval);

	cleanup_platform();
	return 0;
}
