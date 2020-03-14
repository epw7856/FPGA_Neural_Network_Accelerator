set moduleName OFM_STORE
set isCombinational 0
set isDatapathOnly 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set C_modelName {OFM_STORE}
set C_modelType { void 0 }
set C_modelArgList {
	{ output_dma_O_V_data int 56 regular {axi_s 1 volatile  { output_dma_O Data } }  }
	{ output_dma_O_V_last int 1 regular {axi_s 1 volatile  { output_dma_O Last } }  }
	{ input_dma_B_V_data_V int 32 regular {axi_s 0 volatile  { input_dma_B Data } }  }
	{ input_dma_B_V_last int 1 regular {axi_s 0 volatile  { input_dma_B Last } }  }
	{ OFM_0_V int 26 regular {array 169 { 1 0 } 1 1 }  }
	{ OFM_1_V int 26 regular {array 169 { 1 0 } 1 1 }  }
	{ OFM_2_V int 26 regular {array 169 { 1 0 } 1 1 }  }
	{ OFM_3_V int 26 regular {array 169 { 1 0 } 1 1 }  }
	{ OFM_4_V int 26 regular {array 169 { 1 0 } 1 1 }  }
	{ OFM_5_V int 26 regular {array 169 { 1 0 } 1 1 }  }
	{ OFM_6_V int 26 regular {array 169 { 1 0 } 1 1 }  }
	{ OFM_7_V int 26 regular {array 169 { 1 0 } 1 1 }  }
	{ BIAS_V int 26 regular {array 8 { 2 3 } 1 1 }  }
	{ custom_Tr int 32 regular  }
	{ custom_Tc int 32 regular  }
}
set C_modelArgMapList {[ 
	{ "Name" : "output_dma_O_V_data", "interface" : "axis", "bitwidth" : 56, "direction" : "WRITEONLY"} , 
 	{ "Name" : "output_dma_O_V_last", "interface" : "axis", "bitwidth" : 1, "direction" : "WRITEONLY"} , 
 	{ "Name" : "input_dma_B_V_data_V", "interface" : "axis", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "input_dma_B_V_last", "interface" : "axis", "bitwidth" : 1, "direction" : "READONLY"} , 
 	{ "Name" : "OFM_0_V", "interface" : "memory", "bitwidth" : 26, "direction" : "READWRITE"} , 
 	{ "Name" : "OFM_1_V", "interface" : "memory", "bitwidth" : 26, "direction" : "READWRITE"} , 
 	{ "Name" : "OFM_2_V", "interface" : "memory", "bitwidth" : 26, "direction" : "READWRITE"} , 
 	{ "Name" : "OFM_3_V", "interface" : "memory", "bitwidth" : 26, "direction" : "READWRITE"} , 
 	{ "Name" : "OFM_4_V", "interface" : "memory", "bitwidth" : 26, "direction" : "READWRITE"} , 
 	{ "Name" : "OFM_5_V", "interface" : "memory", "bitwidth" : 26, "direction" : "READWRITE"} , 
 	{ "Name" : "OFM_6_V", "interface" : "memory", "bitwidth" : 26, "direction" : "READWRITE"} , 
 	{ "Name" : "OFM_7_V", "interface" : "memory", "bitwidth" : 26, "direction" : "READWRITE"} , 
 	{ "Name" : "BIAS_V", "interface" : "memory", "bitwidth" : 26, "direction" : "READWRITE"} , 
 	{ "Name" : "custom_Tr", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "custom_Tc", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} ]}
