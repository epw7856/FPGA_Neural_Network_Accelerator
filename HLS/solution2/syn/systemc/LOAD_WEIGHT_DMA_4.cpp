#include "LOAD_WEIGHT_DMA.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void LOAD_WEIGHT_DMA::thread_WEIGHT1_41_5_address0() {
    WEIGHT1_41_5_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_41_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_41_5_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_41_5_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_41_5_d0() {
    WEIGHT1_41_5_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_41_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_5) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_29))) {
        WEIGHT1_41_5_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_41_5_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_41_6_address0() {
    WEIGHT1_41_6_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_41_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_41_6_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_41_6_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_41_6_d0() {
    WEIGHT1_41_6_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_41_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         ((esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
           esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_6) && 
           esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_29)) || 
          (esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
           esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_7) && 
           esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_29))))) {
        WEIGHT1_41_6_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_41_6_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_42_0_address0() {
    WEIGHT1_42_0_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_42_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_42_0_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_42_0_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_42_0_d0() {
    WEIGHT1_42_0_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_42_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_0) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_2A))) {
        WEIGHT1_42_0_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_42_0_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_42_1_address0() {
    WEIGHT1_42_1_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_42_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_42_1_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_42_1_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_42_1_d0() {
    WEIGHT1_42_1_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_42_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_1) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_2A))) {
        WEIGHT1_42_1_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_42_1_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_42_2_address0() {
    WEIGHT1_42_2_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_42_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_42_2_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_42_2_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_42_2_d0() {
    WEIGHT1_42_2_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_42_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_2) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_2A))) {
        WEIGHT1_42_2_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_42_2_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_42_3_address0() {
    WEIGHT1_42_3_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_42_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_42_3_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_42_3_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_42_3_d0() {
    WEIGHT1_42_3_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_42_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_3) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_2A))) {
        WEIGHT1_42_3_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_42_3_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_42_4_address0() {
    WEIGHT1_42_4_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_42_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_42_4_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_42_4_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_42_4_d0() {
    WEIGHT1_42_4_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_42_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_4) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_2A))) {
        WEIGHT1_42_4_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_42_4_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_42_5_address0() {
    WEIGHT1_42_5_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_42_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_42_5_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_42_5_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_42_5_d0() {
    WEIGHT1_42_5_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_42_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_5) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_2A))) {
        WEIGHT1_42_5_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_42_5_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_42_6_address0() {
    WEIGHT1_42_6_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_42_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_42_6_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_42_6_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_42_6_d0() {
    WEIGHT1_42_6_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_42_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         ((esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
           esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_6) && 
           esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_2A)) || 
          (esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
           esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_7) && 
           esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_2A))))) {
        WEIGHT1_42_6_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_42_6_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_43_0_address0() {
    WEIGHT1_43_0_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_43_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_43_0_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_43_0_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_43_0_d0() {
    WEIGHT1_43_0_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_43_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_0) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_2B))) {
        WEIGHT1_43_0_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_43_0_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_43_1_address0() {
    WEIGHT1_43_1_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_43_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_43_1_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_43_1_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_43_1_d0() {
    WEIGHT1_43_1_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_43_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_1) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_2B))) {
        WEIGHT1_43_1_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_43_1_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_43_2_address0() {
    WEIGHT1_43_2_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_43_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_43_2_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_43_2_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_43_2_d0() {
    WEIGHT1_43_2_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_43_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_2) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_2B))) {
        WEIGHT1_43_2_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_43_2_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_43_3_address0() {
    WEIGHT1_43_3_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_43_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_43_3_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_43_3_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_43_3_d0() {
    WEIGHT1_43_3_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_43_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_3) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_2B))) {
        WEIGHT1_43_3_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_43_3_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_43_4_address0() {
    WEIGHT1_43_4_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_43_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_43_4_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_43_4_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_43_4_d0() {
    WEIGHT1_43_4_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_43_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_4) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_2B))) {
        WEIGHT1_43_4_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_43_4_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_43_5_address0() {
    WEIGHT1_43_5_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_43_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_43_5_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_43_5_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_43_5_d0() {
    WEIGHT1_43_5_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_43_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_5) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_2B))) {
        WEIGHT1_43_5_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_43_5_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_43_6_address0() {
    WEIGHT1_43_6_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_43_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_43_6_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_43_6_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_43_6_d0() {
    WEIGHT1_43_6_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_43_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         ((esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
           esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_6) && 
           esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_2B)) || 
          (esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
           esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_7) && 
           esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_2B))))) {
        WEIGHT1_43_6_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_43_6_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_44_0_address0() {
    WEIGHT1_44_0_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_44_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_44_0_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_44_0_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_44_0_d0() {
    WEIGHT1_44_0_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_44_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_0) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_2C))) {
        WEIGHT1_44_0_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_44_0_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_44_1_address0() {
    WEIGHT1_44_1_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_44_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_44_1_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_44_1_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_44_1_d0() {
    WEIGHT1_44_1_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_44_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_1) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_2C))) {
        WEIGHT1_44_1_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_44_1_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_44_2_address0() {
    WEIGHT1_44_2_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_44_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_44_2_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_44_2_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_44_2_d0() {
    WEIGHT1_44_2_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_44_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_2) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_2C))) {
        WEIGHT1_44_2_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_44_2_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_44_3_address0() {
    WEIGHT1_44_3_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_44_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_44_3_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_44_3_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_44_3_d0() {
    WEIGHT1_44_3_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_44_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_3) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_2C))) {
        WEIGHT1_44_3_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_44_3_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_44_4_address0() {
    WEIGHT1_44_4_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_44_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_44_4_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_44_4_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_44_4_d0() {
    WEIGHT1_44_4_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_44_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_4) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_2C))) {
        WEIGHT1_44_4_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_44_4_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_44_5_address0() {
    WEIGHT1_44_5_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_44_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_44_5_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_44_5_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_44_5_d0() {
    WEIGHT1_44_5_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_44_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_5) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_2C))) {
        WEIGHT1_44_5_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_44_5_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_44_6_address0() {
    WEIGHT1_44_6_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_44_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_44_6_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_44_6_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_44_6_d0() {
    WEIGHT1_44_6_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_44_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         ((esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
           esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_6) && 
           esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_2C)) || 
          (esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
           esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_7) && 
           esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_2C))))) {
        WEIGHT1_44_6_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_44_6_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_45_0_address0() {
    WEIGHT1_45_0_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_45_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_45_0_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_45_0_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_45_0_d0() {
    WEIGHT1_45_0_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_45_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_0) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_2D))) {
        WEIGHT1_45_0_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_45_0_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_45_1_address0() {
    WEIGHT1_45_1_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_45_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_45_1_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_45_1_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_45_1_d0() {
    WEIGHT1_45_1_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_45_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_1) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_2D))) {
        WEIGHT1_45_1_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_45_1_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_45_2_address0() {
    WEIGHT1_45_2_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_45_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_45_2_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_45_2_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_45_2_d0() {
    WEIGHT1_45_2_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_45_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_2) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_2D))) {
        WEIGHT1_45_2_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_45_2_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_45_3_address0() {
    WEIGHT1_45_3_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_45_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_45_3_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_45_3_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_45_3_d0() {
    WEIGHT1_45_3_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_45_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_3) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_2D))) {
        WEIGHT1_45_3_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_45_3_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_45_4_address0() {
    WEIGHT1_45_4_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_45_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_45_4_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_45_4_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_45_4_d0() {
    WEIGHT1_45_4_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_45_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_4) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_2D))) {
        WEIGHT1_45_4_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_45_4_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_45_5_address0() {
    WEIGHT1_45_5_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_45_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_45_5_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_45_5_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_45_5_d0() {
    WEIGHT1_45_5_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_45_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_5) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_2D))) {
        WEIGHT1_45_5_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_45_5_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_45_6_address0() {
    WEIGHT1_45_6_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_45_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_45_6_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_45_6_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_45_6_d0() {
    WEIGHT1_45_6_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_45_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         ((esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
           esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_6) && 
           esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_2D)) || 
          (esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
           esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_7) && 
           esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_2D))))) {
        WEIGHT1_45_6_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_45_6_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_46_0_address0() {
    WEIGHT1_46_0_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_46_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_46_0_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_46_0_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_46_0_d0() {
    WEIGHT1_46_0_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_46_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_0) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_2E))) {
        WEIGHT1_46_0_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_46_0_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_46_1_address0() {
    WEIGHT1_46_1_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_46_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_46_1_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_46_1_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_46_1_d0() {
    WEIGHT1_46_1_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_46_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_1) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_2E))) {
        WEIGHT1_46_1_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_46_1_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_46_2_address0() {
    WEIGHT1_46_2_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_46_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_46_2_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_46_2_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_46_2_d0() {
    WEIGHT1_46_2_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_46_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_2) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_2E))) {
        WEIGHT1_46_2_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_46_2_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_46_3_address0() {
    WEIGHT1_46_3_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_46_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_46_3_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_46_3_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_46_3_d0() {
    WEIGHT1_46_3_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_46_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_3) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_2E))) {
        WEIGHT1_46_3_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_46_3_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_46_4_address0() {
    WEIGHT1_46_4_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_46_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_46_4_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_46_4_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_46_4_d0() {
    WEIGHT1_46_4_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_46_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_4) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_2E))) {
        WEIGHT1_46_4_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_46_4_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_46_5_address0() {
    WEIGHT1_46_5_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_46_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_46_5_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_46_5_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_46_5_d0() {
    WEIGHT1_46_5_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_46_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_5) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_2E))) {
        WEIGHT1_46_5_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_46_5_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_46_6_address0() {
    WEIGHT1_46_6_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_46_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_46_6_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_46_6_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_46_6_d0() {
    WEIGHT1_46_6_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_46_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         ((esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
           esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_6) && 
           esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_2E)) || 
          (esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
           esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_7) && 
           esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_2E))))) {
        WEIGHT1_46_6_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_46_6_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_47_0_address0() {
    WEIGHT1_47_0_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_47_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_47_0_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_47_0_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_47_0_d0() {
    WEIGHT1_47_0_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_47_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_0) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_2F))) {
        WEIGHT1_47_0_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_47_0_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_47_1_address0() {
    WEIGHT1_47_1_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_47_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_47_1_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_47_1_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_47_1_d0() {
    WEIGHT1_47_1_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_47_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_1) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_2F))) {
        WEIGHT1_47_1_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_47_1_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_47_2_address0() {
    WEIGHT1_47_2_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_47_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_47_2_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_47_2_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_47_2_d0() {
    WEIGHT1_47_2_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_47_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_2) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_2F))) {
        WEIGHT1_47_2_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_47_2_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_47_3_address0() {
    WEIGHT1_47_3_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_47_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_47_3_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_47_3_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_47_3_d0() {
    WEIGHT1_47_3_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_47_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_3) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_2F))) {
        WEIGHT1_47_3_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_47_3_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_47_4_address0() {
    WEIGHT1_47_4_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_47_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_47_4_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_47_4_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_47_4_d0() {
    WEIGHT1_47_4_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_47_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_4) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_2F))) {
        WEIGHT1_47_4_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_47_4_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_47_5_address0() {
    WEIGHT1_47_5_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_47_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_47_5_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_47_5_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_47_5_d0() {
    WEIGHT1_47_5_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_47_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_5) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_2F))) {
        WEIGHT1_47_5_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_47_5_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_47_6_address0() {
    WEIGHT1_47_6_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_47_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_47_6_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_47_6_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_47_6_d0() {
    WEIGHT1_47_6_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_47_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         ((esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
           esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_6) && 
           esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_2F)) || 
          (esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
           esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_7) && 
           esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_2F))))) {
        WEIGHT1_47_6_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_47_6_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_48_0_address0() {
    WEIGHT1_48_0_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_48_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_48_0_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_48_0_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_48_0_d0() {
    WEIGHT1_48_0_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_48_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_0) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_30))) {
        WEIGHT1_48_0_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_48_0_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_48_1_address0() {
    WEIGHT1_48_1_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_48_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_48_1_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_48_1_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_48_1_d0() {
    WEIGHT1_48_1_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_48_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_1) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_30))) {
        WEIGHT1_48_1_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_48_1_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_48_2_address0() {
    WEIGHT1_48_2_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_48_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_48_2_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_48_2_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_48_2_d0() {
    WEIGHT1_48_2_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_48_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_2) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_30))) {
        WEIGHT1_48_2_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_48_2_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_48_3_address0() {
    WEIGHT1_48_3_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_48_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_48_3_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_48_3_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_48_3_d0() {
    WEIGHT1_48_3_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_48_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_3) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_30))) {
        WEIGHT1_48_3_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_48_3_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_48_4_address0() {
    WEIGHT1_48_4_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_48_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_48_4_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_48_4_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_48_4_d0() {
    WEIGHT1_48_4_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_48_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_4) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_30))) {
        WEIGHT1_48_4_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_48_4_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_48_5_address0() {
    WEIGHT1_48_5_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_48_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_48_5_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_48_5_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_48_5_d0() {
    WEIGHT1_48_5_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_48_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_5) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_30))) {
        WEIGHT1_48_5_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_48_5_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_48_6_address0() {
    WEIGHT1_48_6_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_48_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_48_6_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_48_6_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_48_6_d0() {
    WEIGHT1_48_6_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_48_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         ((esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
           esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_6) && 
           esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_30)) || 
          (esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
           esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_7) && 
           esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_30))))) {
        WEIGHT1_48_6_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_48_6_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_49_0_address0() {
    WEIGHT1_49_0_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_49_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_49_0_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_49_0_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_49_0_d0() {
    WEIGHT1_49_0_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_49_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_0) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_31))) {
        WEIGHT1_49_0_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_49_0_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_49_1_address0() {
    WEIGHT1_49_1_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_49_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_49_1_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_49_1_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_49_1_d0() {
    WEIGHT1_49_1_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_49_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_1) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_31))) {
        WEIGHT1_49_1_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_49_1_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_49_2_address0() {
    WEIGHT1_49_2_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_49_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_49_2_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_49_2_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_49_2_d0() {
    WEIGHT1_49_2_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_49_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_2) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_31))) {
        WEIGHT1_49_2_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_49_2_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_49_3_address0() {
    WEIGHT1_49_3_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_49_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_49_3_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_49_3_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_49_3_d0() {
    WEIGHT1_49_3_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_49_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_3) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_31))) {
        WEIGHT1_49_3_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_49_3_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_49_4_address0() {
    WEIGHT1_49_4_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_49_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_49_4_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_49_4_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_49_4_d0() {
    WEIGHT1_49_4_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_49_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_4) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_31))) {
        WEIGHT1_49_4_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_49_4_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_49_5_address0() {
    WEIGHT1_49_5_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_49_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_49_5_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_49_5_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_49_5_d0() {
    WEIGHT1_49_5_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_49_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_5) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_31))) {
        WEIGHT1_49_5_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_49_5_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_49_6_address0() {
    WEIGHT1_49_6_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_49_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_49_6_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_49_6_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_49_6_d0() {
    WEIGHT1_49_6_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_49_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         ((esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
           esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_6) && 
           esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_31)) || 
          (esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
           esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_7) && 
           esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_31))))) {
        WEIGHT1_49_6_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_49_6_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_4_0_address0() {
    WEIGHT1_4_0_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_4_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_4_0_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_4_0_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_4_0_d0() {
    WEIGHT1_4_0_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_4_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_0) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_4))) {
        WEIGHT1_4_0_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_4_0_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_4_1_address0() {
    WEIGHT1_4_1_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_4_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_4_1_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_4_1_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_4_1_d0() {
    WEIGHT1_4_1_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_4_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_1) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_4))) {
        WEIGHT1_4_1_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_4_1_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_4_2_address0() {
    WEIGHT1_4_2_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_4_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_4_2_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_4_2_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_4_2_d0() {
    WEIGHT1_4_2_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_4_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_2) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_4))) {
        WEIGHT1_4_2_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_4_2_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_4_3_address0() {
    WEIGHT1_4_3_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_4_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_4_3_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_4_3_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_4_3_d0() {
    WEIGHT1_4_3_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_4_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_3) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_4))) {
        WEIGHT1_4_3_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_4_3_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_4_4_address0() {
    WEIGHT1_4_4_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_4_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_4_4_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_4_4_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_4_4_d0() {
    WEIGHT1_4_4_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_4_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_4) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_4))) {
        WEIGHT1_4_4_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_4_4_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_4_5_address0() {
    WEIGHT1_4_5_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_4_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_4_5_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_4_5_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_4_5_d0() {
    WEIGHT1_4_5_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_4_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_5) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_4))) {
        WEIGHT1_4_5_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_4_5_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_4_6_address0() {
    WEIGHT1_4_6_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_4_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_4_6_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_4_6_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_4_6_d0() {
    WEIGHT1_4_6_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_4_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         ((esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
           esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_6) && 
           esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_4)) || 
          (esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
           esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_7) && 
           esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_4))))) {
        WEIGHT1_4_6_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_4_6_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_50_0_address0() {
    WEIGHT1_50_0_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_50_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_50_0_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_50_0_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_50_0_d0() {
    WEIGHT1_50_0_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_50_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_0) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_32))) {
        WEIGHT1_50_0_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_50_0_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_50_1_address0() {
    WEIGHT1_50_1_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_50_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_50_1_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_50_1_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_50_1_d0() {
    WEIGHT1_50_1_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_50_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_1) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_32))) {
        WEIGHT1_50_1_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_50_1_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_50_2_address0() {
    WEIGHT1_50_2_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_50_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_50_2_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_50_2_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_50_2_d0() {
    WEIGHT1_50_2_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_50_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_2) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_32))) {
        WEIGHT1_50_2_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_50_2_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_50_3_address0() {
    WEIGHT1_50_3_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_50_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_50_3_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_50_3_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_50_3_d0() {
    WEIGHT1_50_3_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_50_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_3) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_32))) {
        WEIGHT1_50_3_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_50_3_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_50_4_address0() {
    WEIGHT1_50_4_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_50_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_50_4_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_50_4_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_50_4_d0() {
    WEIGHT1_50_4_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_50_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_4) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_32))) {
        WEIGHT1_50_4_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_50_4_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_50_5_address0() {
    WEIGHT1_50_5_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_50_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_50_5_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_50_5_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_50_5_d0() {
    WEIGHT1_50_5_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_50_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_5) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_32))) {
        WEIGHT1_50_5_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_50_5_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_50_6_address0() {
    WEIGHT1_50_6_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_50_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_50_6_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_50_6_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_50_6_d0() {
    WEIGHT1_50_6_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_50_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         ((esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
           esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_6) && 
           esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_32)) || 
          (esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
           esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_7) && 
           esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_32))))) {
        WEIGHT1_50_6_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_50_6_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_51_0_address0() {
    WEIGHT1_51_0_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_51_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_51_0_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_51_0_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_51_0_d0() {
    WEIGHT1_51_0_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_51_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_0) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_33))) {
        WEIGHT1_51_0_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_51_0_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_51_1_address0() {
    WEIGHT1_51_1_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_51_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_51_1_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_51_1_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_51_1_d0() {
    WEIGHT1_51_1_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_51_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_1) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_33))) {
        WEIGHT1_51_1_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_51_1_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_51_2_address0() {
    WEIGHT1_51_2_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_51_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_51_2_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_51_2_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_51_2_d0() {
    WEIGHT1_51_2_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_51_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_2) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_33))) {
        WEIGHT1_51_2_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_51_2_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_51_3_address0() {
    WEIGHT1_51_3_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_51_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_51_3_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_51_3_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_51_3_d0() {
    WEIGHT1_51_3_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_51_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_3) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_33))) {
        WEIGHT1_51_3_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_51_3_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_51_4_address0() {
    WEIGHT1_51_4_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_51_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_51_4_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_51_4_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_51_4_d0() {
    WEIGHT1_51_4_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_51_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_4) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_33))) {
        WEIGHT1_51_4_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_51_4_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_51_5_address0() {
    WEIGHT1_51_5_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_51_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_51_5_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_51_5_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_51_5_d0() {
    WEIGHT1_51_5_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_51_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_5) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_33))) {
        WEIGHT1_51_5_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_51_5_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_51_6_address0() {
    WEIGHT1_51_6_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_51_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_51_6_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_51_6_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_51_6_d0() {
    WEIGHT1_51_6_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_51_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         ((esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
           esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_6) && 
           esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_33)) || 
          (esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
           esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_7) && 
           esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_33))))) {
        WEIGHT1_51_6_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_51_6_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_52_0_address0() {
    WEIGHT1_52_0_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_52_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_52_0_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_52_0_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_52_0_d0() {
    WEIGHT1_52_0_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_52_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_0) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_34))) {
        WEIGHT1_52_0_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_52_0_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_52_1_address0() {
    WEIGHT1_52_1_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_52_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_52_1_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_52_1_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_52_1_d0() {
    WEIGHT1_52_1_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_52_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_1) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_34))) {
        WEIGHT1_52_1_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_52_1_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_52_2_address0() {
    WEIGHT1_52_2_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_52_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_52_2_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_52_2_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_52_2_d0() {
    WEIGHT1_52_2_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_52_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_2) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_34))) {
        WEIGHT1_52_2_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_52_2_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_52_3_address0() {
    WEIGHT1_52_3_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_52_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_52_3_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_52_3_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_52_3_d0() {
    WEIGHT1_52_3_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_52_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_3) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_34))) {
        WEIGHT1_52_3_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_52_3_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_52_4_address0() {
    WEIGHT1_52_4_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_52_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_52_4_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_52_4_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_52_4_d0() {
    WEIGHT1_52_4_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_52_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_4) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_34))) {
        WEIGHT1_52_4_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_52_4_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_52_5_address0() {
    WEIGHT1_52_5_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_52_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_52_5_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_52_5_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_52_5_d0() {
    WEIGHT1_52_5_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_52_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_5) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_34))) {
        WEIGHT1_52_5_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_52_5_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_52_6_address0() {
    WEIGHT1_52_6_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_52_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_52_6_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_52_6_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_52_6_d0() {
    WEIGHT1_52_6_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_52_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         ((esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
           esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_6) && 
           esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_34)) || 
          (esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
           esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_7) && 
           esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_34))))) {
        WEIGHT1_52_6_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_52_6_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_53_0_address0() {
    WEIGHT1_53_0_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_53_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_53_0_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_53_0_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_53_0_d0() {
    WEIGHT1_53_0_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_53_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_0) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_35))) {
        WEIGHT1_53_0_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_53_0_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_53_1_address0() {
    WEIGHT1_53_1_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_53_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_53_1_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_53_1_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_53_1_d0() {
    WEIGHT1_53_1_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_53_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_1) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_35))) {
        WEIGHT1_53_1_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_53_1_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_53_2_address0() {
    WEIGHT1_53_2_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_53_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_53_2_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_53_2_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_53_2_d0() {
    WEIGHT1_53_2_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_53_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_2) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_35))) {
        WEIGHT1_53_2_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_53_2_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_53_3_address0() {
    WEIGHT1_53_3_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_53_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_53_3_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_53_3_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_53_3_d0() {
    WEIGHT1_53_3_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_53_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_3) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_35))) {
        WEIGHT1_53_3_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_53_3_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_53_4_address0() {
    WEIGHT1_53_4_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_53_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_53_4_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_53_4_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_53_4_d0() {
    WEIGHT1_53_4_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_53_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_4) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_35))) {
        WEIGHT1_53_4_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_53_4_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_53_5_address0() {
    WEIGHT1_53_5_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_53_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_53_5_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_53_5_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_53_5_d0() {
    WEIGHT1_53_5_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_53_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_5) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_35))) {
        WEIGHT1_53_5_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_53_5_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_53_6_address0() {
    WEIGHT1_53_6_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_53_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_53_6_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_53_6_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_53_6_d0() {
    WEIGHT1_53_6_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_53_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         ((esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
           esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_6) && 
           esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_35)) || 
          (esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
           esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_7) && 
           esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_35))))) {
        WEIGHT1_53_6_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_53_6_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_54_0_address0() {
    WEIGHT1_54_0_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_54_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_54_0_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_54_0_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_54_0_d0() {
    WEIGHT1_54_0_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_54_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_0) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_36))) {
        WEIGHT1_54_0_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_54_0_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_54_1_address0() {
    WEIGHT1_54_1_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_54_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_54_1_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_54_1_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_54_1_d0() {
    WEIGHT1_54_1_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_54_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_1) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_36))) {
        WEIGHT1_54_1_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_54_1_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_54_2_address0() {
    WEIGHT1_54_2_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_54_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_54_2_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_54_2_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_54_2_d0() {
    WEIGHT1_54_2_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_54_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_2) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_36))) {
        WEIGHT1_54_2_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_54_2_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_54_3_address0() {
    WEIGHT1_54_3_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_54_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_54_3_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_54_3_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_54_3_d0() {
    WEIGHT1_54_3_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_54_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_3) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_36))) {
        WEIGHT1_54_3_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_54_3_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_54_4_address0() {
    WEIGHT1_54_4_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_54_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_54_4_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_54_4_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_54_4_d0() {
    WEIGHT1_54_4_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_54_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_4) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_36))) {
        WEIGHT1_54_4_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_54_4_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_54_5_address0() {
    WEIGHT1_54_5_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_54_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_54_5_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_54_5_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_54_5_d0() {
    WEIGHT1_54_5_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_54_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_5) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_36))) {
        WEIGHT1_54_5_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_54_5_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_54_6_address0() {
    WEIGHT1_54_6_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_54_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_54_6_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_54_6_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_54_6_d0() {
    WEIGHT1_54_6_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_54_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         ((esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
           esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_6) && 
           esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_36)) || 
          (esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
           esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_7) && 
           esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_36))))) {
        WEIGHT1_54_6_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_54_6_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_55_0_address0() {
    WEIGHT1_55_0_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_55_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_55_0_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_55_0_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_55_0_d0() {
    WEIGHT1_55_0_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_55_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_0) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_37))) {
        WEIGHT1_55_0_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_55_0_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_55_1_address0() {
    WEIGHT1_55_1_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_55_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_55_1_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_55_1_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_55_1_d0() {
    WEIGHT1_55_1_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_55_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_1) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_37))) {
        WEIGHT1_55_1_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_55_1_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_55_2_address0() {
    WEIGHT1_55_2_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_55_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_55_2_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_55_2_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_55_2_d0() {
    WEIGHT1_55_2_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_55_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_2) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_37))) {
        WEIGHT1_55_2_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_55_2_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_55_3_address0() {
    WEIGHT1_55_3_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_55_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_55_3_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_55_3_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_55_3_d0() {
    WEIGHT1_55_3_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_55_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_3) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_37))) {
        WEIGHT1_55_3_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_55_3_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_55_4_address0() {
    WEIGHT1_55_4_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_55_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_55_4_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_55_4_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_55_4_d0() {
    WEIGHT1_55_4_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_55_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_4) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_37))) {
        WEIGHT1_55_4_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_55_4_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_55_5_address0() {
    WEIGHT1_55_5_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_55_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_55_5_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_55_5_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_55_5_d0() {
    WEIGHT1_55_5_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_55_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_5) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_37))) {
        WEIGHT1_55_5_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_55_5_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_55_6_address0() {
    WEIGHT1_55_6_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_55_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_55_6_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_55_6_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_55_6_d0() {
    WEIGHT1_55_6_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_55_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         ((esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
           esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_6) && 
           esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_37)) || 
          (esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
           esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_7) && 
           esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_37))))) {
        WEIGHT1_55_6_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_55_6_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_56_0_address0() {
    WEIGHT1_56_0_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_56_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_56_0_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_56_0_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_56_0_d0() {
    WEIGHT1_56_0_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_56_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_0) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_38))) {
        WEIGHT1_56_0_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_56_0_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_56_1_address0() {
    WEIGHT1_56_1_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_56_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_56_1_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_56_1_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_56_1_d0() {
    WEIGHT1_56_1_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_56_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_1) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_38))) {
        WEIGHT1_56_1_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_56_1_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_56_2_address0() {
    WEIGHT1_56_2_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_56_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_56_2_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_56_2_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_56_2_d0() {
    WEIGHT1_56_2_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_56_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_2) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_38))) {
        WEIGHT1_56_2_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_56_2_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_56_3_address0() {
    WEIGHT1_56_3_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_56_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_56_3_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_56_3_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_56_3_d0() {
    WEIGHT1_56_3_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_56_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_3) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_38))) {
        WEIGHT1_56_3_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_56_3_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_56_4_address0() {
    WEIGHT1_56_4_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_56_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_56_4_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_56_4_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_56_4_d0() {
    WEIGHT1_56_4_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_56_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_4) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_38))) {
        WEIGHT1_56_4_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_56_4_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_56_5_address0() {
    WEIGHT1_56_5_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_56_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_56_5_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_56_5_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_56_5_d0() {
    WEIGHT1_56_5_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_56_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_5) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_38))) {
        WEIGHT1_56_5_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_56_5_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_56_6_address0() {
    WEIGHT1_56_6_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_56_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_56_6_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_56_6_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_56_6_d0() {
    WEIGHT1_56_6_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_56_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         ((esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
           esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_6) && 
           esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_38)) || 
          (esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
           esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_7) && 
           esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_38))))) {
        WEIGHT1_56_6_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_56_6_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_57_0_address0() {
    WEIGHT1_57_0_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_57_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_57_0_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_57_0_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_57_0_d0() {
    WEIGHT1_57_0_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_57_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_0) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_39))) {
        WEIGHT1_57_0_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_57_0_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_57_1_address0() {
    WEIGHT1_57_1_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_57_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_57_1_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_57_1_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_57_1_d0() {
    WEIGHT1_57_1_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_57_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_1) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_39))) {
        WEIGHT1_57_1_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_57_1_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_57_2_address0() {
    WEIGHT1_57_2_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_57_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_57_2_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_57_2_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_57_2_d0() {
    WEIGHT1_57_2_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_57_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_2) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_39))) {
        WEIGHT1_57_2_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_57_2_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_57_3_address0() {
    WEIGHT1_57_3_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_57_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_57_3_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_57_3_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_57_3_d0() {
    WEIGHT1_57_3_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_57_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_3) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_39))) {
        WEIGHT1_57_3_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_57_3_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_57_4_address0() {
    WEIGHT1_57_4_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_57_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_57_4_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_57_4_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_57_4_d0() {
    WEIGHT1_57_4_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_57_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_4) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_39))) {
        WEIGHT1_57_4_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_57_4_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_57_5_address0() {
    WEIGHT1_57_5_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_57_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_57_5_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_57_5_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_57_5_d0() {
    WEIGHT1_57_5_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_57_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_5) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_39))) {
        WEIGHT1_57_5_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_57_5_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_57_6_address0() {
    WEIGHT1_57_6_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_57_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_57_6_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_57_6_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_57_6_d0() {
    WEIGHT1_57_6_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_57_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         ((esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
           esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_6) && 
           esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_39)) || 
          (esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
           esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_7) && 
           esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_39))))) {
        WEIGHT1_57_6_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_57_6_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_58_0_address0() {
    WEIGHT1_58_0_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_58_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_58_0_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_58_0_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_58_0_d0() {
    WEIGHT1_58_0_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_58_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_0) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_3A))) {
        WEIGHT1_58_0_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_58_0_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_58_1_address0() {
    WEIGHT1_58_1_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_58_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_58_1_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_58_1_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_58_1_d0() {
    WEIGHT1_58_1_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_58_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_1) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_3A))) {
        WEIGHT1_58_1_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_58_1_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_58_2_address0() {
    WEIGHT1_58_2_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_58_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_58_2_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_58_2_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_58_2_d0() {
    WEIGHT1_58_2_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_58_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_2) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_3A))) {
        WEIGHT1_58_2_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_58_2_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_58_3_address0() {
    WEIGHT1_58_3_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_58_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_58_3_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_58_3_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_58_3_d0() {
    WEIGHT1_58_3_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_58_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_3) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_3A))) {
        WEIGHT1_58_3_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_58_3_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_58_4_address0() {
    WEIGHT1_58_4_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_58_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_58_4_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_58_4_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_58_4_d0() {
    WEIGHT1_58_4_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_58_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_4) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_3A))) {
        WEIGHT1_58_4_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_58_4_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_58_5_address0() {
    WEIGHT1_58_5_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_58_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_58_5_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_58_5_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_58_5_d0() {
    WEIGHT1_58_5_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_58_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_5) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_3A))) {
        WEIGHT1_58_5_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_58_5_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_58_6_address0() {
    WEIGHT1_58_6_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_58_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_58_6_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_58_6_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_58_6_d0() {
    WEIGHT1_58_6_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_58_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         ((esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
           esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_6) && 
           esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_3A)) || 
          (esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
           esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_7) && 
           esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_3A))))) {
        WEIGHT1_58_6_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_58_6_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_59_0_address0() {
    WEIGHT1_59_0_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_59_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_59_0_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_59_0_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_59_0_d0() {
    WEIGHT1_59_0_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_59_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_0) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_3B))) {
        WEIGHT1_59_0_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_59_0_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_59_1_address0() {
    WEIGHT1_59_1_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_59_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_59_1_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_59_1_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_59_1_d0() {
    WEIGHT1_59_1_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_59_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_1) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_3B))) {
        WEIGHT1_59_1_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_59_1_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_59_2_address0() {
    WEIGHT1_59_2_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_59_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_59_2_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_59_2_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_59_2_d0() {
    WEIGHT1_59_2_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_59_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_2) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_3B))) {
        WEIGHT1_59_2_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_59_2_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_59_3_address0() {
    WEIGHT1_59_3_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_59_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_59_3_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_59_3_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_59_3_d0() {
    WEIGHT1_59_3_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_59_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_3) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_3B))) {
        WEIGHT1_59_3_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_59_3_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_59_4_address0() {
    WEIGHT1_59_4_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_59_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_59_4_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_59_4_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_59_4_d0() {
    WEIGHT1_59_4_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_59_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_4) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_3B))) {
        WEIGHT1_59_4_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_59_4_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_59_5_address0() {
    WEIGHT1_59_5_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_59_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_59_5_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_59_5_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_59_5_d0() {
    WEIGHT1_59_5_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_59_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_5) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_3B))) {
        WEIGHT1_59_5_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_59_5_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_59_6_address0() {
    WEIGHT1_59_6_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_59_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_59_6_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_59_6_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_59_6_d0() {
    WEIGHT1_59_6_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_59_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         ((esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
           esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_6) && 
           esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_3B)) || 
          (esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
           esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_7) && 
           esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_3B))))) {
        WEIGHT1_59_6_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_59_6_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_5_0_address0() {
    WEIGHT1_5_0_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_5_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_5_0_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_5_0_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_5_0_d0() {
    WEIGHT1_5_0_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_5_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_0) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_5))) {
        WEIGHT1_5_0_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_5_0_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_5_1_address0() {
    WEIGHT1_5_1_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_5_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_5_1_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_5_1_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_5_1_d0() {
    WEIGHT1_5_1_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_5_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_1) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_5))) {
        WEIGHT1_5_1_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_5_1_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_5_2_address0() {
    WEIGHT1_5_2_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_5_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_5_2_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_5_2_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_5_2_d0() {
    WEIGHT1_5_2_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_5_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_2) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_5))) {
        WEIGHT1_5_2_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_5_2_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_5_3_address0() {
    WEIGHT1_5_3_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_5_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_5_3_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_5_3_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_5_3_d0() {
    WEIGHT1_5_3_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_5_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_3) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_5))) {
        WEIGHT1_5_3_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_5_3_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_5_4_address0() {
    WEIGHT1_5_4_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_5_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_5_4_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_5_4_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_5_4_d0() {
    WEIGHT1_5_4_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_5_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_4) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_5))) {
        WEIGHT1_5_4_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_5_4_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_5_5_address0() {
    WEIGHT1_5_5_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_5_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_5_5_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_5_5_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_5_5_d0() {
    WEIGHT1_5_5_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_5_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_5) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_5))) {
        WEIGHT1_5_5_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_5_5_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_5_6_address0() {
    WEIGHT1_5_6_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_5_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_5_6_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_5_6_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_5_6_d0() {
    WEIGHT1_5_6_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_5_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         ((esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
           esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_6) && 
           esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_5)) || 
          (esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
           esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_7) && 
           esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_5))))) {
        WEIGHT1_5_6_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_5_6_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_60_0_address0() {
    WEIGHT1_60_0_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_60_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_60_0_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_60_0_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_60_0_d0() {
    WEIGHT1_60_0_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_60_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_0) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_3C))) {
        WEIGHT1_60_0_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_60_0_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_60_1_address0() {
    WEIGHT1_60_1_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_60_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_60_1_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_60_1_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_60_1_d0() {
    WEIGHT1_60_1_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_60_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_1) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_3C))) {
        WEIGHT1_60_1_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_60_1_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_60_2_address0() {
    WEIGHT1_60_2_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_60_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_60_2_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_60_2_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_60_2_d0() {
    WEIGHT1_60_2_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_60_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_2) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_3C))) {
        WEIGHT1_60_2_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_60_2_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_60_3_address0() {
    WEIGHT1_60_3_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_60_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_60_3_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_60_3_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_60_3_d0() {
    WEIGHT1_60_3_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_60_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_3) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_3C))) {
        WEIGHT1_60_3_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_60_3_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_60_4_address0() {
    WEIGHT1_60_4_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_60_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_60_4_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_60_4_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_60_4_d0() {
    WEIGHT1_60_4_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_60_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_4) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_3C))) {
        WEIGHT1_60_4_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_60_4_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_60_5_address0() {
    WEIGHT1_60_5_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_60_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_60_5_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_60_5_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_60_5_d0() {
    WEIGHT1_60_5_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_60_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_5) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_3C))) {
        WEIGHT1_60_5_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_60_5_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_60_6_address0() {
    WEIGHT1_60_6_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_60_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_60_6_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_60_6_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_60_6_d0() {
    WEIGHT1_60_6_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_60_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         ((esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
           esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_6) && 
           esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_3C)) || 
          (esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
           esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_7) && 
           esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_3C))))) {
        WEIGHT1_60_6_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_60_6_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_61_0_address0() {
    WEIGHT1_61_0_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_61_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_61_0_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_61_0_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_61_0_d0() {
    WEIGHT1_61_0_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_61_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_0) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_3D))) {
        WEIGHT1_61_0_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_61_0_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_61_1_address0() {
    WEIGHT1_61_1_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_61_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_61_1_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_61_1_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_61_1_d0() {
    WEIGHT1_61_1_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_61_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_1) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_3D))) {
        WEIGHT1_61_1_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_61_1_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_61_2_address0() {
    WEIGHT1_61_2_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_61_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_61_2_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_61_2_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_61_2_d0() {
    WEIGHT1_61_2_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_61_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_2) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_3D))) {
        WEIGHT1_61_2_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_61_2_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_61_3_address0() {
    WEIGHT1_61_3_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_61_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_61_3_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_61_3_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_61_3_d0() {
    WEIGHT1_61_3_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_61_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_3) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_3D))) {
        WEIGHT1_61_3_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_61_3_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_61_4_address0() {
    WEIGHT1_61_4_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_61_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_61_4_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_61_4_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_61_4_d0() {
    WEIGHT1_61_4_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_61_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_4) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_3D))) {
        WEIGHT1_61_4_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_61_4_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_61_5_address0() {
    WEIGHT1_61_5_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_61_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_61_5_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_61_5_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_61_5_d0() {
    WEIGHT1_61_5_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_61_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_5) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_3D))) {
        WEIGHT1_61_5_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_61_5_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_61_6_address0() {
    WEIGHT1_61_6_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_61_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_61_6_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_61_6_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_61_6_d0() {
    WEIGHT1_61_6_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_61_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         ((esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
           esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_6) && 
           esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_3D)) || 
          (esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
           esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_7) && 
           esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_3D))))) {
        WEIGHT1_61_6_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_61_6_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_62_0_address0() {
    WEIGHT1_62_0_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_62_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_62_0_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_62_0_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_62_0_d0() {
    WEIGHT1_62_0_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_62_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_0) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_3E))) {
        WEIGHT1_62_0_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_62_0_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_62_1_address0() {
    WEIGHT1_62_1_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_62_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_62_1_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_62_1_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_62_1_d0() {
    WEIGHT1_62_1_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_62_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_1) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_3E))) {
        WEIGHT1_62_1_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_62_1_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_62_2_address0() {
    WEIGHT1_62_2_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_62_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_62_2_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_62_2_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_62_2_d0() {
    WEIGHT1_62_2_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_62_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_2) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_3E))) {
        WEIGHT1_62_2_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_62_2_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_62_3_address0() {
    WEIGHT1_62_3_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_62_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_62_3_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_62_3_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_62_3_d0() {
    WEIGHT1_62_3_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_62_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_3) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_3E))) {
        WEIGHT1_62_3_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_62_3_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_62_4_address0() {
    WEIGHT1_62_4_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_62_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_62_4_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_62_4_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_62_4_d0() {
    WEIGHT1_62_4_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_62_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_4) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_3E))) {
        WEIGHT1_62_4_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_62_4_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_62_5_address0() {
    WEIGHT1_62_5_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_62_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_62_5_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_62_5_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_62_5_d0() {
    WEIGHT1_62_5_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_62_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_5) && 
         esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_3E))) {
        WEIGHT1_62_5_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_62_5_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_62_6_address0() {
    WEIGHT1_62_6_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_62_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_62_6_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_62_6_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_62_6_d0() {
    WEIGHT1_62_6_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_62_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         ((esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
           esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_6) && 
           esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_3E)) || 
          (esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
           esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_7) && 
           esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_3E))))) {
        WEIGHT1_62_6_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_62_6_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_63_0_address0() {
    WEIGHT1_63_0_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_63_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_63_0_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_63_0_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_63_0_d0() {
    WEIGHT1_63_0_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_63_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_0) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_20) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_21) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_22) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_23) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_24) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_25) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_26) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_27) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_28) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_29) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_2A) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_2B) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_2C) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_2D) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_2E) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_2F) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_30) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_31) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_32) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_33) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_34) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_35) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_36) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_37) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_38) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_39) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_3A) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_3B) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_3C) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_3D) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_3E))) {
        WEIGHT1_63_0_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_63_0_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_63_1_address0() {
    WEIGHT1_63_1_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_63_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_63_1_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_63_1_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_63_1_d0() {
    WEIGHT1_63_1_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_63_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_1) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_20) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_21) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_22) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_23) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_24) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_25) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_26) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_27) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_28) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_29) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_2A) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_2B) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_2C) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_2D) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_2E) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_2F) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_30) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_31) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_32) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_33) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_34) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_35) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_36) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_37) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_38) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_39) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_3A) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_3B) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_3C) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_3D) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_3E))) {
        WEIGHT1_63_1_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_63_1_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_63_2_address0() {
    WEIGHT1_63_2_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_63_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_63_2_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_63_2_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_63_2_d0() {
    WEIGHT1_63_2_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_63_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_2) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_20) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_21) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_22) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_23) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_24) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_25) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_26) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_27) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_28) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_29) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_2A) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_2B) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_2C) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_2D) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_2E) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_2F) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_30) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_31) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_32) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_33) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_34) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_35) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_36) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_37) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_38) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_39) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_3A) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_3B) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_3C) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_3D) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_3E))) {
        WEIGHT1_63_2_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_63_2_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_63_3_address0() {
    WEIGHT1_63_3_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_63_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_63_3_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_63_3_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_63_3_d0() {
    WEIGHT1_63_3_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_63_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_3) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_20) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_21) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_22) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_23) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_24) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_25) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_26) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_27) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_28) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_29) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_2A) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_2B) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_2C) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_2D) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_2E) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_2F) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_30) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_31) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_32) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_33) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_34) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_35) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_36) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_37) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_38) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_39) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_3A) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_3B) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_3C) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_3D) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_3E))) {
        WEIGHT1_63_3_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_63_3_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_63_4_address0() {
    WEIGHT1_63_4_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_63_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_63_4_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_63_4_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_63_4_d0() {
    WEIGHT1_63_4_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_63_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_4) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_20) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_21) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_22) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_23) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_24) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_25) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_26) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_27) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_28) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_29) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_2A) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_2B) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_2C) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_2D) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_2E) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_2F) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_30) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_31) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_32) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_33) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_34) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_35) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_36) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_37) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_38) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_39) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_3A) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_3B) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_3C) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_3D) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_3E))) {
        WEIGHT1_63_4_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_63_4_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_63_5_address0() {
    WEIGHT1_63_5_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_63_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_63_5_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_63_5_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_63_5_d0() {
    WEIGHT1_63_5_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_63_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_5) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_20) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_21) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_22) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_23) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_24) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_25) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_26) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_27) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_28) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_29) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_2A) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_2B) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_2C) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_2D) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_2E) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_2F) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_30) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_31) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_32) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_33) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_34) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_35) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_36) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_37) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_38) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_39) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_3A) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_3B) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_3C) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_3D) && 
         !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_3E))) {
        WEIGHT1_63_5_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_63_5_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_63_6_address0() {
    WEIGHT1_63_6_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_63_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_63_6_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_63_6_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_63_6_d0() {
    WEIGHT1_63_6_d0 = weight_input_dma_dat_1_fu_7476_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_63_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         ((esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
           esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_6) && 
           !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_20) && 
           !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_21) && 
           !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_22) && 
           !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_23) && 
           !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_24) && 
           !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_25) && 
           !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_26) && 
           !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_27) && 
           !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_28) && 
           !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_29) && 
           !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_2A) && 
           !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_2B) && 
           !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_2C) && 
           !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_2D) && 
           !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_2E) && 
           !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_2F) && 
           !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_30) && 
           !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_31) && 
           !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_32) && 
           !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_33) && 
           !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_34) && 
           !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_35) && 
           !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_36) && 
           !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_37) && 
           !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_38) && 
           !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_39) && 
           !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_3A) && 
           !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_3B) && 
           !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_3C) && 
           !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_3D) && 
           !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_3E)) || 
          (esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
           esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_7) && 
           !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_20) && 
           !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_21) && 
           !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_22) && 
           !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_23) && 
           !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_24) && 
           !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_25) && 
           !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_26) && 
           !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_27) && 
           !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_28) && 
           !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_29) && 
           !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_2A) && 
           !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_2B) && 
           !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_2C) && 
           !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_2D) && 
           !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_2E) && 
           !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_2F) && 
           !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_30) && 
           !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_31) && 
           !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_32) && 
           !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_33) && 
           !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_34) && 
           !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_35) && 
           !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_36) && 
           !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_37) && 
           !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_38) && 
           !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_39) && 
           !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_3A) && 
           !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_3B) && 
           !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_3C) && 
           !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_3D) && 
           !esl_seteq<1,6,6>(tmp_t_mid2_fu_7097_p3.read(), ap_const_lv6_3E))))) {
        WEIGHT1_63_6_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_63_6_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_6_0_address0() {
    WEIGHT1_6_0_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_6_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_6_0_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_6_0_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_6_0_d0() {
    WEIGHT1_6_0_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_6_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_0) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_6))) {
        WEIGHT1_6_0_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_6_0_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_6_1_address0() {
    WEIGHT1_6_1_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_6_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_6_1_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_6_1_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_6_1_d0() {
    WEIGHT1_6_1_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_6_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_1) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_6))) {
        WEIGHT1_6_1_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_6_1_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_6_2_address0() {
    WEIGHT1_6_2_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_6_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_6_2_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_6_2_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_6_2_d0() {
    WEIGHT1_6_2_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_6_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_2) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_6))) {
        WEIGHT1_6_2_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_6_2_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_6_3_address0() {
    WEIGHT1_6_3_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_6_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_6_3_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_6_3_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_6_3_d0() {
    WEIGHT1_6_3_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_6_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_3) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_6))) {
        WEIGHT1_6_3_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_6_3_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_6_4_address0() {
    WEIGHT1_6_4_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_6_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_6_4_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_6_4_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_6_4_d0() {
    WEIGHT1_6_4_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_6_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_4) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_6))) {
        WEIGHT1_6_4_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_6_4_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_6_5_address0() {
    WEIGHT1_6_5_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_6_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_6_5_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_6_5_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_6_5_d0() {
    WEIGHT1_6_5_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_6_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_5) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_6))) {
        WEIGHT1_6_5_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_6_5_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_6_6_address0() {
    WEIGHT1_6_6_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_6_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_6_6_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_6_6_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_6_6_d0() {
    WEIGHT1_6_6_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_6_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         ((esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
           esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_6) && 
           esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_6)) || 
          (esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
           esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_7) && 
           esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_6))))) {
        WEIGHT1_6_6_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_6_6_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_7_0_address0() {
    WEIGHT1_7_0_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_7_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_7_0_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_7_0_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_7_0_d0() {
    WEIGHT1_7_0_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_7_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_0) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_7))) {
        WEIGHT1_7_0_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_7_0_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_7_1_address0() {
    WEIGHT1_7_1_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_7_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_7_1_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_7_1_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_7_1_d0() {
    WEIGHT1_7_1_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_7_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_1) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_7))) {
        WEIGHT1_7_1_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_7_1_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_7_2_address0() {
    WEIGHT1_7_2_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_7_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_7_2_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_7_2_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_7_2_d0() {
    WEIGHT1_7_2_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_7_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_2) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_7))) {
        WEIGHT1_7_2_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_7_2_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_7_3_address0() {
    WEIGHT1_7_3_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_7_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_7_3_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_7_3_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_7_3_d0() {
    WEIGHT1_7_3_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_7_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_3) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_7))) {
        WEIGHT1_7_3_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_7_3_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_7_4_address0() {
    WEIGHT1_7_4_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_7_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_7_4_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_7_4_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_7_4_d0() {
    WEIGHT1_7_4_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_7_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_4) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_7))) {
        WEIGHT1_7_4_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_7_4_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_7_5_address0() {
    WEIGHT1_7_5_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_7_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_7_5_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_7_5_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_7_5_d0() {
    WEIGHT1_7_5_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_7_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_5) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_7))) {
        WEIGHT1_7_5_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_7_5_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_7_6_address0() {
    WEIGHT1_7_6_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_7_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_7_6_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_7_6_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_7_6_d0() {
    WEIGHT1_7_6_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_7_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         ((esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
           esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_6) && 
           esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_7)) || 
          (esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
           esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_7) && 
           esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_7))))) {
        WEIGHT1_7_6_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_7_6_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_8_0_address0() {
    WEIGHT1_8_0_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_8_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_8_0_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_8_0_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_8_0_d0() {
    WEIGHT1_8_0_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_8_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_0) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_8))) {
        WEIGHT1_8_0_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_8_0_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_8_1_address0() {
    WEIGHT1_8_1_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_8_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_8_1_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_8_1_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_8_1_d0() {
    WEIGHT1_8_1_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_8_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_1) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_8))) {
        WEIGHT1_8_1_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_8_1_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_8_2_address0() {
    WEIGHT1_8_2_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_8_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_8_2_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_8_2_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_8_2_d0() {
    WEIGHT1_8_2_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_8_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_2) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_8))) {
        WEIGHT1_8_2_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_8_2_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_8_3_address0() {
    WEIGHT1_8_3_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_8_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_8_3_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_8_3_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_8_3_d0() {
    WEIGHT1_8_3_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_8_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_3) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_8))) {
        WEIGHT1_8_3_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_8_3_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_8_4_address0() {
    WEIGHT1_8_4_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_8_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_8_4_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_8_4_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_8_4_d0() {
    WEIGHT1_8_4_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_8_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_4) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_8))) {
        WEIGHT1_8_4_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_8_4_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_8_5_address0() {
    WEIGHT1_8_5_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_8_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_8_5_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_8_5_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_8_5_d0() {
    WEIGHT1_8_5_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_8_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_5) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_8))) {
        WEIGHT1_8_5_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_8_5_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_8_6_address0() {
    WEIGHT1_8_6_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_8_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_8_6_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_8_6_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_8_6_d0() {
    WEIGHT1_8_6_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_8_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         ((esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
           esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_6) && 
           esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_8)) || 
          (esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
           esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_7) && 
           esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_8))))) {
        WEIGHT1_8_6_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_8_6_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_9_0_address0() {
    WEIGHT1_9_0_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_9_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_9_0_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_9_0_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_9_0_d0() {
    WEIGHT1_9_0_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_9_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_0) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_9))) {
        WEIGHT1_9_0_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_9_0_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_9_1_address0() {
    WEIGHT1_9_1_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_9_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_9_1_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_9_1_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_9_1_d0() {
    WEIGHT1_9_1_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_9_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_1) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_9))) {
        WEIGHT1_9_1_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_9_1_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_9_2_address0() {
    WEIGHT1_9_2_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_9_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_9_2_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_9_2_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_9_2_d0() {
    WEIGHT1_9_2_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_9_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_2) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_9))) {
        WEIGHT1_9_2_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_9_2_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_9_3_address0() {
    WEIGHT1_9_3_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_9_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_9_3_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_9_3_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_9_3_d0() {
    WEIGHT1_9_3_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_9_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_3) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_9))) {
        WEIGHT1_9_3_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_9_3_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_9_4_address0() {
    WEIGHT1_9_4_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_9_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_9_4_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_9_4_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_9_4_d0() {
    WEIGHT1_9_4_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_9_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_4) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_9))) {
        WEIGHT1_9_4_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_9_4_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_9_5_address0() {
    WEIGHT1_9_5_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_9_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_9_5_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_9_5_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_9_5_d0() {
    WEIGHT1_9_5_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_9_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_5) && 
         esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_9))) {
        WEIGHT1_9_5_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_9_5_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_9_6_address0() {
    WEIGHT1_9_6_address0 =  (sc_lv<7>) (tmp_24_cast_fu_7708_p1.read());
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_9_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)))) {
        WEIGHT1_9_6_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_9_6_ce0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_9_6_d0() {
    WEIGHT1_9_6_d0 = weight_input_dma_dat_fu_7238_p1.read();
}

void LOAD_WEIGHT_DMA::thread_WEIGHT1_9_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         !(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         ((esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
           esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_6) && 
           esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_9)) || 
          (esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
           esl_seteq<1,3,3>(j_mid2_fu_7164_p3.read(), ap_const_lv3_7) && 
           esl_seteq<1,6,6>(i_mid2_fu_7129_p3.read(), ap_const_lv6_9))))) {
        WEIGHT1_9_6_we0 = ap_const_logic_1;
    } else {
        WEIGHT1_9_6_we0 = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void LOAD_WEIGHT_DMA::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void LOAD_WEIGHT_DMA::thread_ap_CS_fsm_state3() {
    ap_CS_fsm_state3 = ap_CS_fsm.read()[2];
}

void LOAD_WEIGHT_DMA::thread_ap_block_state2() {
    ap_block_state2 = (esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0));
}

