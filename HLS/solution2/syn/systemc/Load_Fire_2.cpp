#include "Load_Fire.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void Load_Fire::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_FIRE3_fu_2067_ap_start_reg = ap_const_logic_0;
    } else {
        if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
              esl_seteq<1,1,1>(tmp_fu_4957_p2.read(), ap_const_lv1_1) && 
              esl_seteq<1,1,1>(tmp_23_fu_4953_p1.read(), ap_const_lv1_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
              esl_seteq<1,1,1>(tmp_fu_4957_p2.read(), ap_const_lv1_1) && 
              esl_seteq<1,1,1>(tmp_23_fu_4953_p1.read(), ap_const_lv1_1)))) {
            grp_FIRE3_fu_2067_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_FIRE3_fu_2067_ap_ready.read())) {
            grp_FIRE3_fu_2067_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_LOAD_IFM_fu_4922_ap_start_reg = ap_const_logic_0;
    } else {
        if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
              esl_seteq<1,1,1>(tmp_fu_4957_p2.read(), ap_const_lv1_1) && 
              esl_seteq<1,1,1>(tmp_23_fu_4953_p1.read(), ap_const_lv1_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
              esl_seteq<1,1,1>(tmp_fu_4957_p2.read(), ap_const_lv1_1) && 
              esl_seteq<1,1,1>(tmp_23_fu_4953_p1.read(), ap_const_lv1_1)))) {
            grp_LOAD_IFM_fu_4922_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_LOAD_IFM_fu_4922_ap_ready.read())) {
            grp_LOAD_IFM_fu_4922_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_LOAD_WEIGHT_DMA_fu_3569_ap_start_reg = ap_const_logic_0;
    } else {
        if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
              esl_seteq<1,1,1>(tmp_fu_4957_p2.read(), ap_const_lv1_1) && 
              esl_seteq<1,1,1>(tmp_23_fu_4953_p1.read(), ap_const_lv1_0)) || 
             (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
              esl_seteq<1,1,1>(tmp_fu_4957_p2.read(), ap_const_lv1_1) && 
              esl_seteq<1,1,1>(tmp_23_fu_4953_p1.read(), ap_const_lv1_1)))) {
            grp_LOAD_WEIGHT_DMA_fu_3569_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_LOAD_WEIGHT_DMA_fu_3569_ap_ready.read())) {
            grp_LOAD_WEIGHT_DMA_fu_3569_ap_start_reg = ap_const_logic_0;
        }
    }
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_state3_on_subcall_done.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()))) {
        i_reg_2055 = i_3_fu_4968_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        i_reg_2055 = ap_const_lv32_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_state3_on_subcall_done.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()))) {
        idx_reg_2044 = idx_1_reg_5014.read();
    } else if ((esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        idx_reg_2044 = ap_const_lv32_0;
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        idx_1_reg_5014 = idx_1_fu_4962_p2.read();
        tmp_23_reg_5007 = tmp_23_fu_4953_p1.read();
    }
}

void Load_Fire::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            if ((esl_seteq<1,1,1>(tmp_fu_4957_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()))) {
                ap_NS_fsm = ap_ST_fsm_state1;
            } else {
                ap_NS_fsm = ap_ST_fsm_state3;
            }
            break;
        case 4 : 
            if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_state3_on_subcall_done.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state3;
            }
            break;
        default : 
            ap_NS_fsm =  (sc_lv<3>) ("XXX");
            break;
    }
}

}

