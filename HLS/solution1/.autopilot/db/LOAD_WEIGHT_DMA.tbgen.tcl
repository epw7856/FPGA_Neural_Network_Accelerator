set moduleName LOAD_WEIGHT_DMA
set isCombinational 0
set isDatapathOnly 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set C_modelName {LOAD_WEIGHT_DMA}
set C_modelType { void 0 }
set C_modelArgList {
	{ input_dma_W_V_data int 56 regular {axi_s 0 volatile  { input_dma_W Data } }  }
	{ input_dma_W_V_last int 1 regular {axi_s 0 volatile  { input_dma_W Last } }  }
	{ WEIGHT1_0_0_V int 8 regular {array 121 { 0 } 0 1 }  }
	{ WEIGHT1_0_1_V int 8 regular {array 121 { 0 } 0 1 }  }
	{ WEIGHT1_0_2_V int 8 regular {array 121 { 0 } 0 1 }  }
	{ WEIGHT1_0_3_V int 8 regular {array 121 { 0 } 0 1 }  }
	{ WEIGHT1_0_4_V int 8 regular {array 121 { 0 } 0 1 }  }
	{ WEIGHT1_0_5_V int 8 regular {array 121 { 0 } 0 1 }  }
	{ WEIGHT1_0_6_V int 8 regular {array 121 { 0 } 0 1 }  }
	{ WEIGHT1_1_0_V int 8 regular {array 121 { 0 } 0 1 }  }
	{ WEIGHT1_1_1_V int 8 regular {array 121 { 0 } 0 1 }  }
	{ WEIGHT1_1_2_V int 8 regular {array 121 { 0 } 0 1 }  }
	{ WEIGHT1_1_3_V int 8 regular {array 121 { 0 } 0 1 }  }
	{ WEIGHT1_1_4_V int 8 regular {array 121 { 0 } 0 1 }  }
	{ WEIGHT1_1_5_V int 8 regular {array 121 { 0 } 0 1 }  }
	{ WEIGHT1_1_6_V int 8 regular {array 121 { 0 } 0 1 }  }
	{ WEIGHT1_2_0_V int 8 regular {array 121 { 0 } 0 1 }  }
	{ WEIGHT1_2_1_V int 8 regular {array 121 { 0 } 0 1 }  }
	{ WEIGHT1_2_2_V int 8 regular {array 121 { 0 } 0 1 }  }
	{ WEIGHT1_2_3_V int 8 regular {array 121 { 0 } 0 1 }  }
	{ WEIGHT1_2_4_V int 8 regular {array 121 { 0 } 0 1 }  }
	{ WEIGHT1_2_5_V int 8 regular {array 121 { 0 } 0 1 }  }
	{ WEIGHT1_2_6_V int 8 regular {array 121 { 0 } 0 1 }  }
	{ WEIGHT1_3_0_V int 8 regular {array 121 { 0 } 0 1 }  }
	{ WEIGHT1_3_1_V int 8 regular {array 121 { 0 } 0 1 }  }
	{ WEIGHT1_3_2_V int 8 regular {array 121 { 0 } 0 1 }  }
	{ WEIGHT1_3_3_V int 8 regular {array 121 { 0 } 0 1 }  }
	{ WEIGHT1_3_4_V int 8 regular {array 121 { 0 } 0 1 }  }
	{ WEIGHT1_3_5_V int 8 regular {array 121 { 0 } 0 1 }  }
	{ WEIGHT1_3_6_V int 8 regular {array 121 { 0 } 0 1 }  }
	{ WEIGHT1_4_0_V int 8 regular {array 121 { 0 } 0 1 }  }
	{ WEIGHT1_4_1_V int 8 regular {array 121 { 0 } 0 1 }  }
	{ WEIGHT1_4_2_V int 8 regular {array 121 { 0 } 0 1 }  }
	{ WEIGHT1_4_3_V int 8 regular {array 121 { 0 } 0 1 }  }
	{ WEIGHT1_4_4_V int 8 regular {array 121 { 0 } 0 1 }  }
	{ WEIGHT1_4_5_V int 8 regular {array 121 { 0 } 0 1 }  }
	{ WEIGHT1_4_6_V int 8 regular {array 121 { 0 } 0 1 }  }
	{ WEIGHT1_5_0_V int 8 regular {array 121 { 0 } 0 1 }  }
	{ WEIGHT1_5_1_V int 8 regular {array 121 { 0 } 0 1 }  }
	{ WEIGHT1_5_2_V int 8 regular {array 121 { 0 } 0 1 }  }
	{ WEIGHT1_5_3_V int 8 regular {array 121 { 0 } 0 1 }  }
	{ WEIGHT1_5_4_V int 8 regular {array 121 { 0 } 0 1 }  }
	{ WEIGHT1_5_5_V int 8 regular {array 121 { 0 } 0 1 }  }
	{ WEIGHT1_5_6_V int 8 regular {array 121 { 0 } 0 1 }  }
	{ WEIGHT1_6_0_V int 8 regular {array 121 { 0 } 0 1 }  }
	{ WEIGHT1_6_1_V int 8 regular {array 121 { 0 } 0 1 }  }
	{ WEIGHT1_6_2_V int 8 regular {array 121 { 0 } 0 1 }  }
	{ WEIGHT1_6_3_V int 8 regular {array 121 { 0 } 0 1 }  }
	{ WEIGHT1_6_4_V int 8 regular {array 121 { 0 } 0 1 }  }
	{ WEIGHT1_6_5_V int 8 regular {array 121 { 0 } 0 1 }  }
	{ WEIGHT1_6_6_V int 8 regular {array 121 { 0 } 0 1 }  }
	{ WEIGHT1_7_0_V int 8 regular {array 121 { 0 } 0 1 }  }
	{ WEIGHT1_7_1_V int 8 regular {array 121 { 0 } 0 1 }  }
	{ WEIGHT1_7_2_V int 8 regular {array 121 { 0 } 0 1 }  }
	{ WEIGHT1_7_3_V int 8 regular {array 121 { 0 } 0 1 }  }
	{ WEIGHT1_7_4_V int 8 regular {array 121 { 0 } 0 1 }  }
	{ WEIGHT1_7_5_V int 8 regular {array 121 { 0 } 0 1 }  }
	{ WEIGHT1_7_6_V int 8 regular {array 121 { 0 } 0 1 }  }
	{ custom_k int 32 regular  }
}
set C_modelArgMapList {[ 
	{ "Name" : "input_dma_W_V_data", "interface" : "axis", "bitwidth" : 56, "direction" : "READONLY"} , 
 	{ "Name" : "input_dma_W_V_last", "interface" : "axis", "bitwidth" : 1, "direction" : "READONLY"} , 
 	{ "Name" : "WEIGHT1_0_0_V", "interface" : "memory", "bitwidth" : 8, "direction" : "WRITEONLY"} , 
 	{ "Name" : "WEIGHT1_0_1_V", "interface" : "memory", "bitwidth" : 8, "direction" : "WRITEONLY"} , 
 	{ "Name" : "WEIGHT1_0_2_V", "interface" : "memory", "bitwidth" : 8, "direction" : "WRITEONLY"} , 
 	{ "Name" : "WEIGHT1_0_3_V", "interface" : "memory", "bitwidth" : 8, "direction" : "WRITEONLY"} , 
 	{ "Name" : "WEIGHT1_0_4_V", "interface" : "memory", "bitwidth" : 8, "direction" : "WRITEONLY"} , 
 	{ "Name" : "WEIGHT1_0_5_V", "interface" : "memory", "bitwidth" : 8, "direction" : "WRITEONLY"} , 
 	{ "Name" : "WEIGHT1_0_6_V", "interface" : "memory", "bitwidth" : 8, "direction" : "WRITEONLY"} , 
 	{ "Name" : "WEIGHT1_1_0_V", "interface" : "memory", "bitwidth" : 8, "direction" : "WRITEONLY"} , 
 	{ "Name" : "WEIGHT1_1_1_V", "interface" : "memory", "bitwidth" : 8, "direction" : "WRITEONLY"} , 
 	{ "Name" : "WEIGHT1_1_2_V", "interface" : "memory", "bitwidth" : 8, "direction" : "WRITEONLY"} , 
 	{ "Name" : "WEIGHT1_1_3_V", "interface" : "memory", "bitwidth" : 8, "direction" : "WRITEONLY"} , 
 	{ "Name" : "WEIGHT1_1_4_V", "interface" : "memory", "bitwidth" : 8, "direction" : "WRITEONLY"} , 
 	{ "Name" : "WEIGHT1_1_5_V", "interface" : "memory", "bitwidth" : 8, "direction" : "WRITEONLY"} , 
 	{ "Name" : "WEIGHT1_1_6_V", "interface" : "memory", "bitwidth" : 8, "direction" : "WRITEONLY"} , 
 	{ "Name" : "WEIGHT1_2_0_V", "interface" : "memory", "bitwidth" : 8, "direction" : "WRITEONLY"} , 
 	{ "Name" : "WEIGHT1_2_1_V", "interface" : "memory", "bitwidth" : 8, "direction" : "WRITEONLY"} , 
 	{ "Name" : "WEIGHT1_2_2_V", "interface" : "memory", "bitwidth" : 8, "direction" : "WRITEONLY"} , 
 	{ "Name" : "WEIGHT1_2_3_V", "interface" : "memory", "bitwidth" : 8, "direction" : "WRITEONLY"} , 
 	{ "Name" : "WEIGHT1_2_4_V", "interface" : "memory", "bitwidth" : 8, "direction" : "WRITEONLY"} , 
 	{ "Name" : "WEIGHT1_2_5_V", "interface" : "memory", "bitwidth" : 8, "direction" : "WRITEONLY"} , 
 	{ "Name" : "WEIGHT1_2_6_V", "interface" : "memory", "bitwidth" : 8, "direction" : "WRITEONLY"} , 
 	{ "Name" : "WEIGHT1_3_0_V", "interface" : "memory", "bitwidth" : 8, "direction" : "WRITEONLY"} , 
 	{ "Name" : "WEIGHT1_3_1_V", "interface" : "memory", "bitwidth" : 8, "direction" : "WRITEONLY"} , 
 	{ "Name" : "WEIGHT1_3_2_V", "interface" : "memory", "bitwidth" : 8, "direction" : "WRITEONLY"} , 
 	{ "Name" : "WEIGHT1_3_3_V", "interface" : "memory", "bitwidth" : 8, "direction" : "WRITEONLY"} , 
 	{ "Name" : "WEIGHT1_3_4_V", "interface" : "memory", "bitwidth" : 8, "direction" : "WRITEONLY"} , 
 	{ "Name" : "WEIGHT1_3_5_V", "interface" : "memory", "bitwidth" : 8, "direction" : "WRITEONLY"} , 
 	{ "Name" : "WEIGHT1_3_6_V", "interface" : "memory", "bitwidth" : 8, "direction" : "WRITEONLY"} , 
 	{ "Name" : "WEIGHT1_4_0_V", "interface" : "memory", "bitwidth" : 8, "direction" : "WRITEONLY"} , 
 	{ "Name" : "WEIGHT1_4_1_V", "interface" : "memory", "bitwidth" : 8, "direction" : "WRITEONLY"} , 
 	{ "Name" : "WEIGHT1_4_2_V", "interface" : "memory", "bitwidth" : 8, "direction" : "WRITEONLY"} , 
 	{ "Name" : "WEIGHT1_4_3_V", "interface" : "memory", "bitwidth" : 8, "direction" : "WRITEONLY"} , 
 	{ "Name" : "WEIGHT1_4_4_V", "interface" : "memory", "bitwidth" : 8, "direction" : "WRITEONLY"} , 
 	{ "Name" : "WEIGHT1_4_5_V", "interface" : "memory", "bitwidth" : 8, "direction" : "WRITEONLY"} , 
 	{ "Name" : "WEIGHT1_4_6_V", "interface" : "memory", "bitwidth" : 8, "direction" : "WRITEONLY"} , 
 	{ "Name" : "WEIGHT1_5_0_V", "interface" : "memory", "bitwidth" : 8, "direction" : "WRITEONLY"} , 
 	{ "Name" : "WEIGHT1_5_1_V", "interface" : "memory", "bitwidth" : 8, "direction" : "WRITEONLY"} , 
 	{ "Name" : "WEIGHT1_5_2_V", "interface" : "memory", "bitwidth" : 8, "direction" : "WRITEONLY"} , 
 	{ "Name" : "WEIGHT1_5_3_V", "interface" : "memory", "bitwidth" : 8, "direction" : "WRITEONLY"} , 
 	{ "Name" : "WEIGHT1_5_4_V", "interface" : "memory", "bitwidth" : 8, "direction" : "WRITEONLY"} , 
 	{ "Name" : "WEIGHT1_5_5_V", "interface" : "memory", "bitwidth" : 8, "direction" : "WRITEONLY"} , 
 	{ "Name" : "WEIGHT1_5_6_V", "interface" : "memory", "bitwidth" : 8, "direction" : "WRITEONLY"} , 
 	{ "Name" : "WEIGHT1_6_0_V", "interface" : "memory", "bitwidth" : 8, "direction" : "WRITEONLY"} , 
 	{ "Name" : "WEIGHT1_6_1_V", "interface" : "memory", "bitwidth" : 8, "direction" : "WRITEONLY"} , 
 	{ "Name" : "WEIGHT1_6_2_V", "interface" : "memory", "bitwidth" : 8, "direction" : "WRITEONLY"} , 
 	{ "Name" : "WEIGHT1_6_3_V", "interface" : "memory", "bitwidth" : 8, "direction" : "WRITEONLY"} , 
 	{ "Name" : "WEIGHT1_6_4_V", "interface" : "memory", "bitwidth" : 8, "direction" : "WRITEONLY"} , 
 	{ "Name" : "WEIGHT1_6_5_V", "interface" : "memory", "bitwidth" : 8, "direction" : "WRITEONLY"} , 
 	{ "Name" : "WEIGHT1_6_6_V", "interface" : "memory", "bitwidth" : 8, "direction" : "WRITEONLY"} , 
 	{ "Name" : "WEIGHT1_7_0_V", "interface" : "memory", "bitwidth" : 8, "direction" : "WRITEONLY"} , 
 	{ "Name" : "WEIGHT1_7_1_V", "interface" : "memory", "bitwidth" : 8, "direction" : "WRITEONLY"} , 
 	{ "Name" : "WEIGHT1_7_2_V", "interface" : "memory", "bitwidth" : 8, "direction" : "WRITEONLY"} , 
 	{ "Name" : "WEIGHT1_7_3_V", "interface" : "memory", "bitwidth" : 8, "direction" : "WRITEONLY"} , 
 	{ "Name" : "WEIGHT1_7_4_V", "interface" : "memory", "bitwidth" : 8, "direction" : "WRITEONLY"} , 
 	{ "Name" : "WEIGHT1_7_5_V", "interface" : "memory", "bitwidth" : 8, "direction" : "WRITEONLY"} , 
 	{ "Name" : "WEIGHT1_7_6_V", "interface" : "memory", "bitwidth" : 8, "direction" : "WRITEONLY"} , 
 	{ "Name" : "custom_k", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} ]}