void LOAD_WEIGHT_DMA::thread_ap_done() {
    if (((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_ap_ready() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_bound4_fu_7029_p0() {
    bound4_fu_7029_p0 =  (sc_lv<64>) (bound4_fu_7029_p00.read());
}

void LOAD_WEIGHT_DMA::thread_bound4_fu_7029_p00() {
    bound4_fu_7029_p00 = esl_zext<67,64>(bound_fu_7019_p2.read());
}

void LOAD_WEIGHT_DMA::thread_bound4_fu_7029_p2() {
    bound4_fu_7029_p2 = (!bound4_fu_7029_p0.read().is_01() || !ap_const_lv67_7.is_01())? sc_lv<67>(): sc_biguint<64>(bound4_fu_7029_p0.read()) * sc_biguint<67>(ap_const_lv67_7);
}

void LOAD_WEIGHT_DMA::thread_bound_fu_7019_p0() {
    bound_fu_7019_p0 =  (sc_lv<32>) (cast_fu_7015_p1.read());
}

void LOAD_WEIGHT_DMA::thread_bound_fu_7019_p1() {
    bound_fu_7019_p1 =  (sc_lv<32>) (cast_fu_7015_p1.read());
}

void LOAD_WEIGHT_DMA::thread_bound_fu_7019_p2() {
    bound_fu_7019_p2 = (!bound_fu_7019_p0.read().is_01() || !bound_fu_7019_p1.read().is_01())? sc_lv<64>(): sc_biguint<32>(bound_fu_7019_p0.read()) * sc_biguint<32>(bound_fu_7019_p1.read());
}

void LOAD_WEIGHT_DMA::thread_cast_fu_7015_p1() {
    cast_fu_7015_p1 = esl_zext<64,32>(custom_k.read());
}

void LOAD_WEIGHT_DMA::thread_exitcond_flatten1_fu_7117_p2() {
    exitcond_flatten1_fu_7117_p2 = (!indvar_flatten_reg_6982.read().is_01() || !bound_reg_8207.read().is_01())? sc_lv<1>(): sc_lv<1>(indvar_flatten_reg_6982.read() == bound_reg_8207.read());
}

void LOAD_WEIGHT_DMA::thread_exitcond_flatten4_fu_7055_p2() {
    exitcond_flatten4_fu_7055_p2 = (!indvar_flatten3_reg_6938.read().is_01() || !tmp_reg_8217.read().is_01())? sc_lv<1>(): sc_lv<1>(indvar_flatten3_reg_6938.read() == tmp_reg_8217.read());
}

void LOAD_WEIGHT_DMA::thread_exitcond_flatten_fu_7072_p2() {
    exitcond_flatten_fu_7072_p2 = (!indvar_flatten4_reg_6960.read().is_01() || !bound4_reg_8212.read().is_01())? sc_lv<1>(): sc_lv<1>(indvar_flatten4_reg_6960.read() == bound4_reg_8212.read());
}

void LOAD_WEIGHT_DMA::thread_exitcond_flatten_mid_2_fu_7122_p3() {
    exitcond_flatten_mid_2_fu_7122_p3 = (!exitcond_flatten_fu_7072_p2.read()[0].is_01())? sc_lv<1>(): ((exitcond_flatten_fu_7072_p2.read()[0].to_bool())? exitcond_flatten_mid_reg_8228.read(): exitcond_flatten1_fu_7117_p2.read());
}

void LOAD_WEIGHT_DMA::thread_exitcond_flatten_mid_fu_7049_p2() {
    exitcond_flatten_mid_fu_7049_p2 = (!bound_fu_7019_p2.read().is_01() || !ap_const_lv64_0.is_01())? sc_lv<1>(): sc_lv<1>(bound_fu_7019_p2.read() == ap_const_lv64_0);
}

void LOAD_WEIGHT_DMA::thread_exitcond_fu_7105_p2() {
    exitcond_fu_7105_p2 = (!l_reg_7004.read().is_01() || !custom_k.read().is_01())? sc_lv<1>(): sc_lv<1>(l_reg_7004.read() == custom_k.read());
}

void LOAD_WEIGHT_DMA::thread_exitcond_mid1_fu_7110_p3() {
    exitcond_mid1_fu_7110_p3 = (!exitcond_flatten_fu_7072_p2.read()[0].is_01())? sc_lv<1>(): ((exitcond_flatten_fu_7072_p2.read()[0].to_bool())? exitcond_mid_reg_8222.read(): exitcond_fu_7105_p2.read());
}

void LOAD_WEIGHT_DMA::thread_exitcond_mid2_fu_7157_p3() {
    exitcond_mid2_fu_7157_p3 = (!exitcond_flatten_mid_2_fu_7122_p3.read()[0].is_01())? sc_lv<1>(): ((exitcond_flatten_mid_2_fu_7122_p3.read()[0].to_bool())? exitcond_mid_reg_8222.read(): exitcond_mid1_fu_7110_p3.read());
}

void LOAD_WEIGHT_DMA::thread_exitcond_mid_fu_7043_p2() {
    exitcond_mid_fu_7043_p2 = (!custom_k.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): sc_lv<1>(custom_k.read() == ap_const_lv32_0);
}

void LOAD_WEIGHT_DMA::thread_grp_fu_8193_p0() {
    grp_fu_8193_p0 =  (sc_lv<5>) (ap_const_lv8_B);
}

void LOAD_WEIGHT_DMA::thread_grp_fu_8193_p1() {
    grp_fu_8193_p1 = (!exitcond_mid2_fu_7157_p3.read()[0].is_01())? sc_lv<8>(): ((exitcond_mid2_fu_7157_p3.read()[0].to_bool())? tmp_26_fu_7198_p1.read(): tmp_28_fu_7206_p3.read());
}

void LOAD_WEIGHT_DMA::thread_grp_fu_8193_p2() {
    grp_fu_8193_p2 = l_mid2_fu_7190_p3.read().range(8-1, 0);
}

void LOAD_WEIGHT_DMA::thread_i_4_fu_7066_p2() {
    i_4_fu_7066_p2 = (!ap_const_lv6_1.is_01() || !i_reg_6949.read().is_01())? sc_lv<6>(): (sc_biguint<6>(ap_const_lv6_1) + sc_biguint<6>(i_reg_6949.read()));
}

void LOAD_WEIGHT_DMA::thread_i_mid2_fu_7129_p3() {
    i_mid2_fu_7129_p3 = (!exitcond_flatten_fu_7072_p2.read()[0].is_01())? sc_lv<6>(): ((exitcond_flatten_fu_7072_p2.read()[0].to_bool())? i_4_fu_7066_p2.read(): i_reg_6949.read());
}

void LOAD_WEIGHT_DMA::thread_indvar_flatten16_op_fu_8179_p2() {
    indvar_flatten16_op_fu_8179_p2 = (!indvar_flatten4_reg_6960.read().is_01() || !ap_const_lv67_1.is_01())? sc_lv<67>(): (sc_biguint<67>(indvar_flatten4_reg_6960.read()) + sc_biguint<67>(ap_const_lv67_1));
}

void LOAD_WEIGHT_DMA::thread_indvar_flatten_next3_fu_8185_p3() {
    indvar_flatten_next3_fu_8185_p3 = (!exitcond_flatten_fu_7072_p2.read()[0].is_01())? sc_lv<67>(): ((exitcond_flatten_fu_7072_p2.read()[0].to_bool())? ap_const_lv67_1: indvar_flatten16_op_fu_8179_p2.read());
}

void LOAD_WEIGHT_DMA::thread_indvar_flatten_next4_fu_7060_p2() {
    indvar_flatten_next4_fu_7060_p2 = (!indvar_flatten3_reg_6938.read().is_01() || !ap_const_lv72_1.is_01())? sc_lv<72>(): (sc_biguint<72>(indvar_flatten3_reg_6938.read()) + sc_biguint<72>(ap_const_lv72_1));
}

void LOAD_WEIGHT_DMA::thread_indvar_flatten_next_fu_8171_p3() {
    indvar_flatten_next_fu_8171_p3 = (!tmp_19_fu_7143_p2.read()[0].is_01())? sc_lv<64>(): ((tmp_19_fu_7143_p2.read()[0].to_bool())? ap_const_lv64_1: indvar_flatten_op_fu_8165_p2.read());
}

void LOAD_WEIGHT_DMA::thread_indvar_flatten_op_fu_8165_p2() {
    indvar_flatten_op_fu_8165_p2 = (!indvar_flatten_reg_6982.read().is_01() || !ap_const_lv64_1.is_01())? sc_lv<64>(): (sc_biguint<64>(indvar_flatten_reg_6982.read()) + sc_biguint<64>(ap_const_lv64_1));
}

void LOAD_WEIGHT_DMA::thread_input_dma_W_TDATA_blk_n() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0))) {
        input_dma_W_TDATA_blk_n = input_dma_W_TVALID.read();
    } else {
        input_dma_W_TDATA_blk_n = ap_const_logic_1;
    }
}

