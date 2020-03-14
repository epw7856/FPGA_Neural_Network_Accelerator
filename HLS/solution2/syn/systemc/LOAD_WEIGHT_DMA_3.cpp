#include "LOAD_WEIGHT_DMA.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void LOAD_WEIGHT_DMA::thread_WEIGHT1_0_0_address0() {
    WEIGHT1_0_0_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_0_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_0_0_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_0_0_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_0_0_d0() {
    WEIGHT1_0_0_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_0_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_0) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_0))) {
        WEIGHT1_0_0_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_0_0_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_0_1_address0() {
    WEIGHT1_0_1_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_0_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_0_1_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_0_1_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_0_1_d0() {
    WEIGHT1_0_1_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_0_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_1) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_0))) {
        WEIGHT1_0_1_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_0_1_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_0_2_address0() {
    WEIGHT1_0_2_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_0_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_0_2_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_0_2_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_0_2_d0() {
    WEIGHT1_0_2_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_0_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_2) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_0))) {
        WEIGHT1_0_2_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_0_2_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_0_3_address0() {
    WEIGHT1_0_3_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_0_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_0_3_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_0_3_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_0_3_d0() {
    WEIGHT1_0_3_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_0_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_3) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_0))) {
        WEIGHT1_0_3_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_0_3_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_0_4_address0() {
    WEIGHT1_0_4_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_0_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_0_4_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_0_4_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_0_4_d0() {
    WEIGHT1_0_4_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_0_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_4) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_0))) {
        WEIGHT1_0_4_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_0_4_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_0_5_address0() {
    WEIGHT1_0_5_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_0_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_0_5_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_0_5_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_0_5_d0() {
    WEIGHT1_0_5_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_0_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_5) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_0))) {
        WEIGHT1_0_5_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_0_5_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_0_6_address0() {
    WEIGHT1_0_6_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_0_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_0_6_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_0_6_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_0_6_d0() {
    WEIGHT1_0_6_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_0_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         ((esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
           esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_6) && 
           esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_0)) || 
          (esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
           esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_7) && 
           esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_0))))) {
        WEIGHT1_0_6_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_0_6_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_10_0_address0() {
    WEIGHT1_10_0_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_10_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_10_0_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_10_0_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_10_0_d0() {
    WEIGHT1_10_0_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_10_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_0) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_A))) {
        WEIGHT1_10_0_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_10_0_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_10_1_address0() {
    WEIGHT1_10_1_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_10_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_10_1_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_10_1_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_10_1_d0() {
    WEIGHT1_10_1_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_10_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_1) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_A))) {
        WEIGHT1_10_1_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_10_1_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_10_2_address0() {
    WEIGHT1_10_2_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_10_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_10_2_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_10_2_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_10_2_d0() {
    WEIGHT1_10_2_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_10_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_2) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_A))) {
        WEIGHT1_10_2_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_10_2_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_10_3_address0() {
    WEIGHT1_10_3_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_10_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_10_3_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_10_3_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_10_3_d0() {
    WEIGHT1_10_3_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_10_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_3) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_A))) {
        WEIGHT1_10_3_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_10_3_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_10_4_address0() {
    WEIGHT1_10_4_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_10_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_10_4_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_10_4_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_10_4_d0() {
    WEIGHT1_10_4_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_10_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_4) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_A))) {
        WEIGHT1_10_4_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_10_4_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_10_5_address0() {
    WEIGHT1_10_5_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_10_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_10_5_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_10_5_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_10_5_d0() {
    WEIGHT1_10_5_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_10_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_5) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_A))) {
        WEIGHT1_10_5_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_10_5_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_10_6_address0() {
    WEIGHT1_10_6_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_10_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_10_6_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_10_6_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_10_6_d0() {
    WEIGHT1_10_6_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_10_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         ((esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
           esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_6) && 
           esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_A)) || 
          (esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
           esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_7) && 
           esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_A))))) {
        WEIGHT1_10_6_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_10_6_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_11_0_address0() {
    WEIGHT1_11_0_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_11_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_11_0_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_11_0_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_11_0_d0() {
    WEIGHT1_11_0_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_11_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_0) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_B))) {
        WEIGHT1_11_0_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_11_0_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_11_1_address0() {
    WEIGHT1_11_1_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_11_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_11_1_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_11_1_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_11_1_d0() {
    WEIGHT1_11_1_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_11_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_1) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_B))) {
        WEIGHT1_11_1_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_11_1_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_11_2_address0() {
    WEIGHT1_11_2_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_11_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_11_2_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_11_2_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_11_2_d0() {
    WEIGHT1_11_2_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_11_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_2) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_B))) {
        WEIGHT1_11_2_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_11_2_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_11_3_address0() {
    WEIGHT1_11_3_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_11_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_11_3_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_11_3_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_11_3_d0() {
    WEIGHT1_11_3_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_11_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_3) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_B))) {
        WEIGHT1_11_3_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_11_3_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_11_4_address0() {
    WEIGHT1_11_4_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_11_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_11_4_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_11_4_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_11_4_d0() {
    WEIGHT1_11_4_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_11_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_4) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_B))) {
        WEIGHT1_11_4_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_11_4_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_11_5_address0() {
    WEIGHT1_11_5_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_11_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_11_5_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_11_5_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_11_5_d0() {
    WEIGHT1_11_5_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_11_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_5) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_B))) {
        WEIGHT1_11_5_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_11_5_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_11_6_address0() {
    WEIGHT1_11_6_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_11_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_11_6_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_11_6_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_11_6_d0() {
    WEIGHT1_11_6_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_11_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         ((esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
           esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_6) && 
           esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_B)) || 
          (esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
           esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_7) && 
           esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_B))))) {
        WEIGHT1_11_6_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_11_6_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_12_0_address0() {
    WEIGHT1_12_0_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_12_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_12_0_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_12_0_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_12_0_d0() {
    WEIGHT1_12_0_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_12_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_0) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_C))) {
        WEIGHT1_12_0_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_12_0_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_12_1_address0() {
    WEIGHT1_12_1_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_12_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_12_1_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_12_1_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_12_1_d0() {
    WEIGHT1_12_1_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_12_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_1) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_C))) {
        WEIGHT1_12_1_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_12_1_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_12_2_address0() {
    WEIGHT1_12_2_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_12_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_12_2_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_12_2_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_12_2_d0() {
    WEIGHT1_12_2_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_12_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_2) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_C))) {
        WEIGHT1_12_2_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_12_2_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_12_3_address0() {
    WEIGHT1_12_3_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_12_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_12_3_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_12_3_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_12_3_d0() {
    WEIGHT1_12_3_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_12_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_3) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_C))) {
        WEIGHT1_12_3_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_12_3_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_12_4_address0() {
    WEIGHT1_12_4_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_12_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_12_4_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_12_4_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_12_4_d0() {
    WEIGHT1_12_4_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_12_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_4) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_C))) {
        WEIGHT1_12_4_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_12_4_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_12_5_address0() {
    WEIGHT1_12_5_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_12_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_12_5_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_12_5_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_12_5_d0() {
    WEIGHT1_12_5_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_12_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_5) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_C))) {
        WEIGHT1_12_5_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_12_5_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_12_6_address0() {
    WEIGHT1_12_6_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_12_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_12_6_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_12_6_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_12_6_d0() {
    WEIGHT1_12_6_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_12_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         ((esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
           esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_6) && 
           esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_C)) || 
          (esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
           esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_7) && 
           esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_C))))) {
        WEIGHT1_12_6_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_12_6_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_13_0_address0() {
    WEIGHT1_13_0_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_13_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_13_0_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_13_0_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_13_0_d0() {
    WEIGHT1_13_0_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_13_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_0) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_D))) {
        WEIGHT1_13_0_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_13_0_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_13_1_address0() {
    WEIGHT1_13_1_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_13_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_13_1_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_13_1_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_13_1_d0() {
    WEIGHT1_13_1_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_13_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_1) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_D))) {
        WEIGHT1_13_1_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_13_1_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_13_2_address0() {
    WEIGHT1_13_2_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_13_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_13_2_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_13_2_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_13_2_d0() {
    WEIGHT1_13_2_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_13_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_2) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_D))) {
        WEIGHT1_13_2_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_13_2_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_13_3_address0() {
    WEIGHT1_13_3_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_13_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_13_3_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_13_3_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_13_3_d0() {
    WEIGHT1_13_3_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_13_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_3) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_D))) {
        WEIGHT1_13_3_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_13_3_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_13_4_address0() {
    WEIGHT1_13_4_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_13_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_13_4_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_13_4_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_13_4_d0() {
    WEIGHT1_13_4_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_13_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_4) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_D))) {
        WEIGHT1_13_4_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_13_4_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_13_5_address0() {
    WEIGHT1_13_5_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_13_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_13_5_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_13_5_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_13_5_d0() {
    WEIGHT1_13_5_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_13_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_5) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_D))) {
        WEIGHT1_13_5_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_13_5_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_13_6_address0() {
    WEIGHT1_13_6_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_13_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_13_6_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_13_6_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_13_6_d0() {
    WEIGHT1_13_6_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_13_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         ((esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
           esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_6) && 
           esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_D)) || 
          (esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
           esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_7) && 
           esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_D))))) {
        WEIGHT1_13_6_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_13_6_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_14_0_address0() {
    WEIGHT1_14_0_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_14_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_14_0_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_14_0_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_14_0_d0() {
    WEIGHT1_14_0_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_14_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_0) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_E))) {
        WEIGHT1_14_0_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_14_0_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_14_1_address0() {
    WEIGHT1_14_1_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_14_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_14_1_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_14_1_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_14_1_d0() {
    WEIGHT1_14_1_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_14_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_1) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_E))) {
        WEIGHT1_14_1_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_14_1_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_14_2_address0() {
    WEIGHT1_14_2_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_14_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_14_2_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_14_2_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_14_2_d0() {
    WEIGHT1_14_2_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_14_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_2) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_E))) {
        WEIGHT1_14_2_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_14_2_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_14_3_address0() {
    WEIGHT1_14_3_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_14_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_14_3_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_14_3_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_14_3_d0() {
    WEIGHT1_14_3_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_14_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_3) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_E))) {
        WEIGHT1_14_3_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_14_3_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_14_4_address0() {
    WEIGHT1_14_4_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_14_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_14_4_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_14_4_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_14_4_d0() {
    WEIGHT1_14_4_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_14_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_4) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_E))) {
        WEIGHT1_14_4_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_14_4_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_14_5_address0() {
    WEIGHT1_14_5_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_14_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_14_5_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_14_5_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_14_5_d0() {
    WEIGHT1_14_5_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_14_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_5) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_E))) {
        WEIGHT1_14_5_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_14_5_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_14_6_address0() {
    WEIGHT1_14_6_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_14_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_14_6_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_14_6_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_14_6_d0() {
    WEIGHT1_14_6_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_14_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         ((esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
           esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_6) && 
           esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_E)) || 
          (esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
           esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_7) && 
           esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_E))))) {
        WEIGHT1_14_6_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_14_6_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_15_0_address0() {
    WEIGHT1_15_0_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_15_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_15_0_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_15_0_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_15_0_d0() {
    WEIGHT1_15_0_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_15_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_0) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_F))) {
        WEIGHT1_15_0_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_15_0_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_15_1_address0() {
    WEIGHT1_15_1_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_15_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_15_1_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_15_1_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_15_1_d0() {
    WEIGHT1_15_1_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_15_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_1) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_F))) {
        WEIGHT1_15_1_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_15_1_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_15_2_address0() {
    WEIGHT1_15_2_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_15_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_15_2_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_15_2_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_15_2_d0() {
    WEIGHT1_15_2_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_15_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_2) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_F))) {
        WEIGHT1_15_2_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_15_2_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_15_3_address0() {
    WEIGHT1_15_3_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_15_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_15_3_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_15_3_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_15_3_d0() {
    WEIGHT1_15_3_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_15_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_3) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_F))) {
        WEIGHT1_15_3_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_15_3_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_15_4_address0() {
    WEIGHT1_15_4_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_15_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_15_4_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_15_4_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_15_4_d0() {
    WEIGHT1_15_4_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_15_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_4) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_F))) {
        WEIGHT1_15_4_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_15_4_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_15_5_address0() {
    WEIGHT1_15_5_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_15_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_15_5_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_15_5_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_15_5_d0() {
    WEIGHT1_15_5_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_15_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_5) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_F))) {
        WEIGHT1_15_5_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_15_5_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_15_6_address0() {
    WEIGHT1_15_6_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_15_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_15_6_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_15_6_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_15_6_d0() {
    WEIGHT1_15_6_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_15_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         ((esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
           esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_6) && 
           esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_F)) || 
          (esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
           esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_7) && 
           esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_F))))) {
        WEIGHT1_15_6_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_15_6_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_16_0_address0() {
    WEIGHT1_16_0_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_16_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_16_0_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_16_0_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_16_0_d0() {
    WEIGHT1_16_0_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_16_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_0) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_10))) {
        WEIGHT1_16_0_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_16_0_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_16_1_address0() {
    WEIGHT1_16_1_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_16_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_16_1_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_16_1_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_16_1_d0() {
    WEIGHT1_16_1_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_16_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_1) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_10))) {
        WEIGHT1_16_1_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_16_1_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_16_2_address0() {
    WEIGHT1_16_2_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_16_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_16_2_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_16_2_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_16_2_d0() {
    WEIGHT1_16_2_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_16_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_2) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_10))) {
        WEIGHT1_16_2_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_16_2_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_16_3_address0() {
    WEIGHT1_16_3_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_16_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_16_3_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_16_3_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_16_3_d0() {
    WEIGHT1_16_3_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_16_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_3) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_10))) {
        WEIGHT1_16_3_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_16_3_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_16_4_address0() {
    WEIGHT1_16_4_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_16_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_16_4_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_16_4_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_16_4_d0() {
    WEIGHT1_16_4_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_16_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_4) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_10))) {
        WEIGHT1_16_4_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_16_4_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_16_5_address0() {
    WEIGHT1_16_5_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_16_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_16_5_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_16_5_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_16_5_d0() {
    WEIGHT1_16_5_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_16_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_5) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_10))) {
        WEIGHT1_16_5_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_16_5_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_16_6_address0() {
    WEIGHT1_16_6_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_16_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_16_6_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_16_6_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_16_6_d0() {
    WEIGHT1_16_6_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_16_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         ((esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
           esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_6) && 
           esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_10)) || 
          (esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
           esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_7) && 
           esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_10))))) {
        WEIGHT1_16_6_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_16_6_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_17_0_address0() {
    WEIGHT1_17_0_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_17_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_17_0_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_17_0_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_17_0_d0() {
    WEIGHT1_17_0_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_17_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_0) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_11))) {
        WEIGHT1_17_0_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_17_0_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_17_1_address0() {
    WEIGHT1_17_1_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_17_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_17_1_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_17_1_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_17_1_d0() {
    WEIGHT1_17_1_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_17_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_1) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_11))) {
        WEIGHT1_17_1_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_17_1_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_17_2_address0() {
    WEIGHT1_17_2_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_17_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_17_2_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_17_2_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_17_2_d0() {
    WEIGHT1_17_2_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_17_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_2) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_11))) {
        WEIGHT1_17_2_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_17_2_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_17_3_address0() {
    WEIGHT1_17_3_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_17_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_17_3_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_17_3_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_17_3_d0() {
    WEIGHT1_17_3_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_17_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_3) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_11))) {
        WEIGHT1_17_3_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_17_3_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_17_4_address0() {
    WEIGHT1_17_4_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_17_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_17_4_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_17_4_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_17_4_d0() {
    WEIGHT1_17_4_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_17_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_4) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_11))) {
        WEIGHT1_17_4_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_17_4_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_17_5_address0() {
    WEIGHT1_17_5_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_17_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_17_5_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_17_5_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_17_5_d0() {
    WEIGHT1_17_5_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_17_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_5) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_11))) {
        WEIGHT1_17_5_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_17_5_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_17_6_address0() {
    WEIGHT1_17_6_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_17_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_17_6_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_17_6_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_17_6_d0() {
    WEIGHT1_17_6_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_17_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         ((esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
           esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_6) && 
           esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_11)) || 
          (esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
           esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_7) && 
           esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_11))))) {
        WEIGHT1_17_6_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_17_6_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_18_0_address0() {
    WEIGHT1_18_0_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_18_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_18_0_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_18_0_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_18_0_d0() {
    WEIGHT1_18_0_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_18_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_0) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_12))) {
        WEIGHT1_18_0_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_18_0_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_18_1_address0() {
    WEIGHT1_18_1_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_18_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_18_1_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_18_1_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_18_1_d0() {
    WEIGHT1_18_1_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_18_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_1) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_12))) {
        WEIGHT1_18_1_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_18_1_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_18_2_address0() {
    WEIGHT1_18_2_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_18_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_18_2_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_18_2_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_18_2_d0() {
    WEIGHT1_18_2_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_18_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_2) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_12))) {
        WEIGHT1_18_2_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_18_2_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_18_3_address0() {
    WEIGHT1_18_3_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_18_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_18_3_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_18_3_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_18_3_d0() {
    WEIGHT1_18_3_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_18_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_3) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_12))) {
        WEIGHT1_18_3_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_18_3_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_18_4_address0() {
    WEIGHT1_18_4_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_18_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_18_4_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_18_4_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_18_4_d0() {
    WEIGHT1_18_4_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_18_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_4) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_12))) {
        WEIGHT1_18_4_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_18_4_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_18_5_address0() {
    WEIGHT1_18_5_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_18_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_18_5_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_18_5_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_18_5_d0() {
    WEIGHT1_18_5_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_18_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_5) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_12))) {
        WEIGHT1_18_5_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_18_5_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_18_6_address0() {
    WEIGHT1_18_6_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_18_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_18_6_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_18_6_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_18_6_d0() {
    WEIGHT1_18_6_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_18_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         ((esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
           esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_6) && 
           esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_12)) || 
          (esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
           esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_7) && 
           esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_12))))) {
        WEIGHT1_18_6_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_18_6_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_19_0_address0() {
    WEIGHT1_19_0_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_19_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_19_0_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_19_0_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_19_0_d0() {
    WEIGHT1_19_0_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_19_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_0) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_13))) {
        WEIGHT1_19_0_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_19_0_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_19_1_address0() {
    WEIGHT1_19_1_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_19_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_19_1_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_19_1_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_19_1_d0() {
    WEIGHT1_19_1_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_19_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_1) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_13))) {
        WEIGHT1_19_1_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_19_1_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_19_2_address0() {
    WEIGHT1_19_2_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_19_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_19_2_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_19_2_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_19_2_d0() {
    WEIGHT1_19_2_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_19_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_2) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_13))) {
        WEIGHT1_19_2_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_19_2_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_19_3_address0() {
    WEIGHT1_19_3_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_19_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_19_3_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_19_3_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_19_3_d0() {
    WEIGHT1_19_3_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_19_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_3) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_13))) {
        WEIGHT1_19_3_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_19_3_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_19_4_address0() {
    WEIGHT1_19_4_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_19_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_19_4_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_19_4_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_19_4_d0() {
    WEIGHT1_19_4_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_19_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_4) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_13))) {
        WEIGHT1_19_4_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_19_4_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_19_5_address0() {
    WEIGHT1_19_5_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_19_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_19_5_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_19_5_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_19_5_d0() {
    WEIGHT1_19_5_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_19_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_5) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_13))) {
        WEIGHT1_19_5_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_19_5_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_19_6_address0() {
    WEIGHT1_19_6_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_19_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_19_6_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_19_6_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_19_6_d0() {
    WEIGHT1_19_6_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_19_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         ((esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
           esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_6) && 
           esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_13)) || 
          (esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
           esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_7) && 
           esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_13))))) {
        WEIGHT1_19_6_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_19_6_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_1_0_address0() {
    WEIGHT1_1_0_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_1_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_1_0_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_1_0_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_1_0_d0() {
    WEIGHT1_1_0_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_1_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_0) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_1))) {
        WEIGHT1_1_0_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_1_0_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_1_1_address0() {
    WEIGHT1_1_1_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_1_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_1_1_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_1_1_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_1_1_d0() {
    WEIGHT1_1_1_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_1_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_1) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_1))) {
        WEIGHT1_1_1_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_1_1_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_1_2_address0() {
    WEIGHT1_1_2_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_1_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_1_2_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_1_2_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_1_2_d0() {
    WEIGHT1_1_2_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_1_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_2) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_1))) {
        WEIGHT1_1_2_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_1_2_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_1_3_address0() {
    WEIGHT1_1_3_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_1_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_1_3_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_1_3_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_1_3_d0() {
    WEIGHT1_1_3_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_1_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_3) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_1))) {
        WEIGHT1_1_3_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_1_3_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_1_4_address0() {
    WEIGHT1_1_4_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_1_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_1_4_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_1_4_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_1_4_d0() {
    WEIGHT1_1_4_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_1_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_4) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_1))) {
        WEIGHT1_1_4_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_1_4_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_1_5_address0() {
    WEIGHT1_1_5_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_1_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_1_5_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_1_5_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_1_5_d0() {
    WEIGHT1_1_5_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_1_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_5) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_1))) {
        WEIGHT1_1_5_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_1_5_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_1_6_address0() {
    WEIGHT1_1_6_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_1_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_1_6_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_1_6_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_1_6_d0() {
    WEIGHT1_1_6_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_1_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         ((esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
           esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_6) && 
           esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_1)) || 
          (esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
           esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_7) && 
           esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_1))))) {
        WEIGHT1_1_6_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_1_6_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_20_0_address0() {
    WEIGHT1_20_0_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_20_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_20_0_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_20_0_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_20_0_d0() {
    WEIGHT1_20_0_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_20_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_0) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_14))) {
        WEIGHT1_20_0_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_20_0_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_20_1_address0() {
    WEIGHT1_20_1_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_20_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_20_1_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_20_1_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_20_1_d0() {
    WEIGHT1_20_1_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_20_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_1) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_14))) {
        WEIGHT1_20_1_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_20_1_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_20_2_address0() {
    WEIGHT1_20_2_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_20_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_20_2_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_20_2_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_20_2_d0() {
    WEIGHT1_20_2_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_20_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_2) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_14))) {
        WEIGHT1_20_2_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_20_2_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_20_3_address0() {
    WEIGHT1_20_3_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_20_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_20_3_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_20_3_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_20_3_d0() {
    WEIGHT1_20_3_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_20_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_3) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_14))) {
        WEIGHT1_20_3_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_20_3_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_20_4_address0() {
    WEIGHT1_20_4_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_20_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_20_4_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_20_4_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_20_4_d0() {
    WEIGHT1_20_4_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_20_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_4) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_14))) {
        WEIGHT1_20_4_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_20_4_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_20_5_address0() {
    WEIGHT1_20_5_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_20_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_20_5_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_20_5_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_20_5_d0() {
    WEIGHT1_20_5_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_20_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_5) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_14))) {
        WEIGHT1_20_5_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_20_5_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_20_6_address0() {
    WEIGHT1_20_6_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_20_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_20_6_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_20_6_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_20_6_d0() {
    WEIGHT1_20_6_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_20_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         ((esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
           esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_6) && 
           esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_14)) || 
          (esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
           esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_7) && 
           esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_14))))) {
        WEIGHT1_20_6_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_20_6_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_21_0_address0() {
    WEIGHT1_21_0_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_21_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_21_0_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_21_0_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_21_0_d0() {
    WEIGHT1_21_0_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_21_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_0) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_15))) {
        WEIGHT1_21_0_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_21_0_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_21_1_address0() {
    WEIGHT1_21_1_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_21_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_21_1_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_21_1_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_21_1_d0() {
    WEIGHT1_21_1_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_21_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_1) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_15))) {
        WEIGHT1_21_1_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_21_1_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_21_2_address0() {
    WEIGHT1_21_2_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_21_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_21_2_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_21_2_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_21_2_d0() {
    WEIGHT1_21_2_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_21_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_2) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_15))) {
        WEIGHT1_21_2_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_21_2_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_21_3_address0() {
    WEIGHT1_21_3_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_21_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_21_3_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_21_3_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_21_3_d0() {
    WEIGHT1_21_3_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_21_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_3) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_15))) {
        WEIGHT1_21_3_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_21_3_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_21_4_address0() {
    WEIGHT1_21_4_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_21_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_21_4_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_21_4_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_21_4_d0() {
    WEIGHT1_21_4_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_21_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_4) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_15))) {
        WEIGHT1_21_4_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_21_4_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_21_5_address0() {
    WEIGHT1_21_5_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_21_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_21_5_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_21_5_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_21_5_d0() {
    WEIGHT1_21_5_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_21_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_5) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_15))) {
        WEIGHT1_21_5_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_21_5_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_21_6_address0() {
    WEIGHT1_21_6_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_21_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_21_6_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_21_6_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_21_6_d0() {
    WEIGHT1_21_6_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_21_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         ((esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
           esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_6) && 
           esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_15)) || 
          (esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
           esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_7) && 
           esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_15))))) {
        WEIGHT1_21_6_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_21_6_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_22_0_address0() {
    WEIGHT1_22_0_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_22_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_22_0_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_22_0_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_22_0_d0() {
    WEIGHT1_22_0_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_22_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_0) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_16))) {
        WEIGHT1_22_0_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_22_0_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_22_1_address0() {
    WEIGHT1_22_1_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_22_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_22_1_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_22_1_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_22_1_d0() {
    WEIGHT1_22_1_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_22_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_1) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_16))) {
        WEIGHT1_22_1_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_22_1_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_22_2_address0() {
    WEIGHT1_22_2_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_22_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_22_2_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_22_2_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_22_2_d0() {
    WEIGHT1_22_2_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_22_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_2) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_16))) {
        WEIGHT1_22_2_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_22_2_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_22_3_address0() {
    WEIGHT1_22_3_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_22_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_22_3_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_22_3_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_22_3_d0() {
    WEIGHT1_22_3_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_22_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_3) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_16))) {
        WEIGHT1_22_3_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_22_3_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_22_4_address0() {
    WEIGHT1_22_4_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_22_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_22_4_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_22_4_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_22_4_d0() {
    WEIGHT1_22_4_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_22_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_4) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_16))) {
        WEIGHT1_22_4_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_22_4_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_22_5_address0() {
    WEIGHT1_22_5_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_22_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_22_5_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_22_5_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_22_5_d0() {
    WEIGHT1_22_5_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_22_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_5) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_16))) {
        WEIGHT1_22_5_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_22_5_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_22_6_address0() {
    WEIGHT1_22_6_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_22_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_22_6_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_22_6_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_22_6_d0() {
    WEIGHT1_22_6_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_22_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         ((esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
           esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_6) && 
           esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_16)) || 
          (esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
           esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_7) && 
           esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_16))))) {
        WEIGHT1_22_6_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_22_6_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_23_0_address0() {
    WEIGHT1_23_0_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_23_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_23_0_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_23_0_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_23_0_d0() {
    WEIGHT1_23_0_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_23_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_0) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_17))) {
        WEIGHT1_23_0_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_23_0_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_23_1_address0() {
    WEIGHT1_23_1_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_23_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_23_1_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_23_1_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_23_1_d0() {
    WEIGHT1_23_1_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_23_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_1) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_17))) {
        WEIGHT1_23_1_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_23_1_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_23_2_address0() {
    WEIGHT1_23_2_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_23_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_23_2_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_23_2_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_23_2_d0() {
    WEIGHT1_23_2_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_23_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_2) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_17))) {
        WEIGHT1_23_2_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_23_2_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_23_3_address0() {
    WEIGHT1_23_3_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_23_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_23_3_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_23_3_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_23_3_d0() {
    WEIGHT1_23_3_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_23_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_3) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_17))) {
        WEIGHT1_23_3_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_23_3_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_23_4_address0() {
    WEIGHT1_23_4_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_23_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_23_4_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_23_4_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_23_4_d0() {
    WEIGHT1_23_4_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_23_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_4) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_17))) {
        WEIGHT1_23_4_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_23_4_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_23_5_address0() {
    WEIGHT1_23_5_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_23_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_23_5_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_23_5_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_23_5_d0() {
    WEIGHT1_23_5_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_23_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_5) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_17))) {
        WEIGHT1_23_5_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_23_5_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_23_6_address0() {
    WEIGHT1_23_6_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_23_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_23_6_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_23_6_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_23_6_d0() {
    WEIGHT1_23_6_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_23_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         ((esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
           esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_6) && 
           esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_17)) || 
          (esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
           esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_7) && 
           esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_17))))) {
        WEIGHT1_23_6_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_23_6_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_24_0_address0() {
    WEIGHT1_24_0_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_24_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_24_0_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_24_0_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_24_0_d0() {
    WEIGHT1_24_0_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_24_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_0) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_18))) {
        WEIGHT1_24_0_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_24_0_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_24_1_address0() {
    WEIGHT1_24_1_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_24_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_24_1_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_24_1_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_24_1_d0() {
    WEIGHT1_24_1_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_24_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_1) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_18))) {
        WEIGHT1_24_1_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_24_1_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_24_2_address0() {
    WEIGHT1_24_2_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_24_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_24_2_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_24_2_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_24_2_d0() {
    WEIGHT1_24_2_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_24_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_2) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_18))) {
        WEIGHT1_24_2_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_24_2_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_24_3_address0() {
    WEIGHT1_24_3_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_24_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_24_3_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_24_3_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_24_3_d0() {
    WEIGHT1_24_3_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_24_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_3) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_18))) {
        WEIGHT1_24_3_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_24_3_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_24_4_address0() {
    WEIGHT1_24_4_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_24_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_24_4_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_24_4_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_24_4_d0() {
    WEIGHT1_24_4_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_24_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_4) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_18))) {
        WEIGHT1_24_4_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_24_4_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_24_5_address0() {
    WEIGHT1_24_5_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_24_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_24_5_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_24_5_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_24_5_d0() {
    WEIGHT1_24_5_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_24_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_5) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_18))) {
        WEIGHT1_24_5_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_24_5_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_24_6_address0() {
    WEIGHT1_24_6_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_24_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_24_6_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_24_6_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_24_6_d0() {
    WEIGHT1_24_6_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_24_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         ((esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
           esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_6) && 
           esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_18)) || 
          (esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
           esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_7) && 
           esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_18))))) {
        WEIGHT1_24_6_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_24_6_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_25_0_address0() {
    WEIGHT1_25_0_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_25_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_25_0_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_25_0_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_25_0_d0() {
    WEIGHT1_25_0_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_25_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_0) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_19))) {
        WEIGHT1_25_0_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_25_0_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_25_1_address0() {
    WEIGHT1_25_1_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_25_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_25_1_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_25_1_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_25_1_d0() {
    WEIGHT1_25_1_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_25_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_1) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_19))) {
        WEIGHT1_25_1_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_25_1_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_25_2_address0() {
    WEIGHT1_25_2_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_25_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_25_2_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_25_2_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_25_2_d0() {
    WEIGHT1_25_2_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_25_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_2) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_19))) {
        WEIGHT1_25_2_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_25_2_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_25_3_address0() {
    WEIGHT1_25_3_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_25_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_25_3_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_25_3_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_25_3_d0() {
    WEIGHT1_25_3_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_25_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_3) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_19))) {
        WEIGHT1_25_3_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_25_3_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_25_4_address0() {
    WEIGHT1_25_4_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_25_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_25_4_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_25_4_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_25_4_d0() {
    WEIGHT1_25_4_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_25_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_4) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_19))) {
        WEIGHT1_25_4_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_25_4_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_25_5_address0() {
    WEIGHT1_25_5_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_25_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_25_5_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_25_5_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_25_5_d0() {
    WEIGHT1_25_5_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_25_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_5) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_19))) {
        WEIGHT1_25_5_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_25_5_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_25_6_address0() {
    WEIGHT1_25_6_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_25_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_25_6_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_25_6_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_25_6_d0() {
    WEIGHT1_25_6_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_25_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         ((esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
           esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_6) && 
           esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_19)) || 
          (esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
           esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_7) && 
           esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_19))))) {
        WEIGHT1_25_6_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_25_6_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_26_0_address0() {
    WEIGHT1_26_0_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_26_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_26_0_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_26_0_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_26_0_d0() {
    WEIGHT1_26_0_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_26_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_0) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_1A))) {
        WEIGHT1_26_0_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_26_0_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_26_1_address0() {
    WEIGHT1_26_1_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_26_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_26_1_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_26_1_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_26_1_d0() {
    WEIGHT1_26_1_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_26_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_1) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_1A))) {
        WEIGHT1_26_1_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_26_1_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_26_2_address0() {
    WEIGHT1_26_2_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_26_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_26_2_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_26_2_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_26_2_d0() {
    WEIGHT1_26_2_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_26_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_2) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_1A))) {
        WEIGHT1_26_2_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_26_2_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_26_3_address0() {
    WEIGHT1_26_3_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_26_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_26_3_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_26_3_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_26_3_d0() {
    WEIGHT1_26_3_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_26_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_3) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_1A))) {
        WEIGHT1_26_3_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_26_3_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_26_4_address0() {
    WEIGHT1_26_4_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_26_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_26_4_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_26_4_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_26_4_d0() {
    WEIGHT1_26_4_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_26_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_4) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_1A))) {
        WEIGHT1_26_4_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_26_4_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_26_5_address0() {
    WEIGHT1_26_5_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_26_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_26_5_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_26_5_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_26_5_d0() {
    WEIGHT1_26_5_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_26_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_5) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_1A))) {
        WEIGHT1_26_5_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_26_5_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_26_6_address0() {
    WEIGHT1_26_6_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_26_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_26_6_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_26_6_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_26_6_d0() {
    WEIGHT1_26_6_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_26_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         ((esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
           esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_6) && 
           esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_1A)) || 
          (esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
           esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_7) && 
           esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_1A))))) {
        WEIGHT1_26_6_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_26_6_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_27_0_address0() {
    WEIGHT1_27_0_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_27_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_27_0_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_27_0_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_27_0_d0() {
    WEIGHT1_27_0_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_27_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_0) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_1B))) {
        WEIGHT1_27_0_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_27_0_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_27_1_address0() {
    WEIGHT1_27_1_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_27_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_27_1_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_27_1_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_27_1_d0() {
    WEIGHT1_27_1_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_27_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_1) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_1B))) {
        WEIGHT1_27_1_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_27_1_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_27_2_address0() {
    WEIGHT1_27_2_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_27_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_27_2_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_27_2_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_27_2_d0() {
    WEIGHT1_27_2_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_27_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_2) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_1B))) {
        WEIGHT1_27_2_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_27_2_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_27_3_address0() {
    WEIGHT1_27_3_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_27_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_27_3_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_27_3_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_27_3_d0() {
    WEIGHT1_27_3_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_27_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_3) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_1B))) {
        WEIGHT1_27_3_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_27_3_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_27_4_address0() {
    WEIGHT1_27_4_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_27_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_27_4_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_27_4_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_27_4_d0() {
    WEIGHT1_27_4_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_27_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_4) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_1B))) {
        WEIGHT1_27_4_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_27_4_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_27_5_address0() {
    WEIGHT1_27_5_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_27_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_27_5_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_27_5_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_27_5_d0() {
    WEIGHT1_27_5_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_27_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_5) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_1B))) {
        WEIGHT1_27_5_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_27_5_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_27_6_address0() {
    WEIGHT1_27_6_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_27_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_27_6_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_27_6_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_27_6_d0() {
    WEIGHT1_27_6_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_27_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         ((esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
           esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_6) && 
           esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_1B)) || 
          (esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
           esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_7) && 
           esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_1B))))) {
        WEIGHT1_27_6_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_27_6_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_28_0_address0() {
    WEIGHT1_28_0_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_28_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_28_0_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_28_0_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_28_0_d0() {
    WEIGHT1_28_0_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_28_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_0) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_1C))) {
        WEIGHT1_28_0_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_28_0_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_28_1_address0() {
    WEIGHT1_28_1_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_28_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_28_1_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_28_1_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_28_1_d0() {
    WEIGHT1_28_1_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_28_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_1) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_1C))) {
        WEIGHT1_28_1_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_28_1_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_28_2_address0() {
    WEIGHT1_28_2_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_28_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_28_2_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_28_2_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_28_2_d0() {
    WEIGHT1_28_2_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_28_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_2) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_1C))) {
        WEIGHT1_28_2_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_28_2_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_28_3_address0() {
    WEIGHT1_28_3_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_28_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_28_3_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_28_3_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_28_3_d0() {
    WEIGHT1_28_3_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_28_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_3) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_1C))) {
        WEIGHT1_28_3_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_28_3_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_28_4_address0() {
    WEIGHT1_28_4_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_28_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_28_4_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_28_4_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_28_4_d0() {
    WEIGHT1_28_4_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_28_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_4) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_1C))) {
        WEIGHT1_28_4_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_28_4_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_28_5_address0() {
    WEIGHT1_28_5_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_28_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_28_5_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_28_5_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_28_5_d0() {
    WEIGHT1_28_5_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_28_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_5) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_1C))) {
        WEIGHT1_28_5_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_28_5_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_28_6_address0() {
    WEIGHT1_28_6_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_28_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_28_6_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_28_6_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_28_6_d0() {
    WEIGHT1_28_6_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_28_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         ((esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
           esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_6) && 
           esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_1C)) || 
          (esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
           esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_7) && 
           esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_1C))))) {
        WEIGHT1_28_6_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_28_6_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_29_0_address0() {
    WEIGHT1_29_0_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_29_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_29_0_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_29_0_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_29_0_d0() {
    WEIGHT1_29_0_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_29_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_0) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_1D))) {
        WEIGHT1_29_0_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_29_0_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_29_1_address0() {
    WEIGHT1_29_1_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_29_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_29_1_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_29_1_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_29_1_d0() {
    WEIGHT1_29_1_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_29_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_1) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_1D))) {
        WEIGHT1_29_1_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_29_1_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_29_2_address0() {
    WEIGHT1_29_2_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_29_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_29_2_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_29_2_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_29_2_d0() {
    WEIGHT1_29_2_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_29_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_2) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_1D))) {
        WEIGHT1_29_2_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_29_2_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_29_3_address0() {
    WEIGHT1_29_3_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_29_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_29_3_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_29_3_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_29_3_d0() {
    WEIGHT1_29_3_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_29_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_3) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_1D))) {
        WEIGHT1_29_3_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_29_3_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_29_4_address0() {
    WEIGHT1_29_4_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_29_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_29_4_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_29_4_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_29_4_d0() {
    WEIGHT1_29_4_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_29_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_4) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_1D))) {
        WEIGHT1_29_4_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_29_4_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_29_5_address0() {
    WEIGHT1_29_5_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_29_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_29_5_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_29_5_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_29_5_d0() {
    WEIGHT1_29_5_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_29_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_5) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_1D))) {
        WEIGHT1_29_5_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_29_5_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_29_6_address0() {
    WEIGHT1_29_6_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_29_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_29_6_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_29_6_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_29_6_d0() {
    WEIGHT1_29_6_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_29_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         ((esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
           esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_6) && 
           esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_1D)) || 
          (esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
           esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_7) && 
           esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_1D))))) {
        WEIGHT1_29_6_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_29_6_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_2_0_address0() {
    WEIGHT1_2_0_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_2_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_2_0_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_2_0_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_2_0_d0() {
    WEIGHT1_2_0_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_2_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_0) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_2))) {
        WEIGHT1_2_0_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_2_0_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_2_1_address0() {
    WEIGHT1_2_1_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_2_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_2_1_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_2_1_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_2_1_d0() {
    WEIGHT1_2_1_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_2_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_1) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_2))) {
        WEIGHT1_2_1_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_2_1_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_2_2_address0() {
    WEIGHT1_2_2_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_2_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_2_2_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_2_2_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_2_2_d0() {
    WEIGHT1_2_2_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_2_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_2) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_2))) {
        WEIGHT1_2_2_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_2_2_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_2_3_address0() {
    WEIGHT1_2_3_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_2_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_2_3_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_2_3_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_2_3_d0() {
    WEIGHT1_2_3_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_2_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_3) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_2))) {
        WEIGHT1_2_3_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_2_3_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_2_4_address0() {
    WEIGHT1_2_4_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_2_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_2_4_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_2_4_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_2_4_d0() {
    WEIGHT1_2_4_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_2_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_4) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_2))) {
        WEIGHT1_2_4_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_2_4_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_2_5_address0() {
    WEIGHT1_2_5_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_2_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_2_5_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_2_5_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_2_5_d0() {
    WEIGHT1_2_5_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_2_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_5) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_2))) {
        WEIGHT1_2_5_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_2_5_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_2_6_address0() {
    WEIGHT1_2_6_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_2_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_2_6_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_2_6_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_2_6_d0() {
    WEIGHT1_2_6_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_2_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         ((esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
           esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_6) && 
           esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_2)) || 
          (esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
           esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_7) && 
           esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_2))))) {
        WEIGHT1_2_6_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_2_6_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_30_0_address0() {
    WEIGHT1_30_0_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_30_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_30_0_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_30_0_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_30_0_d0() {
    WEIGHT1_30_0_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_30_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_1E) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_0))) {
        WEIGHT1_30_0_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_30_0_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_30_1_address0() {
    WEIGHT1_30_1_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_30_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_30_1_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_30_1_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_30_1_d0() {
    WEIGHT1_30_1_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_30_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_1E) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_1))) {
        WEIGHT1_30_1_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_30_1_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_30_2_address0() {
    WEIGHT1_30_2_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_30_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_30_2_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_30_2_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_30_2_d0() {
    WEIGHT1_30_2_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_30_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_1E) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_2))) {
        WEIGHT1_30_2_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_30_2_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_30_3_address0() {
    WEIGHT1_30_3_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_30_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_30_3_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_30_3_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_30_3_d0() {
    WEIGHT1_30_3_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_30_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_1E) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_3))) {
        WEIGHT1_30_3_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_30_3_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_30_4_address0() {
    WEIGHT1_30_4_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_30_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_30_4_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_30_4_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_30_4_d0() {
    WEIGHT1_30_4_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_30_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_1E) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_4))) {
        WEIGHT1_30_4_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_30_4_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_30_5_address0() {
    WEIGHT1_30_5_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_30_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_30_5_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_30_5_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_30_5_d0() {
    WEIGHT1_30_5_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_30_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_1E) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_5))) {
        WEIGHT1_30_5_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_30_5_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_30_6_address0() {
    WEIGHT1_30_6_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_30_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_30_6_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_30_6_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_30_6_d0() {
    WEIGHT1_30_6_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_30_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         ((esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
           esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_1E) && 
           esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_6)) || 
          (esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
           esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_1E) && 
           esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_7))))) {
        WEIGHT1_30_6_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_30_6_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_31_0_address0() {
    WEIGHT1_31_0_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_31_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_31_0_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_31_0_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_31_0_d0() {
    WEIGHT1_31_0_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_31_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_0) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_0) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_1) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_2) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_3) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_4) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_5) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_6) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_7) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_8) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_9) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_A) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_B) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_C) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_D) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_E) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_F) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_10) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_11) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_12) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_13) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_14) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_15) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_16) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_17) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_18) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_19) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_1A) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_1B) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_1C) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_1D) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_1E))) {
        WEIGHT1_31_0_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_31_0_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_31_1_address0() {
    WEIGHT1_31_1_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_31_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_31_1_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_31_1_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_31_1_d0() {
    WEIGHT1_31_1_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_31_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_1) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_0) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_1) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_2) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_3) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_4) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_5) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_6) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_7) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_8) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_9) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_A) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_B) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_C) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_D) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_E) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_F) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_10) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_11) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_12) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_13) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_14) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_15) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_16) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_17) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_18) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_19) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_1A) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_1B) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_1C) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_1D) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_1E))) {
        WEIGHT1_31_1_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_31_1_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_31_2_address0() {
    WEIGHT1_31_2_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_31_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_31_2_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_31_2_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_31_2_d0() {
    WEIGHT1_31_2_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_31_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_2) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_0) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_1) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_2) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_3) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_4) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_5) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_6) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_7) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_8) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_9) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_A) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_B) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_C) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_D) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_E) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_F) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_10) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_11) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_12) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_13) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_14) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_15) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_16) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_17) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_18) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_19) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_1A) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_1B) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_1C) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_1D) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_1E))) {
        WEIGHT1_31_2_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_31_2_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_31_3_address0() {
    WEIGHT1_31_3_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_31_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_31_3_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_31_3_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_31_3_d0() {
    WEIGHT1_31_3_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_31_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_3) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_0) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_1) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_2) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_3) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_4) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_5) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_6) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_7) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_8) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_9) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_A) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_B) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_C) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_D) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_E) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_F) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_10) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_11) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_12) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_13) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_14) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_15) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_16) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_17) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_18) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_19) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_1A) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_1B) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_1C) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_1D) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_1E))) {
        WEIGHT1_31_3_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_31_3_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_31_4_address0() {
    WEIGHT1_31_4_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_31_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_31_4_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_31_4_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_31_4_d0() {
    WEIGHT1_31_4_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_31_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_4) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_0) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_1) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_2) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_3) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_4) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_5) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_6) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_7) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_8) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_9) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_A) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_B) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_C) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_D) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_E) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_F) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_10) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_11) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_12) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_13) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_14) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_15) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_16) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_17) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_18) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_19) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_1A) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_1B) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_1C) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_1D) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_1E))) {
        WEIGHT1_31_4_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_31_4_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_31_5_address0() {
    WEIGHT1_31_5_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_31_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_31_5_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_31_5_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_31_5_d0() {
    WEIGHT1_31_5_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_31_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_5) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_0) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_1) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_2) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_3) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_4) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_5) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_6) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_7) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_8) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_9) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_A) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_B) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_C) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_D) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_E) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_F) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_10) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_11) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_12) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_13) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_14) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_15) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_16) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_17) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_18) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_19) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_1A) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_1B) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_1C) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_1D) && 
         !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_1E))) {
        WEIGHT1_31_5_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_31_5_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_31_6_address0() {
    WEIGHT1_31_6_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_31_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_31_6_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_31_6_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_31_6_d0() {
    WEIGHT1_31_6_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_31_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         ((esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
           esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_6) && 
           !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_0) && 
           !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_1) && 
           !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_2) && 
           !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_3) && 
           !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_4) && 
           !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_5) && 
           !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_6) && 
           !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_7) && 
           !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_8) && 
           !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_9) && 
           !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_A) && 
           !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_B) && 
           !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_C) && 
           !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_D) && 
           !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_E) && 
           !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_F) && 
           !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_10) && 
           !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_11) && 
           !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_12) && 
           !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_13) && 
           !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_14) && 
           !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_15) && 
           !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_16) && 
           !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_17) && 
           !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_18) && 
           !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_19) && 
           !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_1A) && 
           !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_1B) && 
           !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_1C) && 
           !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_1D) && 
           !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_1E)) || 
          (esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
           esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_7) && 
           !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_0) && 
           !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_1) && 
           !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_2) && 
           !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_3) && 
           !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_4) && 
           !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_5) && 
           !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_6) && 
           !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_7) && 
           !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_8) && 
           !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_9) && 
           !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_A) && 
           !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_B) && 
           !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_C) && 
           !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_D) && 
           !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_E) && 
           !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_F) && 
           !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_10) && 
           !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_11) && 
           !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_12) && 
           !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_13) && 
           !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_14) && 
           !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_15) && 
           !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_16) && 
           !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_17) && 
           !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_18) && 
           !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_19) && 
           !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_1A) && 
           !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_1B) && 
           !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_1C) && 
           !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_1D) && 
           !esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_1E))))) {
        WEIGHT1_31_6_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_31_6_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_32_0_address0() {
    WEIGHT1_32_0_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_32_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_32_0_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_32_0_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_32_0_d0() {
    WEIGHT1_32_0_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_32_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_0) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_20))) {
        WEIGHT1_32_0_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_32_0_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_32_1_address0() {
    WEIGHT1_32_1_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_32_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_32_1_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_32_1_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_32_1_d0() {
    WEIGHT1_32_1_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_32_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_1) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_20))) {
        WEIGHT1_32_1_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_32_1_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_32_2_address0() {
    WEIGHT1_32_2_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_32_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_32_2_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_32_2_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_32_2_d0() {
    WEIGHT1_32_2_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_32_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_2) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_20))) {
        WEIGHT1_32_2_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_32_2_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_32_3_address0() {
    WEIGHT1_32_3_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_32_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_32_3_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_32_3_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_32_3_d0() {
    WEIGHT1_32_3_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_32_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_3) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_20))) {
        WEIGHT1_32_3_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_32_3_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_32_4_address0() {
    WEIGHT1_32_4_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_32_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_32_4_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_32_4_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_32_4_d0() {
    WEIGHT1_32_4_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_32_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_4) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_20))) {
        WEIGHT1_32_4_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_32_4_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_32_5_address0() {
    WEIGHT1_32_5_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_32_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_32_5_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_32_5_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_32_5_d0() {
    WEIGHT1_32_5_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_32_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_5) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_20))) {
        WEIGHT1_32_5_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_32_5_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_32_6_address0() {
    WEIGHT1_32_6_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_32_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_32_6_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_32_6_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_32_6_d0() {
    WEIGHT1_32_6_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_32_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         ((esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
           esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_6) && 
           esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_20)) || 
          (esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
           esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_7) && 
           esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_20))))) {
        WEIGHT1_32_6_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_32_6_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_33_0_address0() {
    WEIGHT1_33_0_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_33_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_33_0_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_33_0_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_33_0_d0() {
    WEIGHT1_33_0_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_33_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_0) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_21))) {
        WEIGHT1_33_0_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_33_0_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_33_1_address0() {
    WEIGHT1_33_1_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_33_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_33_1_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_33_1_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_33_1_d0() {
    WEIGHT1_33_1_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_33_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_1) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_21))) {
        WEIGHT1_33_1_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_33_1_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_33_2_address0() {
    WEIGHT1_33_2_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_33_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_33_2_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_33_2_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_33_2_d0() {
    WEIGHT1_33_2_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_33_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_2) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_21))) {
        WEIGHT1_33_2_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_33_2_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_33_3_address0() {
    WEIGHT1_33_3_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_33_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_33_3_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_33_3_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_33_3_d0() {
    WEIGHT1_33_3_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_33_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_3) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_21))) {
        WEIGHT1_33_3_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_33_3_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_33_4_address0() {
    WEIGHT1_33_4_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_33_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_33_4_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_33_4_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_33_4_d0() {
    WEIGHT1_33_4_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_33_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_4) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_21))) {
        WEIGHT1_33_4_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_33_4_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_33_5_address0() {
    WEIGHT1_33_5_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_33_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_33_5_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_33_5_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_33_5_d0() {
    WEIGHT1_33_5_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_33_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_5) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_21))) {
        WEIGHT1_33_5_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_33_5_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_33_6_address0() {
    WEIGHT1_33_6_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_33_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_33_6_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_33_6_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_33_6_d0() {
    WEIGHT1_33_6_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_33_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         ((esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
           esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_6) && 
           esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_21)) || 
          (esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
           esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_7) && 
           esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_21))))) {
        WEIGHT1_33_6_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_33_6_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_34_0_address0() {
    WEIGHT1_34_0_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_34_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_34_0_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_34_0_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_34_0_d0() {
    WEIGHT1_34_0_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_34_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_0) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_22))) {
        WEIGHT1_34_0_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_34_0_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_34_1_address0() {
    WEIGHT1_34_1_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_34_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_34_1_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_34_1_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_34_1_d0() {
    WEIGHT1_34_1_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_34_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_1) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_22))) {
        WEIGHT1_34_1_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_34_1_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_34_2_address0() {
    WEIGHT1_34_2_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_34_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_34_2_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_34_2_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_34_2_d0() {
    WEIGHT1_34_2_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_34_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_2) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_22))) {
        WEIGHT1_34_2_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_34_2_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_34_3_address0() {
    WEIGHT1_34_3_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_34_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_34_3_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_34_3_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_34_3_d0() {
    WEIGHT1_34_3_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_34_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_3) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_22))) {
        WEIGHT1_34_3_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_34_3_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_34_4_address0() {
    WEIGHT1_34_4_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_34_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_34_4_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_34_4_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_34_4_d0() {
    WEIGHT1_34_4_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_34_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_4) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_22))) {
        WEIGHT1_34_4_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_34_4_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_34_5_address0() {
    WEIGHT1_34_5_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_34_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_34_5_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_34_5_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_34_5_d0() {
    WEIGHT1_34_5_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_34_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_5) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_22))) {
        WEIGHT1_34_5_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_34_5_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_34_6_address0() {
    WEIGHT1_34_6_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_34_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_34_6_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_34_6_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_34_6_d0() {
    WEIGHT1_34_6_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_34_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         ((esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
           esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_6) && 
           esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_22)) || 
          (esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
           esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_7) && 
           esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_22))))) {
        WEIGHT1_34_6_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_34_6_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_35_0_address0() {
    WEIGHT1_35_0_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_35_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_35_0_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_35_0_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_35_0_d0() {
    WEIGHT1_35_0_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_35_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_0) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_23))) {
        WEIGHT1_35_0_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_35_0_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_35_1_address0() {
    WEIGHT1_35_1_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_35_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_35_1_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_35_1_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_35_1_d0() {
    WEIGHT1_35_1_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_35_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_1) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_23))) {
        WEIGHT1_35_1_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_35_1_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_35_2_address0() {
    WEIGHT1_35_2_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_35_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_35_2_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_35_2_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_35_2_d0() {
    WEIGHT1_35_2_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_35_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_2) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_23))) {
        WEIGHT1_35_2_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_35_2_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_35_3_address0() {
    WEIGHT1_35_3_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_35_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_35_3_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_35_3_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_35_3_d0() {
    WEIGHT1_35_3_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_35_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_3) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_23))) {
        WEIGHT1_35_3_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_35_3_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_35_4_address0() {
    WEIGHT1_35_4_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_35_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_35_4_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_35_4_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_35_4_d0() {
    WEIGHT1_35_4_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_35_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_4) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_23))) {
        WEIGHT1_35_4_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_35_4_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_35_5_address0() {
    WEIGHT1_35_5_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_35_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_35_5_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_35_5_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_35_5_d0() {
    WEIGHT1_35_5_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_35_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_5) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_23))) {
        WEIGHT1_35_5_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_35_5_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_35_6_address0() {
    WEIGHT1_35_6_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_35_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_35_6_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_35_6_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_35_6_d0() {
    WEIGHT1_35_6_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_35_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         ((esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
           esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_6) && 
           esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_23)) || 
          (esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
           esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_7) && 
           esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_23))))) {
        WEIGHT1_35_6_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_35_6_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_36_0_address0() {
    WEIGHT1_36_0_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_36_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_36_0_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_36_0_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_36_0_d0() {
    WEIGHT1_36_0_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_36_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_0) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_24))) {
        WEIGHT1_36_0_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_36_0_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_36_1_address0() {
    WEIGHT1_36_1_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_36_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_36_1_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_36_1_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_36_1_d0() {
    WEIGHT1_36_1_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_36_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_1) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_24))) {
        WEIGHT1_36_1_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_36_1_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_36_2_address0() {
    WEIGHT1_36_2_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_36_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_36_2_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_36_2_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_36_2_d0() {
    WEIGHT1_36_2_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_36_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_2) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_24))) {
        WEIGHT1_36_2_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_36_2_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_36_3_address0() {
    WEIGHT1_36_3_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_36_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_36_3_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_36_3_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_36_3_d0() {
    WEIGHT1_36_3_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_36_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_3) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_24))) {
        WEIGHT1_36_3_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_36_3_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_36_4_address0() {
    WEIGHT1_36_4_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_36_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_36_4_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_36_4_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_36_4_d0() {
    WEIGHT1_36_4_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_36_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_4) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_24))) {
        WEIGHT1_36_4_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_36_4_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_36_5_address0() {
    WEIGHT1_36_5_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_36_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_36_5_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_36_5_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_36_5_d0() {
    WEIGHT1_36_5_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_36_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_5) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_24))) {
        WEIGHT1_36_5_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_36_5_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_36_6_address0() {
    WEIGHT1_36_6_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_36_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_36_6_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_36_6_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_36_6_d0() {
    WEIGHT1_36_6_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_36_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         ((esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
           esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_6) && 
           esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_24)) || 
          (esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
           esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_7) && 
           esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_24))))) {
        WEIGHT1_36_6_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_36_6_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_37_0_address0() {
    WEIGHT1_37_0_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_37_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_37_0_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_37_0_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_37_0_d0() {
    WEIGHT1_37_0_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_37_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_0) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_25))) {
        WEIGHT1_37_0_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_37_0_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_37_1_address0() {
    WEIGHT1_37_1_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_37_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_37_1_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_37_1_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_37_1_d0() {
    WEIGHT1_37_1_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_37_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_1) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_25))) {
        WEIGHT1_37_1_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_37_1_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_37_2_address0() {
    WEIGHT1_37_2_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_37_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_37_2_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_37_2_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_37_2_d0() {
    WEIGHT1_37_2_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_37_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_2) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_25))) {
        WEIGHT1_37_2_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_37_2_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_37_3_address0() {
    WEIGHT1_37_3_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_37_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_37_3_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_37_3_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_37_3_d0() {
    WEIGHT1_37_3_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_37_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_3) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_25))) {
        WEIGHT1_37_3_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_37_3_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_37_4_address0() {
    WEIGHT1_37_4_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_37_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_37_4_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_37_4_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_37_4_d0() {
    WEIGHT1_37_4_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_37_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_4) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_25))) {
        WEIGHT1_37_4_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_37_4_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_37_5_address0() {
    WEIGHT1_37_5_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_37_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_37_5_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_37_5_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_37_5_d0() {
    WEIGHT1_37_5_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_37_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_5) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_25))) {
        WEIGHT1_37_5_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_37_5_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_37_6_address0() {
    WEIGHT1_37_6_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_37_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_37_6_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_37_6_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_37_6_d0() {
    WEIGHT1_37_6_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_37_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         ((esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
           esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_6) && 
           esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_25)) || 
          (esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
           esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_7) && 
           esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_25))))) {
        WEIGHT1_37_6_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_37_6_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_38_0_address0() {
    WEIGHT1_38_0_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_38_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_38_0_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_38_0_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_38_0_d0() {
    WEIGHT1_38_0_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_38_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_0) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_26))) {
        WEIGHT1_38_0_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_38_0_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_38_1_address0() {
    WEIGHT1_38_1_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_38_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_38_1_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_38_1_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_38_1_d0() {
    WEIGHT1_38_1_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_38_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_1) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_26))) {
        WEIGHT1_38_1_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_38_1_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_38_2_address0() {
    WEIGHT1_38_2_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_38_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_38_2_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_38_2_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_38_2_d0() {
    WEIGHT1_38_2_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_38_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_2) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_26))) {
        WEIGHT1_38_2_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_38_2_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_38_3_address0() {
    WEIGHT1_38_3_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_38_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_38_3_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_38_3_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_38_3_d0() {
    WEIGHT1_38_3_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_38_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_3) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_26))) {
        WEIGHT1_38_3_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_38_3_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_38_4_address0() {
    WEIGHT1_38_4_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_38_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_38_4_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_38_4_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_38_4_d0() {
    WEIGHT1_38_4_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_38_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_4) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_26))) {
        WEIGHT1_38_4_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_38_4_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_38_5_address0() {
    WEIGHT1_38_5_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_38_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_38_5_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_38_5_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_38_5_d0() {
    WEIGHT1_38_5_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_38_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_5) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_26))) {
        WEIGHT1_38_5_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_38_5_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_38_6_address0() {
    WEIGHT1_38_6_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_38_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_38_6_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_38_6_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_38_6_d0() {
    WEIGHT1_38_6_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_38_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         ((esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
           esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_6) && 
           esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_26)) || 
          (esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
           esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_7) && 
           esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_26))))) {
        WEIGHT1_38_6_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_38_6_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_39_0_address0() {
    WEIGHT1_39_0_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_39_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_39_0_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_39_0_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_39_0_d0() {
    WEIGHT1_39_0_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_39_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_0) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_27))) {
        WEIGHT1_39_0_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_39_0_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_39_1_address0() {
    WEIGHT1_39_1_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_39_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_39_1_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_39_1_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_39_1_d0() {
    WEIGHT1_39_1_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_39_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_1) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_27))) {
        WEIGHT1_39_1_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_39_1_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_39_2_address0() {
    WEIGHT1_39_2_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_39_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_39_2_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_39_2_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_39_2_d0() {
    WEIGHT1_39_2_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_39_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_2) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_27))) {
        WEIGHT1_39_2_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_39_2_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_39_3_address0() {
    WEIGHT1_39_3_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_39_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_39_3_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_39_3_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_39_3_d0() {
    WEIGHT1_39_3_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_39_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_3) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_27))) {
        WEIGHT1_39_3_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_39_3_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_39_4_address0() {
    WEIGHT1_39_4_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_39_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_39_4_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_39_4_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_39_4_d0() {
    WEIGHT1_39_4_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_39_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_4) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_27))) {
        WEIGHT1_39_4_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_39_4_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_39_5_address0() {
    WEIGHT1_39_5_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_39_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_39_5_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_39_5_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_39_5_d0() {
    WEIGHT1_39_5_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_39_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_5) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_27))) {
        WEIGHT1_39_5_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_39_5_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_39_6_address0() {
    WEIGHT1_39_6_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_39_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_39_6_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_39_6_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_39_6_d0() {
    WEIGHT1_39_6_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_39_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         ((esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
           esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_6) && 
           esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_27)) || 
          (esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
           esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_7) && 
           esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_27))))) {
        WEIGHT1_39_6_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_39_6_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_3_0_address0() {
    WEIGHT1_3_0_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_3_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_3_0_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_3_0_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_3_0_d0() {
    WEIGHT1_3_0_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_3_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_0) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_3))) {
        WEIGHT1_3_0_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_3_0_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_3_1_address0() {
    WEIGHT1_3_1_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_3_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_3_1_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_3_1_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_3_1_d0() {
    WEIGHT1_3_1_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_3_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_1) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_3))) {
        WEIGHT1_3_1_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_3_1_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_3_2_address0() {
    WEIGHT1_3_2_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_3_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_3_2_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_3_2_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_3_2_d0() {
    WEIGHT1_3_2_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_3_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_2) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_3))) {
        WEIGHT1_3_2_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_3_2_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_3_3_address0() {
    WEIGHT1_3_3_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_3_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_3_3_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_3_3_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_3_3_d0() {
    WEIGHT1_3_3_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_3_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_3) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_3))) {
        WEIGHT1_3_3_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_3_3_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_3_4_address0() {
    WEIGHT1_3_4_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_3_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_3_4_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_3_4_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_3_4_d0() {
    WEIGHT1_3_4_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_3_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_4) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_3))) {
        WEIGHT1_3_4_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_3_4_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_3_5_address0() {
    WEIGHT1_3_5_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_3_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_3_5_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_3_5_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_3_5_d0() {
    WEIGHT1_3_5_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_3_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_5) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_3))) {
        WEIGHT1_3_5_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_3_5_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_3_6_address0() {
    WEIGHT1_3_6_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_3_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_3_6_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_3_6_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_3_6_d0() {
    WEIGHT1_3_6_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_3_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         ((esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
           esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_6) && 
           esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_3)) || 
          (esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
           esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_7) && 
           esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_3))))) {
        WEIGHT1_3_6_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_3_6_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_40_0_address0() {
    WEIGHT1_40_0_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_40_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_40_0_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_40_0_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_40_0_d0() {
    WEIGHT1_40_0_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_40_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_0) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_28))) {
        WEIGHT1_40_0_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_40_0_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_40_1_address0() {
    WEIGHT1_40_1_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_40_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_40_1_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_40_1_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_40_1_d0() {
    WEIGHT1_40_1_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_40_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_1) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_28))) {
        WEIGHT1_40_1_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_40_1_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_40_2_address0() {
    WEIGHT1_40_2_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_40_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_40_2_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_40_2_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_40_2_d0() {
    WEIGHT1_40_2_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_40_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_2) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_28))) {
        WEIGHT1_40_2_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_40_2_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_40_3_address0() {
    WEIGHT1_40_3_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_40_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_40_3_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_40_3_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_40_3_d0() {
    WEIGHT1_40_3_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_40_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_3) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_28))) {
        WEIGHT1_40_3_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_40_3_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_40_4_address0() {
    WEIGHT1_40_4_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_40_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_40_4_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_40_4_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_40_4_d0() {
    WEIGHT1_40_4_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_40_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_4) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_28))) {
        WEIGHT1_40_4_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_40_4_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_40_5_address0() {
    WEIGHT1_40_5_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_40_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_40_5_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_40_5_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_40_5_d0() {
    WEIGHT1_40_5_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_40_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_5) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_28))) {
        WEIGHT1_40_5_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_40_5_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_40_6_address0() {
    WEIGHT1_40_6_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_40_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_40_6_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_40_6_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_40_6_d0() {
    WEIGHT1_40_6_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_40_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         ((esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
           esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_6) && 
           esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_28)) || 
          (esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
           esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_7) && 
           esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_28))))) {
        WEIGHT1_40_6_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_40_6_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_41_0_address0() {
    WEIGHT1_41_0_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_41_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_41_0_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_41_0_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_41_0_d0() {
    WEIGHT1_41_0_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_41_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_0) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_29))) {
        WEIGHT1_41_0_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_41_0_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_41_1_address0() {
    WEIGHT1_41_1_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_41_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_41_1_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_41_1_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_41_1_d0() {
    WEIGHT1_41_1_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_41_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_1) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_29))) {
        WEIGHT1_41_1_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_41_1_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_41_2_address0() {
    WEIGHT1_41_2_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_41_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_41_2_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_41_2_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_41_2_d0() {
    WEIGHT1_41_2_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_41_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_2) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_29))) {
        WEIGHT1_41_2_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_41_2_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_41_3_address0() {
    WEIGHT1_41_3_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_41_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_41_3_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_41_3_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_41_3_d0() {
    WEIGHT1_41_3_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_41_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_3) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_29))) {
        WEIGHT1_41_3_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_41_3_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_41_4_address0() {
    WEIGHT1_41_4_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_41_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_41_4_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_41_4_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_41_4_d0() {
    WEIGHT1_41_4_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_41_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_4) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_29))) {
        WEIGHT1_41_4_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_41_4_we0 = ap_const_logic_0;
    }
}

}

