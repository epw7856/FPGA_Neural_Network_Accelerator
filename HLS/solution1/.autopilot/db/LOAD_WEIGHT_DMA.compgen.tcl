# This script segment is generated automatically by AutoPilot

set id 1
set name top_mac_muladd_5nbkb
set corename simcore_mac
set op mac
set stage_num 1
set max_latency -1
set registered_input 1
set in0_width 5
set in0_signed 0
set in1_width 8
set in1_signed 1
set in2_width 8
set in2_signed 0
set out_width 8
set exp i0*i1+i2
set arg_lists {i0 {5 0 +} i1 {8 1 +} m {8 1 +} i2 {8 0 +} p {8 1 +} c_reg {1} rnd {0} acc {0} }
set TrueReset 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mac] == "ap_gen_simcore_mac"} {
eval "ap_gen_simcore_mac { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    true_reset ${TrueReset} \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    in2_width ${in2_width} \
    in2_signed ${in2_signed} \
    out_width ${out_width} \
    exp ${exp} \
    arg_lists {${arg_lists}} \
}"
} else {
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_mac, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op mac
set corename DSP48
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_dsp48] == "::AESL_LIB_VIRTEX::xil_gen_dsp48"} {
eval "::AESL_LIB_VIRTEX::xil_gen_dsp48 { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    true_reset ${TrueReset} \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    in2_width ${in2_width} \
    in2_signed ${in2_signed} \
    out_width ${out_width} \
    exp ${exp} \
    arg_lists {${arg_lists}} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_dsp48, check your platform lib"
}
}


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
    id 3 \
    name input_dma_W_V_data \
    reset_level 1 \
    sync_rst true \
    corename {input_dma_W} \
    metadata {  } \
    op interface \
    ports { input_dma_W_TDATA { I 56 vector } input_dma_W_TVALID { I 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'input_dma_W_V_data'"
}
}