void LOAD_WEIGHT_DMA::thread_input_dma_W_TREADY() {
    if ((!(esl_seteq<1,1,1>(input_dma_W_TVALID.read(), ap_const_logic_0) && esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0)) && 
         esl_seteq<1,1,1>(exitcond_flatten4_fu_7055_p2.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()))) {
        input_dma_W_TREADY = ap_const_logic_1;
    } else {
        input_dma_W_TREADY = ap_const_logic_0;
    }
}

void LOAD_WEIGHT_DMA::thread_j_3_fu_7137_p2() {
    j_3_fu_7137_p2 = (!ap_const_lv3_1.is_01() || !j_mid_fu_7077_p3.read().is_01())? sc_lv<3>(): (sc_biguint<3>(ap_const_lv3_1) + sc_biguint<3>(j_mid_fu_7077_p3.read()));
}

void LOAD_WEIGHT_DMA::thread_j_mid2_fu_7164_p3() {
    j_mid2_fu_7164_p3 = (!exitcond_flatten_mid_2_fu_7122_p3.read()[0].is_01())? sc_lv<3>(): ((exitcond_flatten_mid_2_fu_7122_p3.read()[0].to_bool())? j_3_fu_7137_p2.read(): j_mid_fu_7077_p3.read());
}

void LOAD_WEIGHT_DMA::thread_j_mid_fu_7077_p3() {
    j_mid_fu_7077_p3 = (!exitcond_flatten_fu_7072_p2.read()[0].is_01())? sc_lv<3>(): ((exitcond_flatten_fu_7072_p2.read()[0].to_bool())? ap_const_lv3_0: j_reg_6971.read());
}

