#include "FIRE4.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void FIRE4::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter0 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_condition_pp0_exit_iter0_state4.read()))) {
            ap_enable_reg_pp0_iter0 = ap_const_logic_0;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
            ap_enable_reg_pp0_iter0 = ap_const_logic_1;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter1 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0)) {
            if (esl_seteq<1,1,1>(ap_const_logic_1, ap_condition_pp0_exit_iter0_state4.read())) {
                ap_enable_reg_pp0_iter1 = (ap_condition_pp0_exit_iter0_state4.read() ^ ap_const_logic_1);
            } else if (esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1)) {
                ap_enable_reg_pp0_iter1 = ap_enable_reg_pp0_iter0.read();
            }
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter2 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp0_iter2 = ap_enable_reg_pp0_iter1.read();
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter3 = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0)) {
            ap_enable_reg_pp0_iter3 = ap_enable_reg_pp0_iter2.read();
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
            ap_enable_reg_pp0_iter3 = ap_const_logic_0;
        }
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(exitcond_flatten7_reg_18802.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        i_reg_1155 = tmp_49_mid2_v_reg_18811.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        i_reg_1155 = ap_const_lv31_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten7_fu_1323_p2.read(), ap_const_lv1_0))) {
        indvar_flatten6_reg_1144 = indvar_flatten_next7_fu_1328_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        indvar_flatten6_reg_1144 = ap_const_lv128_lc_1;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten7_fu_1323_p2.read(), ap_const_lv1_0))) {
        indvar_flatten7_reg_1166 = indvar_flatten_next6_fu_1586_p3.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        indvar_flatten7_reg_1166 = ap_const_lv96_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten7_fu_1323_p2.read(), ap_const_lv1_0))) {
        indvar_flatten_reg_1188 = indvar_flatten_next_fu_1572_p3.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        indvar_flatten_reg_1188 = ap_const_lv64_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten7_fu_1323_p2.read(), ap_const_lv1_0))) {
        j_reg_1177 = j_mid2_fu_1487_p3.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        j_reg_1177 = ap_const_lv32_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten7_fu_1323_p2.read(), ap_const_lv1_0))) {
        tcc_reg_1208 = tcc_1_fu_1560_p2.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        tcc_reg_1208 = col.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten7_fu_1323_p2.read(), ap_const_lv1_0))) {
        trr_reg_1199 = trr_mid2_fu_1537_p3.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        trr_reg_1199 = row.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(exitcond_flatten7_reg_18802.read(), ap_const_lv1_0))) {
        OFM_0_V_addr_reg_19208 =  (sc_lv<8>) (tmp_290_cast_reg_18982.read());
        OFM_1_V_addr_reg_19214 =  (sc_lv<8>) (tmp_290_cast_reg_18982.read());
        OFM_2_V_addr_reg_19220 =  (sc_lv<8>) (tmp_290_cast_reg_18982.read());
        OFM_3_V_addr_reg_19226 =  (sc_lv<8>) (tmp_290_cast_reg_18982.read());
        OFM_4_V_addr_reg_19232 =  (sc_lv<8>) (tmp_290_cast_reg_18982.read());
        OFM_5_V_addr_reg_19238 =  (sc_lv<8>) (tmp_290_cast_reg_18982.read());
        OFM_6_V_addr_reg_19244 =  (sc_lv<8>) (tmp_290_cast_reg_18982.read());
        OFM_7_V_addr_reg_19250 =  (sc_lv<8>) (tmp_290_cast_reg_18982.read());
        p_Val2_15_0_1_reg_19262 = p_Val2_15_0_1_fu_2006_p3.read();
        p_Val2_15_0_2_reg_19268 = p_Val2_15_0_2_fu_2216_p3.read();
        p_Val2_15_1_1_reg_19280 = p_Val2_15_1_1_fu_2628_p3.read();
        p_Val2_15_1_2_reg_19286 = p_Val2_15_1_2_fu_2834_p3.read();
        p_Val2_15_1_reg_19274 = p_Val2_15_1_fu_2422_p3.read();
        p_Val2_15_2_1_reg_19298 = p_Val2_15_2_1_fu_3246_p3.read();
        p_Val2_15_2_2_reg_19304 = p_Val2_15_2_2_fu_3452_p3.read();
        p_Val2_15_2_reg_19292 = p_Val2_15_2_fu_3040_p3.read();
        p_Val2_15_3_1_reg_19316 = p_Val2_15_3_1_fu_3864_p3.read();
        p_Val2_15_3_2_reg_19322 = p_Val2_15_3_2_fu_4070_p3.read();
        p_Val2_15_3_reg_19310 = p_Val2_15_3_fu_3658_p3.read();
        p_Val2_15_4_1_reg_19334 = p_Val2_15_4_1_fu_4482_p3.read();
        p_Val2_15_4_2_reg_19340 = p_Val2_15_4_2_fu_4688_p3.read();
        p_Val2_15_4_reg_19328 = p_Val2_15_4_fu_4276_p3.read();
        p_Val2_15_5_1_reg_19352 = p_Val2_15_5_1_fu_5100_p3.read();
        p_Val2_15_5_2_reg_19358 = p_Val2_15_5_2_fu_5306_p3.read();
        p_Val2_15_5_reg_19346 = p_Val2_15_5_fu_4894_p3.read();
        p_Val2_15_6_1_reg_19370 = p_Val2_15_6_1_fu_5718_p3.read();
        p_Val2_15_6_2_reg_19376 = p_Val2_15_6_2_fu_5924_p3.read();
        p_Val2_15_6_reg_19364 = p_Val2_15_6_fu_5512_p3.read();
        p_Val2_15_7_1_reg_19388 = p_Val2_15_7_1_fu_6336_p3.read();
        p_Val2_15_7_2_reg_19394 = p_Val2_15_7_2_fu_6542_p3.read();
        p_Val2_15_7_reg_19382 = p_Val2_15_7_fu_6130_p3.read();
        p_Val2_9_reg_19256 = p_Val2_9_fu_1796_p3.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        ap_reg_pp0_iter1_exitcond_flatten7_reg_18802 = exitcond_flatten7_reg_18802.read();
        exitcond_flatten7_reg_18802 = exitcond_flatten7_fu_1323_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0)) {
        ap_reg_pp0_iter2_OFM_0_V_addr_reg_19208 = OFM_0_V_addr_reg_19208.read();
        ap_reg_pp0_iter2_OFM_1_V_addr_reg_19214 = OFM_1_V_addr_reg_19214.read();
        ap_reg_pp0_iter2_OFM_2_V_addr_reg_19220 = OFM_2_V_addr_reg_19220.read();
        ap_reg_pp0_iter2_OFM_3_V_addr_reg_19226 = OFM_3_V_addr_reg_19226.read();
        ap_reg_pp0_iter2_OFM_4_V_addr_reg_19232 = OFM_4_V_addr_reg_19232.read();
        ap_reg_pp0_iter2_OFM_5_V_addr_reg_19238 = OFM_5_V_addr_reg_19238.read();
        ap_reg_pp0_iter2_OFM_6_V_addr_reg_19244 = OFM_6_V_addr_reg_19244.read();
        ap_reg_pp0_iter2_OFM_7_V_addr_reg_19250 = OFM_7_V_addr_reg_19250.read();
        ap_reg_pp0_iter2_exitcond_flatten7_reg_18802 = ap_reg_pp0_iter1_exitcond_flatten7_reg_18802.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        bound2_reg_18786 = bound2_fu_1295_p2.read();
        bound_reg_18780 = bound_fu_1281_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        bound3_reg_18792 = bound3_fu_1307_p2.read();
        exitcond_flatten_mid_reg_18797 = exitcond_flatten_mid_fu_1313_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_reg_pp0_iter1_exitcond_flatten7_reg_18802.read(), ap_const_lv1_0))) {
        p_Val2_15_0_4_reg_19420 = p_Val2_15_0_4_fu_7262_p3.read();
        p_Val2_15_0_5_reg_19426 = p_Val2_15_0_5_fu_7472_p3.read();
        p_Val2_15_0_6_reg_19432 = p_Val2_15_0_6_fu_7682_p3.read();
        p_Val2_15_1_4_reg_19458 = p_Val2_15_1_4_fu_8394_p3.read();
        p_Val2_15_1_5_reg_19464 = p_Val2_15_1_5_fu_8600_p3.read();
        p_Val2_15_1_6_reg_19470 = p_Val2_15_1_6_fu_8806_p3.read();
        p_Val2_15_2_4_reg_19496 = p_Val2_15_2_4_fu_9518_p3.read();
        p_Val2_15_2_5_reg_19502 = p_Val2_15_2_5_fu_9724_p3.read();
        p_Val2_15_2_6_reg_19508 = p_Val2_15_2_6_fu_9930_p3.read();
        p_Val2_15_3_4_reg_19534 = p_Val2_15_3_4_fu_10642_p3.read();
        p_Val2_15_3_5_reg_19540 = p_Val2_15_3_5_fu_10848_p3.read();
        p_Val2_15_3_6_reg_19546 = p_Val2_15_3_6_fu_11054_p3.read();
        p_Val2_15_4_4_reg_19572 = p_Val2_15_4_4_fu_11766_p3.read();
        p_Val2_15_4_5_reg_19578 = p_Val2_15_4_5_fu_11972_p3.read();
        p_Val2_15_4_6_reg_19584 = p_Val2_15_4_6_fu_12178_p3.read();
        p_Val2_15_5_4_reg_19610 = p_Val2_15_5_4_fu_12890_p3.read();
        p_Val2_15_5_5_reg_19616 = p_Val2_15_5_5_fu_13096_p3.read();
        p_Val2_15_5_6_reg_19622 = p_Val2_15_5_6_fu_13302_p3.read();
        p_Val2_15_6_4_reg_19648 = p_Val2_15_6_4_fu_14014_p3.read();
        p_Val2_15_6_5_reg_19654 = p_Val2_15_6_5_fu_14220_p3.read();
        p_Val2_15_6_6_reg_19660 = p_Val2_15_6_6_fu_14426_p3.read();
        p_Val2_15_7_4_reg_19686 = p_Val2_15_7_4_fu_15138_p3.read();
        p_Val2_15_7_5_reg_19692 = p_Val2_15_7_5_fu_15344_p3.read();
        p_Val2_15_7_6_reg_19698 = p_Val2_15_7_6_fu_15550_p3.read();
        p_Val2_17_0_3_reg_19407 = p_Val2_17_0_3_fu_7046_p2.read();
        p_Val2_17_1_3_reg_19445 = p_Val2_17_1_3_fu_8182_p2.read();
        p_Val2_17_2_3_reg_19483 = p_Val2_17_2_3_fu_9306_p2.read();
        p_Val2_17_3_3_reg_19521 = p_Val2_17_3_3_fu_10430_p2.read();
        p_Val2_17_4_3_reg_19559 = p_Val2_17_4_3_fu_11554_p2.read();
        p_Val2_17_5_3_reg_19597 = p_Val2_17_5_3_fu_12678_p2.read();
        p_Val2_17_6_3_reg_19635 = p_Val2_17_6_3_fu_13802_p2.read();
        p_Val2_17_7_3_reg_19673 = p_Val2_17_7_3_fu_14926_p2.read();
        tmp_241_reg_19400 = p_Val2_16_0_3_fu_7032_p2.read().range(26, 26);
        tmp_245_reg_19413 = p_Val2_17_0_3_fu_7046_p2.read().range(25, 25);
        tmp_317_reg_19438 = p_Val2_16_1_3_fu_8168_p2.read().range(26, 26);
        tmp_318_reg_19451 = p_Val2_17_1_3_fu_8182_p2.read().range(25, 25);
        tmp_366_reg_19476 = p_Val2_16_2_3_fu_9292_p2.read().range(26, 26);
        tmp_367_reg_19489 = p_Val2_17_2_3_fu_9306_p2.read().range(25, 25);
        tmp_415_reg_19514 = p_Val2_16_3_3_fu_10416_p2.read().range(26, 26);
        tmp_416_reg_19527 = p_Val2_17_3_3_fu_10430_p2.read().range(25, 25);
        tmp_464_reg_19552 = p_Val2_16_4_3_fu_11540_p2.read().range(26, 26);
        tmp_465_reg_19565 = p_Val2_17_4_3_fu_11554_p2.read().range(25, 25);
        tmp_513_reg_19590 = p_Val2_16_5_3_fu_12664_p2.read().range(26, 26);
        tmp_514_reg_19603 = p_Val2_17_5_3_fu_12678_p2.read().range(25, 25);
        tmp_562_reg_19628 = p_Val2_16_6_3_fu_13788_p2.read().range(26, 26);
        tmp_563_reg_19641 = p_Val2_17_6_3_fu_13802_p2.read().range(25, 25);
        tmp_611_reg_19666 = p_Val2_16_7_3_fu_14912_p2.read().range(26, 26);
        tmp_612_reg_19679 = p_Val2_17_7_3_fu_14926_p2.read().range(25, 25);
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(exitcond_flatten7_fu_1323_p2.read(), ap_const_lv1_0))) {
        tmp_287_cast_reg_18816 = tmp_287_cast_fu_1447_p1.read();
        tmp_290_cast_reg_18982 = tmp_290_cast_fu_1554_p1.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        tmp_48_reg_18759 = tmp_48_fu_1243_p2.read();
        tmp_50_reg_18764 = tmp_50_fu_1263_p2.read();
        tmp_54_mid_reg_18769 = tmp_54_mid_fu_1269_p2.read();
        tmp_s_reg_18754 = tmp_s_fu_1217_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(exitcond_flatten7_fu_1323_p2.read(), ap_const_lv1_0))) {
        tmp_49_mid2_v_reg_18811 = tmp_49_mid2_v_fu_1367_p3.read();
    }
}

void FIRE4::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            ap_NS_fsm = ap_ST_fsm_state3;
            break;
        case 4 : 
            ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            break;
        case 8 : 
            if ((!(esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && esl_seteq<1,1,1>(ap_enable_reg_pp0_iter2.read(), ap_const_logic_0)) && !(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(exitcond_flatten7_fu_1323_p2.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_0)))) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            } else if (((esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && 
  esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
  esl_seteq<1,1,1>(ap_enable_reg_pp0_iter2.read(), ap_const_logic_0)) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
  esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && 
  esl_seteq<1,1,1>(exitcond_flatten7_fu_1323_p2.read(), ap_const_lv1_1) && 
  esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_0)))) {
                ap_NS_fsm = ap_ST_fsm_state8;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            }
            break;
        case 16 : 
            ap_NS_fsm = ap_ST_fsm_state1;
            break;
        default : 
            ap_NS_fsm = "XXXXX";
            break;
    }
}

}

