set moduleName Load_Fire
set isCombinational 0
set isDatapathOnly 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set C_modelName {Load_Fire}
set C_modelType { void 0 }
set C_modelArgList {
	{ input_dma_W_V_data int 56 regular {axi_s 0 volatile  { input_dma_W Data } }  }
	{ input_dma_W_V_last int 1 regular {axi_s 0 volatile  { input_dma_W Last } }  }
	{ input_dma_I_V_data int 56 regular {axi_s 0 volatile  { input_dma_I Data } }  }
	{ input_dma_I_V_last int 1 regular {axi_s 0 volatile  { input_dma_I Last } }  }
	{ OFM_0_V int 26 regular {array 169 { 1 0 } 1 1 }  }
	{ OFM_1_V int 26 regular {array 169 { 1 0 } 1 1 }  }
	{ OFM_2_V int 26 regular {array 169 { 1 0 } 1 1 }  }
	{ OFM_3_V int 26 regular {array 169 { 1 0 } 1 1 }  }
	{ OFM_4_V int 26 regular {array 169 { 1 0 } 1 1 }  }
	{ OFM_5_V int 26 regular {array 169 { 1 0 } 1 1 }  }
	{ OFM_6_V int 26 regular {array 169 { 1 0 } 1 1 }  }
	{ OFM_7_V int 26 regular {array 169 { 1 0 } 1 1 }  }
	{ row int 32 regular  }
	{ col int 32 regular  }
	{ N int 32 regular  }
	{ custom_k int 32 regular  }
	{ custom_Tr int 32 regular  }
	{ custom_Tc int 32 regular  }
}
set C_modelArgMapList {[ 
	{ "Name" : "input_dma_W_V_data", "interface" : "axis", "bitwidth" : 56, "direction" : "READONLY"} , 
 	{ "Name" : "input_dma_W_V_last", "interface" : "axis", "bitwidth" : 1, "direction" : "READONLY"} , 
 	{ "Name" : "input_dma_I_V_data", "interface" : "axis", "bitwidth" : 56, "direction" : "READONLY"} , 
 	{ "Name" : "input_dma_I_V_last", "interface" : "axis", "bitwidth" : 1, "direction" : "READONLY"} , 
 	{ "Name" : "OFM_0_V", "interface" : "memory", "bitwidth" : 26, "direction" : "READWRITE"} , 
 	{ "Name" : "OFM_1_V", "interface" : "memory", "bitwidth" : 26, "direction" : "READWRITE"} , 
 	{ "Name" : "OFM_2_V", "interface" : "memory", "bitwidth" : 26, "direction" : "READWRITE"} , 
 	{ "Name" : "OFM_3_V", "interface" : "memory", "bitwidth" : 26, "direction" : "READWRITE"} , 
 	{ "Name" : "OFM_4_V", "interface" : "memory", "bitwidth" : 26, "direction" : "READWRITE"} , 
 	{ "Name" : "OFM_5_V", "interface" : "memory", "bitwidth" : 26, "direction" : "READWRITE"} , 
 	{ "Name" : "OFM_6_V", "interface" : "memory", "bitwidth" : 26, "direction" : "READWRITE"} , 
 	{ "Name" : "OFM_7_V", "interface" : "memory", "bitwidth" : 26, "direction" : "READWRITE"} , 
 	{ "Name" : "row", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "col", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "N", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "custom_k", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "custom_Tr", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "custom_Tc", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} ]}
