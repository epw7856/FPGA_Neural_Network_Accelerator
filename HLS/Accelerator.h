/* This header file defines constants and structs required for data management and
 * processing within the Accelerator.cpp file.
 *
 * Author: Eric Walker
 * Affiliation: University of Pittsburgh
 *
 */

#include <ap_axi_sdata.h>
#include <ap_fixed.h>
#include <ap_int.h>
#include <hls_stream.h>

// Set this parameter to configure the type of data to be processed by the accelerator
#define USE_FLOAT_DATA 1

#if USE_FLOAT_DATA == 1
	typedef float FpgaData;
	typedef float FpgaWeights;
#else
	typedef ap_fixed<32,10,AP_TRN_ZERO, AP_SAT> FpgaData;
	typedef ap_fixed<32,1,AP_TRN_ZERO, AP_SAT> FpgaWeights;
#endif

// Struct containing 2 32-bit float values, 64 bit total. Used for input and output feature maps and weights streams.
struct DoubleBuffer
{
	FpgaData data1;
	FpgaData data2;
};

// Struct containing 2 32-bit float values and a single bit boolean. Used for feature map streams.
struct ConvParamData
{
	DoubleBuffer data;
	bool last;
};

// Struct containing a 32-bit float value and a single bit boolean. Used for bias value streams.
struct BiasData
{
	FpgaData data;
	bool last;
};

// Struct containing 2 32-bit float values (64 bit total). Used for data transfers via fiber and the Aurora IP cores.
struct AuroraData
{
	DoubleBuffer data;
};

// The following constants define the structure of a convolutional layer of the UNET architecture. The naming convention
// matches that within the academic paper "Optimizing FPGA-based Accelerator Design for Deep Convolutional Neural Networks"
const int Tm = 64;					// Number of output feature maps tiling parameter
const int Divided_Tm_2 = 32;		// Const calculated here for performance improvement
const int Divided_Tm_4 = 16;		// Const calculated here for performance improvement
const int Tn = 7;					// Number of input feature maps tiling parameter
const int Divided_Tn_2 = 4;			// Const calculated here for performance improvement
const int Tr = 13;					// Output feature map row tiling parameter
const int Tc = 13;					// Output feature map col tiling parameter
const int K = 11;					// Filter dimension
const int R = 13;					// Output feature map row size
const int C = 13;					// Output feature map col size
const int M = 128;					// Number of output feature maps
const int N = 192;					// Number of input feature maps
