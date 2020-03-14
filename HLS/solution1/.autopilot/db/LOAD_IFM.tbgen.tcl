set moduleName LOAD_IFM
set isCombinational 0
set isDatapathOnly 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set C_modelName {LOAD_IFM}
set C_modelType { void 0 }
set C_modelArgList {
	{ input_dma_I_V_data int 56 regular {axi_s 0 volatile  { input_dma_I Data } }  }
	{ input_dma_I_V_last int 1 regular {axi_s 0 volatile  { input_dma_I Last } }  }
	{ IFM_0_V int 26 regular {array 169 { 0 3 } 0 1 }  }
	{ IFM_1_V int 26 regular {array 169 { 0 3 } 0 1 }  }
	{ IFM_2_V int 26 regular {array 169 { 0 3 } 0 1 }  }
	{ IFM_3_V int 26 regular {array 169 { 0 3 } 0 1 }  }
	{ IFM_4_V int 26 regular {array 169 { 0 3 } 0 1 }  }
	{ IFM_5_V int 26 regular {array 169 { 0 3 } 0 1 }  }
	{ IFM_6_V int 26 regular {array 169 { 0 3 } 0 1 }  }
	{ custom_Tr int 32 regular  }
	{ custom_Tc int 32 regular  }
}
set C_modelArgMapList {[ 
	{ "Name" : "input_dma_I_V_data", "interface" : "axis", "bitwidth" : 56, "direction" : "READONLY"} , 
 	{ "Name" : "input_dma_I_V_last", "interface" : "axis", "bitwidth" : 1, "direction" : "READONLY"} , 
 	{ "Name" : "IFM_0_V", "interface" : "memory", "bitwidth" : 26, "direction" : "WRITEONLY"} , 
 	{ "Name" : "IFM_1_V", "interface" : "memory", "bitwidth" : 26, "direction" : "WRITEONLY"} , 
 	{ "Name" : "IFM_2_V", "interface" : "memory", "bitwidth" : 26, "direction" : "WRITEONLY"} , 
 	{ "Name" : "IFM_3_V", "interface" : "memory", "bitwidth" : 26, "direction" : "WRITEONLY"} , 
 	{ "Name" : "IFM_4_V", "interface" : "memory", "bitwidth" : 26, "direction" : "WRITEONLY"} , 
 	{ "Name" : "IFM_5_V", "interface" : "memory", "bitwidth" : 26, "direction" : "WRITEONLY"} , 
 	{ "Name" : "IFM_6_V", "interface" : "memory", "bitwidth" : 26, "direction" : "WRITEONLY"} , 
 	{ "Name" : "custom_Tr", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "custom_Tc", "interface" : "wire", "bitwidth" : 32, "direction" : "READONLY"} ]}