void LOAD_WEIGHT_DMA::thread_l_1_fu_8159_p2() {
    l_1_fu_8159_p2 = (!l_mid2_fu_7190_p3.read().is_01() || !ap_const_lv32_1.is_01())? sc_lv<32>(): (sc_biguint<32>(l_mid2_fu_7190_p3.read()) + sc_biguint<32>(ap_const_lv32_1));
}

void LOAD_WEIGHT_DMA::thread_l_mid2_fu_7190_p3() {
    l_mid2_fu_7190_p3 = (!tmp_25_fu_7184_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_25_fu_7184_p2.read()[0].to_bool())? ap_const_lv32_0: l_reg_7004.read());
}

void LOAD_WEIGHT_DMA::thread_m_1_fu_7172_p2() {
    m_1_fu_7172_p2 = (!ap_const_lv31_1.is_01() || !m_mid_fu_7149_p3.read().is_01())? sc_lv<31>(): (sc_biguint<31>(ap_const_lv31_1) + sc_biguint<31>(m_mid_fu_7149_p3.read()));
}

void LOAD_WEIGHT_DMA::thread_m_mid2_fu_7222_p3() {
    m_mid2_fu_7222_p3 = (!exitcond_mid2_fu_7157_p3.read()[0].is_01())? sc_lv<31>(): ((exitcond_mid2_fu_7157_p3.read()[0].to_bool())? m_1_fu_7172_p2.read(): m_mid_fu_7149_p3.read());
}

