# This script segment is generated automatically by AutoPilot

# clear list
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_begin
    cg_default_interface_gen_bundle_begin
    AESL_LIB_XILADAPTER::native_axis_begin
}

# Native AXIS:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::native_axis_add] == "::AESL_LIB_XILADAPTER::native_axis_add"} {
eval "::AESL_LIB_XILADAPTER::native_axis_add { \
    id 232 \
    name output_dma_O_V_data \
    reset_level 1 \
    sync_rst true \
    corename {output_dma_O} \
    metadata {  } \
    op interface \
    ports { output_dma_O_TDATA { O 56 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'output_dma_O_V_data'"
}
}


# Native AXIS:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::native_axis_add] == "::AESL_LIB_XILADAPTER::native_axis_add"} {
eval "::AESL_LIB_XILADAPTER::native_axis_add { \
    id 233 \
    name output_dma_O_V_last \
    reset_level 1 \
    sync_rst true \
    corename {output_dma_O} \
    metadata {  } \
    op interface \
    ports { output_dma_O_TVALID { O 1 bit } output_dma_O_TREADY { I 1 bit } output_dma_O_TLAST { O 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'output_dma_O_V_last'"
}
}


# Native AXIS:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::native_axis_add] == "::AESL_LIB_XILADAPTER::native_axis_add"} {
eval "::AESL_LIB_XILADAPTER::native_axis_add { \
    id 234 \
    name input_dma_B_V_data_V \
    reset_level 1 \
    sync_rst true \
    corename {input_dma_B} \
    metadata {  } \
    op interface \
    ports { input_dma_B_TDATA { I 32 vector } input_dma_B_TVALID { I 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'input_dma_B_V_data_V'"
}
}


# Native AXIS:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::native_axis_add] == "::AESL_LIB_XILADAPTER::native_axis_add"} {
eval "::AESL_LIB_XILADAPTER::native_axis_add { \
    id 235 \
    name input_dma_B_V_last \
    reset_level 1 \
    sync_rst true \
    corename {input_dma_B} \
    metadata {  } \
    op interface \
    ports { input_dma_B_TREADY { O 1 bit } input_dma_B_TLAST { I 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'input_dma_B_V_last'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 236 \
    name OFM_0_V \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename OFM_0_V \
    op interface \
    ports { OFM_0_V_address0 { O 8 vector } OFM_0_V_ce0 { O 1 bit } OFM_0_V_q0 { I 26 vector } OFM_0_V_address1 { O 8 vector } OFM_0_V_ce1 { O 1 bit } OFM_0_V_we1 { O 1 bit } OFM_0_V_d1 { O 26 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OFM_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 237 \
    name OFM_1_V \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename OFM_1_V \
    op interface \
    ports { OFM_1_V_address0 { O 8 vector } OFM_1_V_ce0 { O 1 bit } OFM_1_V_q0 { I 26 vector } OFM_1_V_address1 { O 8 vector } OFM_1_V_ce1 { O 1 bit } OFM_1_V_we1 { O 1 bit } OFM_1_V_d1 { O 26 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OFM_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 238 \
    name OFM_2_V \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename OFM_2_V \
    op interface \
    ports { OFM_2_V_address0 { O 8 vector } OFM_2_V_ce0 { O 1 bit } OFM_2_V_q0 { I 26 vector } OFM_2_V_address1 { O 8 vector } OFM_2_V_ce1 { O 1 bit } OFM_2_V_we1 { O 1 bit } OFM_2_V_d1 { O 26 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OFM_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 239 \
    name OFM_3_V \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename OFM_3_V \
    op interface \
    ports { OFM_3_V_address0 { O 8 vector } OFM_3_V_ce0 { O 1 bit } OFM_3_V_q0 { I 26 vector } OFM_3_V_address1 { O 8 vector } OFM_3_V_ce1 { O 1 bit } OFM_3_V_we1 { O 1 bit } OFM_3_V_d1 { O 26 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OFM_3_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 240 \
    name OFM_4_V \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename OFM_4_V \
    op interface \
    ports { OFM_4_V_address0 { O 8 vector } OFM_4_V_ce0 { O 1 bit } OFM_4_V_q0 { I 26 vector } OFM_4_V_address1 { O 8 vector } OFM_4_V_ce1 { O 1 bit } OFM_4_V_we1 { O 1 bit } OFM_4_V_d1 { O 26 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OFM_4_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 241 \
    name OFM_5_V \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename OFM_5_V \
    op interface \
    ports { OFM_5_V_address0 { O 8 vector } OFM_5_V_ce0 { O 1 bit } OFM_5_V_q0 { I 26 vector } OFM_5_V_address1 { O 8 vector } OFM_5_V_ce1 { O 1 bit } OFM_5_V_we1 { O 1 bit } OFM_5_V_d1 { O 26 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OFM_5_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 242 \
    name OFM_6_V \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename OFM_6_V \
    op interface \
    ports { OFM_6_V_address0 { O 8 vector } OFM_6_V_ce0 { O 1 bit } OFM_6_V_q0 { I 26 vector } OFM_6_V_address1 { O 8 vector } OFM_6_V_ce1 { O 1 bit } OFM_6_V_we1 { O 1 bit } OFM_6_V_d1 { O 26 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OFM_6_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 243 \
    name OFM_7_V \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename OFM_7_V \
    op interface \
    ports { OFM_7_V_address0 { O 8 vector } OFM_7_V_ce0 { O 1 bit } OFM_7_V_q0 { I 26 vector } OFM_7_V_address1 { O 8 vector } OFM_7_V_ce1 { O 1 bit } OFM_7_V_we1 { O 1 bit } OFM_7_V_d1 { O 26 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'OFM_7_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 244 \
    name BIAS_V \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename BIAS_V \
    op interface \
    ports { BIAS_V_address0 { O 3 vector } BIAS_V_ce0 { O 1 bit } BIAS_V_we0 { O 1 bit } BIAS_V_d0 { O 26 vector } BIAS_V_q0 { I 26 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'BIAS_V'"
}
}


# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 245 \
    name custom_Tr \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_custom_Tr \
    op interface \
    ports { custom_Tr { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 246 \
    name custom_Tc \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_custom_Tc \
    op interface \
    ports { custom_Tc { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id -1 \
    name ap_ctrl \
    type ap_ctrl \
    reset_level 1 \
    sync_rst true \
    corename ap_ctrl \
    op interface \
    ports { ap_start { I 1 bit } ap_ready { O 1 bit } ap_done { O 1 bit } ap_idle { O 1 bit } } \
} "
}


# Adapter definition:
set PortName ap_clk
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_clock] == "cg_default_interface_gen_clock"} {
eval "cg_default_interface_gen_clock { \
    id -2 \
    name ${PortName} \
    reset_level 1 \
    sync_rst true \
    corename apif_ap_clk \
    data_wd ${DataWd} \
    op interface \
}"
} else {
puts "@W \[IMPL-113\] Cannot find bus interface model in the library. Ignored generation of bus interface for '${PortName}'"
}
}


# Adapter definition:
set PortName ap_rst
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_reset] == "cg_default_interface_gen_reset"} {
eval "cg_default_interface_gen_reset { \
    id -3 \
    name ${PortName} \
    reset_level 1 \
    sync_rst true \
    corename apif_ap_rst \
    data_wd ${DataWd} \
    op interface \
}"
} else {
puts "@W \[IMPL-114\] Cannot find bus interface model in the library. Ignored generation of bus interface for '${PortName}'"
}
}



# merge
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_end
    cg_default_interface_gen_bundle_end
    AESL_LIB_XILADAPTER::native_axis_end
}


