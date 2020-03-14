############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
############################################################
open_project HLS
set_top top
add_files Accelerator.cpp
add_files HLS/Accelerator.h
open_solution "solution2"
set_part {xczu9eg-ffvb1156-2-i}
create_clock -period 10 -name default
#source "./HLS/solution2/directives.tcl"
#csim_design
csynth_design
#cosim_design
export_design -rtl verilog -format ip_catalog -version "1.12"
