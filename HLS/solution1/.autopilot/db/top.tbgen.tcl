set C_TypeInfoList {{ 
"top" : [[], { "return": [[], "void"]} , [{"ExternC" : 0}], [ {"input_dma_W": [[], {"reference": "0"}] }, {"input_dma_I": [[], {"reference": "0"}] }, {"input_dma_B": [[], {"reference": "1"}] }, {"output_dma_O": [[], {"reference": "0"}] }, {"row": [[], {"scalar": "int"}] }, {"col": [[], {"scalar": "int"}] }, {"flag": [[], {"scalar": "int"}] }, {"num": [[], {"scalar": "int"}] }, {"N": [[], {"scalar": "int"}] }, {"custom_k": [[], {"scalar": "int"}] }, {"custom_Tr": [[], {"scalar": "int"}] }, {"custom_Tc": [[], {"scalar": "int"}] }],[],""], 
"1": [ "stream<DMA_DATA_B>", {"hls_type": {"stream": [[[[],"2"]],"3"]}}], 
"2": [ "DMA_DATA_B", {"struct": [[],[],[{ "data": [[32], "4"]},{ "last": [[],  {"scalar": "bool"}]}],""]}], 
"4": [ "FPGA_DATA", {"typedef": [[[],"5"],""]}], 
"5": [ "ap_fixed<26, 10, 6, 0, 0>", {"hls_type": {"ap_fixed": [[[[], {"scalar": { "int": 26}}],[[], {"scalar": { "int": 10}}],[[], {"scalar": { "6": 6}}],[[], {"scalar": { "7": 0}}],[[], {"scalar": { "int": 0}}]],""]}}], 
"6": [ "sc_q_mode", {"enum": [[],[],[{"SC_RND":  {"scalar": "__integer__"}},{"SC_RND_ZERO":  {"scalar": "__integer__"}},{"SC_RND_MIN_INF":  {"scalar": "__integer__"}},{"SC_RND_INF":  {"scalar": "__integer__"}},{"SC_RND_CONV":  {"scalar": "__integer__"}},{"SC_TRN":  {"scalar": "__integer__"}},{"SC_TRN_ZERO":  {"scalar": "__integer__"}}],""]}], 
"7": [ "sc_o_mode", {"enum": [[],[],[{"SC_SAT":  {"scalar": "__integer__"}},{"SC_SAT_ZERO":  {"scalar": "__integer__"}},{"SC_SAT_SYM":  {"scalar": "__integer__"}},{"SC_WRAP":  {"scalar": "__integer__"}},{"SC_WRAP_SM":  {"scalar": "__integer__"}}],""]}], 
"0": [ "stream<DMA_DATA>", {"hls_type": {"stream": [[[[],"8"]],"3"]}}], 
"8": [ "DMA_DATA", {"struct": [[],[],[{ "data": [[], "9"]},{ "last": [[],  {"scalar": "bool"}]}],""]}], 
"9": [ "DOUBLE", {"struct": [[],[],[{ "data1": [[32], "4"]},{ "data2": [[32], "4"]}],""]}],
"3": ["hls", ""]
}}
set moduleName top
set isCombinational 0
set isDatapathOnly 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set C_modelName {top}
set C_modelType { void 0 }
set C_modelArgList {
	{ input_dma_W_V_data int 56 regular {axi_s 0 volatile  { input_dma_W Data } }  }
	{ input_dma_W_V_last int 1 regular {axi_s 0 volatile  { input_dma_W Last } }  }
	{ input_dma_I_V_data int 56 regular {axi_s 0 volatile  { input_dma_I Data } }  }
	{ input_dma_I_V_last int 1 regular {axi_s 0 volatile  { input_dma_I Last } }  }
	{ input_dma_B_V_data_V int 32 regular {axi_s 0 volatile  { input_dma_B Data } }  }
	{ input_dma_B_V_last int 1 regular {axi_s 0 volatile  { input_dma_B Last } }  }
	{ output_dma_O_V_data int 56 regular {axi_s 1 volatile  { output_dma_O Data } }  }
	{ output_dma_O_V_last int 1 regular {axi_s 1 volatile  { output_dma_O Last } }  }
	{ row int 32 regular {axi_slave 0}  }
	{ col int 32 regular {axi_slave 0}  }
	{ flag int 32 unused {axi_slave 0}  }
	{ num int 32 regular {axi_slave 0}  }
	{ N int 32 regular {axi_slave 0}  }
	{ custom_k int 32 regular {axi_slave 0}  }
	{ custom_Tr int 32 regular {axi_slave 0}  }
	{ custom_Tc int 32 regular {axi_slave 0}  }
}
set C_modelArgMapList {[ 
	{ "Name" : "input_dma_W_V_data", "interface" : "axis", "bitwidth" : 56, "direction" : "READONLY", "bitSlice":[{"low":0,"up":25,"cElement": [{"cName": "input_dma_W.V.data.data1.V","cData": "int26","bit_use": { "low": 0,"up": 25},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]},{"low":26,"up":51,"cElement": [{"cName": "input_dma_W.V.data.data2.V","cData": "int26","bit_use": { "low": 0,"up": 25},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "input_dma_W_V_last", "interface" : "axis", "bitwidth" : 1, "direction" : "READONLY", "bitSlice":[{"low":0,"up":0,"cElement": [{"cName": "input_dma_W.V.last","cData": "bool","bit_use": { "low": 0,"up": 0},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "input_dma_I_V_data", "interface" : "axis", "bitwidth" : 56, "direction" : "READONLY", "bitSlice":[{"low":0,"up":25,"cElement": [{"cName": "input_dma_I.V.data.data1.V","cData": "int26","bit_use": { "low": 0,"up": 25},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]},{"low":26,"up":51,"cElement": [{"cName": "input_dma_I.V.data.data2.V","cData": "int26","bit_use": { "low": 0,"up": 25},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "input_dma_I_V_last", "interface" : "axis", "bitwidth" : 1, "direction" : "READONLY", "bitSlice":[{"low":0,"up":0,"cElement": [{"cName": "input_dma_I.V.last","cData": "bool","bit_use": { "low": 0,"up": 0},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "input_dma_B_V_data_V", "interface" : "axis", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":25,"cElement": [{"cName": "input_dma_B.V.data.V","cData": "int26","bit_use": { "low": 0,"up": 25},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "input_dma_B_V_last", "interface" : "axis", "bitwidth" : 1, "direction" : "READONLY", "bitSlice":[{"low":0,"up":0,"cElement": [{"cName": "input_dma_B.V.last","cData": "bool","bit_use": { "low": 0,"up": 0},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "output_dma_O_V_data", "interface" : "axis", "bitwidth" : 56, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":25,"cElement": [{"cName": "output_dma_O.V.data.data1.V","cData": "int26","bit_use": { "low": 0,"up": 25},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]},{"low":26,"up":51,"cElement": [{"cName": "output_dma_O.V.data.data2.V","cData": "int26","bit_use": { "low": 0,"up": 25},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "output_dma_O_V_last", "interface" : "axis", "bitwidth" : 1, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":0,"cElement": [{"cName": "output_dma_O.V.last","cData": "bool","bit_use": { "low": 0,"up": 0},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "row", "interface" : "axi_slave", "bundle":"CRTL_BUS","type":"ap_none","bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "row","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}], "offset" : {"in":16}, "offset_end" : {"in":23}} , 
 	{ "Name" : "col", "interface" : "axi_slave", "bundle":"CRTL_BUS","type":"ap_none","bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "col","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}], "offset" : {"in":24}, "offset_end" : {"in":31}} , 
 	{ "Name" : "flag", "interface" : "axi_slave", "bundle":"CRTL_BUS","type":"ap_none","bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "flag","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}], "offset" : {"in":32}, "offset_end" : {"in":39}} , 
 	{ "Name" : "num", "interface" : "axi_slave", "bundle":"CRTL_BUS","type":"ap_none","bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "num","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}], "offset" : {"in":40}, "offset_end" : {"in":47}} , 
 	{ "Name" : "N", "interface" : "axi_slave", "bundle":"CRTL_BUS","type":"ap_none","bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "N","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}], "offset" : {"in":48}, "offset_end" : {"in":55}} , 
 	{ "Name" : "custom_k", "interface" : "axi_slave", "bundle":"CRTL_BUS","type":"ap_none","bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "custom_k","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}], "offset" : {"in":56}, "offset_end" : {"in":63}} , 
 	{ "Name" : "custom_Tr", "interface" : "axi_slave", "bundle":"CRTL_BUS","type":"ap_none","bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "custom_Tr","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}], "offset" : {"in":64}, "offset_end" : {"in":71}} , 
 	{ "Name" : "custom_Tc", "interface" : "axi_slave", "bundle":"CRTL_BUS","type":"ap_none","bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "custom_Tc","cData": "int","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}], "offset" : {"in":72}, "offset_end" : {"in":79}} ]}
# RTL Port declarations: 
set portNum 36
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst_n sc_in sc_logic 1 reset -1 active_low_sync } 
	{ input_dma_W_TDATA sc_in sc_lv 56 signal 0 } 
	{ input_dma_W_TVALID sc_in sc_logic 1 invld 1 } 
	{ input_dma_W_TREADY sc_out sc_logic 1 inacc 1 } 
	{ input_dma_W_TLAST sc_in sc_logic 1 signal 1 } 
	{ input_dma_I_TDATA sc_in sc_lv 56 signal 2 } 
	{ input_dma_I_TVALID sc_in sc_logic 1 invld 3 } 
	{ input_dma_I_TREADY sc_out sc_logic 1 inacc 3 } 
	{ input_dma_I_TLAST sc_in sc_logic 1 signal 3 } 
	{ input_dma_B_TDATA sc_in sc_lv 32 signal 4 } 
	{ input_dma_B_TVALID sc_in sc_logic 1 invld 5 } 
	{ input_dma_B_TREADY sc_out sc_logic 1 inacc 5 } 
	{ input_dma_B_TLAST sc_in sc_logic 1 signal 5 } 
	{ output_dma_O_TDATA sc_out sc_lv 56 signal 6 } 
	{ output_dma_O_TVALID sc_out sc_logic 1 outvld 7 } 
	{ output_dma_O_TREADY sc_in sc_logic 1 outacc 7 } 
	{ output_dma_O_TLAST sc_out sc_logic 1 signal 7 } 
	{ s_axi_CRTL_BUS_AWVALID sc_in sc_logic 1 signal -1 } 
	{ s_axi_CRTL_BUS_AWREADY sc_out sc_logic 1 signal -1 } 
	{ s_axi_CRTL_BUS_AWADDR sc_in sc_lv 7 signal -1 } 
	{ s_axi_CRTL_BUS_WVALID sc_in sc_logic 1 signal -1 } 
	{ s_axi_CRTL_BUS_WREADY sc_out sc_logic 1 signal -1 } 
	{ s_axi_CRTL_BUS_WDATA sc_in sc_lv 32 signal -1 } 
	{ s_axi_CRTL_BUS_WSTRB sc_in sc_lv 4 signal -1 } 
	{ s_axi_CRTL_BUS_ARVALID sc_in sc_logic 1 signal -1 } 
	{ s_axi_CRTL_BUS_ARREADY sc_out sc_logic 1 signal -1 } 
	{ s_axi_CRTL_BUS_ARADDR sc_in sc_lv 7 signal -1 } 
	{ s_axi_CRTL_BUS_RVALID sc_out sc_logic 1 signal -1 } 
	{ s_axi_CRTL_BUS_RREADY sc_in sc_logic 1 signal -1 } 
	{ s_axi_CRTL_BUS_RDATA sc_out sc_lv 32 signal -1 } 
	{ s_axi_CRTL_BUS_RRESP sc_out sc_lv 2 signal -1 } 
	{ s_axi_CRTL_BUS_BVALID sc_out sc_logic 1 signal -1 } 
	{ s_axi_CRTL_BUS_BREADY sc_in sc_logic 1 signal -1 } 
	{ s_axi_CRTL_BUS_BRESP sc_out sc_lv 2 signal -1 } 
	{ interrupt sc_out sc_logic 1 signal -1 } 
}
set NewPortList {[ 
	{ "name": "s_axi_CRTL_BUS_AWADDR", "direction": "in", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "CRTL_BUS", "role": "AWADDR" },"address":[{"name":"top","role":"start","value":"0","valid_bit":"0"},{"name":"top","role":"continue","value":"0","valid_bit":"4"},{"name":"top","role":"auto_start","value":"0","valid_bit":"7"},{"name":"row","role":"data","value":"16"},{"name":"col","role":"data","value":"24"},{"name":"flag","role":"data","value":"32"},{"name":"num","role":"data","value":"40"},{"name":"N","role":"data","value":"48"},{"name":"custom_k","role":"data","value":"56"},{"name":"custom_Tr","role":"data","value":"64"},{"name":"custom_Tc","role":"data","value":"72"}] },
	{ "name": "s_axi_CRTL_BUS_AWVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "CRTL_BUS", "role": "AWVALID" } },
	{ "name": "s_axi_CRTL_BUS_AWREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "CRTL_BUS", "role": "AWREADY" } },
	{ "name": "s_axi_CRTL_BUS_WVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "CRTL_BUS", "role": "WVALID" } },
	{ "name": "s_axi_CRTL_BUS_WREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "CRTL_BUS", "role": "WREADY" } },
	{ "name": "s_axi_CRTL_BUS_WDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "CRTL_BUS", "role": "WDATA" } },
	{ "name": "s_axi_CRTL_BUS_WSTRB", "direction": "in", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "CRTL_BUS", "role": "WSTRB" } },
	{ "name": "s_axi_CRTL_BUS_ARADDR", "direction": "in", "datatype": "sc_lv", "bitwidth":7, "type": "signal", "bundle":{"name": "CRTL_BUS", "role": "ARADDR" },"address":[{"name":"top","role":"start","value":"0","valid_bit":"0"},{"name":"top","role":"done","value":"0","valid_bit":"1"},{"name":"top","role":"idle","value":"0","valid_bit":"2"},{"name":"top","role":"ready","value":"0","valid_bit":"3"},{"name":"top","role":"auto_start","value":"0","valid_bit":"7"}] },
	{ "name": "s_axi_CRTL_BUS_ARVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "CRTL_BUS", "role": "ARVALID" } },
	{ "name": "s_axi_CRTL_BUS_ARREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "CRTL_BUS", "role": "ARREADY" } },
	{ "name": "s_axi_CRTL_BUS_RVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "CRTL_BUS", "role": "RVALID" } },
	{ "name": "s_axi_CRTL_BUS_RREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "CRTL_BUS", "role": "RREADY" } },
	{ "name": "s_axi_CRTL_BUS_RDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "CRTL_BUS", "role": "RDATA" } },
	{ "name": "s_axi_CRTL_BUS_RRESP", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "CRTL_BUS", "role": "RRESP" } },
	{ "name": "s_axi_CRTL_BUS_BVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "CRTL_BUS", "role": "BVALID" } },
	{ "name": "s_axi_CRTL_BUS_BREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "CRTL_BUS", "role": "BREADY" } },
	{ "name": "s_axi_CRTL_BUS_BRESP", "direction": "out", "datatype": "sc_lv", "bitwidth":2, "type": "signal", "bundle":{"name": "CRTL_BUS", "role": "BRESP" } },
	{ "name": "interrupt", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "CRTL_BUS", "role": "interrupt" } }, 
 	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst_n", "role": "default" }} , 
 	{ "name": "input_dma_W_TDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":56, "type": "signal", "bundle":{"name": "input_dma_W_V_data", "role": "default" }} , 
 	{ "name": "input_dma_W_TVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "invld", "bundle":{"name": "input_dma_W_V_last", "role": "default" }} , 
 	{ "name": "input_dma_W_TREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "inacc", "bundle":{"name": "input_dma_W_V_last", "role": "default" }} , 
 	{ "name": "input_dma_W_TLAST", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_dma_W_V_last", "role": "default" }} , 
 	{ "name": "input_dma_I_TDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":56, "type": "signal", "bundle":{"name": "input_dma_I_V_data", "role": "default" }} , 
 	{ "name": "input_dma_I_TVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "invld", "bundle":{"name": "input_dma_I_V_last", "role": "default" }} , 
 	{ "name": "input_dma_I_TREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "inacc", "bundle":{"name": "input_dma_I_V_last", "role": "default" }} , 
 	{ "name": "input_dma_I_TLAST", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_dma_I_V_last", "role": "default" }} , 
 	{ "name": "input_dma_B_TDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "input_dma_B_V_data_V", "role": "default" }} , 
 	{ "name": "input_dma_B_TVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "invld", "bundle":{"name": "input_dma_B_V_last", "role": "default" }} , 
 	{ "name": "input_dma_B_TREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "inacc", "bundle":{"name": "input_dma_B_V_last", "role": "default" }} , 
 	{ "name": "input_dma_B_TLAST", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_dma_B_V_last", "role": "default" }} , 
 	{ "name": "output_dma_O_TDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":56, "type": "signal", "bundle":{"name": "output_dma_O_V_data", "role": "default" }} , 
 	{ "name": "output_dma_O_TVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "output_dma_O_V_last", "role": "default" }} , 
 	{ "name": "output_dma_O_TREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "outacc", "bundle":{"name": "output_dma_O_V_last", "role": "default" }} , 
 	{ "name": "output_dma_O_TLAST", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_dma_O_V_last", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "210"],
		"CDFG" : "top",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"FunctionPipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"VariableLatency" : "1",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state2", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_Load_Fire_fu_398"},
			{"State" : "ap_ST_fsm_state3", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_Load_Fire_fu_398"},
			{"State" : "ap_ST_fsm_state2", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_OFM_STORE_fu_698"},
			{"State" : "ap_ST_fsm_state3", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_OFM_STORE_fu_698"}],
		"Port" : [
			{"Name" : "input_dma_W_V_data", "Type" : "Axis", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_Load_Fire_fu_398", "Port" : "input_dma_W_V_data"}]},
			{"Name" : "input_dma_W_V_last", "Type" : "Axis", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_Load_Fire_fu_398", "Port" : "input_dma_W_V_last"}]},
			{"Name" : "input_dma_I_V_data", "Type" : "Axis", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_Load_Fire_fu_398", "Port" : "input_dma_I_V_data"}]},
			{"Name" : "input_dma_I_V_last", "Type" : "Axis", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_Load_Fire_fu_398", "Port" : "input_dma_I_V_last"}]},
			{"Name" : "input_dma_B_V_data_V", "Type" : "Axis", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "210", "SubInstance" : "grp_OFM_STORE_fu_698", "Port" : "input_dma_B_V_data_V"}]},
			{"Name" : "input_dma_B_V_last", "Type" : "Axis", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "210", "SubInstance" : "grp_OFM_STORE_fu_698", "Port" : "input_dma_B_V_last"}]},
			{"Name" : "output_dma_O_V_data", "Type" : "Axis", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "210", "SubInstance" : "grp_OFM_STORE_fu_698", "Port" : "output_dma_O_V_data"}]},
			{"Name" : "output_dma_O_V_last", "Type" : "Axis", "Direction" : "O",
				"SubConnect" : [
					{"ID" : "210", "SubInstance" : "grp_OFM_STORE_fu_698", "Port" : "output_dma_O_V_last"}]},
			{"Name" : "row", "Type" : "None", "Direction" : "I"},
			{"Name" : "col", "Type" : "None", "Direction" : "I"},
			{"Name" : "flag", "Type" : "None", "Direction" : "I"},
			{"Name" : "num", "Type" : "None", "Direction" : "I"},
			{"Name" : "N", "Type" : "None", "Direction" : "I"},
			{"Name" : "custom_k", "Type" : "None", "Direction" : "I"},
			{"Name" : "custom_Tr", "Type" : "None", "Direction" : "I"},
			{"Name" : "custom_Tc", "Type" : "None", "Direction" : "I"},
			{"Name" : "WEIGHT1_V_0_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_Load_Fire_fu_398", "Port" : "WEIGHT1_V_0_0"}]},
			{"Name" : "WEIGHT1_V_0_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_Load_Fire_fu_398", "Port" : "WEIGHT1_V_0_1"}]},
			{"Name" : "WEIGHT1_V_0_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_Load_Fire_fu_398", "Port" : "WEIGHT1_V_0_2"}]},
			{"Name" : "WEIGHT1_V_0_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_Load_Fire_fu_398", "Port" : "WEIGHT1_V_0_3"}]},
			{"Name" : "WEIGHT1_V_0_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_Load_Fire_fu_398", "Port" : "WEIGHT1_V_0_4"}]},
			{"Name" : "WEIGHT1_V_0_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_Load_Fire_fu_398", "Port" : "WEIGHT1_V_0_5"}]},
			{"Name" : "WEIGHT1_V_0_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_Load_Fire_fu_398", "Port" : "WEIGHT1_V_0_6"}]},
			{"Name" : "WEIGHT1_V_1_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_Load_Fire_fu_398", "Port" : "WEIGHT1_V_1_0"}]},
			{"Name" : "WEIGHT1_V_1_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_Load_Fire_fu_398", "Port" : "WEIGHT1_V_1_1"}]},
			{"Name" : "WEIGHT1_V_1_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_Load_Fire_fu_398", "Port" : "WEIGHT1_V_1_2"}]},
			{"Name" : "WEIGHT1_V_1_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_Load_Fire_fu_398", "Port" : "WEIGHT1_V_1_3"}]},
			{"Name" : "WEIGHT1_V_1_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_Load_Fire_fu_398", "Port" : "WEIGHT1_V_1_4"}]},
			{"Name" : "WEIGHT1_V_1_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_Load_Fire_fu_398", "Port" : "WEIGHT1_V_1_5"}]},
			{"Name" : "WEIGHT1_V_1_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_Load_Fire_fu_398", "Port" : "WEIGHT1_V_1_6"}]},
			{"Name" : "WEIGHT1_V_2_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_Load_Fire_fu_398", "Port" : "WEIGHT1_V_2_0"}]},
			{"Name" : "WEIGHT1_V_2_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_Load_Fire_fu_398", "Port" : "WEIGHT1_V_2_1"}]},
			{"Name" : "WEIGHT1_V_2_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_Load_Fire_fu_398", "Port" : "WEIGHT1_V_2_2"}]},
			{"Name" : "WEIGHT1_V_2_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_Load_Fire_fu_398", "Port" : "WEIGHT1_V_2_3"}]},
			{"Name" : "WEIGHT1_V_2_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_Load_Fire_fu_398", "Port" : "WEIGHT1_V_2_4"}]},
			{"Name" : "WEIGHT1_V_2_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_Load_Fire_fu_398", "Port" : "WEIGHT1_V_2_5"}]},
			{"Name" : "WEIGHT1_V_2_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_Load_Fire_fu_398", "Port" : "WEIGHT1_V_2_6"}]},
			{"Name" : "WEIGHT1_V_3_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_Load_Fire_fu_398", "Port" : "WEIGHT1_V_3_0"}]},
			{"Name" : "WEIGHT1_V_3_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_Load_Fire_fu_398", "Port" : "WEIGHT1_V_3_1"}]},
			{"Name" : "WEIGHT1_V_3_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_Load_Fire_fu_398", "Port" : "WEIGHT1_V_3_2"}]},
			{"Name" : "WEIGHT1_V_3_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_Load_Fire_fu_398", "Port" : "WEIGHT1_V_3_3"}]},
			{"Name" : "WEIGHT1_V_3_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_Load_Fire_fu_398", "Port" : "WEIGHT1_V_3_4"}]},
			{"Name" : "WEIGHT1_V_3_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_Load_Fire_fu_398", "Port" : "WEIGHT1_V_3_5"}]},
			{"Name" : "WEIGHT1_V_3_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_Load_Fire_fu_398", "Port" : "WEIGHT1_V_3_6"}]},
			{"Name" : "WEIGHT1_V_4_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_Load_Fire_fu_398", "Port" : "WEIGHT1_V_4_0"}]},
			{"Name" : "WEIGHT1_V_4_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_Load_Fire_fu_398", "Port" : "WEIGHT1_V_4_1"}]},
			{"Name" : "WEIGHT1_V_4_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_Load_Fire_fu_398", "Port" : "WEIGHT1_V_4_2"}]},
			{"Name" : "WEIGHT1_V_4_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_Load_Fire_fu_398", "Port" : "WEIGHT1_V_4_3"}]},
			{"Name" : "WEIGHT1_V_4_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_Load_Fire_fu_398", "Port" : "WEIGHT1_V_4_4"}]},
			{"Name" : "WEIGHT1_V_4_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_Load_Fire_fu_398", "Port" : "WEIGHT1_V_4_5"}]},
			{"Name" : "WEIGHT1_V_4_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_Load_Fire_fu_398", "Port" : "WEIGHT1_V_4_6"}]},
			{"Name" : "WEIGHT1_V_5_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_Load_Fire_fu_398", "Port" : "WEIGHT1_V_5_0"}]},
			{"Name" : "WEIGHT1_V_5_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_Load_Fire_fu_398", "Port" : "WEIGHT1_V_5_1"}]},
			{"Name" : "WEIGHT1_V_5_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_Load_Fire_fu_398", "Port" : "WEIGHT1_V_5_2"}]},
			{"Name" : "WEIGHT1_V_5_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_Load_Fire_fu_398", "Port" : "WEIGHT1_V_5_3"}]},
			{"Name" : "WEIGHT1_V_5_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_Load_Fire_fu_398", "Port" : "WEIGHT1_V_5_4"}]},
			{"Name" : "WEIGHT1_V_5_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_Load_Fire_fu_398", "Port" : "WEIGHT1_V_5_5"}]},
			{"Name" : "WEIGHT1_V_5_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_Load_Fire_fu_398", "Port" : "WEIGHT1_V_5_6"}]},
			{"Name" : "WEIGHT1_V_6_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_Load_Fire_fu_398", "Port" : "WEIGHT1_V_6_0"}]},
			{"Name" : "WEIGHT1_V_6_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_Load_Fire_fu_398", "Port" : "WEIGHT1_V_6_1"}]},
			{"Name" : "WEIGHT1_V_6_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_Load_Fire_fu_398", "Port" : "WEIGHT1_V_6_2"}]},
			{"Name" : "WEIGHT1_V_6_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_Load_Fire_fu_398", "Port" : "WEIGHT1_V_6_3"}]},
			{"Name" : "WEIGHT1_V_6_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_Load_Fire_fu_398", "Port" : "WEIGHT1_V_6_4"}]},
			{"Name" : "WEIGHT1_V_6_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_Load_Fire_fu_398", "Port" : "WEIGHT1_V_6_5"}]},
			{"Name" : "WEIGHT1_V_6_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_Load_Fire_fu_398", "Port" : "WEIGHT1_V_6_6"}]},
			{"Name" : "WEIGHT1_V_7_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_Load_Fire_fu_398", "Port" : "WEIGHT1_V_7_0"}]},
			{"Name" : "WEIGHT1_V_7_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_Load_Fire_fu_398", "Port" : "WEIGHT1_V_7_1"}]},
			{"Name" : "WEIGHT1_V_7_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_Load_Fire_fu_398", "Port" : "WEIGHT1_V_7_2"}]},
			{"Name" : "WEIGHT1_V_7_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_Load_Fire_fu_398", "Port" : "WEIGHT1_V_7_3"}]},
			{"Name" : "WEIGHT1_V_7_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_Load_Fire_fu_398", "Port" : "WEIGHT1_V_7_4"}]},
			{"Name" : "WEIGHT1_V_7_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_Load_Fire_fu_398", "Port" : "WEIGHT1_V_7_5"}]},
			{"Name" : "WEIGHT1_V_7_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_Load_Fire_fu_398", "Port" : "WEIGHT1_V_7_6"}]},
			{"Name" : "IFM_V_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_Load_Fire_fu_398", "Port" : "IFM_V_0"}]},
			{"Name" : "IFM_V_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_Load_Fire_fu_398", "Port" : "IFM_V_1"}]},
			{"Name" : "IFM_V_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_Load_Fire_fu_398", "Port" : "IFM_V_2"}]},
			{"Name" : "IFM_V_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_Load_Fire_fu_398", "Port" : "IFM_V_3"}]},
			{"Name" : "IFM_V_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_Load_Fire_fu_398", "Port" : "IFM_V_4"}]},
			{"Name" : "IFM_V_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_Load_Fire_fu_398", "Port" : "IFM_V_5"}]},
			{"Name" : "IFM_V_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_Load_Fire_fu_398", "Port" : "IFM_V_6"}]},
			{"Name" : "WEIGHT1_DB_V_0_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_Load_Fire_fu_398", "Port" : "WEIGHT1_DB_V_0_0"}]},
			{"Name" : "WEIGHT1_DB_V_0_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_Load_Fire_fu_398", "Port" : "WEIGHT1_DB_V_0_1"}]},
			{"Name" : "WEIGHT1_DB_V_0_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_Load_Fire_fu_398", "Port" : "WEIGHT1_DB_V_0_2"}]},
			{"Name" : "WEIGHT1_DB_V_0_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_Load_Fire_fu_398", "Port" : "WEIGHT1_DB_V_0_3"}]},
			{"Name" : "WEIGHT1_DB_V_0_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_Load_Fire_fu_398", "Port" : "WEIGHT1_DB_V_0_4"}]},
			{"Name" : "WEIGHT1_DB_V_0_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_Load_Fire_fu_398", "Port" : "WEIGHT1_DB_V_0_5"}]},
			{"Name" : "WEIGHT1_DB_V_0_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_Load_Fire_fu_398", "Port" : "WEIGHT1_DB_V_0_6"}]},
			{"Name" : "WEIGHT1_DB_V_1_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_Load_Fire_fu_398", "Port" : "WEIGHT1_DB_V_1_0"}]},
			{"Name" : "WEIGHT1_DB_V_1_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_Load_Fire_fu_398", "Port" : "WEIGHT1_DB_V_1_1"}]},
			{"Name" : "WEIGHT1_DB_V_1_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_Load_Fire_fu_398", "Port" : "WEIGHT1_DB_V_1_2"}]},
			{"Name" : "WEIGHT1_DB_V_1_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_Load_Fire_fu_398", "Port" : "WEIGHT1_DB_V_1_3"}]},
			{"Name" : "WEIGHT1_DB_V_1_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_Load_Fire_fu_398", "Port" : "WEIGHT1_DB_V_1_4"}]},
			{"Name" : "WEIGHT1_DB_V_1_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_Load_Fire_fu_398", "Port" : "WEIGHT1_DB_V_1_5"}]},
			{"Name" : "WEIGHT1_DB_V_1_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_Load_Fire_fu_398", "Port" : "WEIGHT1_DB_V_1_6"}]},
			{"Name" : "WEIGHT1_DB_V_2_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_Load_Fire_fu_398", "Port" : "WEIGHT1_DB_V_2_0"}]},
			{"Name" : "WEIGHT1_DB_V_2_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_Load_Fire_fu_398", "Port" : "WEIGHT1_DB_V_2_1"}]},
			{"Name" : "WEIGHT1_DB_V_2_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_Load_Fire_fu_398", "Port" : "WEIGHT1_DB_V_2_2"}]},
			{"Name" : "WEIGHT1_DB_V_2_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_Load_Fire_fu_398", "Port" : "WEIGHT1_DB_V_2_3"}]},
			{"Name" : "WEIGHT1_DB_V_2_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_Load_Fire_fu_398", "Port" : "WEIGHT1_DB_V_2_4"}]},
			{"Name" : "WEIGHT1_DB_V_2_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_Load_Fire_fu_398", "Port" : "WEIGHT1_DB_V_2_5"}]},
			{"Name" : "WEIGHT1_DB_V_2_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_Load_Fire_fu_398", "Port" : "WEIGHT1_DB_V_2_6"}]},
			{"Name" : "WEIGHT1_DB_V_3_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_Load_Fire_fu_398", "Port" : "WEIGHT1_DB_V_3_0"}]},
			{"Name" : "WEIGHT1_DB_V_3_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_Load_Fire_fu_398", "Port" : "WEIGHT1_DB_V_3_1"}]},
			{"Name" : "WEIGHT1_DB_V_3_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_Load_Fire_fu_398", "Port" : "WEIGHT1_DB_V_3_2"}]},
			{"Name" : "WEIGHT1_DB_V_3_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_Load_Fire_fu_398", "Port" : "WEIGHT1_DB_V_3_3"}]},
			{"Name" : "WEIGHT1_DB_V_3_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_Load_Fire_fu_398", "Port" : "WEIGHT1_DB_V_3_4"}]},
			{"Name" : "WEIGHT1_DB_V_3_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_Load_Fire_fu_398", "Port" : "WEIGHT1_DB_V_3_5"}]},
			{"Name" : "WEIGHT1_DB_V_3_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_Load_Fire_fu_398", "Port" : "WEIGHT1_DB_V_3_6"}]},
			{"Name" : "WEIGHT1_DB_V_4_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_Load_Fire_fu_398", "Port" : "WEIGHT1_DB_V_4_0"}]},
			{"Name" : "WEIGHT1_DB_V_4_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_Load_Fire_fu_398", "Port" : "WEIGHT1_DB_V_4_1"}]},
			{"Name" : "WEIGHT1_DB_V_4_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_Load_Fire_fu_398", "Port" : "WEIGHT1_DB_V_4_2"}]},
			{"Name" : "WEIGHT1_DB_V_4_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_Load_Fire_fu_398", "Port" : "WEIGHT1_DB_V_4_3"}]},
			{"Name" : "WEIGHT1_DB_V_4_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_Load_Fire_fu_398", "Port" : "WEIGHT1_DB_V_4_4"}]},
			{"Name" : "WEIGHT1_DB_V_4_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_Load_Fire_fu_398", "Port" : "WEIGHT1_DB_V_4_5"}]},
			{"Name" : "WEIGHT1_DB_V_4_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_Load_Fire_fu_398", "Port" : "WEIGHT1_DB_V_4_6"}]},
			{"Name" : "WEIGHT1_DB_V_5_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_Load_Fire_fu_398", "Port" : "WEIGHT1_DB_V_5_0"}]},
			{"Name" : "WEIGHT1_DB_V_5_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_Load_Fire_fu_398", "Port" : "WEIGHT1_DB_V_5_1"}]},
			{"Name" : "WEIGHT1_DB_V_5_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_Load_Fire_fu_398", "Port" : "WEIGHT1_DB_V_5_2"}]},
			{"Name" : "WEIGHT1_DB_V_5_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_Load_Fire_fu_398", "Port" : "WEIGHT1_DB_V_5_3"}]},
			{"Name" : "WEIGHT1_DB_V_5_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_Load_Fire_fu_398", "Port" : "WEIGHT1_DB_V_5_4"}]},
			{"Name" : "WEIGHT1_DB_V_5_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_Load_Fire_fu_398", "Port" : "WEIGHT1_DB_V_5_5"}]},
			{"Name" : "WEIGHT1_DB_V_5_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_Load_Fire_fu_398", "Port" : "WEIGHT1_DB_V_5_6"}]},
			{"Name" : "WEIGHT1_DB_V_6_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_Load_Fire_fu_398", "Port" : "WEIGHT1_DB_V_6_0"}]},
			{"Name" : "WEIGHT1_DB_V_6_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_Load_Fire_fu_398", "Port" : "WEIGHT1_DB_V_6_1"}]},
			{"Name" : "WEIGHT1_DB_V_6_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_Load_Fire_fu_398", "Port" : "WEIGHT1_DB_V_6_2"}]},
			{"Name" : "WEIGHT1_DB_V_6_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_Load_Fire_fu_398", "Port" : "WEIGHT1_DB_V_6_3"}]},
			{"Name" : "WEIGHT1_DB_V_6_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_Load_Fire_fu_398", "Port" : "WEIGHT1_DB_V_6_4"}]},
			{"Name" : "WEIGHT1_DB_V_6_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_Load_Fire_fu_398", "Port" : "WEIGHT1_DB_V_6_5"}]},
			{"Name" : "WEIGHT1_DB_V_6_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_Load_Fire_fu_398", "Port" : "WEIGHT1_DB_V_6_6"}]},
			{"Name" : "WEIGHT1_DB_V_7_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_Load_Fire_fu_398", "Port" : "WEIGHT1_DB_V_7_0"}]},
			{"Name" : "WEIGHT1_DB_V_7_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_Load_Fire_fu_398", "Port" : "WEIGHT1_DB_V_7_1"}]},
			{"Name" : "WEIGHT1_DB_V_7_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_Load_Fire_fu_398", "Port" : "WEIGHT1_DB_V_7_2"}]},
			{"Name" : "WEIGHT1_DB_V_7_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_Load_Fire_fu_398", "Port" : "WEIGHT1_DB_V_7_3"}]},
			{"Name" : "WEIGHT1_DB_V_7_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_Load_Fire_fu_398", "Port" : "WEIGHT1_DB_V_7_4"}]},
			{"Name" : "WEIGHT1_DB_V_7_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_Load_Fire_fu_398", "Port" : "WEIGHT1_DB_V_7_5"}]},
			{"Name" : "WEIGHT1_DB_V_7_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_Load_Fire_fu_398", "Port" : "WEIGHT1_DB_V_7_6"}]},
			{"Name" : "IFM_DB_V_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_Load_Fire_fu_398", "Port" : "IFM_DB_V_0"}]},
			{"Name" : "IFM_DB_V_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_Load_Fire_fu_398", "Port" : "IFM_DB_V_1"}]},
			{"Name" : "IFM_DB_V_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_Load_Fire_fu_398", "Port" : "IFM_DB_V_2"}]},
			{"Name" : "IFM_DB_V_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_Load_Fire_fu_398", "Port" : "IFM_DB_V_3"}]},
			{"Name" : "IFM_DB_V_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_Load_Fire_fu_398", "Port" : "IFM_DB_V_4"}]},
			{"Name" : "IFM_DB_V_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_Load_Fire_fu_398", "Port" : "IFM_DB_V_5"}]},
			{"Name" : "IFM_DB_V_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_Load_Fire_fu_398", "Port" : "IFM_DB_V_6"}]},
			{"Name" : "OFM_V_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_Load_Fire_fu_398", "Port" : "OFM_0_V"},
					{"ID" : "210", "SubInstance" : "grp_OFM_STORE_fu_698", "Port" : "OFM_0_V"}]},
			{"Name" : "OFM_V_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_Load_Fire_fu_398", "Port" : "OFM_1_V"},
					{"ID" : "210", "SubInstance" : "grp_OFM_STORE_fu_698", "Port" : "OFM_1_V"}]},
			{"Name" : "OFM_V_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_Load_Fire_fu_398", "Port" : "OFM_2_V"},
					{"ID" : "210", "SubInstance" : "grp_OFM_STORE_fu_698", "Port" : "OFM_2_V"}]},
			{"Name" : "OFM_V_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_Load_Fire_fu_398", "Port" : "OFM_3_V"},
					{"ID" : "210", "SubInstance" : "grp_OFM_STORE_fu_698", "Port" : "OFM_3_V"}]},
			{"Name" : "OFM_V_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_Load_Fire_fu_398", "Port" : "OFM_4_V"},
					{"ID" : "210", "SubInstance" : "grp_OFM_STORE_fu_698", "Port" : "OFM_4_V"}]},
			{"Name" : "OFM_V_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_Load_Fire_fu_398", "Port" : "OFM_5_V"},
					{"ID" : "210", "SubInstance" : "grp_OFM_STORE_fu_698", "Port" : "OFM_5_V"}]},
			{"Name" : "OFM_V_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_Load_Fire_fu_398", "Port" : "OFM_6_V"},
					{"ID" : "210", "SubInstance" : "grp_OFM_STORE_fu_698", "Port" : "OFM_6_V"}]},
			{"Name" : "OFM_V_7", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_Load_Fire_fu_398", "Port" : "OFM_7_V"},
					{"ID" : "210", "SubInstance" : "grp_OFM_STORE_fu_698", "Port" : "OFM_7_V"}]},
			{"Name" : "OFM_DB_V_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_Load_Fire_fu_398", "Port" : "OFM_0_V"},
					{"ID" : "210", "SubInstance" : "grp_OFM_STORE_fu_698", "Port" : "OFM_0_V"}]},
			{"Name" : "OFM_DB_V_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_Load_Fire_fu_398", "Port" : "OFM_1_V"},
					{"ID" : "210", "SubInstance" : "grp_OFM_STORE_fu_698", "Port" : "OFM_1_V"}]},
			{"Name" : "OFM_DB_V_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_Load_Fire_fu_398", "Port" : "OFM_2_V"},
					{"ID" : "210", "SubInstance" : "grp_OFM_STORE_fu_698", "Port" : "OFM_2_V"}]},
			{"Name" : "OFM_DB_V_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_Load_Fire_fu_398", "Port" : "OFM_3_V"},
					{"ID" : "210", "SubInstance" : "grp_OFM_STORE_fu_698", "Port" : "OFM_3_V"}]},
			{"Name" : "OFM_DB_V_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_Load_Fire_fu_398", "Port" : "OFM_4_V"},
					{"ID" : "210", "SubInstance" : "grp_OFM_STORE_fu_698", "Port" : "OFM_4_V"}]},
			{"Name" : "OFM_DB_V_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_Load_Fire_fu_398", "Port" : "OFM_5_V"},
					{"ID" : "210", "SubInstance" : "grp_OFM_STORE_fu_698", "Port" : "OFM_5_V"}]},
			{"Name" : "OFM_DB_V_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_Load_Fire_fu_398", "Port" : "OFM_6_V"},
					{"ID" : "210", "SubInstance" : "grp_OFM_STORE_fu_698", "Port" : "OFM_6_V"}]},
			{"Name" : "OFM_DB_V_7", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "20", "SubInstance" : "grp_Load_Fire_fu_398", "Port" : "OFM_7_V"},
					{"ID" : "210", "SubInstance" : "grp_OFM_STORE_fu_698", "Port" : "OFM_7_V"}]},
			{"Name" : "BIAS_DB_V", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "210", "SubInstance" : "grp_OFM_STORE_fu_698", "Port" : "BIAS_V"}]},
			{"Name" : "BIAS_V", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "210", "SubInstance" : "grp_OFM_STORE_fu_698", "Port" : "BIAS_V"}]}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.OFM_V_0_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.OFM_V_1_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.OFM_V_2_U", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.OFM_V_3_U", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.OFM_V_4_U", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.OFM_V_5_U", "Parent" : "0"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.OFM_V_6_U", "Parent" : "0"},
	{"ID" : "8", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.OFM_V_7_U", "Parent" : "0"},
	{"ID" : "9", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.OFM_DB_V_0_U", "Parent" : "0"},
	{"ID" : "10", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.OFM_DB_V_1_U", "Parent" : "0"},
	{"ID" : "11", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.OFM_DB_V_2_U", "Parent" : "0"},
	{"ID" : "12", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.OFM_DB_V_3_U", "Parent" : "0"},
	{"ID" : "13", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.OFM_DB_V_4_U", "Parent" : "0"},
	{"ID" : "14", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.OFM_DB_V_5_U", "Parent" : "0"},
	{"ID" : "15", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.OFM_DB_V_6_U", "Parent" : "0"},
	{"ID" : "16", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.OFM_DB_V_7_U", "Parent" : "0"},
	{"ID" : "17", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.BIAS_DB_V_U", "Parent" : "0"},
	{"ID" : "18", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.BIAS_V_U", "Parent" : "0"},
	{"ID" : "19", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.top_CRTL_BUS_s_axi_U", "Parent" : "0"},
	{"ID" : "20", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398", "Parent" : "0", "Child" : ["21", "22", "23", "24", "25", "26", "27", "28", "29", "30", "31", "32", "33", "34", "35", "36", "37", "38", "39", "40", "41", "42", "43", "44", "45", "46", "47", "48", "49", "50", "51", "52", "53", "54", "55", "56", "57", "58", "59", "60", "61", "62", "63", "64", "65", "66", "67", "68", "69", "70", "71", "72", "73", "74", "75", "76", "77", "78", "79", "80", "81", "82", "83", "84", "85", "86", "87", "88", "89", "90", "91", "92", "93", "94", "95", "96", "97", "98", "99", "100", "101", "102", "103", "104", "105", "106", "107", "108", "109", "110", "111", "112", "113", "114", "115", "116", "117", "118", "119", "120", "121", "122", "123", "124", "125", "126", "127", "128", "129", "130", "131", "132", "133", "134", "135", "136", "137", "138", "139", "140", "141", "142", "143", "144", "145", "146", "147", "206", "208"],
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
					{"ID" : "206", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "input_dma_W_V_data"}]},
			{"Name" : "input_dma_W_V_last", "Type" : "Axis", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "206", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "input_dma_W_V_last"}]},
			{"Name" : "input_dma_I_V_data", "Type" : "Axis", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "208", "SubInstance" : "grp_LOAD_IFM_fu_778", "Port" : "input_dma_I_V_data"}]},
			{"Name" : "input_dma_I_V_last", "Type" : "Axis", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "208", "SubInstance" : "grp_LOAD_IFM_fu_778", "Port" : "input_dma_I_V_last"}]},
			{"Name" : "OFM_0_V", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "OFM_0_V"}]},
			{"Name" : "OFM_1_V", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "OFM_1_V"}]},
			{"Name" : "OFM_2_V", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "OFM_2_V"}]},
			{"Name" : "OFM_3_V", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "OFM_3_V"}]},
			{"Name" : "OFM_4_V", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "OFM_4_V"}]},
			{"Name" : "OFM_5_V", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "OFM_5_V"}]},
			{"Name" : "OFM_6_V", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "OFM_6_V"}]},
			{"Name" : "OFM_7_V", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "OFM_7_V"}]},
			{"Name" : "row", "Type" : "None", "Direction" : "I"},
			{"Name" : "col", "Type" : "None", "Direction" : "I"},
			{"Name" : "N", "Type" : "None", "Direction" : "I"},
			{"Name" : "custom_k", "Type" : "None", "Direction" : "I"},
			{"Name" : "custom_Tr", "Type" : "None", "Direction" : "I"},
			{"Name" : "custom_Tc", "Type" : "None", "Direction" : "I"},
			{"Name" : "WEIGHT1_V_0_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_0_0_V"},
					{"ID" : "206", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_0_0_V"}]},
			{"Name" : "WEIGHT1_V_0_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_0_1_V"},
					{"ID" : "206", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_0_1_V"}]},
			{"Name" : "WEIGHT1_V_0_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_0_2_V"},
					{"ID" : "206", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_0_2_V"}]},
			{"Name" : "WEIGHT1_V_0_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_0_3_V"},
					{"ID" : "206", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_0_3_V"}]},
			{"Name" : "WEIGHT1_V_0_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_0_4_V"},
					{"ID" : "206", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_0_4_V"}]},
			{"Name" : "WEIGHT1_V_0_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_0_5_V"},
					{"ID" : "206", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_0_5_V"}]},
			{"Name" : "WEIGHT1_V_0_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_0_6_V"},
					{"ID" : "206", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_0_6_V"}]},
			{"Name" : "WEIGHT1_V_1_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_1_0_V"},
					{"ID" : "206", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_1_0_V"}]},
			{"Name" : "WEIGHT1_V_1_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_1_1_V"},
					{"ID" : "206", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_1_1_V"}]},
			{"Name" : "WEIGHT1_V_1_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_1_2_V"},
					{"ID" : "206", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_1_2_V"}]},
			{"Name" : "WEIGHT1_V_1_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_1_3_V"},
					{"ID" : "206", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_1_3_V"}]},
			{"Name" : "WEIGHT1_V_1_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_1_4_V"},
					{"ID" : "206", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_1_4_V"}]},
			{"Name" : "WEIGHT1_V_1_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_1_5_V"},
					{"ID" : "206", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_1_5_V"}]},
			{"Name" : "WEIGHT1_V_1_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_1_6_V"},
					{"ID" : "206", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_1_6_V"}]},
			{"Name" : "WEIGHT1_V_2_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_2_0_V"},
					{"ID" : "206", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_2_0_V"}]},
			{"Name" : "WEIGHT1_V_2_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_2_1_V"},
					{"ID" : "206", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_2_1_V"}]},
			{"Name" : "WEIGHT1_V_2_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_2_2_V"},
					{"ID" : "206", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_2_2_V"}]},
			{"Name" : "WEIGHT1_V_2_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_2_3_V"},
					{"ID" : "206", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_2_3_V"}]},
			{"Name" : "WEIGHT1_V_2_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_2_4_V"},
					{"ID" : "206", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_2_4_V"}]},
			{"Name" : "WEIGHT1_V_2_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_2_5_V"},
					{"ID" : "206", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_2_5_V"}]},
			{"Name" : "WEIGHT1_V_2_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_2_6_V"},
					{"ID" : "206", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_2_6_V"}]},
			{"Name" : "WEIGHT1_V_3_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_3_0_V"},
					{"ID" : "206", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_3_0_V"}]},
			{"Name" : "WEIGHT1_V_3_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_3_1_V"},
					{"ID" : "206", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_3_1_V"}]},
			{"Name" : "WEIGHT1_V_3_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_3_2_V"},
					{"ID" : "206", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_3_2_V"}]},
			{"Name" : "WEIGHT1_V_3_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_3_3_V"},
					{"ID" : "206", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_3_3_V"}]},
			{"Name" : "WEIGHT1_V_3_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_3_4_V"},
					{"ID" : "206", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_3_4_V"}]},
			{"Name" : "WEIGHT1_V_3_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_3_5_V"},
					{"ID" : "206", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_3_5_V"}]},
			{"Name" : "WEIGHT1_V_3_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_3_6_V"},
					{"ID" : "206", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_3_6_V"}]},
			{"Name" : "WEIGHT1_V_4_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_4_0_V"},
					{"ID" : "206", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_4_0_V"}]},
			{"Name" : "WEIGHT1_V_4_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_4_1_V"},
					{"ID" : "206", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_4_1_V"}]},
			{"Name" : "WEIGHT1_V_4_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_4_2_V"},
					{"ID" : "206", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_4_2_V"}]},
			{"Name" : "WEIGHT1_V_4_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_4_3_V"},
					{"ID" : "206", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_4_3_V"}]},
			{"Name" : "WEIGHT1_V_4_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_4_4_V"},
					{"ID" : "206", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_4_4_V"}]},
			{"Name" : "WEIGHT1_V_4_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_4_5_V"},
					{"ID" : "206", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_4_5_V"}]},
			{"Name" : "WEIGHT1_V_4_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_4_6_V"},
					{"ID" : "206", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_4_6_V"}]},
			{"Name" : "WEIGHT1_V_5_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_5_0_V"},
					{"ID" : "206", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_5_0_V"}]},
			{"Name" : "WEIGHT1_V_5_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_5_1_V"},
					{"ID" : "206", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_5_1_V"}]},
			{"Name" : "WEIGHT1_V_5_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_5_2_V"},
					{"ID" : "206", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_5_2_V"}]},
			{"Name" : "WEIGHT1_V_5_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_5_3_V"},
					{"ID" : "206", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_5_3_V"}]},
			{"Name" : "WEIGHT1_V_5_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_5_4_V"},
					{"ID" : "206", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_5_4_V"}]},
			{"Name" : "WEIGHT1_V_5_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_5_5_V"},
					{"ID" : "206", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_5_5_V"}]},
			{"Name" : "WEIGHT1_V_5_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_5_6_V"},
					{"ID" : "206", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_5_6_V"}]},
			{"Name" : "WEIGHT1_V_6_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_6_0_V"},
					{"ID" : "206", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_6_0_V"}]},
			{"Name" : "WEIGHT1_V_6_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_6_1_V"},
					{"ID" : "206", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_6_1_V"}]},
			{"Name" : "WEIGHT1_V_6_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_6_2_V"},
					{"ID" : "206", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_6_2_V"}]},
			{"Name" : "WEIGHT1_V_6_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_6_3_V"},
					{"ID" : "206", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_6_3_V"}]},
			{"Name" : "WEIGHT1_V_6_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_6_4_V"},
					{"ID" : "206", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_6_4_V"}]},
			{"Name" : "WEIGHT1_V_6_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_6_5_V"},
					{"ID" : "206", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_6_5_V"}]},
			{"Name" : "WEIGHT1_V_6_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_6_6_V"},
					{"ID" : "206", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_6_6_V"}]},
			{"Name" : "WEIGHT1_V_7_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_7_0_V"},
					{"ID" : "206", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_7_0_V"}]},
			{"Name" : "WEIGHT1_V_7_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_7_1_V"},
					{"ID" : "206", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_7_1_V"}]},
			{"Name" : "WEIGHT1_V_7_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_7_2_V"},
					{"ID" : "206", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_7_2_V"}]},
			{"Name" : "WEIGHT1_V_7_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_7_3_V"},
					{"ID" : "206", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_7_3_V"}]},
			{"Name" : "WEIGHT1_V_7_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_7_4_V"},
					{"ID" : "206", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_7_4_V"}]},
			{"Name" : "WEIGHT1_V_7_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_7_5_V"},
					{"ID" : "206", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_7_5_V"}]},
			{"Name" : "WEIGHT1_V_7_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_7_6_V"},
					{"ID" : "206", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_7_6_V"}]},
			{"Name" : "IFM_V_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "IFM_0_V"},
					{"ID" : "208", "SubInstance" : "grp_LOAD_IFM_fu_778", "Port" : "IFM_0_V"}]},
			{"Name" : "IFM_V_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "IFM_1_V"},
					{"ID" : "208", "SubInstance" : "grp_LOAD_IFM_fu_778", "Port" : "IFM_1_V"}]},
			{"Name" : "IFM_V_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "IFM_2_V"},
					{"ID" : "208", "SubInstance" : "grp_LOAD_IFM_fu_778", "Port" : "IFM_2_V"}]},
			{"Name" : "IFM_V_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "IFM_3_V"},
					{"ID" : "208", "SubInstance" : "grp_LOAD_IFM_fu_778", "Port" : "IFM_3_V"}]},
			{"Name" : "IFM_V_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "IFM_4_V"},
					{"ID" : "208", "SubInstance" : "grp_LOAD_IFM_fu_778", "Port" : "IFM_4_V"}]},
			{"Name" : "IFM_V_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "IFM_5_V"},
					{"ID" : "208", "SubInstance" : "grp_LOAD_IFM_fu_778", "Port" : "IFM_5_V"}]},
			{"Name" : "IFM_V_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "IFM_6_V"},
					{"ID" : "208", "SubInstance" : "grp_LOAD_IFM_fu_778", "Port" : "IFM_6_V"}]},
			{"Name" : "WEIGHT1_DB_V_0_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_0_0_V"},
					{"ID" : "206", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_0_0_V"}]},
			{"Name" : "WEIGHT1_DB_V_0_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_0_1_V"},
					{"ID" : "206", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_0_1_V"}]},
			{"Name" : "WEIGHT1_DB_V_0_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_0_2_V"},
					{"ID" : "206", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_0_2_V"}]},
			{"Name" : "WEIGHT1_DB_V_0_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_0_3_V"},
					{"ID" : "206", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_0_3_V"}]},
			{"Name" : "WEIGHT1_DB_V_0_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_0_4_V"},
					{"ID" : "206", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_0_4_V"}]},
			{"Name" : "WEIGHT1_DB_V_0_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_0_5_V"},
					{"ID" : "206", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_0_5_V"}]},
			{"Name" : "WEIGHT1_DB_V_0_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_0_6_V"},
					{"ID" : "206", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_0_6_V"}]},
			{"Name" : "WEIGHT1_DB_V_1_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_1_0_V"},
					{"ID" : "206", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_1_0_V"}]},
			{"Name" : "WEIGHT1_DB_V_1_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_1_1_V"},
					{"ID" : "206", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_1_1_V"}]},
			{"Name" : "WEIGHT1_DB_V_1_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_1_2_V"},
					{"ID" : "206", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_1_2_V"}]},
			{"Name" : "WEIGHT1_DB_V_1_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_1_3_V"},
					{"ID" : "206", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_1_3_V"}]},
			{"Name" : "WEIGHT1_DB_V_1_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_1_4_V"},
					{"ID" : "206", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_1_4_V"}]},
			{"Name" : "WEIGHT1_DB_V_1_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_1_5_V"},
					{"ID" : "206", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_1_5_V"}]},
			{"Name" : "WEIGHT1_DB_V_1_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_1_6_V"},
					{"ID" : "206", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_1_6_V"}]},
			{"Name" : "WEIGHT1_DB_V_2_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_2_0_V"},
					{"ID" : "206", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_2_0_V"}]},
			{"Name" : "WEIGHT1_DB_V_2_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_2_1_V"},
					{"ID" : "206", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_2_1_V"}]},
			{"Name" : "WEIGHT1_DB_V_2_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_2_2_V"},
					{"ID" : "206", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_2_2_V"}]},
			{"Name" : "WEIGHT1_DB_V_2_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_2_3_V"},
					{"ID" : "206", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_2_3_V"}]},
			{"Name" : "WEIGHT1_DB_V_2_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_2_4_V"},
					{"ID" : "206", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_2_4_V"}]},
			{"Name" : "WEIGHT1_DB_V_2_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_2_5_V"},
					{"ID" : "206", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_2_5_V"}]},
			{"Name" : "WEIGHT1_DB_V_2_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_2_6_V"},
					{"ID" : "206", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_2_6_V"}]},
			{"Name" : "WEIGHT1_DB_V_3_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_3_0_V"},
					{"ID" : "206", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_3_0_V"}]},
			{"Name" : "WEIGHT1_DB_V_3_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_3_1_V"},
					{"ID" : "206", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_3_1_V"}]},
			{"Name" : "WEIGHT1_DB_V_3_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_3_2_V"},
					{"ID" : "206", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_3_2_V"}]},
			{"Name" : "WEIGHT1_DB_V_3_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_3_3_V"},
					{"ID" : "206", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_3_3_V"}]},
			{"Name" : "WEIGHT1_DB_V_3_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_3_4_V"},
					{"ID" : "206", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_3_4_V"}]},
			{"Name" : "WEIGHT1_DB_V_3_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_3_5_V"},
					{"ID" : "206", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_3_5_V"}]},
			{"Name" : "WEIGHT1_DB_V_3_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_3_6_V"},
					{"ID" : "206", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_3_6_V"}]},
			{"Name" : "WEIGHT1_DB_V_4_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_4_0_V"},
					{"ID" : "206", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_4_0_V"}]},
			{"Name" : "WEIGHT1_DB_V_4_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_4_1_V"},
					{"ID" : "206", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_4_1_V"}]},
			{"Name" : "WEIGHT1_DB_V_4_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_4_2_V"},
					{"ID" : "206", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_4_2_V"}]},
			{"Name" : "WEIGHT1_DB_V_4_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_4_3_V"},
					{"ID" : "206", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_4_3_V"}]},
			{"Name" : "WEIGHT1_DB_V_4_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_4_4_V"},
					{"ID" : "206", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_4_4_V"}]},
			{"Name" : "WEIGHT1_DB_V_4_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_4_5_V"},
					{"ID" : "206", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_4_5_V"}]},
			{"Name" : "WEIGHT1_DB_V_4_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_4_6_V"},
					{"ID" : "206", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_4_6_V"}]},
			{"Name" : "WEIGHT1_DB_V_5_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_5_0_V"},
					{"ID" : "206", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_5_0_V"}]},
			{"Name" : "WEIGHT1_DB_V_5_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_5_1_V"},
					{"ID" : "206", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_5_1_V"}]},
			{"Name" : "WEIGHT1_DB_V_5_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_5_2_V"},
					{"ID" : "206", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_5_2_V"}]},
			{"Name" : "WEIGHT1_DB_V_5_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_5_3_V"},
					{"ID" : "206", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_5_3_V"}]},
			{"Name" : "WEIGHT1_DB_V_5_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_5_4_V"},
					{"ID" : "206", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_5_4_V"}]},
			{"Name" : "WEIGHT1_DB_V_5_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_5_5_V"},
					{"ID" : "206", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_5_5_V"}]},
			{"Name" : "WEIGHT1_DB_V_5_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_5_6_V"},
					{"ID" : "206", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_5_6_V"}]},
			{"Name" : "WEIGHT1_DB_V_6_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_6_0_V"},
					{"ID" : "206", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_6_0_V"}]},
			{"Name" : "WEIGHT1_DB_V_6_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_6_1_V"},
					{"ID" : "206", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_6_1_V"}]},
			{"Name" : "WEIGHT1_DB_V_6_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_6_2_V"},
					{"ID" : "206", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_6_2_V"}]},
			{"Name" : "WEIGHT1_DB_V_6_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_6_3_V"},
					{"ID" : "206", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_6_3_V"}]},
			{"Name" : "WEIGHT1_DB_V_6_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_6_4_V"},
					{"ID" : "206", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_6_4_V"}]},
			{"Name" : "WEIGHT1_DB_V_6_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_6_5_V"},
					{"ID" : "206", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_6_5_V"}]},
			{"Name" : "WEIGHT1_DB_V_6_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_6_6_V"},
					{"ID" : "206", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_6_6_V"}]},
			{"Name" : "WEIGHT1_DB_V_7_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_7_0_V"},
					{"ID" : "206", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_7_0_V"}]},
			{"Name" : "WEIGHT1_DB_V_7_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_7_1_V"},
					{"ID" : "206", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_7_1_V"}]},
			{"Name" : "WEIGHT1_DB_V_7_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_7_2_V"},
					{"ID" : "206", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_7_2_V"}]},
			{"Name" : "WEIGHT1_DB_V_7_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_7_3_V"},
					{"ID" : "206", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_7_3_V"}]},
			{"Name" : "WEIGHT1_DB_V_7_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_7_4_V"},
					{"ID" : "206", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_7_4_V"}]},
			{"Name" : "WEIGHT1_DB_V_7_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_7_5_V"},
					{"ID" : "206", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_7_5_V"}]},
			{"Name" : "WEIGHT1_DB_V_7_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "WEIGHT1_7_6_V"},
					{"ID" : "206", "SubInstance" : "grp_LOAD_WEIGHT_DMA_fu_601", "Port" : "WEIGHT1_7_6_V"}]},
			{"Name" : "IFM_DB_V_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "IFM_0_V"},
					{"ID" : "208", "SubInstance" : "grp_LOAD_IFM_fu_778", "Port" : "IFM_0_V"}]},
			{"Name" : "IFM_DB_V_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "IFM_1_V"},
					{"ID" : "208", "SubInstance" : "grp_LOAD_IFM_fu_778", "Port" : "IFM_1_V"}]},
			{"Name" : "IFM_DB_V_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "IFM_2_V"},
					{"ID" : "208", "SubInstance" : "grp_LOAD_IFM_fu_778", "Port" : "IFM_2_V"}]},
			{"Name" : "IFM_DB_V_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "IFM_3_V"},
					{"ID" : "208", "SubInstance" : "grp_LOAD_IFM_fu_778", "Port" : "IFM_3_V"}]},
			{"Name" : "IFM_DB_V_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "IFM_4_V"},
					{"ID" : "208", "SubInstance" : "grp_LOAD_IFM_fu_778", "Port" : "IFM_4_V"}]},
			{"Name" : "IFM_DB_V_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "IFM_5_V"},
					{"ID" : "208", "SubInstance" : "grp_LOAD_IFM_fu_778", "Port" : "IFM_5_V"}]},
			{"Name" : "IFM_DB_V_6", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "grp_FIRE4_fu_387", "Port" : "IFM_6_V"},
					{"ID" : "208", "SubInstance" : "grp_LOAD_IFM_fu_778", "Port" : "IFM_6_V"}]}]},
	{"ID" : "21", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.WEIGHT1_V_0_0_U", "Parent" : "20"},
	{"ID" : "22", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.WEIGHT1_V_0_1_U", "Parent" : "20"},
	{"ID" : "23", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.WEIGHT1_V_0_2_U", "Parent" : "20"},
	{"ID" : "24", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.WEIGHT1_V_0_3_U", "Parent" : "20"},
	{"ID" : "25", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.WEIGHT1_V_0_4_U", "Parent" : "20"},
	{"ID" : "26", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.WEIGHT1_V_0_5_U", "Parent" : "20"},
	{"ID" : "27", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.WEIGHT1_V_0_6_U", "Parent" : "20"},
	{"ID" : "28", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.WEIGHT1_V_1_0_U", "Parent" : "20"},
	{"ID" : "29", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.WEIGHT1_V_1_1_U", "Parent" : "20"},
	{"ID" : "30", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.WEIGHT1_V_1_2_U", "Parent" : "20"},
	{"ID" : "31", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.WEIGHT1_V_1_3_U", "Parent" : "20"},
	{"ID" : "32", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.WEIGHT1_V_1_4_U", "Parent" : "20"},
	{"ID" : "33", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.WEIGHT1_V_1_5_U", "Parent" : "20"},
	{"ID" : "34", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.WEIGHT1_V_1_6_U", "Parent" : "20"},
	{"ID" : "35", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.WEIGHT1_V_2_0_U", "Parent" : "20"},
	{"ID" : "36", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.WEIGHT1_V_2_1_U", "Parent" : "20"},
	{"ID" : "37", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.WEIGHT1_V_2_2_U", "Parent" : "20"},
	{"ID" : "38", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.WEIGHT1_V_2_3_U", "Parent" : "20"},
	{"ID" : "39", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.WEIGHT1_V_2_4_U", "Parent" : "20"},
	{"ID" : "40", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.WEIGHT1_V_2_5_U", "Parent" : "20"},
	{"ID" : "41", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.WEIGHT1_V_2_6_U", "Parent" : "20"},
	{"ID" : "42", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.WEIGHT1_V_3_0_U", "Parent" : "20"},
	{"ID" : "43", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.WEIGHT1_V_3_1_U", "Parent" : "20"},
	{"ID" : "44", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.WEIGHT1_V_3_2_U", "Parent" : "20"},
	{"ID" : "45", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.WEIGHT1_V_3_3_U", "Parent" : "20"},
	{"ID" : "46", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.WEIGHT1_V_3_4_U", "Parent" : "20"},
	{"ID" : "47", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.WEIGHT1_V_3_5_U", "Parent" : "20"},
	{"ID" : "48", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.WEIGHT1_V_3_6_U", "Parent" : "20"},
	{"ID" : "49", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.WEIGHT1_V_4_0_U", "Parent" : "20"},
	{"ID" : "50", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.WEIGHT1_V_4_1_U", "Parent" : "20"},
	{"ID" : "51", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.WEIGHT1_V_4_2_U", "Parent" : "20"},
	{"ID" : "52", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.WEIGHT1_V_4_3_U", "Parent" : "20"},
	{"ID" : "53", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.WEIGHT1_V_4_4_U", "Parent" : "20"},
	{"ID" : "54", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.WEIGHT1_V_4_5_U", "Parent" : "20"},
	{"ID" : "55", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.WEIGHT1_V_4_6_U", "Parent" : "20"},
	{"ID" : "56", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.WEIGHT1_V_5_0_U", "Parent" : "20"},
	{"ID" : "57", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.WEIGHT1_V_5_1_U", "Parent" : "20"},
	{"ID" : "58", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.WEIGHT1_V_5_2_U", "Parent" : "20"},
	{"ID" : "59", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.WEIGHT1_V_5_3_U", "Parent" : "20"},
	{"ID" : "60", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.WEIGHT1_V_5_4_U", "Parent" : "20"},
	{"ID" : "61", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.WEIGHT1_V_5_5_U", "Parent" : "20"},
	{"ID" : "62", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.WEIGHT1_V_5_6_U", "Parent" : "20"},
	{"ID" : "63", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.WEIGHT1_V_6_0_U", "Parent" : "20"},
	{"ID" : "64", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.WEIGHT1_V_6_1_U", "Parent" : "20"},
	{"ID" : "65", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.WEIGHT1_V_6_2_U", "Parent" : "20"},
	{"ID" : "66", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.WEIGHT1_V_6_3_U", "Parent" : "20"},
	{"ID" : "67", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.WEIGHT1_V_6_4_U", "Parent" : "20"},
	{"ID" : "68", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.WEIGHT1_V_6_5_U", "Parent" : "20"},
	{"ID" : "69", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.WEIGHT1_V_6_6_U", "Parent" : "20"},
	{"ID" : "70", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.WEIGHT1_V_7_0_U", "Parent" : "20"},
	{"ID" : "71", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.WEIGHT1_V_7_1_U", "Parent" : "20"},
	{"ID" : "72", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.WEIGHT1_V_7_2_U", "Parent" : "20"},
	{"ID" : "73", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.WEIGHT1_V_7_3_U", "Parent" : "20"},
	{"ID" : "74", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.WEIGHT1_V_7_4_U", "Parent" : "20"},
	{"ID" : "75", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.WEIGHT1_V_7_5_U", "Parent" : "20"},
	{"ID" : "76", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.WEIGHT1_V_7_6_U", "Parent" : "20"},
	{"ID" : "77", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.IFM_V_0_U", "Parent" : "20"},
	{"ID" : "78", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.IFM_V_1_U", "Parent" : "20"},
	{"ID" : "79", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.IFM_V_2_U", "Parent" : "20"},
	{"ID" : "80", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.IFM_V_3_U", "Parent" : "20"},
	{"ID" : "81", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.IFM_V_4_U", "Parent" : "20"},
	{"ID" : "82", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.IFM_V_5_U", "Parent" : "20"},
	{"ID" : "83", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.IFM_V_6_U", "Parent" : "20"},
	{"ID" : "84", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.WEIGHT1_DB_V_0_0_U", "Parent" : "20"},
	{"ID" : "85", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.WEIGHT1_DB_V_0_1_U", "Parent" : "20"},
	{"ID" : "86", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.WEIGHT1_DB_V_0_2_U", "Parent" : "20"},
	{"ID" : "87", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.WEIGHT1_DB_V_0_3_U", "Parent" : "20"},
	{"ID" : "88", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.WEIGHT1_DB_V_0_4_U", "Parent" : "20"},
	{"ID" : "89", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.WEIGHT1_DB_V_0_5_U", "Parent" : "20"},
	{"ID" : "90", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.WEIGHT1_DB_V_0_6_U", "Parent" : "20"},
	{"ID" : "91", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.WEIGHT1_DB_V_1_0_U", "Parent" : "20"},
	{"ID" : "92", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.WEIGHT1_DB_V_1_1_U", "Parent" : "20"},
	{"ID" : "93", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.WEIGHT1_DB_V_1_2_U", "Parent" : "20"},
	{"ID" : "94", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.WEIGHT1_DB_V_1_3_U", "Parent" : "20"},
	{"ID" : "95", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.WEIGHT1_DB_V_1_4_U", "Parent" : "20"},
	{"ID" : "96", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.WEIGHT1_DB_V_1_5_U", "Parent" : "20"},
	{"ID" : "97", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.WEIGHT1_DB_V_1_6_U", "Parent" : "20"},
	{"ID" : "98", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.WEIGHT1_DB_V_2_0_U", "Parent" : "20"},
	{"ID" : "99", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.WEIGHT1_DB_V_2_1_U", "Parent" : "20"},
	{"ID" : "100", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.WEIGHT1_DB_V_2_2_U", "Parent" : "20"},
	{"ID" : "101", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.WEIGHT1_DB_V_2_3_U", "Parent" : "20"},
	{"ID" : "102", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.WEIGHT1_DB_V_2_4_U", "Parent" : "20"},
	{"ID" : "103", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.WEIGHT1_DB_V_2_5_U", "Parent" : "20"},
	{"ID" : "104", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.WEIGHT1_DB_V_2_6_U", "Parent" : "20"},
	{"ID" : "105", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.WEIGHT1_DB_V_3_0_U", "Parent" : "20"},
	{"ID" : "106", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.WEIGHT1_DB_V_3_1_U", "Parent" : "20"},
	{"ID" : "107", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.WEIGHT1_DB_V_3_2_U", "Parent" : "20"},
	{"ID" : "108", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.WEIGHT1_DB_V_3_3_U", "Parent" : "20"},
	{"ID" : "109", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.WEIGHT1_DB_V_3_4_U", "Parent" : "20"},
	{"ID" : "110", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.WEIGHT1_DB_V_3_5_U", "Parent" : "20"},
	{"ID" : "111", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.WEIGHT1_DB_V_3_6_U", "Parent" : "20"},
	{"ID" : "112", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.WEIGHT1_DB_V_4_0_U", "Parent" : "20"},
	{"ID" : "113", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.WEIGHT1_DB_V_4_1_U", "Parent" : "20"},
	{"ID" : "114", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.WEIGHT1_DB_V_4_2_U", "Parent" : "20"},
	{"ID" : "115", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.WEIGHT1_DB_V_4_3_U", "Parent" : "20"},
	{"ID" : "116", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.WEIGHT1_DB_V_4_4_U", "Parent" : "20"},
	{"ID" : "117", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.WEIGHT1_DB_V_4_5_U", "Parent" : "20"},
	{"ID" : "118", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.WEIGHT1_DB_V_4_6_U", "Parent" : "20"},
	{"ID" : "119", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.WEIGHT1_DB_V_5_0_U", "Parent" : "20"},
	{"ID" : "120", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.WEIGHT1_DB_V_5_1_U", "Parent" : "20"},
	{"ID" : "121", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.WEIGHT1_DB_V_5_2_U", "Parent" : "20"},
	{"ID" : "122", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.WEIGHT1_DB_V_5_3_U", "Parent" : "20"},
	{"ID" : "123", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.WEIGHT1_DB_V_5_4_U", "Parent" : "20"},
	{"ID" : "124", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.WEIGHT1_DB_V_5_5_U", "Parent" : "20"},
	{"ID" : "125", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.WEIGHT1_DB_V_5_6_U", "Parent" : "20"},
	{"ID" : "126", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.WEIGHT1_DB_V_6_0_U", "Parent" : "20"},
	{"ID" : "127", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.WEIGHT1_DB_V_6_1_U", "Parent" : "20"},
	{"ID" : "128", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.WEIGHT1_DB_V_6_2_U", "Parent" : "20"},
	{"ID" : "129", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.WEIGHT1_DB_V_6_3_U", "Parent" : "20"},
	{"ID" : "130", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.WEIGHT1_DB_V_6_4_U", "Parent" : "20"},
	{"ID" : "131", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.WEIGHT1_DB_V_6_5_U", "Parent" : "20"},
	{"ID" : "132", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.WEIGHT1_DB_V_6_6_U", "Parent" : "20"},
	{"ID" : "133", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.WEIGHT1_DB_V_7_0_U", "Parent" : "20"},
	{"ID" : "134", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.WEIGHT1_DB_V_7_1_U", "Parent" : "20"},
	{"ID" : "135", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.WEIGHT1_DB_V_7_2_U", "Parent" : "20"},
	{"ID" : "136", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.WEIGHT1_DB_V_7_3_U", "Parent" : "20"},
	{"ID" : "137", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.WEIGHT1_DB_V_7_4_U", "Parent" : "20"},
	{"ID" : "138", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.WEIGHT1_DB_V_7_5_U", "Parent" : "20"},
	{"ID" : "139", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.WEIGHT1_DB_V_7_6_U", "Parent" : "20"},
	{"ID" : "140", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.IFM_DB_V_0_U", "Parent" : "20"},
	{"ID" : "141", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.IFM_DB_V_1_U", "Parent" : "20"},
	{"ID" : "142", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.IFM_DB_V_2_U", "Parent" : "20"},
	{"ID" : "143", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.IFM_DB_V_3_U", "Parent" : "20"},
	{"ID" : "144", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.IFM_DB_V_4_U", "Parent" : "20"},
	{"ID" : "145", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.IFM_DB_V_5_U", "Parent" : "20"},
	{"ID" : "146", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.IFM_DB_V_6_U", "Parent" : "20"},
	{"ID" : "147", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.grp_FIRE4_fu_387", "Parent" : "20", "Child" : ["148", "149", "150", "151", "152", "153", "154", "155", "156", "157", "158", "159", "160", "161", "162", "163", "164", "165", "166", "167", "168", "169", "170", "171", "172", "173", "174", "175", "176", "177", "178", "179", "180", "181", "182", "183", "184", "185", "186", "187", "188", "189", "190", "191", "192", "193", "194", "195", "196", "197", "198", "199", "200", "201", "202", "203", "204", "205"],
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
	{"ID" : "148", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.grp_FIRE4_fu_387.top_mac_muladd_5nbkb_U75", "Parent" : "147"},
	{"ID" : "149", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.grp_FIRE4_fu_387.top_mac_muladd_5ncud_U76", "Parent" : "147"},
	{"ID" : "150", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.grp_FIRE4_fu_387.top_mul_mul_8s_26dEe_U77", "Parent" : "147"},
	{"ID" : "151", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.grp_FIRE4_fu_387.top_mul_mul_8s_26dEe_U78", "Parent" : "147"},
	{"ID" : "152", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.grp_FIRE4_fu_387.top_mul_mul_8s_26dEe_U79", "Parent" : "147"},
	{"ID" : "153", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.grp_FIRE4_fu_387.top_mul_mul_8s_26dEe_U80", "Parent" : "147"},
	{"ID" : "154", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.grp_FIRE4_fu_387.top_mul_mul_8s_26dEe_U81", "Parent" : "147"},
	{"ID" : "155", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.grp_FIRE4_fu_387.top_mul_mul_8s_26dEe_U82", "Parent" : "147"},
	{"ID" : "156", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.grp_FIRE4_fu_387.top_mul_mul_8s_26dEe_U83", "Parent" : "147"},
	{"ID" : "157", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.grp_FIRE4_fu_387.top_mul_mul_8s_26dEe_U84", "Parent" : "147"},
	{"ID" : "158", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.grp_FIRE4_fu_387.top_mul_mul_8s_26dEe_U85", "Parent" : "147"},
	{"ID" : "159", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.grp_FIRE4_fu_387.top_mul_mul_8s_26dEe_U86", "Parent" : "147"},
	{"ID" : "160", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.grp_FIRE4_fu_387.top_mul_mul_8s_26dEe_U87", "Parent" : "147"},
	{"ID" : "161", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.grp_FIRE4_fu_387.top_mul_mul_8s_26dEe_U88", "Parent" : "147"},
	{"ID" : "162", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.grp_FIRE4_fu_387.top_mul_mul_8s_26dEe_U89", "Parent" : "147"},
	{"ID" : "163", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.grp_FIRE4_fu_387.top_mul_mul_8s_26dEe_U90", "Parent" : "147"},
	{"ID" : "164", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.grp_FIRE4_fu_387.top_mul_mul_8s_26dEe_U91", "Parent" : "147"},
	{"ID" : "165", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.grp_FIRE4_fu_387.top_mul_mul_8s_26dEe_U92", "Parent" : "147"},
	{"ID" : "166", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.grp_FIRE4_fu_387.top_mul_mul_8s_26dEe_U93", "Parent" : "147"},
	{"ID" : "167", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.grp_FIRE4_fu_387.top_mul_mul_8s_26dEe_U94", "Parent" : "147"},
	{"ID" : "168", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.grp_FIRE4_fu_387.top_mul_mul_8s_26dEe_U95", "Parent" : "147"},
	{"ID" : "169", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.grp_FIRE4_fu_387.top_mul_mul_8s_26dEe_U96", "Parent" : "147"},
	{"ID" : "170", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.grp_FIRE4_fu_387.top_mul_mul_8s_26dEe_U97", "Parent" : "147"},
	{"ID" : "171", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.grp_FIRE4_fu_387.top_mul_mul_8s_26dEe_U98", "Parent" : "147"},
	{"ID" : "172", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.grp_FIRE4_fu_387.top_mul_mul_8s_26dEe_U99", "Parent" : "147"},
	{"ID" : "173", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.grp_FIRE4_fu_387.top_mul_mul_8s_26dEe_U100", "Parent" : "147"},
	{"ID" : "174", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.grp_FIRE4_fu_387.top_mul_mul_8s_26dEe_U101", "Parent" : "147"},
	{"ID" : "175", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.grp_FIRE4_fu_387.top_mul_mul_8s_26dEe_U102", "Parent" : "147"},
	{"ID" : "176", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.grp_FIRE4_fu_387.top_mul_mul_8s_26dEe_U103", "Parent" : "147"},
	{"ID" : "177", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.grp_FIRE4_fu_387.top_mul_mul_8s_26dEe_U104", "Parent" : "147"},
	{"ID" : "178", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.grp_FIRE4_fu_387.top_mul_mul_8s_26dEe_U105", "Parent" : "147"},
	{"ID" : "179", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.grp_FIRE4_fu_387.top_mul_mul_8s_26dEe_U106", "Parent" : "147"},
	{"ID" : "180", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.grp_FIRE4_fu_387.top_mul_mul_8s_26dEe_U107", "Parent" : "147"},
	{"ID" : "181", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.grp_FIRE4_fu_387.top_mul_mul_8s_26dEe_U108", "Parent" : "147"},
	{"ID" : "182", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.grp_FIRE4_fu_387.top_mul_mul_8s_26dEe_U109", "Parent" : "147"},
	{"ID" : "183", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.grp_FIRE4_fu_387.top_mul_mul_8s_26dEe_U110", "Parent" : "147"},
	{"ID" : "184", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.grp_FIRE4_fu_387.top_mul_mul_8s_26dEe_U111", "Parent" : "147"},
	{"ID" : "185", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.grp_FIRE4_fu_387.top_mul_mul_8s_26dEe_U112", "Parent" : "147"},
	{"ID" : "186", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.grp_FIRE4_fu_387.top_mul_mul_8s_26dEe_U113", "Parent" : "147"},
	{"ID" : "187", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.grp_FIRE4_fu_387.top_mul_mul_8s_26dEe_U114", "Parent" : "147"},
	{"ID" : "188", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.grp_FIRE4_fu_387.top_mul_mul_8s_26dEe_U115", "Parent" : "147"},
	{"ID" : "189", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.grp_FIRE4_fu_387.top_mul_mul_8s_26dEe_U116", "Parent" : "147"},
	{"ID" : "190", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.grp_FIRE4_fu_387.top_mul_mul_8s_26dEe_U117", "Parent" : "147"},
	{"ID" : "191", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.grp_FIRE4_fu_387.top_mul_mul_8s_26dEe_U118", "Parent" : "147"},
	{"ID" : "192", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.grp_FIRE4_fu_387.top_mul_mul_8s_26dEe_U119", "Parent" : "147"},
	{"ID" : "193", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.grp_FIRE4_fu_387.top_mul_mul_8s_26dEe_U120", "Parent" : "147"},
	{"ID" : "194", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.grp_FIRE4_fu_387.top_mul_mul_8s_26dEe_U121", "Parent" : "147"},
	{"ID" : "195", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.grp_FIRE4_fu_387.top_mul_mul_8s_26dEe_U122", "Parent" : "147"},
	{"ID" : "196", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.grp_FIRE4_fu_387.top_mul_mul_8s_26dEe_U123", "Parent" : "147"},
	{"ID" : "197", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.grp_FIRE4_fu_387.top_mul_mul_8s_26dEe_U124", "Parent" : "147"},
	{"ID" : "198", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.grp_FIRE4_fu_387.top_mul_mul_8s_26dEe_U125", "Parent" : "147"},
	{"ID" : "199", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.grp_FIRE4_fu_387.top_mul_mul_8s_26dEe_U126", "Parent" : "147"},
	{"ID" : "200", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.grp_FIRE4_fu_387.top_mul_mul_8s_26dEe_U127", "Parent" : "147"},
	{"ID" : "201", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.grp_FIRE4_fu_387.top_mul_mul_8s_26dEe_U128", "Parent" : "147"},
	{"ID" : "202", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.grp_FIRE4_fu_387.top_mul_mul_8s_26dEe_U129", "Parent" : "147"},
	{"ID" : "203", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.grp_FIRE4_fu_387.top_mul_mul_8s_26dEe_U130", "Parent" : "147"},
	{"ID" : "204", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.grp_FIRE4_fu_387.top_mul_mul_8s_26dEe_U131", "Parent" : "147"},
	{"ID" : "205", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.grp_FIRE4_fu_387.top_mul_mul_8s_26dEe_U132", "Parent" : "147"},
	{"ID" : "206", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.grp_LOAD_WEIGHT_DMA_fu_601", "Parent" : "20", "Child" : ["207"],
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
	{"ID" : "207", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.grp_LOAD_WEIGHT_DMA_fu_601.top_mac_muladd_5nbkb_U1", "Parent" : "206"},
	{"ID" : "208", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.grp_LOAD_IFM_fu_778", "Parent" : "20", "Child" : ["209"],
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
	{"ID" : "209", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_Load_Fire_fu_398.grp_LOAD_IFM_fu_778.top_mac_muladd_5ncud_U62", "Parent" : "208"},
	{"ID" : "210", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_OFM_STORE_fu_698", "Parent" : "0", "Child" : ["211", "212"],
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
	{"ID" : "211", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_OFM_STORE_fu_698.top_mac_muladd_5ncud_U230", "Parent" : "210"},
	{"ID" : "212", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_OFM_STORE_fu_698.top_mac_muladd_5ncud_U231", "Parent" : "210"}]}


set ArgLastReadFirstWriteLatency {
	top {
		input_dma_W_V_data {Type I LastRead 1 FirstWrite -1}
		input_dma_W_V_last {Type I LastRead 1 FirstWrite -1}
		input_dma_I_V_data {Type I LastRead 1 FirstWrite -1}
		input_dma_I_V_last {Type I LastRead 1 FirstWrite -1}
		input_dma_B_V_data_V {Type I LastRead 1 FirstWrite -1}
		input_dma_B_V_last {Type I LastRead 1 FirstWrite -1}
		output_dma_O_V_data {Type O LastRead -1 FirstWrite 4}
		output_dma_O_V_last {Type O LastRead -1 FirstWrite 4}
		row {Type I LastRead 0 FirstWrite -1}
		col {Type I LastRead 0 FirstWrite -1}
		flag {Type I LastRead -1 FirstWrite -1}
		num {Type I LastRead 0 FirstWrite -1}
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
		IFM_DB_V_6 {Type IO LastRead -1 FirstWrite -1}
		OFM_V_0 {Type IO LastRead -1 FirstWrite -1}
		OFM_V_1 {Type IO LastRead -1 FirstWrite -1}
		OFM_V_2 {Type IO LastRead -1 FirstWrite -1}
		OFM_V_3 {Type IO LastRead -1 FirstWrite -1}
		OFM_V_4 {Type IO LastRead -1 FirstWrite -1}
		OFM_V_5 {Type IO LastRead -1 FirstWrite -1}
		OFM_V_6 {Type IO LastRead -1 FirstWrite -1}
		OFM_V_7 {Type IO LastRead -1 FirstWrite -1}
		OFM_DB_V_0 {Type IO LastRead -1 FirstWrite -1}
		OFM_DB_V_1 {Type IO LastRead -1 FirstWrite -1}
		OFM_DB_V_2 {Type IO LastRead -1 FirstWrite -1}
		OFM_DB_V_3 {Type IO LastRead -1 FirstWrite -1}
		OFM_DB_V_4 {Type IO LastRead -1 FirstWrite -1}
		OFM_DB_V_5 {Type IO LastRead -1 FirstWrite -1}
		OFM_DB_V_6 {Type IO LastRead -1 FirstWrite -1}
		OFM_DB_V_7 {Type IO LastRead -1 FirstWrite -1}
		BIAS_DB_V {Type IO LastRead -1 FirstWrite -1}
		BIAS_V {Type IO LastRead -1 FirstWrite -1}}
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
		custom_Tc {Type I LastRead 0 FirstWrite -1}}
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
	{"Name" : "Latency", "Min" : "9177", "Max" : "9177"}
	, {"Name" : "Interval", "Min" : "9178", "Max" : "9178"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	input_dma_W_V_data { axis {  { input_dma_W_TDATA in_data 0 56 } } }
	input_dma_W_V_last { axis {  { input_dma_W_TVALID in_vld 0 1 }  { input_dma_W_TREADY in_acc 1 1 }  { input_dma_W_TLAST in_data 0 1 } } }
	input_dma_I_V_data { axis {  { input_dma_I_TDATA in_data 0 56 } } }
	input_dma_I_V_last { axis {  { input_dma_I_TVALID in_vld 0 1 }  { input_dma_I_TREADY in_acc 1 1 }  { input_dma_I_TLAST in_data 0 1 } } }
	input_dma_B_V_data_V { axis {  { input_dma_B_TDATA in_data 0 32 } } }
	input_dma_B_V_last { axis {  { input_dma_B_TVALID in_vld 0 1 }  { input_dma_B_TREADY in_acc 1 1 }  { input_dma_B_TLAST in_data 0 1 } } }
	output_dma_O_V_data { axis {  { output_dma_O_TDATA out_data 1 56 } } }
	output_dma_O_V_last { axis {  { output_dma_O_TVALID out_vld 1 1 }  { output_dma_O_TREADY out_acc 0 1 }  { output_dma_O_TLAST out_data 1 1 } } }
}

set busDeadlockParameterList { 
}

# RTL port scheduling information:
set fifoSchedulingInfoList { 
}

# RTL bus port read request latency information:
set busReadReqLatencyList { 
}

# RTL bus port write response latency information:
set busWriteResLatencyList { 
}

# RTL array port load latency information:
set memoryLoadLatencyList { 
}