# RTL Port declarations: 
set portNum 77
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ output_dma_O_TDATA sc_out sc_lv 56 signal 0 } 
	{ output_dma_O_TVALID sc_out sc_logic 1 outvld 1 } 
	{ output_dma_O_TREADY sc_in sc_logic 1 outacc 1 } 
	{ output_dma_O_TLAST sc_out sc_logic 1 signal 1 } 
	{ input_dma_B_TDATA sc_in sc_lv 32 signal 2 } 
	{ input_dma_B_TVALID sc_in sc_logic 1 invld 2 } 
	{ input_dma_B_TREADY sc_out sc_logic 1 inacc 3 } 
	{ input_dma_B_TLAST sc_in sc_logic 1 signal 3 } 
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
	{ BIAS_V_address0 sc_out sc_lv 3 signal 12 } 
	{ BIAS_V_ce0 sc_out sc_logic 1 signal 12 } 
	{ BIAS_V_we0 sc_out sc_logic 1 signal 12 } 
	{ BIAS_V_d0 sc_out sc_lv 26 signal 12 } 
	{ BIAS_V_q0 sc_in sc_lv 26 signal 12 } 
	{ custom_Tr sc_in sc_lv 32 signal 13 } 
	{ custom_Tc sc_in sc_lv 32 signal 14 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "output_dma_O_TDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":56, "type": "signal", "bundle":{"name": "output_dma_O_V_data", "role": "default" }} , 
 	{ "name": "output_dma_O_TVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "output_dma_O_V_last", "role": "default" }} , 
 	{ "name": "output_dma_O_TREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "outacc", "bundle":{"name": "output_dma_O_V_last", "role": "default" }} , 
 	{ "name": "output_dma_O_TLAST", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_dma_O_V_last", "role": "default" }} , 
 	{ "name": "input_dma_B_TDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "input_dma_B_V_data_V", "role": "default" }} , 
 	{ "name": "input_dma_B_TVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "invld", "bundle":{"name": "input_dma_B_V_data_V", "role": "default" }} , 
 	{ "name": "input_dma_B_TREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "inacc", "bundle":{"name": "input_dma_B_V_last", "role": "default" }} , 
 	{ "name": "input_dma_B_TLAST", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_dma_B_V_last", "role": "default" }} , 
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
 	{ "name": "BIAS_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "BIAS_V", "role": "address0" }} , 
 	{ "name": "BIAS_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "BIAS_V", "role": "ce0" }} , 
 	{ "name": "BIAS_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "BIAS_V", "role": "we0" }} , 
 	{ "name": "BIAS_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":26, "type": "signal", "bundle":{"name": "BIAS_V", "role": "d0" }} , 
 	{ "name": "BIAS_V_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":26, "type": "signal", "bundle":{"name": "BIAS_V", "role": "q0" }} , 
 	{ "name": "custom_Tr", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "custom_Tr", "role": "default" }} , 
 	{ "name": "custom_Tc", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "custom_Tc", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2"],
		"CDFG" : "OFM_STORE",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"FunctionPipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"VariableLatency" : "1",
		"Port" : [
			{"Name" : "output_dma_O_V_data", "Type" : "Axis", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "output_dma_O_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "output_dma_O_V_last", "Type" : "Axis", "Direction" : "O"},
			{"Name" : "input_dma_B_V_data_V", "Type" : "Axis", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "input_dma_B_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "input_dma_B_V_last", "Type" : "Axis", "Direction" : "I"},
			{"Name" : "OFM_0_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "OFM_1_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "OFM_2_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "OFM_3_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "OFM_4_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "OFM_5_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "OFM_6_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "OFM_7_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "BIAS_V", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "custom_Tr", "Type" : "None", "Direction" : "I"},
			{"Name" : "custom_Tc", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.top_mac_muladd_5ncud_U230", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.top_mac_muladd_5ncud_U231", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	OFM_STORE {
		output_dma_O_V_data {Type O LastRead -1 FirstWrite 4}
		output_dma_O_V_last {Type O LastRead -1 FirstWrite 4}
		input_dma_B_V_data_V {Type I LastRead 1 FirstWrite -1}
		input_dma_B_V_last {Type I LastRead 1 FirstWrite -1}
		OFM_0_V {Type IO LastRead 3 FirstWrite 5}
		OFM_1_V {Type IO LastRead 3 FirstWrite 5}
		OFM_2_V {Type IO LastRead 3 FirstWrite 5}
		OFM_3_V {Type IO LastRead 3 FirstWrite 5}
		OFM_4_V {Type IO LastRead 3 FirstWrite 5}
		OFM_5_V {Type IO LastRead 3 FirstWrite 5}
		OFM_6_V {Type IO LastRead 3 FirstWrite 5}
		OFM_7_V {Type IO LastRead 3 FirstWrite 5}
		BIAS_V {Type IO LastRead 3 FirstWrite 1}
		custom_Tr {Type I LastRead 0 FirstWrite -1}
		custom_Tc {Type I LastRead 0 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "859", "Max" : "859"}
	, {"Name" : "Interval", "Min" : "859", "Max" : "859"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "1", "EnableSignal" : "ap_enable_pp1"}
]}

set Spec2ImplPortList { 
	output_dma_O_V_data { axis {  { output_dma_O_TDATA out_data 1 56 } } }
	output_dma_O_V_last { axis {  { output_dma_O_TVALID out_vld 1 1 }  { output_dma_O_TREADY out_acc 0 1 }  { output_dma_O_TLAST out_data 1 1 } } }
	input_dma_B_V_data_V { axis {  { input_dma_B_TDATA in_data 0 32 }  { input_dma_B_TVALID in_vld 0 1 } } }
	input_dma_B_V_last { axis {  { input_dma_B_TREADY in_acc 1 1 }  { input_dma_B_TLAST in_data 0 1 } } }
	OFM_0_V { ap_memory {  { OFM_0_V_address0 mem_address 1 8 }  { OFM_0_V_ce0 mem_ce 1 1 }  { OFM_0_V_q0 mem_dout 0 26 }  { OFM_0_V_address1 mem_address 1 8 }  { OFM_0_V_ce1 mem_ce 1 1 }  { OFM_0_V_we1 mem_we 1 1 }  { OFM_0_V_d1 mem_din 1 26 } } }
	OFM_1_V { ap_memory {  { OFM_1_V_address0 mem_address 1 8 }  { OFM_1_V_ce0 mem_ce 1 1 }  { OFM_1_V_q0 mem_dout 0 26 }  { OFM_1_V_address1 mem_address 1 8 }  { OFM_1_V_ce1 mem_ce 1 1 }  { OFM_1_V_we1 mem_we 1 1 }  { OFM_1_V_d1 mem_din 1 26 } } }
	OFM_2_V { ap_memory {  { OFM_2_V_address0 mem_address 1 8 }  { OFM_2_V_ce0 mem_ce 1 1 }  { OFM_2_V_q0 mem_dout 0 26 }  { OFM_2_V_address1 mem_address 1 8 }  { OFM_2_V_ce1 mem_ce 1 1 }  { OFM_2_V_we1 mem_we 1 1 }  { OFM_2_V_d1 mem_din 1 26 } } }
	OFM_3_V { ap_memory {  { OFM_3_V_address0 mem_address 1 8 }  { OFM_3_V_ce0 mem_ce 1 1 }  { OFM_3_V_q0 mem_dout 0 26 }  { OFM_3_V_address1 mem_address 1 8 }  { OFM_3_V_ce1 mem_ce 1 1 }  { OFM_3_V_we1 mem_we 1 1 }  { OFM_3_V_d1 mem_din 1 26 } } }
	OFM_4_V { ap_memory {  { OFM_4_V_address0 mem_address 1 8 }  { OFM_4_V_ce0 mem_ce 1 1 }  { OFM_4_V_q0 mem_dout 0 26 }  { OFM_4_V_address1 mem_address 1 8 }  { OFM_4_V_ce1 mem_ce 1 1 }  { OFM_4_V_we1 mem_we 1 1 }  { OFM_4_V_d1 mem_din 1 26 } } }
	OFM_5_V { ap_memory {  { OFM_5_V_address0 mem_address 1 8 }  { OFM_5_V_ce0 mem_ce 1 1 }  { OFM_5_V_q0 mem_dout 0 26 }  { OFM_5_V_address1 mem_address 1 8 }  { OFM_5_V_ce1 mem_ce 1 1 }  { OFM_5_V_we1 mem_we 1 1 }  { OFM_5_V_d1 mem_din 1 26 } } }
	OFM_6_V { ap_memory {  { OFM_6_V_address0 mem_address 1 8 }  { OFM_6_V_ce0 mem_ce 1 1 }  { OFM_6_V_q0 mem_dout 0 26 }  { OFM_6_V_address1 mem_address 1 8 }  { OFM_6_V_ce1 mem_ce 1 1 }  { OFM_6_V_we1 mem_we 1 1 }  { OFM_6_V_d1 mem_din 1 26 } } }
	OFM_7_V { ap_memory {  { OFM_7_V_address0 mem_address 1 8 }  { OFM_7_V_ce0 mem_ce 1 1 }  { OFM_7_V_q0 mem_dout 0 26 }  { OFM_7_V_address1 mem_address 1 8 }  { OFM_7_V_ce1 mem_ce 1 1 }  { OFM_7_V_we1 mem_we 1 1 }  { OFM_7_V_d1 mem_din 1 26 } } }
	BIAS_V { ap_memory {  { BIAS_V_address0 mem_address 1 3 }  { BIAS_V_ce0 mem_ce 1 1 }  { BIAS_V_we0 mem_we 1 1 }  { BIAS_V_d0 mem_din 1 26 }  { BIAS_V_q0 mem_dout 0 26 } } }
	custom_Tr { ap_none {  { custom_Tr in_data 0 32 } } }
	custom_Tc { ap_none {  { custom_Tc in_data 0 32 } } }
}
