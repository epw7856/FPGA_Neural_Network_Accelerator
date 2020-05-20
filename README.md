# FPGA Deep Learning Accelerator
Xilinx ZCU102 MPSoC Accelerator for Image Processing via Convolutional Neural Networks.

The \HLS folder within this repo contains the Xilinx High Level Synthesis implementation of the accelerator IP that is configured to live in the FPGA fabric of the board. The IP core is written in C++ and the output product of the HLS synthesis process is a zip file of the IP package.

The \Vivado folder contains the Xilinx Vivado board project for the Programmable Logic/Processing System (PL/PS) that is used to test the accelerator IP. The hardware configuration of the board, as well as DDR and FPGA interfaces are defined in the schematic. The output product of the sythesis, implementation, and bitstream process is the .hdf file. This file is flashed to board via the Xilinx SDK. 

The \SDK folder contains the Xilinx SDK project for the PS scheduler code targeted for the ARM core. The application initializes AXI DMA and the accelerator IP cores in the FPGA fabric. It also executes a test data transfer and calculates the execution time of the convolution operation. The default Xilinx bsp for the ARM core is utilized.
