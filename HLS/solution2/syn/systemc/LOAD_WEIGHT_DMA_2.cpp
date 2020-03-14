#include "LOAD_WEIGHT_DMA.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void LOAD_WEIGHT_DMA::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ((!(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()))) {
        i_reg_6949 = i_mid2_fu_7129_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        i_reg_6949 = ap_const_lv6_0;
    }
    if ((!(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()))) {
        indvar_flatten3_reg_6938 = indvar_flatten_next4_fu_7060_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        indvar_flatten3_reg_6938 = ap_const_lv72_0;
    }
    if ((!(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()))) {
        indvar_flatten4_reg_6960 = indvar_flatten_next3_fu_8185_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        indvar_flatten4_reg_6960 = ap_const_lv67_0;
    }
    if ((!(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()))) {
        indvar_flatten_reg_6982 = indvar_flatten_next_fu_8171_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        indvar_flatten_reg_6982 = ap_const_lv64_0;
    }
    if ((!(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()))) {
        j_reg_6971 = j_mid2_fu_7164_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        j_reg_6971 = ap_const_lv3_0;
    }
    if ((!(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()))) {
        l_reg_7004 = l_1_fu_8159_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        l_reg_7004 = ap_const_lv32_0;
    }
    if ((!(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()))) {
        m_reg_6993 = m_mid2_fu_7222_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        m_reg_6993 = ap_const_lv31_0;
    }
    if ((esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        bound4_reg_8212 = bound4_fu_7029_p2.read();
        bound_reg_8207 = bound_fu_7019_p2.read();
        exitcond_flatten_mid_reg_8228 = exitcond_flatten_mid_fu_7049_p2.read();
        exitcond_mid_reg_8222 = exitcond_mid_fu_7043_p2.read();
        tmp_reg_8217 = tmp_fu_7035_p3.read();
    }
}

void LOAD_WEIGHT_DMA::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            if ((!(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else if ((!(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()))) {
                ap_NS_fsm = ap_ST_fsm_state3;
            } else {
                ap_NS_fsm = ap_ST_fsm_state2;
            }
            break;
        case 4 : 
            ap_NS_fsm = ap_ST_fsm_state1;
            break;
        default : 
            ap_NS_fsm = "XXX";
            break;
    }
}

}

