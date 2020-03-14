# This script segment is generated automatically by AutoPilot

set id 77
set name top_mul_mul_8s_26dEe
set corename simcore_mul
set op mul
set stage_num 1
set max_latency -1
set registered_input 1
set in0_width 8
set in0_signed 1
set in1_width 26
set in1_signed 1
set out_width 34
set exp i0*i1
set arg_lists {i0 {8 1 +} i1 {26 1 +} p {34 1 +} acc {0} }
set TrueReset 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mul] == "ap_gen_simcore_mul"} {
eval "ap_gen_simcore_mul { \
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
    out_width ${out_width} \
    exp ${exp} \
    arg_lists {${arg_lists}} \
}"
} else {
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_mul, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op mul
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

# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 134 \
    name WEIGHT1_0_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WEIGHT1_0_0_V \
    op interface \
    ports { WEIGHT1_0_0_V_address0 { O 7 vector } WEIGHT1_0_0_V_ce0 { O 1 bit } WEIGHT1_0_0_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WEIGHT1_0_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 135 \
    name WEIGHT1_0_1_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WEIGHT1_0_1_V \
    op interface \
    ports { WEIGHT1_0_1_V_address0 { O 7 vector } WEIGHT1_0_1_V_ce0 { O 1 bit } WEIGHT1_0_1_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WEIGHT1_0_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 136 \
    name WEIGHT1_0_2_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WEIGHT1_0_2_V \
    op interface \
    ports { WEIGHT1_0_2_V_address0 { O 7 vector } WEIGHT1_0_2_V_ce0 { O 1 bit } WEIGHT1_0_2_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WEIGHT1_0_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 137 \
    name WEIGHT1_0_3_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WEIGHT1_0_3_V \
    op interface \
    ports { WEIGHT1_0_3_V_address0 { O 7 vector } WEIGHT1_0_3_V_ce0 { O 1 bit } WEIGHT1_0_3_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WEIGHT1_0_3_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 138 \
    name WEIGHT1_0_4_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WEIGHT1_0_4_V \
    op interface \
    ports { WEIGHT1_0_4_V_address0 { O 7 vector } WEIGHT1_0_4_V_ce0 { O 1 bit } WEIGHT1_0_4_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WEIGHT1_0_4_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 139 \
    name WEIGHT1_0_5_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WEIGHT1_0_5_V \
    op interface \
    ports { WEIGHT1_0_5_V_address0 { O 7 vector } WEIGHT1_0_5_V_ce0 { O 1 bit } WEIGHT1_0_5_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WEIGHT1_0_5_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 140 \
    name WEIGHT1_0_6_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WEIGHT1_0_6_V \
    op interface \
    ports { WEIGHT1_0_6_V_address0 { O 7 vector } WEIGHT1_0_6_V_ce0 { O 1 bit } WEIGHT1_0_6_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WEIGHT1_0_6_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 141 \
    name WEIGHT1_1_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WEIGHT1_1_0_V \
    op interface \
    ports { WEIGHT1_1_0_V_address0 { O 7 vector } WEIGHT1_1_0_V_ce0 { O 1 bit } WEIGHT1_1_0_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WEIGHT1_1_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 142 \
    name WEIGHT1_1_1_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WEIGHT1_1_1_V \
    op interface \
    ports { WEIGHT1_1_1_V_address0 { O 7 vector } WEIGHT1_1_1_V_ce0 { O 1 bit } WEIGHT1_1_1_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WEIGHT1_1_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 143 \
    name WEIGHT1_1_2_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WEIGHT1_1_2_V \
    op interface \
    ports { WEIGHT1_1_2_V_address0 { O 7 vector } WEIGHT1_1_2_V_ce0 { O 1 bit } WEIGHT1_1_2_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WEIGHT1_1_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 144 \
    name WEIGHT1_1_3_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WEIGHT1_1_3_V \
    op interface \
    ports { WEIGHT1_1_3_V_address0 { O 7 vector } WEIGHT1_1_3_V_ce0 { O 1 bit } WEIGHT1_1_3_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WEIGHT1_1_3_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 145 \
    name WEIGHT1_1_4_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WEIGHT1_1_4_V \
    op interface \
    ports { WEIGHT1_1_4_V_address0 { O 7 vector } WEIGHT1_1_4_V_ce0 { O 1 bit } WEIGHT1_1_4_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WEIGHT1_1_4_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 146 \
    name WEIGHT1_1_5_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WEIGHT1_1_5_V \
    op interface \
    ports { WEIGHT1_1_5_V_address0 { O 7 vector } WEIGHT1_1_5_V_ce0 { O 1 bit } WEIGHT1_1_5_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WEIGHT1_1_5_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 147 \
    name WEIGHT1_1_6_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WEIGHT1_1_6_V \
    op interface \
    ports { WEIGHT1_1_6_V_address0 { O 7 vector } WEIGHT1_1_6_V_ce0 { O 1 bit } WEIGHT1_1_6_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WEIGHT1_1_6_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 148 \
    name WEIGHT1_2_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WEIGHT1_2_0_V \
    op interface \
    ports { WEIGHT1_2_0_V_address0 { O 7 vector } WEIGHT1_2_0_V_ce0 { O 1 bit } WEIGHT1_2_0_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WEIGHT1_2_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 149 \
    name WEIGHT1_2_1_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WEIGHT1_2_1_V \
    op interface \
    ports { WEIGHT1_2_1_V_address0 { O 7 vector } WEIGHT1_2_1_V_ce0 { O 1 bit } WEIGHT1_2_1_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WEIGHT1_2_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 150 \
    name WEIGHT1_2_2_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WEIGHT1_2_2_V \
    op interface \
    ports { WEIGHT1_2_2_V_address0 { O 7 vector } WEIGHT1_2_2_V_ce0 { O 1 bit } WEIGHT1_2_2_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WEIGHT1_2_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 151 \
    name WEIGHT1_2_3_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WEIGHT1_2_3_V \
    op interface \
    ports { WEIGHT1_2_3_V_address0 { O 7 vector } WEIGHT1_2_3_V_ce0 { O 1 bit } WEIGHT1_2_3_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WEIGHT1_2_3_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 152 \
    name WEIGHT1_2_4_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WEIGHT1_2_4_V \
    op interface \
    ports { WEIGHT1_2_4_V_address0 { O 7 vector } WEIGHT1_2_4_V_ce0 { O 1 bit } WEIGHT1_2_4_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WEIGHT1_2_4_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 153 \
    name WEIGHT1_2_5_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WEIGHT1_2_5_V \
    op interface \
    ports { WEIGHT1_2_5_V_address0 { O 7 vector } WEIGHT1_2_5_V_ce0 { O 1 bit } WEIGHT1_2_5_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WEIGHT1_2_5_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 154 \
    name WEIGHT1_2_6_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WEIGHT1_2_6_V \
    op interface \
    ports { WEIGHT1_2_6_V_address0 { O 7 vector } WEIGHT1_2_6_V_ce0 { O 1 bit } WEIGHT1_2_6_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WEIGHT1_2_6_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 155 \
    name WEIGHT1_3_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WEIGHT1_3_0_V \
    op interface \
    ports { WEIGHT1_3_0_V_address0 { O 7 vector } WEIGHT1_3_0_V_ce0 { O 1 bit } WEIGHT1_3_0_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WEIGHT1_3_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 156 \
    name WEIGHT1_3_1_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WEIGHT1_3_1_V \
    op interface \
    ports { WEIGHT1_3_1_V_address0 { O 7 vector } WEIGHT1_3_1_V_ce0 { O 1 bit } WEIGHT1_3_1_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WEIGHT1_3_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 157 \
    name WEIGHT1_3_2_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WEIGHT1_3_2_V \
    op interface \
    ports { WEIGHT1_3_2_V_address0 { O 7 vector } WEIGHT1_3_2_V_ce0 { O 1 bit } WEIGHT1_3_2_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WEIGHT1_3_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 158 \
    name WEIGHT1_3_3_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WEIGHT1_3_3_V \
    op interface \
    ports { WEIGHT1_3_3_V_address0 { O 7 vector } WEIGHT1_3_3_V_ce0 { O 1 bit } WEIGHT1_3_3_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WEIGHT1_3_3_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 159 \
    name WEIGHT1_3_4_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WEIGHT1_3_4_V \
    op interface \
    ports { WEIGHT1_3_4_V_address0 { O 7 vector } WEIGHT1_3_4_V_ce0 { O 1 bit } WEIGHT1_3_4_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WEIGHT1_3_4_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 160 \
    name WEIGHT1_3_5_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WEIGHT1_3_5_V \
    op interface \
    ports { WEIGHT1_3_5_V_address0 { O 7 vector } WEIGHT1_3_5_V_ce0 { O 1 bit } WEIGHT1_3_5_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WEIGHT1_3_5_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 161 \
    name WEIGHT1_3_6_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WEIGHT1_3_6_V \
    op interface \
    ports { WEIGHT1_3_6_V_address0 { O 7 vector } WEIGHT1_3_6_V_ce0 { O 1 bit } WEIGHT1_3_6_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WEIGHT1_3_6_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 162 \
    name WEIGHT1_4_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WEIGHT1_4_0_V \
    op interface \
    ports { WEIGHT1_4_0_V_address0 { O 7 vector } WEIGHT1_4_0_V_ce0 { O 1 bit } WEIGHT1_4_0_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WEIGHT1_4_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 163 \
    name WEIGHT1_4_1_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WEIGHT1_4_1_V \
    op interface \
    ports { WEIGHT1_4_1_V_address0 { O 7 vector } WEIGHT1_4_1_V_ce0 { O 1 bit } WEIGHT1_4_1_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WEIGHT1_4_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 164 \
    name WEIGHT1_4_2_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WEIGHT1_4_2_V \
    op interface \
    ports { WEIGHT1_4_2_V_address0 { O 7 vector } WEIGHT1_4_2_V_ce0 { O 1 bit } WEIGHT1_4_2_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WEIGHT1_4_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 165 \
    name WEIGHT1_4_3_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WEIGHT1_4_3_V \
    op interface \
    ports { WEIGHT1_4_3_V_address0 { O 7 vector } WEIGHT1_4_3_V_ce0 { O 1 bit } WEIGHT1_4_3_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WEIGHT1_4_3_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 166 \
    name WEIGHT1_4_4_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WEIGHT1_4_4_V \
    op interface \
    ports { WEIGHT1_4_4_V_address0 { O 7 vector } WEIGHT1_4_4_V_ce0 { O 1 bit } WEIGHT1_4_4_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WEIGHT1_4_4_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 167 \
    name WEIGHT1_4_5_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WEIGHT1_4_5_V \
    op interface \
    ports { WEIGHT1_4_5_V_address0 { O 7 vector } WEIGHT1_4_5_V_ce0 { O 1 bit } WEIGHT1_4_5_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WEIGHT1_4_5_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 168 \
    name WEIGHT1_4_6_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WEIGHT1_4_6_V \
    op interface \
    ports { WEIGHT1_4_6_V_address0 { O 7 vector } WEIGHT1_4_6_V_ce0 { O 1 bit } WEIGHT1_4_6_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WEIGHT1_4_6_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 169 \
    name WEIGHT1_5_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WEIGHT1_5_0_V \
    op interface \
    ports { WEIGHT1_5_0_V_address0 { O 7 vector } WEIGHT1_5_0_V_ce0 { O 1 bit } WEIGHT1_5_0_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WEIGHT1_5_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 170 \
    name WEIGHT1_5_1_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WEIGHT1_5_1_V \
    op interface \
    ports { WEIGHT1_5_1_V_address0 { O 7 vector } WEIGHT1_5_1_V_ce0 { O 1 bit } WEIGHT1_5_1_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WEIGHT1_5_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 171 \
    name WEIGHT1_5_2_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WEIGHT1_5_2_V \
    op interface \
    ports { WEIGHT1_5_2_V_address0 { O 7 vector } WEIGHT1_5_2_V_ce0 { O 1 bit } WEIGHT1_5_2_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WEIGHT1_5_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 172 \
    name WEIGHT1_5_3_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WEIGHT1_5_3_V \
    op interface \
    ports { WEIGHT1_5_3_V_address0 { O 7 vector } WEIGHT1_5_3_V_ce0 { O 1 bit } WEIGHT1_5_3_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WEIGHT1_5_3_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 173 \
    name WEIGHT1_5_4_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WEIGHT1_5_4_V \
    op interface \
    ports { WEIGHT1_5_4_V_address0 { O 7 vector } WEIGHT1_5_4_V_ce0 { O 1 bit } WEIGHT1_5_4_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WEIGHT1_5_4_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 174 \
    name WEIGHT1_5_5_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WEIGHT1_5_5_V \
    op interface \
    ports { WEIGHT1_5_5_V_address0 { O 7 vector } WEIGHT1_5_5_V_ce0 { O 1 bit } WEIGHT1_5_5_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WEIGHT1_5_5_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 175 \
    name WEIGHT1_5_6_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WEIGHT1_5_6_V \
    op interface \
    ports { WEIGHT1_5_6_V_address0 { O 7 vector } WEIGHT1_5_6_V_ce0 { O 1 bit } WEIGHT1_5_6_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WEIGHT1_5_6_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 176 \
    name WEIGHT1_6_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WEIGHT1_6_0_V \
    op interface \
    ports { WEIGHT1_6_0_V_address0 { O 7 vector } WEIGHT1_6_0_V_ce0 { O 1 bit } WEIGHT1_6_0_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WEIGHT1_6_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 177 \
    name WEIGHT1_6_1_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WEIGHT1_6_1_V \
    op interface \
    ports { WEIGHT1_6_1_V_address0 { O 7 vector } WEIGHT1_6_1_V_ce0 { O 1 bit } WEIGHT1_6_1_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WEIGHT1_6_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 178 \
    name WEIGHT1_6_2_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WEIGHT1_6_2_V \
    op interface \
    ports { WEIGHT1_6_2_V_address0 { O 7 vector } WEIGHT1_6_2_V_ce0 { O 1 bit } WEIGHT1_6_2_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WEIGHT1_6_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 179 \
    name WEIGHT1_6_3_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WEIGHT1_6_3_V \
    op interface \
    ports { WEIGHT1_6_3_V_address0 { O 7 vector } WEIGHT1_6_3_V_ce0 { O 1 bit } WEIGHT1_6_3_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WEIGHT1_6_3_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 180 \
    name WEIGHT1_6_4_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WEIGHT1_6_4_V \
    op interface \
    ports { WEIGHT1_6_4_V_address0 { O 7 vector } WEIGHT1_6_4_V_ce0 { O 1 bit } WEIGHT1_6_4_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WEIGHT1_6_4_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 181 \
    name WEIGHT1_6_5_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WEIGHT1_6_5_V \
    op interface \
    ports { WEIGHT1_6_5_V_address0 { O 7 vector } WEIGHT1_6_5_V_ce0 { O 1 bit } WEIGHT1_6_5_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WEIGHT1_6_5_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 182 \
    name WEIGHT1_6_6_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WEIGHT1_6_6_V \
    op interface \
    ports { WEIGHT1_6_6_V_address0 { O 7 vector } WEIGHT1_6_6_V_ce0 { O 1 bit } WEIGHT1_6_6_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WEIGHT1_6_6_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 183 \
    name WEIGHT1_7_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WEIGHT1_7_0_V \
    op interface \
    ports { WEIGHT1_7_0_V_address0 { O 7 vector } WEIGHT1_7_0_V_ce0 { O 1 bit } WEIGHT1_7_0_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WEIGHT1_7_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 184 \
    name WEIGHT1_7_1_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WEIGHT1_7_1_V \
    op interface \
    ports { WEIGHT1_7_1_V_address0 { O 7 vector } WEIGHT1_7_1_V_ce0 { O 1 bit } WEIGHT1_7_1_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WEIGHT1_7_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 185 \
    name WEIGHT1_7_2_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WEIGHT1_7_2_V \
    op interface \
    ports { WEIGHT1_7_2_V_address0 { O 7 vector } WEIGHT1_7_2_V_ce0 { O 1 bit } WEIGHT1_7_2_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WEIGHT1_7_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 186 \
    name WEIGHT1_7_3_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WEIGHT1_7_3_V \
    op interface \
    ports { WEIGHT1_7_3_V_address0 { O 7 vector } WEIGHT1_7_3_V_ce0 { O 1 bit } WEIGHT1_7_3_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WEIGHT1_7_3_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 187 \
    name WEIGHT1_7_4_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WEIGHT1_7_4_V \
    op interface \
    ports { WEIGHT1_7_4_V_address0 { O 7 vector } WEIGHT1_7_4_V_ce0 { O 1 bit } WEIGHT1_7_4_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WEIGHT1_7_4_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 188 \
    name WEIGHT1_7_5_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WEIGHT1_7_5_V \
    op interface \
    ports { WEIGHT1_7_5_V_address0 { O 7 vector } WEIGHT1_7_5_V_ce0 { O 1 bit } WEIGHT1_7_5_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WEIGHT1_7_5_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 189 \
    name WEIGHT1_7_6_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename WEIGHT1_7_6_V \
    op interface \
    ports { WEIGHT1_7_6_V_address0 { O 7 vector } WEIGHT1_7_6_V_ce0 { O 1 bit } WEIGHT1_7_6_V_q0 { I 8 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'WEIGHT1_7_6_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 190 \
    name IFM_0_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename IFM_0_V \
    op interface \
    ports { IFM_0_V_address0 { O 8 vector } IFM_0_V_ce0 { O 1 bit } IFM_0_V_q0 { I 26 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'IFM_0_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 191 \
    name IFM_1_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename IFM_1_V \
    op interface \
    ports { IFM_1_V_address0 { O 8 vector } IFM_1_V_ce0 { O 1 bit } IFM_1_V_q0 { I 26 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'IFM_1_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 192 \
    name IFM_2_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename IFM_2_V \
    op interface \
    ports { IFM_2_V_address0 { O 8 vector } IFM_2_V_ce0 { O 1 bit } IFM_2_V_q0 { I 26 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'IFM_2_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 193 \
    name IFM_3_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename IFM_3_V \
    op interface \
    ports { IFM_3_V_address0 { O 8 vector } IFM_3_V_ce0 { O 1 bit } IFM_3_V_q0 { I 26 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'IFM_3_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 194 \
    name IFM_4_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename IFM_4_V \
    op interface \
    ports { IFM_4_V_address0 { O 8 vector } IFM_4_V_ce0 { O 1 bit } IFM_4_V_q0 { I 26 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'IFM_4_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 195 \
    name IFM_5_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename IFM_5_V \
    op interface \
    ports { IFM_5_V_address0 { O 8 vector } IFM_5_V_ce0 { O 1 bit } IFM_5_V_q0 { I 26 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'IFM_5_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 196 \
    name IFM_6_V \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename IFM_6_V \
    op interface \
    ports { IFM_6_V_address0 { O 8 vector } IFM_6_V_ce0 { O 1 bit } IFM_6_V_q0 { I 26 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'IFM_6_V'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 197 \
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
    id 198 \
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
    id 199 \
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
    id 200 \
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
    id 201 \
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
    id 202 \
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
    id 203 \
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
    id 204 \
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


# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 205 \
    name row \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_row \
    op interface \
    ports { row { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 206 \
    name col \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_col \
    op interface \
    ports { col { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 207 \
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
    id 208 \
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
    id 209 \
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