# RTL Port declarations: 
set portNum 40
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ input_dma_I_TDATA sc_in sc_lv 56 signal 0 } 
	{ input_dma_I_TVALID sc_in sc_logic 1 invld 0 } 
	{ input_dma_I_TREADY sc_out sc_logic 1 inacc 1 } 
	{ input_dma_I_TLAST sc_in sc_logic 1 signal 1 } 
	{ IFM_0_V_address0 sc_out sc_lv 8 signal 2 } 
	{ IFM_0_V_ce0 sc_out sc_logic 1 signal 2 } 
	{ IFM_0_V_we0 sc_out sc_logic 1 signal 2 } 
	{ IFM_0_V_d0 sc_out sc_lv 26 signal 2 } 
	{ IFM_1_V_address0 sc_out sc_lv 8 signal 3 } 
	{ IFM_1_V_ce0 sc_out sc_logic 1 signal 3 } 
	{ IFM_1_V_we0 sc_out sc_logic 1 signal 3 } 
	{ IFM_1_V_d0 sc_out sc_lv 26 signal 3 } 
	{ IFM_2_V_address0 sc_out sc_lv 8 signal 4 } 
	{ IFM_2_V_ce0 sc_out sc_logic 1 signal 4 } 
	{ IFM_2_V_we0 sc_out sc_logic 1 signal 4 } 
	{ IFM_2_V_d0 sc_out sc_lv 26 signal 4 } 
	{ IFM_3_V_address0 sc_out sc_lv 8 signal 5 } 
	{ IFM_3_V_ce0 sc_out sc_logic 1 signal 5 } 
	{ IFM_3_V_we0 sc_out sc_logic 1 signal 5 } 
	{ IFM_3_V_d0 sc_out sc_lv 26 signal 5 } 
	{ IFM_4_V_address0 sc_out sc_lv 8 signal 6 } 
	{ IFM_4_V_ce0 sc_out sc_logic 1 signal 6 } 
	{ IFM_4_V_we0 sc_out sc_logic 1 signal 6 } 
	{ IFM_4_V_d0 sc_out sc_lv 26 signal 6 } 
	{ IFM_5_V_address0 sc_out sc_lv 8 signal 7 } 
	{ IFM_5_V_ce0 sc_out sc_logic 1 signal 7 } 
	{ IFM_5_V_we0 sc_out sc_logic 1 signal 7 } 
	{ IFM_5_V_d0 sc_out sc_lv 26 signal 7 } 
	{ IFM_6_V_address0 sc_out sc_lv 8 signal 8 } 
	{ IFM_6_V_ce0 sc_out sc_logic 1 signal 8 } 
	{ IFM_6_V_we0 sc_out sc_logic 1 signal 8 } 
	{ IFM_6_V_d0 sc_out sc_lv 26 signal 8 } 
	{ custom_Tr sc_in sc_lv 32 signal 9 } 
	{ custom_Tc sc_in sc_lv 32 signal 10 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "input_dma_I_TDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":56, "type": "signal", "bundle":{"name": "input_dma_I_V_data", "role": "default" }} , 
 	{ "name": "input_dma_I_TVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "invld", "bundle":{"name": "input_dma_I_V_data", "role": "default" }} , 
 	{ "name": "input_dma_I_TREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "inacc", "bundle":{"name": "input_dma_I_V_last", "role": "default" }} , 
 	{ "name": "input_dma_I_TLAST", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_dma_I_V_last", "role": "default" }} , 
 	{ "name": "IFM_0_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "IFM_0_V", "role": "address0" }} , 
 	{ "name": "IFM_0_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "IFM_0_V", "role": "ce0" }} , 
 	{ "name": "IFM_0_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "IFM_0_V", "role": "we0" }} , 
 	{ "name": "IFM_0_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":26, "type": "signal", "bundle":{"name": "IFM_0_V", "role": "d0" }} , 
 	{ "name": "IFM_1_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "IFM_1_V", "role": "address0" }} , 
 	{ "name": "IFM_1_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "IFM_1_V", "role": "ce0" }} , 
 	{ "name": "IFM_1_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "IFM_1_V", "role": "we0" }} , 
 	{ "name": "IFM_1_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":26, "type": "signal", "bundle":{"name": "IFM_1_V", "role": "d0" }} , 
 	{ "name": "IFM_2_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "IFM_2_V", "role": "address0" }} , 
 	{ "name": "IFM_2_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "IFM_2_V", "role": "ce0" }} , 
 	{ "name": "IFM_2_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "IFM_2_V", "role": "we0" }} , 
 	{ "name": "IFM_2_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":26, "type": "signal", "bundle":{"name": "IFM_2_V", "role": "d0" }} , 
 	{ "name": "IFM_3_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "IFM_3_V", "role": "address0" }} , 
 	{ "name": "IFM_3_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "IFM_3_V", "role": "ce0" }} , 
 	{ "name": "IFM_3_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "IFM_3_V", "role": "we0" }} , 
 	{ "name": "IFM_3_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":26, "type": "signal", "bundle":{"name": "IFM_3_V", "role": "d0" }} , 
 	{ "name": "IFM_4_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "IFM_4_V", "role": "address0" }} , 
 	{ "name": "IFM_4_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "IFM_4_V", "role": "ce0" }} , 
 	{ "name": "IFM_4_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "IFM_4_V", "role": "we0" }} , 
 	{ "name": "IFM_4_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":26, "type": "signal", "bundle":{"name": "IFM_4_V", "role": "d0" }} , 
 	{ "name": "IFM_5_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "IFM_5_V", "role": "address0" }} , 
 	{ "name": "IFM_5_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "IFM_5_V", "role": "ce0" }} , 
 	{ "name": "IFM_5_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "IFM_5_V", "role": "we0" }} , 
 	{ "name": "IFM_5_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":26, "type": "signal", "bundle":{"name": "IFM_5_V", "role": "d0" }} , 
 	{ "name": "IFM_6_V_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "IFM_6_V", "role": "address0" }} , 
 	{ "name": "IFM_6_V_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "IFM_6_V", "role": "ce0" }} , 
 	{ "name": "IFM_6_V_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "IFM_6_V", "role": "we0" }} , 
 	{ "name": "IFM_6_V_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":26, "type": "signal", "bundle":{"name": "IFM_6_V", "role": "d0" }} , 
 	{ "name": "custom_Tr", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "custom_Tr", "role": "default" }} , 
 	{ "name": "custom_Tc", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "custom_Tc", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1"],
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
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.top_mac_muladd_5ncud_U62", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
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
	{"Name" : "Latency", "Min" : "678", "Max" : "678"}
	, {"Name" : "Interval", "Min" : "678", "Max" : "678"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	input_dma_I_V_data { axis {  { input_dma_I_TDATA in_data 0 56 }  { input_dma_I_TVALID in_vld 0 1 } } }
	input_dma_I_V_last { axis {  { input_dma_I_TREADY in_acc 1 1 }  { input_dma_I_TLAST in_data 0 1 } } }
	IFM_0_V { ap_memory {  { IFM_0_V_address0 mem_address 1 8 }  { IFM_0_V_ce0 mem_ce 1 1 }  { IFM_0_V_we0 mem_we 1 1 }  { IFM_0_V_d0 mem_din 1 26 } } }
	IFM_1_V { ap_memory {  { IFM_1_V_address0 mem_address 1 8 }  { IFM_1_V_ce0 mem_ce 1 1 }  { IFM_1_V_we0 mem_we 1 1 }  { IFM_1_V_d0 mem_din 1 26 } } }
	IFM_2_V { ap_memory {  { IFM_2_V_address0 mem_address 1 8 }  { IFM_2_V_ce0 mem_ce 1 1 }  { IFM_2_V_we0 mem_we 1 1 }  { IFM_2_V_d0 mem_din 1 26 } } }
	IFM_3_V { ap_memory {  { IFM_3_V_address0 mem_address 1 8 }  { IFM_3_V_ce0 mem_ce 1 1 }  { IFM_3_V_we0 mem_we 1 1 }  { IFM_3_V_d0 mem_din 1 26 } } }
	IFM_4_V { ap_memory {  { IFM_4_V_address0 mem_address 1 8 }  { IFM_4_V_ce0 mem_ce 1 1 }  { IFM_4_V_we0 mem_we 1 1 }  { IFM_4_V_d0 mem_din 1 26 } } }
	IFM_5_V { ap_memory {  { IFM_5_V_address0 mem_address 1 8 }  { IFM_5_V_ce0 mem_ce 1 1 }  { IFM_5_V_we0 mem_we 1 1 }  { IFM_5_V_d0 mem_din 1 26 } } }
	IFM_6_V { ap_memory {  { IFM_6_V_address0 mem_address 1 8 }  { IFM_6_V_ce0 mem_ce 1 1 }  { IFM_6_V_we0 mem_we 1 1 }  { IFM_6_V_d0 mem_din 1 26 } } }
	custom_Tr { ap_none {  { custom_Tr in_data 0 32 } } }
	custom_Tc { ap_none {  { custom_Tc in_data 0 32 } } }
}