# RTL Port declarations: 
set portNum 235
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ input_dma_W_TDATA sc_in sc_lv 56 signal 0 } 
	{ input_dma_W_TVALID sc_in sc_logic 1 invld 0 } 
	{ input_dma_W_TREADY sc_out sc_logic 1 inacc 1 } 
	{ input_dma_W_TLAST sc_in sc_logic 1 signal 1 } 
	{ WEIGHT1_0_0_V_address0 sc_out sc_lv 7 signal 2 } 
	{ WEIGHT1_0_0_V_ce0 sc_out sc_logic 1 signal 2 } 
	{ WEIGHT1_0_0_V_we0 sc_out sc_logic 1 signal 2 } 
	{ WEIGHT1_0_0_V_d0 sc_out sc_lv 8 signal 2 } 
	{ WEIGHT1_0_1_V_address0 sc_out sc_lv 7 signal 3 } 
	{ WEIGHT1_0_1_V_ce0 sc_out sc_logic 1 signal 3 } 
	{ WEIGHT1_0_1_V_we0 sc_out sc_logic 1 signal 3 } 
	{ WEIGHT1_0_1_V_d0 sc_out sc_lv 8 signal 3 } 
	{ WEIGHT1_0_2_V_address0 sc_out sc_lv 7 signal 4 } 
	{ WEIGHT1_0_2_V_ce0 sc_out sc_logic 1 signal 4 } 
	{ WEIGHT1_0_2_V_we0 sc_out sc_logic 1 signal 4 } 
	{ WEIGHT1_0_2_V_d0 sc_out sc_lv 8 signal 4 } 
	{ WEIGHT1_0_3_V_address0 sc_out sc_lv 7 signal 5 } 
	{ WEIGHT1_0_3_V_ce0 sc_out sc_logic 1 signal 5 } 
	{ WEIGHT1_0_3_V_we0 sc_out sc_logic 1 signal 5 } 
	{ WEIGHT1_0_3_V_d0 sc_out sc_lv 8 signal 5 } 
	{ WEIGHT1_0_4_V_address0 sc_out sc_lv 7 signal 6 } 
	{ WEIGHT1_0_4_V_ce0 sc_out sc_logic 1 signal 6 } 
	{ WEIGHT1_0_4_V_we0 sc_out sc_logic 1 signal 6 } 
	{ WEIGHT1_0_4_V_d0 sc_out sc_lv 8 signal 6 } 
	{ WEIGHT1_0_5_V_address0 sc_out sc_lv 7 signal 7 } 
	{ WEIGHT1_0_5_V_ce0 sc_out sc_logic 1 signal 7 } 
	{ WEIGHT1_0_5_V_we0 sc_out sc_logic 1 signal 7 } 
	{ WEIGHT1_0_5_V_d0 sc_out sc_lv 8 signal 7 } 
	{ WEIGHT1_0_6_V_address0 sc_out sc_lv 7 signal 8 } 
	{ WEIGHT1_0_6_V_ce0 sc_out sc_logic 1 signal 8 } 
	{ WEIGHT1_0_6_V_we0 sc_out sc_logic 1 signal 8 } 
	{ WEIGHT1_0_6_V_d0 sc_out sc_lv 8 signal 8 } 
	{ WEIGHT1_1_0_V_address0 sc_out sc_lv 7 signal 9 } 
	{ WEIGHT1_1_0_V_ce0 sc_out sc_logic 1 signal 9 } 
	{ WEIGHT1_1_0_V_we0 sc_out sc_logic 1 signal 9 } 
	{ WEIGHT1_1_0_V_d0 sc_out sc_lv 8 signal 9 } 
	{ WEIGHT1_1_1_V_address0 sc_out sc_lv 7 signal 10 } 
	{ WEIGHT1_1_1_V_ce0 sc_out sc_logic 1 signal 10 } 
	{ WEIGHT1_1_1_V_we0 sc_out sc_logic 1 signal 10 } 
	{ WEIGHT1_1_1_V_d0 sc_out sc_lv 8 signal 10 } 
	{ WEIGHT1_1_2_V_address0 sc_out sc_lv 7 signal 11 } 
	{ WEIGHT1_1_2_V_ce0 sc_out sc_logic 1 signal 11 } 
	{ WEIGHT1_1_2_V_we0 sc_out sc_logic 1 signal 11 } 
	{ WEIGHT1_1_2_V_d0 sc_out sc_lv 8 signal 11 } 
	{ WEIGHT1_1_3_V_address0 sc_out sc_lv 7 signal 12 } 
	{ WEIGHT1_1_3_V_ce0 sc_out sc_logic 1 signal 12 } 
	{ WEIGHT1_1_3_V_we0 sc_out sc_logic 1 signal 12 } 
	{ WEIGHT1_1_3_V_d0 sc_out sc_lv 8 signal 12 } 
	{ WEIGHT1_1_4_V_address0 sc_out sc_lv 7 signal 13 } 
	{ WEIGHT1_1_4_V_ce0 sc_out sc_logic 1 signal 13 } 
	{ WEIGHT1_1_4_V_we0 sc_out sc_logic 1 signal 13 } 
	{ WEIGHT1_1_4_V_d0 sc_out sc_lv 8 signal 13 } 
	{ WEIGHT1_1_5_V_address0 sc_out sc_lv 7 signal 14 } 
	{ WEIGHT1_1_5_V_ce0 sc_out sc_logic 1 signal 14 } 
	{ WEIGHT1_1_5_V_we0 sc_out sc_logic 1 signal 14 } 
	{ WEIGHT1_1_5_V_d0 sc_out sc_lv 8 signal 14 } 
	{ WEIGHT1_1_6_V_address0 sc_out sc_lv 7 signal 15 } 
	{ WEIGHT1_1_6_V_ce0 sc_out sc_logic 1 signal 15 } 
	{ WEIGHT1_1_6_V_we0 sc_out sc_logic 1 signal 15 } 
	{ WEIGHT1_1_6_V_d0 sc_out sc_lv 8 signal 15 } 
	{ WEIGHT1_2_0_V_address0 sc_out sc_lv 7 signal 16 } 
	{ WEIGHT1_2_0_V_ce0 sc_out sc_logic 1 signal 16 } 
	{ WEIGHT1_2_0_V_we0 sc_out sc_logic 1 signal 16 } 
	{ WEIGHT1_2_0_V_d0 sc_out sc_lv 8 signal 16 } 
	{ WEIGHT1_2_1_V_address0 sc_out sc_lv 7 signal 17 } 
	{ WEIGHT1_2_1_V_ce0 sc_out sc_logic 1 signal 17 } 
	{ WEIGHT1_2_1_V_we0 sc_out sc_logic 1 signal 17 } 
	{ WEIGHT1_2_1_V_d0 sc_out sc_lv 8 signal 17 } 
	{ WEIGHT1_2_2_V_address0 sc_out sc_lv 7 signal 18 } 
	{ WEIGHT1_2_2_V_ce0 sc_out sc_logic 1 signal 18 } 
	{ WEIGHT1_2_2_V_we0 sc_out sc_logic 1 signal 18 } 
	{ WEIGHT1_2_2_V_d0 sc_out sc_lv 8 signal 18 } 
	{ WEIGHT1_2_3_V_address0 sc_out sc_lv 7 signal 19 } 
	{ WEIGHT1_2_3_V_ce0 sc_out sc_logic 1 signal 19 } 
	{ WEIGHT1_2_3_V_we0 sc_out sc_logic 1 signal 19 } 
	{ WEIGHT1_2_3_V_d0 sc_out sc_lv 8 signal 19 } 
	{ WEIGHT1_2_4_V_address0 sc_out sc_lv 7 signal 20 } 
	{ WEIGHT1_2_4_V_ce0 sc_out sc_logic 1 signal 20 } 
	{ WEIGHT1_2_4_V_we0 sc_out sc_logic 1 signal 20 } 
	{ WEIGHT1_2_4_V_d0 sc_out sc_lv 8 signal 20 } 
	{ WEIGHT1_2_5_V_address0 sc_out sc_lv 7 signal 21 } 
	{ WEIGHT1_2_5_V_ce0 sc_out sc_logic 1 signal 21 } 
	{ WEIGHT1_2_5_V_we0 sc_out sc_logic 1 signal 21 } 
	{ WEIGHT1_2_5_V_d0 sc_out sc_lv 8 signal 21 } 
	{ WEIGHT1_2_6_V_address0 sc_out sc_lv 7 signal 22 } 
	{ WEIGHT1_2_6_V_ce0 sc_out sc_logic 1 signal 22 } 
	{ WEIGHT1_2_6_V_we0 sc_out sc_logic 1 signal 22 } 
	{ WEIGHT1_2_6_V_d0 sc_out sc_lv 8 signal 22 } 
	{ WEIGHT1_3_0_V_address0 sc_out sc_lv 7 signal 23 } 
	{ WEIGHT1_3_0_V_ce0 sc_out sc_logic 1 signal 23 } 
	{ WEIGHT1_3_0_V_we0 sc_out sc_logic 1 signal 23 } 
	{ WEIGHT1_3_0_V_d0 sc_out sc_lv 8 signal 23 } 
	{ WEIGHT1_3_1_V_address0 sc_out sc_lv 7 signal 24 } 
	{ WEIGHT1_3_1_V_ce0 sc_out sc_logic 1 signal 24 } 
	{ WEIGHT1_3_1_V_we0 sc_out sc_logic 1 signal 24 } 
	{ WEIGHT1_3_1_V_d0 sc_out sc_lv 8 signal 24 } 
	{ WEIGHT1_3_2_V_address0 sc_out sc_lv 7 signal 25 } 
	{ WEIGHT1_3_2_V_ce0 sc_out sc_logic 1 signal 25 } 
	{ WEIGHT1_3_2_V_we0 sc_out sc_logic 1 signal 25 } 
	{ WEIGHT1_3_2_V_d0 sc_out sc_lv 8 signal 25 } 
	{ WEIGHT1_3_3_V_address0 sc_out sc_lv 7 signal 26 } 
	{ WEIGHT1_3_3_V_ce0 sc_out sc_logic 1 signal 26 } 
	{ WEIGHT1_3_3_V_we0 sc_out sc_logic 1 signal 26 } 
	{ WEIGHT1_3_3_V_d0 sc_out sc_lv 8 signal 26 } 
	{ WEIGHT1_3_4_V_address0 sc_out sc_lv 7 signal 27 } 
	{ WEIGHT1_3_4_V_ce0 sc_out sc_logic 1 signal 27 } 
	{ WEIGHT1_3_4_V_we0 sc_out sc_logic 1 signal 27 } 
	{ WEIGHT1_3_4_V_d0 sc_out sc_lv 8 signal 27 } 
	{ WEIGHT1_3_5_V_address0 sc_out sc_lv 7 signal 28 } 
	{ WEIGHT1_3_5_V_ce0 sc_out sc_logic 1 signal 28 } 
	{ WEIGHT1_3_5_V_we0 sc_out sc_logic 1 signal 28 } 
	{ WEIGHT1_3_5_V_d0 sc_out sc_lv 8 signal 28 } 
	{ WEIGHT1_3_6_V_address0 sc_out sc_lv 7 signal 29 } 
	{ WEIGHT1_3_6_V_ce0 sc_out sc_logic 1 signal 29 } 
	{ WEIGHT1_3_6_V_we0 sc_out sc_logic 1 signal 29 } 
	{ WEIGHT1_3_6_V_d0 sc_out sc_lv 8 signal 29 } 
	{ WEIGHT1_4_0_V_address0 sc_out sc_lv 7 signal 30 } 
	{ WEIGHT1_4_0_V_ce0 sc_out sc_logic 1 signal 30 } 
	{ WEIGHT1_4_0_V_we0 sc_out sc_logic 1 signal 30 } 
	{ WEIGHT1_4_0_V_d0 sc_out sc_lv 8 signal 30 } 
	{ WEIGHT1_4_1_V_address0 sc_out sc_lv 7 signal 31 } 
	{ WEIGHT1_4_1_V_ce0 sc_out sc_logic 1 signal 31 } 
	{ WEIGHT1_4_1_V_we0 sc_out sc_logic 1 signal 31 } 
	{ WEIGHT1_4_1_V_d0 sc_out sc_lv 8 signal 31 } 
	{ WEIGHT1_4_2_V_address0 sc_out sc_lv 7 signal 32 } 
	{ WEIGHT1_4_2_V_ce0 sc_out sc_logic 1 signal 32 } 
	{ WEIGHT1_4_2_V_we0 sc_out sc_logic 1 signal 32 } 
	{ WEIGHT1_4_2_V_d0 sc_out sc_lv 8 signal 32 } 
	{ WEIGHT1_4_3_V_address0 sc_out sc_lv 7 signal 33 } 
	{ WEIGHT1_4_3_V_ce0 sc_out sc_logic 1 signal 33 } 
	{ WEIGHT1_4_3_V_we0 sc_out sc_logic 1 signal 33 } 
	{ WEIGHT1_4_3_V_d0 sc_out sc_lv 8 signal 33 } 
	{ WEIGHT1_4_4_V_address0 sc_out sc_lv 7 signal 34 } 
	{ WEIGHT1_4_4_V_ce0 sc_out sc_logic 1 signal 34 } 
	{ WEIGHT1_4_4_V_we0 sc_out sc_logic 1 signal 34 } 
	{ WEIGHT1_4_4_V_d0 sc_out sc_lv 8 signal 34 } 
	{ WEIGHT1_4_5_V_address0 sc_out sc_lv 7 signal 35 } 
	{ WEIGHT1_4_5_V_ce0 sc_out sc_logic 1 signal 35 } 
	{ WEIGHT1_4_5_V_we0 sc_out sc_logic 1 signal 35 } 
	{ WEIGHT1_4_5_V_d0 sc_out sc_lv 8 signal 35 } 
	{ WEIGHT1_4_6_V_address0 sc_out sc_lv 7 signal 36 } 
	{ WEIGHT1_4_6_V_ce0 sc_out sc_logic 1 signal 36 } 
	{ WEIGHT1_4_6_V_we0 sc_out sc_logic 1 signal 36 } 
	{ WEIGHT1_4_6_V_d0 sc_out sc_lv 8 signal 36 } 
	{ WEIGHT1_5_0_V_address0 sc_out sc_lv 7 signal 37 } 
	{ WEIGHT1_5_0_V_ce0 sc_out sc_logic 1 signal 37 } 
	{ WEIGHT1_5_0_V_we0 sc_out sc_logic 1 signal 37 } 
	{ WEIGHT1_5_0_V_d0 sc_out sc_lv 8 signal 37 } 
	{ WEIGHT1_5_1_V_address0 sc_out sc_lv 7 signal 38 } 
	{ WEIGHT1_5_1_V_ce0 sc_out sc_logic 1 signal 38 } 
	{ WEIGHT1_5_1_V_we0 sc_out sc_logic 1 signal 38 } 
	{ WEIGHT1_5_1_V_d0 sc_out sc_lv 8 signal 38 } 
	{ WEIGHT1_5_2_V_address0 sc_out sc_lv 7 signal 39 } 
	{ WEIGHT1_5_2_V_ce0 sc_out sc_logic 1 signal 39 } 
	{ WEIGHT1_5_2_V_we0 sc_out sc_logic 1 signal 39 } 
	{ WEIGHT1_5_2_V_d0 sc_out sc_lv 8 signal 39 } 
	{ WEIGHT1_5_3_V_address0 sc_out sc_lv 7 signal 40 } 
	{ WEIGHT1_5_3_V_ce0 sc_out sc_logic 1 signal 40 } 
	{ WEIGHT1_5_3_V_we0 sc_out sc_logic 1 signal 40 } 
	{ WEIGHT1_5_3_V_d0 sc_out sc_lv 8 signal 40 } 
	{ WEIGHT1_5_4_V_address0 sc_out sc_lv 7 signal 41 } 
	{ WEIGHT1_5_4_V_ce0 sc_out sc_logic 1 signal 41 } 
	{ WEIGHT1_5_4_V_we0 sc_out sc_logic 1 signal 41 } 
	{ WEIGHT1_5_4_V_d0 sc_out sc_lv 8 signal 41 } 
	{ WEIGHT1_5_5_V_address0 sc_out sc_lv 7 signal 42 } 
	{ WEIGHT1_5_5_V_ce0 sc_out sc_logic 1 signal 42 } 
	{ WEIGHT1_5_5_V_we0 sc_out sc_logic 1 signal 42 } 
	{ WEIGHT1_5_5_V_d0 sc_out sc_lv 8 signal 42 } 
	{ WEIGHT1_5_6_V_address0 sc_out sc_lv 7 signal 43 } 
	{ WEIGHT1_5_6_V_ce0 sc_out sc_logic 1 signal 43 } 
	{ WEIGHT1_5_6_V_we0 sc_out sc_logic 1 signal 43 } 
	{ WEIGHT1_5_6_V_d0 sc_out sc_lv 8 signal 43 } 
	{ WEIGHT1_6_0_V_address0 sc_out sc_lv 7 signal 44 } 
	{ WEIGHT1_6_0_V_ce0 sc_out sc_logic 1 signal 44 } 
	{ WEIGHT1_6_0_V_we0 sc_out sc_logic 1 signal 44 } 
	{ WEIGHT1_6_0_V_d0 sc_out sc_lv 8 signal 44 } 
	{ WEIGHT1_6_1_V_address0 sc_out sc_lv 7 signal 45 } 
	{ WEIGHT1_6_1_V_ce0 sc_out sc_logic 1 signal 45 } 
	{ WEIGHT1_6_1_V_we0 sc_out sc_logic 1 signal 45 } 
	{ WEIGHT1_6_1_V_d0 sc_out sc_lv 8 signal 45 } 
	{ WEIGHT1_6_2_V_address0 sc_out sc_lv 7 signal 46 } 
	{ WEIGHT1_6_2_V_ce0 sc_out sc_logic 1 signal 46 } 
	{ WEIGHT1_6_2_V_we0 sc_out sc_logic 1 signal 46 } 
	{ WEIGHT1_6_2_V_d0 sc_out sc_lv 8 signal 46 } 
	{ WEIGHT1_6_3_V_address0 sc_out sc_lv 7 signal 47 } 
	{ WEIGHT1_6_3_V_ce0 sc_out sc_logic 1 signal 47 } 
	{ WEIGHT1_6_3_V_we0 sc_out sc_logic 1 signal 47 } 
	{ WEIGHT1_6_3_V_d0 sc_out sc_lv 8 signal 47 } 
	{ WEIGHT1_6_4_V_address0 sc_out sc_lv 7 signal 48 } 
	{ WEIGHT1_6_4_V_ce0 sc_out sc_logic 1 signal 48 } 
	{ WEIGHT1_6_4_V_we0 sc_out sc_logic 1 signal 48 } 
	{ WEIGHT1_6_4_V_d0 sc_out sc_lv 8 signal 48 } 
	{ WEIGHT1_6_5_V_address0 sc_out sc_lv 7 signal 49 } 
	{ WEIGHT1_6_5_V_ce0 sc_out sc_logic 1 signal 49 } 
	{ WEIGHT1_6_5_V_we0 sc_out sc_logic 1 signal 49 } 
	{ WEIGHT1_6_5_V_d0 sc_out sc_lv 8 signal 49 } 
	{ WEIGHT1_6_6_V_address0 sc_out sc_lv 7 signal 50 } 
	{ WEIGHT1_6_6_V_ce0 sc_out sc_logic 1 signal 50 } 
	{ WEIGHT1_6_6_V_we0 sc_out sc_logic 1 signal 50 } 
	{ WEIGHT1_6_6_V_d0 sc_out sc_lv 8 signal 50 } 
	{ WEIGHT1_7_0_V_address0 sc_out sc_lv 7 signal 51 } 
	{ WEIGHT1_7_0_V_ce0 sc_out sc_logic 1 signal 51 } 
	{ WEIGHT1_7_0_V_we0 sc_out sc_logic 1 signal 51 } 
	{ WEIGHT1_7_0_V_d0 sc_out sc_lv 8 signal 51 } 
	{ WEIGHT1_7_1_V_address0 sc_out sc_lv 7 signal 52 } 
	{ WEIGHT1_7_1_V_ce0 sc_out sc_logic 1 signal 52 } 
	{ WEIGHT1_7_1_V_we0 sc_out sc_logic 1 signal 52 } 
	{ WEIGHT1_7_1_V_d0 sc_out sc_lv 8 signal 52 } 
	{ WEIGHT1_7_2_V_address0 sc_out sc_lv 7 signal 53 } 
	{ WEIGHT1_7_2_V_ce0 sc_out sc_logic 1 signal 53 } 
	{ WEIGHT1_7_2_V_we0 sc_out sc_logic 1 signal 53 } 
	{ WEIGHT1_7_2_V_d0 sc_out sc_lv 8 signal 53 } 
	{ WEIGHT1_7_3_V_address0 sc_out sc_lv 7 signal 54 } 
	{ WEIGHT1_7_3_V_ce0 sc_out sc_logic 1 signal 54 } 
	{ WEIGHT1_7_3_V_we0 sc_out sc_logic 1 signal 54 } 
	{ WEIGHT1_7_3_V_d0 sc_out sc_lv 8 signal 54 } 
	{ WEIGHT1_7_4_V_address0 sc_out sc_lv 7 signal 55 } 
	{ WEIGHT1_7_4_V_ce0 sc_out sc_logic 1 signal 55 } 
	{ WEIGHT1_7_4_V_we0 sc_out sc_logic 1 signal 55 } 
	{ WEIGHT1_7_4_V_d0 sc_out sc_lv 8 signal 55 } 
	{ WEIGHT1_7_5_V_address0 sc_out sc_lv 7 signal 56 } 
	{ WEIGHT1_7_5_V_ce0 sc_out sc_logic 1 signal 56 } 
	{ WEIGHT1_7_5_V_we0 sc_out sc_logic 1 signal 56 } 
	{ WEIGHT1_7_5_V_d0 sc_out sc_lv 8 signal 56 } 
	{ WEIGHT1_7_6_V_address0 sc_out sc_lv 7 signal 57 } 
	{ WEIGHT1_7_6_V_ce0 sc_out sc_logic 1 signal 57 } 
	{ WEIGHT1_7_6_V_we0 sc_out sc_logic 1 signal 57 } 
	{ WEIGHT1_7_6_V_d0 sc_out sc_lv 8 signal 57 } 
	{ custom_k sc_in sc_lv 32 signal 58 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "input_dma_W_TDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":56, "type": "signal", "bundle":{"name": "input_dma_W_V_data", "role": "default" }} , 
 	{ "name": "input_dma_W_TVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "invld", "bundle":{"name": "input_dma_W_V_data", "role": "default" }} , 
 	{ "name": "input_dma_W_TREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "inacc", "bundle":{"name": "input_dma_W_V_last", "role": "default" }} , 
 	{ "name": "input_dma_W_TLAST", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_dma_W_V_last", "role": "default" }} , 
 	{ "name": "WEIGHT1_0_0_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "WEIGHT1_0_0_V", "role": "address0" }} , 
 	{ "name": "WEIGHT1_0_0_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "WEIGHT1_0_0_V", "role": "ce0" }} , 
 	{ "name": "WEIGHT1_0_0_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "WEIGHT1_0_0_V", "role": "we0" }} , 
 	{ "name": "WEIGHT1_0_0_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "WEIGHT1_0_0_V", "role": "d0" }} , 
 	{ "name": "WEIGHT1_0_1_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "WEIGHT1_0_1_V", "role": "address0" }} , 
 	{ "name": "WEIGHT1_0_1_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "WEIGHT1_0_1_V", "role": "ce0" }} , 
 	{ "name": "WEIGHT1_0_1_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "WEIGHT1_0_1_V", "role": "we0" }} , 
 	{ "name": "WEIGHT1_0_1_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "WEIGHT1_0_1_V", "role": "d0" }} , 
 	{ "name": "WEIGHT1_0_2_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "WEIGHT1_0_2_V", "role": "address0" }} , 
 	{ "name": "WEIGHT1_0_2_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "WEIGHT1_0_2_V", "role": "ce0" }} , 
 	{ "name": "WEIGHT1_0_2_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "WEIGHT1_0_2_V", "role": "we0" }} , 
 	{ "name": "WEIGHT1_0_2_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "WEIGHT1_0_2_V", "role": "d0" }} , 
 	{ "name": "WEIGHT1_0_3_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "WEIGHT1_0_3_V", "role": "address0" }} , 
 	{ "name": "WEIGHT1_0_3_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "WEIGHT1_0_3_V", "role": "ce0" }} , 
 	{ "name": "WEIGHT1_0_3_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "WEIGHT1_0_3_V", "role": "we0" }} , 
 	{ "name": "WEIGHT1_0_3_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "WEIGHT1_0_3_V", "role": "d0" }} , 
 	{ "name": "WEIGHT1_0_4_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "WEIGHT1_0_4_V", "role": "address0" }} , 
 	{ "name": "WEIGHT1_0_4_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "WEIGHT1_0_4_V", "role": "ce0" }} , 
 	{ "name": "WEIGHT1_0_4_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "WEIGHT1_0_4_V", "role": "we0" }} , 
 	{ "name": "WEIGHT1_0_4_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "WEIGHT1_0_4_V", "role": "d0" }} , 
 	{ "name": "WEIGHT1_0_5_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "WEIGHT1_0_5_V", "role": "address0" }} , 
 	{ "name": "WEIGHT1_0_5_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "WEIGHT1_0_5_V", "role": "ce0" }} , 
 	{ "name": "WEIGHT1_0_5_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "WEIGHT1_0_5_V", "role": "we0" }} , 
 	{ "name": "WEIGHT1_0_5_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "WEIGHT1_0_5_V", "role": "d0" }} , 
 	{ "name": "WEIGHT1_0_6_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "WEIGHT1_0_6_V", "role": "address0" }} , 
 	{ "name": "WEIGHT1_0_6_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "WEIGHT1_0_6_V", "role": "ce0" }} , 
 	{ "name": "WEIGHT1_0_6_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "WEIGHT1_0_6_V", "role": "we0" }} , 
 	{ "name": "WEIGHT1_0_6_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "WEIGHT1_0_6_V", "role": "d0" }} , 
 	{ "name": "WEIGHT1_1_0_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "WEIGHT1_1_0_V", "role": "address0" }} , 
 	{ "name": "WEIGHT1_1_0_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "WEIGHT1_1_0_V", "role": "ce0" }} , 
 	{ "name": "WEIGHT1_1_0_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "WEIGHT1_1_0_V", "role": "we0" }} , 
 	{ "name": "WEIGHT1_1_0_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "WEIGHT1_1_0_V", "role": "d0" }} , 
 	{ "name": "WEIGHT1_1_1_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "WEIGHT1_1_1_V", "role": "address0" }} , 
 	{ "name": "WEIGHT1_1_1_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "WEIGHT1_1_1_V", "role": "ce0" }} , 
 	{ "name": "WEIGHT1_1_1_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "WEIGHT1_1_1_V", "role": "we0" }} , 
 	{ "name": "WEIGHT1_1_1_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "WEIGHT1_1_1_V", "role": "d0" }} , 
 	{ "name": "WEIGHT1_1_2_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "WEIGHT1_1_2_V", "role": "address0" }} , 
 	{ "name": "WEIGHT1_1_2_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "WEIGHT1_1_2_V", "role": "ce0" }} , 
 	{ "name": "WEIGHT1_1_2_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "WEIGHT1_1_2_V", "role": "we0" }} , 
 	{ "name": "WEIGHT1_1_2_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "WEIGHT1_1_2_V", "role": "d0" }} , 
 	{ "name": "WEIGHT1_1_3_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "WEIGHT1_1_3_V", "role": "address0" }} , 
 	{ "name": "WEIGHT1_1_3_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "WEIGHT1_1_3_V", "role": "ce0" }} , 
 	{ "name": "WEIGHT1_1_3_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "WEIGHT1_1_3_V", "role": "we0" }} , 
 	{ "name": "WEIGHT1_1_3_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "WEIGHT1_1_3_V", "role": "d0" }} , 
 	{ "name": "WEIGHT1_1_4_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "WEIGHT1_1_4_V", "role": "address0" }} , 
 	{ "name": "WEIGHT1_1_4_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "WEIGHT1_1_4_V", "role": "ce0" }} , 
 	{ "name": "WEIGHT1_1_4_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "WEIGHT1_1_4_V", "role": "we0" }} , 
 	{ "name": "WEIGHT1_1_4_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "WEIGHT1_1_4_V", "role": "d0" }} , 
 	{ "name": "WEIGHT1_1_5_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "WEIGHT1_1_5_V", "role": "address0" }} , 
 	{ "name": "WEIGHT1_1_5_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "WEIGHT1_1_5_V", "role": "ce0" }} , 
 	{ "name": "WEIGHT1_1_5_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "WEIGHT1_1_5_V", "role": "we0" }} , 
 	{ "name": "WEIGHT1_1_5_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "WEIGHT1_1_5_V", "role": "d0" }} , 
 	{ "name": "WEIGHT1_1_6_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "WEIGHT1_1_6_V", "role": "address0" }} , 
 	{ "name": "WEIGHT1_1_6_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "WEIGHT1_1_6_V", "role": "ce0" }} , 
 	{ "name": "WEIGHT1_1_6_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "WEIGHT1_1_6_V", "role": "we0" }} , 
 	{ "name": "WEIGHT1_1_6_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "WEIGHT1_1_6_V", "role": "d0" }} , 
 	{ "name": "WEIGHT1_2_0_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "WEIGHT1_2_0_V", "role": "address0" }} , 
 	{ "name": "WEIGHT1_2_0_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "WEIGHT1_2_0_V", "role": "ce0" }} , 
 	{ "name": "WEIGHT1_2_0_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "WEIGHT1_2_0_V", "role": "we0" }} , 
 	{ "name": "WEIGHT1_2_0_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "WEIGHT1_2_0_V", "role": "d0" }} , 
 	{ "name": "WEIGHT1_2_1_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "WEIGHT1_2_1_V", "role": "address0" }} , 
 	{ "name": "WEIGHT1_2_1_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "WEIGHT1_2_1_V", "role": "ce0" }} , 
 	{ "name": "WEIGHT1_2_1_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "WEIGHT1_2_1_V", "role": "we0" }} , 
 	{ "name": "WEIGHT1_2_1_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "WEIGHT1_2_1_V", "role": "d0" }} , 
 	{ "name": "WEIGHT1_2_2_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "WEIGHT1_2_2_V", "role": "address0" }} , 
 	{ "name": "WEIGHT1_2_2_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "WEIGHT1_2_2_V", "role": "ce0" }} , 
 	{ "name": "WEIGHT1_2_2_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "WEIGHT1_2_2_V", "role": "we0" }} , 
 	{ "name": "WEIGHT1_2_2_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "WEIGHT1_2_2_V", "role": "d0" }} , 
 	{ "name": "WEIGHT1_2_3_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "WEIGHT1_2_3_V", "role": "address0" }} , 
 	{ "name": "WEIGHT1_2_3_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "WEIGHT1_2_3_V", "role": "ce0" }} , 
 	{ "name": "WEIGHT1_2_3_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "WEIGHT1_2_3_V", "role": "we0" }} , 
 	{ "name": "WEIGHT1_2_3_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "WEIGHT1_2_3_V", "role": "d0" }} , 
 	{ "name": "WEIGHT1_2_4_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "WEIGHT1_2_4_V", "role": "address0" }} , 
 	{ "name": "WEIGHT1_2_4_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "WEIGHT1_2_4_V", "role": "ce0" }} , 
 	{ "name": "WEIGHT1_2_4_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "WEIGHT1_2_4_V", "role": "we0" }} , 
 	{ "name": "WEIGHT1_2_4_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "WEIGHT1_2_4_V", "role": "d0" }} , 
 	{ "name": "WEIGHT1_2_5_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "WEIGHT1_2_5_V", "role": "address0" }} , 
 	{ "name": "WEIGHT1_2_5_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "WEIGHT1_2_5_V", "role": "ce0" }} , 
 	{ "name": "WEIGHT1_2_5_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "WEIGHT1_2_5_V", "role": "we0" }} , 
 	{ "name": "WEIGHT1_2_5_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "WEIGHT1_2_5_V", "role": "d0" }} , 
 	{ "name": "WEIGHT1_2_6_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "WEIGHT1_2_6_V", "role": "address0" }} , 
 	{ "name": "WEIGHT1_2_6_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "WEIGHT1_2_6_V", "role": "ce0" }} , 
 	{ "name": "WEIGHT1_2_6_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "WEIGHT1_2_6_V", "role": "we0" }} , 
 	{ "name": "WEIGHT1_2_6_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "WEIGHT1_2_6_V", "role": "d0" }} , 
 	{ "name": "WEIGHT1_3_0_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "WEIGHT1_3_0_V", "role": "address0" }} , 
 	{ "name": "WEIGHT1_3_0_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "WEIGHT1_3_0_V", "role": "ce0" }} , 
 	{ "name": "WEIGHT1_3_0_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "WEIGHT1_3_0_V", "role": "we0" }} , 
 	{ "name": "WEIGHT1_3_0_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "WEIGHT1_3_0_V", "role": "d0" }} , 
 	{ "name": "WEIGHT1_3_1_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "WEIGHT1_3_1_V", "role": "address0" }} , 
 	{ "name": "WEIGHT1_3_1_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "WEIGHT1_3_1_V", "role": "ce0" }} , 
 	{ "name": "WEIGHT1_3_1_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "WEIGHT1_3_1_V", "role": "we0" }} , 
 	{ "name": "WEIGHT1_3_1_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "WEIGHT1_3_1_V", "role": "d0" }} , 
 	{ "name": "WEIGHT1_3_2_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "WEIGHT1_3_2_V", "role": "address0" }} , 
 	{ "name": "WEIGHT1_3_2_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "WEIGHT1_3_2_V", "role": "ce0" }} , 
 	{ "name": "WEIGHT1_3_2_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "WEIGHT1_3_2_V", "role": "we0" }} , 
 	{ "name": "WEIGHT1_3_2_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "WEIGHT1_3_2_V", "role": "d0" }} , 
 	{ "name": "WEIGHT1_3_3_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "WEIGHT1_3_3_V", "role": "address0" }} , 
 	{ "name": "WEIGHT1_3_3_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "WEIGHT1_3_3_V", "role": "ce0" }} , 
 	{ "name": "WEIGHT1_3_3_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "WEIGHT1_3_3_V", "role": "we0" }} , 
 	{ "name": "WEIGHT1_3_3_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "WEIGHT1_3_3_V", "role": "d0" }} , 
 	{ "name": "WEIGHT1_3_4_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "WEIGHT1_3_4_V", "role": "address0" }} , 
 	{ "name": "WEIGHT1_3_4_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "WEIGHT1_3_4_V", "role": "ce0" }} , 
 	{ "name": "WEIGHT1_3_4_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "WEIGHT1_3_4_V", "role": "we0" }} , 
 	{ "name": "WEIGHT1_3_4_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "WEIGHT1_3_4_V", "role": "d0" }} , 
 	{ "name": "WEIGHT1_3_5_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "WEIGHT1_3_5_V", "role": "address0" }} , 
 	{ "name": "WEIGHT1_3_5_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "WEIGHT1_3_5_V", "role": "ce0" }} , 
 	{ "name": "WEIGHT1_3_5_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "WEIGHT1_3_5_V", "role": "we0" }} , 
 	{ "name": "WEIGHT1_3_5_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "WEIGHT1_3_5_V", "role": "d0" }} , 
 	{ "name": "WEIGHT1_3_6_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "WEIGHT1_3_6_V", "role": "address0" }} , 
 	{ "name": "WEIGHT1_3_6_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "WEIGHT1_3_6_V", "role": "ce0" }} , 
 	{ "name": "WEIGHT1_3_6_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "WEIGHT1_3_6_V", "role": "we0" }} , 
 	{ "name": "WEIGHT1_3_6_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "WEIGHT1_3_6_V", "role": "d0" }} , 
 	{ "name": "WEIGHT1_4_0_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "WEIGHT1_4_0_V", "role": "address0" }} , 
 	{ "name": "WEIGHT1_4_0_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "WEIGHT1_4_0_V", "role": "ce0" }} , 
 	{ "name": "WEIGHT1_4_0_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "WEIGHT1_4_0_V", "role": "we0" }} , 
 	{ "name": "WEIGHT1_4_0_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "WEIGHT1_4_0_V", "role": "d0" }} , 
 	{ "name": "WEIGHT1_4_1_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "WEIGHT1_4_1_V", "role": "address0" }} , 
 	{ "name": "WEIGHT1_4_1_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "WEIGHT1_4_1_V", "role": "ce0" }} , 
 	{ "name": "WEIGHT1_4_1_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "WEIGHT1_4_1_V", "role": "we0" }} , 
 	{ "name": "WEIGHT1_4_1_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "WEIGHT1_4_1_V", "role": "d0" }} , 
 	{ "name": "WEIGHT1_4_2_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "WEIGHT1_4_2_V", "role": "address0" }} , 
 	{ "name": "WEIGHT1_4_2_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "WEIGHT1_4_2_V", "role": "ce0" }} , 
 	{ "name": "WEIGHT1_4_2_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "WEIGHT1_4_2_V", "role": "we0" }} , 
 	{ "name": "WEIGHT1_4_2_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "WEIGHT1_4_2_V", "role": "d0" }} , 
 	{ "name": "WEIGHT1_4_3_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "WEIGHT1_4_3_V", "role": "address0" }} , 
 	{ "name": "WEIGHT1_4_3_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "WEIGHT1_4_3_V", "role": "ce0" }} , 
 	{ "name": "WEIGHT1_4_3_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "WEIGHT1_4_3_V", "role": "we0" }} , 
 	{ "name": "WEIGHT1_4_3_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "WEIGHT1_4_3_V", "role": "d0" }} , 
 	{ "name": "WEIGHT1_4_4_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "WEIGHT1_4_4_V", "role": "address0" }} , 
 	{ "name": "WEIGHT1_4_4_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "WEIGHT1_4_4_V", "role": "ce0" }} , 
 	{ "name": "WEIGHT1_4_4_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "WEIGHT1_4_4_V", "role": "we0" }} , 
 	{ "name": "WEIGHT1_4_4_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "WEIGHT1_4_4_V", "role": "d0" }} , 
 	{ "name": "WEIGHT1_4_5_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "WEIGHT1_4_5_V", "role": "address0" }} , 
 	{ "name": "WEIGHT1_4_5_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "WEIGHT1_4_5_V", "role": "ce0" }} , 
 	{ "name": "WEIGHT1_4_5_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "WEIGHT1_4_5_V", "role": "we0" }} , 
 	{ "name": "WEIGHT1_4_5_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "WEIGHT1_4_5_V", "role": "d0" }} , 
 	{ "name": "WEIGHT1_4_6_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "WEIGHT1_4_6_V", "role": "address0" }} , 
 	{ "name": "WEIGHT1_4_6_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "WEIGHT1_4_6_V", "role": "ce0" }} , 
 	{ "name": "WEIGHT1_4_6_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "WEIGHT1_4_6_V", "role": "we0" }} , 
 	{ "name": "WEIGHT1_4_6_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "WEIGHT1_4_6_V", "role": "d0" }} , 
 	{ "name": "WEIGHT1_5_0_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "WEIGHT1_5_0_V", "role": "address0" }} , 
 	{ "name": "WEIGHT1_5_0_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "WEIGHT1_5_0_V", "role": "ce0" }} , 
 	{ "name": "WEIGHT1_5_0_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "WEIGHT1_5_0_V", "role": "we0" }} , 
 	{ "name": "WEIGHT1_5_0_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "WEIGHT1_5_0_V", "role": "d0" }} , 
 	{ "name": "WEIGHT1_5_1_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "WEIGHT1_5_1_V", "role": "address0" }} , 
 	{ "name": "WEIGHT1_5_1_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "WEIGHT1_5_1_V", "role": "ce0" }} , 
 	{ "name": "WEIGHT1_5_1_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "WEIGHT1_5_1_V", "role": "we0" }} , 
 	{ "name": "WEIGHT1_5_1_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "WEIGHT1_5_1_V", "role": "d0" }} , 
 	{ "name": "WEIGHT1_5_2_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "WEIGHT1_5_2_V", "role": "address0" }} , 
 	{ "name": "WEIGHT1_5_2_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "WEIGHT1_5_2_V", "role": "ce0" }} , 
 	{ "name": "WEIGHT1_5_2_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "WEIGHT1_5_2_V", "role": "we0" }} , 
 	{ "name": "WEIGHT1_5_2_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "WEIGHT1_5_2_V", "role": "d0" }} , 
 	{ "name": "WEIGHT1_5_3_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "WEIGHT1_5_3_V", "role": "address0" }} , 
 	{ "name": "WEIGHT1_5_3_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "WEIGHT1_5_3_V", "role": "ce0" }} , 
 	{ "name": "WEIGHT1_5_3_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "WEIGHT1_5_3_V", "role": "we0" }} , 
 	{ "name": "WEIGHT1_5_3_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "WEIGHT1_5_3_V", "role": "d0" }} , 
 	{ "name": "WEIGHT1_5_4_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "WEIGHT1_5_4_V", "role": "address0" }} , 
 	{ "name": "WEIGHT1_5_4_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "WEIGHT1_5_4_V", "role": "ce0" }} , 
 	{ "name": "WEIGHT1_5_4_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "WEIGHT1_5_4_V", "role": "we0" }} , 
 	{ "name": "WEIGHT1_5_4_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "WEIGHT1_5_4_V", "role": "d0" }} , 
 	{ "name": "WEIGHT1_5_5_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "WEIGHT1_5_5_V", "role": "address0" }} , 
 	{ "name": "WEIGHT1_5_5_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "WEIGHT1_5_5_V", "role": "ce0" }} , 
 	{ "name": "WEIGHT1_5_5_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "WEIGHT1_5_5_V", "role": "we0" }} , 
 	{ "name": "WEIGHT1_5_5_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "WEIGHT1_5_5_V", "role": "d0" }} , 
 	{ "name": "WEIGHT1_5_6_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "WEIGHT1_5_6_V", "role": "address0" }} , 
 	{ "name": "WEIGHT1_5_6_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "WEIGHT1_5_6_V", "role": "ce0" }} , 
 	{ "name": "WEIGHT1_5_6_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "WEIGHT1_5_6_V", "role": "we0" }} , 
 	{ "name": "WEIGHT1_5_6_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "WEIGHT1_5_6_V", "role": "d0" }} , 
 	{ "name": "WEIGHT1_6_0_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "WEIGHT1_6_0_V", "role": "address0" }} , 
 	{ "name": "WEIGHT1_6_0_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "WEIGHT1_6_0_V", "role": "ce0" }} , 
 	{ "name": "WEIGHT1_6_0_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "WEIGHT1_6_0_V", "role": "we0" }} , 
 	{ "name": "WEIGHT1_6_0_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "WEIGHT1_6_0_V", "role": "d0" }} , 
 	{ "name": "WEIGHT1_6_1_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "WEIGHT1_6_1_V", "role": "address0" }} , 
 	{ "name": "WEIGHT1_6_1_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "WEIGHT1_6_1_V", "role": "ce0" }} , 
 	{ "name": "WEIGHT1_6_1_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "WEIGHT1_6_1_V", "role": "we0" }} , 
 	{ "name": "WEIGHT1_6_1_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "WEIGHT1_6_1_V", "role": "d0" }} , 
 	{ "name": "WEIGHT1_6_2_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "WEIGHT1_6_2_V", "role": "address0" }} , 
 	{ "name": "WEIGHT1_6_2_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "WEIGHT1_6_2_V", "role": "ce0" }} , 
 	{ "name": "WEIGHT1_6_2_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "WEIGHT1_6_2_V", "role": "we0" }} , 
 	{ "name": "WEIGHT1_6_2_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "WEIGHT1_6_2_V", "role": "d0" }} , 
 	{ "name": "WEIGHT1_6_3_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "WEIGHT1_6_3_V", "role": "address0" }} , 
 	{ "name": "WEIGHT1_6_3_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "WEIGHT1_6_3_V", "role": "ce0" }} , 
 	{ "name": "WEIGHT1_6_3_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "WEIGHT1_6_3_V", "role": "we0" }} , 
 	{ "name": "WEIGHT1_6_3_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "WEIGHT1_6_3_V", "role": "d0" }} , 
 	{ "name": "WEIGHT1_6_4_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "WEIGHT1_6_4_V", "role": "address0" }} , 
 	{ "name": "WEIGHT1_6_4_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "WEIGHT1_6_4_V", "role": "ce0" }} , 
 	{ "name": "WEIGHT1_6_4_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "WEIGHT1_6_4_V", "role": "we0" }} , 
 	{ "name": "WEIGHT1_6_4_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "WEIGHT1_6_4_V", "role": "d0" }} , 
 	{ "name": "WEIGHT1_6_5_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "WEIGHT1_6_5_V", "role": "address0" }} , 
 	{ "name": "WEIGHT1_6_5_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "WEIGHT1_6_5_V", "role": "ce0" }} , 
 	{ "name": "WEIGHT1_6_5_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "WEIGHT1_6_5_V", "role": "we0" }} , 
 	{ "name": "WEIGHT1_6_5_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "WEIGHT1_6_5_V", "role": "d0" }} , 
 	{ "name": "WEIGHT1_6_6_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "WEIGHT1_6_6_V", "role": "address0" }} , 
 	{ "name": "WEIGHT1_6_6_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "WEIGHT1_6_6_V", "role": "ce0" }} , 
 	{ "name": "WEIGHT1_6_6_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "WEIGHT1_6_6_V", "role": "we0" }} , 
 	{ "name": "WEIGHT1_6_6_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "WEIGHT1_6_6_V", "role": "d0" }} , 
 	{ "name": "WEIGHT1_7_0_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "WEIGHT1_7_0_V", "role": "address0" }} , 
 	{ "name": "WEIGHT1_7_0_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "WEIGHT1_7_0_V", "role": "ce0" }} , 
 	{ "name": "WEIGHT1_7_0_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "WEIGHT1_7_0_V", "role": "we0" }} , 
 	{ "name": "WEIGHT1_7_0_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "WEIGHT1_7_0_V", "role": "d0" }} , 
 	{ "name": "WEIGHT1_7_1_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "WEIGHT1_7_1_V", "role": "address0" }} , 
 	{ "name": "WEIGHT1_7_1_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "WEIGHT1_7_1_V", "role": "ce0" }} , 
 	{ "name": "WEIGHT1_7_1_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "WEIGHT1_7_1_V", "role": "we0" }} , 
 	{ "name": "WEIGHT1_7_1_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "WEIGHT1_7_1_V", "role": "d0" }} , 
 	{ "name": "WEIGHT1_7_2_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "WEIGHT1_7_2_V", "role": "address0" }} , 
 	{ "name": "WEIGHT1_7_2_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "WEIGHT1_7_2_V", "role": "ce0" }} , 
 	{ "name": "WEIGHT1_7_2_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "WEIGHT1_7_2_V", "role": "we0" }} , 
 	{ "name": "WEIGHT1_7_2_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "WEIGHT1_7_2_V", "role": "d0" }} , 
 	{ "name": "WEIGHT1_7_3_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "WEIGHT1_7_3_V", "role": "address0" }} , 
 	{ "name": "WEIGHT1_7_3_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "WEIGHT1_7_3_V", "role": "ce0" }} , 
 	{ "name": "WEIGHT1_7_3_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "WEIGHT1_7_3_V", "role": "we0" }} , 
 	{ "name": "WEIGHT1_7_3_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "WEIGHT1_7_3_V", "role": "d0" }} , 
 	{ "name": "WEIGHT1_7_4_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "WEIGHT1_7_4_V", "role": "address0" }} , 
 	{ "name": "WEIGHT1_7_4_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "WEIGHT1_7_4_V", "role": "ce0" }} , 
 	{ "name": "WEIGHT1_7_4_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "WEIGHT1_7_4_V", "role": "we0" }} , 
 	{ "name": "WEIGHT1_7_4_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "WEIGHT1_7_4_V", "role": "d0" }} , 
 	{ "name": "WEIGHT1_7_5_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "WEIGHT1_7_5_V", "role": "address0" }} , 
 	{ "name": "WEIGHT1_7_5_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "WEIGHT1_7_5_V", "role": "ce0" }} , 
 	{ "name": "WEIGHT1_7_5_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "WEIGHT1_7_5_V", "role": "we0" }} , 
 	{ "name": "WEIGHT1_7_5_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "WEIGHT1_7_5_V", "role": "d0" }} , 
 	{ "name": "WEIGHT1_7_6_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "WEIGHT1_7_6_V", "role": "address0" }} , 
 	{ "name": "WEIGHT1_7_6_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "WEIGHT1_7_6_V", "role": "ce0" }} , 
 	{ "name": "WEIGHT1_7_6_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "WEIGHT1_7_6_V", "role": "we0" }} , 
 	{ "name": "WEIGHT1_7_6_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "WEIGHT1_7_6_V", "role": "d0" }} , 
 	{ "name": "custom_k", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "custom_k", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1"],
		"CDFG" : "LOAD_WEIGHT_DMA",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"FunctionPipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"VariableLatency" : "1",
		"Port" : [
			{"Name" : "input_dma_W_V_data", "Type" : "Axis", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "input_dma_W_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "input_dma_W_V_last", "Type" : "Axis", "Direction" : "I"},
			{"Name" : "WEIGHT1_0_0_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "WEIGHT1_0_1_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "WEIGHT1_0_2_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "WEIGHT1_0_3_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "WEIGHT1_0_4_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "WEIGHT1_0_5_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "WEIGHT1_0_6_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "WEIGHT1_1_0_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "WEIGHT1_1_1_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "WEIGHT1_1_2_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "WEIGHT1_1_3_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "WEIGHT1_1_4_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "WEIGHT1_1_5_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "WEIGHT1_1_6_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "WEIGHT1_2_0_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "WEIGHT1_2_1_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "WEIGHT1_2_2_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "WEIGHT1_2_3_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "WEIGHT1_2_4_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "WEIGHT1_2_5_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "WEIGHT1_2_6_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "WEIGHT1_3_0_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "WEIGHT1_3_1_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "WEIGHT1_3_2_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "WEIGHT1_3_3_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "WEIGHT1_3_4_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "WEIGHT1_3_5_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "WEIGHT1_3_6_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "WEIGHT1_4_0_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "WEIGHT1_4_1_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "WEIGHT1_4_2_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "WEIGHT1_4_3_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "WEIGHT1_4_4_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "WEIGHT1_4_5_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "WEIGHT1_4_6_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "WEIGHT1_5_0_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "WEIGHT1_5_1_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "WEIGHT1_5_2_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "WEIGHT1_5_3_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "WEIGHT1_5_4_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "WEIGHT1_5_5_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "WEIGHT1_5_6_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "WEIGHT1_6_0_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "WEIGHT1_6_1_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "WEIGHT1_6_2_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "WEIGHT1_6_3_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "WEIGHT1_6_4_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "WEIGHT1_6_5_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "WEIGHT1_6_6_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "WEIGHT1_7_0_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "WEIGHT1_7_1_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "WEIGHT1_7_2_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "WEIGHT1_7_3_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "WEIGHT1_7_4_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "WEIGHT1_7_5_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "WEIGHT1_7_6_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "custom_k", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.top_mac_muladd_5nbkb_U1", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	LOAD_WEIGHT_DMA {
		input_dma_W_V_data {Type I LastRead 1 FirstWrite -1}
		input_dma_W_V_last {Type I LastRead 1 FirstWrite -1}
		WEIGHT1_0_0_V {Type O LastRead -1 FirstWrite 1}
		WEIGHT1_0_1_V {Type O LastRead -1 FirstWrite 1}
		WEIGHT1_0_2_V {Type O LastRead -1 FirstWrite 1}
		WEIGHT1_0_3_V {Type O LastRead -1 FirstWrite 1}
		WEIGHT1_0_4_V {Type O LastRead -1 FirstWrite 1}
		WEIGHT1_0_5_V {Type O LastRead -1 FirstWrite 1}
		WEIGHT1_0_6_V {Type O LastRead -1 FirstWrite 1}
		WEIGHT1_1_0_V {Type O LastRead -1 FirstWrite 1}
		WEIGHT1_1_1_V {Type O LastRead -1 FirstWrite 1}
		WEIGHT1_1_2_V {Type O LastRead -1 FirstWrite 1}
		WEIGHT1_1_3_V {Type O LastRead -1 FirstWrite 1}
		WEIGHT1_1_4_V {Type O LastRead -1 FirstWrite 1}
		WEIGHT1_1_5_V {Type O LastRead -1 FirstWrite 1}
		WEIGHT1_1_6_V {Type O LastRead -1 FirstWrite 1}
		WEIGHT1_2_0_V {Type O LastRead -1 FirstWrite 1}
		WEIGHT1_2_1_V {Type O LastRead -1 FirstWrite 1}
		WEIGHT1_2_2_V {Type O LastRead -1 FirstWrite 1}
		WEIGHT1_2_3_V {Type O LastRead -1 FirstWrite 1}
		WEIGHT1_2_4_V {Type O LastRead -1 FirstWrite 1}
		WEIGHT1_2_5_V {Type O LastRead -1 FirstWrite 1}
		WEIGHT1_2_6_V {Type O LastRead -1 FirstWrite 1}
		WEIGHT1_3_0_V {Type O LastRead -1 FirstWrite 1}
		WEIGHT1_3_1_V {Type O LastRead -1 FirstWrite 1}
		WEIGHT1_3_2_V {Type O LastRead -1 FirstWrite 1}
		WEIGHT1_3_3_V {Type O LastRead -1 FirstWrite 1}
		WEIGHT1_3_4_V {Type O LastRead -1 FirstWrite 1}
		WEIGHT1_3_5_V {Type O LastRead -1 FirstWrite 1}
		WEIGHT1_3_6_V {Type O LastRead -1 FirstWrite 1}
		WEIGHT1_4_0_V {Type O LastRead -1 FirstWrite 1}
		WEIGHT1_4_1_V {Type O LastRead -1 FirstWrite 1}
		WEIGHT1_4_2_V {Type O LastRead -1 FirstWrite 1}
		WEIGHT1_4_3_V {Type O LastRead -1 FirstWrite 1}
		WEIGHT1_4_4_V {Type O LastRead -1 FirstWrite 1}
		WEIGHT1_4_5_V {Type O LastRead -1 FirstWrite 1}
		WEIGHT1_4_6_V {Type O LastRead -1 FirstWrite 1}
		WEIGHT1_5_0_V {Type O LastRead -1 FirstWrite 1}
		WEIGHT1_5_1_V {Type O LastRead -1 FirstWrite 1}
		WEIGHT1_5_2_V {Type O LastRead -1 FirstWrite 1}
		WEIGHT1_5_3_V {Type O LastRead -1 FirstWrite 1}
		WEIGHT1_5_4_V {Type O LastRead -1 FirstWrite 1}
		WEIGHT1_5_5_V {Type O LastRead -1 FirstWrite 1}
		WEIGHT1_5_6_V {Type O LastRead -1 FirstWrite 1}
		WEIGHT1_6_0_V {Type O LastRead -1 FirstWrite 1}
		WEIGHT1_6_1_V {Type O LastRead -1 FirstWrite 1}
		WEIGHT1_6_2_V {Type O LastRead -1 FirstWrite 1}
		WEIGHT1_6_3_V {Type O LastRead -1 FirstWrite 1}
		WEIGHT1_6_4_V {Type O LastRead -1 FirstWrite 1}
		WEIGHT1_6_5_V {Type O LastRead -1 FirstWrite 1}
		WEIGHT1_6_6_V {Type O LastRead -1 FirstWrite 1}
		WEIGHT1_7_0_V {Type O LastRead -1 FirstWrite 1}
		WEIGHT1_7_1_V {Type O LastRead -1 FirstWrite 1}
		WEIGHT1_7_2_V {Type O LastRead -1 FirstWrite 1}
		WEIGHT1_7_3_V {Type O LastRead -1 FirstWrite 1}
		WEIGHT1_7_4_V {Type O LastRead -1 FirstWrite 1}
		WEIGHT1_7_5_V {Type O LastRead -1 FirstWrite 1}
		WEIGHT1_7_6_V {Type O LastRead -1 FirstWrite 1}
		custom_k {Type I LastRead 0 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "254", "Max" : "254"}
	, {"Name" : "Interval", "Min" : "254", "Max" : "254"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	input_dma_W_V_data { axis {  { input_dma_W_TDATA in_data 0 56 }  { input_dma_W_TVALID in_vld 0 1 } } }
	input_dma_W_V_last { axis {  { input_dma_W_TREADY in_acc 1 1 }  { input_dma_W_TLAST in_data 0 1 } } }
	WEIGHT1_0_0_V { ap_memory {  { WEIGHT1_0_0_V_address0 mem_address 1 7 }  { WEIGHT1_0_0_V_ce0 mem_ce 1 1 }  { WEIGHT1_0_0_V_we0 mem_we 1 1 }  { WEIGHT1_0_0_V_d0 mem_din 1 8 } } }
	WEIGHT1_0_1_V { ap_memory {  { WEIGHT1_0_1_V_address0 mem_address 1 7 }  { WEIGHT1_0_1_V_ce0 mem_ce 1 1 }  { WEIGHT1_0_1_V_we0 mem_we 1 1 }  { WEIGHT1_0_1_V_d0 mem_din 1 8 } } }
	WEIGHT1_0_2_V { ap_memory {  { WEIGHT1_0_2_V_address0 mem_address 1 7 }  { WEIGHT1_0_2_V_ce0 mem_ce 1 1 }  { WEIGHT1_0_2_V_we0 mem_we 1 1 }  { WEIGHT1_0_2_V_d0 mem_din 1 8 } } }
	WEIGHT1_0_3_V { ap_memory {  { WEIGHT1_0_3_V_address0 mem_address 1 7 }  { WEIGHT1_0_3_V_ce0 mem_ce 1 1 }  { WEIGHT1_0_3_V_we0 mem_we 1 1 }  { WEIGHT1_0_3_V_d0 mem_din 1 8 } } }
	WEIGHT1_0_4_V { ap_memory {  { WEIGHT1_0_4_V_address0 mem_address 1 7 }  { WEIGHT1_0_4_V_ce0 mem_ce 1 1 }  { WEIGHT1_0_4_V_we0 mem_we 1 1 }  { WEIGHT1_0_4_V_d0 mem_din 1 8 } } }
	WEIGHT1_0_5_V { ap_memory {  { WEIGHT1_0_5_V_address0 mem_address 1 7 }  { WEIGHT1_0_5_V_ce0 mem_ce 1 1 }  { WEIGHT1_0_5_V_we0 mem_we 1 1 }  { WEIGHT1_0_5_V_d0 mem_din 1 8 } } }
	WEIGHT1_0_6_V { ap_memory {  { WEIGHT1_0_6_V_address0 mem_address 1 7 }  { WEIGHT1_0_6_V_ce0 mem_ce 1 1 }  { WEIGHT1_0_6_V_we0 mem_we 1 1 }  { WEIGHT1_0_6_V_d0 mem_din 1 8 } } }
	WEIGHT1_1_0_V { ap_memory {  { WEIGHT1_1_0_V_address0 mem_address 1 7 }  { WEIGHT1_1_0_V_ce0 mem_ce 1 1 }  { WEIGHT1_1_0_V_we0 mem_we 1 1 }  { WEIGHT1_1_0_V_d0 mem_din 1 8 } } }
	WEIGHT1_1_1_V { ap_memory {  { WEIGHT1_1_1_V_address0 mem_address 1 7 }  { WEIGHT1_1_1_V_ce0 mem_ce 1 1 }  { WEIGHT1_1_1_V_we0 mem_we 1 1 }  { WEIGHT1_1_1_V_d0 mem_din 1 8 } } }
	WEIGHT1_1_2_V { ap_memory {  { WEIGHT1_1_2_V_address0 mem_address 1 7 }  { WEIGHT1_1_2_V_ce0 mem_ce 1 1 }  { WEIGHT1_1_2_V_we0 mem_we 1 1 }  { WEIGHT1_1_2_V_d0 mem_din 1 8 } } }
	WEIGHT1_1_3_V { ap_memory {  { WEIGHT1_1_3_V_address0 mem_address 1 7 }  { WEIGHT1_1_3_V_ce0 mem_ce 1 1 }  { WEIGHT1_1_3_V_we0 mem_we 1 1 }  { WEIGHT1_1_3_V_d0 mem_din 1 8 } } }
	WEIGHT1_1_4_V { ap_memory {  { WEIGHT1_1_4_V_address0 mem_address 1 7 }  { WEIGHT1_1_4_V_ce0 mem_ce 1 1 }  { WEIGHT1_1_4_V_we0 mem_we 1 1 }  { WEIGHT1_1_4_V_d0 mem_din 1 8 } } }
	WEIGHT1_1_5_V { ap_memory {  { WEIGHT1_1_5_V_address0 mem_address 1 7 }  { WEIGHT1_1_5_V_ce0 mem_ce 1 1 }  { WEIGHT1_1_5_V_we0 mem_we 1 1 }  { WEIGHT1_1_5_V_d0 mem_din 1 8 } } }
	WEIGHT1_1_6_V { ap_memory {  { WEIGHT1_1_6_V_address0 mem_address 1 7 }  { WEIGHT1_1_6_V_ce0 mem_ce 1 1 }  { WEIGHT1_1_6_V_we0 mem_we 1 1 }  { WEIGHT1_1_6_V_d0 mem_din 1 8 } } }
	WEIGHT1_2_0_V { ap_memory {  { WEIGHT1_2_0_V_address0 mem_address 1 7 }  { WEIGHT1_2_0_V_ce0 mem_ce 1 1 }  { WEIGHT1_2_0_V_we0 mem_we 1 1 }  { WEIGHT1_2_0_V_d0 mem_din 1 8 } } }
	WEIGHT1_2_1_V { ap_memory {  { WEIGHT1_2_1_V_address0 mem_address 1 7 }  { WEIGHT1_2_1_V_ce0 mem_ce 1 1 }  { WEIGHT1_2_1_V_we0 mem_we 1 1 }  { WEIGHT1_2_1_V_d0 mem_din 1 8 } } }
	WEIGHT1_2_2_V { ap_memory {  { WEIGHT1_2_2_V_address0 mem_address 1 7 }  { WEIGHT1_2_2_V_ce0 mem_ce 1 1 }  { WEIGHT1_2_2_V_we0 mem_we 1 1 }  { WEIGHT1_2_2_V_d0 mem_din 1 8 } } }
	WEIGHT1_2_3_V { ap_memory {  { WEIGHT1_2_3_V_address0 mem_address 1 7 }  { WEIGHT1_2_3_V_ce0 mem_ce 1 1 }  { WEIGHT1_2_3_V_we0 mem_we 1 1 }  { WEIGHT1_2_3_V_d0 mem_din 1 8 } } }
	WEIGHT1_2_4_V { ap_memory {  { WEIGHT1_2_4_V_address0 mem_address 1 7 }  { WEIGHT1_2_4_V_ce0 mem_ce 1 1 }  { WEIGHT1_2_4_V_we0 mem_we 1 1 }  { WEIGHT1_2_4_V_d0 mem_din 1 8 } } }
	WEIGHT1_2_5_V { ap_memory {  { WEIGHT1_2_5_V_address0 mem_address 1 7 }  { WEIGHT1_2_5_V_ce0 mem_ce 1 1 }  { WEIGHT1_2_5_V_we0 mem_we 1 1 }  { WEIGHT1_2_5_V_d0 mem_din 1 8 } } }
	WEIGHT1_2_6_V { ap_memory {  { WEIGHT1_2_6_V_address0 mem_address 1 7 }  { WEIGHT1_2_6_V_ce0 mem_ce 1 1 }  { WEIGHT1_2_6_V_we0 mem_we 1 1 }  { WEIGHT1_2_6_V_d0 mem_din 1 8 } } }
	WEIGHT1_3_0_V { ap_memory {  { WEIGHT1_3_0_V_address0 mem_address 1 7 }  { WEIGHT1_3_0_V_ce0 mem_ce 1 1 }  { WEIGHT1_3_0_V_we0 mem_we 1 1 }  { WEIGHT1_3_0_V_d0 mem_din 1 8 } } }
	WEIGHT1_3_1_V { ap_memory {  { WEIGHT1_3_1_V_address0 mem_address 1 7 }  { WEIGHT1_3_1_V_ce0 mem_ce 1 1 }  { WEIGHT1_3_1_V_we0 mem_we 1 1 }  { WEIGHT1_3_1_V_d0 mem_din 1 8 } } }
	WEIGHT1_3_2_V { ap_memory {  { WEIGHT1_3_2_V_address0 mem_address 1 7 }  { WEIGHT1_3_2_V_ce0 mem_ce 1 1 }  { WEIGHT1_3_2_V_we0 mem_we 1 1 }  { WEIGHT1_3_2_V_d0 mem_din 1 8 } } }
	WEIGHT1_3_3_V { ap_memory {  { WEIGHT1_3_3_V_address0 mem_address 1 7 }  { WEIGHT1_3_3_V_ce0 mem_ce 1 1 }  { WEIGHT1_3_3_V_we0 mem_we 1 1 }  { WEIGHT1_3_3_V_d0 mem_din 1 8 } } }
	WEIGHT1_3_4_V { ap_memory {  { WEIGHT1_3_4_V_address0 mem_address 1 7 }  { WEIGHT1_3_4_V_ce0 mem_ce 1 1 }  { WEIGHT1_3_4_V_we0 mem_we 1 1 }  { WEIGHT1_3_4_V_d0 mem_din 1 8 } } }
	WEIGHT1_3_5_V { ap_memory {  { WEIGHT1_3_5_V_address0 mem_address 1 7 }  { WEIGHT1_3_5_V_ce0 mem_ce 1 1 }  { WEIGHT1_3_5_V_we0 mem_we 1 1 }  { WEIGHT1_3_5_V_d0 mem_din 1 8 } } }
	WEIGHT1_3_6_V { ap_memory {  { WEIGHT1_3_6_V_address0 mem_address 1 7 }  { WEIGHT1_3_6_V_ce0 mem_ce 1 1 }  { WEIGHT1_3_6_V_we0 mem_we 1 1 }  { WEIGHT1_3_6_V_d0 mem_din 1 8 } } }
	WEIGHT1_4_0_V { ap_memory {  { WEIGHT1_4_0_V_address0 mem_address 1 7 }  { WEIGHT1_4_0_V_ce0 mem_ce 1 1 }  { WEIGHT1_4_0_V_we0 mem_we 1 1 }  { WEIGHT1_4_0_V_d0 mem_din 1 8 } } }
	WEIGHT1_4_1_V { ap_memory {  { WEIGHT1_4_1_V_address0 mem_address 1 7 }  { WEIGHT1_4_1_V_ce0 mem_ce 1 1 }  { WEIGHT1_4_1_V_we0 mem_we 1 1 }  { WEIGHT1_4_1_V_d0 mem_din 1 8 } } }
	WEIGHT1_4_2_V { ap_memory {  { WEIGHT1_4_2_V_address0 mem_address 1 7 }  { WEIGHT1_4_2_V_ce0 mem_ce 1 1 }  { WEIGHT1_4_2_V_we0 mem_we 1 1 }  { WEIGHT1_4_2_V_d0 mem_din 1 8 } } }
	WEIGHT1_4_3_V { ap_memory {  { WEIGHT1_4_3_V_address0 mem_address 1 7 }  { WEIGHT1_4_3_V_ce0 mem_ce 1 1 }  { WEIGHT1_4_3_V_we0 mem_we 1 1 }  { WEIGHT1_4_3_V_d0 mem_din 1 8 } } }
	WEIGHT1_4_4_V { ap_memory {  { WEIGHT1_4_4_V_address0 mem_address 1 7 }  { WEIGHT1_4_4_V_ce0 mem_ce 1 1 }  { WEIGHT1_4_4_V_we0 mem_we 1 1 }  { WEIGHT1_4_4_V_d0 mem_din 1 8 } } }
	WEIGHT1_4_5_V { ap_memory {  { WEIGHT1_4_5_V_address0 mem_address 1 7 }  { WEIGHT1_4_5_V_ce0 mem_ce 1 1 }  { WEIGHT1_4_5_V_we0 mem_we 1 1 }  { WEIGHT1_4_5_V_d0 mem_din 1 8 } } }
	WEIGHT1_4_6_V { ap_memory {  { WEIGHT1_4_6_V_address0 mem_address 1 7 }  { WEIGHT1_4_6_V_ce0 mem_ce 1 1 }  { WEIGHT1_4_6_V_we0 mem_we 1 1 }  { WEIGHT1_4_6_V_d0 mem_din 1 8 } } }
	WEIGHT1_5_0_V { ap_memory {  { WEIGHT1_5_0_V_address0 mem_address 1 7 }  { WEIGHT1_5_0_V_ce0 mem_ce 1 1 }  { WEIGHT1_5_0_V_we0 mem_we 1 1 }  { WEIGHT1_5_0_V_d0 mem_din 1 8 } } }
	WEIGHT1_5_1_V { ap_memory {  { WEIGHT1_5_1_V_address0 mem_address 1 7 }  { WEIGHT1_5_1_V_ce0 mem_ce 1 1 }  { WEIGHT1_5_1_V_we0 mem_we 1 1 }  { WEIGHT1_5_1_V_d0 mem_din 1 8 } } }
	WEIGHT1_5_2_V { ap_memory {  { WEIGHT1_5_2_V_address0 mem_address 1 7 }  { WEIGHT1_5_2_V_ce0 mem_ce 1 1 }  { WEIGHT1_5_2_V_we0 mem_we 1 1 }  { WEIGHT1_5_2_V_d0 mem_din 1 8 } } }
	WEIGHT1_5_3_V { ap_memory {  { WEIGHT1_5_3_V_address0 mem_address 1 7 }  { WEIGHT1_5_3_V_ce0 mem_ce 1 1 }  { WEIGHT1_5_3_V_we0 mem_we 1 1 }  { WEIGHT1_5_3_V_d0 mem_din 1 8 } } }
	WEIGHT1_5_4_V { ap_memory {  { WEIGHT1_5_4_V_address0 mem_address 1 7 }  { WEIGHT1_5_4_V_ce0 mem_ce 1 1 }  { WEIGHT1_5_4_V_we0 mem_we 1 1 }  { WEIGHT1_5_4_V_d0 mem_din 1 8 } } }
	WEIGHT1_5_5_V { ap_memory {  { WEIGHT1_5_5_V_address0 mem_address 1 7 }  { WEIGHT1_5_5_V_ce0 mem_ce 1 1 }  { WEIGHT1_5_5_V_we0 mem_we 1 1 }  { WEIGHT1_5_5_V_d0 mem_din 1 8 } } }
	WEIGHT1_5_6_V { ap_memory {  { WEIGHT1_5_6_V_address0 mem_address 1 7 }  { WEIGHT1_5_6_V_ce0 mem_ce 1 1 }  { WEIGHT1_5_6_V_we0 mem_we 1 1 }  { WEIGHT1_5_6_V_d0 mem_din 1 8 } } }
	WEIGHT1_6_0_V { ap_memory {  { WEIGHT1_6_0_V_address0 mem_address 1 7 }  { WEIGHT1_6_0_V_ce0 mem_ce 1 1 }  { WEIGHT1_6_0_V_we0 mem_we 1 1 }  { WEIGHT1_6_0_V_d0 mem_din 1 8 } } }
	WEIGHT1_6_1_V { ap_memory {  { WEIGHT1_6_1_V_address0 mem_address 1 7 }  { WEIGHT1_6_1_V_ce0 mem_ce 1 1 }  { WEIGHT1_6_1_V_we0 mem_we 1 1 }  { WEIGHT1_6_1_V_d0 mem_din 1 8 } } }
	WEIGHT1_6_2_V { ap_memory {  { WEIGHT1_6_2_V_address0 mem_address 1 7 }  { WEIGHT1_6_2_V_ce0 mem_ce 1 1 }  { WEIGHT1_6_2_V_we0 mem_we 1 1 }  { WEIGHT1_6_2_V_d0 mem_din 1 8 } } }
	WEIGHT1_6_3_V { ap_memory {  { WEIGHT1_6_3_V_address0 mem_address 1 7 }  { WEIGHT1_6_3_V_ce0 mem_ce 1 1 }  { WEIGHT1_6_3_V_we0 mem_we 1 1 }  { WEIGHT1_6_3_V_d0 mem_din 1 8 } } }
	WEIGHT1_6_4_V { ap_memory {  { WEIGHT1_6_4_V_address0 mem_address 1 7 }  { WEIGHT1_6_4_V_ce0 mem_ce 1 1 }  { WEIGHT1_6_4_V_we0 mem_we 1 1 }  { WEIGHT1_6_4_V_d0 mem_din 1 8 } } }
	WEIGHT1_6_5_V { ap_memory {  { WEIGHT1_6_5_V_address0 mem_address 1 7 }  { WEIGHT1_6_5_V_ce0 mem_ce 1 1 }  { WEIGHT1_6_5_V_we0 mem_we 1 1 }  { WEIGHT1_6_5_V_d0 mem_din 1 8 } } }
	WEIGHT1_6_6_V { ap_memory {  { WEIGHT1_6_6_V_address0 mem_address 1 7 }  { WEIGHT1_6_6_V_ce0 mem_ce 1 1 }  { WEIGHT1_6_6_V_we0 mem_we 1 1 }  { WEIGHT1_6_6_V_d0 mem_din 1 8 } } }
	WEIGHT1_7_0_V { ap_memory {  { WEIGHT1_7_0_V_address0 mem_address 1 7 }  { WEIGHT1_7_0_V_ce0 mem_ce 1 1 }  { WEIGHT1_7_0_V_we0 mem_we 1 1 }  { WEIGHT1_7_0_V_d0 mem_din 1 8 } } }
	WEIGHT1_7_1_V { ap_memory {  { WEIGHT1_7_1_V_address0 mem_address 1 7 }  { WEIGHT1_7_1_V_ce0 mem_ce 1 1 }  { WEIGHT1_7_1_V_we0 mem_we 1 1 }  { WEIGHT1_7_1_V_d0 mem_din 1 8 } } }
	WEIGHT1_7_2_V { ap_memory {  { WEIGHT1_7_2_V_address0 mem_address 1 7 }  { WEIGHT1_7_2_V_ce0 mem_ce 1 1 }  { WEIGHT1_7_2_V_we0 mem_we 1 1 }  { WEIGHT1_7_2_V_d0 mem_din 1 8 } } }
	WEIGHT1_7_3_V { ap_memory {  { WEIGHT1_7_3_V_address0 mem_address 1 7 }  { WEIGHT1_7_3_V_ce0 mem_ce 1 1 }  { WEIGHT1_7_3_V_we0 mem_we 1 1 }  { WEIGHT1_7_3_V_d0 mem_din 1 8 } } }
	WEIGHT1_7_4_V { ap_memory {  { WEIGHT1_7_4_V_address0 mem_address 1 7 }  { WEIGHT1_7_4_V_ce0 mem_ce 1 1 }  { WEIGHT1_7_4_V_we0 mem_we 1 1 }  { WEIGHT1_7_4_V_d0 mem_din 1 8 } } }
	WEIGHT1_7_5_V { ap_memory {  { WEIGHT1_7_5_V_address0 mem_address 1 7 }  { WEIGHT1_7_5_V_ce0 mem_ce 1 1 }  { WEIGHT1_7_5_V_we0 mem_we 1 1 }  { WEIGHT1_7_5_V_d0 mem_din 1 8 } } }
	WEIGHT1_7_6_V { ap_memory {  { WEIGHT1_7_6_V_address0 mem_address 1 7 }  { WEIGHT1_7_6_V_ce0 mem_ce 1 1 }  { WEIGHT1_7_6_V_we0 mem_we 1 1 }  { WEIGHT1_7_6_V_d0 mem_din 1 8 } } }
	custom_k { ap_none {  { custom_k in_data 0 32 } } }
}
