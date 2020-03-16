#include <stdio.h>
#include <iostream>
#include "Platform/platform.h"
#include "xil_printf.h"
#include "AXI/xaxidma.h"
#include "Top/xtop.h"
#include "AxiTimer/AxiTimer.h"

typedef float FpgaData;
typedef short FpgaDataShort;

struct SingleBuffer
{
	FpgaData buffer1;
};

struct DoubleBuffer
{
	FpgaData buffer1;
	FpgaData buffer2;
};

struct DmaDataSingleBuffer
{
	SingleBuffer data;
};

struct DmaDataDoubleBuffer
{
	DoubleBuffer data;
};

// Define loop tiling parameter constants
const int Tm = 8;
const int Divided_Tm_2 = 4;
const int Divided_Tm_4 = 2;
const int Tn = 32;
const int Divided_Tn_2 = 16;
const int Custom_Tr = 13;
const int Custom_Tc = 13;

// Define convolution layer parameters
const int M = 128;
const int N = 192;
const int LoopTilingN = 6;
const int R = 13;
const int C = 13;
const int Custom_k = 3;

// Define stream data length for weights, input feature maps, output feature maps, and bias
const int FixedWeightsLength = LoopTilingN * Divided_Tm_2 * Tn * Custom_k * Custom_k;
const int FixedIfmLength = LoopTilingN * Divided_Tn_2 * Custom_Tr * Custom_Tc;
const int FixedOfmLength = Divided_Tm_2 * Custom_Tr * Custom_Tc;
const int FixedBiasLength = Tm;