void LOAD_WEIGHT_DMA::thread_m_mid_fu_7149_p3() {
    m_mid_fu_7149_p3 = (!tmp_19_fu_7143_p2.read()[0].is_01())? sc_lv<31>(): ((tmp_19_fu_7143_p2.read()[0].to_bool())? ap_const_lv31_0: m_reg_6993.read());
}

void LOAD_WEIGHT_DMA::thread_tmp_19_fu_7143_p2() {
    tmp_19_fu_7143_p2 = (exitcond_flatten_mid_2_fu_7122_p3.read() | exitcond_flatten_fu_7072_p2.read());
}

void LOAD_WEIGHT_DMA::thread_tmp_20_fu_7178_p2() {
    tmp_20_fu_7178_p2 = (exitcond_mid2_fu_7157_p3.read() | exitcond_flatten_mid_2_fu_7122_p3.read());
}

void LOAD_WEIGHT_DMA::thread_tmp_24_cast_fu_7708_p1() {
    tmp_24_cast_fu_7708_p1 = esl_sext<64,8>(grp_fu_8193_p3.read());
}

void LOAD_WEIGHT_DMA::thread_tmp_25_fu_7184_p2() {
    tmp_25_fu_7184_p2 = (tmp_20_fu_7178_p2.read() | exitcond_flatten_fu_7072_p2.read());
}