# Native AXIS:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::native_axis_add] == "::AESL_LIB_XILADAPTER::native_axis_add"} {
eval "::AESL_LIB_XILADAPTER::native_axis_add { \
    id 4 \
    name input_dma_W_V_last \
    reset_level 1 \
    sync_rst true \
    corename {input_dma_W} \
    metadata {  } \
    op interface \
    ports { input_dma_W_TREADY { O 1 bit } input_dma_W_TLAST { I 1 bit } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'input_dma_W_V_last'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 5 \
    name WEIGHT1_0_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename WEIGHT1_0_0_V \
    op interface \
    ports { WEIGHT1_0_0_V_address0 { O 7 vector } WEIGHT1_0_0_V_ce0 { O 1 bit } WEIGHT1_0_0_V_we0 { O 1 bit } WEIGHT1_0_0_V_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WEIGHT1_0_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 6 \
    name WEIGHT1_0_1_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename WEIGHT1_0_1_V \
    op interface \
    ports { WEIGHT1_0_1_V_address0 { O 7 vector } WEIGHT1_0_1_V_ce0 { O 1 bit } WEIGHT1_0_1_V_we0 { O 1 bit } WEIGHT1_0_1_V_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WEIGHT1_0_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 7 \
    name WEIGHT1_0_2_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename WEIGHT1_0_2_V \
    op interface \
    ports { WEIGHT1_0_2_V_address0 { O 7 vector } WEIGHT1_0_2_V_ce0 { O 1 bit } WEIGHT1_0_2_V_we0 { O 1 bit } WEIGHT1_0_2_V_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WEIGHT1_0_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 8 \
    name WEIGHT1_0_3_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename WEIGHT1_0_3_V \
    op interface \
    ports { WEIGHT1_0_3_V_address0 { O 7 vector } WEIGHT1_0_3_V_ce0 { O 1 bit } WEIGHT1_0_3_V_we0 { O 1 bit } WEIGHT1_0_3_V_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WEIGHT1_0_3_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 9 \
    name WEIGHT1_0_4_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename WEIGHT1_0_4_V \
    op interface \
    ports { WEIGHT1_0_4_V_address0 { O 7 vector } WEIGHT1_0_4_V_ce0 { O 1 bit } WEIGHT1_0_4_V_we0 { O 1 bit } WEIGHT1_0_4_V_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WEIGHT1_0_4_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 10 \
    name WEIGHT1_0_5_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename WEIGHT1_0_5_V \
    op interface \
    ports { WEIGHT1_0_5_V_address0 { O 7 vector } WEIGHT1_0_5_V_ce0 { O 1 bit } WEIGHT1_0_5_V_we0 { O 1 bit } WEIGHT1_0_5_V_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WEIGHT1_0_5_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 11 \
    name WEIGHT1_0_6_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename WEIGHT1_0_6_V \
    op interface \
    ports { WEIGHT1_0_6_V_address0 { O 7 vector } WEIGHT1_0_6_V_ce0 { O 1 bit } WEIGHT1_0_6_V_we0 { O 1 bit } WEIGHT1_0_6_V_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WEIGHT1_0_6_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 12 \
    name WEIGHT1_1_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename WEIGHT1_1_0_V \
    op interface \
    ports { WEIGHT1_1_0_V_address0 { O 7 vector } WEIGHT1_1_0_V_ce0 { O 1 bit } WEIGHT1_1_0_V_we0 { O 1 bit } WEIGHT1_1_0_V_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WEIGHT1_1_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 13 \
    name WEIGHT1_1_1_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename WEIGHT1_1_1_V \
    op interface \
    ports { WEIGHT1_1_1_V_address0 { O 7 vector } WEIGHT1_1_1_V_ce0 { O 1 bit } WEIGHT1_1_1_V_we0 { O 1 bit } WEIGHT1_1_1_V_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WEIGHT1_1_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 14 \
    name WEIGHT1_1_2_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename WEIGHT1_1_2_V \
    op interface \
    ports { WEIGHT1_1_2_V_address0 { O 7 vector } WEIGHT1_1_2_V_ce0 { O 1 bit } WEIGHT1_1_2_V_we0 { O 1 bit } WEIGHT1_1_2_V_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WEIGHT1_1_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 15 \
    name WEIGHT1_1_3_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename WEIGHT1_1_3_V \
    op interface \
    ports { WEIGHT1_1_3_V_address0 { O 7 vector } WEIGHT1_1_3_V_ce0 { O 1 bit } WEIGHT1_1_3_V_we0 { O 1 bit } WEIGHT1_1_3_V_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WEIGHT1_1_3_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 16 \
    name WEIGHT1_1_4_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename WEIGHT1_1_4_V \
    op interface \
    ports { WEIGHT1_1_4_V_address0 { O 7 vector } WEIGHT1_1_4_V_ce0 { O 1 bit } WEIGHT1_1_4_V_we0 { O 1 bit } WEIGHT1_1_4_V_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WEIGHT1_1_4_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 17 \
    name WEIGHT1_1_5_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename WEIGHT1_1_5_V \
    op interface \
    ports { WEIGHT1_1_5_V_address0 { O 7 vector } WEIGHT1_1_5_V_ce0 { O 1 bit } WEIGHT1_1_5_V_we0 { O 1 bit } WEIGHT1_1_5_V_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WEIGHT1_1_5_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 18 \
    name WEIGHT1_1_6_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename WEIGHT1_1_6_V \
    op interface \
    ports { WEIGHT1_1_6_V_address0 { O 7 vector } WEIGHT1_1_6_V_ce0 { O 1 bit } WEIGHT1_1_6_V_we0 { O 1 bit } WEIGHT1_1_6_V_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WEIGHT1_1_6_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 19 \
    name WEIGHT1_2_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename WEIGHT1_2_0_V \
    op interface \
    ports { WEIGHT1_2_0_V_address0 { O 7 vector } WEIGHT1_2_0_V_ce0 { O 1 bit } WEIGHT1_2_0_V_we0 { O 1 bit } WEIGHT1_2_0_V_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WEIGHT1_2_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 20 \
    name WEIGHT1_2_1_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename WEIGHT1_2_1_V \
    op interface \
    ports { WEIGHT1_2_1_V_address0 { O 7 vector } WEIGHT1_2_1_V_ce0 { O 1 bit } WEIGHT1_2_1_V_we0 { O 1 bit } WEIGHT1_2_1_V_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WEIGHT1_2_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 21 \
    name WEIGHT1_2_2_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename WEIGHT1_2_2_V \
    op interface \
    ports { WEIGHT1_2_2_V_address0 { O 7 vector } WEIGHT1_2_2_V_ce0 { O 1 bit } WEIGHT1_2_2_V_we0 { O 1 bit } WEIGHT1_2_2_V_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WEIGHT1_2_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 22 \
    name WEIGHT1_2_3_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename WEIGHT1_2_3_V \
    op interface \
    ports { WEIGHT1_2_3_V_address0 { O 7 vector } WEIGHT1_2_3_V_ce0 { O 1 bit } WEIGHT1_2_3_V_we0 { O 1 bit } WEIGHT1_2_3_V_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WEIGHT1_2_3_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 23 \
    name WEIGHT1_2_4_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename WEIGHT1_2_4_V \
    op interface \
    ports { WEIGHT1_2_4_V_address0 { O 7 vector } WEIGHT1_2_4_V_ce0 { O 1 bit } WEIGHT1_2_4_V_we0 { O 1 bit } WEIGHT1_2_4_V_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WEIGHT1_2_4_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 24 \
    name WEIGHT1_2_5_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename WEIGHT1_2_5_V \
    op interface \
    ports { WEIGHT1_2_5_V_address0 { O 7 vector } WEIGHT1_2_5_V_ce0 { O 1 bit } WEIGHT1_2_5_V_we0 { O 1 bit } WEIGHT1_2_5_V_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WEIGHT1_2_5_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 25 \
    name WEIGHT1_2_6_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename WEIGHT1_2_6_V \
    op interface \
    ports { WEIGHT1_2_6_V_address0 { O 7 vector } WEIGHT1_2_6_V_ce0 { O 1 bit } WEIGHT1_2_6_V_we0 { O 1 bit } WEIGHT1_2_6_V_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WEIGHT1_2_6_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 26 \
    name WEIGHT1_3_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename WEIGHT1_3_0_V \
    op interface \
    ports { WEIGHT1_3_0_V_address0 { O 7 vector } WEIGHT1_3_0_V_ce0 { O 1 bit } WEIGHT1_3_0_V_we0 { O 1 bit } WEIGHT1_3_0_V_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WEIGHT1_3_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 27 \
    name WEIGHT1_3_1_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename WEIGHT1_3_1_V \
    op interface \
    ports { WEIGHT1_3_1_V_address0 { O 7 vector } WEIGHT1_3_1_V_ce0 { O 1 bit } WEIGHT1_3_1_V_we0 { O 1 bit } WEIGHT1_3_1_V_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WEIGHT1_3_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 28 \
    name WEIGHT1_3_2_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename WEIGHT1_3_2_V \
    op interface \
    ports { WEIGHT1_3_2_V_address0 { O 7 vector } WEIGHT1_3_2_V_ce0 { O 1 bit } WEIGHT1_3_2_V_we0 { O 1 bit } WEIGHT1_3_2_V_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WEIGHT1_3_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 29 \
    name WEIGHT1_3_3_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename WEIGHT1_3_3_V \
    op interface \
    ports { WEIGHT1_3_3_V_address0 { O 7 vector } WEIGHT1_3_3_V_ce0 { O 1 bit } WEIGHT1_3_3_V_we0 { O 1 bit } WEIGHT1_3_3_V_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WEIGHT1_3_3_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 30 \
    name WEIGHT1_3_4_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename WEIGHT1_3_4_V \
    op interface \
    ports { WEIGHT1_3_4_V_address0 { O 7 vector } WEIGHT1_3_4_V_ce0 { O 1 bit } WEIGHT1_3_4_V_we0 { O 1 bit } WEIGHT1_3_4_V_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WEIGHT1_3_4_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 31 \
    name WEIGHT1_3_5_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename WEIGHT1_3_5_V \
    op interface \
    ports { WEIGHT1_3_5_V_address0 { O 7 vector } WEIGHT1_3_5_V_ce0 { O 1 bit } WEIGHT1_3_5_V_we0 { O 1 bit } WEIGHT1_3_5_V_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WEIGHT1_3_5_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 32 \
    name WEIGHT1_3_6_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename WEIGHT1_3_6_V \
    op interface \
    ports { WEIGHT1_3_6_V_address0 { O 7 vector } WEIGHT1_3_6_V_ce0 { O 1 bit } WEIGHT1_3_6_V_we0 { O 1 bit } WEIGHT1_3_6_V_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WEIGHT1_3_6_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 33 \
    name WEIGHT1_4_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename WEIGHT1_4_0_V \
    op interface \
    ports { WEIGHT1_4_0_V_address0 { O 7 vector } WEIGHT1_4_0_V_ce0 { O 1 bit } WEIGHT1_4_0_V_we0 { O 1 bit } WEIGHT1_4_0_V_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WEIGHT1_4_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 34 \
    name WEIGHT1_4_1_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename WEIGHT1_4_1_V \
    op interface \
    ports { WEIGHT1_4_1_V_address0 { O 7 vector } WEIGHT1_4_1_V_ce0 { O 1 bit } WEIGHT1_4_1_V_we0 { O 1 bit } WEIGHT1_4_1_V_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WEIGHT1_4_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 35 \
    name WEIGHT1_4_2_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename WEIGHT1_4_2_V \
    op interface \
    ports { WEIGHT1_4_2_V_address0 { O 7 vector } WEIGHT1_4_2_V_ce0 { O 1 bit } WEIGHT1_4_2_V_we0 { O 1 bit } WEIGHT1_4_2_V_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WEIGHT1_4_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 36 \
    name WEIGHT1_4_3_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename WEIGHT1_4_3_V \
    op interface \
    ports { WEIGHT1_4_3_V_address0 { O 7 vector } WEIGHT1_4_3_V_ce0 { O 1 bit } WEIGHT1_4_3_V_we0 { O 1 bit } WEIGHT1_4_3_V_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WEIGHT1_4_3_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 37 \
    name WEIGHT1_4_4_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename WEIGHT1_4_4_V \
    op interface \
    ports { WEIGHT1_4_4_V_address0 { O 7 vector } WEIGHT1_4_4_V_ce0 { O 1 bit } WEIGHT1_4_4_V_we0 { O 1 bit } WEIGHT1_4_4_V_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WEIGHT1_4_4_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 38 \
    name WEIGHT1_4_5_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename WEIGHT1_4_5_V \
    op interface \
    ports { WEIGHT1_4_5_V_address0 { O 7 vector } WEIGHT1_4_5_V_ce0 { O 1 bit } WEIGHT1_4_5_V_we0 { O 1 bit } WEIGHT1_4_5_V_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WEIGHT1_4_5_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 39 \
    name WEIGHT1_4_6_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename WEIGHT1_4_6_V \
    op interface \
    ports { WEIGHT1_4_6_V_address0 { O 7 vector } WEIGHT1_4_6_V_ce0 { O 1 bit } WEIGHT1_4_6_V_we0 { O 1 bit } WEIGHT1_4_6_V_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WEIGHT1_4_6_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 40 \
    name WEIGHT1_5_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename WEIGHT1_5_0_V \
    op interface \
    ports { WEIGHT1_5_0_V_address0 { O 7 vector } WEIGHT1_5_0_V_ce0 { O 1 bit } WEIGHT1_5_0_V_we0 { O 1 bit } WEIGHT1_5_0_V_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WEIGHT1_5_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 41 \
    name WEIGHT1_5_1_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename WEIGHT1_5_1_V \
    op interface \
    ports { WEIGHT1_5_1_V_address0 { O 7 vector } WEIGHT1_5_1_V_ce0 { O 1 bit } WEIGHT1_5_1_V_we0 { O 1 bit } WEIGHT1_5_1_V_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WEIGHT1_5_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 42 \
    name WEIGHT1_5_2_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename WEIGHT1_5_2_V \
    op interface \
    ports { WEIGHT1_5_2_V_address0 { O 7 vector } WEIGHT1_5_2_V_ce0 { O 1 bit } WEIGHT1_5_2_V_we0 { O 1 bit } WEIGHT1_5_2_V_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WEIGHT1_5_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 43 \
    name WEIGHT1_5_3_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename WEIGHT1_5_3_V \
    op interface \
    ports { WEIGHT1_5_3_V_address0 { O 7 vector } WEIGHT1_5_3_V_ce0 { O 1 bit } WEIGHT1_5_3_V_we0 { O 1 bit } WEIGHT1_5_3_V_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WEIGHT1_5_3_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 44 \
    name WEIGHT1_5_4_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename WEIGHT1_5_4_V \
    op interface \
    ports { WEIGHT1_5_4_V_address0 { O 7 vector } WEIGHT1_5_4_V_ce0 { O 1 bit } WEIGHT1_5_4_V_we0 { O 1 bit } WEIGHT1_5_4_V_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WEIGHT1_5_4_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 45 \
    name WEIGHT1_5_5_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename WEIGHT1_5_5_V \
    op interface \
    ports { WEIGHT1_5_5_V_address0 { O 7 vector } WEIGHT1_5_5_V_ce0 { O 1 bit } WEIGHT1_5_5_V_we0 { O 1 bit } WEIGHT1_5_5_V_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WEIGHT1_5_5_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 46 \
    name WEIGHT1_5_6_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename WEIGHT1_5_6_V \
    op interface \
    ports { WEIGHT1_5_6_V_address0 { O 7 vector } WEIGHT1_5_6_V_ce0 { O 1 bit } WEIGHT1_5_6_V_we0 { O 1 bit } WEIGHT1_5_6_V_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WEIGHT1_5_6_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 47 \
    name WEIGHT1_6_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename WEIGHT1_6_0_V \
    op interface \
    ports { WEIGHT1_6_0_V_address0 { O 7 vector } WEIGHT1_6_0_V_ce0 { O 1 bit } WEIGHT1_6_0_V_we0 { O 1 bit } WEIGHT1_6_0_V_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WEIGHT1_6_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 48 \
    name WEIGHT1_6_1_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename WEIGHT1_6_1_V \
    op interface \
    ports { WEIGHT1_6_1_V_address0 { O 7 vector } WEIGHT1_6_1_V_ce0 { O 1 bit } WEIGHT1_6_1_V_we0 { O 1 bit } WEIGHT1_6_1_V_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WEIGHT1_6_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 49 \
    name WEIGHT1_6_2_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename WEIGHT1_6_2_V \
    op interface \
    ports { WEIGHT1_6_2_V_address0 { O 7 vector } WEIGHT1_6_2_V_ce0 { O 1 bit } WEIGHT1_6_2_V_we0 { O 1 bit } WEIGHT1_6_2_V_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WEIGHT1_6_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 50 \
    name WEIGHT1_6_3_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename WEIGHT1_6_3_V \
    op interface \
    ports { WEIGHT1_6_3_V_address0 { O 7 vector } WEIGHT1_6_3_V_ce0 { O 1 bit } WEIGHT1_6_3_V_we0 { O 1 bit } WEIGHT1_6_3_V_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WEIGHT1_6_3_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 51 \
    name WEIGHT1_6_4_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename WEIGHT1_6_4_V \
    op interface \
    ports { WEIGHT1_6_4_V_address0 { O 7 vector } WEIGHT1_6_4_V_ce0 { O 1 bit } WEIGHT1_6_4_V_we0 { O 1 bit } WEIGHT1_6_4_V_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WEIGHT1_6_4_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 52 \
    name WEIGHT1_6_5_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename WEIGHT1_6_5_V \
    op interface \
    ports { WEIGHT1_6_5_V_address0 { O 7 vector } WEIGHT1_6_5_V_ce0 { O 1 bit } WEIGHT1_6_5_V_we0 { O 1 bit } WEIGHT1_6_5_V_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WEIGHT1_6_5_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 53 \
    name WEIGHT1_6_6_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename WEIGHT1_6_6_V \
    op interface \
    ports { WEIGHT1_6_6_V_address0 { O 7 vector } WEIGHT1_6_6_V_ce0 { O 1 bit } WEIGHT1_6_6_V_we0 { O 1 bit } WEIGHT1_6_6_V_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WEIGHT1_6_6_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 54 \
    name WEIGHT1_7_0_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename WEIGHT1_7_0_V \
    op interface \
    ports { WEIGHT1_7_0_V_address0 { O 7 vector } WEIGHT1_7_0_V_ce0 { O 1 bit } WEIGHT1_7_0_V_we0 { O 1 bit } WEIGHT1_7_0_V_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WEIGHT1_7_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 55 \
    name WEIGHT1_7_1_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename WEIGHT1_7_1_V \
    op interface \
    ports { WEIGHT1_7_1_V_address0 { O 7 vector } WEIGHT1_7_1_V_ce0 { O 1 bit } WEIGHT1_7_1_V_we0 { O 1 bit } WEIGHT1_7_1_V_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WEIGHT1_7_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 56 \
    name WEIGHT1_7_2_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename WEIGHT1_7_2_V \
    op interface \
    ports { WEIGHT1_7_2_V_address0 { O 7 vector } WEIGHT1_7_2_V_ce0 { O 1 bit } WEIGHT1_7_2_V_we0 { O 1 bit } WEIGHT1_7_2_V_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WEIGHT1_7_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 57 \
    name WEIGHT1_7_3_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename WEIGHT1_7_3_V \
    op interface \
    ports { WEIGHT1_7_3_V_address0 { O 7 vector } WEIGHT1_7_3_V_ce0 { O 1 bit } WEIGHT1_7_3_V_we0 { O 1 bit } WEIGHT1_7_3_V_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WEIGHT1_7_3_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 58 \
    name WEIGHT1_7_4_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename WEIGHT1_7_4_V \
    op interface \
    ports { WEIGHT1_7_4_V_address0 { O 7 vector } WEIGHT1_7_4_V_ce0 { O 1 bit } WEIGHT1_7_4_V_we0 { O 1 bit } WEIGHT1_7_4_V_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WEIGHT1_7_4_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 59 \
    name WEIGHT1_7_5_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename WEIGHT1_7_5_V \
    op interface \
    ports { WEIGHT1_7_5_V_address0 { O 7 vector } WEIGHT1_7_5_V_ce0 { O 1 bit } WEIGHT1_7_5_V_we0 { O 1 bit } WEIGHT1_7_5_V_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WEIGHT1_7_5_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 60 \
    name WEIGHT1_7_6_V \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename WEIGHT1_7_6_V \
    op interface \
    ports { WEIGHT1_7_6_V_address0 { O 7 vector } WEIGHT1_7_6_V_ce0 { O 1 bit } WEIGHT1_7_6_V_we0 { O 1 bit } WEIGHT1_7_6_V_d0 { O 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WEIGHT1_7_6_V'"
}
}


# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 61 \
    name custom_k \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_custom_k \
    op interface \
    ports { custom_k { I 32 vector } } \
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