# RTL Port declarations: 
set portNum 76
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ input_dma_W_TDATA sc_in sc_lv 56 signal 0 } 
	{ input_dma_W_TVALID sc_in sc_logic 1 invld 1 } 
	{ input_dma_W_TREADY sc_out sc_logic 1 inacc 1 } 
	{ input_dma_W_TLAST sc_in sc_logic 1 signal 1 } 
	{ input_dma_I_TDATA sc_in sc_lv 56 signal 2 } 
	{ input_dma_I_TVALID sc_in sc_logic 1 invld 3 } 
	{ input_dma_I_TREADY sc_out sc_logic 1 inacc 3 } 
	{ input_dma_I_TLAST sc_in sc_logic 1 signal 3 } 
	{ OFM_0_V_address0 sc_out sc_lv 8 signal 4 } 
	{ OFM_0_V_ce0 sc_out sc_logic 1 signal 4 } 
	{ OFM_0_V_q0 sc_in sc_lv 26 signal 4 } 
	{ OFM_0_V_address1 sc_out sc_lv 8 signal 4 } 
	{ OFM_0_V_ce1 sc_out sc_logic 1 signal 4 } 
	{ OFM_0_V_we1 sc_out sc_logic 1 signal 4 } 
	{ OFM_0_V_d1 sc_out sc_lv 26 signal 4 } 
	{ OFM_1_V_address0 sc_out sc_lv 8 signal 5 } 
	{ OFM_1_V_ce0 sc_out sc_logic 1 signal 5 } 
	{ OFM_1_V_q0 sc_in sc_lv 26 signal 5 } 
	{ OFM_1_V_address1 sc_out sc_lv 8 signal 5 } 
	{ OFM_1_V_ce1 sc_out sc_logic 1 signal 5 } 
	{ OFM_1_V_we1 sc_out sc_logic 1 signal 5 } 
	{ OFM_1_V_d1 sc_out sc_lv 26 signal 5 } 
	{ OFM_2_V_address0 sc_out sc_lv 8 signal 6 } 
	{ OFM_2_V_ce0 sc_out sc_logic 1 signal 6 } 
	{ OFM_2_V_q0 sc_in sc_lv 26 signal 6 } 
	{ OFM_2_V_address1 sc_out sc_lv 8 signal 6 } 
	{ OFM_2_V_ce1 sc_out sc_logic 1 signal 6 } 
	{ OFM_2_V_we1 sc_out sc_logic 1 signal 6 } 
	{ OFM_2_V_d1 sc_out sc_lv 26 signal 6 } 
	{ OFM_3_V_address0 sc_out sc_lv 8 signal 7 } 
	{ OFM_3_V_ce0 sc_out sc_logic 1 signal 7 } 
	{ OFM_3_V_q0 sc_in sc_lv 26 signal 7 } 
	{ OFM_3_V_address1 sc_out sc_lv 8 signal 7 } 
	{ OFM_3_V_ce1 sc_out sc_logic 1 signal 7 } 
	{ OFM_3_V_we1 sc_out sc_logic 1 signal 7 } 
	{ OFM_3_V_d1 sc_out sc_lv 26 signal 7 } 
	{ OFM_4_V_address0 sc_out sc_lv 8 signal 8 } 
	{ OFM_4_V_ce0 sc_out sc_logic 1 signal 8 } 
	{ OFM_4_V_q0 sc_in sc_lv 26 signal 8 } 
	{ OFM_4_V_address1 sc_out sc_lv 8 signal 8 } 
	{ OFM_4_V_ce1 sc_out sc_logic 1 signal 8 } 
	{ OFM_4_V_we1 sc_out sc_logic 1 signal 8 } 
	{ OFM_4_V_d1 sc_out sc_lv 26 signal 8 } 
	{ OFM_5_V_address0 sc_out sc_lv 8 signal 9 } 
	{ OFM_5_V_ce0 sc_out sc_logic 1 signal 9 } 
	{ OFM_5_V_q0 sc_in sc_lv 26 signal 9 } 
	{ OFM_5_V_address1 sc_out sc_lv 8 signal 9 } 
	{ OFM_5_V_ce1 sc_out sc_logic 1 signal 9 } 
	{ OFM_5_V_we1 sc_out sc_logic 1 signal 9 } 
	{ OFM_5_V_d1 sc_out sc_lv 26 signal 9 } 
	{ OFM_6_V_address0 sc_out sc_lv 8 signal 10 } 
	{ OFM_6_V_ce0 sc_out sc_logic 1 signal 10 } 
	{ OFM_6_V_q0 sc_in sc_lv 26 signal 10 } 
	{ OFM_6_V_address1 sc_out sc_lv 8 signal 10 } 
	{ OFM_6_V_ce1 sc_out sc_logic 1 signal 10 } 
	{ OFM_6_V_we1 sc_out sc_logic 1 signal 10 } 
	{ OFM_6_V_d1 sc_out sc_lv 26 signal 10 } 
	{ OFM_7_V_address0 sc_out sc_lv 8 signal 11 } 
	{ OFM_7_V_ce0 sc_out sc_logic 1 signal 11 } 
	{ OFM_7_V_q0 sc_in sc_lv 26 signal 11 } 
	{ OFM_7_V_address1 sc_out sc_lv 8 signal 11 } 
	{ OFM_7_V_ce1 sc_out sc_logic 1 signal 11 } 
	{ OFM_7_V_we1 sc_out sc_logic 1 signal 11 } 
	{ OFM_7_V_d1 sc_out sc_lv 26 signal 11 } 
	{ row sc_in sc_lv 32 signal 12 } 
	{ col sc_in sc_lv 32 signal 13 } 
	{ N sc_in sc_lv 32 signal 14 } 
	{ custom_k sc_in sc_lv 32 signal 15 } 
	{ custom_Tr sc_in sc_lv 32 signal 16 } 
	{ custom_Tc sc_in sc_lv 32 signal 17 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "input_dma_W_TDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":56, "type": "signal", "bundle":{"name": "input_dma_W_V_data", "role": "default" }} , 
 	{ "name": "input_dma_W_TVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "invld", "bundle":{"name": "input_dma_W_V_last", "role": "default" }} , 
 	{ "name": "input_dma_W_TREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "inacc", "bundle":{"name": "input_dma_W_V_last", "role": "default" }} , 
 	{ "name": "input_dma_W_TLAST", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_dma_W_V_last", "role": "default" }} , 
 	{ "name": "input_dma_I_TDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":56, "type": "signal", "bundle":{"name": "input_dma_I_V_data", "role": "default" }} , 
 	{ "name": "input_dma_I_TVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "invld", "bundle":{"name": "input_dma_I_V_last", "role": "default" }} , 
 	{ "name": "input_dma_I_TREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "inacc", "bundle":{"name": "input_dma_I_V_last", "role": "default" }} , 
 	{ "name": "input_dma_I_TLAST", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_dma_I_V_last", "role": "default" }} , 
 	{ "name": "OFM_0_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "OFM_0_V", "role": "address0" }} , 
 	{ "name": "OFM_0_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "OFM_0_V", "role": "ce0" }} , 
 	{ "name": "OFM_0_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":26, "type": "signal", "bundle":{"name": "OFM_0_V", "role": "q0" }} , 
 	{ "name": "OFM_0_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "OFM_0_V", "role": "address1" }} , 
 	{ "name": "OFM_0_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "OFM_0_V", "role": "ce1" }} , 
 	{ "name": "OFM_0_V_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "OFM_0_V", "role": "we1" }} , 
 	{ "name": "OFM_0_V_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":26, "type": "signal", "bundle":{"name": "OFM_0_V", "role": "d1" }} , 
 	{ "name": "OFM_1_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "OFM_1_V", "role": "address0" }} , 
 	{ "name": "OFM_1_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "OFM_1_V", "role": "ce0" }} , 
 	{ "name": "OFM_1_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":26, "type": "signal", "bundle":{"name": "OFM_1_V", "role": "q0" }} , 
 	{ "name": "OFM_1_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "OFM_1_V", "role": "address1" }} , 
 	{ "name": "OFM_1_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "OFM_1_V", "role": "ce1" }} , 
 	{ "name": "OFM_1_V_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "OFM_1_V", "role": "we1" }} , 
 	{ "name": "OFM_1_V_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":26, "type": "signal", "bundle":{"name": "OFM_1_V", "role": "d1" }} , 
 	{ "name": "OFM_2_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "OFM_2_V", "role": "address0" }} , 
 	{ "name": "OFM_2_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "OFM_2_V", "role": "ce0" }} , 
 	{ "name": "OFM_2_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":26, "type": "signal", "bundle":{"name": "OFM_2_V", "role": "q0" }} , 
 	{ "name": "OFM_2_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "OFM_2_V", "role": "address1" }} , 
 	{ "name": "OFM_2_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "OFM_2_V", "role": "ce1" }} , 
 	{ "name": "OFM_2_V_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "OFM_2_V", "role": "we1" }} , 
 	{ "name": "OFM_2_V_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":26, "type": "signal", "bundle":{"name": "OFM_2_V", "role": "d1" }} , 
 	{ "name": "OFM_3_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "OFM_3_V", "role": "address0" }} , 
 	{ "name": "OFM_3_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "OFM_3_V", "role": "ce0" }} , 
 	{ "name": "OFM_3_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":26, "type": "signal", "bundle":{"name": "OFM_3_V", "role": "q0" }} , 
 	{ "name": "OFM_3_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "OFM_3_V", "role": "address1" }} , 
 	{ "name": "OFM_3_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "OFM_3_V", "role": "ce1" }} , 
 	{ "name": "OFM_3_V_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "OFM_3_V", "role": "we1" }} , 
 	{ "name": "OFM_3_V_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":26, "type": "signal", "bundle":{"name": "OFM_3_V", "role": "d1" }} , 
 	{ "name": "OFM_4_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "OFM_4_V", "role": "address0" }} , 
 	{ "name": "OFM_4_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "OFM_4_V", "role": "ce0" }} , 
 	{ "name": "OFM_4_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":26, "type": "signal", "bundle":{"name": "OFM_4_V", "role": "q0" }} , 
 	{ "name": "OFM_4_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "OFM_4_V", "role": "address1" }} , 
 	{ "name": "OFM_4_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "OFM_4_V", "role": "ce1" }} , 
 	{ "name": "OFM_4_V_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "OFM_4_V", "role": "we1" }} , 
 	{ "name": "OFM_4_V_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":26, "type": "signal", "bundle":{"name": "OFM_4_V", "role": "d1" }} , 
 	{ "name": "OFM_5_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "OFM_5_V", "role": "address0" }} , 
 	{ "name": "OFM_5_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "OFM_5_V", "role": "ce0" }} , 
 	{ "name": "OFM_5_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":26, "type": "signal", "bundle":{"name": "OFM_5_V", "role": "q0" }} , 
 	{ "name": "OFM_5_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "OFM_5_V", "role": "address1" }} , 
 	{ "name": "OFM_5_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "OFM_5_V", "role": "ce1" }} , 
 	{ "name": "OFM_5_V_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "OFM_5_V", "role": "we1" }} , 
 	{ "name": "OFM_5_V_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":26, "type": "signal", "bundle":{"name": "OFM_5_V", "role": "d1" }} , 
 	{ "name": "OFM_6_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "OFM_6_V", "role": "address0" }} , 
 	{ "name": "OFM_6_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "OFM_6_V", "role": "ce0" }} , 
 	{ "name": "OFM_6_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":26, "type": "signal", "bundle":{"name": "OFM_6_V", "role": "q0" }} , 
 	{ "name": "OFM_6_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "OFM_6_V", "role": "address1" }} , 
 	{ "name": "OFM_6_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "OFM_6_V", "role": "ce1" }} , 
 	{ "name": "OFM_6_V_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "OFM_6_V", "role": "we1" }} , 
 	{ "name": "OFM_6_V_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":26, "type": "signal", "bundle":{"name": "OFM_6_V", "role": "d1" }} , 
 	{ "name": "OFM_7_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "OFM_7_V", "role": "address0" }} , 
 	{ "name": "OFM_7_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "OFM_7_V", "role": "ce0" }} , 
 	{ "name": "OFM_7_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":26, "type": "signal", "bundle":{"name": "OFM_7_V", "role": "q0" }} , 
 	{ "name": "OFM_7_V_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "OFM_7_V", "role": "address1" }} , 
 	{ "name": "OFM_7_V_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "OFM_7_V", "role": "ce1" }} , 
 	{ "name": "OFM_7_V_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "OFM_7_V", "role": "we1" }} , 
 	{ "name": "OFM_7_V_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":26, "type": "signal", "bundle":{"name": "OFM_7_V", "role": "d1" }} , 
 	{ "name": "row", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "row", "role": "default" }} , 
 	{ "name": "col", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "col", "role": "default" }} , 
 	{ "name": "N", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "N", "role": "default" }} , 
 	{ "name": "custom_k", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "custom_k", "role": "default" }} , 
 	{ "name": "custom_Tr", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "custom_Tr", "role": "default" }} , 
 	{ "name": "custom_Tc", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "custom_Tc", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "25", "26", "27", "28", "29", "30", "31", "32", "33", "34", "35", "36", "37", "38", "39", "40", "41", "42", "43", "44", "45", "46", "47", "48", "49", "50", "51", "52", "53", "54", "55", "56", "57", "58", "59", "60", "61", "62", "63", "64", "65", "66", "67", "68", "69", "70", "71", "72", "73", "74", "75", "76", "77", "78", "79", "80", "81", "82", "83", "84", "85", "86", "87", "88", "89", "90", "91", "92", "93", "94", "95", "96", "97", "98", "99", "100", "101", "102", "103", "104", "105", "106", "107", "108", "109", "110", "111", "112", "113", "114", "115", "116", "117", "118", "119", "120", "121", "122", "123", "124", "125", "126", "127", "186", "188"],
		"CDFG" : "Load_Fire",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"FunctionPipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"VariableLatency" : "1",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state3", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_FIRE4_fu_387"},
			{"State" : "ap_ST_fsm_state3", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_FIRE4_fu_387"},
			{"State" : "ap_ST_fsm_state3", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601"},
			{"State" : "ap_ST_fsm_state3", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601"},
			{"State" : "ap_ST_fsm_state3", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_LOAD_IFM_fu_778"},
			{"State" : "ap_ST_fsm_state3", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_LOAD_IFM_fu_778"}],
		"Port" : [
			{"Name" : "input_dma_W_V_data", "Type" : "Axis", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "186", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "input_dma_W_V_data"}]},
			{"Name" : "input_dma_W_V_last", "Type" : "Axis", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "186", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "input_dma_W_V_last"}]},
			{"Name" : "input_dma_I_V_data", "Type" : "Axis", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "188", "SubInstance" : "grp_LOAD_IFM_fu_778", "Port" : "input_dma_I_V_data"}]},
			{"Name" : "input_dma_I_V_last", "Type" : "Axis", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "188", "SubInstance" : "grp_LOAD_IFM_fu_778", "Port" : "input_dma_I_V_last"}]},
			{"Name" : "OFM_0_V", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "127", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "OFM_0_V"}]},
			{"Name" : "OFM_1_V", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "127", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "OFM_1_V"}]},
			{"Name" : "OFM_2_V", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "127", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "OFM_2_V"}]},
			{"Name" : "OFM_3_V", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "127", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "OFM_3_V"}]},
			{"Name" : "OFM_4_V", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "127", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "OFM_4_V"}]},
			{"Name" : "OFM_5_V", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "127", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "OFM_5_V"}]},
			{"Name" : "OFM_6_V", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "127", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "OFM_6_V"}]},
			{"Name" : "OFM_7_V", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "127", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "OFM_7_V"}]},
			{"Name" : "row", "Type" : "None", "Direction" : "I"},
			{"Name" : "col", "Type" : "None", "Direction" : "I"},
			{"Name" : "N", "Type" : "None", "Direction" : "I"},
			{"Name" : "custom_k", "Type" : "None", "Direction" : "I"},
			{"Name" : "custom_Tr", "Type" : "None", "Direction" : "I"},
			{"Name" : "custom_Tc", "Type" : "None", "Direction" : "I"},
			{"Name" : "WEIGHT1_V_0_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "127", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_0_0_V"},
					{"ID" : "186", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_0_0_V"}]},
			{"Name" : "WEIGHT1_V_0_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "127", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_0_1_V"},
					{"ID" : "186", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_0_1_V"}]},
			{"Name" : "WEIGHT1_V_0_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "127", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_0_2_V"},
					{"ID" : "186", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_0_2_V"}]},
			{"Name" : "WEIGHT1_V_0_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "127", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_0_3_V"},
					{"ID" : "186", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_0_3_V"}]},
			{"Name" : "WEIGHT1_V_0_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "127", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_0_4_V"},
					{"ID" : "186", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_0_4_V"}]},
			{"Name" : "WEIGHT1_V_0_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "127", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_0_5_V"},
					{"ID" : "186", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_0_5_V"}]},
			{"Name" : "WEIGHT1_V_0_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "127", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_0_6_V"},
					{"ID" : "186", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_0_6_V"}]},
			{"Name" : "WEIGHT1_V_1_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "127", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_1_0_V"},
					{"ID" : "186", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_1_0_V"}]},
			{"Name" : "WEIGHT1_V_1_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "127", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_1_1_V"},
					{"ID" : "186", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_1_1_V"}]},
			{"Name" : "WEIGHT1_V_1_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "127", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_1_2_V"},
					{"ID" : "186", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_1_2_V"}]},
			{"Name" : "WEIGHT1_V_1_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "127", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_1_3_V"},
					{"ID" : "186", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_1_3_V"}]},
			{"Name" : "WEIGHT1_V_1_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "127", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_1_4_V"},
					{"ID" : "186", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_1_4_V"}]},
			{"Name" : "WEIGHT1_V_1_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "127", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_1_5_V"},
					{"ID" : "186", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_1_5_V"}]},
			{"Name" : "WEIGHT1_V_1_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "127", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_1_6_V"},
					{"ID" : "186", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_1_6_V"}]},
			{"Name" : "WEIGHT1_V_2_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "127", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_2_0_V"},
					{"ID" : "186", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_2_0_V"}]},
			{"Name" : "WEIGHT1_V_2_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "127", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_2_1_V"},
					{"ID" : "186", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_2_1_V"}]},
			{"Name" : "WEIGHT1_V_2_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "127", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_2_2_V"},
					{"ID" : "186", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_2_2_V"}]},
			{"Name" : "WEIGHT1_V_2_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "127", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_2_3_V"},
					{"ID" : "186", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_2_3_V"}]},
			{"Name" : "WEIGHT1_V_2_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "127", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_2_4_V"},
					{"ID" : "186", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_2_4_V"}]},
			{"Name" : "WEIGHT1_V_2_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "127", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_2_5_V"},
					{"ID" : "186", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_2_5_V"}]},
			{"Name" : "WEIGHT1_V_2_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "127", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_2_6_V"},
					{"ID" : "186", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_2_6_V"}]},
			{"Name" : "WEIGHT1_V_3_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "127", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_3_0_V"},
					{"ID" : "186", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_3_0_V"}]},
			{"Name" : "WEIGHT1_V_3_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "127", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_3_1_V"},
					{"ID" : "186", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_3_1_V"}]},
			{"Name" : "WEIGHT1_V_3_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "127", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_3_2_V"},
					{"ID" : "186", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_3_2_V"}]},
			{"Name" : "WEIGHT1_V_3_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "127", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_3_3_V"},
					{"ID" : "186", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_3_3_V"}]},
			{"Name" : "WEIGHT1_V_3_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "127", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_3_4_V"},
					{"ID" : "186", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_3_4_V"}]},
			{"Name" : "WEIGHT1_V_3_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "127", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_3_5_V"},
					{"ID" : "186", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_3_5_V"}]},
			{"Name" : "WEIGHT1_V_3_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "127", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_3_6_V"},
					{"ID" : "186", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_3_6_V"}]},
			{"Name" : "WEIGHT1_V_4_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "127", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_4_0_V"},
					{"ID" : "186", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_4_0_V"}]},
			{"Name" : "WEIGHT1_V_4_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "127", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_4_1_V"},
					{"ID" : "186", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_4_1_V"}]},
			{"Name" : "WEIGHT1_V_4_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "127", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_4_2_V"},
					{"ID" : "186", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_4_2_V"}]},
			{"Name" : "WEIGHT1_V_4_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "127", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_4_3_V"},
					{"ID" : "186", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_4_3_V"}]},
			{"Name" : "WEIGHT1_V_4_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "127", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_4_4_V"},
					{"ID" : "186", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_4_4_V"}]},
			{"Name" : "WEIGHT1_V_4_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "127", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_4_5_V"},
					{"ID" : "186", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_4_5_V"}]},
			{"Name" : "WEIGHT1_V_4_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "127", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_4_6_V"},
					{"ID" : "186", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_4_6_V"}]},
			{"Name" : "WEIGHT1_V_5_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "127", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_5_0_V"},
					{"ID" : "186", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_5_0_V"}]},
			{"Name" : "WEIGHT1_V_5_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "127", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_5_1_V"},
					{"ID" : "186", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_5_1_V"}]},
			{"Name" : "WEIGHT1_V_5_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "127", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_5_2_V"},
					{"ID" : "186", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_5_2_V"}]},
			{"Name" : "WEIGHT1_V_5_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "127", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_5_3_V"},
					{"ID" : "186", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_5_3_V"}]},
			{"Name" : "WEIGHT1_V_5_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "127", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_5_4_V"},
					{"ID" : "186", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_5_4_V"}]},
			{"Name" : "WEIGHT1_V_5_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "127", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_5_5_V"},
					{"ID" : "186", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_5_5_V"}]},
			{"Name" : "WEIGHT1_V_5_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "127", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_5_6_V"},
					{"ID" : "186", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_5_6_V"}]},
			{"Name" : "WEIGHT1_V_6_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "127", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_6_0_V"},
					{"ID" : "186", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_6_0_V"}]},
			{"Name" : "WEIGHT1_V_6_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "127", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_6_1_V"},
					{"ID" : "186", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_6_1_V"}]},
			{"Name" : "WEIGHT1_V_6_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "127", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_6_2_V"},
					{"ID" : "186", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_6_2_V"}]},
			{"Name" : "WEIGHT1_V_6_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "127", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_6_3_V"},
					{"ID" : "186", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_6_3_V"}]},
			{"Name" : "WEIGHT1_V_6_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "127", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_6_4_V"},
					{"ID" : "186", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_6_4_V"}]},
			{"Name" : "WEIGHT1_V_6_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "127", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_6_5_V"},
					{"ID" : "186", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_6_5_V"}]},
			{"Name" : "WEIGHT1_V_6_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "127", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_6_6_V"},
					{"ID" : "186", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_6_6_V"}]},
			{"Name" : "WEIGHT1_V_7_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "127", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_7_0_V"},
					{"ID" : "186", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_7_0_V"}]},
			{"Name" : "WEIGHT1_V_7_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "127", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_7_1_V"},
					{"ID" : "186", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_7_1_V"}]},
			{"Name" : "WEIGHT1_V_7_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "127", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_7_2_V"},
					{"ID" : "186", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_7_2_V"}]},
			{"Name" : "WEIGHT1_V_7_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "127", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_7_3_V"},
					{"ID" : "186", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_7_3_V"}]},
			{"Name" : "WEIGHT1_V_7_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "127", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_7_4_V"},
					{"ID" : "186", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_7_4_V"}]},
			{"Name" : "WEIGHT1_V_7_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "127", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_7_5_V"},
					{"ID" : "186", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_7_5_V"}]},
			{"Name" : "WEIGHT1_V_7_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "127", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_7_6_V"},
					{"ID" : "186", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_7_6_V"}]},
			{"Name" : "IFM_V_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "127", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "IFM_0_V"},
					{"ID" : "188", "SubInstance" : "grp_LOAD_IFM_fu_778", "Port" : "IFM_0_V"}]},
			{"Name" : "IFM_V_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "127", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "IFM_1_V"},
					{"ID" : "188", "SubInstance" : "grp_LOAD_IFM_fu_778", "Port" : "IFM_1_V"}]},
			{"Name" : "IFM_V_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "127", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "IFM_2_V"},
					{"ID" : "188", "SubInstance" : "grp_LOAD_IFM_fu_778", "Port" : "IFM_2_V"}]},
			{"Name" : "IFM_V_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "127", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "IFM_3_V"},
					{"ID" : "188", "SubInstance" : "grp_LOAD_IFM_fu_778", "Port" : "IFM_3_V"}]},
			{"Name" : "IFM_V_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "127", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "IFM_4_V"},
					{"ID" : "188", "SubInstance" : "grp_LOAD_IFM_fu_778", "Port" : "IFM_4_V"}]},
			{"Name" : "IFM_V_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "127", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "IFM_5_V"},
					{"ID" : "188", "SubInstance" : "grp_LOAD_IFM_fu_778", "Port" : "IFM_5_V"}]},
			{"Name" : "IFM_V_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "127", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "IFM_6_V"},
					{"ID" : "188", "SubInstance" : "grp_LOAD_IFM_fu_778", "Port" : "IFM_6_V"}]},
			{"Name" : "WEIGHT1_DB_V_0_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "127", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_0_0_V"},
					{"ID" : "186", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_0_0_V"}]},
			{"Name" : "WEIGHT1_DB_V_0_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "127", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_0_1_V"},
					{"ID" : "186", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_0_1_V"}]},
			{"Name" : "WEIGHT1_DB_V_0_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "127", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_0_2_V"},
					{"ID" : "186", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_0_2_V"}]},
			{"Name" : "WEIGHT1_DB_V_0_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "127", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_0_3_V"},
					{"ID" : "186", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_0_3_V"}]},
			{"Name" : "WEIGHT1_DB_V_0_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "127", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_0_4_V"},
					{"ID" : "186", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_0_4_V"}]},
			{"Name" : "WEIGHT1_DB_V_0_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "127", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_0_5_V"},
					{"ID" : "186", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_0_5_V"}]},
			{"Name" : "WEIGHT1_DB_V_0_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "127", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_0_6_V"},
					{"ID" : "186", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_0_6_V"}]},
			{"Name" : "WEIGHT1_DB_V_1_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "127", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_1_0_V"},
					{"ID" : "186", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_1_0_V"}]},
			{"Name" : "WEIGHT1_DB_V_1_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "127", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_1_1_V"},
					{"ID" : "186", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_1_1_V"}]},
			{"Name" : "WEIGHT1_DB_V_1_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "127", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_1_2_V"},
					{"ID" : "186", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_1_2_V"}]},
			{"Name" : "WEIGHT1_DB_V_1_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "127", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_1_3_V"},
					{"ID" : "186", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_1_3_V"}]},
			{"Name" : "WEIGHT1_DB_V_1_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "127", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_1_4_V"},
					{"ID" : "186", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_1_4_V"}]},
			{"Name" : "WEIGHT1_DB_V_1_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "127", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_1_5_V"},
					{"ID" : "186", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_1_5_V"}]},
			{"Name" : "WEIGHT1_DB_V_1_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "127", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_1_6_V"},
					{"ID" : "186", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_1_6_V"}]},
			{"Name" : "WEIGHT1_DB_V_2_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "127", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_2_0_V"},
					{"ID" : "186", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_2_0_V"}]},
			{"Name" : "WEIGHT1_DB_V_2_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "127", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_2_1_V"},
					{"ID" : "186", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_2_1_V"}]},
			{"Name" : "WEIGHT1_DB_V_2_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "127", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_2_2_V"},
					{"ID" : "186", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_2_2_V"}]},
			{"Name" : "WEIGHT1_DB_V_2_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "127", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_2_3_V"},
					{"ID" : "186", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_2_3_V"}]},
			{"Name" : "WEIGHT1_DB_V_2_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "127", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_2_4_V"},
					{"ID" : "186", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_2_4_V"}]},
			{"Name" : "WEIGHT1_DB_V_2_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "127", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_2_5_V"},
					{"ID" : "186", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_2_5_V"}]},
			{"Name" : "WEIGHT1_DB_V_2_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "127", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_2_6_V"},
					{"ID" : "186", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_2_6_V"}]},
			{"Name" : "WEIGHT1_DB_V_3_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "127", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_3_0_V"},
					{"ID" : "186", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_3_0_V"}]},
			{"Name" : "WEIGHT1_DB_V_3_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "127", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_3_1_V"},
					{"ID" : "186", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_3_1_V"}]},
			{"Name" : "WEIGHT1_DB_V_3_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "127", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_3_2_V"},
					{"ID" : "186", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_3_2_V"}]},
			{"Name" : "WEIGHT1_DB_V_3_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "127", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_3_3_V"},
					{"ID" : "186", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_3_3_V"}]},
			{"Name" : "WEIGHT1_DB_V_3_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "127", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_3_4_V"},
					{"ID" : "186", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_3_4_V"}]},
			{"Name" : "WEIGHT1_DB_V_3_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "127", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_3_5_V"},
					{"ID" : "186", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_3_5_V"}]},
			{"Name" : "WEIGHT1_DB_V_3_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "127", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_3_6_V"},
					{"ID" : "186", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_3_6_V"}]},
			{"Name" : "WEIGHT1_DB_V_4_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "127", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_4_0_V"},
					{"ID" : "186", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_4_0_V"}]},
			{"Name" : "WEIGHT1_DB_V_4_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "127", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_4_1_V"},
					{"ID" : "186", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_4_1_V"}]},
			{"Name" : "WEIGHT1_DB_V_4_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "127", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_4_2_V"},
					{"ID" : "186", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_4_2_V"}]},
			{"Name" : "WEIGHT1_DB_V_4_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "127", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_4_3_V"},
					{"ID" : "186", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_4_3_V"}]},
			{"Name" : "WEIGHT1_DB_V_4_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "127", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_4_4_V"},
					{"ID" : "186", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_4_4_V"}]},
			{"Name" : "WEIGHT1_DB_V_4_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "127", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_4_5_V"},
					{"ID" : "186", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_4_5_V"}]},
			{"Name" : "WEIGHT1_DB_V_4_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "127", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_4_6_V"},
					{"ID" : "186", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_4_6_V"}]},
			{"Name" : "WEIGHT1_DB_V_5_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "127", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_5_0_V"},
					{"ID" : "186", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_5_0_V"}]},
			{"Name" : "WEIGHT1_DB_V_5_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "127", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_5_1_V"},
					{"ID" : "186", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_5_1_V"}]},
			{"Name" : "WEIGHT1_DB_V_5_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "127", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_5_2_V"},
					{"ID" : "186", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_5_2_V"}]},
			{"Name" : "WEIGHT1_DB_V_5_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "127", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_5_3_V"},
					{"ID" : "186", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_5_3_V"}]},
			{"Name" : "WEIGHT1_DB_V_5_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "127", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_5_4_V"},
					{"ID" : "186", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_5_4_V"}]},
			{"Name" : "WEIGHT1_DB_V_5_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "127", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_5_5_V"},
					{"ID" : "186", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_5_5_V"}]},
			{"Name" : "WEIGHT1_DB_V_5_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "127", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_5_6_V"},
					{"ID" : "186", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_5_6_V"}]},
			{"Name" : "WEIGHT1_DB_V_6_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "127", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_6_0_V"},
					{"ID" : "186", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_6_0_V"}]},
			{"Name" : "WEIGHT1_DB_V_6_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "127", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_6_1_V"},
					{"ID" : "186", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_6_1_V"}]},
			{"Name" : "WEIGHT1_DB_V_6_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "127", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_6_2_V"},
					{"ID" : "186", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_6_2_V"}]},
			{"Name" : "WEIGHT1_DB_V_6_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "127", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_6_3_V"},
					{"ID" : "186", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_6_3_V"}]},
			{"Name" : "WEIGHT1_DB_V_6_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "127", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_6_4_V"},
					{"ID" : "186", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_6_4_V"}]},
			{"Name" : "WEIGHT1_DB_V_6_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "127", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_6_5_V"},
					{"ID" : "186", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_6_5_V"}]},
			{"Name" : "WEIGHT1_DB_V_6_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "127", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_6_6_V"},
					{"ID" : "186", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_6_6_V"}]},
			{"Name" : "WEIGHT1_DB_V_7_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "127", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_7_0_V"},
					{"ID" : "186", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_7_0_V"}]},
			{"Name" : "WEIGHT1_DB_V_7_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "127", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_7_1_V"},
					{"ID" : "186", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_7_1_V"}]},
			{"Name" : "WEIGHT1_DB_V_7_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "127", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_7_2_V"},
					{"ID" : "186", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_7_2_V"}]},
			{"Name" : "WEIGHT1_DB_V_7_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "127", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_7_3_V"},
					{"ID" : "186", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_7_3_V"}]},
			{"Name" : "WEIGHT1_DB_V_7_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "127", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_7_4_V"},
					{"ID" : "186", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_7_4_V"}]},
			{"Name" : "WEIGHT1_DB_V_7_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "127", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_7_5_V"},
					{"ID" : "186", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_7_5_V"}]},
			{"Name" : "WEIGHT1_DB_V_7_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "127", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_7_6_V"},
					{"ID" : "186", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_7_6_V"}]},
			{"Name" : "IFM_DB_V_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "127", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "IFM_0_V"},
					{"ID" : "188", "SubInstance" : "grp_LOAD_IFM_fu_778", "Port" : "IFM_0_V"}]},
			{"Name" : "IFM_DB_V_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "127", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "IFM_1_V"},
					{"ID" : "188", "SubInstance" : "grp_LOAD_IFM_fu_778", "Port" : "IFM_1_V"}]},
			{"Name" : "IFM_DB_V_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "127", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "IFM_2_V"},
					{"ID" : "188", "SubInstance" : "grp_LOAD_IFM_fu_778", "Port" : "IFM_2_V"}]},
			{"Name" : "IFM_DB_V_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "127", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "IFM_3_V"},
					{"ID" : "188", "SubInstance" : "grp_LOAD_IFM_fu_778", "Port" : "IFM_3_V"}]},
			{"Name" : "IFM_DB_V_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "127", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "IFM_4_V"},
					{"ID" : "188", "SubInstance" : "grp_LOAD_IFM_fu_778", "Port" : "IFM_4_V"}]},
			{"Name" : "IFM_DB_V_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "127", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "IFM_5_V"},
					{"ID" : "188", "SubInstance" : "grp_LOAD_IFM_fu_778", "Port" : "IFM_5_V"}]},
			{"Name" : "IFM_DB_V_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "127", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "IFM_6_V"},
					{"ID" : "188", "SubInstance" : "grp_LOAD_IFM_fu_778", "Port" : "IFM_6_V"}]}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.WEIGHT1_V_0_0_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.WEIGHT1_V_0_1_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.WEIGHT1_V_0_2_U", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.WEIGHT1_V_0_3_U", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.WEIGHT1_V_0_4_U", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.WEIGHT1_V_0_5_U", "Parent" : "0"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.WEIGHT1_V_0_6_U", "Parent" : "0"},
	{"ID" : "8", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.WEIGHT1_V_1_0_U", "Parent" : "0"},
	{"ID" : "9", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.WEIGHT1_V_1_1_U", "Parent" : "0"},
	{"ID" : "10", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.WEIGHT1_V_1_2_U", "Parent" : "0"},
	{"ID" : "11", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.WEIGHT1_V_1_3_U", "Parent" : "0"},
	{"ID" : "12", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.WEIGHT1_V_1_4_U", "Parent" : "0"},
	{"ID" : "13", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.WEIGHT1_V_1_5_U", "Parent" : "0"},
	{"ID" : "14", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.WEIGHT1_V_1_6_U", "Parent" : "0"},
	{"ID" : "15", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.WEIGHT1_V_2_0_U", "Parent" : "0"},
	{"ID" : "16", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.WEIGHT1_V_2_1_U", "Parent" : "0"},
	{"ID" : "17", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.WEIGHT1_V_2_2_U", "Parent" : "0"},
	{"ID" : "18", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.WEIGHT1_V_2_3_U", "Parent" : "0"},
	{"ID" : "19", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.WEIGHT1_V_2_4_U", "Parent" : "0"},
	{"ID" : "20", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.WEIGHT1_V_2_5_U", "Parent" : "0"},
	{"ID" : "21", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.WEIGHT1_V_2_6_U", "Parent" : "0"},
	{"ID" : "22", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.WEIGHT1_V_3_0_U", "Parent" : "0"},
	{"ID" : "23", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.WEIGHT1_V_3_1_U", "Parent" : "0"},
	{"ID" : "24", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.WEIGHT1_V_3_2_U", "Parent" : "0"},
	{"ID" : "25", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.WEIGHT1_V_3_3_U", "Parent" : "0"},
	{"ID" : "26", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.WEIGHT1_V_3_4_U", "Parent" : "0"},
	{"ID" : "27", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.WEIGHT1_V_3_5_U", "Parent" : "0"},
	{"ID" : "28", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.WEIGHT1_V_3_6_U", "Parent" : "0"},
	{"ID" : "29", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.WEIGHT1_V_4_0_U", "Parent" : "0"},
	{"ID" : "30", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.WEIGHT1_V_4_1_U", "Parent" : "0"},
	{"ID" : "31", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.WEIGHT1_V_4_2_U", "Parent" : "0"},
	{"ID" : "32", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.WEIGHT1_V_4_3_U", "Parent" : "0"},
	{"ID" : "33", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.WEIGHT1_V_4_4_U", "Parent" : "0"},
	{"ID" : "34", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.WEIGHT1_V_4_5_U", "Parent" : "0"},
	{"ID" : "35", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.WEIGHT1_V_4_6_U", "Parent" : "0"},
	{"ID" : "36", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.WEIGHT1_V_5_0_U", "Parent" : "0"},
	{"ID" : "37", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.WEIGHT1_V_5_1_U", "Parent" : "0"},
	{"ID" : "38", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.WEIGHT1_V_5_2_U", "Parent" : "0"},
	{"ID" : "39", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.WEIGHT1_V_5_3_U", "Parent" : "0"},
	{"ID" : "40", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.WEIGHT1_V_5_4_U", "Parent" : "0"},
	{"ID" : "41", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.WEIGHT1_V_5_5_U", "Parent" : "0"},
	{"ID" : "42", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.WEIGHT1_V_5_6_U", "Parent" : "0"},
	{"ID" : "43", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.WEIGHT1_V_6_0_U", "Parent" : "0"},
	{"ID" : "44", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.WEIGHT1_V_6_1_U", "Parent" : "0"},
	{"ID" : "45", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.WEIGHT1_V_6_2_U", "Parent" : "0"},
	{"ID" : "46", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.WEIGHT1_V_6_3_U", "Parent" : "0"},
	{"ID" : "47", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.WEIGHT1_V_6_4_U", "Parent" : "0"},
	{"ID" : "48", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.WEIGHT1_V_6_5_U", "Parent" : "0"},
	{"ID" : "49", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.WEIGHT1_V_6_6_U", "Parent" : "0"},
	{"ID" : "50", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.WEIGHT1_V_7_0_U", "Parent" : "0"},
	{"ID" : "51", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.WEIGHT1_V_7_1_U", "Parent" : "0"},
	{"ID" : "52", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.WEIGHT1_V_7_2_U", "Parent" : "0"},
	{"ID" : "53", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.WEIGHT1_V_7_3_U", "Parent" : "0"},
	{"ID" : "54", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.WEIGHT1_V_7_4_U", "Parent" : "0"},
	{"ID" : "55", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.WEIGHT1_V_7_5_U", "Parent" : "0"},
	{"ID" : "56", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.WEIGHT1_V_7_6_U", "Parent" : "0"},
	{"ID" : "57", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.IFM_V_0_U", "Parent" : "0"},
	{"ID" : "58", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.IFM_V_1_U", "Parent" : "0"},
	{"ID" : "59", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.IFM_V_2_U", "Parent" : "0"},
	{"ID" : "60", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.IFM_V_3_U", "Parent" : "0"},
	{"ID" : "61", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.IFM_V_4_U", "Parent" : "0"},
	{"ID" : "62", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.IFM_V_5_U", "Parent" : "0"},
	{"ID" : "63", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.IFM_V_6_U", "Parent" : "0"},
	{"ID" : "64", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.WEIGHT1_DB_V_0_0_U", "Parent" : "0"},
	{"ID" : "65", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.WEIGHT1_DB_V_0_1_U", "Parent" : "0"},
	{"ID" : "66", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.WEIGHT1_DB_V_0_2_U", "Parent" : "0"},
	{"ID" : "67", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.WEIGHT1_DB_V_0_3_U", "Parent" : "0"},
	{"ID" : "68", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.WEIGHT1_DB_V_0_4_U", "Parent" : "0"},
	{"ID" : "69", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.WEIGHT1_DB_V_0_5_U", "Parent" : "0"},
	{"ID" : "70", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.WEIGHT1_DB_V_0_6_U", "Parent" : "0"},
	{"ID" : "71", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.WEIGHT1_DB_V_1_0_U", "Parent" : "0"},
	{"ID" : "72", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.WEIGHT1_DB_V_1_1_U", "Parent" : "0"},
	{"ID" : "73", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.WEIGHT1_DB_V_1_2_U", "Parent" : "0"},
	{"ID" : "74", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.WEIGHT1_DB_V_1_3_U", "Parent" : "0"},
	{"ID" : "75", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.WEIGHT1_DB_V_1_4_U", "Parent" : "0"},
	{"ID" : "76", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.WEIGHT1_DB_V_1_5_U", "Parent" : "0"},
	{"ID" : "77", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.WEIGHT1_DB_V_1_6_U", "Parent" : "0"},
	{"ID" : "78", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.WEIGHT1_DB_V_2_0_U", "Parent" : "0"},
	{"ID" : "79", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.WEIGHT1_DB_V_2_1_U", "Parent" : "0"},
	{"ID" : "80", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.WEIGHT1_DB_V_2_2_U", "Parent" : "0"},
	{"ID" : "81", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.WEIGHT1_DB_V_2_3_U", "Parent" : "0"},
	{"ID" : "82", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.WEIGHT1_DB_V_2_4_U", "Parent" : "0"},
	{"ID" : "83", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.WEIGHT1_DB_V_2_5_U", "Parent" : "0"},
	{"ID" : "84", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.WEIGHT1_DB_V_2_6_U", "Parent" : "0"},
	{"ID" : "85", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.WEIGHT1_DB_V_3_0_U", "Parent" : "0"},
	{"ID" : "86", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.WEIGHT1_DB_V_3_1_U", "Parent" : "0"},
	{"ID" : "87", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.WEIGHT1_DB_V_3_2_U", "Parent" : "0"},
	{"ID" : "88", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.WEIGHT1_DB_V_3_3_U", "Parent" : "0"},
	{"ID" : "89", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.WEIGHT1_DB_V_3_4_U", "Parent" : "0"},
	{"ID" : "90", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.WEIGHT1_DB_V_3_5_U", "Parent" : "0"},
	{"ID" : "91", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.WEIGHT1_DB_V_3_6_U", "Parent" : "0"},
	{"ID" : "92", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.WEIGHT1_DB_V_4_0_U", "Parent" : "0"},
	{"ID" : "93", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.WEIGHT1_DB_V_4_1_U", "Parent" : "0"},
	{"ID" : "94", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.WEIGHT1_DB_V_4_2_U", "Parent" : "0"},
	{"ID" : "95", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.WEIGHT1_DB_V_4_3_U", "Parent" : "0"},
	{"ID" : "96", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.WEIGHT1_DB_V_4_4_U", "Parent" : "0"},
	{"ID" : "97", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.WEIGHT1_DB_V_4_5_U", "Parent" : "0"},
	{"ID" : "98", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.WEIGHT1_DB_V_4_6_U", "Parent" : "0"},
	{"ID" : "99", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.WEIGHT1_DB_V_5_0_U", "Parent" : "0"},
	{"ID" : "100", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.WEIGHT1_DB_V_5_1_U", "Parent" : "0"},
	{"ID" : "101", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.WEIGHT1_DB_V_5_2_U", "Parent" : "0"},
	{"ID" : "102", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.WEIGHT1_DB_V_5_3_U", "Parent" : "0"},
	{"ID" : "103", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.WEIGHT1_DB_V_5_4_U", "Parent" : "0"},
	{"ID" : "104", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.WEIGHT1_DB_V_5_5_U", "Parent" : "0"},
	{"ID" : "105", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.WEIGHT1_DB_V_5_6_U", "Parent" : "0"},
	{"ID" : "106", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.WEIGHT1_DB_V_6_0_U", "Parent" : "0"},
	{"ID" : "107", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.WEIGHT1_DB_V_6_1_U", "Parent" : "0"},
	{"ID" : "108", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.WEIGHT1_DB_V_6_2_U", "Parent" : "0"},
	{"ID" : "109", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.WEIGHT1_DB_V_6_3_U", "Parent" : "0"},
	{"ID" : "110", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.WEIGHT1_DB_V_6_4_U", "Parent" : "0"},
	{"ID" : "111", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.WEIGHT1_DB_V_6_5_U", "Parent" : "0"},
	{"ID" : "112", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.WEIGHT1_DB_V_6_6_U", "Parent" : "0"},
	{"ID" : "113", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.WEIGHT1_DB_V_7_0_U", "Parent" : "0"},
	{"ID" : "114", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.WEIGHT1_DB_V_7_1_U", "Parent" : "0"},
	{"ID" : "115", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.WEIGHT1_DB_V_7_2_U", "Parent" : "0"},
	{"ID" : "116", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.WEIGHT1_DB_V_7_3_U", "Parent" : "0"},
	{"ID" : "117", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.WEIGHT1_DB_V_7_4_U", "Parent" : "0"},
	{"ID" : "118", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.WEIGHT1_DB_V_7_5_U", "Parent" : "0"},
	{"ID" : "119", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.WEIGHT1_DB_V_7_6_U", "Parent" : "0"},
	{"ID" : "120", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.IFM_DB_V_0_U", "Parent" : "0"},
	{"ID" : "121", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.IFM_DB_V_1_U", "Parent" : "0"},
	{"ID" : "122", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.IFM_DB_V_2_U", "Parent" : "0"},
	{"ID" : "123", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.IFM_DB_V_3_U", "Parent" : "0"},
	{"ID" : "124", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.IFM_DB_V_4_U", "Parent" : "0"},
	{"ID" : "125", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.IFM_DB_V_5_U", "Parent" : "0"},
	{"ID" : "126", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.IFM_DB_V_6_U", "Parent" : "0"},
	{"ID" : "127", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_FIRE4_fu_387", "Parent" : "0", "Child" : ["128", "129", "130", "131", "132", "133", "134", "135", "136", "137", "138", "139", "140", "141", "142", "143", "144", "145", "146", "147", "148", "149", "150", "151", "152", "153", "154", "155", "156", "157", "158", "159", "160", "161", "162", "163", "164", "165", "166", "167", "168", "169", "170", "171", "172", "173", "174", "175", "176", "177", "178", "179", "180", "181", "182", "183", "184", "185"],
		"CDFG" : "FIRE4",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"FunctionPipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"VariableLatency" : "1",
		"Port" : [
			{"Name" : "WEIGHT1_0_0_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "WEIGHT1_0_1_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "WEIGHT1_0_2_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "WEIGHT1_0_3_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "WEIGHT1_0_4_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "WEIGHT1_0_5_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "WEIGHT1_0_6_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "WEIGHT1_1_0_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "WEIGHT1_1_1_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "WEIGHT1_1_2_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "WEIGHT1_1_3_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "WEIGHT1_1_4_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "WEIGHT1_1_5_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "WEIGHT1_1_6_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "WEIGHT1_2_0_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "WEIGHT1_2_1_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "WEIGHT1_2_2_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "WEIGHT1_2_3_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "WEIGHT1_2_4_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "WEIGHT1_2_5_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "WEIGHT1_2_6_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "WEIGHT1_3_0_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "WEIGHT1_3_1_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "WEIGHT1_3_2_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "WEIGHT1_3_3_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "WEIGHT1_3_4_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "WEIGHT1_3_5_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "WEIGHT1_3_6_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "WEIGHT1_4_0_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "WEIGHT1_4_1_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "WEIGHT1_4_2_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "WEIGHT1_4_3_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "WEIGHT1_4_4_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "WEIGHT1_4_5_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "WEIGHT1_4_6_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "WEIGHT1_5_0_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "WEIGHT1_5_1_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "WEIGHT1_5_2_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "WEIGHT1_5_3_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "WEIGHT1_5_4_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "WEIGHT1_5_5_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "WEIGHT1_5_6_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "WEIGHT1_6_0_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "WEIGHT1_6_1_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "WEIGHT1_6_2_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "WEIGHT1_6_3_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "WEIGHT1_6_4_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "WEIGHT1_6_5_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "WEIGHT1_6_6_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "WEIGHT1_7_0_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "WEIGHT1_7_1_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "WEIGHT1_7_2_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "WEIGHT1_7_3_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "WEIGHT1_7_4_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "WEIGHT1_7_5_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "WEIGHT1_7_6_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "IFM_0_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "IFM_1_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "IFM_2_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "IFM_3_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "IFM_4_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "IFM_5_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "IFM_6_V", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "OFM_0_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "OFM_1_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "OFM_2_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "OFM_3_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "OFM_4_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "OFM_5_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "OFM_6_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "OFM_7_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "row", "Type" : "None", "Direction" : "I"},
			{"Name" : "col", "Type" : "None", "Direction" : "I"},
			{"Name" : "custom_k", "Type" : "None", "Direction" : "I"},
			{"Name" : "custom_Tr", "Type" : "None", "Direction" : "I"},
			{"Name" : "custom_Tc", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "128", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_FIRE4_fu_387.top_mac_muladd_5nbkb_U75", "Parent" : "127"},
	{"ID" : "129", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_FIRE4_fu_387.top_mac_muladd_5ncud_U76", "Parent" : "127"},
	{"ID" : "130", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_FIRE4_fu_387.top_mul_mul_8s_26dEe_U77", "Parent" : "127"},
	{"ID" : "131", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_FIRE4_fu_387.top_mul_mul_8s_26dEe_U78", "Parent" : "127"},
	{"ID" : "132", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_FIRE4_fu_387.top_mul_mul_8s_26dEe_U79", "Parent" : "127"},
	{"ID" : "133", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_FIRE4_fu_387.top_mul_mul_8s_26dEe_U80", "Parent" : "127"},
	{"ID" : "134", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_FIRE4_fu_387.top_mul_mul_8s_26dEe_U81", "Parent" : "127"},
	{"ID" : "135", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_FIRE4_fu_387.top_mul_mul_8s_26dEe_U82", "Parent" : "127"},
	{"ID" : "136", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_FIRE4_fu_387.top_mul_mul_8s_26dEe_U83", "Parent" : "127"},
	{"ID" : "137", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_FIRE4_fu_387.top_mul_mul_8s_26dEe_U84", "Parent" : "127"},
	{"ID" : "138", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_FIRE4_fu_387.top_mul_mul_8s_26dEe_U85", "Parent" : "127"},
	{"ID" : "139", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_FIRE4_fu_387.top_mul_mul_8s_26dEe_U86", "Parent" : "127"},
	{"ID" : "140", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_FIRE4_fu_387.top_mul_mul_8s_26dEe_U87", "Parent" : "127"},
	{"ID" : "141", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_FIRE4_fu_387.top_mul_mul_8s_26dEe_U88", "Parent" : "127"},
	{"ID" : "142", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_FIRE4_fu_387.top_mul_mul_8s_26dEe_U89", "Parent" : "127"},
	{"ID" : "143", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_FIRE4_fu_387.top_mul_mul_8s_26dEe_U90", "Parent" : "127"},
	{"ID" : "144", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_FIRE4_fu_387.top_mul_mul_8s_26dEe_U91", "Parent" : "127"},
	{"ID" : "145", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_FIRE4_fu_387.top_mul_mul_8s_26dEe_U92", "Parent" : "127"},
	{"ID" : "146", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_FIRE4_fu_387.top_mul_mul_8s_26dEe_U93", "Parent" : "127"},
	{"ID" : "147", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_FIRE4_fu_387.top_mul_mul_8s_26dEe_U94", "Parent" : "127"},
	{"ID" : "148", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_FIRE4_fu_387.top_mul_mul_8s_26dEe_U95", "Parent" : "127"},
	{"ID" : "149", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_FIRE4_fu_387.top_mul_mul_8s_26dEe_U96", "Parent" : "127"},
	{"ID" : "150", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_FIRE4_fu_387.top_mul_mul_8s_26dEe_U97", "Parent" : "127"},
	{"ID" : "151", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_FIRE4_fu_387.top_mul_mul_8s_26dEe_U98", "Parent" : "127"},
	{"ID" : "152", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_FIRE4_fu_387.top_mul_mul_8s_26dEe_U99", "Parent" : "127"},
	{"ID" : "153", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_FIRE4_fu_387.top_mul_mul_8s_26dEe_U100", "Parent" : "127"},
	{"ID" : "154", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_FIRE4_fu_387.top_mul_mul_8s_26dEe_U101", "Parent" : "127"},
	{"ID" : "155", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_FIRE4_fu_387.top_mul_mul_8s_26dEe_U102", "Parent" : "127"},
	{"ID" : "156", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_FIRE4_fu_387.top_mul_mul_8s_26dEe_U103", "Parent" : "127"},
	{"ID" : "157", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_FIRE4_fu_387.top_mul_mul_8s_26dEe_U104", "Parent" : "127"},
	{"ID" : "158", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_FIRE4_fu_387.top_mul_mul_8s_26dEe_U105", "Parent" : "127"},
	{"ID" : "159", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_FIRE4_fu_387.top_mul_mul_8s_26dEe_U106", "Parent" : "127"},
	{"ID" : "160", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_FIRE4_fu_387.top_mul_mul_8s_26dEe_U107", "Parent" : "127"},
	{"ID" : "161", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_FIRE4_fu_387.top_mul_mul_8s_26dEe_U108", "Parent" : "127"},
	{"ID" : "162", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_FIRE4_fu_387.top_mul_mul_8s_26dEe_U109", "Parent" : "127"},
	{"ID" : "163", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_FIRE4_fu_387.top_mul_mul_8s_26dEe_U110", "Parent" : "127"},
	{"ID" : "164", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_FIRE4_fu_387.top_mul_mul_8s_26dEe_U111", "Parent" : "127"},
	{"ID" : "165", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_FIRE4_fu_387.top_mul_mul_8s_26dEe_U112", "Parent" : "127"},
	{"ID" : "166", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_FIRE4_fu_387.top_mul_mul_8s_26dEe_U113", "Parent" : "127"},
	{"ID" : "167", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_FIRE4_fu_387.top_mul_mul_8s_26dEe_U114", "Parent" : "127"},
	{"ID" : "168", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_FIRE4_fu_387.top_mul_mul_8s_26dEe_U115", "Parent" : "127"},
	{"ID" : "169", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_FIRE4_fu_387.top_mul_mul_8s_26dEe_U116", "Parent" : "127"},
	{"ID" : "170", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_FIRE4_fu_387.top_mul_mul_8s_26dEe_U117", "Parent" : "127"},
	{"ID" : "171", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_FIRE4_fu_387.top_mul_mul_8s_26dEe_U118", "Parent" : "127"},
	{"ID" : "172", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_FIRE4_fu_387.top_mul_mul_8s_26dEe_U119", "Parent" : "127"},
	{"ID" : "173", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_FIRE4_fu_387.top_mul_mul_8s_26dEe_U120", "Parent" : "127"},
	{"ID" : "174", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_FIRE4_fu_387.top_mul_mul_8s_26dEe_U121", "Parent" : "127"},
	{"ID" : "175", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_FIRE4_fu_387.top_mul_mul_8s_26dEe_U122", "Parent" : "127"},
	{"ID" : "176", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_FIRE4_fu_387.top_mul_mul_8s_26dEe_U123", "Parent" : "127"},
	{"ID" : "177", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_FIRE4_fu_387.top_mul_mul_8s_26dEe_U124", "Parent" : "127"},
	{"ID" : "178", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_FIRE4_fu_387.top_mul_mul_8s_26dEe_U125", "Parent" : "127"},
	{"ID" : "179", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_FIRE4_fu_387.top_mul_mul_8s_26dEe_U126", "Parent" : "127"},
	{"ID" : "180", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_FIRE4_fu_387.top_mul_mul_8s_26dEe_U127", "Parent" : "127"},
	{"ID" : "181", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_FIRE4_fu_387.top_mul_mul_8s_26dEe_U128", "Parent" : "127"},
	{"ID" : "182", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_FIRE4_fu_387.top_mul_mul_8s_26dEe_U129", "Parent" : "127"},
	{"ID" : "183", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_FIRE4_fu_387.top_mul_mul_8s_26dEe_U130", "Parent" : "127"},
	{"ID" : "184", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_FIRE4_fu_387.top_mul_mul_8s_26dEe_U131", "Parent" : "127"},
	{"ID" : "185", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_FIRE4_fu_387.top_mul_mul_8s_26dEe_U132", "Parent" : "127"},
	{"ID" : "186", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_LOAD_WEIGHT_DMA_fu_601", "Parent" : "0", "Child" : ["187"],
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
	{"ID" : "187", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_LOAD_WEIGHT_DMA_fu_601.top_mac_muladd_5nbkb_U1", "Parent" : "186"},
	{"ID" : "188", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_LOAD_IFM_fu_778", "Parent" : "0", "Child" : ["189"],
		"CDFG" : "LOAD_IFM",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"FunctionPipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"VariableLatency" : "1",
		"Port" : [
			{"Name" : "input_dma_I_V_data", "Type" : "Axis", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "input_dma_I_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "input_dma_I_V_last", "Type" : "Axis", "Direction" : "I"},
			{"Name" : "IFM_0_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "IFM_1_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "IFM_2_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "IFM_3_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "IFM_4_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "IFM_5_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "IFM_6_V", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "custom_Tr", "Type" : "None", "Direction" : "I"},
			{"Name" : "custom_Tc", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "189", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_LOAD_IFM_fu_778.top_mac_muladd_5ncud_U62", "Parent" : "188"}]}


set ArgLastReadFirstWriteLatency {
	Load_Fire {
		input_dma_W_V_data {Type I LastRead 1 FirstWrite -1}
		input_dma_W_V_last {Type I LastRead 1 FirstWrite -1}
		input_dma_I_V_data {Type I LastRead 1 FirstWrite -1}
		input_dma_I_V_last {Type I LastRead 1 FirstWrite -1}
		OFM_0_V {Type IO LastRead 4 FirstWrite 6}
		OFM_1_V {Type IO LastRead 4 FirstWrite 6}
		OFM_2_V {Type IO LastRead 4 FirstWrite 6}
		OFM_3_V {Type IO LastRead 4 FirstWrite 6}
		OFM_4_V {Type IO LastRead 4 FirstWrite 6}
		OFM_5_V {Type IO LastRead 4 FirstWrite 6}
		OFM_6_V {Type IO LastRead 4 FirstWrite 6}
		OFM_7_V {Type IO LastRead 4 FirstWrite 6}
		row {Type I LastRead 0 FirstWrite -1}
		col {Type I LastRead 0 FirstWrite -1}
		N {Type I LastRead 0 FirstWrite -1}
		custom_k {Type I LastRead 0 FirstWrite -1}
		custom_Tr {Type I LastRead 0 FirstWrite -1}
		custom_Tc {Type I LastRead 0 FirstWrite -1}
		WEIGHT1_V_0_0 {Type IO LastRead -1 FirstWrite -1}
		WEIGHT1_V_0_1 {Type IO LastRead -1 FirstWrite -1}
		WEIGHT1_V_0_2 {Type IO LastRead -1 FirstWrite -1}
		WEIGHT1_V_0_3 {Type IO LastRead -1 FirstWrite -1}
		WEIGHT1_V_0_4 {Type IO LastRead -1 FirstWrite -1}
		WEIGHT1_V_0_5 {Type IO LastRead -1 FirstWrite -1}
		WEIGHT1_V_0_6 {Type IO LastRead -1 FirstWrite -1}
		WEIGHT1_V_1_0 {Type IO LastRead -1 FirstWrite -1}
		WEIGHT1_V_1_1 {Type IO LastRead -1 FirstWrite -1}
		WEIGHT1_V_1_2 {Type IO LastRead -1 FirstWrite -1}
		WEIGHT1_V_1_3 {Type IO LastRead -1 FirstWrite -1}
		WEIGHT1_V_1_4 {Type IO LastRead -1 FirstWrite -1}
		WEIGHT1_V_1_5 {Type IO LastRead -1 FirstWrite -1}
		WEIGHT1_V_1_6 {Type IO LastRead -1 FirstWrite -1}
		WEIGHT1_V_2_0 {Type IO LastRead -1 FirstWrite -1}
		WEIGHT1_V_2_1 {Type IO LastRead -1 FirstWrite -1}
		WEIGHT1_V_2_2 {Type IO LastRead -1 FirstWrite -1}
		WEIGHT1_V_2_3 {Type IO LastRead -1 FirstWrite -1}
		WEIGHT1_V_2_4 {Type IO LastRead -1 FirstWrite -1}
		WEIGHT1_V_2_5 {Type IO LastRead -1 FirstWrite -1}
		WEIGHT1_V_2_6 {Type IO LastRead -1 FirstWrite -1}
		WEIGHT1_V_3_0 {Type IO LastRead -1 FirstWrite -1}
		WEIGHT1_V_3_1 {Type IO LastRead -1 FirstWrite -1}
		WEIGHT1_V_3_2 {Type IO LastRead -1 FirstWrite -1}
		WEIGHT1_V_3_3 {Type IO LastRead -1 FirstWrite -1}
		WEIGHT1_V_3_4 {Type IO LastRead -1 FirstWrite -1}
		WEIGHT1_V_3_5 {Type IO LastRead -1 FirstWrite -1}
		WEIGHT1_V_3_6 {Type IO LastRead -1 FirstWrite -1}
		WEIGHT1_V_4_0 {Type IO LastRead -1 FirstWrite -1}
		WEIGHT1_V_4_1 {Type IO LastRead -1 FirstWrite -1}
		WEIGHT1_V_4_2 {Type IO LastRead -1 FirstWrite -1}
		WEIGHT1_V_4_3 {Type IO LastRead -1 FirstWrite -1}
		WEIGHT1_V_4_4 {Type IO LastRead -1 FirstWrite -1}
		WEIGHT1_V_4_5 {Type IO LastRead -1 FirstWrite -1}
		WEIGHT1_V_4_6 {Type IO LastRead -1 FirstWrite -1}
		WEIGHT1_V_5_0 {Type IO LastRead -1 FirstWrite -1}
		WEIGHT1_V_5_1 {Type IO LastRead -1 FirstWrite -1}
		WEIGHT1_V_5_2 {Type IO LastRead -1 FirstWrite -1}
		WEIGHT1_V_5_3 {Type IO LastRead -1 FirstWrite -1}
		WEIGHT1_V_5_4 {Type IO LastRead -1 FirstWrite -1}
		WEIGHT1_V_5_5 {Type IO LastRead -1 FirstWrite -1}
		WEIGHT1_V_5_6 {Type IO LastRead -1 FirstWrite -1}
		WEIGHT1_V_6_0 {Type IO LastRead -1 FirstWrite -1}
		WEIGHT1_V_6_1 {Type IO LastRead -1 FirstWrite -1}
		WEIGHT1_V_6_2 {Type IO LastRead -1 FirstWrite -1}
		WEIGHT1_V_6_3 {Type IO LastRead -1 FirstWrite -1}
		WEIGHT1_V_6_4 {Type IO LastRead -1 FirstWrite -1}
		WEIGHT1_V_6_5 {Type IO LastRead -1 FirstWrite -1}
		WEIGHT1_V_6_6 {Type IO LastRead -1 FirstWrite -1}
		WEIGHT1_V_7_0 {Type IO LastRead -1 FirstWrite -1}
		WEIGHT1_V_7_1 {Type IO LastRead -1 FirstWrite -1}
		WEIGHT1_V_7_2 {Type IO LastRead -1 FirstWrite -1}
		WEIGHT1_V_7_3 {Type IO LastRead -1 FirstWrite -1}
		WEIGHT1_V_7_4 {Type IO LastRead -1 FirstWrite -1}
		WEIGHT1_V_7_5 {Type IO LastRead -1 FirstWrite -1}
		WEIGHT1_V_7_6 {Type IO LastRead -1 FirstWrite -1}
		IFM_V_0 {Type IO LastRead -1 FirstWrite -1}
		IFM_V_1 {Type IO LastRead -1 FirstWrite -1}
		IFM_V_2 {Type IO LastRead -1 FirstWrite -1}
		IFM_V_3 {Type IO LastRead -1 FirstWrite -1}
		IFM_V_4 {Type IO LastRead -1 FirstWrite -1}
		IFM_V_5 {Type IO LastRead -1 FirstWrite -1}
		IFM_V_6 {Type IO LastRead -1 FirstWrite -1}
		WEIGHT1_DB_V_0_0 {Type IO LastRead -1 FirstWrite -1}
		WEIGHT1_DB_V_0_1 {Type IO LastRead -1 FirstWrite -1}
		WEIGHT1_DB_V_0_2 {Type IO LastRead -1 FirstWrite -1}
		WEIGHT1_DB_V_0_3 {Type IO LastRead -1 FirstWrite -1}
		WEIGHT1_DB_V_0_4 {Type IO LastRead -1 FirstWrite -1}
		WEIGHT1_DB_V_0_5 {Type IO LastRead -1 FirstWrite -1}
		WEIGHT1_DB_V_0_6 {Type IO LastRead -1 FirstWrite -1}
		WEIGHT1_DB_V_1_0 {Type IO LastRead -1 FirstWrite -1}
		WEIGHT1_DB_V_1_1 {Type IO LastRead -1 FirstWrite -1}
		WEIGHT1_DB_V_1_2 {Type IO LastRead -1 FirstWrite -1}
		WEIGHT1_DB_V_1_3 {Type IO LastRead -1 FirstWrite -1}
		WEIGHT1_DB_V_1_4 {Type IO LastRead -1 FirstWrite -1}
		WEIGHT1_DB_V_1_5 {Type IO LastRead -1 FirstWrite -1}
		WEIGHT1_DB_V_1_6 {Type IO LastRead -1 FirstWrite -1}
		WEIGHT1_DB_V_2_0 {Type IO LastRead -1 FirstWrite -1}
		WEIGHT1_DB_V_2_1 {Type IO LastRead -1 FirstWrite -1}
		WEIGHT1_DB_V_2_2 {Type IO LastRead -1 FirstWrite -1}
		WEIGHT1_DB_V_2_3 {Type IO LastRead -1 FirstWrite -1}
		WEIGHT1_DB_V_2_4 {Type IO LastRead -1 FirstWrite -1}
		WEIGHT1_DB_V_2_5 {Type IO LastRead -1 FirstWrite -1}
		WEIGHT1_DB_V_2_6 {Type IO LastRead -1 FirstWrite -1}
		WEIGHT1_DB_V_3_0 {Type IO LastRead -1 FirstWrite -1}
		WEIGHT1_DB_V_3_1 {Type IO LastRead -1 FirstWrite -1}
		WEIGHT1_DB_V_3_2 {Type IO LastRead -1 FirstWrite -1}
		WEIGHT1_DB_V_3_3 {Type IO LastRead -1 FirstWrite -1}
		WEIGHT1_DB_V_3_4 {Type IO LastRead -1 FirstWrite -1}
		WEIGHT1_DB_V_3_5 {Type IO LastRead -1 FirstWrite -1}
		WEIGHT1_DB_V_3_6 {Type IO LastRead -1 FirstWrite -1}
		WEIGHT1_DB_V_4_0 {Type IO LastRead -1 FirstWrite -1}
		WEIGHT1_DB_V_4_1 {Type IO LastRead -1 FirstWrite -1}
		WEIGHT1_DB_V_4_2 {Type IO LastRead -1 FirstWrite -1}
		WEIGHT1_DB_V_4_3 {Type IO LastRead -1 FirstWrite -1}
		WEIGHT1_DB_V_4_4 {Type IO LastRead -1 FirstWrite -1}
		WEIGHT1_DB_V_4_5 {Type IO LastRead -1 FirstWrite -1}
		WEIGHT1_DB_V_4_6 {Type IO LastRead -1 FirstWrite -1}
		WEIGHT1_DB_V_5_0 {Type IO LastRead -1 FirstWrite -1}
		WEIGHT1_DB_V_5_1 {Type IO LastRead -1 FirstWrite -1}
		WEIGHT1_DB_V_5_2 {Type IO LastRead -1 FirstWrite -1}
		WEIGHT1_DB_V_5_3 {Type IO LastRead -1 FirstWrite -1}
		WEIGHT1_DB_V_5_4 {Type IO LastRead -1 FirstWrite -1}
		WEIGHT1_DB_V_5_5 {Type IO LastRead -1 FirstWrite -1}
		WEIGHT1_DB_V_5_6 {Type IO LastRead -1 FirstWrite -1}
		WEIGHT1_DB_V_6_0 {Type IO LastRead -1 FirstWrite -1}
		WEIGHT1_DB_V_6_1 {Type IO LastRead -1 FirstWrite -1}
		WEIGHT1_DB_V_6_2 {Type IO LastRead -1 FirstWrite -1}
		WEIGHT1_DB_V_6_3 {Type IO LastRead -1 FirstWrite -1}
		WEIGHT1_DB_V_6_4 {Type IO LastRead -1 FirstWrite -1}
		WEIGHT1_DB_V_6_5 {Type IO LastRead -1 FirstWrite -1}
		WEIGHT1_DB_V_6_6 {Type IO LastRead -1 FirstWrite -1}
		WEIGHT1_DB_V_7_0 {Type IO LastRead -1 FirstWrite -1}
		WEIGHT1_DB_V_7_1 {Type IO LastRead -1 FirstWrite -1}
		WEIGHT1_DB_V_7_2 {Type IO LastRead -1 FirstWrite -1}
		WEIGHT1_DB_V_7_3 {Type IO LastRead -1 FirstWrite -1}
		WEIGHT1_DB_V_7_4 {Type IO LastRead -1 FirstWrite -1}
		WEIGHT1_DB_V_7_5 {Type IO LastRead -1 FirstWrite -1}
		WEIGHT1_DB_V_7_6 {Type IO LastRead -1 FirstWrite -1}
		IFM_DB_V_0 {Type IO LastRead -1 FirstWrite -1}
		IFM_DB_V_1 {Type IO LastRead -1 FirstWrite -1}
		IFM_DB_V_2 {Type IO LastRead -1 FirstWrite -1}
		IFM_DB_V_3 {Type IO LastRead -1 FirstWrite -1}
		IFM_DB_V_4 {Type IO LastRead -1 FirstWrite -1}
		IFM_DB_V_5 {Type IO LastRead -1 FirstWrite -1}
		IFM_DB_V_6 {Type IO LastRead -1 FirstWrite -1}}
	FIRE4 {
		WEIGHT1_0_0_V {Type I LastRead 3 FirstWrite -1}
		WEIGHT1_0_1_V {Type I LastRead 3 FirstWrite -1}
		WEIGHT1_0_2_V {Type I LastRead 3 FirstWrite -1}
		WEIGHT1_0_3_V {Type I LastRead 4 FirstWrite -1}
		WEIGHT1_0_4_V {Type I LastRead 4 FirstWrite -1}
		WEIGHT1_0_5_V {Type I LastRead 4 FirstWrite -1}
		WEIGHT1_0_6_V {Type I LastRead 4 FirstWrite -1}
		WEIGHT1_1_0_V {Type I LastRead 3 FirstWrite -1}
		WEIGHT1_1_1_V {Type I LastRead 3 FirstWrite -1}
		WEIGHT1_1_2_V {Type I LastRead 3 FirstWrite -1}
		WEIGHT1_1_3_V {Type I LastRead 4 FirstWrite -1}
		WEIGHT1_1_4_V {Type I LastRead 4 FirstWrite -1}
		WEIGHT1_1_5_V {Type I LastRead 4 FirstWrite -1}
		WEIGHT1_1_6_V {Type I LastRead 4 FirstWrite -1}
		WEIGHT1_2_0_V {Type I LastRead 3 FirstWrite -1}
		WEIGHT1_2_1_V {Type I LastRead 3 FirstWrite -1}
		WEIGHT1_2_2_V {Type I LastRead 3 FirstWrite -1}
		WEIGHT1_2_3_V {Type I LastRead 4 FirstWrite -1}
		WEIGHT1_2_4_V {Type I LastRead 4 FirstWrite -1}
		WEIGHT1_2_5_V {Type I LastRead 4 FirstWrite -1}
		WEIGHT1_2_6_V {Type I LastRead 4 FirstWrite -1}
		WEIGHT1_3_0_V {Type I LastRead 3 FirstWrite -1}
		WEIGHT1_3_1_V {Type I LastRead 3 FirstWrite -1}
		WEIGHT1_3_2_V {Type I LastRead 3 FirstWrite -1}
		WEIGHT1_3_3_V {Type I LastRead 4 FirstWrite -1}
		WEIGHT1_3_4_V {Type I LastRead 4 FirstWrite -1}
		WEIGHT1_3_5_V {Type I LastRead 4 FirstWrite -1}
		WEIGHT1_3_6_V {Type I LastRead 4 FirstWrite -1}
		WEIGHT1_4_0_V {Type I LastRead 3 FirstWrite -1}
		WEIGHT1_4_1_V {Type I LastRead 3 FirstWrite -1}
		WEIGHT1_4_2_V {Type I LastRead 3 FirstWrite -1}
		WEIGHT1_4_3_V {Type I LastRead 4 FirstWrite -1}
		WEIGHT1_4_4_V {Type I LastRead 4 FirstWrite -1}
		WEIGHT1_4_5_V {Type I LastRead 4 FirstWrite -1}
		WEIGHT1_4_6_V {Type I LastRead 4 FirstWrite -1}
		WEIGHT1_5_0_V {Type I LastRead 3 FirstWrite -1}
		WEIGHT1_5_1_V {Type I LastRead 3 FirstWrite -1}
		WEIGHT1_5_2_V {Type I LastRead 3 FirstWrite -1}
		WEIGHT1_5_3_V {Type I LastRead 4 FirstWrite -1}
		WEIGHT1_5_4_V {Type I LastRead 4 FirstWrite -1}
		WEIGHT1_5_5_V {Type I LastRead 4 FirstWrite -1}
		WEIGHT1_5_6_V {Type I LastRead 4 FirstWrite -1}
		WEIGHT1_6_0_V {Type I LastRead 3 FirstWrite -1}
		WEIGHT1_6_1_V {Type I LastRead 3 FirstWrite -1}
		WEIGHT1_6_2_V {Type I LastRead 3 FirstWrite -1}
		WEIGHT1_6_3_V {Type I LastRead 4 FirstWrite -1}
		WEIGHT1_6_4_V {Type I LastRead 4 FirstWrite -1}
		WEIGHT1_6_5_V {Type I LastRead 4 FirstWrite -1}
		WEIGHT1_6_6_V {Type I LastRead 4 FirstWrite -1}
		WEIGHT1_7_0_V {Type I LastRead 3 FirstWrite -1}
		WEIGHT1_7_1_V {Type I LastRead 3 FirstWrite -1}
		WEIGHT1_7_2_V {Type I LastRead 3 FirstWrite -1}
		WEIGHT1_7_3_V {Type I LastRead 4 FirstWrite -1}
		WEIGHT1_7_4_V {Type I LastRead 4 FirstWrite -1}
		WEIGHT1_7_5_V {Type I LastRead 4 FirstWrite -1}
		WEIGHT1_7_6_V {Type I LastRead 4 FirstWrite -1}
		IFM_0_V {Type I LastRead 3 FirstWrite -1}
		IFM_1_V {Type I LastRead 3 FirstWrite -1}
		IFM_2_V {Type I LastRead 3 FirstWrite -1}
		IFM_3_V {Type I LastRead 4 FirstWrite -1}
		IFM_4_V {Type I LastRead 4 FirstWrite -1}
		IFM_5_V {Type I LastRead 4 FirstWrite -1}
		IFM_6_V {Type I LastRead 4 FirstWrite -1}
		OFM_0_V {Type IO LastRead 4 FirstWrite 6}
		OFM_1_V {Type IO LastRead 4 FirstWrite 6}
		OFM_2_V {Type IO LastRead 4 FirstWrite 6}
		OFM_3_V {Type IO LastRead 4 FirstWrite 6}
		OFM_4_V {Type IO LastRead 4 FirstWrite 6}
		OFM_5_V {Type IO LastRead 4 FirstWrite 6}
		OFM_6_V {Type IO LastRead 4 FirstWrite 6}
		OFM_7_V {Type IO LastRead 4 FirstWrite 6}
		row {Type I LastRead 0 FirstWrite -1}
		col {Type I LastRead 0 FirstWrite -1}
		custom_k {Type I LastRead 1 FirstWrite -1}
		custom_Tr {Type I LastRead 0 FirstWrite -1}
		custom_Tc {Type I LastRead 0 FirstWrite -1}}
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
		custom_k {Type I LastRead 0 FirstWrite -1}}
	LOAD_IFM {
		input_dma_I_V_data {Type I LastRead 1 FirstWrite -1}
		input_dma_I_V_last {Type I LastRead 1 FirstWrite -1}
		IFM_0_V {Type O LastRead -1 FirstWrite 1}
		IFM_1_V {Type O LastRead -1 FirstWrite 1}
		IFM_2_V {Type O LastRead -1 FirstWrite 1}
		IFM_3_V {Type O LastRead -1 FirstWrite 1}
		IFM_4_V {Type O LastRead -1 FirstWrite 1}
		IFM_5_V {Type O LastRead -1 FirstWrite 1}
		IFM_6_V {Type O LastRead -1 FirstWrite 1}
		custom_Tr {Type I LastRead 0 FirstWrite -1}
		custom_Tc {Type I LastRead 0 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "9175", "Max" : "9175"}
	, {"Name" : "Interval", "Min" : "9175", "Max" : "9175"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	input_dma_W_V_data { axis {  { input_dma_W_TDATA in_data 0 56 } } }
	input_dma_W_V_last { axis {  { input_dma_W_TVALID in_vld 0 1 }  { input_dma_W_TREADY in_acc 1 1 }  { input_dma_W_TLAST in_data 0 1 } } }
	input_dma_I_V_data { axis {  { input_dma_I_TDATA in_data 0 56 } } }
	input_dma_I_V_last { axis {  { input_dma_I_TVALID in_vld 0 1 }  { input_dma_I_TREADY in_acc 1 1 }  { input_dma_I_TLAST in_data 0 1 } } }
	OFM_0_V { ap_memory {  { OFM_0_V_address0 mem_address 1 8 }  { OFM_0_V_ce0 mem_ce 1 1 }  { OFM_0_V_q0 mem_dout 0 26 }  { OFM_0_V_address1 mem_address 1 8 }  { OFM_0_V_ce1 mem_ce 1 1 }  { OFM_0_V_we1 mem_we 1 1 }  { OFM_0_V_d1 mem_din 1 26 } } }
	OFM_1_V { ap_memory {  { OFM_1_V_address0 mem_address 1 8 }  { OFM_1_V_ce0 mem_ce 1 1 }  { OFM_1_V_q0 mem_dout 0 26 }  { OFM_1_V_address1 mem_address 1 8 }  { OFM_1_V_ce1 mem_ce 1 1 }  { OFM_1_V_we1 mem_we 1 1 }  { OFM_1_V_d1 mem_din 1 26 } } }
	OFM_2_V { ap_memory {  { OFM_2_V_address0 mem_address 1 8 }  { OFM_2_V_ce0 mem_ce 1 1 }  { OFM_2_V_q0 mem_dout 0 26 }  { OFM_2_V_address1 mem_address 1 8 }  { OFM_2_V_ce1 mem_ce 1 1 }  { OFM_2_V_we1 mem_we 1 1 }  { OFM_2_V_d1 mem_din 1 26 } } }
	OFM_3_V { ap_memory {  { OFM_3_V_address0 mem_address 1 8 }  { OFM_3_V_ce0 mem_ce 1 1 }  { OFM_3_V_q0 mem_dout 0 26 }  { OFM_3_V_address1 mem_address 1 8 }  { OFM_3_V_ce1 mem_ce 1 1 }  { OFM_3_V_we1 mem_we 1 1 }  { OFM_3_V_d1 mem_din 1 26 } } }
	OFM_4_V { ap_memory {  { OFM_4_V_address0 mem_address 1 8 }  { OFM_4_V_ce0 mem_ce 1 1 }  { OFM_4_V_q0 mem_dout 0 26 }  { OFM_4_V_address1 mem_address 1 8 }  { OFM_4_V_ce1 mem_ce 1 1 }  { OFM_4_V_we1 mem_we 1 1 }  { OFM_4_V_d1 mem_din 1 26 } } }
	OFM_5_V { ap_memory {  { OFM_5_V_address0 mem_address 1 8 }  { OFM_5_V_ce0 mem_ce 1 1 }  { OFM_5_V_q0 mem_dout 0 26 }  { OFM_5_V_address1 mem_address 1 8 }  { OFM_5_V_ce1 mem_ce 1 1 }  { OFM_5_V_we1 mem_we 1 1 }  { OFM_5_V_d1 mem_din 1 26 } } }
	OFM_6_V { ap_memory {  { OFM_6_V_address0 mem_address 1 8 }  { OFM_6_V_ce0 mem_ce 1 1 }  { OFM_6_V_q0 mem_dout 0 26 }  { OFM_6_V_address1 mem_address 1 8 }  { OFM_6_V_ce1 mem_ce 1 1 }  { OFM_6_V_we1 mem_we 1 1 }  { OFM_6_V_d1 mem_din 1 26 } } }
	OFM_7_V { ap_memory {  { OFM_7_V_address0 mem_address 1 8 }  { OFM_7_V_ce0 mem_ce 1 1 }  { OFM_7_V_q0 mem_dout 0 26 }  { OFM_7_V_address1 mem_address 1 8 }  { OFM_7_V_ce1 mem_ce 1 1 }  { OFM_7_V_we1 mem_we 1 1 }  { OFM_7_V_d1 mem_din 1 26 } } }
	row { ap_none {  { row in_data 0 32 } } }
	col { ap_none {  { col in_data 0 32 } } }
	N { ap_none {  { N in_data 0 32 } } }
	custom_k { ap_none {  { custom_k in_data 0 32 } } }
	custom_Tr { ap_none {  { custom_Tr in_data 0 32 } } }
	custom_Tc { ap_none {  { custom_Tc in_data 0 32 } } }
}