void LOAD_WEIGHT_DMA::thread_tmp_26_fu_7198_p1() {
    tmp_26_fu_7198_p1 = m_1_fu_7172_p2.read().range(8-1, 0);
}

void LOAD_WEIGHT_DMA::thread_tmp_27_fu_7202_p1() {
    tmp_27_fu_7202_p1 = m_reg_6993.read().range(8-1, 0);
}

void LOAD_WEIGHT_DMA::thread_tmp_28_fu_7206_p3() {
    tmp_28_fu_7206_p3 = (!tmp_19_fu_7143_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_19_fu_7143_p2.read()[0].to_bool())? ap_const_lv8_0: tmp_27_fu_7202_p1.read());
}

void LOAD_WEIGHT_DMA::thread_tmp_30_fu_7234_p1() {
    tmp_30_fu_7234_p1 = input_dma_W_TDATA.read().range(32-1, 0);
}

void LOAD_WEIGHT_DMA::thread_tmp_fu_7035_p3() {
    tmp_fu_7035_p3 = esl_concat<67,5>(bound4_fu_7029_p2.read(), ap_const_lv5_0);
}

void LOAD_WEIGHT_DMA::thread_tmp_t_fu_7091_p2() {
    tmp_t_fu_7091_p2 = (i_reg_6949.read() ^ ap_const_lv6_20);
}

void LOAD_WEIGHT_DMA::thread_tmp_t_mid1_fu_7085_p2() {
    tmp_t_mid1_fu_7085_p2 = (!ap_const_lv6_21.is_01() || !i_reg_6949.read().is_01())? sc_lv<6>(): (sc_bigint<6>(ap_const_lv6_21) + sc_biguint<6>(i_reg_6949.read()));
}

void LOAD_WEIGHT_DMA::thread_tmp_t_mid2_fu_7097_p3() {
    tmp_t_mid2_fu_7097_p3 = (!exitcond_flatten_fu_7072_p2.read()[0].is_01())? sc_lv<6>(): ((exitcond_flatten_fu_7072_p2.read()[0].to_bool())? tmp_t_mid1_fu_7085_p2.read(): tmp_t_fu_7091_p2.read());
}

void LOAD_WEIGHT_DMA::thread_weight_input_dma_dat_1_fu_7476_p1() {
    weight_input_dma_dat_1_fu_7476_p1 = weight_input_dma_dat_2_fu_7466_p4.read();
}

void LOAD_WEIGHT_DMA::thread_weight_input_dma_dat_2_fu_7466_p4() {
    weight_input_dma_dat_2_fu_7466_p4 = input_dma_W_TDATA.read().range(63, 32);
}

void LOAD_WEIGHT_DMA::thread_weight_input_dma_dat_fu_7238_p1() {
    weight_input_dma_dat_fu_7238_p1 = tmp_30_fu_7234_p1.read();
}

}

