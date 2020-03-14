#include "FIRE4.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void FIRE4::thread_IFM_0_V_address0() {
    IFM_0_V_address0 =  (sc_lv<8>) (tmp_290_cast_fu_1554_p1.read());
}

void FIRE4::thread_IFM_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        IFM_0_V_ce0 = ap_const_logic_1;
    } else {
        IFM_0_V_ce0 = ap_const_logic_0;
    }
}

void FIRE4::thread_IFM_1_V_address0() {
    IFM_1_V_address0 =  (sc_lv<8>) (tmp_290_cast_fu_1554_p1.read());
}

void FIRE4::thread_IFM_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        IFM_1_V_ce0 = ap_const_logic_1;
    } else {
        IFM_1_V_ce0 = ap_const_logic_0;
    }
}

void FIRE4::thread_IFM_2_V_address0() {
    IFM_2_V_address0 =  (sc_lv<8>) (tmp_290_cast_fu_1554_p1.read());
}

void FIRE4::thread_IFM_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        IFM_2_V_ce0 = ap_const_logic_1;
    } else {
        IFM_2_V_ce0 = ap_const_logic_0;
    }
}

void FIRE4::thread_IFM_3_V_address0() {
    IFM_3_V_address0 =  (sc_lv<8>) (tmp_290_cast_reg_18982.read());
}

void FIRE4::thread_IFM_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        IFM_3_V_ce0 = ap_const_logic_1;
    } else {
        IFM_3_V_ce0 = ap_const_logic_0;
    }
}

void FIRE4::thread_IFM_4_V_address0() {
    IFM_4_V_address0 =  (sc_lv<8>) (tmp_290_cast_reg_18982.read());
}

void FIRE4::thread_IFM_4_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        IFM_4_V_ce0 = ap_const_logic_1;
    } else {
        IFM_4_V_ce0 = ap_const_logic_0;
    }
}

void FIRE4::thread_IFM_5_V_address0() {
    IFM_5_V_address0 =  (sc_lv<8>) (tmp_290_cast_reg_18982.read());
}

void FIRE4::thread_IFM_5_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        IFM_5_V_ce0 = ap_const_logic_1;
    } else {
        IFM_5_V_ce0 = ap_const_logic_0;
    }
}

void FIRE4::thread_IFM_6_V_address0() {
    IFM_6_V_address0 =  (sc_lv<8>) (tmp_290_cast_reg_18982.read());
}

void FIRE4::thread_IFM_6_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        IFM_6_V_ce0 = ap_const_logic_1;
    } else {
        IFM_6_V_ce0 = ap_const_logic_0;
    }
}

void FIRE4::thread_OFM_0_V_address0() {
    OFM_0_V_address0 =  (sc_lv<8>) (tmp_290_cast_reg_18982.read());
}

void FIRE4::thread_OFM_0_V_address1() {
    OFM_0_V_address1 = ap_reg_pp0_iter2_OFM_0_V_addr_reg_19208.read();
}

void FIRE4::thread_OFM_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        OFM_0_V_ce0 = ap_const_logic_1;
    } else {
        OFM_0_V_ce0 = ap_const_logic_0;
    }
}

void FIRE4::thread_OFM_0_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        OFM_0_V_ce1 = ap_const_logic_1;
    } else {
        OFM_0_V_ce1 = ap_const_logic_0;
    }
}

void FIRE4::thread_OFM_0_V_d1() {
    OFM_0_V_d1 = (!brmerge8_0_6_fu_15838_p2.read()[0].is_01())? sc_lv<26>(): ((brmerge8_0_6_fu_15838_p2.read()[0].to_bool())? p_Val2_17_mux_0_6_fu_15844_p3.read(): p_Val2_17_0_6_66_fu_15852_p3.read());
}

void FIRE4::thread_OFM_0_V_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
         esl_seteq<1,1,1>(ap_reg_pp0_iter2_exitcond_flatten7_reg_18802.read(), ap_const_lv1_0))) {
        OFM_0_V_we1 = ap_const_logic_1;
    } else {
        OFM_0_V_we1 = ap_const_logic_0;
    }
}

void FIRE4::thread_OFM_1_V_address0() {
    OFM_1_V_address0 =  (sc_lv<8>) (tmp_290_cast_reg_18982.read());
}

void FIRE4::thread_OFM_1_V_address1() {
    OFM_1_V_address1 = ap_reg_pp0_iter2_OFM_1_V_addr_reg_19214.read();
}

void FIRE4::thread_OFM_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        OFM_1_V_ce0 = ap_const_logic_1;
    } else {
        OFM_1_V_ce0 = ap_const_logic_0;
    }
}

void FIRE4::thread_OFM_1_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        OFM_1_V_ce1 = ap_const_logic_1;
    } else {
        OFM_1_V_ce1 = ap_const_logic_0;
    }
}

void FIRE4::thread_OFM_1_V_d1() {
    OFM_1_V_d1 = (!brmerge8_1_6_fu_16149_p2.read()[0].is_01())? sc_lv<26>(): ((brmerge8_1_6_fu_16149_p2.read()[0].to_bool())? p_Val2_17_mux_1_6_fu_16155_p3.read(): p_Val2_17_1_6_81_fu_16163_p3.read());
}

void FIRE4::thread_OFM_1_V_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
         esl_seteq<1,1,1>(ap_reg_pp0_iter2_exitcond_flatten7_reg_18802.read(), ap_const_lv1_0))) {
        OFM_1_V_we1 = ap_const_logic_1;
    } else {
        OFM_1_V_we1 = ap_const_logic_0;
    }
}

void FIRE4::thread_OFM_2_V_address0() {
    OFM_2_V_address0 =  (sc_lv<8>) (tmp_290_cast_reg_18982.read());
}

void FIRE4::thread_OFM_2_V_address1() {
    OFM_2_V_address1 = ap_reg_pp0_iter2_OFM_2_V_addr_reg_19220.read();
}

void FIRE4::thread_OFM_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        OFM_2_V_ce0 = ap_const_logic_1;
    } else {
        OFM_2_V_ce0 = ap_const_logic_0;
    }
}

void FIRE4::thread_OFM_2_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        OFM_2_V_ce1 = ap_const_logic_1;
    } else {
        OFM_2_V_ce1 = ap_const_logic_0;
    }
}

void FIRE4::thread_OFM_2_V_d1() {
    OFM_2_V_d1 = (!brmerge8_2_6_fu_16460_p2.read()[0].is_01())? sc_lv<26>(): ((brmerge8_2_6_fu_16460_p2.read()[0].to_bool())? p_Val2_17_mux_2_6_fu_16466_p3.read(): p_Val2_17_2_6_95_fu_16474_p3.read());
}

void FIRE4::thread_OFM_2_V_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
         esl_seteq<1,1,1>(ap_reg_pp0_iter2_exitcond_flatten7_reg_18802.read(), ap_const_lv1_0))) {
        OFM_2_V_we1 = ap_const_logic_1;
    } else {
        OFM_2_V_we1 = ap_const_logic_0;
    }
}

void FIRE4::thread_OFM_3_V_address0() {
    OFM_3_V_address0 =  (sc_lv<8>) (tmp_290_cast_reg_18982.read());
}

void FIRE4::thread_OFM_3_V_address1() {
    OFM_3_V_address1 = ap_reg_pp0_iter2_OFM_3_V_addr_reg_19226.read();
}

void FIRE4::thread_OFM_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        OFM_3_V_ce0 = ap_const_logic_1;
    } else {
        OFM_3_V_ce0 = ap_const_logic_0;
    }
}

void FIRE4::thread_OFM_3_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        OFM_3_V_ce1 = ap_const_logic_1;
    } else {
        OFM_3_V_ce1 = ap_const_logic_0;
    }
}

void FIRE4::thread_OFM_3_V_d1() {
    OFM_3_V_d1 = (!brmerge8_3_6_fu_16771_p2.read()[0].is_01())? sc_lv<26>(): ((brmerge8_3_6_fu_16771_p2.read()[0].to_bool())? p_Val2_17_mux_3_6_fu_16777_p3.read(): p_Val2_17_3_6_109_fu_16785_p3.read());
}

void FIRE4::thread_OFM_3_V_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
         esl_seteq<1,1,1>(ap_reg_pp0_iter2_exitcond_flatten7_reg_18802.read(), ap_const_lv1_0))) {
        OFM_3_V_we1 = ap_const_logic_1;
    } else {
        OFM_3_V_we1 = ap_const_logic_0;
    }
}

void FIRE4::thread_OFM_4_V_address0() {
    OFM_4_V_address0 =  (sc_lv<8>) (tmp_290_cast_reg_18982.read());
}

void FIRE4::thread_OFM_4_V_address1() {
    OFM_4_V_address1 = ap_reg_pp0_iter2_OFM_4_V_addr_reg_19232.read();
}

void FIRE4::thread_OFM_4_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        OFM_4_V_ce0 = ap_const_logic_1;
    } else {
        OFM_4_V_ce0 = ap_const_logic_0;
    }
}

void FIRE4::thread_OFM_4_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        OFM_4_V_ce1 = ap_const_logic_1;
    } else {
        OFM_4_V_ce1 = ap_const_logic_0;
    }
}

void FIRE4::thread_OFM_4_V_d1() {
    OFM_4_V_d1 = (!brmerge8_4_6_fu_17082_p2.read()[0].is_01())? sc_lv<26>(): ((brmerge8_4_6_fu_17082_p2.read()[0].to_bool())? p_Val2_17_mux_4_6_fu_17088_p3.read(): p_Val2_17_4_6_123_fu_17096_p3.read());
}

void FIRE4::thread_OFM_4_V_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
         esl_seteq<1,1,1>(ap_reg_pp0_iter2_exitcond_flatten7_reg_18802.read(), ap_const_lv1_0))) {
        OFM_4_V_we1 = ap_const_logic_1;
    } else {
        OFM_4_V_we1 = ap_const_logic_0;
    }
}

void FIRE4::thread_OFM_5_V_address0() {
    OFM_5_V_address0 =  (sc_lv<8>) (tmp_290_cast_reg_18982.read());
}

void FIRE4::thread_OFM_5_V_address1() {
    OFM_5_V_address1 = ap_reg_pp0_iter2_OFM_5_V_addr_reg_19238.read();
}

void FIRE4::thread_OFM_5_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        OFM_5_V_ce0 = ap_const_logic_1;
    } else {
        OFM_5_V_ce0 = ap_const_logic_0;
    }
}

void FIRE4::thread_OFM_5_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        OFM_5_V_ce1 = ap_const_logic_1;
    } else {
        OFM_5_V_ce1 = ap_const_logic_0;
    }
}

void FIRE4::thread_OFM_5_V_d1() {
    OFM_5_V_d1 = (!brmerge8_5_6_fu_17393_p2.read()[0].is_01())? sc_lv<26>(): ((brmerge8_5_6_fu_17393_p2.read()[0].to_bool())? p_Val2_17_mux_5_6_fu_17399_p3.read(): p_Val2_17_5_6_137_fu_17407_p3.read());
}

void FIRE4::thread_OFM_5_V_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
         esl_seteq<1,1,1>(ap_reg_pp0_iter2_exitcond_flatten7_reg_18802.read(), ap_const_lv1_0))) {
        OFM_5_V_we1 = ap_const_logic_1;
    } else {
        OFM_5_V_we1 = ap_const_logic_0;
    }
}

void FIRE4::thread_OFM_6_V_address0() {
    OFM_6_V_address0 =  (sc_lv<8>) (tmp_290_cast_reg_18982.read());
}

void FIRE4::thread_OFM_6_V_address1() {
    OFM_6_V_address1 = ap_reg_pp0_iter2_OFM_6_V_addr_reg_19244.read();
}

void FIRE4::thread_OFM_6_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        OFM_6_V_ce0 = ap_const_logic_1;
    } else {
        OFM_6_V_ce0 = ap_const_logic_0;
    }
}

void FIRE4::thread_OFM_6_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        OFM_6_V_ce1 = ap_const_logic_1;
    } else {
        OFM_6_V_ce1 = ap_const_logic_0;
    }
}

void FIRE4::thread_OFM_6_V_d1() {
    OFM_6_V_d1 = (!brmerge8_6_6_fu_17704_p2.read()[0].is_01())? sc_lv<26>(): ((brmerge8_6_6_fu_17704_p2.read()[0].to_bool())? p_Val2_17_mux_6_6_fu_17710_p3.read(): p_Val2_17_6_6_151_fu_17718_p3.read());
}

void FIRE4::thread_OFM_6_V_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
         esl_seteq<1,1,1>(ap_reg_pp0_iter2_exitcond_flatten7_reg_18802.read(), ap_const_lv1_0))) {
        OFM_6_V_we1 = ap_const_logic_1;
    } else {
        OFM_6_V_we1 = ap_const_logic_0;
    }
}

void FIRE4::thread_OFM_7_V_address0() {
    OFM_7_V_address0 =  (sc_lv<8>) (tmp_290_cast_reg_18982.read());
}

void FIRE4::thread_OFM_7_V_address1() {
    OFM_7_V_address1 = ap_reg_pp0_iter2_OFM_7_V_addr_reg_19250.read();
}

void FIRE4::thread_OFM_7_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        OFM_7_V_ce0 = ap_const_logic_1;
    } else {
        OFM_7_V_ce0 = ap_const_logic_0;
    }
}

void FIRE4::thread_OFM_7_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        OFM_7_V_ce1 = ap_const_logic_1;
    } else {
        OFM_7_V_ce1 = ap_const_logic_0;
    }
}

void FIRE4::thread_OFM_7_V_d1() {
    OFM_7_V_d1 = (!brmerge8_7_6_fu_18015_p2.read()[0].is_01())? sc_lv<26>(): ((brmerge8_7_6_fu_18015_p2.read()[0].to_bool())? p_Val2_17_mux_7_6_fu_18021_p3.read(): p_Val2_17_7_6_165_fu_18029_p3.read());
}

void FIRE4::thread_OFM_7_V_we1() {
    if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()) && 
         esl_seteq<1,1,1>(ap_reg_pp0_iter2_exitcond_flatten7_reg_18802.read(), ap_const_lv1_0))) {
        OFM_7_V_we1 = ap_const_logic_1;
    } else {
        OFM_7_V_we1 = ap_const_logic_0;
    }
}

void FIRE4::thread_OP2_V_0_1_fu_1808_p1() {
    OP2_V_0_1_fu_1808_p1 = esl_sext<34,26>(IFM_1_V_q0.read());
}

void FIRE4::thread_OP2_V_0_2_fu_2018_p1() {
    OP2_V_0_2_fu_2018_p1 = esl_sext<34,26>(IFM_2_V_q0.read());
}

void FIRE4::thread_OP2_V_0_3_fu_6818_p1() {
    OP2_V_0_3_fu_6818_p1 = esl_sext<34,26>(IFM_3_V_q0.read());
}

void FIRE4::thread_OP2_V_0_4_fu_7064_p1() {
    OP2_V_0_4_fu_7064_p1 = esl_sext<34,26>(IFM_4_V_q0.read());
}

void FIRE4::thread_OP2_V_0_5_fu_7274_p1() {
    OP2_V_0_5_fu_7274_p1 = esl_sext<34,26>(IFM_5_V_q0.read());
}

void FIRE4::thread_OP2_V_0_6_fu_7484_p1() {
    OP2_V_0_6_fu_7484_p1 = esl_sext<34,26>(IFM_6_V_q0.read());
}

void FIRE4::thread_OP2_V_fu_1598_p1() {
    OP2_V_fu_1598_p1 = esl_sext<34,26>(IFM_0_V_q0.read());
}

void FIRE4::thread_WEIGHT1_0_0_V_address0() {
    WEIGHT1_0_0_V_address0 =  (sc_lv<7>) (tmp_287_cast_fu_1447_p1.read());
}

void FIRE4::thread_WEIGHT1_0_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        WEIGHT1_0_0_V_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_0_0_V_ce0 = ap_const_logic_0;
    }
}

void FIRE4::thread_WEIGHT1_0_1_V_address0() {
    WEIGHT1_0_1_V_address0 =  (sc_lv<7>) (tmp_287_cast_fu_1447_p1.read());
}

void FIRE4::thread_WEIGHT1_0_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        WEIGHT1_0_1_V_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_0_1_V_ce0 = ap_const_logic_0;
    }
}

void FIRE4::thread_WEIGHT1_0_2_V_address0() {
    WEIGHT1_0_2_V_address0 =  (sc_lv<7>) (tmp_287_cast_fu_1447_p1.read());
}

void FIRE4::thread_WEIGHT1_0_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        WEIGHT1_0_2_V_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_0_2_V_ce0 = ap_const_logic_0;
    }
}

void FIRE4::thread_WEIGHT1_0_3_V_address0() {
    WEIGHT1_0_3_V_address0 =  (sc_lv<7>) (tmp_287_cast_reg_18816.read());
}

void FIRE4::thread_WEIGHT1_0_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        WEIGHT1_0_3_V_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_0_3_V_ce0 = ap_const_logic_0;
    }
}

void FIRE4::thread_WEIGHT1_0_4_V_address0() {
    WEIGHT1_0_4_V_address0 =  (sc_lv<7>) (tmp_287_cast_reg_18816.read());
}

void FIRE4::thread_WEIGHT1_0_4_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        WEIGHT1_0_4_V_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_0_4_V_ce0 = ap_const_logic_0;
    }
}

void FIRE4::thread_WEIGHT1_0_5_V_address0() {
    WEIGHT1_0_5_V_address0 =  (sc_lv<7>) (tmp_287_cast_reg_18816.read());
}

void FIRE4::thread_WEIGHT1_0_5_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        WEIGHT1_0_5_V_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_0_5_V_ce0 = ap_const_logic_0;
    }
}

void FIRE4::thread_WEIGHT1_0_6_V_address0() {
    WEIGHT1_0_6_V_address0 =  (sc_lv<7>) (tmp_287_cast_reg_18816.read());
}

void FIRE4::thread_WEIGHT1_0_6_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        WEIGHT1_0_6_V_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_0_6_V_ce0 = ap_const_logic_0;
    }
}

void FIRE4::thread_WEIGHT1_1_0_V_address0() {
    WEIGHT1_1_0_V_address0 =  (sc_lv<7>) (tmp_287_cast_fu_1447_p1.read());
}

void FIRE4::thread_WEIGHT1_1_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        WEIGHT1_1_0_V_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_1_0_V_ce0 = ap_const_logic_0;
    }
}

void FIRE4::thread_WEIGHT1_1_1_V_address0() {
    WEIGHT1_1_1_V_address0 =  (sc_lv<7>) (tmp_287_cast_fu_1447_p1.read());
}

void FIRE4::thread_WEIGHT1_1_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        WEIGHT1_1_1_V_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_1_1_V_ce0 = ap_const_logic_0;
    }
}

void FIRE4::thread_WEIGHT1_1_2_V_address0() {
    WEIGHT1_1_2_V_address0 =  (sc_lv<7>) (tmp_287_cast_fu_1447_p1.read());
}

void FIRE4::thread_WEIGHT1_1_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        WEIGHT1_1_2_V_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_1_2_V_ce0 = ap_const_logic_0;
    }
}

void FIRE4::thread_WEIGHT1_1_3_V_address0() {
    WEIGHT1_1_3_V_address0 =  (sc_lv<7>) (tmp_287_cast_reg_18816.read());
}

void FIRE4::thread_WEIGHT1_1_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        WEIGHT1_1_3_V_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_1_3_V_ce0 = ap_const_logic_0;
    }
}

void FIRE4::thread_WEIGHT1_1_4_V_address0() {
    WEIGHT1_1_4_V_address0 =  (sc_lv<7>) (tmp_287_cast_reg_18816.read());
}

void FIRE4::thread_WEIGHT1_1_4_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        WEIGHT1_1_4_V_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_1_4_V_ce0 = ap_const_logic_0;
    }
}

void FIRE4::thread_WEIGHT1_1_5_V_address0() {
    WEIGHT1_1_5_V_address0 =  (sc_lv<7>) (tmp_287_cast_reg_18816.read());
}

void FIRE4::thread_WEIGHT1_1_5_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        WEIGHT1_1_5_V_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_1_5_V_ce0 = ap_const_logic_0;
    }
}

void FIRE4::thread_WEIGHT1_1_6_V_address0() {
    WEIGHT1_1_6_V_address0 =  (sc_lv<7>) (tmp_287_cast_reg_18816.read());
}

void FIRE4::thread_WEIGHT1_1_6_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        WEIGHT1_1_6_V_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_1_6_V_ce0 = ap_const_logic_0;
    }
}

void FIRE4::thread_WEIGHT1_2_0_V_address0() {
    WEIGHT1_2_0_V_address0 =  (sc_lv<7>) (tmp_287_cast_fu_1447_p1.read());
}

void FIRE4::thread_WEIGHT1_2_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        WEIGHT1_2_0_V_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_2_0_V_ce0 = ap_const_logic_0;
    }
}

void FIRE4::thread_WEIGHT1_2_1_V_address0() {
    WEIGHT1_2_1_V_address0 =  (sc_lv<7>) (tmp_287_cast_fu_1447_p1.read());
}

void FIRE4::thread_WEIGHT1_2_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        WEIGHT1_2_1_V_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_2_1_V_ce0 = ap_const_logic_0;
    }
}

void FIRE4::thread_WEIGHT1_2_2_V_address0() {
    WEIGHT1_2_2_V_address0 =  (sc_lv<7>) (tmp_287_cast_fu_1447_p1.read());
}

void FIRE4::thread_WEIGHT1_2_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        WEIGHT1_2_2_V_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_2_2_V_ce0 = ap_const_logic_0;
    }
}

void FIRE4::thread_WEIGHT1_2_3_V_address0() {
    WEIGHT1_2_3_V_address0 =  (sc_lv<7>) (tmp_287_cast_reg_18816.read());
}

void FIRE4::thread_WEIGHT1_2_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        WEIGHT1_2_3_V_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_2_3_V_ce0 = ap_const_logic_0;
    }
}

void FIRE4::thread_WEIGHT1_2_4_V_address0() {
    WEIGHT1_2_4_V_address0 =  (sc_lv<7>) (tmp_287_cast_reg_18816.read());
}

void FIRE4::thread_WEIGHT1_2_4_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        WEIGHT1_2_4_V_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_2_4_V_ce0 = ap_const_logic_0;
    }
}

void FIRE4::thread_WEIGHT1_2_5_V_address0() {
    WEIGHT1_2_5_V_address0 =  (sc_lv<7>) (tmp_287_cast_reg_18816.read());
}

void FIRE4::thread_WEIGHT1_2_5_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        WEIGHT1_2_5_V_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_2_5_V_ce0 = ap_const_logic_0;
    }
}

void FIRE4::thread_WEIGHT1_2_6_V_address0() {
    WEIGHT1_2_6_V_address0 =  (sc_lv<7>) (tmp_287_cast_reg_18816.read());
}

void FIRE4::thread_WEIGHT1_2_6_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        WEIGHT1_2_6_V_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_2_6_V_ce0 = ap_const_logic_0;
    }
}

void FIRE4::thread_WEIGHT1_3_0_V_address0() {
    WEIGHT1_3_0_V_address0 =  (sc_lv<7>) (tmp_287_cast_fu_1447_p1.read());
}

void FIRE4::thread_WEIGHT1_3_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        WEIGHT1_3_0_V_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_3_0_V_ce0 = ap_const_logic_0;
    }
}

void FIRE4::thread_WEIGHT1_3_1_V_address0() {
    WEIGHT1_3_1_V_address0 =  (sc_lv<7>) (tmp_287_cast_fu_1447_p1.read());
}

void FIRE4::thread_WEIGHT1_3_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        WEIGHT1_3_1_V_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_3_1_V_ce0 = ap_const_logic_0;
    }
}

void FIRE4::thread_WEIGHT1_3_2_V_address0() {
    WEIGHT1_3_2_V_address0 =  (sc_lv<7>) (tmp_287_cast_fu_1447_p1.read());
}

void FIRE4::thread_WEIGHT1_3_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        WEIGHT1_3_2_V_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_3_2_V_ce0 = ap_const_logic_0;
    }
}

void FIRE4::thread_WEIGHT1_3_3_V_address0() {
    WEIGHT1_3_3_V_address0 =  (sc_lv<7>) (tmp_287_cast_reg_18816.read());
}

void FIRE4::thread_WEIGHT1_3_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        WEIGHT1_3_3_V_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_3_3_V_ce0 = ap_const_logic_0;
    }
}

void FIRE4::thread_WEIGHT1_3_4_V_address0() {
    WEIGHT1_3_4_V_address0 =  (sc_lv<7>) (tmp_287_cast_reg_18816.read());
}

void FIRE4::thread_WEIGHT1_3_4_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        WEIGHT1_3_4_V_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_3_4_V_ce0 = ap_const_logic_0;
    }
}

void FIRE4::thread_WEIGHT1_3_5_V_address0() {
    WEIGHT1_3_5_V_address0 =  (sc_lv<7>) (tmp_287_cast_reg_18816.read());
}

void FIRE4::thread_WEIGHT1_3_5_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        WEIGHT1_3_5_V_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_3_5_V_ce0 = ap_const_logic_0;
    }
}

void FIRE4::thread_WEIGHT1_3_6_V_address0() {
    WEIGHT1_3_6_V_address0 =  (sc_lv<7>) (tmp_287_cast_reg_18816.read());
}

void FIRE4::thread_WEIGHT1_3_6_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        WEIGHT1_3_6_V_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_3_6_V_ce0 = ap_const_logic_0;
    }
}

void FIRE4::thread_WEIGHT1_4_0_V_address0() {
    WEIGHT1_4_0_V_address0 =  (sc_lv<7>) (tmp_287_cast_fu_1447_p1.read());
}

void FIRE4::thread_WEIGHT1_4_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        WEIGHT1_4_0_V_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_4_0_V_ce0 = ap_const_logic_0;
    }
}

void FIRE4::thread_WEIGHT1_4_1_V_address0() {
    WEIGHT1_4_1_V_address0 =  (sc_lv<7>) (tmp_287_cast_fu_1447_p1.read());
}

void FIRE4::thread_WEIGHT1_4_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        WEIGHT1_4_1_V_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_4_1_V_ce0 = ap_const_logic_0;
    }
}

void FIRE4::thread_WEIGHT1_4_2_V_address0() {
    WEIGHT1_4_2_V_address0 =  (sc_lv<7>) (tmp_287_cast_fu_1447_p1.read());
}

void FIRE4::thread_WEIGHT1_4_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        WEIGHT1_4_2_V_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_4_2_V_ce0 = ap_const_logic_0;
    }
}

void FIRE4::thread_WEIGHT1_4_3_V_address0() {
    WEIGHT1_4_3_V_address0 =  (sc_lv<7>) (tmp_287_cast_reg_18816.read());
}

void FIRE4::thread_WEIGHT1_4_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        WEIGHT1_4_3_V_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_4_3_V_ce0 = ap_const_logic_0;
    }
}

void FIRE4::thread_WEIGHT1_4_4_V_address0() {
    WEIGHT1_4_4_V_address0 =  (sc_lv<7>) (tmp_287_cast_reg_18816.read());
}

void FIRE4::thread_WEIGHT1_4_4_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        WEIGHT1_4_4_V_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_4_4_V_ce0 = ap_const_logic_0;
    }
}

void FIRE4::thread_WEIGHT1_4_5_V_address0() {
    WEIGHT1_4_5_V_address0 =  (sc_lv<7>) (tmp_287_cast_reg_18816.read());
}

void FIRE4::thread_WEIGHT1_4_5_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        WEIGHT1_4_5_V_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_4_5_V_ce0 = ap_const_logic_0;
    }
}

void FIRE4::thread_WEIGHT1_4_6_V_address0() {
    WEIGHT1_4_6_V_address0 =  (sc_lv<7>) (tmp_287_cast_reg_18816.read());
}

void FIRE4::thread_WEIGHT1_4_6_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        WEIGHT1_4_6_V_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_4_6_V_ce0 = ap_const_logic_0;
    }
}

void FIRE4::thread_WEIGHT1_5_0_V_address0() {
    WEIGHT1_5_0_V_address0 =  (sc_lv<7>) (tmp_287_cast_fu_1447_p1.read());
}

void FIRE4::thread_WEIGHT1_5_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        WEIGHT1_5_0_V_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_5_0_V_ce0 = ap_const_logic_0;
    }
}

void FIRE4::thread_WEIGHT1_5_1_V_address0() {
    WEIGHT1_5_1_V_address0 =  (sc_lv<7>) (tmp_287_cast_fu_1447_p1.read());
}

void FIRE4::thread_WEIGHT1_5_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        WEIGHT1_5_1_V_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_5_1_V_ce0 = ap_const_logic_0;
    }
}

void FIRE4::thread_WEIGHT1_5_2_V_address0() {
    WEIGHT1_5_2_V_address0 =  (sc_lv<7>) (tmp_287_cast_fu_1447_p1.read());
}

void FIRE4::thread_WEIGHT1_5_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        WEIGHT1_5_2_V_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_5_2_V_ce0 = ap_const_logic_0;
    }
}

void FIRE4::thread_WEIGHT1_5_3_V_address0() {
    WEIGHT1_5_3_V_address0 =  (sc_lv<7>) (tmp_287_cast_reg_18816.read());
}

void FIRE4::thread_WEIGHT1_5_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        WEIGHT1_5_3_V_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_5_3_V_ce0 = ap_const_logic_0;
    }
}

void FIRE4::thread_WEIGHT1_5_4_V_address0() {
    WEIGHT1_5_4_V_address0 =  (sc_lv<7>) (tmp_287_cast_reg_18816.read());
}

void FIRE4::thread_WEIGHT1_5_4_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        WEIGHT1_5_4_V_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_5_4_V_ce0 = ap_const_logic_0;
    }
}

void FIRE4::thread_WEIGHT1_5_5_V_address0() {
    WEIGHT1_5_5_V_address0 =  (sc_lv<7>) (tmp_287_cast_reg_18816.read());
}

void FIRE4::thread_WEIGHT1_5_5_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        WEIGHT1_5_5_V_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_5_5_V_ce0 = ap_const_logic_0;
    }
}

void FIRE4::thread_WEIGHT1_5_6_V_address0() {
    WEIGHT1_5_6_V_address0 =  (sc_lv<7>) (tmp_287_cast_reg_18816.read());
}

void FIRE4::thread_WEIGHT1_5_6_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        WEIGHT1_5_6_V_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_5_6_V_ce0 = ap_const_logic_0;
    }
}

void FIRE4::thread_WEIGHT1_6_0_V_address0() {
    WEIGHT1_6_0_V_address0 =  (sc_lv<7>) (tmp_287_cast_fu_1447_p1.read());
}

void FIRE4::thread_WEIGHT1_6_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        WEIGHT1_6_0_V_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_6_0_V_ce0 = ap_const_logic_0;
    }
}

void FIRE4::thread_WEIGHT1_6_1_V_address0() {
    WEIGHT1_6_1_V_address0 =  (sc_lv<7>) (tmp_287_cast_fu_1447_p1.read());
}

void FIRE4::thread_WEIGHT1_6_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        WEIGHT1_6_1_V_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_6_1_V_ce0 = ap_const_logic_0;
    }
}

void FIRE4::thread_WEIGHT1_6_2_V_address0() {
    WEIGHT1_6_2_V_address0 =  (sc_lv<7>) (tmp_287_cast_fu_1447_p1.read());
}

void FIRE4::thread_WEIGHT1_6_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        WEIGHT1_6_2_V_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_6_2_V_ce0 = ap_const_logic_0;
    }
}

void FIRE4::thread_WEIGHT1_6_3_V_address0() {
    WEIGHT1_6_3_V_address0 =  (sc_lv<7>) (tmp_287_cast_reg_18816.read());
}

void FIRE4::thread_WEIGHT1_6_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        WEIGHT1_6_3_V_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_6_3_V_ce0 = ap_const_logic_0;
    }
}

void FIRE4::thread_WEIGHT1_6_4_V_address0() {
    WEIGHT1_6_4_V_address0 =  (sc_lv<7>) (tmp_287_cast_reg_18816.read());
}

void FIRE4::thread_WEIGHT1_6_4_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        WEIGHT1_6_4_V_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_6_4_V_ce0 = ap_const_logic_0;
    }
}

void FIRE4::thread_WEIGHT1_6_5_V_address0() {
    WEIGHT1_6_5_V_address0 =  (sc_lv<7>) (tmp_287_cast_reg_18816.read());
}

void FIRE4::thread_WEIGHT1_6_5_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        WEIGHT1_6_5_V_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_6_5_V_ce0 = ap_const_logic_0;
    }
}

void FIRE4::thread_WEIGHT1_6_6_V_address0() {
    WEIGHT1_6_6_V_address0 =  (sc_lv<7>) (tmp_287_cast_reg_18816.read());
}

void FIRE4::thread_WEIGHT1_6_6_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        WEIGHT1_6_6_V_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_6_6_V_ce0 = ap_const_logic_0;
    }
}

void FIRE4::thread_WEIGHT1_7_0_V_address0() {
    WEIGHT1_7_0_V_address0 =  (sc_lv<7>) (tmp_287_cast_fu_1447_p1.read());
}

void FIRE4::thread_WEIGHT1_7_0_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        WEIGHT1_7_0_V_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_7_0_V_ce0 = ap_const_logic_0;
    }
}

void FIRE4::thread_WEIGHT1_7_1_V_address0() {
    WEIGHT1_7_1_V_address0 =  (sc_lv<7>) (tmp_287_cast_fu_1447_p1.read());
}

void FIRE4::thread_WEIGHT1_7_1_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        WEIGHT1_7_1_V_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_7_1_V_ce0 = ap_const_logic_0;
    }
}

void FIRE4::thread_WEIGHT1_7_2_V_address0() {
    WEIGHT1_7_2_V_address0 =  (sc_lv<7>) (tmp_287_cast_fu_1447_p1.read());
}

void FIRE4::thread_WEIGHT1_7_2_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        WEIGHT1_7_2_V_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_7_2_V_ce0 = ap_const_logic_0;
    }
}

void FIRE4::thread_WEIGHT1_7_3_V_address0() {
    WEIGHT1_7_3_V_address0 =  (sc_lv<7>) (tmp_287_cast_reg_18816.read());
}

void FIRE4::thread_WEIGHT1_7_3_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        WEIGHT1_7_3_V_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_7_3_V_ce0 = ap_const_logic_0;
    }
}

void FIRE4::thread_WEIGHT1_7_4_V_address0() {
    WEIGHT1_7_4_V_address0 =  (sc_lv<7>) (tmp_287_cast_reg_18816.read());
}

void FIRE4::thread_WEIGHT1_7_4_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        WEIGHT1_7_4_V_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_7_4_V_ce0 = ap_const_logic_0;
    }
}

void FIRE4::thread_WEIGHT1_7_5_V_address0() {
    WEIGHT1_7_5_V_address0 =  (sc_lv<7>) (tmp_287_cast_reg_18816.read());
}

void FIRE4::thread_WEIGHT1_7_5_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        WEIGHT1_7_5_V_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_7_5_V_ce0 = ap_const_logic_0;
    }
}

void FIRE4::thread_WEIGHT1_7_6_V_address0() {
    WEIGHT1_7_6_V_address0 =  (sc_lv<7>) (tmp_287_cast_reg_18816.read());
}

void FIRE4::thread_WEIGHT1_7_6_V_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        WEIGHT1_7_6_V_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_7_6_V_ce0 = ap_const_logic_0;
    }
}

void FIRE4::thread_ap_CS_fsm_pp0_stage0() {
    ap_CS_fsm_pp0_stage0 = ap_CS_fsm.read()[3];
}

void FIRE4::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void FIRE4::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void FIRE4::thread_ap_CS_fsm_state3() {
    ap_CS_fsm_state3 = ap_CS_fsm.read()[2];
}

void FIRE4::thread_ap_CS_fsm_state8() {
    ap_CS_fsm_state8 = ap_CS_fsm.read()[4];
}

void FIRE4::thread_ap_block_pp0_stage0() {
    ap_block_pp0_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void FIRE4::thread_ap_block_pp0_stage0_11001() {
    ap_block_pp0_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void FIRE4::thread_ap_block_pp0_stage0_subdone() {
    ap_block_pp0_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void FIRE4::thread_ap_block_state4_pp0_stage0_iter0() {
    ap_block_state4_pp0_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void FIRE4::thread_ap_block_state5_pp0_stage0_iter1() {
    ap_block_state5_pp0_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void FIRE4::thread_ap_block_state6_pp0_stage0_iter2() {
    ap_block_state6_pp0_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void FIRE4::thread_ap_block_state7_pp0_stage0_iter3() {
    ap_block_state7_pp0_stage0_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void FIRE4::thread_ap_condition_pp0_exit_iter0_state4() {
    if (esl_seteq<1,1,1>(exitcond_flatten7_fu_1323_p2.read(), ap_const_lv1_1)) {
        ap_condition_pp0_exit_iter0_state4 = ap_const_logic_1;
    } else {
        ap_condition_pp0_exit_iter0_state4 = ap_const_logic_0;
    }
}

void FIRE4::thread_ap_done() {
    if (((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read()))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void FIRE4::thread_ap_enable_pp0() {
    ap_enable_pp0 = (ap_idle_pp0.read() ^ ap_const_logic_1);
}

void FIRE4::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void FIRE4::thread_ap_idle_pp0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter3.read()))) {
        ap_idle_pp0 = ap_const_logic_1;
    } else {
        ap_idle_pp0 = ap_const_logic_0;
    }
}

void FIRE4::thread_ap_phi_mux_i_phi_fu_1159_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(exitcond_flatten7_reg_18802.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_i_phi_fu_1159_p4 = tmp_49_mid2_v_reg_18811.read();
    } else {
        ap_phi_mux_i_phi_fu_1159_p4 = i_reg_1155.read();
    }
}

void FIRE4::thread_ap_ready() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void FIRE4::thread_bound2_fu_1295_p0() {
    bound2_fu_1295_p0 =  (sc_lv<64>) (bound2_fu_1295_p00.read());
}

void FIRE4::thread_bound2_fu_1295_p00() {
    bound2_fu_1295_p00 = esl_zext<96,64>(bound_fu_1281_p2.read());
}

void FIRE4::thread_bound2_fu_1295_p1() {
    bound2_fu_1295_p1 =  (sc_lv<32>) (bound2_fu_1295_p10.read());
}

void FIRE4::thread_bound2_fu_1295_p10() {
    bound2_fu_1295_p10 = esl_zext<96,32>(custom_k.read());
}

void FIRE4::thread_bound2_fu_1295_p2() {
    bound2_fu_1295_p2 = (!bound2_fu_1295_p0.read().is_01() || !bound2_fu_1295_p1.read().is_01())? sc_lv<96>(): sc_biguint<64>(bound2_fu_1295_p0.read()) * sc_biguint<32>(bound2_fu_1295_p1.read());
}

void FIRE4::thread_bound3_fu_1307_p0() {
    bound3_fu_1307_p0 =  (sc_lv<96>) (bound3_fu_1307_p00.read());
}

void FIRE4::thread_bound3_fu_1307_p00() {
    bound3_fu_1307_p00 = esl_zext<128,96>(bound2_reg_18786.read());
}

void FIRE4::thread_bound3_fu_1307_p1() {
    bound3_fu_1307_p1 =  (sc_lv<32>) (bound3_fu_1307_p10.read());
}

void FIRE4::thread_bound3_fu_1307_p10() {
    bound3_fu_1307_p10 = esl_zext<128,32>(custom_k.read());
}

void FIRE4::thread_bound3_fu_1307_p2() {
    bound3_fu_1307_p2 = (!bound3_fu_1307_p0.read().is_01() || !bound3_fu_1307_p1.read().is_01())? sc_lv<128>(): sc_biguint<96>(bound3_fu_1307_p0.read()) * sc_biguint<32>(bound3_fu_1307_p1.read());
}

void FIRE4::thread_bound_fu_1281_p0() {
    bound_fu_1281_p0 =  (sc_lv<32>) (bound_fu_1281_p00.read());
}

void FIRE4::thread_bound_fu_1281_p00() {
    bound_fu_1281_p00 = esl_zext<64,32>(tmp_50_reg_18764.read());
}

void FIRE4::thread_bound_fu_1281_p1() {
    bound_fu_1281_p1 =  (sc_lv<32>) (bound_fu_1281_p10.read());
}

void FIRE4::thread_bound_fu_1281_p10() {
    bound_fu_1281_p10 = esl_zext<64,32>(tmp_48_reg_18759.read());
}

void FIRE4::thread_bound_fu_1281_p2() {
    bound_fu_1281_p2 = (!bound_fu_1281_p0.read().is_01() || !bound_fu_1281_p1.read().is_01())? sc_lv<64>(): sc_biguint<32>(bound_fu_1281_p0.read()) * sc_biguint<32>(bound_fu_1281_p1.read());
}

void FIRE4::thread_brmerge40_demorgan_i_10_fu_7210_p2() {
    brmerge40_demorgan_i_10_fu_7210_p2 = (tmp_265_fu_7146_p3.read() & deleted_ones_0_4_fu_7172_p3.read());
}

void FIRE4::thread_brmerge40_demorgan_i_11_fu_7420_p2() {
    brmerge40_demorgan_i_11_fu_7420_p2 = (tmp_281_fu_7356_p3.read() & deleted_ones_0_5_fu_7382_p3.read());
}

void FIRE4::thread_brmerge40_demorgan_i_12_fu_7630_p2() {
    brmerge40_demorgan_i_12_fu_7630_p2 = (tmp_288_fu_7566_p3.read() & deleted_ones_0_6_fu_7592_p3.read());
}

void FIRE4::thread_brmerge40_demorgan_i_13_fu_2576_p2() {
    brmerge40_demorgan_i_13_fu_2576_p2 = (tmp_302_fu_2512_p3.read() & deleted_ones_1_1_fu_2538_p3.read());
}

void FIRE4::thread_brmerge40_demorgan_i_14_fu_2782_p2() {
    brmerge40_demorgan_i_14_fu_2782_p2 = (tmp_309_fu_2718_p3.read() & deleted_ones_1_2_fu_2744_p3.read());
}

void FIRE4::thread_brmerge40_demorgan_i_15_fu_8100_p2() {
    brmerge40_demorgan_i_15_fu_8100_p2 = (tmp_316_fu_8036_p3.read() & deleted_ones_1_3_fu_8062_p3.read());
}

void FIRE4::thread_brmerge40_demorgan_i_16_fu_8342_p2() {
    brmerge40_demorgan_i_16_fu_8342_p2 = (tmp_323_fu_8278_p3.read() & deleted_ones_1_4_fu_8304_p3.read());
}

void FIRE4::thread_brmerge40_demorgan_i_17_fu_8548_p2() {
    brmerge40_demorgan_i_17_fu_8548_p2 = (tmp_330_fu_8484_p3.read() & deleted_ones_1_5_fu_8510_p3.read());
}

void FIRE4::thread_brmerge40_demorgan_i_18_fu_8754_p2() {
    brmerge40_demorgan_i_18_fu_8754_p2 = (tmp_337_fu_8690_p3.read() & deleted_ones_1_6_fu_8716_p3.read());
}

void FIRE4::thread_brmerge40_demorgan_i_19_fu_3194_p2() {
    brmerge40_demorgan_i_19_fu_3194_p2 = (tmp_351_fu_3130_p3.read() & deleted_ones_2_1_fu_3156_p3.read());
}

void FIRE4::thread_brmerge40_demorgan_i_1_fu_2370_p2() {
    brmerge40_demorgan_i_1_fu_2370_p2 = (tmp_295_fu_2306_p3.read() & deleted_ones_1_fu_2332_p3.read());
}

void FIRE4::thread_brmerge40_demorgan_i_20_fu_3400_p2() {
    brmerge40_demorgan_i_20_fu_3400_p2 = (tmp_358_fu_3336_p3.read() & deleted_ones_2_2_fu_3362_p3.read());
}

void FIRE4::thread_brmerge40_demorgan_i_21_fu_9224_p2() {
    brmerge40_demorgan_i_21_fu_9224_p2 = (tmp_365_fu_9160_p3.read() & deleted_ones_2_3_fu_9186_p3.read());
}

void FIRE4::thread_brmerge40_demorgan_i_22_fu_9466_p2() {
    brmerge40_demorgan_i_22_fu_9466_p2 = (tmp_372_fu_9402_p3.read() & deleted_ones_2_4_fu_9428_p3.read());
}

void FIRE4::thread_brmerge40_demorgan_i_23_fu_9672_p2() {
    brmerge40_demorgan_i_23_fu_9672_p2 = (tmp_379_fu_9608_p3.read() & deleted_ones_2_5_fu_9634_p3.read());
}

void FIRE4::thread_brmerge40_demorgan_i_24_fu_9878_p2() {
    brmerge40_demorgan_i_24_fu_9878_p2 = (tmp_386_fu_9814_p3.read() & deleted_ones_2_6_fu_9840_p3.read());
}

void FIRE4::thread_brmerge40_demorgan_i_25_fu_3812_p2() {
    brmerge40_demorgan_i_25_fu_3812_p2 = (tmp_400_fu_3748_p3.read() & deleted_ones_3_1_fu_3774_p3.read());
}

void FIRE4::thread_brmerge40_demorgan_i_26_fu_4018_p2() {
    brmerge40_demorgan_i_26_fu_4018_p2 = (tmp_407_fu_3954_p3.read() & deleted_ones_3_2_fu_3980_p3.read());
}

void FIRE4::thread_brmerge40_demorgan_i_27_fu_10348_p2() {
    brmerge40_demorgan_i_27_fu_10348_p2 = (tmp_414_fu_10284_p3.read() & deleted_ones_3_3_fu_10310_p3.read());
}

void FIRE4::thread_brmerge40_demorgan_i_28_fu_10590_p2() {
    brmerge40_demorgan_i_28_fu_10590_p2 = (tmp_421_fu_10526_p3.read() & deleted_ones_3_4_fu_10552_p3.read());
}

void FIRE4::thread_brmerge40_demorgan_i_29_fu_10796_p2() {
    brmerge40_demorgan_i_29_fu_10796_p2 = (tmp_428_fu_10732_p3.read() & deleted_ones_3_5_fu_10758_p3.read());
}

void FIRE4::thread_brmerge40_demorgan_i_2_fu_2988_p2() {
    brmerge40_demorgan_i_2_fu_2988_p2 = (tmp_344_fu_2924_p3.read() & deleted_ones_2_fu_2950_p3.read());
}

void FIRE4::thread_brmerge40_demorgan_i_30_fu_11002_p2() {
    brmerge40_demorgan_i_30_fu_11002_p2 = (tmp_435_fu_10938_p3.read() & deleted_ones_3_6_fu_10964_p3.read());
}

void FIRE4::thread_brmerge40_demorgan_i_31_fu_4430_p2() {
    brmerge40_demorgan_i_31_fu_4430_p2 = (tmp_449_fu_4366_p3.read() & deleted_ones_4_1_fu_4392_p3.read());
}

void FIRE4::thread_brmerge40_demorgan_i_32_fu_4636_p2() {
    brmerge40_demorgan_i_32_fu_4636_p2 = (tmp_456_fu_4572_p3.read() & deleted_ones_4_2_fu_4598_p3.read());
}

void FIRE4::thread_brmerge40_demorgan_i_33_fu_11472_p2() {
    brmerge40_demorgan_i_33_fu_11472_p2 = (tmp_463_fu_11408_p3.read() & deleted_ones_4_3_fu_11434_p3.read());
}

void FIRE4::thread_brmerge40_demorgan_i_34_fu_11714_p2() {
    brmerge40_demorgan_i_34_fu_11714_p2 = (tmp_470_fu_11650_p3.read() & deleted_ones_4_4_fu_11676_p3.read());
}

void FIRE4::thread_brmerge40_demorgan_i_35_fu_11920_p2() {
    brmerge40_demorgan_i_35_fu_11920_p2 = (tmp_477_fu_11856_p3.read() & deleted_ones_4_5_fu_11882_p3.read());
}

void FIRE4::thread_brmerge40_demorgan_i_36_fu_12126_p2() {
    brmerge40_demorgan_i_36_fu_12126_p2 = (tmp_484_fu_12062_p3.read() & deleted_ones_4_6_fu_12088_p3.read());
}

void FIRE4::thread_brmerge40_demorgan_i_37_fu_5048_p2() {
    brmerge40_demorgan_i_37_fu_5048_p2 = (tmp_498_fu_4984_p3.read() & deleted_ones_5_1_fu_5010_p3.read());
}

void FIRE4::thread_brmerge40_demorgan_i_38_fu_5254_p2() {
    brmerge40_demorgan_i_38_fu_5254_p2 = (tmp_505_fu_5190_p3.read() & deleted_ones_5_2_fu_5216_p3.read());
}

void FIRE4::thread_brmerge40_demorgan_i_39_fu_12596_p2() {
    brmerge40_demorgan_i_39_fu_12596_p2 = (tmp_512_fu_12532_p3.read() & deleted_ones_5_3_fu_12558_p3.read());
}

void FIRE4::thread_brmerge40_demorgan_i_3_fu_3606_p2() {
    brmerge40_demorgan_i_3_fu_3606_p2 = (tmp_393_fu_3542_p3.read() & deleted_ones_3_fu_3568_p3.read());
}

void FIRE4::thread_brmerge40_demorgan_i_40_fu_12838_p2() {
    brmerge40_demorgan_i_40_fu_12838_p2 = (tmp_519_fu_12774_p3.read() & deleted_ones_5_4_fu_12800_p3.read());
}

void FIRE4::thread_brmerge40_demorgan_i_41_fu_13044_p2() {
    brmerge40_demorgan_i_41_fu_13044_p2 = (tmp_526_fu_12980_p3.read() & deleted_ones_5_5_fu_13006_p3.read());
}

void FIRE4::thread_brmerge40_demorgan_i_42_fu_13250_p2() {
    brmerge40_demorgan_i_42_fu_13250_p2 = (tmp_533_fu_13186_p3.read() & deleted_ones_5_6_fu_13212_p3.read());
}

void FIRE4::thread_brmerge40_demorgan_i_43_fu_5666_p2() {
    brmerge40_demorgan_i_43_fu_5666_p2 = (tmp_547_fu_5602_p3.read() & deleted_ones_6_1_fu_5628_p3.read());
}

void FIRE4::thread_brmerge40_demorgan_i_44_fu_5872_p2() {
    brmerge40_demorgan_i_44_fu_5872_p2 = (tmp_554_fu_5808_p3.read() & deleted_ones_6_2_fu_5834_p3.read());
}

void FIRE4::thread_brmerge40_demorgan_i_45_fu_13720_p2() {
    brmerge40_demorgan_i_45_fu_13720_p2 = (tmp_561_fu_13656_p3.read() & deleted_ones_6_3_fu_13682_p3.read());
}

void FIRE4::thread_brmerge40_demorgan_i_46_fu_13962_p2() {
    brmerge40_demorgan_i_46_fu_13962_p2 = (tmp_568_fu_13898_p3.read() & deleted_ones_6_4_fu_13924_p3.read());
}

void FIRE4::thread_brmerge40_demorgan_i_47_fu_14168_p2() {
    brmerge40_demorgan_i_47_fu_14168_p2 = (tmp_575_fu_14104_p3.read() & deleted_ones_6_5_fu_14130_p3.read());
}

void FIRE4::thread_brmerge40_demorgan_i_48_fu_14374_p2() {
    brmerge40_demorgan_i_48_fu_14374_p2 = (tmp_582_fu_14310_p3.read() & deleted_ones_6_6_fu_14336_p3.read());
}

void FIRE4::thread_brmerge40_demorgan_i_49_fu_6284_p2() {
    brmerge40_demorgan_i_49_fu_6284_p2 = (tmp_596_fu_6220_p3.read() & deleted_ones_7_1_fu_6246_p3.read());
}

void FIRE4::thread_brmerge40_demorgan_i_4_fu_4224_p2() {
    brmerge40_demorgan_i_4_fu_4224_p2 = (tmp_442_fu_4160_p3.read() & deleted_ones_4_fu_4186_p3.read());
}

void FIRE4::thread_brmerge40_demorgan_i_50_fu_6490_p2() {
    brmerge40_demorgan_i_50_fu_6490_p2 = (tmp_603_fu_6426_p3.read() & deleted_ones_7_2_fu_6452_p3.read());
}

void FIRE4::thread_brmerge40_demorgan_i_51_fu_14844_p2() {
    brmerge40_demorgan_i_51_fu_14844_p2 = (tmp_610_fu_14780_p3.read() & deleted_ones_7_3_fu_14806_p3.read());
}

void FIRE4::thread_brmerge40_demorgan_i_52_fu_15086_p2() {
    brmerge40_demorgan_i_52_fu_15086_p2 = (tmp_617_fu_15022_p3.read() & deleted_ones_7_4_fu_15048_p3.read());
}

void FIRE4::thread_brmerge40_demorgan_i_53_fu_15292_p2() {
    brmerge40_demorgan_i_53_fu_15292_p2 = (tmp_624_fu_15228_p3.read() & deleted_ones_7_5_fu_15254_p3.read());
}

void FIRE4::thread_brmerge40_demorgan_i_54_fu_15498_p2() {
    brmerge40_demorgan_i_54_fu_15498_p2 = (tmp_631_fu_15434_p3.read() & deleted_ones_7_6_fu_15460_p3.read());
}

void FIRE4::thread_brmerge40_demorgan_i_55_fu_6964_p2() {
    brmerge40_demorgan_i_55_fu_6964_p2 = (tmp_237_fu_6900_p3.read() & deleted_ones_0_3_fu_6926_p3.read());
}

void FIRE4::thread_brmerge40_demorgan_i_5_fu_4842_p2() {
    brmerge40_demorgan_i_5_fu_4842_p2 = (tmp_491_fu_4778_p3.read() & deleted_ones_5_fu_4804_p3.read());
}

void FIRE4::thread_brmerge40_demorgan_i_6_fu_5460_p2() {
    brmerge40_demorgan_i_6_fu_5460_p2 = (tmp_540_fu_5396_p3.read() & deleted_ones_6_fu_5422_p3.read());
}

void FIRE4::thread_brmerge40_demorgan_i_7_fu_6078_p2() {
    brmerge40_demorgan_i_7_fu_6078_p2 = (tmp_589_fu_6014_p3.read() & deleted_ones_7_fu_6040_p3.read());
}

void FIRE4::thread_brmerge40_demorgan_i_8_fu_1954_p2() {
    brmerge40_demorgan_i_8_fu_1954_p2 = (tmp_181_fu_1890_p3.read() & deleted_ones_0_1_fu_1916_p3.read());
}

void FIRE4::thread_brmerge40_demorgan_i_9_fu_2164_p2() {
    brmerge40_demorgan_i_9_fu_2164_p2 = (tmp_209_fu_2100_p3.read() & deleted_ones_0_2_fu_2126_p3.read());
}

void FIRE4::thread_brmerge40_demorgan_i_fu_1744_p2() {
    brmerge40_demorgan_i_fu_1744_p2 = (tmp_129_fu_1680_p3.read() & deleted_ones_fu_1706_p3.read());
}

void FIRE4::thread_brmerge8_0_1_fu_6696_p2() {
    brmerge8_0_1_fu_6696_p2 = (tmp_189_fu_6664_p3.read() | isneg_not_0_1_fu_6690_p2.read());
}

void FIRE4::thread_brmerge8_0_2_fu_6784_p2() {
    brmerge8_0_2_fu_6784_p2 = (tmp_217_fu_6752_p3.read() | isneg_not_0_2_fu_6778_p2.read());
}

void FIRE4::thread_brmerge8_0_3_fu_15577_p2() {
    brmerge8_0_3_fu_15577_p2 = (tmp_245_reg_19413.read() | isneg_not_0_3_fu_15572_p2.read());
}

void FIRE4::thread_brmerge8_0_4_fu_15662_p2() {
    brmerge8_0_4_fu_15662_p2 = (tmp_273_fu_15630_p3.read() | isneg_not_0_4_fu_15656_p2.read());
}

void FIRE4::thread_brmerge8_0_5_fu_15750_p2() {
    brmerge8_0_5_fu_15750_p2 = (tmp_283_fu_15718_p3.read() | isneg_not_0_5_fu_15744_p2.read());
}

void FIRE4::thread_brmerge8_0_6_fu_15838_p2() {
    brmerge8_0_6_fu_15838_p2 = (tmp_290_fu_15806_p3.read() | isneg_not_0_6_fu_15832_p2.read());
}

void FIRE4::thread_brmerge8_1_1_fu_7836_p2() {
    brmerge8_1_1_fu_7836_p2 = (tmp_304_fu_7804_p3.read() | isneg_not_1_1_fu_7830_p2.read());
}

void FIRE4::thread_brmerge8_1_2_fu_7924_p2() {
    brmerge8_1_2_fu_7924_p2 = (tmp_311_fu_7892_p3.read() | isneg_not_1_2_fu_7918_p2.read());
}

void FIRE4::thread_brmerge8_1_3_fu_15888_p2() {
    brmerge8_1_3_fu_15888_p2 = (tmp_318_reg_19451.read() | isneg_not_1_3_fu_15883_p2.read());
}

void FIRE4::thread_brmerge8_1_4_fu_15973_p2() {
    brmerge8_1_4_fu_15973_p2 = (tmp_325_fu_15941_p3.read() | isneg_not_1_4_fu_15967_p2.read());
}

void FIRE4::thread_brmerge8_1_5_fu_16061_p2() {
    brmerge8_1_5_fu_16061_p2 = (tmp_332_fu_16029_p3.read() | isneg_not_1_5_fu_16055_p2.read());
}

void FIRE4::thread_brmerge8_1_6_fu_16149_p2() {
    brmerge8_1_6_fu_16149_p2 = (tmp_339_fu_16117_p3.read() | isneg_not_1_6_fu_16143_p2.read());
}

void FIRE4::thread_brmerge8_1_fu_7748_p2() {
    brmerge8_1_fu_7748_p2 = (tmp_297_fu_7716_p3.read() | isneg_not_1_fu_7742_p2.read());
}

void FIRE4::thread_brmerge8_2_1_fu_8960_p2() {
    brmerge8_2_1_fu_8960_p2 = (tmp_353_fu_8928_p3.read() | isneg_not_2_1_fu_8954_p2.read());
}

void FIRE4::thread_brmerge8_2_2_fu_9048_p2() {
    brmerge8_2_2_fu_9048_p2 = (tmp_360_fu_9016_p3.read() | isneg_not_2_2_fu_9042_p2.read());
}

void FIRE4::thread_brmerge8_2_3_fu_16199_p2() {
    brmerge8_2_3_fu_16199_p2 = (tmp_367_reg_19489.read() | isneg_not_2_3_fu_16194_p2.read());
}

void FIRE4::thread_brmerge8_2_4_fu_16284_p2() {
    brmerge8_2_4_fu_16284_p2 = (tmp_374_fu_16252_p3.read() | isneg_not_2_4_fu_16278_p2.read());
}

void FIRE4::thread_brmerge8_2_5_fu_16372_p2() {
    brmerge8_2_5_fu_16372_p2 = (tmp_381_fu_16340_p3.read() | isneg_not_2_5_fu_16366_p2.read());
}

void FIRE4::thread_brmerge8_2_6_fu_16460_p2() {
    brmerge8_2_6_fu_16460_p2 = (tmp_388_fu_16428_p3.read() | isneg_not_2_6_fu_16454_p2.read());
}

void FIRE4::thread_brmerge8_2_fu_8872_p2() {
    brmerge8_2_fu_8872_p2 = (tmp_346_fu_8840_p3.read() | isneg_not_2_fu_8866_p2.read());
}

void FIRE4::thread_brmerge8_3_1_fu_10084_p2() {
    brmerge8_3_1_fu_10084_p2 = (tmp_402_fu_10052_p3.read() | isneg_not_3_1_fu_10078_p2.read());
}

void FIRE4::thread_brmerge8_3_2_fu_10172_p2() {
    brmerge8_3_2_fu_10172_p2 = (tmp_409_fu_10140_p3.read() | isneg_not_3_2_fu_10166_p2.read());
}

void FIRE4::thread_brmerge8_3_3_fu_16510_p2() {
    brmerge8_3_3_fu_16510_p2 = (tmp_416_reg_19527.read() | isneg_not_3_3_fu_16505_p2.read());
}

void FIRE4::thread_brmerge8_3_4_fu_16595_p2() {
    brmerge8_3_4_fu_16595_p2 = (tmp_423_fu_16563_p3.read() | isneg_not_3_4_fu_16589_p2.read());
}

void FIRE4::thread_brmerge8_3_5_fu_16683_p2() {
    brmerge8_3_5_fu_16683_p2 = (tmp_430_fu_16651_p3.read() | isneg_not_3_5_fu_16677_p2.read());
}

void FIRE4::thread_brmerge8_3_6_fu_16771_p2() {
    brmerge8_3_6_fu_16771_p2 = (tmp_437_fu_16739_p3.read() | isneg_not_3_6_fu_16765_p2.read());
}

void FIRE4::thread_brmerge8_3_fu_9996_p2() {
    brmerge8_3_fu_9996_p2 = (tmp_395_fu_9964_p3.read() | isneg_not_3_fu_9990_p2.read());
}

void FIRE4::thread_brmerge8_4_1_fu_11208_p2() {
    brmerge8_4_1_fu_11208_p2 = (tmp_451_fu_11176_p3.read() | isneg_not_4_1_fu_11202_p2.read());
}

void FIRE4::thread_brmerge8_4_2_fu_11296_p2() {
    brmerge8_4_2_fu_11296_p2 = (tmp_458_fu_11264_p3.read() | isneg_not_4_2_fu_11290_p2.read());
}

void FIRE4::thread_brmerge8_4_3_fu_16821_p2() {
    brmerge8_4_3_fu_16821_p2 = (tmp_465_reg_19565.read() | isneg_not_4_3_fu_16816_p2.read());
}

void FIRE4::thread_brmerge8_4_4_fu_16906_p2() {
    brmerge8_4_4_fu_16906_p2 = (tmp_472_fu_16874_p3.read() | isneg_not_4_4_fu_16900_p2.read());
}

void FIRE4::thread_brmerge8_4_5_fu_16994_p2() {
    brmerge8_4_5_fu_16994_p2 = (tmp_479_fu_16962_p3.read() | isneg_not_4_5_fu_16988_p2.read());
}

void FIRE4::thread_brmerge8_4_6_fu_17082_p2() {
    brmerge8_4_6_fu_17082_p2 = (tmp_486_fu_17050_p3.read() | isneg_not_4_6_fu_17076_p2.read());
}

void FIRE4::thread_brmerge8_4_fu_11120_p2() {
    brmerge8_4_fu_11120_p2 = (tmp_444_fu_11088_p3.read() | isneg_not_4_fu_11114_p2.read());
}

void FIRE4::thread_brmerge8_5_1_fu_12332_p2() {
    brmerge8_5_1_fu_12332_p2 = (tmp_500_fu_12300_p3.read() | isneg_not_5_1_fu_12326_p2.read());
}

void FIRE4::thread_brmerge8_5_2_fu_12420_p2() {
    brmerge8_5_2_fu_12420_p2 = (tmp_507_fu_12388_p3.read() | isneg_not_5_2_fu_12414_p2.read());
}

void FIRE4::thread_brmerge8_5_3_fu_17132_p2() {
    brmerge8_5_3_fu_17132_p2 = (tmp_514_reg_19603.read() | isneg_not_5_3_fu_17127_p2.read());
}

void FIRE4::thread_brmerge8_5_4_fu_17217_p2() {
    brmerge8_5_4_fu_17217_p2 = (tmp_521_fu_17185_p3.read() | isneg_not_5_4_fu_17211_p2.read());
}

void FIRE4::thread_brmerge8_5_5_fu_17305_p2() {
    brmerge8_5_5_fu_17305_p2 = (tmp_528_fu_17273_p3.read() | isneg_not_5_5_fu_17299_p2.read());
}

void FIRE4::thread_brmerge8_5_6_fu_17393_p2() {
    brmerge8_5_6_fu_17393_p2 = (tmp_535_fu_17361_p3.read() | isneg_not_5_6_fu_17387_p2.read());
}

void FIRE4::thread_brmerge8_5_fu_12244_p2() {
    brmerge8_5_fu_12244_p2 = (tmp_493_fu_12212_p3.read() | isneg_not_5_fu_12238_p2.read());
}

void FIRE4::thread_brmerge8_6_1_fu_13456_p2() {
    brmerge8_6_1_fu_13456_p2 = (tmp_549_fu_13424_p3.read() | isneg_not_6_1_fu_13450_p2.read());
}

void FIRE4::thread_brmerge8_6_2_fu_13544_p2() {
    brmerge8_6_2_fu_13544_p2 = (tmp_556_fu_13512_p3.read() | isneg_not_6_2_fu_13538_p2.read());
}

void FIRE4::thread_brmerge8_6_3_fu_17443_p2() {
    brmerge8_6_3_fu_17443_p2 = (tmp_563_reg_19641.read() | isneg_not_6_3_fu_17438_p2.read());
}

void FIRE4::thread_brmerge8_6_4_fu_17528_p2() {
    brmerge8_6_4_fu_17528_p2 = (tmp_570_fu_17496_p3.read() | isneg_not_6_4_fu_17522_p2.read());
}

void FIRE4::thread_brmerge8_6_5_fu_17616_p2() {
    brmerge8_6_5_fu_17616_p2 = (tmp_577_fu_17584_p3.read() | isneg_not_6_5_fu_17610_p2.read());
}

void FIRE4::thread_brmerge8_6_6_fu_17704_p2() {
    brmerge8_6_6_fu_17704_p2 = (tmp_584_fu_17672_p3.read() | isneg_not_6_6_fu_17698_p2.read());
}

void FIRE4::thread_brmerge8_6_fu_13368_p2() {
    brmerge8_6_fu_13368_p2 = (tmp_542_fu_13336_p3.read() | isneg_not_6_fu_13362_p2.read());
}

void FIRE4::thread_brmerge8_7_1_fu_14580_p2() {
    brmerge8_7_1_fu_14580_p2 = (tmp_598_fu_14548_p3.read() | isneg_not_7_1_fu_14574_p2.read());
}

void FIRE4::thread_brmerge8_7_2_fu_14668_p2() {
    brmerge8_7_2_fu_14668_p2 = (tmp_605_fu_14636_p3.read() | isneg_not_7_2_fu_14662_p2.read());
}

void FIRE4::thread_brmerge8_7_3_fu_17754_p2() {
    brmerge8_7_3_fu_17754_p2 = (tmp_612_reg_19679.read() | isneg_not_7_3_fu_17749_p2.read());
}

void FIRE4::thread_brmerge8_7_4_fu_17839_p2() {
    brmerge8_7_4_fu_17839_p2 = (tmp_619_fu_17807_p3.read() | isneg_not_7_4_fu_17833_p2.read());
}

void FIRE4::thread_brmerge8_7_5_fu_17927_p2() {
    brmerge8_7_5_fu_17927_p2 = (tmp_626_fu_17895_p3.read() | isneg_not_7_5_fu_17921_p2.read());
}

void FIRE4::thread_brmerge8_7_6_fu_18015_p2() {
    brmerge8_7_6_fu_18015_p2 = (tmp_633_fu_17983_p3.read() | isneg_not_7_6_fu_18009_p2.read());
}

void FIRE4::thread_brmerge8_7_fu_14492_p2() {
    brmerge8_7_fu_14492_p2 = (tmp_591_fu_14460_p3.read() | isneg_not_7_fu_14486_p2.read());
}

void FIRE4::thread_brmerge8_fu_6608_p2() {
    brmerge8_fu_6608_p2 = (tmp_157_fu_6576_p3.read() | isneg_not_fu_6602_p2.read());
}

void FIRE4::thread_brmerge_i_0_1_fu_1942_p2() {
    brmerge_i_0_1_fu_1942_p2 = (tmp_181_fu_1890_p3.read() | p_not_i_0_1_fu_1936_p2.read());
}

void FIRE4::thread_brmerge_i_0_2_fu_2152_p2() {
    brmerge_i_0_2_fu_2152_p2 = (tmp_209_fu_2100_p3.read() | p_not_i_0_2_fu_2146_p2.read());
}

void FIRE4::thread_brmerge_i_0_3_fu_6952_p2() {
    brmerge_i_0_3_fu_6952_p2 = (tmp_237_fu_6900_p3.read() | p_not_i_0_3_fu_6946_p2.read());
}

void FIRE4::thread_brmerge_i_0_4_fu_7198_p2() {
    brmerge_i_0_4_fu_7198_p2 = (tmp_265_fu_7146_p3.read() | p_not_i_0_4_fu_7192_p2.read());
}

void FIRE4::thread_brmerge_i_0_5_fu_7408_p2() {
    brmerge_i_0_5_fu_7408_p2 = (tmp_281_fu_7356_p3.read() | p_not_i_0_5_fu_7402_p2.read());
}

void FIRE4::thread_brmerge_i_0_6_fu_7618_p2() {
    brmerge_i_0_6_fu_7618_p2 = (tmp_288_fu_7566_p3.read() | p_not_i_0_6_fu_7612_p2.read());
}

void FIRE4::thread_brmerge_i_1_1_fu_2564_p2() {
    brmerge_i_1_1_fu_2564_p2 = (tmp_302_fu_2512_p3.read() | p_not_i_1_1_fu_2558_p2.read());
}

void FIRE4::thread_brmerge_i_1_2_fu_2770_p2() {
    brmerge_i_1_2_fu_2770_p2 = (tmp_309_fu_2718_p3.read() | p_not_i_1_2_fu_2764_p2.read());
}

void FIRE4::thread_brmerge_i_1_3_fu_8088_p2() {
    brmerge_i_1_3_fu_8088_p2 = (tmp_316_fu_8036_p3.read() | p_not_i_1_3_fu_8082_p2.read());
}

void FIRE4::thread_brmerge_i_1_4_fu_8330_p2() {
    brmerge_i_1_4_fu_8330_p2 = (tmp_323_fu_8278_p3.read() | p_not_i_1_4_fu_8324_p2.read());
}

void FIRE4::thread_brmerge_i_1_5_fu_8536_p2() {
    brmerge_i_1_5_fu_8536_p2 = (tmp_330_fu_8484_p3.read() | p_not_i_1_5_fu_8530_p2.read());
}

void FIRE4::thread_brmerge_i_1_6_fu_8742_p2() {
    brmerge_i_1_6_fu_8742_p2 = (tmp_337_fu_8690_p3.read() | p_not_i_1_6_fu_8736_p2.read());
}

void FIRE4::thread_brmerge_i_1_fu_2358_p2() {
    brmerge_i_1_fu_2358_p2 = (tmp_295_fu_2306_p3.read() | p_not_i_1_fu_2352_p2.read());
}

void FIRE4::thread_brmerge_i_2_1_fu_3182_p2() {
    brmerge_i_2_1_fu_3182_p2 = (tmp_351_fu_3130_p3.read() | p_not_i_2_1_fu_3176_p2.read());
}

void FIRE4::thread_brmerge_i_2_2_fu_3388_p2() {
    brmerge_i_2_2_fu_3388_p2 = (tmp_358_fu_3336_p3.read() | p_not_i_2_2_fu_3382_p2.read());
}

void FIRE4::thread_brmerge_i_2_3_fu_9212_p2() {
    brmerge_i_2_3_fu_9212_p2 = (tmp_365_fu_9160_p3.read() | p_not_i_2_3_fu_9206_p2.read());
}

void FIRE4::thread_brmerge_i_2_4_fu_9454_p2() {
    brmerge_i_2_4_fu_9454_p2 = (tmp_372_fu_9402_p3.read() | p_not_i_2_4_fu_9448_p2.read());
}

void FIRE4::thread_brmerge_i_2_5_fu_9660_p2() {
    brmerge_i_2_5_fu_9660_p2 = (tmp_379_fu_9608_p3.read() | p_not_i_2_5_fu_9654_p2.read());
}

void FIRE4::thread_brmerge_i_2_6_fu_9866_p2() {
    brmerge_i_2_6_fu_9866_p2 = (tmp_386_fu_9814_p3.read() | p_not_i_2_6_fu_9860_p2.read());
}

void FIRE4::thread_brmerge_i_2_fu_2976_p2() {
    brmerge_i_2_fu_2976_p2 = (tmp_344_fu_2924_p3.read() | p_not_i_2_fu_2970_p2.read());
}

void FIRE4::thread_brmerge_i_3_1_fu_3800_p2() {
    brmerge_i_3_1_fu_3800_p2 = (tmp_400_fu_3748_p3.read() | p_not_i_3_1_fu_3794_p2.read());
}

void FIRE4::thread_brmerge_i_3_2_fu_4006_p2() {
    brmerge_i_3_2_fu_4006_p2 = (tmp_407_fu_3954_p3.read() | p_not_i_3_2_fu_4000_p2.read());
}

void FIRE4::thread_brmerge_i_3_3_fu_10336_p2() {
    brmerge_i_3_3_fu_10336_p2 = (tmp_414_fu_10284_p3.read() | p_not_i_3_3_fu_10330_p2.read());
}

void FIRE4::thread_brmerge_i_3_4_fu_10578_p2() {
    brmerge_i_3_4_fu_10578_p2 = (tmp_421_fu_10526_p3.read() | p_not_i_3_4_fu_10572_p2.read());
}

void FIRE4::thread_brmerge_i_3_5_fu_10784_p2() {
    brmerge_i_3_5_fu_10784_p2 = (tmp_428_fu_10732_p3.read() | p_not_i_3_5_fu_10778_p2.read());
}

void FIRE4::thread_brmerge_i_3_6_fu_10990_p2() {
    brmerge_i_3_6_fu_10990_p2 = (tmp_435_fu_10938_p3.read() | p_not_i_3_6_fu_10984_p2.read());
}

void FIRE4::thread_brmerge_i_3_fu_3594_p2() {
    brmerge_i_3_fu_3594_p2 = (tmp_393_fu_3542_p3.read() | p_not_i_3_fu_3588_p2.read());
}

void FIRE4::thread_brmerge_i_4_1_fu_4418_p2() {
    brmerge_i_4_1_fu_4418_p2 = (tmp_449_fu_4366_p3.read() | p_not_i_4_1_fu_4412_p2.read());
}

void FIRE4::thread_brmerge_i_4_2_fu_4624_p2() {
    brmerge_i_4_2_fu_4624_p2 = (tmp_456_fu_4572_p3.read() | p_not_i_4_2_fu_4618_p2.read());
}

void FIRE4::thread_brmerge_i_4_3_fu_11460_p2() {
    brmerge_i_4_3_fu_11460_p2 = (tmp_463_fu_11408_p3.read() | p_not_i_4_3_fu_11454_p2.read());
}

void FIRE4::thread_brmerge_i_4_4_fu_11702_p2() {
    brmerge_i_4_4_fu_11702_p2 = (tmp_470_fu_11650_p3.read() | p_not_i_4_4_fu_11696_p2.read());
}

void FIRE4::thread_brmerge_i_4_5_fu_11908_p2() {
    brmerge_i_4_5_fu_11908_p2 = (tmp_477_fu_11856_p3.read() | p_not_i_4_5_fu_11902_p2.read());
}

void FIRE4::thread_brmerge_i_4_6_fu_12114_p2() {
    brmerge_i_4_6_fu_12114_p2 = (tmp_484_fu_12062_p3.read() | p_not_i_4_6_fu_12108_p2.read());
}

void FIRE4::thread_brmerge_i_4_fu_4212_p2() {
    brmerge_i_4_fu_4212_p2 = (tmp_442_fu_4160_p3.read() | p_not_i_4_fu_4206_p2.read());
}

void FIRE4::thread_brmerge_i_5_1_fu_5036_p2() {
    brmerge_i_5_1_fu_5036_p2 = (tmp_498_fu_4984_p3.read() | p_not_i_5_1_fu_5030_p2.read());
}

void FIRE4::thread_brmerge_i_5_2_fu_5242_p2() {
    brmerge_i_5_2_fu_5242_p2 = (tmp_505_fu_5190_p3.read() | p_not_i_5_2_fu_5236_p2.read());
}

void FIRE4::thread_brmerge_i_5_3_fu_12584_p2() {
    brmerge_i_5_3_fu_12584_p2 = (tmp_512_fu_12532_p3.read() | p_not_i_5_3_fu_12578_p2.read());
}

void FIRE4::thread_brmerge_i_5_4_fu_12826_p2() {
    brmerge_i_5_4_fu_12826_p2 = (tmp_519_fu_12774_p3.read() | p_not_i_5_4_fu_12820_p2.read());
}

void FIRE4::thread_brmerge_i_5_5_fu_13032_p2() {
    brmerge_i_5_5_fu_13032_p2 = (tmp_526_fu_12980_p3.read() | p_not_i_5_5_fu_13026_p2.read());
}

void FIRE4::thread_brmerge_i_5_6_fu_13238_p2() {
    brmerge_i_5_6_fu_13238_p2 = (tmp_533_fu_13186_p3.read() | p_not_i_5_6_fu_13232_p2.read());
}

void FIRE4::thread_brmerge_i_5_fu_4830_p2() {
    brmerge_i_5_fu_4830_p2 = (tmp_491_fu_4778_p3.read() | p_not_i_5_fu_4824_p2.read());
}

void FIRE4::thread_brmerge_i_6_1_fu_5654_p2() {
    brmerge_i_6_1_fu_5654_p2 = (tmp_547_fu_5602_p3.read() | p_not_i_6_1_fu_5648_p2.read());
}

void FIRE4::thread_brmerge_i_6_2_fu_5860_p2() {
    brmerge_i_6_2_fu_5860_p2 = (tmp_554_fu_5808_p3.read() | p_not_i_6_2_fu_5854_p2.read());
}

void FIRE4::thread_brmerge_i_6_3_fu_13708_p2() {
    brmerge_i_6_3_fu_13708_p2 = (tmp_561_fu_13656_p3.read() | p_not_i_6_3_fu_13702_p2.read());
}

void FIRE4::thread_brmerge_i_6_4_fu_13950_p2() {
    brmerge_i_6_4_fu_13950_p2 = (tmp_568_fu_13898_p3.read() | p_not_i_6_4_fu_13944_p2.read());
}

void FIRE4::thread_brmerge_i_6_5_fu_14156_p2() {
    brmerge_i_6_5_fu_14156_p2 = (tmp_575_fu_14104_p3.read() | p_not_i_6_5_fu_14150_p2.read());
}

void FIRE4::thread_brmerge_i_6_6_fu_14362_p2() {
    brmerge_i_6_6_fu_14362_p2 = (tmp_582_fu_14310_p3.read() | p_not_i_6_6_fu_14356_p2.read());
}

void FIRE4::thread_brmerge_i_6_fu_5448_p2() {
    brmerge_i_6_fu_5448_p2 = (tmp_540_fu_5396_p3.read() | p_not_i_6_fu_5442_p2.read());
}

void FIRE4::thread_brmerge_i_7_1_fu_6272_p2() {
    brmerge_i_7_1_fu_6272_p2 = (tmp_596_fu_6220_p3.read() | p_not_i_7_1_fu_6266_p2.read());
}

void FIRE4::thread_brmerge_i_7_2_fu_6478_p2() {
    brmerge_i_7_2_fu_6478_p2 = (tmp_603_fu_6426_p3.read() | p_not_i_7_2_fu_6472_p2.read());
}

void FIRE4::thread_brmerge_i_7_3_fu_14832_p2() {
    brmerge_i_7_3_fu_14832_p2 = (tmp_610_fu_14780_p3.read() | p_not_i_7_3_fu_14826_p2.read());
}

void FIRE4::thread_brmerge_i_7_4_fu_15074_p2() {
    brmerge_i_7_4_fu_15074_p2 = (tmp_617_fu_15022_p3.read() | p_not_i_7_4_fu_15068_p2.read());
}

void FIRE4::thread_brmerge_i_7_5_fu_15280_p2() {
    brmerge_i_7_5_fu_15280_p2 = (tmp_624_fu_15228_p3.read() | p_not_i_7_5_fu_15274_p2.read());
}

void FIRE4::thread_brmerge_i_7_6_fu_15486_p2() {
    brmerge_i_7_6_fu_15486_p2 = (tmp_631_fu_15434_p3.read() | p_not_i_7_6_fu_15480_p2.read());
}

void FIRE4::thread_brmerge_i_7_fu_6066_p2() {
    brmerge_i_7_fu_6066_p2 = (tmp_589_fu_6014_p3.read() | p_not_i_7_fu_6060_p2.read());
}

void FIRE4::thread_brmerge_i_fu_1732_p2() {
    brmerge_i_fu_1732_p2 = (tmp_129_fu_1680_p3.read() | p_not_i_fu_1726_p2.read());
}

void FIRE4::thread_brmerge_i_i3_0_1_fu_6684_p2() {
    brmerge_i_i3_0_1_fu_6684_p2 = (tmp_185_fu_6651_p3.read() ^ tmp_189_fu_6664_p3.read());
}

void FIRE4::thread_brmerge_i_i3_0_2_fu_6772_p2() {
    brmerge_i_i3_0_2_fu_6772_p2 = (tmp_213_fu_6739_p3.read() ^ tmp_217_fu_6752_p3.read());
}

void FIRE4::thread_brmerge_i_i3_0_3_fu_15568_p2() {
    brmerge_i_i3_0_3_fu_15568_p2 = (tmp_241_reg_19400.read() ^ tmp_245_reg_19413.read());
}

void FIRE4::thread_brmerge_i_i3_0_4_fu_15650_p2() {
    brmerge_i_i3_0_4_fu_15650_p2 = (tmp_269_fu_15617_p3.read() ^ tmp_273_fu_15630_p3.read());
}

void FIRE4::thread_brmerge_i_i3_0_5_fu_15738_p2() {
    brmerge_i_i3_0_5_fu_15738_p2 = (tmp_282_fu_15705_p3.read() ^ tmp_283_fu_15718_p3.read());
}

void FIRE4::thread_brmerge_i_i3_0_6_fu_15826_p2() {
    brmerge_i_i3_0_6_fu_15826_p2 = (tmp_289_fu_15793_p3.read() ^ tmp_290_fu_15806_p3.read());
}

void FIRE4::thread_brmerge_i_i3_1_1_fu_7824_p2() {
    brmerge_i_i3_1_1_fu_7824_p2 = (tmp_303_fu_7791_p3.read() ^ tmp_304_fu_7804_p3.read());
}

void FIRE4::thread_brmerge_i_i3_1_2_fu_7912_p2() {
    brmerge_i_i3_1_2_fu_7912_p2 = (tmp_310_fu_7879_p3.read() ^ tmp_311_fu_7892_p3.read());
}

void FIRE4::thread_brmerge_i_i3_1_3_fu_15879_p2() {
    brmerge_i_i3_1_3_fu_15879_p2 = (tmp_317_reg_19438.read() ^ tmp_318_reg_19451.read());
}

void FIRE4::thread_brmerge_i_i3_1_4_fu_15961_p2() {
    brmerge_i_i3_1_4_fu_15961_p2 = (tmp_324_fu_15928_p3.read() ^ tmp_325_fu_15941_p3.read());
}

void FIRE4::thread_brmerge_i_i3_1_5_fu_16049_p2() {
    brmerge_i_i3_1_5_fu_16049_p2 = (tmp_331_fu_16016_p3.read() ^ tmp_332_fu_16029_p3.read());
}

void FIRE4::thread_brmerge_i_i3_1_6_fu_16137_p2() {
    brmerge_i_i3_1_6_fu_16137_p2 = (tmp_338_fu_16104_p3.read() ^ tmp_339_fu_16117_p3.read());
}

void FIRE4::thread_brmerge_i_i3_1_fu_7736_p2() {
    brmerge_i_i3_1_fu_7736_p2 = (tmp_296_fu_7703_p3.read() ^ tmp_297_fu_7716_p3.read());
}

void FIRE4::thread_brmerge_i_i3_2_1_fu_8948_p2() {
    brmerge_i_i3_2_1_fu_8948_p2 = (tmp_352_fu_8915_p3.read() ^ tmp_353_fu_8928_p3.read());
}

void FIRE4::thread_brmerge_i_i3_2_2_fu_9036_p2() {
    brmerge_i_i3_2_2_fu_9036_p2 = (tmp_359_fu_9003_p3.read() ^ tmp_360_fu_9016_p3.read());
}

void FIRE4::thread_brmerge_i_i3_2_3_fu_16190_p2() {
    brmerge_i_i3_2_3_fu_16190_p2 = (tmp_366_reg_19476.read() ^ tmp_367_reg_19489.read());
}

void FIRE4::thread_brmerge_i_i3_2_4_fu_16272_p2() {
    brmerge_i_i3_2_4_fu_16272_p2 = (tmp_373_fu_16239_p3.read() ^ tmp_374_fu_16252_p3.read());
}

void FIRE4::thread_brmerge_i_i3_2_5_fu_16360_p2() {
    brmerge_i_i3_2_5_fu_16360_p2 = (tmp_380_fu_16327_p3.read() ^ tmp_381_fu_16340_p3.read());
}

void FIRE4::thread_brmerge_i_i3_2_6_fu_16448_p2() {
    brmerge_i_i3_2_6_fu_16448_p2 = (tmp_387_fu_16415_p3.read() ^ tmp_388_fu_16428_p3.read());
}

void FIRE4::thread_brmerge_i_i3_2_fu_8860_p2() {
    brmerge_i_i3_2_fu_8860_p2 = (tmp_345_fu_8827_p3.read() ^ tmp_346_fu_8840_p3.read());
}

void FIRE4::thread_brmerge_i_i3_3_1_fu_10072_p2() {
    brmerge_i_i3_3_1_fu_10072_p2 = (tmp_401_fu_10039_p3.read() ^ tmp_402_fu_10052_p3.read());
}

void FIRE4::thread_brmerge_i_i3_3_2_fu_10160_p2() {
    brmerge_i_i3_3_2_fu_10160_p2 = (tmp_408_fu_10127_p3.read() ^ tmp_409_fu_10140_p3.read());
}

void FIRE4::thread_brmerge_i_i3_3_3_fu_16501_p2() {
    brmerge_i_i3_3_3_fu_16501_p2 = (tmp_415_reg_19514.read() ^ tmp_416_reg_19527.read());
}

void FIRE4::thread_brmerge_i_i3_3_4_fu_16583_p2() {
    brmerge_i_i3_3_4_fu_16583_p2 = (tmp_422_fu_16550_p3.read() ^ tmp_423_fu_16563_p3.read());
}

void FIRE4::thread_brmerge_i_i3_3_5_fu_16671_p2() {
    brmerge_i_i3_3_5_fu_16671_p2 = (tmp_429_fu_16638_p3.read() ^ tmp_430_fu_16651_p3.read());
}

void FIRE4::thread_brmerge_i_i3_3_6_fu_16759_p2() {
    brmerge_i_i3_3_6_fu_16759_p2 = (tmp_436_fu_16726_p3.read() ^ tmp_437_fu_16739_p3.read());
}

void FIRE4::thread_brmerge_i_i3_3_fu_9984_p2() {
    brmerge_i_i3_3_fu_9984_p2 = (tmp_394_fu_9951_p3.read() ^ tmp_395_fu_9964_p3.read());
}

void FIRE4::thread_brmerge_i_i3_4_1_fu_11196_p2() {
    brmerge_i_i3_4_1_fu_11196_p2 = (tmp_450_fu_11163_p3.read() ^ tmp_451_fu_11176_p3.read());
}

void FIRE4::thread_brmerge_i_i3_4_2_fu_11284_p2() {
    brmerge_i_i3_4_2_fu_11284_p2 = (tmp_457_fu_11251_p3.read() ^ tmp_458_fu_11264_p3.read());
}

void FIRE4::thread_brmerge_i_i3_4_3_fu_16812_p2() {
    brmerge_i_i3_4_3_fu_16812_p2 = (tmp_464_reg_19552.read() ^ tmp_465_reg_19565.read());
}

void FIRE4::thread_brmerge_i_i3_4_4_fu_16894_p2() {
    brmerge_i_i3_4_4_fu_16894_p2 = (tmp_471_fu_16861_p3.read() ^ tmp_472_fu_16874_p3.read());
}

void FIRE4::thread_brmerge_i_i3_4_5_fu_16982_p2() {
    brmerge_i_i3_4_5_fu_16982_p2 = (tmp_478_fu_16949_p3.read() ^ tmp_479_fu_16962_p3.read());
}

void FIRE4::thread_brmerge_i_i3_4_6_fu_17070_p2() {
    brmerge_i_i3_4_6_fu_17070_p2 = (tmp_485_fu_17037_p3.read() ^ tmp_486_fu_17050_p3.read());
}

void FIRE4::thread_brmerge_i_i3_4_fu_11108_p2() {
    brmerge_i_i3_4_fu_11108_p2 = (tmp_443_fu_11075_p3.read() ^ tmp_444_fu_11088_p3.read());
}

void FIRE4::thread_brmerge_i_i3_5_1_fu_12320_p2() {
    brmerge_i_i3_5_1_fu_12320_p2 = (tmp_499_fu_12287_p3.read() ^ tmp_500_fu_12300_p3.read());
}

void FIRE4::thread_brmerge_i_i3_5_2_fu_12408_p2() {
    brmerge_i_i3_5_2_fu_12408_p2 = (tmp_506_fu_12375_p3.read() ^ tmp_507_fu_12388_p3.read());
}

void FIRE4::thread_brmerge_i_i3_5_3_fu_17123_p2() {
    brmerge_i_i3_5_3_fu_17123_p2 = (tmp_513_reg_19590.read() ^ tmp_514_reg_19603.read());
}

void FIRE4::thread_brmerge_i_i3_5_4_fu_17205_p2() {
    brmerge_i_i3_5_4_fu_17205_p2 = (tmp_520_fu_17172_p3.read() ^ tmp_521_fu_17185_p3.read());
}

void FIRE4::thread_brmerge_i_i3_5_5_fu_17293_p2() {
    brmerge_i_i3_5_5_fu_17293_p2 = (tmp_527_fu_17260_p3.read() ^ tmp_528_fu_17273_p3.read());
}

void FIRE4::thread_brmerge_i_i3_5_6_fu_17381_p2() {
    brmerge_i_i3_5_6_fu_17381_p2 = (tmp_534_fu_17348_p3.read() ^ tmp_535_fu_17361_p3.read());
}

void FIRE4::thread_brmerge_i_i3_5_fu_12232_p2() {
    brmerge_i_i3_5_fu_12232_p2 = (tmp_492_fu_12199_p3.read() ^ tmp_493_fu_12212_p3.read());
}

void FIRE4::thread_brmerge_i_i3_6_1_fu_13444_p2() {
    brmerge_i_i3_6_1_fu_13444_p2 = (tmp_548_fu_13411_p3.read() ^ tmp_549_fu_13424_p3.read());
}

void FIRE4::thread_brmerge_i_i3_6_2_fu_13532_p2() {
    brmerge_i_i3_6_2_fu_13532_p2 = (tmp_555_fu_13499_p3.read() ^ tmp_556_fu_13512_p3.read());
}

void FIRE4::thread_brmerge_i_i3_6_3_fu_17434_p2() {
    brmerge_i_i3_6_3_fu_17434_p2 = (tmp_562_reg_19628.read() ^ tmp_563_reg_19641.read());
}

void FIRE4::thread_brmerge_i_i3_6_4_fu_17516_p2() {
    brmerge_i_i3_6_4_fu_17516_p2 = (tmp_569_fu_17483_p3.read() ^ tmp_570_fu_17496_p3.read());
}

void FIRE4::thread_brmerge_i_i3_6_5_fu_17604_p2() {
    brmerge_i_i3_6_5_fu_17604_p2 = (tmp_576_fu_17571_p3.read() ^ tmp_577_fu_17584_p3.read());
}

void FIRE4::thread_brmerge_i_i3_6_6_fu_17692_p2() {
    brmerge_i_i3_6_6_fu_17692_p2 = (tmp_583_fu_17659_p3.read() ^ tmp_584_fu_17672_p3.read());
}

void FIRE4::thread_brmerge_i_i3_6_fu_13356_p2() {
    brmerge_i_i3_6_fu_13356_p2 = (tmp_541_fu_13323_p3.read() ^ tmp_542_fu_13336_p3.read());
}

void FIRE4::thread_brmerge_i_i3_7_1_fu_14568_p2() {
    brmerge_i_i3_7_1_fu_14568_p2 = (tmp_597_fu_14535_p3.read() ^ tmp_598_fu_14548_p3.read());
}

void FIRE4::thread_brmerge_i_i3_7_2_fu_14656_p2() {
    brmerge_i_i3_7_2_fu_14656_p2 = (tmp_604_fu_14623_p3.read() ^ tmp_605_fu_14636_p3.read());
}

void FIRE4::thread_brmerge_i_i3_7_3_fu_17745_p2() {
    brmerge_i_i3_7_3_fu_17745_p2 = (tmp_611_reg_19666.read() ^ tmp_612_reg_19679.read());
}

void FIRE4::thread_brmerge_i_i3_7_4_fu_17827_p2() {
    brmerge_i_i3_7_4_fu_17827_p2 = (tmp_618_fu_17794_p3.read() ^ tmp_619_fu_17807_p3.read());
}

void FIRE4::thread_brmerge_i_i3_7_5_fu_17915_p2() {
    brmerge_i_i3_7_5_fu_17915_p2 = (tmp_625_fu_17882_p3.read() ^ tmp_626_fu_17895_p3.read());
}

void FIRE4::thread_brmerge_i_i3_7_6_fu_18003_p2() {
    brmerge_i_i3_7_6_fu_18003_p2 = (tmp_632_fu_17970_p3.read() ^ tmp_633_fu_17983_p3.read());
}

void FIRE4::thread_brmerge_i_i3_7_fu_14480_p2() {
    brmerge_i_i3_7_fu_14480_p2 = (tmp_590_fu_14447_p3.read() ^ tmp_591_fu_14460_p3.read());
}

void FIRE4::thread_brmerge_i_i3_fu_6596_p2() {
    brmerge_i_i3_fu_6596_p2 = (tmp_153_fu_6563_p3.read() ^ tmp_157_fu_6576_p3.read());
}

void FIRE4::thread_brmerge_i_i_0_1_fu_1972_p2() {
    brmerge_i_i_0_1_fu_1972_p2 = (underflow_0_1_fu_1966_p2.read() | overflow_0_1_fu_1948_p2.read());
}

void FIRE4::thread_brmerge_i_i_0_2_fu_2182_p2() {
    brmerge_i_i_0_2_fu_2182_p2 = (underflow_0_2_fu_2176_p2.read() | overflow_0_2_fu_2158_p2.read());
}

void FIRE4::thread_brmerge_i_i_0_3_fu_6982_p2() {
    brmerge_i_i_0_3_fu_6982_p2 = (underflow_0_3_fu_6976_p2.read() | overflow_0_3_fu_6958_p2.read());
}

void FIRE4::thread_brmerge_i_i_0_4_fu_7228_p2() {
    brmerge_i_i_0_4_fu_7228_p2 = (underflow_0_4_fu_7222_p2.read() | overflow_0_4_fu_7204_p2.read());
}

void FIRE4::thread_brmerge_i_i_0_5_fu_7438_p2() {
    brmerge_i_i_0_5_fu_7438_p2 = (underflow_0_5_fu_7432_p2.read() | overflow_0_5_fu_7414_p2.read());
}

void FIRE4::thread_brmerge_i_i_0_6_fu_7648_p2() {
    brmerge_i_i_0_6_fu_7648_p2 = (underflow_0_6_fu_7642_p2.read() | overflow_0_6_fu_7624_p2.read());
}

void FIRE4::thread_brmerge_i_i_1_1_fu_2594_p2() {
    brmerge_i_i_1_1_fu_2594_p2 = (underflow_1_1_fu_2588_p2.read() | overflow_1_1_fu_2570_p2.read());
}

void FIRE4::thread_brmerge_i_i_1_2_fu_2800_p2() {
    brmerge_i_i_1_2_fu_2800_p2 = (underflow_1_2_fu_2794_p2.read() | overflow_1_2_fu_2776_p2.read());
}

void FIRE4::thread_brmerge_i_i_1_3_fu_8118_p2() {
    brmerge_i_i_1_3_fu_8118_p2 = (underflow_1_3_fu_8112_p2.read() | overflow_1_3_fu_8094_p2.read());
}

void FIRE4::thread_brmerge_i_i_1_4_fu_8360_p2() {
    brmerge_i_i_1_4_fu_8360_p2 = (underflow_1_4_fu_8354_p2.read() | overflow_1_4_fu_8336_p2.read());
}

void FIRE4::thread_brmerge_i_i_1_5_fu_8566_p2() {
    brmerge_i_i_1_5_fu_8566_p2 = (underflow_1_5_fu_8560_p2.read() | overflow_1_5_fu_8542_p2.read());
}

void FIRE4::thread_brmerge_i_i_1_6_fu_8772_p2() {
    brmerge_i_i_1_6_fu_8772_p2 = (underflow_1_6_fu_8766_p2.read() | overflow_1_6_fu_8748_p2.read());
}

void FIRE4::thread_brmerge_i_i_1_fu_2388_p2() {
    brmerge_i_i_1_fu_2388_p2 = (underflow_1_fu_2382_p2.read() | overflow_1_fu_2364_p2.read());
}

void FIRE4::thread_brmerge_i_i_2_1_fu_3212_p2() {
    brmerge_i_i_2_1_fu_3212_p2 = (underflow_2_1_fu_3206_p2.read() | overflow_2_1_fu_3188_p2.read());
}

void FIRE4::thread_brmerge_i_i_2_2_fu_3418_p2() {
    brmerge_i_i_2_2_fu_3418_p2 = (underflow_2_2_fu_3412_p2.read() | overflow_2_2_fu_3394_p2.read());
}

void FIRE4::thread_brmerge_i_i_2_3_fu_9242_p2() {
    brmerge_i_i_2_3_fu_9242_p2 = (underflow_2_3_fu_9236_p2.read() | overflow_2_3_fu_9218_p2.read());
}

void FIRE4::thread_brmerge_i_i_2_4_fu_9484_p2() {
    brmerge_i_i_2_4_fu_9484_p2 = (underflow_2_4_fu_9478_p2.read() | overflow_2_4_fu_9460_p2.read());
}

void FIRE4::thread_brmerge_i_i_2_5_fu_9690_p2() {
    brmerge_i_i_2_5_fu_9690_p2 = (underflow_2_5_fu_9684_p2.read() | overflow_2_5_fu_9666_p2.read());
}

void FIRE4::thread_brmerge_i_i_2_6_fu_9896_p2() {
    brmerge_i_i_2_6_fu_9896_p2 = (underflow_2_6_fu_9890_p2.read() | overflow_2_6_fu_9872_p2.read());
}

void FIRE4::thread_brmerge_i_i_2_fu_3006_p2() {
    brmerge_i_i_2_fu_3006_p2 = (underflow_2_fu_3000_p2.read() | overflow_2_fu_2982_p2.read());
}

void FIRE4::thread_brmerge_i_i_3_1_fu_3830_p2() {
    brmerge_i_i_3_1_fu_3830_p2 = (underflow_315_1_fu_3824_p2.read() | overflow_314_1_fu_3806_p2.read());
}

void FIRE4::thread_brmerge_i_i_3_2_fu_4036_p2() {
    brmerge_i_i_3_2_fu_4036_p2 = (underflow_315_2_fu_4030_p2.read() | overflow_314_2_fu_4012_p2.read());
}

void FIRE4::thread_brmerge_i_i_3_3_fu_10366_p2() {
    brmerge_i_i_3_3_fu_10366_p2 = (underflow_315_3_fu_10360_p2.read() | overflow_314_3_fu_10342_p2.read());
}

void FIRE4::thread_brmerge_i_i_3_4_fu_10608_p2() {
    brmerge_i_i_3_4_fu_10608_p2 = (underflow_315_4_fu_10602_p2.read() | overflow_314_4_fu_10584_p2.read());
}

void FIRE4::thread_brmerge_i_i_3_5_fu_10814_p2() {
    brmerge_i_i_3_5_fu_10814_p2 = (underflow_315_5_fu_10808_p2.read() | overflow_314_5_fu_10790_p2.read());
}

void FIRE4::thread_brmerge_i_i_3_6_fu_11020_p2() {
    brmerge_i_i_3_6_fu_11020_p2 = (underflow_315_6_fu_11014_p2.read() | overflow_314_6_fu_10996_p2.read());
}

void FIRE4::thread_brmerge_i_i_3_fu_3624_p2() {
    brmerge_i_i_3_fu_3624_p2 = (underflow_s_fu_3618_p2.read() | overflow_s_fu_3600_p2.read());
}

void FIRE4::thread_brmerge_i_i_4_1_fu_4448_p2() {
    brmerge_i_i_4_1_fu_4448_p2 = (underflow_4_1_fu_4442_p2.read() | overflow_4_1_fu_4424_p2.read());
}

void FIRE4::thread_brmerge_i_i_4_2_fu_4654_p2() {
    brmerge_i_i_4_2_fu_4654_p2 = (underflow_4_2_fu_4648_p2.read() | overflow_4_2_fu_4630_p2.read());
}

void FIRE4::thread_brmerge_i_i_4_3_fu_11490_p2() {
    brmerge_i_i_4_3_fu_11490_p2 = (underflow_4_3_fu_11484_p2.read() | overflow_4_3_fu_11466_p2.read());
}

void FIRE4::thread_brmerge_i_i_4_4_fu_11732_p2() {
    brmerge_i_i_4_4_fu_11732_p2 = (underflow_4_4_fu_11726_p2.read() | overflow_4_4_fu_11708_p2.read());
}

void FIRE4::thread_brmerge_i_i_4_5_fu_11938_p2() {
    brmerge_i_i_4_5_fu_11938_p2 = (underflow_4_5_fu_11932_p2.read() | overflow_4_5_fu_11914_p2.read());
}

void FIRE4::thread_brmerge_i_i_4_6_fu_12144_p2() {
    brmerge_i_i_4_6_fu_12144_p2 = (underflow_4_6_fu_12138_p2.read() | overflow_4_6_fu_12120_p2.read());
}

void FIRE4::thread_brmerge_i_i_4_fu_4242_p2() {
    brmerge_i_i_4_fu_4242_p2 = (underflow_4_fu_4236_p2.read() | overflow_4_fu_4218_p2.read());
}

void FIRE4::thread_brmerge_i_i_5_1_fu_5066_p2() {
    brmerge_i_i_5_1_fu_5066_p2 = (underflow_5_1_fu_5060_p2.read() | overflow_5_1_fu_5042_p2.read());
}

void FIRE4::thread_brmerge_i_i_5_2_fu_5272_p2() {
    brmerge_i_i_5_2_fu_5272_p2 = (underflow_5_2_fu_5266_p2.read() | overflow_5_2_fu_5248_p2.read());
}

void FIRE4::thread_brmerge_i_i_5_3_fu_12614_p2() {
    brmerge_i_i_5_3_fu_12614_p2 = (underflow_5_3_fu_12608_p2.read() | overflow_5_3_fu_12590_p2.read());
}

void FIRE4::thread_brmerge_i_i_5_4_fu_12856_p2() {
    brmerge_i_i_5_4_fu_12856_p2 = (underflow_5_4_fu_12850_p2.read() | overflow_5_4_fu_12832_p2.read());
}

void FIRE4::thread_brmerge_i_i_5_5_fu_13062_p2() {
    brmerge_i_i_5_5_fu_13062_p2 = (underflow_5_5_fu_13056_p2.read() | overflow_5_5_fu_13038_p2.read());
}

void FIRE4::thread_brmerge_i_i_5_6_fu_13268_p2() {
    brmerge_i_i_5_6_fu_13268_p2 = (underflow_5_6_fu_13262_p2.read() | overflow_5_6_fu_13244_p2.read());
}

void FIRE4::thread_brmerge_i_i_5_fu_4860_p2() {
    brmerge_i_i_5_fu_4860_p2 = (underflow_5_fu_4854_p2.read() | overflow_5_fu_4836_p2.read());
}

void FIRE4::thread_brmerge_i_i_6_1_fu_5684_p2() {
    brmerge_i_i_6_1_fu_5684_p2 = (underflow_6_1_fu_5678_p2.read() | overflow_6_1_fu_5660_p2.read());
}

void FIRE4::thread_brmerge_i_i_6_2_fu_5890_p2() {
    brmerge_i_i_6_2_fu_5890_p2 = (underflow_6_2_fu_5884_p2.read() | overflow_6_2_fu_5866_p2.read());
}

void FIRE4::thread_brmerge_i_i_6_3_fu_13738_p2() {
    brmerge_i_i_6_3_fu_13738_p2 = (underflow_6_3_fu_13732_p2.read() | overflow_6_3_fu_13714_p2.read());
}

void FIRE4::thread_brmerge_i_i_6_4_fu_13980_p2() {
    brmerge_i_i_6_4_fu_13980_p2 = (underflow_6_4_fu_13974_p2.read() | overflow_6_4_fu_13956_p2.read());
}

void FIRE4::thread_brmerge_i_i_6_5_fu_14186_p2() {
    brmerge_i_i_6_5_fu_14186_p2 = (underflow_6_5_fu_14180_p2.read() | overflow_6_5_fu_14162_p2.read());
}

void FIRE4::thread_brmerge_i_i_6_6_fu_14392_p2() {
    brmerge_i_i_6_6_fu_14392_p2 = (underflow_6_6_fu_14386_p2.read() | overflow_6_6_fu_14368_p2.read());
}

void FIRE4::thread_brmerge_i_i_6_fu_5478_p2() {
    brmerge_i_i_6_fu_5478_p2 = (underflow_6_fu_5472_p2.read() | overflow_6_fu_5454_p2.read());
}

void FIRE4::thread_brmerge_i_i_7_1_fu_6302_p2() {
    brmerge_i_i_7_1_fu_6302_p2 = (underflow_7_1_fu_6296_p2.read() | overflow_7_1_fu_6278_p2.read());
}

void FIRE4::thread_brmerge_i_i_7_2_fu_6508_p2() {
    brmerge_i_i_7_2_fu_6508_p2 = (underflow_7_2_fu_6502_p2.read() | overflow_7_2_fu_6484_p2.read());
}

void FIRE4::thread_brmerge_i_i_7_3_fu_14862_p2() {
    brmerge_i_i_7_3_fu_14862_p2 = (underflow_7_3_fu_14856_p2.read() | overflow_7_3_fu_14838_p2.read());
}

void FIRE4::thread_brmerge_i_i_7_4_fu_15104_p2() {
    brmerge_i_i_7_4_fu_15104_p2 = (underflow_7_4_fu_15098_p2.read() | overflow_7_4_fu_15080_p2.read());
}

void FIRE4::thread_brmerge_i_i_7_5_fu_15310_p2() {
    brmerge_i_i_7_5_fu_15310_p2 = (underflow_7_5_fu_15304_p2.read() | overflow_7_5_fu_15286_p2.read());
}

void FIRE4::thread_brmerge_i_i_7_6_fu_15516_p2() {
    brmerge_i_i_7_6_fu_15516_p2 = (underflow_7_6_fu_15510_p2.read() | overflow_7_6_fu_15492_p2.read());
}

void FIRE4::thread_brmerge_i_i_7_fu_6096_p2() {
    brmerge_i_i_7_fu_6096_p2 = (underflow_7_fu_6090_p2.read() | overflow_7_fu_6072_p2.read());
}

void FIRE4::thread_brmerge_i_i_fu_1762_p2() {
    brmerge_i_i_fu_1762_p2 = (underflow_fu_1756_p2.read() | overflow_fu_1738_p2.read());
}

void FIRE4::thread_carry_4_0_1_fu_1904_p2() {
    carry_4_0_1_fu_1904_p2 = (tmp_173_fu_1835_p3.read() & tmp_98_0_1_fu_1898_p2.read());
}

void FIRE4::thread_carry_4_0_2_fu_2114_p2() {
    carry_4_0_2_fu_2114_p2 = (tmp_201_fu_2045_p3.read() & tmp_98_0_2_fu_2108_p2.read());
}

void FIRE4::thread_carry_4_0_3_fu_6914_p2() {
    carry_4_0_3_fu_6914_p2 = (tmp_229_fu_6845_p3.read() & tmp_98_0_3_fu_6908_p2.read());
}

void FIRE4::thread_carry_4_0_4_fu_7160_p2() {
    carry_4_0_4_fu_7160_p2 = (tmp_257_fu_7091_p3.read() & tmp_98_0_4_fu_7154_p2.read());
}

void FIRE4::thread_carry_4_0_5_fu_7370_p2() {
    carry_4_0_5_fu_7370_p2 = (tmp_279_fu_7301_p3.read() & tmp_98_0_5_fu_7364_p2.read());
}

void FIRE4::thread_carry_4_0_6_fu_7580_p2() {
    carry_4_0_6_fu_7580_p2 = (tmp_286_fu_7511_p3.read() & tmp_98_0_6_fu_7574_p2.read());
}

void FIRE4::thread_carry_4_1_1_fu_2526_p2() {
    carry_4_1_1_fu_2526_p2 = (tmp_300_fu_2457_p3.read() & tmp_98_1_1_fu_2520_p2.read());
}

void FIRE4::thread_carry_4_1_2_fu_2732_p2() {
    carry_4_1_2_fu_2732_p2 = (tmp_307_fu_2663_p3.read() & tmp_98_1_2_fu_2726_p2.read());
}

void FIRE4::thread_carry_4_1_3_fu_8050_p2() {
    carry_4_1_3_fu_8050_p2 = (tmp_314_fu_7981_p3.read() & tmp_98_1_3_fu_8044_p2.read());
}

void FIRE4::thread_carry_4_1_4_fu_8292_p2() {
    carry_4_1_4_fu_8292_p2 = (tmp_321_fu_8223_p3.read() & tmp_98_1_4_fu_8286_p2.read());
}

void FIRE4::thread_carry_4_1_5_fu_8498_p2() {
    carry_4_1_5_fu_8498_p2 = (tmp_328_fu_8429_p3.read() & tmp_98_1_5_fu_8492_p2.read());
}

void FIRE4::thread_carry_4_1_6_fu_8704_p2() {
    carry_4_1_6_fu_8704_p2 = (tmp_335_fu_8635_p3.read() & tmp_98_1_6_fu_8698_p2.read());
}

void FIRE4::thread_carry_4_1_fu_2320_p2() {
    carry_4_1_fu_2320_p2 = (tmp_293_fu_2251_p3.read() & tmp_98_1_fu_2314_p2.read());
}

void FIRE4::thread_carry_4_2_1_fu_3144_p2() {
    carry_4_2_1_fu_3144_p2 = (tmp_349_fu_3075_p3.read() & tmp_98_2_1_fu_3138_p2.read());
}

void FIRE4::thread_carry_4_2_2_fu_3350_p2() {
    carry_4_2_2_fu_3350_p2 = (tmp_356_fu_3281_p3.read() & tmp_98_2_2_fu_3344_p2.read());
}

void FIRE4::thread_carry_4_2_3_fu_9174_p2() {
    carry_4_2_3_fu_9174_p2 = (tmp_363_fu_9105_p3.read() & tmp_98_2_3_fu_9168_p2.read());
}

void FIRE4::thread_carry_4_2_4_fu_9416_p2() {
    carry_4_2_4_fu_9416_p2 = (tmp_370_fu_9347_p3.read() & tmp_98_2_4_fu_9410_p2.read());
}

void FIRE4::thread_carry_4_2_5_fu_9622_p2() {
    carry_4_2_5_fu_9622_p2 = (tmp_377_fu_9553_p3.read() & tmp_98_2_5_fu_9616_p2.read());
}

void FIRE4::thread_carry_4_2_6_fu_9828_p2() {
    carry_4_2_6_fu_9828_p2 = (tmp_384_fu_9759_p3.read() & tmp_98_2_6_fu_9822_p2.read());
}

void FIRE4::thread_carry_4_2_fu_2938_p2() {
    carry_4_2_fu_2938_p2 = (tmp_342_fu_2869_p3.read() & tmp_98_2_fu_2932_p2.read());
}

void FIRE4::thread_carry_4_3_1_fu_3762_p2() {
    carry_4_3_1_fu_3762_p2 = (tmp_398_fu_3693_p3.read() & tmp_98_3_1_fu_3756_p2.read());
}

void FIRE4::thread_carry_4_3_2_fu_3968_p2() {
    carry_4_3_2_fu_3968_p2 = (tmp_405_fu_3899_p3.read() & tmp_98_3_2_fu_3962_p2.read());
}

void FIRE4::thread_carry_4_3_3_fu_10298_p2() {
    carry_4_3_3_fu_10298_p2 = (tmp_412_fu_10229_p3.read() & tmp_98_3_3_fu_10292_p2.read());
}

void FIRE4::thread_carry_4_3_4_fu_10540_p2() {
    carry_4_3_4_fu_10540_p2 = (tmp_419_fu_10471_p3.read() & tmp_98_3_4_fu_10534_p2.read());
}

void FIRE4::thread_carry_4_3_5_fu_10746_p2() {
    carry_4_3_5_fu_10746_p2 = (tmp_426_fu_10677_p3.read() & tmp_98_3_5_fu_10740_p2.read());
}

void FIRE4::thread_carry_4_3_6_fu_10952_p2() {
    carry_4_3_6_fu_10952_p2 = (tmp_433_fu_10883_p3.read() & tmp_98_3_6_fu_10946_p2.read());
}

void FIRE4::thread_carry_4_3_fu_3556_p2() {
    carry_4_3_fu_3556_p2 = (tmp_391_fu_3487_p3.read() & tmp_98_3_fu_3550_p2.read());
}

void FIRE4::thread_carry_4_4_1_fu_4380_p2() {
    carry_4_4_1_fu_4380_p2 = (tmp_447_fu_4311_p3.read() & tmp_98_4_1_fu_4374_p2.read());
}

void FIRE4::thread_carry_4_4_2_fu_4586_p2() {
    carry_4_4_2_fu_4586_p2 = (tmp_454_fu_4517_p3.read() & tmp_98_4_2_fu_4580_p2.read());
}

void FIRE4::thread_carry_4_4_3_fu_11422_p2() {
    carry_4_4_3_fu_11422_p2 = (tmp_461_fu_11353_p3.read() & tmp_98_4_3_fu_11416_p2.read());
}

void FIRE4::thread_carry_4_4_4_fu_11664_p2() {
    carry_4_4_4_fu_11664_p2 = (tmp_468_fu_11595_p3.read() & tmp_98_4_4_fu_11658_p2.read());
}

void FIRE4::thread_carry_4_4_5_fu_11870_p2() {
    carry_4_4_5_fu_11870_p2 = (tmp_475_fu_11801_p3.read() & tmp_98_4_5_fu_11864_p2.read());
}

void FIRE4::thread_carry_4_4_6_fu_12076_p2() {
    carry_4_4_6_fu_12076_p2 = (tmp_482_fu_12007_p3.read() & tmp_98_4_6_fu_12070_p2.read());
}

void FIRE4::thread_carry_4_4_fu_4174_p2() {
    carry_4_4_fu_4174_p2 = (tmp_440_fu_4105_p3.read() & tmp_98_4_fu_4168_p2.read());
}

void FIRE4::thread_carry_4_5_1_fu_4998_p2() {
    carry_4_5_1_fu_4998_p2 = (tmp_496_fu_4929_p3.read() & tmp_98_5_1_fu_4992_p2.read());
}

void FIRE4::thread_carry_4_5_2_fu_5204_p2() {
    carry_4_5_2_fu_5204_p2 = (tmp_503_fu_5135_p3.read() & tmp_98_5_2_fu_5198_p2.read());
}

void FIRE4::thread_carry_4_5_3_fu_12546_p2() {
    carry_4_5_3_fu_12546_p2 = (tmp_510_fu_12477_p3.read() & tmp_98_5_3_fu_12540_p2.read());
}

void FIRE4::thread_carry_4_5_4_fu_12788_p2() {
    carry_4_5_4_fu_12788_p2 = (tmp_517_fu_12719_p3.read() & tmp_98_5_4_fu_12782_p2.read());
}

void FIRE4::thread_carry_4_5_5_fu_12994_p2() {
    carry_4_5_5_fu_12994_p2 = (tmp_524_fu_12925_p3.read() & tmp_98_5_5_fu_12988_p2.read());
}

void FIRE4::thread_carry_4_5_6_fu_13200_p2() {
    carry_4_5_6_fu_13200_p2 = (tmp_531_fu_13131_p3.read() & tmp_98_5_6_fu_13194_p2.read());
}

void FIRE4::thread_carry_4_5_fu_4792_p2() {
    carry_4_5_fu_4792_p2 = (tmp_489_fu_4723_p3.read() & tmp_98_5_fu_4786_p2.read());
}

void FIRE4::thread_carry_4_6_1_fu_5616_p2() {
    carry_4_6_1_fu_5616_p2 = (tmp_545_fu_5547_p3.read() & tmp_98_6_1_fu_5610_p2.read());
}

void FIRE4::thread_carry_4_6_2_fu_5822_p2() {
    carry_4_6_2_fu_5822_p2 = (tmp_552_fu_5753_p3.read() & tmp_98_6_2_fu_5816_p2.read());
}

void FIRE4::thread_carry_4_6_3_fu_13670_p2() {
    carry_4_6_3_fu_13670_p2 = (tmp_559_fu_13601_p3.read() & tmp_98_6_3_fu_13664_p2.read());
}

void FIRE4::thread_carry_4_6_4_fu_13912_p2() {
    carry_4_6_4_fu_13912_p2 = (tmp_566_fu_13843_p3.read() & tmp_98_6_4_fu_13906_p2.read());
}

void FIRE4::thread_carry_4_6_5_fu_14118_p2() {
    carry_4_6_5_fu_14118_p2 = (tmp_573_fu_14049_p3.read() & tmp_98_6_5_fu_14112_p2.read());
}

void FIRE4::thread_carry_4_6_6_fu_14324_p2() {
    carry_4_6_6_fu_14324_p2 = (tmp_580_fu_14255_p3.read() & tmp_98_6_6_fu_14318_p2.read());
}

void FIRE4::thread_carry_4_6_fu_5410_p2() {
    carry_4_6_fu_5410_p2 = (tmp_538_fu_5341_p3.read() & tmp_98_6_fu_5404_p2.read());
}

void FIRE4::thread_carry_4_7_1_fu_6234_p2() {
    carry_4_7_1_fu_6234_p2 = (tmp_594_fu_6165_p3.read() & tmp_98_7_1_fu_6228_p2.read());
}

void FIRE4::thread_carry_4_7_2_fu_6440_p2() {
    carry_4_7_2_fu_6440_p2 = (tmp_601_fu_6371_p3.read() & tmp_98_7_2_fu_6434_p2.read());
}

void FIRE4::thread_carry_4_7_3_fu_14794_p2() {
    carry_4_7_3_fu_14794_p2 = (tmp_608_fu_14725_p3.read() & tmp_98_7_3_fu_14788_p2.read());
}

void FIRE4::thread_carry_4_7_4_fu_15036_p2() {
    carry_4_7_4_fu_15036_p2 = (tmp_615_fu_14967_p3.read() & tmp_98_7_4_fu_15030_p2.read());
}

void FIRE4::thread_carry_4_7_5_fu_15242_p2() {
    carry_4_7_5_fu_15242_p2 = (tmp_622_fu_15173_p3.read() & tmp_98_7_5_fu_15236_p2.read());
}

void FIRE4::thread_carry_4_7_6_fu_15448_p2() {
    carry_4_7_6_fu_15448_p2 = (tmp_629_fu_15379_p3.read() & tmp_98_7_6_fu_15442_p2.read());
}

void FIRE4::thread_carry_4_7_fu_6028_p2() {
    carry_4_7_fu_6028_p2 = (tmp_587_fu_5959_p3.read() & tmp_98_7_fu_6022_p2.read());
}

void FIRE4::thread_carry_4_fu_1694_p2() {
    carry_4_fu_1694_p2 = (tmp_117_fu_1625_p3.read() & tmp_133_fu_1688_p2.read());
}

void FIRE4::thread_deleted_ones_0_1_fu_1916_p3() {
    deleted_ones_0_1_fu_1916_p3 = (!carry_4_0_1_fu_1904_p2.read()[0].is_01())? sc_lv<1>(): ((carry_4_0_1_fu_1904_p2.read()[0].to_bool())? tmp_100_0_1_fu_1910_p2.read(): tmp_165_fu_1812_p3.read());
}

void FIRE4::thread_deleted_ones_0_2_fu_2126_p3() {
    deleted_ones_0_2_fu_2126_p3 = (!carry_4_0_2_fu_2114_p2.read()[0].is_01())? sc_lv<1>(): ((carry_4_0_2_fu_2114_p2.read()[0].to_bool())? tmp_100_0_2_fu_2120_p2.read(): tmp_193_fu_2022_p3.read());
}

void FIRE4::thread_deleted_ones_0_3_fu_6926_p3() {
    deleted_ones_0_3_fu_6926_p3 = (!carry_4_0_3_fu_6914_p2.read()[0].is_01())? sc_lv<1>(): ((carry_4_0_3_fu_6914_p2.read()[0].to_bool())? tmp_100_0_3_fu_6920_p2.read(): tmp_221_fu_6822_p3.read());
}

void FIRE4::thread_deleted_ones_0_4_fu_7172_p3() {
    deleted_ones_0_4_fu_7172_p3 = (!carry_4_0_4_fu_7160_p2.read()[0].is_01())? sc_lv<1>(): ((carry_4_0_4_fu_7160_p2.read()[0].to_bool())? tmp_100_0_4_fu_7166_p2.read(): tmp_249_fu_7068_p3.read());
}

void FIRE4::thread_deleted_ones_0_5_fu_7382_p3() {
    deleted_ones_0_5_fu_7382_p3 = (!carry_4_0_5_fu_7370_p2.read()[0].is_01())? sc_lv<1>(): ((carry_4_0_5_fu_7370_p2.read()[0].to_bool())? tmp_100_0_5_fu_7376_p2.read(): tmp_277_fu_7278_p3.read());
}

void FIRE4::thread_deleted_ones_0_6_fu_7592_p3() {
    deleted_ones_0_6_fu_7592_p3 = (!carry_4_0_6_fu_7580_p2.read()[0].is_01())? sc_lv<1>(): ((carry_4_0_6_fu_7580_p2.read()[0].to_bool())? tmp_100_0_6_fu_7586_p2.read(): tmp_284_fu_7488_p3.read());
}

void FIRE4::thread_deleted_ones_1_1_fu_2538_p3() {
    deleted_ones_1_1_fu_2538_p3 = (!carry_4_1_1_fu_2526_p2.read()[0].is_01())? sc_lv<1>(): ((carry_4_1_1_fu_2526_p2.read()[0].to_bool())? tmp_100_1_1_fu_2532_p2.read(): tmp_298_fu_2434_p3.read());
}

void FIRE4::thread_deleted_ones_1_2_fu_2744_p3() {
    deleted_ones_1_2_fu_2744_p3 = (!carry_4_1_2_fu_2732_p2.read()[0].is_01())? sc_lv<1>(): ((carry_4_1_2_fu_2732_p2.read()[0].to_bool())? tmp_100_1_2_fu_2738_p2.read(): tmp_305_fu_2640_p3.read());
}

void FIRE4::thread_deleted_ones_1_3_fu_8062_p3() {
    deleted_ones_1_3_fu_8062_p3 = (!carry_4_1_3_fu_8050_p2.read()[0].is_01())? sc_lv<1>(): ((carry_4_1_3_fu_8050_p2.read()[0].to_bool())? tmp_100_1_3_fu_8056_p2.read(): tmp_312_fu_7958_p3.read());
}

void FIRE4::thread_deleted_ones_1_4_fu_8304_p3() {
    deleted_ones_1_4_fu_8304_p3 = (!carry_4_1_4_fu_8292_p2.read()[0].is_01())? sc_lv<1>(): ((carry_4_1_4_fu_8292_p2.read()[0].to_bool())? tmp_100_1_4_fu_8298_p2.read(): tmp_319_fu_8200_p3.read());
}

void FIRE4::thread_deleted_ones_1_5_fu_8510_p3() {
    deleted_ones_1_5_fu_8510_p3 = (!carry_4_1_5_fu_8498_p2.read()[0].is_01())? sc_lv<1>(): ((carry_4_1_5_fu_8498_p2.read()[0].to_bool())? tmp_100_1_5_fu_8504_p2.read(): tmp_326_fu_8406_p3.read());
}

void FIRE4::thread_deleted_ones_1_6_fu_8716_p3() {
    deleted_ones_1_6_fu_8716_p3 = (!carry_4_1_6_fu_8704_p2.read()[0].is_01())? sc_lv<1>(): ((carry_4_1_6_fu_8704_p2.read()[0].to_bool())? tmp_100_1_6_fu_8710_p2.read(): tmp_333_fu_8612_p3.read());
}

void FIRE4::thread_deleted_ones_1_fu_2332_p3() {
    deleted_ones_1_fu_2332_p3 = (!carry_4_1_fu_2320_p2.read()[0].is_01())? sc_lv<1>(): ((carry_4_1_fu_2320_p2.read()[0].to_bool())? tmp_100_1_fu_2326_p2.read(): tmp_291_fu_2228_p3.read());
}

void FIRE4::thread_deleted_ones_2_1_fu_3156_p3() {
    deleted_ones_2_1_fu_3156_p3 = (!carry_4_2_1_fu_3144_p2.read()[0].is_01())? sc_lv<1>(): ((carry_4_2_1_fu_3144_p2.read()[0].to_bool())? tmp_100_2_1_fu_3150_p2.read(): tmp_347_fu_3052_p3.read());
}

void FIRE4::thread_deleted_ones_2_2_fu_3362_p3() {
    deleted_ones_2_2_fu_3362_p3 = (!carry_4_2_2_fu_3350_p2.read()[0].is_01())? sc_lv<1>(): ((carry_4_2_2_fu_3350_p2.read()[0].to_bool())? tmp_100_2_2_fu_3356_p2.read(): tmp_354_fu_3258_p3.read());
}

void FIRE4::thread_deleted_ones_2_3_fu_9186_p3() {
    deleted_ones_2_3_fu_9186_p3 = (!carry_4_2_3_fu_9174_p2.read()[0].is_01())? sc_lv<1>(): ((carry_4_2_3_fu_9174_p2.read()[0].to_bool())? tmp_100_2_3_fu_9180_p2.read(): tmp_361_fu_9082_p3.read());
}

void FIRE4::thread_deleted_ones_2_4_fu_9428_p3() {
    deleted_ones_2_4_fu_9428_p3 = (!carry_4_2_4_fu_9416_p2.read()[0].is_01())? sc_lv<1>(): ((carry_4_2_4_fu_9416_p2.read()[0].to_bool())? tmp_100_2_4_fu_9422_p2.read(): tmp_368_fu_9324_p3.read());
}

void FIRE4::thread_deleted_ones_2_5_fu_9634_p3() {
    deleted_ones_2_5_fu_9634_p3 = (!carry_4_2_5_fu_9622_p2.read()[0].is_01())? sc_lv<1>(): ((carry_4_2_5_fu_9622_p2.read()[0].to_bool())? tmp_100_2_5_fu_9628_p2.read(): tmp_375_fu_9530_p3.read());
}

void FIRE4::thread_deleted_ones_2_6_fu_9840_p3() {
    deleted_ones_2_6_fu_9840_p3 = (!carry_4_2_6_fu_9828_p2.read()[0].is_01())? sc_lv<1>(): ((carry_4_2_6_fu_9828_p2.read()[0].to_bool())? tmp_100_2_6_fu_9834_p2.read(): tmp_382_fu_9736_p3.read());
}

void FIRE4::thread_deleted_ones_2_fu_2950_p3() {
    deleted_ones_2_fu_2950_p3 = (!carry_4_2_fu_2938_p2.read()[0].is_01())? sc_lv<1>(): ((carry_4_2_fu_2938_p2.read()[0].to_bool())? tmp_100_2_fu_2944_p2.read(): tmp_340_fu_2846_p3.read());
}

void FIRE4::thread_deleted_ones_3_1_fu_3774_p3() {
    deleted_ones_3_1_fu_3774_p3 = (!carry_4_3_1_fu_3762_p2.read()[0].is_01())? sc_lv<1>(): ((carry_4_3_1_fu_3762_p2.read()[0].to_bool())? tmp_100_3_1_fu_3768_p2.read(): tmp_396_fu_3670_p3.read());
}

void FIRE4::thread_deleted_ones_3_2_fu_3980_p3() {
    deleted_ones_3_2_fu_3980_p3 = (!carry_4_3_2_fu_3968_p2.read()[0].is_01())? sc_lv<1>(): ((carry_4_3_2_fu_3968_p2.read()[0].to_bool())? tmp_100_3_2_fu_3974_p2.read(): tmp_403_fu_3876_p3.read());
}

void FIRE4::thread_deleted_ones_3_3_fu_10310_p3() {
    deleted_ones_3_3_fu_10310_p3 = (!carry_4_3_3_fu_10298_p2.read()[0].is_01())? sc_lv<1>(): ((carry_4_3_3_fu_10298_p2.read()[0].to_bool())? tmp_100_3_3_fu_10304_p2.read(): tmp_410_fu_10206_p3.read());
}

void FIRE4::thread_deleted_ones_3_4_fu_10552_p3() {
    deleted_ones_3_4_fu_10552_p3 = (!carry_4_3_4_fu_10540_p2.read()[0].is_01())? sc_lv<1>(): ((carry_4_3_4_fu_10540_p2.read()[0].to_bool())? tmp_100_3_4_fu_10546_p2.read(): tmp_417_fu_10448_p3.read());
}

void FIRE4::thread_deleted_ones_3_5_fu_10758_p3() {
    deleted_ones_3_5_fu_10758_p3 = (!carry_4_3_5_fu_10746_p2.read()[0].is_01())? sc_lv<1>(): ((carry_4_3_5_fu_10746_p2.read()[0].to_bool())? tmp_100_3_5_fu_10752_p2.read(): tmp_424_fu_10654_p3.read());
}

void FIRE4::thread_deleted_ones_3_6_fu_10964_p3() {
    deleted_ones_3_6_fu_10964_p3 = (!carry_4_3_6_fu_10952_p2.read()[0].is_01())? sc_lv<1>(): ((carry_4_3_6_fu_10952_p2.read()[0].to_bool())? tmp_100_3_6_fu_10958_p2.read(): tmp_431_fu_10860_p3.read());
}

void FIRE4::thread_deleted_ones_3_fu_3568_p3() {
    deleted_ones_3_fu_3568_p3 = (!carry_4_3_fu_3556_p2.read()[0].is_01())? sc_lv<1>(): ((carry_4_3_fu_3556_p2.read()[0].to_bool())? tmp_100_3_fu_3562_p2.read(): tmp_389_fu_3464_p3.read());
}

void FIRE4::thread_deleted_ones_4_1_fu_4392_p3() {
    deleted_ones_4_1_fu_4392_p3 = (!carry_4_4_1_fu_4380_p2.read()[0].is_01())? sc_lv<1>(): ((carry_4_4_1_fu_4380_p2.read()[0].to_bool())? tmp_100_4_1_fu_4386_p2.read(): tmp_445_fu_4288_p3.read());
}

void FIRE4::thread_deleted_ones_4_2_fu_4598_p3() {
    deleted_ones_4_2_fu_4598_p3 = (!carry_4_4_2_fu_4586_p2.read()[0].is_01())? sc_lv<1>(): ((carry_4_4_2_fu_4586_p2.read()[0].to_bool())? tmp_100_4_2_fu_4592_p2.read(): tmp_452_fu_4494_p3.read());
}

void FIRE4::thread_deleted_ones_4_3_fu_11434_p3() {
    deleted_ones_4_3_fu_11434_p3 = (!carry_4_4_3_fu_11422_p2.read()[0].is_01())? sc_lv<1>(): ((carry_4_4_3_fu_11422_p2.read()[0].to_bool())? tmp_100_4_3_fu_11428_p2.read(): tmp_459_fu_11330_p3.read());
}

void FIRE4::thread_deleted_ones_4_4_fu_11676_p3() {
    deleted_ones_4_4_fu_11676_p3 = (!carry_4_4_4_fu_11664_p2.read()[0].is_01())? sc_lv<1>(): ((carry_4_4_4_fu_11664_p2.read()[0].to_bool())? tmp_100_4_4_fu_11670_p2.read(): tmp_466_fu_11572_p3.read());
}

void FIRE4::thread_deleted_ones_4_5_fu_11882_p3() {
    deleted_ones_4_5_fu_11882_p3 = (!carry_4_4_5_fu_11870_p2.read()[0].is_01())? sc_lv<1>(): ((carry_4_4_5_fu_11870_p2.read()[0].to_bool())? tmp_100_4_5_fu_11876_p2.read(): tmp_473_fu_11778_p3.read());
}

void FIRE4::thread_deleted_ones_4_6_fu_12088_p3() {
    deleted_ones_4_6_fu_12088_p3 = (!carry_4_4_6_fu_12076_p2.read()[0].is_01())? sc_lv<1>(): ((carry_4_4_6_fu_12076_p2.read()[0].to_bool())? tmp_100_4_6_fu_12082_p2.read(): tmp_480_fu_11984_p3.read());
}

void FIRE4::thread_deleted_ones_4_fu_4186_p3() {
    deleted_ones_4_fu_4186_p3 = (!carry_4_4_fu_4174_p2.read()[0].is_01())? sc_lv<1>(): ((carry_4_4_fu_4174_p2.read()[0].to_bool())? tmp_100_4_fu_4180_p2.read(): tmp_438_fu_4082_p3.read());
}

void FIRE4::thread_deleted_ones_5_1_fu_5010_p3() {
    deleted_ones_5_1_fu_5010_p3 = (!carry_4_5_1_fu_4998_p2.read()[0].is_01())? sc_lv<1>(): ((carry_4_5_1_fu_4998_p2.read()[0].to_bool())? tmp_100_5_1_fu_5004_p2.read(): tmp_494_fu_4906_p3.read());
}

void FIRE4::thread_deleted_ones_5_2_fu_5216_p3() {
    deleted_ones_5_2_fu_5216_p3 = (!carry_4_5_2_fu_5204_p2.read()[0].is_01())? sc_lv<1>(): ((carry_4_5_2_fu_5204_p2.read()[0].to_bool())? tmp_100_5_2_fu_5210_p2.read(): tmp_501_fu_5112_p3.read());
}

void FIRE4::thread_deleted_ones_5_3_fu_12558_p3() {
    deleted_ones_5_3_fu_12558_p3 = (!carry_4_5_3_fu_12546_p2.read()[0].is_01())? sc_lv<1>(): ((carry_4_5_3_fu_12546_p2.read()[0].to_bool())? tmp_100_5_3_fu_12552_p2.read(): tmp_508_fu_12454_p3.read());
}

void FIRE4::thread_deleted_ones_5_4_fu_12800_p3() {
    deleted_ones_5_4_fu_12800_p3 = (!carry_4_5_4_fu_12788_p2.read()[0].is_01())? sc_lv<1>(): ((carry_4_5_4_fu_12788_p2.read()[0].to_bool())? tmp_100_5_4_fu_12794_p2.read(): tmp_515_fu_12696_p3.read());
}

void FIRE4::thread_deleted_ones_5_5_fu_13006_p3() {
    deleted_ones_5_5_fu_13006_p3 = (!carry_4_5_5_fu_12994_p2.read()[0].is_01())? sc_lv<1>(): ((carry_4_5_5_fu_12994_p2.read()[0].to_bool())? tmp_100_5_5_fu_13000_p2.read(): tmp_522_fu_12902_p3.read());
}

void FIRE4::thread_deleted_ones_5_6_fu_13212_p3() {
    deleted_ones_5_6_fu_13212_p3 = (!carry_4_5_6_fu_13200_p2.read()[0].is_01())? sc_lv<1>(): ((carry_4_5_6_fu_13200_p2.read()[0].to_bool())? tmp_100_5_6_fu_13206_p2.read(): tmp_529_fu_13108_p3.read());
}

void FIRE4::thread_deleted_ones_5_fu_4804_p3() {
    deleted_ones_5_fu_4804_p3 = (!carry_4_5_fu_4792_p2.read()[0].is_01())? sc_lv<1>(): ((carry_4_5_fu_4792_p2.read()[0].to_bool())? tmp_100_5_fu_4798_p2.read(): tmp_487_fu_4700_p3.read());
}

void FIRE4::thread_deleted_ones_6_1_fu_5628_p3() {
    deleted_ones_6_1_fu_5628_p3 = (!carry_4_6_1_fu_5616_p2.read()[0].is_01())? sc_lv<1>(): ((carry_4_6_1_fu_5616_p2.read()[0].to_bool())? tmp_100_6_1_fu_5622_p2.read(): tmp_543_fu_5524_p3.read());
}

void FIRE4::thread_deleted_ones_6_2_fu_5834_p3() {
    deleted_ones_6_2_fu_5834_p3 = (!carry_4_6_2_fu_5822_p2.read()[0].is_01())? sc_lv<1>(): ((carry_4_6_2_fu_5822_p2.read()[0].to_bool())? tmp_100_6_2_fu_5828_p2.read(): tmp_550_fu_5730_p3.read());
}

void FIRE4::thread_deleted_ones_6_3_fu_13682_p3() {
    deleted_ones_6_3_fu_13682_p3 = (!carry_4_6_3_fu_13670_p2.read()[0].is_01())? sc_lv<1>(): ((carry_4_6_3_fu_13670_p2.read()[0].to_bool())? tmp_100_6_3_fu_13676_p2.read(): tmp_557_fu_13578_p3.read());
}

void FIRE4::thread_deleted_ones_6_4_fu_13924_p3() {
    deleted_ones_6_4_fu_13924_p3 = (!carry_4_6_4_fu_13912_p2.read()[0].is_01())? sc_lv<1>(): ((carry_4_6_4_fu_13912_p2.read()[0].to_bool())? tmp_100_6_4_fu_13918_p2.read(): tmp_564_fu_13820_p3.read());
}

void FIRE4::thread_deleted_ones_6_5_fu_14130_p3() {
    deleted_ones_6_5_fu_14130_p3 = (!carry_4_6_5_fu_14118_p2.read()[0].is_01())? sc_lv<1>(): ((carry_4_6_5_fu_14118_p2.read()[0].to_bool())? tmp_100_6_5_fu_14124_p2.read(): tmp_571_fu_14026_p3.read());
}

void FIRE4::thread_deleted_ones_6_6_fu_14336_p3() {
    deleted_ones_6_6_fu_14336_p3 = (!carry_4_6_6_fu_14324_p2.read()[0].is_01())? sc_lv<1>(): ((carry_4_6_6_fu_14324_p2.read()[0].to_bool())? tmp_100_6_6_fu_14330_p2.read(): tmp_578_fu_14232_p3.read());
}

void FIRE4::thread_deleted_ones_6_fu_5422_p3() {
    deleted_ones_6_fu_5422_p3 = (!carry_4_6_fu_5410_p2.read()[0].is_01())? sc_lv<1>(): ((carry_4_6_fu_5410_p2.read()[0].to_bool())? tmp_100_6_fu_5416_p2.read(): tmp_536_fu_5318_p3.read());
}

void FIRE4::thread_deleted_ones_7_1_fu_6246_p3() {
    deleted_ones_7_1_fu_6246_p3 = (!carry_4_7_1_fu_6234_p2.read()[0].is_01())? sc_lv<1>(): ((carry_4_7_1_fu_6234_p2.read()[0].to_bool())? tmp_100_7_1_fu_6240_p2.read(): tmp_592_fu_6142_p3.read());
}

void FIRE4::thread_deleted_ones_7_2_fu_6452_p3() {
    deleted_ones_7_2_fu_6452_p3 = (!carry_4_7_2_fu_6440_p2.read()[0].is_01())? sc_lv<1>(): ((carry_4_7_2_fu_6440_p2.read()[0].to_bool())? tmp_100_7_2_fu_6446_p2.read(): tmp_599_fu_6348_p3.read());
}

void FIRE4::thread_deleted_ones_7_3_fu_14806_p3() {
    deleted_ones_7_3_fu_14806_p3 = (!carry_4_7_3_fu_14794_p2.read()[0].is_01())? sc_lv<1>(): ((carry_4_7_3_fu_14794_p2.read()[0].to_bool())? tmp_100_7_3_fu_14800_p2.read(): tmp_606_fu_14702_p3.read());
}

void FIRE4::thread_deleted_ones_7_4_fu_15048_p3() {
    deleted_ones_7_4_fu_15048_p3 = (!carry_4_7_4_fu_15036_p2.read()[0].is_01())? sc_lv<1>(): ((carry_4_7_4_fu_15036_p2.read()[0].to_bool())? tmp_100_7_4_fu_15042_p2.read(): tmp_613_fu_14944_p3.read());
}

void FIRE4::thread_deleted_ones_7_5_fu_15254_p3() {
    deleted_ones_7_5_fu_15254_p3 = (!carry_4_7_5_fu_15242_p2.read()[0].is_01())? sc_lv<1>(): ((carry_4_7_5_fu_15242_p2.read()[0].to_bool())? tmp_100_7_5_fu_15248_p2.read(): tmp_620_fu_15150_p3.read());
}

void FIRE4::thread_deleted_ones_7_6_fu_15460_p3() {
    deleted_ones_7_6_fu_15460_p3 = (!carry_4_7_6_fu_15448_p2.read()[0].is_01())? sc_lv<1>(): ((carry_4_7_6_fu_15448_p2.read()[0].to_bool())? tmp_100_7_6_fu_15454_p2.read(): tmp_627_fu_15356_p3.read());
}

void FIRE4::thread_deleted_ones_7_fu_6040_p3() {
    deleted_ones_7_fu_6040_p3 = (!carry_4_7_fu_6028_p2.read()[0].is_01())? sc_lv<1>(): ((carry_4_7_fu_6028_p2.read()[0].to_bool())? tmp_100_7_fu_6034_p2.read(): tmp_585_fu_5936_p3.read());
}

void FIRE4::thread_deleted_ones_fu_1706_p3() {
    deleted_ones_fu_1706_p3 = (!carry_4_fu_1694_p2.read()[0].is_01())? sc_lv<1>(): ((carry_4_fu_1694_p2.read()[0].to_bool())? tmp_137_fu_1700_p2.read(): tmp_109_fu_1602_p3.read());
}

void FIRE4::thread_exitcond_flatten2_fu_1391_p2() {
    exitcond_flatten2_fu_1391_p2 = (!indvar_flatten_reg_1188.read().is_01() || !bound_reg_18780.read().is_01())? sc_lv<1>(): sc_lv<1>(indvar_flatten_reg_1188.read() == bound_reg_18780.read());
}

void FIRE4::thread_exitcond_flatten7_fu_1323_p2() {
    exitcond_flatten7_fu_1323_p2 = (!indvar_flatten6_reg_1144.read().is_01() || !bound3_reg_18792.read().is_01())? sc_lv<1>(): sc_lv<1>(indvar_flatten6_reg_1144.read() == bound3_reg_18792.read());
}

void FIRE4::thread_exitcond_flatten_fu_1340_p2() {
    exitcond_flatten_fu_1340_p2 = (!indvar_flatten7_reg_1166.read().is_01() || !bound2_reg_18786.read().is_01())? sc_lv<1>(): sc_lv<1>(indvar_flatten7_reg_1166.read() == bound2_reg_18786.read());
}

void FIRE4::thread_exitcond_flatten_mid_4_fu_1396_p3() {
    exitcond_flatten_mid_4_fu_1396_p3 = (!exitcond_flatten_fu_1340_p2.read()[0].is_01())? sc_lv<1>(): ((exitcond_flatten_fu_1340_p2.read()[0].to_bool())? exitcond_flatten_mid_reg_18797.read(): exitcond_flatten2_fu_1391_p2.read());
}

void FIRE4::thread_exitcond_flatten_mid_fu_1313_p2() {
    exitcond_flatten_mid_fu_1313_p2 = (!bound_reg_18780.read().is_01() || !ap_const_lv64_0.is_01())? sc_lv<1>(): sc_lv<1>(bound_reg_18780.read() == ap_const_lv64_0);
}

void FIRE4::thread_grp_fu_18046_p0() {
    grp_fu_18046_p0 =  (sc_lv<5>) (ap_const_lv8_B);
}

void FIRE4::thread_grp_fu_18046_p1() {
    grp_fu_18046_p1 = tmp_49_mid2_v_fu_1367_p3.read().range(8-1, 0);
}

void FIRE4::thread_grp_fu_18046_p2() {
    grp_fu_18046_p2 = (!exitcond_flatten_mid_4_fu_1396_p3.read()[0].is_01())? sc_lv<8>(): ((exitcond_flatten_mid_4_fu_1396_p3.read()[0].to_bool())? tmp_73_fu_1423_p1.read(): tmp_81_fu_1431_p3.read());
}

void FIRE4::thread_grp_fu_18055_p0() {
    grp_fu_18055_p0 =  (sc_lv<5>) (ap_const_lv9_D);
}

void FIRE4::thread_grp_fu_18055_p1() {
    grp_fu_18055_p1 = (!tmp_54_mid2_fu_1480_p3.read()[0].is_01())? sc_lv<9>(): ((tmp_54_mid2_fu_1480_p3.read()[0].to_bool())? tmp_93_fu_1517_p3.read(): tmp_97_fu_1525_p1.read());
}

void FIRE4::thread_grp_fu_18055_p2() {
    grp_fu_18055_p2 = tmp_55_fu_1545_p2.read().range(9-1, 0);
}

void FIRE4::thread_i_6_fu_1334_p2() {
    i_6_fu_1334_p2 = (!ap_const_lv31_1.is_01() || !ap_phi_mux_i_phi_fu_1159_p4.read().is_01())? sc_lv<31>(): (sc_biguint<31>(ap_const_lv31_1) + sc_biguint<31>(ap_phi_mux_i_phi_fu_1159_p4.read()));
}

void FIRE4::thread_indvar_flatten74_op_fu_1580_p2() {
    indvar_flatten74_op_fu_1580_p2 = (!ap_const_lv96_1.is_01() || !indvar_flatten7_reg_1166.read().is_01())? sc_lv<96>(): (sc_biguint<96>(ap_const_lv96_1) + sc_biguint<96>(indvar_flatten7_reg_1166.read()));
}

void FIRE4::thread_indvar_flatten_next6_fu_1586_p3() {
    indvar_flatten_next6_fu_1586_p3 = (!exitcond_flatten_fu_1340_p2.read()[0].is_01())? sc_lv<96>(): ((exitcond_flatten_fu_1340_p2.read()[0].to_bool())? ap_const_lv96_1: indvar_flatten74_op_fu_1580_p2.read());
}

void FIRE4::thread_indvar_flatten_next7_fu_1328_p2() {
    indvar_flatten_next7_fu_1328_p2 = (!indvar_flatten6_reg_1144.read().is_01() || !ap_const_lv128_lc_2.is_01())? sc_lv<128>(): (sc_biguint<128>(indvar_flatten6_reg_1144.read()) + sc_biguint<128>(ap_const_lv128_lc_2));
}

void FIRE4::thread_indvar_flatten_next_fu_1572_p3() {
    indvar_flatten_next_fu_1572_p3 = (!tmp_56_fu_1474_p2.read()[0].is_01())? sc_lv<64>(): ((tmp_56_fu_1474_p2.read()[0].to_bool())? ap_const_lv64_1: indvar_flatten_op_fu_1566_p2.read());
}

void FIRE4::thread_indvar_flatten_op_fu_1566_p2() {
    indvar_flatten_op_fu_1566_p2 = (!ap_const_lv64_1.is_01() || !indvar_flatten_reg_1188.read().is_01())? sc_lv<64>(): (sc_biguint<64>(ap_const_lv64_1) + sc_biguint<64>(indvar_flatten_reg_1188.read()));
}

void FIRE4::thread_isneg_not_0_1_fu_6690_p2() {
    isneg_not_0_1_fu_6690_p2 = (tmp_185_fu_6651_p3.read() ^ ap_const_lv1_1);
}

void FIRE4::thread_isneg_not_0_2_fu_6778_p2() {
    isneg_not_0_2_fu_6778_p2 = (tmp_213_fu_6739_p3.read() ^ ap_const_lv1_1);
}

void FIRE4::thread_isneg_not_0_3_fu_15572_p2() {
    isneg_not_0_3_fu_15572_p2 = (tmp_241_reg_19400.read() ^ ap_const_lv1_1);
}

void FIRE4::thread_isneg_not_0_4_fu_15656_p2() {
    isneg_not_0_4_fu_15656_p2 = (tmp_269_fu_15617_p3.read() ^ ap_const_lv1_1);
}

void FIRE4::thread_isneg_not_0_5_fu_15744_p2() {
    isneg_not_0_5_fu_15744_p2 = (tmp_282_fu_15705_p3.read() ^ ap_const_lv1_1);
}

void FIRE4::thread_isneg_not_0_6_fu_15832_p2() {
    isneg_not_0_6_fu_15832_p2 = (tmp_289_fu_15793_p3.read() ^ ap_const_lv1_1);
}

void FIRE4::thread_isneg_not_1_1_fu_7830_p2() {
    isneg_not_1_1_fu_7830_p2 = (tmp_303_fu_7791_p3.read() ^ ap_const_lv1_1);
}

void FIRE4::thread_isneg_not_1_2_fu_7918_p2() {
    isneg_not_1_2_fu_7918_p2 = (tmp_310_fu_7879_p3.read() ^ ap_const_lv1_1);
}

void FIRE4::thread_isneg_not_1_3_fu_15883_p2() {
    isneg_not_1_3_fu_15883_p2 = (tmp_317_reg_19438.read() ^ ap_const_lv1_1);
}

void FIRE4::thread_isneg_not_1_4_fu_15967_p2() {
    isneg_not_1_4_fu_15967_p2 = (tmp_324_fu_15928_p3.read() ^ ap_const_lv1_1);
}

void FIRE4::thread_isneg_not_1_5_fu_16055_p2() {
    isneg_not_1_5_fu_16055_p2 = (tmp_331_fu_16016_p3.read() ^ ap_const_lv1_1);
}

void FIRE4::thread_isneg_not_1_6_fu_16143_p2() {
    isneg_not_1_6_fu_16143_p2 = (tmp_338_fu_16104_p3.read() ^ ap_const_lv1_1);
}

void FIRE4::thread_isneg_not_1_fu_7742_p2() {
    isneg_not_1_fu_7742_p2 = (tmp_296_fu_7703_p3.read() ^ ap_const_lv1_1);
}

void FIRE4::thread_isneg_not_2_1_fu_8954_p2() {
    isneg_not_2_1_fu_8954_p2 = (tmp_352_fu_8915_p3.read() ^ ap_const_lv1_1);
}

void FIRE4::thread_isneg_not_2_2_fu_9042_p2() {
    isneg_not_2_2_fu_9042_p2 = (tmp_359_fu_9003_p3.read() ^ ap_const_lv1_1);
}

void FIRE4::thread_isneg_not_2_3_fu_16194_p2() {
    isneg_not_2_3_fu_16194_p2 = (tmp_366_reg_19476.read() ^ ap_const_lv1_1);
}

void FIRE4::thread_isneg_not_2_4_fu_16278_p2() {
    isneg_not_2_4_fu_16278_p2 = (tmp_373_fu_16239_p3.read() ^ ap_const_lv1_1);
}

void FIRE4::thread_isneg_not_2_5_fu_16366_p2() {
    isneg_not_2_5_fu_16366_p2 = (tmp_380_fu_16327_p3.read() ^ ap_const_lv1_1);
}

void FIRE4::thread_isneg_not_2_6_fu_16454_p2() {
    isneg_not_2_6_fu_16454_p2 = (tmp_387_fu_16415_p3.read() ^ ap_const_lv1_1);
}

void FIRE4::thread_isneg_not_2_fu_8866_p2() {
    isneg_not_2_fu_8866_p2 = (tmp_345_fu_8827_p3.read() ^ ap_const_lv1_1);
}

void FIRE4::thread_isneg_not_3_1_fu_10078_p2() {
    isneg_not_3_1_fu_10078_p2 = (tmp_401_fu_10039_p3.read() ^ ap_const_lv1_1);
}

void FIRE4::thread_isneg_not_3_2_fu_10166_p2() {
    isneg_not_3_2_fu_10166_p2 = (tmp_408_fu_10127_p3.read() ^ ap_const_lv1_1);
}

void FIRE4::thread_isneg_not_3_3_fu_16505_p2() {
    isneg_not_3_3_fu_16505_p2 = (tmp_415_reg_19514.read() ^ ap_const_lv1_1);
}

void FIRE4::thread_isneg_not_3_4_fu_16589_p2() {
    isneg_not_3_4_fu_16589_p2 = (tmp_422_fu_16550_p3.read() ^ ap_const_lv1_1);
}

void FIRE4::thread_isneg_not_3_5_fu_16677_p2() {
    isneg_not_3_5_fu_16677_p2 = (tmp_429_fu_16638_p3.read() ^ ap_const_lv1_1);
}

void FIRE4::thread_isneg_not_3_6_fu_16765_p2() {
    isneg_not_3_6_fu_16765_p2 = (tmp_436_fu_16726_p3.read() ^ ap_const_lv1_1);
}

void FIRE4::thread_isneg_not_3_fu_9990_p2() {
    isneg_not_3_fu_9990_p2 = (tmp_394_fu_9951_p3.read() ^ ap_const_lv1_1);
}

void FIRE4::thread_isneg_not_4_1_fu_11202_p2() {
    isneg_not_4_1_fu_11202_p2 = (tmp_450_fu_11163_p3.read() ^ ap_const_lv1_1);
}

void FIRE4::thread_isneg_not_4_2_fu_11290_p2() {
    isneg_not_4_2_fu_11290_p2 = (tmp_457_fu_11251_p3.read() ^ ap_const_lv1_1);
}

void FIRE4::thread_isneg_not_4_3_fu_16816_p2() {
    isneg_not_4_3_fu_16816_p2 = (tmp_464_reg_19552.read() ^ ap_const_lv1_1);
}

void FIRE4::thread_isneg_not_4_4_fu_16900_p2() {
    isneg_not_4_4_fu_16900_p2 = (tmp_471_fu_16861_p3.read() ^ ap_const_lv1_1);
}

void FIRE4::thread_isneg_not_4_5_fu_16988_p2() {
    isneg_not_4_5_fu_16988_p2 = (tmp_478_fu_16949_p3.read() ^ ap_const_lv1_1);
}

void FIRE4::thread_isneg_not_4_6_fu_17076_p2() {
    isneg_not_4_6_fu_17076_p2 = (tmp_485_fu_17037_p3.read() ^ ap_const_lv1_1);
}

void FIRE4::thread_isneg_not_4_fu_11114_p2() {
    isneg_not_4_fu_11114_p2 = (tmp_443_fu_11075_p3.read() ^ ap_const_lv1_1);
}

void FIRE4::thread_isneg_not_5_1_fu_12326_p2() {
    isneg_not_5_1_fu_12326_p2 = (tmp_499_fu_12287_p3.read() ^ ap_const_lv1_1);
}

void FIRE4::thread_isneg_not_5_2_fu_12414_p2() {
    isneg_not_5_2_fu_12414_p2 = (tmp_506_fu_12375_p3.read() ^ ap_const_lv1_1);
}

void FIRE4::thread_isneg_not_5_3_fu_17127_p2() {
    isneg_not_5_3_fu_17127_p2 = (tmp_513_reg_19590.read() ^ ap_const_lv1_1);
}

void FIRE4::thread_isneg_not_5_4_fu_17211_p2() {
    isneg_not_5_4_fu_17211_p2 = (tmp_520_fu_17172_p3.read() ^ ap_const_lv1_1);
}

void FIRE4::thread_isneg_not_5_5_fu_17299_p2() {
    isneg_not_5_5_fu_17299_p2 = (tmp_527_fu_17260_p3.read() ^ ap_const_lv1_1);
}

void FIRE4::thread_isneg_not_5_6_fu_17387_p2() {
    isneg_not_5_6_fu_17387_p2 = (tmp_534_fu_17348_p3.read() ^ ap_const_lv1_1);
}

void FIRE4::thread_isneg_not_5_fu_12238_p2() {
    isneg_not_5_fu_12238_p2 = (tmp_492_fu_12199_p3.read() ^ ap_const_lv1_1);
}

void FIRE4::thread_isneg_not_6_1_fu_13450_p2() {
    isneg_not_6_1_fu_13450_p2 = (tmp_548_fu_13411_p3.read() ^ ap_const_lv1_1);
}

void FIRE4::thread_isneg_not_6_2_fu_13538_p2() {
    isneg_not_6_2_fu_13538_p2 = (tmp_555_fu_13499_p3.read() ^ ap_const_lv1_1);
}

void FIRE4::thread_isneg_not_6_3_fu_17438_p2() {
    isneg_not_6_3_fu_17438_p2 = (tmp_562_reg_19628.read() ^ ap_const_lv1_1);
}

void FIRE4::thread_isneg_not_6_4_fu_17522_p2() {
    isneg_not_6_4_fu_17522_p2 = (tmp_569_fu_17483_p3.read() ^ ap_const_lv1_1);
}

void FIRE4::thread_isneg_not_6_5_fu_17610_p2() {
    isneg_not_6_5_fu_17610_p2 = (tmp_576_fu_17571_p3.read() ^ ap_const_lv1_1);
}

void FIRE4::thread_isneg_not_6_6_fu_17698_p2() {
    isneg_not_6_6_fu_17698_p2 = (tmp_583_fu_17659_p3.read() ^ ap_const_lv1_1);
}

void FIRE4::thread_isneg_not_6_fu_13362_p2() {
    isneg_not_6_fu_13362_p2 = (tmp_541_fu_13323_p3.read() ^ ap_const_lv1_1);
}

void FIRE4::thread_isneg_not_7_1_fu_14574_p2() {
    isneg_not_7_1_fu_14574_p2 = (tmp_597_fu_14535_p3.read() ^ ap_const_lv1_1);
}

void FIRE4::thread_isneg_not_7_2_fu_14662_p2() {
    isneg_not_7_2_fu_14662_p2 = (tmp_604_fu_14623_p3.read() ^ ap_const_lv1_1);
}

void FIRE4::thread_isneg_not_7_3_fu_17749_p2() {
    isneg_not_7_3_fu_17749_p2 = (tmp_611_reg_19666.read() ^ ap_const_lv1_1);
}

void FIRE4::thread_isneg_not_7_4_fu_17833_p2() {
    isneg_not_7_4_fu_17833_p2 = (tmp_618_fu_17794_p3.read() ^ ap_const_lv1_1);
}

void FIRE4::thread_isneg_not_7_5_fu_17921_p2() {
    isneg_not_7_5_fu_17921_p2 = (tmp_625_fu_17882_p3.read() ^ ap_const_lv1_1);
}

void FIRE4::thread_isneg_not_7_6_fu_18009_p2() {
    isneg_not_7_6_fu_18009_p2 = (tmp_632_fu_17970_p3.read() ^ ap_const_lv1_1);
}

void FIRE4::thread_isneg_not_7_fu_14486_p2() {
    isneg_not_7_fu_14486_p2 = (tmp_590_fu_14447_p3.read() ^ ap_const_lv1_1);
}

void FIRE4::thread_isneg_not_fu_6602_p2() {
    isneg_not_fu_6602_p2 = (tmp_153_fu_6563_p3.read() ^ ap_const_lv1_1);
}

void FIRE4::thread_j_5_fu_1403_p2() {
    j_5_fu_1403_p2 = (!ap_const_lv32_1.is_01() || !j_mid_fu_1345_p3.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_1) + sc_biguint<32>(j_mid_fu_1345_p3.read()));
}

void FIRE4::thread_j_mid2_fu_1487_p3() {
    j_mid2_fu_1487_p3 = (!exitcond_flatten_mid_4_fu_1396_p3.read()[0].is_01())? sc_lv<32>(): ((exitcond_flatten_mid_4_fu_1396_p3.read()[0].to_bool())? j_5_fu_1403_p2.read(): j_mid_fu_1345_p3.read());
}

void FIRE4::thread_j_mid_fu_1345_p3() {
    j_mid_fu_1345_p3 = (!exitcond_flatten_fu_1340_p2.read()[0].is_01())? sc_lv<32>(): ((exitcond_flatten_fu_1340_p2.read()[0].to_bool())? ap_const_lv32_0: j_reg_1177.read());
}

void FIRE4::thread_overflow_0_1_fu_1948_p2() {
    overflow_0_1_fu_1948_p2 = (brmerge_i_0_1_fu_1942_p2.read() & tmp_100_0_1_fu_1910_p2.read());
}

void FIRE4::thread_overflow_0_2_fu_2158_p2() {
    overflow_0_2_fu_2158_p2 = (brmerge_i_0_2_fu_2152_p2.read() & tmp_100_0_2_fu_2120_p2.read());
}

void FIRE4::thread_overflow_0_3_fu_6958_p2() {
    overflow_0_3_fu_6958_p2 = (brmerge_i_0_3_fu_6952_p2.read() & tmp_100_0_3_fu_6920_p2.read());
}

void FIRE4::thread_overflow_0_4_fu_7204_p2() {
    overflow_0_4_fu_7204_p2 = (brmerge_i_0_4_fu_7198_p2.read() & tmp_100_0_4_fu_7166_p2.read());
}

void FIRE4::thread_overflow_0_5_fu_7414_p2() {
    overflow_0_5_fu_7414_p2 = (brmerge_i_0_5_fu_7408_p2.read() & tmp_100_0_5_fu_7376_p2.read());
}

void FIRE4::thread_overflow_0_6_fu_7624_p2() {
    overflow_0_6_fu_7624_p2 = (brmerge_i_0_6_fu_7618_p2.read() & tmp_100_0_6_fu_7586_p2.read());
}

void FIRE4::thread_overflow_1_1_fu_2570_p2() {
    overflow_1_1_fu_2570_p2 = (brmerge_i_1_1_fu_2564_p2.read() & tmp_100_1_1_fu_2532_p2.read());
}

void FIRE4::thread_overflow_1_2_fu_2776_p2() {
    overflow_1_2_fu_2776_p2 = (brmerge_i_1_2_fu_2770_p2.read() & tmp_100_1_2_fu_2738_p2.read());
}

void FIRE4::thread_overflow_1_3_fu_8094_p2() {
    overflow_1_3_fu_8094_p2 = (brmerge_i_1_3_fu_8088_p2.read() & tmp_100_1_3_fu_8056_p2.read());
}

void FIRE4::thread_overflow_1_4_fu_8336_p2() {
    overflow_1_4_fu_8336_p2 = (brmerge_i_1_4_fu_8330_p2.read() & tmp_100_1_4_fu_8298_p2.read());
}

void FIRE4::thread_overflow_1_5_fu_8542_p2() {
    overflow_1_5_fu_8542_p2 = (brmerge_i_1_5_fu_8536_p2.read() & tmp_100_1_5_fu_8504_p2.read());
}

void FIRE4::thread_overflow_1_6_fu_8748_p2() {
    overflow_1_6_fu_8748_p2 = (brmerge_i_1_6_fu_8742_p2.read() & tmp_100_1_6_fu_8710_p2.read());
}

void FIRE4::thread_overflow_1_fu_2364_p2() {
    overflow_1_fu_2364_p2 = (brmerge_i_1_fu_2358_p2.read() & tmp_100_1_fu_2326_p2.read());
}

void FIRE4::thread_overflow_2_1_fu_3188_p2() {
    overflow_2_1_fu_3188_p2 = (brmerge_i_2_1_fu_3182_p2.read() & tmp_100_2_1_fu_3150_p2.read());
}

void FIRE4::thread_overflow_2_2_fu_3394_p2() {
    overflow_2_2_fu_3394_p2 = (brmerge_i_2_2_fu_3388_p2.read() & tmp_100_2_2_fu_3356_p2.read());
}

void FIRE4::thread_overflow_2_3_fu_9218_p2() {
    overflow_2_3_fu_9218_p2 = (brmerge_i_2_3_fu_9212_p2.read() & tmp_100_2_3_fu_9180_p2.read());
}

void FIRE4::thread_overflow_2_4_fu_9460_p2() {
    overflow_2_4_fu_9460_p2 = (brmerge_i_2_4_fu_9454_p2.read() & tmp_100_2_4_fu_9422_p2.read());
}

void FIRE4::thread_overflow_2_5_fu_9666_p2() {
    overflow_2_5_fu_9666_p2 = (brmerge_i_2_5_fu_9660_p2.read() & tmp_100_2_5_fu_9628_p2.read());
}

void FIRE4::thread_overflow_2_6_fu_9872_p2() {
    overflow_2_6_fu_9872_p2 = (brmerge_i_2_6_fu_9866_p2.read() & tmp_100_2_6_fu_9834_p2.read());
}

void FIRE4::thread_overflow_2_fu_2982_p2() {
    overflow_2_fu_2982_p2 = (brmerge_i_2_fu_2976_p2.read() & tmp_100_2_fu_2944_p2.read());
}

void FIRE4::thread_overflow_314_1_fu_3806_p2() {
    overflow_314_1_fu_3806_p2 = (brmerge_i_3_1_fu_3800_p2.read() & tmp_100_3_1_fu_3768_p2.read());
}

void FIRE4::thread_overflow_314_2_fu_4012_p2() {
    overflow_314_2_fu_4012_p2 = (brmerge_i_3_2_fu_4006_p2.read() & tmp_100_3_2_fu_3974_p2.read());
}

void FIRE4::thread_overflow_314_3_fu_10342_p2() {
    overflow_314_3_fu_10342_p2 = (brmerge_i_3_3_fu_10336_p2.read() & tmp_100_3_3_fu_10304_p2.read());
}

void FIRE4::thread_overflow_314_4_fu_10584_p2() {
    overflow_314_4_fu_10584_p2 = (brmerge_i_3_4_fu_10578_p2.read() & tmp_100_3_4_fu_10546_p2.read());
}

void FIRE4::thread_overflow_314_5_fu_10790_p2() {
    overflow_314_5_fu_10790_p2 = (brmerge_i_3_5_fu_10784_p2.read() & tmp_100_3_5_fu_10752_p2.read());
}

void FIRE4::thread_overflow_314_6_fu_10996_p2() {
    overflow_314_6_fu_10996_p2 = (brmerge_i_3_6_fu_10990_p2.read() & tmp_100_3_6_fu_10958_p2.read());
}

void FIRE4::thread_overflow_4_1_fu_4424_p2() {
    overflow_4_1_fu_4424_p2 = (brmerge_i_4_1_fu_4418_p2.read() & tmp_100_4_1_fu_4386_p2.read());
}

void FIRE4::thread_overflow_4_2_fu_4630_p2() {
    overflow_4_2_fu_4630_p2 = (brmerge_i_4_2_fu_4624_p2.read() & tmp_100_4_2_fu_4592_p2.read());
}

void FIRE4::thread_overflow_4_3_fu_11466_p2() {
    overflow_4_3_fu_11466_p2 = (brmerge_i_4_3_fu_11460_p2.read() & tmp_100_4_3_fu_11428_p2.read());
}

void FIRE4::thread_overflow_4_4_fu_11708_p2() {
    overflow_4_4_fu_11708_p2 = (brmerge_i_4_4_fu_11702_p2.read() & tmp_100_4_4_fu_11670_p2.read());
}

void FIRE4::thread_overflow_4_5_fu_11914_p2() {
    overflow_4_5_fu_11914_p2 = (brmerge_i_4_5_fu_11908_p2.read() & tmp_100_4_5_fu_11876_p2.read());
}

void FIRE4::thread_overflow_4_6_fu_12120_p2() {
    overflow_4_6_fu_12120_p2 = (brmerge_i_4_6_fu_12114_p2.read() & tmp_100_4_6_fu_12082_p2.read());
}

void FIRE4::thread_overflow_4_fu_4218_p2() {
    overflow_4_fu_4218_p2 = (brmerge_i_4_fu_4212_p2.read() & tmp_100_4_fu_4180_p2.read());
}

void FIRE4::thread_overflow_5_1_fu_5042_p2() {
    overflow_5_1_fu_5042_p2 = (brmerge_i_5_1_fu_5036_p2.read() & tmp_100_5_1_fu_5004_p2.read());
}

void FIRE4::thread_overflow_5_2_fu_5248_p2() {
    overflow_5_2_fu_5248_p2 = (brmerge_i_5_2_fu_5242_p2.read() & tmp_100_5_2_fu_5210_p2.read());
}

void FIRE4::thread_overflow_5_3_fu_12590_p2() {
    overflow_5_3_fu_12590_p2 = (brmerge_i_5_3_fu_12584_p2.read() & tmp_100_5_3_fu_12552_p2.read());
}

void FIRE4::thread_overflow_5_4_fu_12832_p2() {
    overflow_5_4_fu_12832_p2 = (brmerge_i_5_4_fu_12826_p2.read() & tmp_100_5_4_fu_12794_p2.read());
}

void FIRE4::thread_overflow_5_5_fu_13038_p2() {
    overflow_5_5_fu_13038_p2 = (brmerge_i_5_5_fu_13032_p2.read() & tmp_100_5_5_fu_13000_p2.read());
}

void FIRE4::thread_overflow_5_6_fu_13244_p2() {
    overflow_5_6_fu_13244_p2 = (brmerge_i_5_6_fu_13238_p2.read() & tmp_100_5_6_fu_13206_p2.read());
}

void FIRE4::thread_overflow_5_fu_4836_p2() {
    overflow_5_fu_4836_p2 = (brmerge_i_5_fu_4830_p2.read() & tmp_100_5_fu_4798_p2.read());
}

void FIRE4::thread_overflow_6_1_fu_5660_p2() {
    overflow_6_1_fu_5660_p2 = (brmerge_i_6_1_fu_5654_p2.read() & tmp_100_6_1_fu_5622_p2.read());
}

void FIRE4::thread_overflow_6_2_fu_5866_p2() {
    overflow_6_2_fu_5866_p2 = (brmerge_i_6_2_fu_5860_p2.read() & tmp_100_6_2_fu_5828_p2.read());
}

void FIRE4::thread_overflow_6_3_fu_13714_p2() {
    overflow_6_3_fu_13714_p2 = (brmerge_i_6_3_fu_13708_p2.read() & tmp_100_6_3_fu_13676_p2.read());
}

void FIRE4::thread_overflow_6_4_fu_13956_p2() {
    overflow_6_4_fu_13956_p2 = (brmerge_i_6_4_fu_13950_p2.read() & tmp_100_6_4_fu_13918_p2.read());
}

void FIRE4::thread_overflow_6_5_fu_14162_p2() {
    overflow_6_5_fu_14162_p2 = (brmerge_i_6_5_fu_14156_p2.read() & tmp_100_6_5_fu_14124_p2.read());
}

void FIRE4::thread_overflow_6_6_fu_14368_p2() {
    overflow_6_6_fu_14368_p2 = (brmerge_i_6_6_fu_14362_p2.read() & tmp_100_6_6_fu_14330_p2.read());
}

void FIRE4::thread_overflow_6_fu_5454_p2() {
    overflow_6_fu_5454_p2 = (brmerge_i_6_fu_5448_p2.read() & tmp_100_6_fu_5416_p2.read());
}

void FIRE4::thread_overflow_7_1_fu_6278_p2() {
    overflow_7_1_fu_6278_p2 = (brmerge_i_7_1_fu_6272_p2.read() & tmp_100_7_1_fu_6240_p2.read());
}

void FIRE4::thread_overflow_7_2_fu_6484_p2() {
    overflow_7_2_fu_6484_p2 = (brmerge_i_7_2_fu_6478_p2.read() & tmp_100_7_2_fu_6446_p2.read());
}

void FIRE4::thread_overflow_7_3_fu_14838_p2() {
    overflow_7_3_fu_14838_p2 = (brmerge_i_7_3_fu_14832_p2.read() & tmp_100_7_3_fu_14800_p2.read());
}

void FIRE4::thread_overflow_7_4_fu_15080_p2() {
    overflow_7_4_fu_15080_p2 = (brmerge_i_7_4_fu_15074_p2.read() & tmp_100_7_4_fu_15042_p2.read());
}

void FIRE4::thread_overflow_7_5_fu_15286_p2() {
    overflow_7_5_fu_15286_p2 = (brmerge_i_7_5_fu_15280_p2.read() & tmp_100_7_5_fu_15248_p2.read());
}

void FIRE4::thread_overflow_7_6_fu_15492_p2() {
    overflow_7_6_fu_15492_p2 = (brmerge_i_7_6_fu_15486_p2.read() & tmp_100_7_6_fu_15454_p2.read());
}

void FIRE4::thread_overflow_7_fu_6072_p2() {
    overflow_7_fu_6072_p2 = (brmerge_i_7_fu_6066_p2.read() & tmp_100_7_fu_6034_p2.read());
}

void FIRE4::thread_overflow_fu_1738_p2() {
    overflow_fu_1738_p2 = (brmerge_i_fu_1732_p2.read() & tmp_137_fu_1700_p2.read());
}

void FIRE4::thread_overflow_s_fu_3600_p2() {
    overflow_s_fu_3600_p2 = (brmerge_i_3_fu_3594_p2.read() & tmp_100_3_fu_3562_p2.read());
}

void FIRE4::thread_p_Result_27_0_1_no_fu_1924_p2() {
    p_Result_27_0_1_no_fu_1924_p2 = (tmp_173_fu_1835_p3.read() ^ ap_const_lv1_1);
}

void FIRE4::thread_p_Result_27_0_2_no_fu_2134_p2() {
    p_Result_27_0_2_no_fu_2134_p2 = (tmp_201_fu_2045_p3.read() ^ ap_const_lv1_1);
}

void FIRE4::thread_p_Result_27_0_3_no_fu_6934_p2() {
    p_Result_27_0_3_no_fu_6934_p2 = (tmp_229_fu_6845_p3.read() ^ ap_const_lv1_1);
}

void FIRE4::thread_p_Result_27_0_4_no_fu_7180_p2() {
    p_Result_27_0_4_no_fu_7180_p2 = (tmp_257_fu_7091_p3.read() ^ ap_const_lv1_1);
}

void FIRE4::thread_p_Result_27_0_5_no_fu_7390_p2() {
    p_Result_27_0_5_no_fu_7390_p2 = (tmp_279_fu_7301_p3.read() ^ ap_const_lv1_1);
}

void FIRE4::thread_p_Result_27_0_6_no_fu_7600_p2() {
    p_Result_27_0_6_no_fu_7600_p2 = (tmp_286_fu_7511_p3.read() ^ ap_const_lv1_1);
}

void FIRE4::thread_p_Result_27_1_1_no_fu_2546_p2() {
    p_Result_27_1_1_no_fu_2546_p2 = (tmp_300_fu_2457_p3.read() ^ ap_const_lv1_1);
}

void FIRE4::thread_p_Result_27_1_2_no_fu_2752_p2() {
    p_Result_27_1_2_no_fu_2752_p2 = (tmp_307_fu_2663_p3.read() ^ ap_const_lv1_1);
}

void FIRE4::thread_p_Result_27_1_3_no_fu_8070_p2() {
    p_Result_27_1_3_no_fu_8070_p2 = (tmp_314_fu_7981_p3.read() ^ ap_const_lv1_1);
}

void FIRE4::thread_p_Result_27_1_4_no_fu_8312_p2() {
    p_Result_27_1_4_no_fu_8312_p2 = (tmp_321_fu_8223_p3.read() ^ ap_const_lv1_1);
}

void FIRE4::thread_p_Result_27_1_5_no_fu_8518_p2() {
    p_Result_27_1_5_no_fu_8518_p2 = (tmp_328_fu_8429_p3.read() ^ ap_const_lv1_1);
}

void FIRE4::thread_p_Result_27_1_6_no_fu_8724_p2() {
    p_Result_27_1_6_no_fu_8724_p2 = (tmp_335_fu_8635_p3.read() ^ ap_const_lv1_1);
}

void FIRE4::thread_p_Result_27_1_not_fu_2340_p2() {
    p_Result_27_1_not_fu_2340_p2 = (tmp_293_fu_2251_p3.read() ^ ap_const_lv1_1);
}

void FIRE4::thread_p_Result_27_2_1_no_fu_3164_p2() {
    p_Result_27_2_1_no_fu_3164_p2 = (tmp_349_fu_3075_p3.read() ^ ap_const_lv1_1);
}

void FIRE4::thread_p_Result_27_2_2_no_fu_3370_p2() {
    p_Result_27_2_2_no_fu_3370_p2 = (tmp_356_fu_3281_p3.read() ^ ap_const_lv1_1);
}

void FIRE4::thread_p_Result_27_2_3_no_fu_9194_p2() {
    p_Result_27_2_3_no_fu_9194_p2 = (tmp_363_fu_9105_p3.read() ^ ap_const_lv1_1);
}

void FIRE4::thread_p_Result_27_2_4_no_fu_9436_p2() {
    p_Result_27_2_4_no_fu_9436_p2 = (tmp_370_fu_9347_p3.read() ^ ap_const_lv1_1);
}

void FIRE4::thread_p_Result_27_2_5_no_fu_9642_p2() {
    p_Result_27_2_5_no_fu_9642_p2 = (tmp_377_fu_9553_p3.read() ^ ap_const_lv1_1);
}

void FIRE4::thread_p_Result_27_2_6_no_fu_9848_p2() {
    p_Result_27_2_6_no_fu_9848_p2 = (tmp_384_fu_9759_p3.read() ^ ap_const_lv1_1);
}

void FIRE4::thread_p_Result_27_2_not_fu_2958_p2() {
    p_Result_27_2_not_fu_2958_p2 = (tmp_342_fu_2869_p3.read() ^ ap_const_lv1_1);
}

void FIRE4::thread_p_Result_27_3_1_no_fu_3782_p2() {
    p_Result_27_3_1_no_fu_3782_p2 = (tmp_398_fu_3693_p3.read() ^ ap_const_lv1_1);
}

void FIRE4::thread_p_Result_27_3_2_no_fu_3988_p2() {
    p_Result_27_3_2_no_fu_3988_p2 = (tmp_405_fu_3899_p3.read() ^ ap_const_lv1_1);
}

void FIRE4::thread_p_Result_27_3_3_no_fu_10318_p2() {
    p_Result_27_3_3_no_fu_10318_p2 = (tmp_412_fu_10229_p3.read() ^ ap_const_lv1_1);
}

void FIRE4::thread_p_Result_27_3_4_no_fu_10560_p2() {
    p_Result_27_3_4_no_fu_10560_p2 = (tmp_419_fu_10471_p3.read() ^ ap_const_lv1_1);
}

void FIRE4::thread_p_Result_27_3_5_no_fu_10766_p2() {
    p_Result_27_3_5_no_fu_10766_p2 = (tmp_426_fu_10677_p3.read() ^ ap_const_lv1_1);
}

void FIRE4::thread_p_Result_27_3_6_no_fu_10972_p2() {
    p_Result_27_3_6_no_fu_10972_p2 = (tmp_433_fu_10883_p3.read() ^ ap_const_lv1_1);
}

void FIRE4::thread_p_Result_27_3_not_fu_3576_p2() {
    p_Result_27_3_not_fu_3576_p2 = (tmp_391_fu_3487_p3.read() ^ ap_const_lv1_1);
}

void FIRE4::thread_p_Result_27_4_1_no_fu_4400_p2() {
    p_Result_27_4_1_no_fu_4400_p2 = (tmp_447_fu_4311_p3.read() ^ ap_const_lv1_1);
}

void FIRE4::thread_p_Result_27_4_2_no_fu_4606_p2() {
    p_Result_27_4_2_no_fu_4606_p2 = (tmp_454_fu_4517_p3.read() ^ ap_const_lv1_1);
}

void FIRE4::thread_p_Result_27_4_3_no_fu_11442_p2() {
    p_Result_27_4_3_no_fu_11442_p2 = (tmp_461_fu_11353_p3.read() ^ ap_const_lv1_1);
}

void FIRE4::thread_p_Result_27_4_4_no_fu_11684_p2() {
    p_Result_27_4_4_no_fu_11684_p2 = (tmp_468_fu_11595_p3.read() ^ ap_const_lv1_1);
}

void FIRE4::thread_p_Result_27_4_5_no_fu_11890_p2() {
    p_Result_27_4_5_no_fu_11890_p2 = (tmp_475_fu_11801_p3.read() ^ ap_const_lv1_1);
}

void FIRE4::thread_p_Result_27_4_6_no_fu_12096_p2() {
    p_Result_27_4_6_no_fu_12096_p2 = (tmp_482_fu_12007_p3.read() ^ ap_const_lv1_1);
}

void FIRE4::thread_p_Result_27_4_not_fu_4194_p2() {
    p_Result_27_4_not_fu_4194_p2 = (tmp_440_fu_4105_p3.read() ^ ap_const_lv1_1);
}

void FIRE4::thread_p_Result_27_5_1_no_fu_5018_p2() {
    p_Result_27_5_1_no_fu_5018_p2 = (tmp_496_fu_4929_p3.read() ^ ap_const_lv1_1);
}

void FIRE4::thread_p_Result_27_5_2_no_fu_5224_p2() {
    p_Result_27_5_2_no_fu_5224_p2 = (tmp_503_fu_5135_p3.read() ^ ap_const_lv1_1);
}

void FIRE4::thread_p_Result_27_5_3_no_fu_12566_p2() {
    p_Result_27_5_3_no_fu_12566_p2 = (tmp_510_fu_12477_p3.read() ^ ap_const_lv1_1);
}

void FIRE4::thread_p_Result_27_5_4_no_fu_12808_p2() {
    p_Result_27_5_4_no_fu_12808_p2 = (tmp_517_fu_12719_p3.read() ^ ap_const_lv1_1);
}

void FIRE4::thread_p_Result_27_5_5_no_fu_13014_p2() {
    p_Result_27_5_5_no_fu_13014_p2 = (tmp_524_fu_12925_p3.read() ^ ap_const_lv1_1);
}

void FIRE4::thread_p_Result_27_5_6_no_fu_13220_p2() {
    p_Result_27_5_6_no_fu_13220_p2 = (tmp_531_fu_13131_p3.read() ^ ap_const_lv1_1);
}

void FIRE4::thread_p_Result_27_5_not_fu_4812_p2() {
    p_Result_27_5_not_fu_4812_p2 = (tmp_489_fu_4723_p3.read() ^ ap_const_lv1_1);
}

void FIRE4::thread_p_Result_27_6_1_no_fu_5636_p2() {
    p_Result_27_6_1_no_fu_5636_p2 = (tmp_545_fu_5547_p3.read() ^ ap_const_lv1_1);
}

void FIRE4::thread_p_Result_27_6_2_no_fu_5842_p2() {
    p_Result_27_6_2_no_fu_5842_p2 = (tmp_552_fu_5753_p3.read() ^ ap_const_lv1_1);
}

void FIRE4::thread_p_Result_27_6_3_no_fu_13690_p2() {
    p_Result_27_6_3_no_fu_13690_p2 = (tmp_559_fu_13601_p3.read() ^ ap_const_lv1_1);
}

void FIRE4::thread_p_Result_27_6_4_no_fu_13932_p2() {
    p_Result_27_6_4_no_fu_13932_p2 = (tmp_566_fu_13843_p3.read() ^ ap_const_lv1_1);
}

void FIRE4::thread_p_Result_27_6_5_no_fu_14138_p2() {
    p_Result_27_6_5_no_fu_14138_p2 = (tmp_573_fu_14049_p3.read() ^ ap_const_lv1_1);
}

void FIRE4::thread_p_Result_27_6_6_no_fu_14344_p2() {
    p_Result_27_6_6_no_fu_14344_p2 = (tmp_580_fu_14255_p3.read() ^ ap_const_lv1_1);
}

void FIRE4::thread_p_Result_27_6_not_fu_5430_p2() {
    p_Result_27_6_not_fu_5430_p2 = (tmp_538_fu_5341_p3.read() ^ ap_const_lv1_1);
}

void FIRE4::thread_p_Result_27_7_1_no_fu_6254_p2() {
    p_Result_27_7_1_no_fu_6254_p2 = (tmp_594_fu_6165_p3.read() ^ ap_const_lv1_1);
}

void FIRE4::thread_p_Result_27_7_2_no_fu_6460_p2() {
    p_Result_27_7_2_no_fu_6460_p2 = (tmp_601_fu_6371_p3.read() ^ ap_const_lv1_1);
}

void FIRE4::thread_p_Result_27_7_3_no_fu_14814_p2() {
    p_Result_27_7_3_no_fu_14814_p2 = (tmp_608_fu_14725_p3.read() ^ ap_const_lv1_1);
}

void FIRE4::thread_p_Result_27_7_4_no_fu_15056_p2() {
    p_Result_27_7_4_no_fu_15056_p2 = (tmp_615_fu_14967_p3.read() ^ ap_const_lv1_1);
}

void FIRE4::thread_p_Result_27_7_5_no_fu_15262_p2() {
    p_Result_27_7_5_no_fu_15262_p2 = (tmp_622_fu_15173_p3.read() ^ ap_const_lv1_1);
}

void FIRE4::thread_p_Result_27_7_6_no_fu_15468_p2() {
    p_Result_27_7_6_no_fu_15468_p2 = (tmp_629_fu_15379_p3.read() ^ ap_const_lv1_1);
}

void FIRE4::thread_p_Result_27_7_not_fu_6048_p2() {
    p_Result_27_7_not_fu_6048_p2 = (tmp_587_fu_5959_p3.read() ^ ap_const_lv1_1);
}

void FIRE4::thread_p_Result_27_not_fu_1714_p2() {
    p_Result_27_not_fu_1714_p2 = (tmp_117_fu_1625_p3.read() ^ ap_const_lv1_1);
}

void FIRE4::thread_p_Val2_0_1_fu_18076_p1() {
    p_Val2_0_1_fu_18076_p1 =  (sc_lv<26>) (OP2_V_0_1_fu_1808_p1.read());
}

void FIRE4::thread_p_Val2_0_2_fu_18088_p1() {
    p_Val2_0_2_fu_18088_p1 =  (sc_lv<26>) (OP2_V_0_2_fu_2018_p1.read());
}

void FIRE4::thread_p_Val2_0_3_fu_18352_p1() {
    p_Val2_0_3_fu_18352_p1 =  (sc_lv<26>) (OP2_V_0_3_fu_6818_p1.read());
}

void FIRE4::thread_p_Val2_0_4_fu_18364_p1() {
    p_Val2_0_4_fu_18364_p1 =  (sc_lv<26>) (OP2_V_0_4_fu_7064_p1.read());
}

void FIRE4::thread_p_Val2_0_5_fu_18376_p1() {
    p_Val2_0_5_fu_18376_p1 =  (sc_lv<26>) (OP2_V_0_5_fu_7274_p1.read());
}

void FIRE4::thread_p_Val2_0_6_fu_18388_p1() {
    p_Val2_0_6_fu_18388_p1 =  (sc_lv<26>) (OP2_V_0_6_fu_7484_p1.read());
}

void FIRE4::thread_p_Val2_10_fu_6557_p2() {
    p_Val2_10_fu_6557_p2 = (!tmp_149_fu_6554_p1.read().is_01() || !tmp_145_fu_6550_p1.read().is_01())? sc_lv<27>(): (sc_bigint<27>(tmp_149_fu_6554_p1.read()) + sc_bigint<27>(tmp_145_fu_6550_p1.read()));
}

void FIRE4::thread_p_Val2_11_fu_6571_p2() {
    p_Val2_11_fu_6571_p2 = (!p_Val2_9_reg_19256.read().is_01() || !OFM_0_V_q0.read().is_01())? sc_lv<26>(): (sc_biguint<26>(p_Val2_9_reg_19256.read()) + sc_biguint<26>(OFM_0_V_q0.read()));
}

void FIRE4::thread_p_Val2_12_0_1_fu_1819_p4() {
    p_Val2_12_0_1_fu_1819_p4 = p_Val2_0_1_fu_18076_p2.read().range(32, 7);
}

void FIRE4::thread_p_Val2_12_0_2_fu_2029_p4() {
    p_Val2_12_0_2_fu_2029_p4 = p_Val2_0_2_fu_18088_p2.read().range(32, 7);
}

void FIRE4::thread_p_Val2_12_0_3_fu_6829_p4() {
    p_Val2_12_0_3_fu_6829_p4 = p_Val2_0_3_fu_18352_p2.read().range(32, 7);
}

void FIRE4::thread_p_Val2_12_0_4_fu_7075_p4() {
    p_Val2_12_0_4_fu_7075_p4 = p_Val2_0_4_fu_18364_p2.read().range(32, 7);
}

void FIRE4::thread_p_Val2_12_0_5_fu_7285_p4() {
    p_Val2_12_0_5_fu_7285_p4 = p_Val2_0_5_fu_18376_p2.read().range(32, 7);
}

void FIRE4::thread_p_Val2_12_0_6_fu_7495_p4() {
    p_Val2_12_0_6_fu_7495_p4 = p_Val2_0_6_fu_18388_p2.read().range(32, 7);
}

void FIRE4::thread_p_Val2_12_1_1_fu_2441_p4() {
    p_Val2_12_1_1_fu_2441_p4 = p_Val2_1_1_fu_18112_p2.read().range(32, 7);
}

void FIRE4::thread_p_Val2_12_1_2_fu_2647_p4() {
    p_Val2_12_1_2_fu_2647_p4 = p_Val2_1_2_fu_18124_p2.read().range(32, 7);
}

void FIRE4::thread_p_Val2_12_1_3_fu_7965_p4() {
    p_Val2_12_1_3_fu_7965_p4 = p_Val2_1_3_fu_18400_p2.read().range(32, 7);
}

void FIRE4::thread_p_Val2_12_1_4_fu_8207_p4() {
    p_Val2_12_1_4_fu_8207_p4 = p_Val2_1_4_fu_18412_p2.read().range(32, 7);
}

void FIRE4::thread_p_Val2_12_1_5_fu_8413_p4() {
    p_Val2_12_1_5_fu_8413_p4 = p_Val2_1_5_fu_18424_p2.read().range(32, 7);
}

void FIRE4::thread_p_Val2_12_1_6_fu_8619_p4() {
    p_Val2_12_1_6_fu_8619_p4 = p_Val2_1_6_fu_18436_p2.read().range(32, 7);
}

void FIRE4::thread_p_Val2_12_1_fu_2235_p4() {
    p_Val2_12_1_fu_2235_p4 = p_Val2_1_67_fu_18100_p2.read().range(32, 7);
}

void FIRE4::thread_p_Val2_12_2_1_fu_3059_p4() {
    p_Val2_12_2_1_fu_3059_p4 = p_Val2_2_1_fu_18148_p2.read().range(32, 7);
}

void FIRE4::thread_p_Val2_12_2_2_fu_3265_p4() {
    p_Val2_12_2_2_fu_3265_p4 = p_Val2_2_2_fu_18160_p2.read().range(32, 7);
}

void FIRE4::thread_p_Val2_12_2_3_fu_9089_p4() {
    p_Val2_12_2_3_fu_9089_p4 = p_Val2_2_3_fu_18448_p2.read().range(32, 7);
}

void FIRE4::thread_p_Val2_12_2_4_fu_9331_p4() {
    p_Val2_12_2_4_fu_9331_p4 = p_Val2_2_4_fu_18460_p2.read().range(32, 7);
}

void FIRE4::thread_p_Val2_12_2_5_fu_9537_p4() {
    p_Val2_12_2_5_fu_9537_p4 = p_Val2_2_5_fu_18472_p2.read().range(32, 7);
}

void FIRE4::thread_p_Val2_12_2_6_fu_9743_p4() {
    p_Val2_12_2_6_fu_9743_p4 = p_Val2_2_6_fu_18484_p2.read().range(32, 7);
}

void FIRE4::thread_p_Val2_12_2_fu_2853_p4() {
    p_Val2_12_2_fu_2853_p4 = p_Val2_2_fu_18136_p2.read().range(32, 7);
}

void FIRE4::thread_p_Val2_12_3_1_fu_3677_p4() {
    p_Val2_12_3_1_fu_3677_p4 = p_Val2_3_1_fu_18184_p2.read().range(32, 7);
}

void FIRE4::thread_p_Val2_12_3_2_fu_3883_p4() {
    p_Val2_12_3_2_fu_3883_p4 = p_Val2_3_2_fu_18196_p2.read().range(32, 7);
}

void FIRE4::thread_p_Val2_12_3_3_fu_10213_p4() {
    p_Val2_12_3_3_fu_10213_p4 = p_Val2_3_3_fu_18496_p2.read().range(32, 7);
}

void FIRE4::thread_p_Val2_12_3_4_fu_10455_p4() {
    p_Val2_12_3_4_fu_10455_p4 = p_Val2_3_4_fu_18508_p2.read().range(32, 7);
}

void FIRE4::thread_p_Val2_12_3_5_fu_10661_p4() {
    p_Val2_12_3_5_fu_10661_p4 = p_Val2_3_5_fu_18520_p2.read().range(32, 7);
}

void FIRE4::thread_p_Val2_12_3_6_fu_10867_p4() {
    p_Val2_12_3_6_fu_10867_p4 = p_Val2_3_6_fu_18532_p2.read().range(32, 7);
}

void FIRE4::thread_p_Val2_12_3_fu_3471_p4() {
    p_Val2_12_3_fu_3471_p4 = p_Val2_3_fu_18172_p2.read().range(32, 7);
}

void FIRE4::thread_p_Val2_12_4_1_fu_4295_p4() {
    p_Val2_12_4_1_fu_4295_p4 = p_Val2_4_1_fu_18220_p2.read().range(32, 7);
}

void FIRE4::thread_p_Val2_12_4_2_fu_4501_p4() {
    p_Val2_12_4_2_fu_4501_p4 = p_Val2_4_2_fu_18232_p2.read().range(32, 7);
}

void FIRE4::thread_p_Val2_12_4_3_fu_11337_p4() {
    p_Val2_12_4_3_fu_11337_p4 = p_Val2_4_3_fu_18544_p2.read().range(32, 7);
}

void FIRE4::thread_p_Val2_12_4_4_fu_11579_p4() {
    p_Val2_12_4_4_fu_11579_p4 = p_Val2_4_4_fu_18556_p2.read().range(32, 7);
}

void FIRE4::thread_p_Val2_12_4_5_fu_11785_p4() {
    p_Val2_12_4_5_fu_11785_p4 = p_Val2_4_5_fu_18568_p2.read().range(32, 7);
}

void FIRE4::thread_p_Val2_12_4_6_fu_11991_p4() {
    p_Val2_12_4_6_fu_11991_p4 = p_Val2_4_6_fu_18580_p2.read().range(32, 7);
}

void FIRE4::thread_p_Val2_12_4_fu_4089_p4() {
    p_Val2_12_4_fu_4089_p4 = p_Val2_4_fu_18208_p2.read().range(32, 7);
}

void FIRE4::thread_p_Val2_12_5_1_fu_4913_p4() {
    p_Val2_12_5_1_fu_4913_p4 = p_Val2_5_1_fu_18256_p2.read().range(32, 7);
}

void FIRE4::thread_p_Val2_12_5_2_fu_5119_p4() {
    p_Val2_12_5_2_fu_5119_p4 = p_Val2_5_2_fu_18268_p2.read().range(32, 7);
}

void FIRE4::thread_p_Val2_12_5_3_fu_12461_p4() {
    p_Val2_12_5_3_fu_12461_p4 = p_Val2_5_3_fu_18592_p2.read().range(32, 7);
}

void FIRE4::thread_p_Val2_12_5_4_fu_12703_p4() {
    p_Val2_12_5_4_fu_12703_p4 = p_Val2_5_4_fu_18604_p2.read().range(32, 7);
}

void FIRE4::thread_p_Val2_12_5_5_fu_12909_p4() {
    p_Val2_12_5_5_fu_12909_p4 = p_Val2_5_5_fu_18616_p2.read().range(32, 7);
}

void FIRE4::thread_p_Val2_12_5_6_fu_13115_p4() {
    p_Val2_12_5_6_fu_13115_p4 = p_Val2_5_6_fu_18628_p2.read().range(32, 7);
}

void FIRE4::thread_p_Val2_12_5_fu_4707_p4() {
    p_Val2_12_5_fu_4707_p4 = p_Val2_5_fu_18244_p2.read().range(32, 7);
}

void FIRE4::thread_p_Val2_12_6_1_fu_5531_p4() {
    p_Val2_12_6_1_fu_5531_p4 = p_Val2_6_1_fu_18292_p2.read().range(32, 7);
}

void FIRE4::thread_p_Val2_12_6_2_fu_5737_p4() {
    p_Val2_12_6_2_fu_5737_p4 = p_Val2_6_2_fu_18304_p2.read().range(32, 7);
}

void FIRE4::thread_p_Val2_12_6_3_fu_13585_p4() {
    p_Val2_12_6_3_fu_13585_p4 = p_Val2_6_3_fu_18640_p2.read().range(32, 7);
}

void FIRE4::thread_p_Val2_12_6_4_fu_13827_p4() {
    p_Val2_12_6_4_fu_13827_p4 = p_Val2_6_4_fu_18652_p2.read().range(32, 7);
}

void FIRE4::thread_p_Val2_12_6_5_fu_14033_p4() {
    p_Val2_12_6_5_fu_14033_p4 = p_Val2_6_5_fu_18664_p2.read().range(32, 7);
}

void FIRE4::thread_p_Val2_12_6_6_fu_14239_p4() {
    p_Val2_12_6_6_fu_14239_p4 = p_Val2_6_6_fu_18676_p2.read().range(32, 7);
}

void FIRE4::thread_p_Val2_12_6_fu_5325_p4() {
    p_Val2_12_6_fu_5325_p4 = p_Val2_6_fu_18280_p2.read().range(32, 7);
}

void FIRE4::thread_p_Val2_12_7_1_fu_6149_p4() {
    p_Val2_12_7_1_fu_6149_p4 = p_Val2_7_1_fu_18328_p2.read().range(32, 7);
}

void FIRE4::thread_p_Val2_12_7_2_fu_6355_p4() {
    p_Val2_12_7_2_fu_6355_p4 = p_Val2_7_2_fu_18340_p2.read().range(32, 7);
}

void FIRE4::thread_p_Val2_12_7_3_fu_14709_p4() {
    p_Val2_12_7_3_fu_14709_p4 = p_Val2_7_3_fu_18688_p2.read().range(32, 7);
}

void FIRE4::thread_p_Val2_12_7_4_fu_14951_p4() {
    p_Val2_12_7_4_fu_14951_p4 = p_Val2_7_4_fu_18700_p2.read().range(32, 7);
}

void FIRE4::thread_p_Val2_12_7_5_fu_15157_p4() {
    p_Val2_12_7_5_fu_15157_p4 = p_Val2_7_5_fu_18712_p2.read().range(32, 7);
}

void FIRE4::thread_p_Val2_12_7_6_fu_15363_p4() {
    p_Val2_12_7_6_fu_15363_p4 = p_Val2_7_6_fu_18724_p2.read().range(32, 7);
}

void FIRE4::thread_p_Val2_12_7_fu_5943_p4() {
    p_Val2_12_7_fu_5943_p4 = p_Val2_7_fu_18316_p2.read().range(32, 7);
}

void FIRE4::thread_p_Val2_13_0_1_55_fu_1998_p3() {
    p_Val2_13_0_1_55_fu_1998_p3 = (!underflow_0_1_fu_1966_p2.read()[0].is_01())? sc_lv<26>(): ((underflow_0_1_fu_1966_p2.read()[0].to_bool())? ap_const_lv26_2000000: p_Val2_13_0_1_fu_1884_p2.read());
}

void FIRE4::thread_p_Val2_13_0_1_fu_1884_p2() {
    p_Val2_13_0_1_fu_1884_p2 = (!tmp_96_0_1_fu_1880_p1.read().is_01() || !p_Val2_12_0_1_fu_1819_p4.read().is_01())? sc_lv<26>(): (sc_biguint<26>(tmp_96_0_1_fu_1880_p1.read()) + sc_biguint<26>(p_Val2_12_0_1_fu_1819_p4.read()));
}

void FIRE4::thread_p_Val2_13_0_2_57_fu_2208_p3() {
    p_Val2_13_0_2_57_fu_2208_p3 = (!underflow_0_2_fu_2176_p2.read()[0].is_01())? sc_lv<26>(): ((underflow_0_2_fu_2176_p2.read()[0].to_bool())? ap_const_lv26_2000000: p_Val2_13_0_2_fu_2094_p2.read());
}

void FIRE4::thread_p_Val2_13_0_2_fu_2094_p2() {
    p_Val2_13_0_2_fu_2094_p2 = (!tmp_96_0_2_fu_2090_p1.read().is_01() || !p_Val2_12_0_2_fu_2029_p4.read().is_01())? sc_lv<26>(): (sc_biguint<26>(tmp_96_0_2_fu_2090_p1.read()) + sc_biguint<26>(p_Val2_12_0_2_fu_2029_p4.read()));
}

void FIRE4::thread_p_Val2_13_0_3_59_fu_7008_p3() {
    p_Val2_13_0_3_59_fu_7008_p3 = (!underflow_0_3_fu_6976_p2.read()[0].is_01())? sc_lv<26>(): ((underflow_0_3_fu_6976_p2.read()[0].to_bool())? ap_const_lv26_2000000: p_Val2_13_0_3_fu_6894_p2.read());
}

void FIRE4::thread_p_Val2_13_0_3_fu_6894_p2() {
    p_Val2_13_0_3_fu_6894_p2 = (!tmp_96_0_3_fu_6890_p1.read().is_01() || !p_Val2_12_0_3_fu_6829_p4.read().is_01())? sc_lv<26>(): (sc_biguint<26>(tmp_96_0_3_fu_6890_p1.read()) + sc_biguint<26>(p_Val2_12_0_3_fu_6829_p4.read()));
}

void FIRE4::thread_p_Val2_13_0_4_61_fu_7254_p3() {
    p_Val2_13_0_4_61_fu_7254_p3 = (!underflow_0_4_fu_7222_p2.read()[0].is_01())? sc_lv<26>(): ((underflow_0_4_fu_7222_p2.read()[0].to_bool())? ap_const_lv26_2000000: p_Val2_13_0_4_fu_7140_p2.read());
}

void FIRE4::thread_p_Val2_13_0_4_fu_7140_p2() {
    p_Val2_13_0_4_fu_7140_p2 = (!tmp_96_0_4_fu_7136_p1.read().is_01() || !p_Val2_12_0_4_fu_7075_p4.read().is_01())? sc_lv<26>(): (sc_biguint<26>(tmp_96_0_4_fu_7136_p1.read()) + sc_biguint<26>(p_Val2_12_0_4_fu_7075_p4.read()));
}

void FIRE4::thread_p_Val2_13_0_5_63_fu_7464_p3() {
    p_Val2_13_0_5_63_fu_7464_p3 = (!underflow_0_5_fu_7432_p2.read()[0].is_01())? sc_lv<26>(): ((underflow_0_5_fu_7432_p2.read()[0].to_bool())? ap_const_lv26_2000000: p_Val2_13_0_5_fu_7350_p2.read());
}

void FIRE4::thread_p_Val2_13_0_5_fu_7350_p2() {
    p_Val2_13_0_5_fu_7350_p2 = (!tmp_96_0_5_fu_7346_p1.read().is_01() || !p_Val2_12_0_5_fu_7285_p4.read().is_01())? sc_lv<26>(): (sc_biguint<26>(tmp_96_0_5_fu_7346_p1.read()) + sc_biguint<26>(p_Val2_12_0_5_fu_7285_p4.read()));
}

void FIRE4::thread_p_Val2_13_0_6_65_fu_7674_p3() {
    p_Val2_13_0_6_65_fu_7674_p3 = (!underflow_0_6_fu_7642_p2.read()[0].is_01())? sc_lv<26>(): ((underflow_0_6_fu_7642_p2.read()[0].to_bool())? ap_const_lv26_2000000: p_Val2_13_0_6_fu_7560_p2.read());
}

void FIRE4::thread_p_Val2_13_0_6_fu_7560_p2() {
    p_Val2_13_0_6_fu_7560_p2 = (!tmp_96_0_6_fu_7556_p1.read().is_01() || !p_Val2_12_0_6_fu_7495_p4.read().is_01())? sc_lv<26>(): (sc_biguint<26>(tmp_96_0_6_fu_7556_p1.read()) + sc_biguint<26>(p_Val2_12_0_6_fu_7495_p4.read()));
}

void FIRE4::thread_p_Val2_13_1_1_70_fu_2620_p3() {
    p_Val2_13_1_1_70_fu_2620_p3 = (!underflow_1_1_fu_2588_p2.read()[0].is_01())? sc_lv<26>(): ((underflow_1_1_fu_2588_p2.read()[0].to_bool())? ap_const_lv26_2000000: p_Val2_13_1_1_fu_2506_p2.read());
}

void FIRE4::thread_p_Val2_13_1_1_fu_2506_p2() {
    p_Val2_13_1_1_fu_2506_p2 = (!tmp_96_1_1_fu_2502_p1.read().is_01() || !p_Val2_12_1_1_fu_2441_p4.read().is_01())? sc_lv<26>(): (sc_biguint<26>(tmp_96_1_1_fu_2502_p1.read()) + sc_biguint<26>(p_Val2_12_1_1_fu_2441_p4.read()));
}

void FIRE4::thread_p_Val2_13_1_2_72_fu_2826_p3() {
    p_Val2_13_1_2_72_fu_2826_p3 = (!underflow_1_2_fu_2794_p2.read()[0].is_01())? sc_lv<26>(): ((underflow_1_2_fu_2794_p2.read()[0].to_bool())? ap_const_lv26_2000000: p_Val2_13_1_2_fu_2712_p2.read());
}

void FIRE4::thread_p_Val2_13_1_2_fu_2712_p2() {
    p_Val2_13_1_2_fu_2712_p2 = (!tmp_96_1_2_fu_2708_p1.read().is_01() || !p_Val2_12_1_2_fu_2647_p4.read().is_01())? sc_lv<26>(): (sc_biguint<26>(tmp_96_1_2_fu_2708_p1.read()) + sc_biguint<26>(p_Val2_12_1_2_fu_2647_p4.read()));
}

void FIRE4::thread_p_Val2_13_1_3_74_fu_8144_p3() {
    p_Val2_13_1_3_74_fu_8144_p3 = (!underflow_1_3_fu_8112_p2.read()[0].is_01())? sc_lv<26>(): ((underflow_1_3_fu_8112_p2.read()[0].to_bool())? ap_const_lv26_2000000: p_Val2_13_1_3_fu_8030_p2.read());
}

void FIRE4::thread_p_Val2_13_1_3_fu_8030_p2() {
    p_Val2_13_1_3_fu_8030_p2 = (!tmp_96_1_3_fu_8026_p1.read().is_01() || !p_Val2_12_1_3_fu_7965_p4.read().is_01())? sc_lv<26>(): (sc_biguint<26>(tmp_96_1_3_fu_8026_p1.read()) + sc_biguint<26>(p_Val2_12_1_3_fu_7965_p4.read()));
}

void FIRE4::thread_p_Val2_13_1_4_76_fu_8386_p3() {
    p_Val2_13_1_4_76_fu_8386_p3 = (!underflow_1_4_fu_8354_p2.read()[0].is_01())? sc_lv<26>(): ((underflow_1_4_fu_8354_p2.read()[0].to_bool())? ap_const_lv26_2000000: p_Val2_13_1_4_fu_8272_p2.read());
}

void FIRE4::thread_p_Val2_13_1_4_fu_8272_p2() {
    p_Val2_13_1_4_fu_8272_p2 = (!tmp_96_1_4_fu_8268_p1.read().is_01() || !p_Val2_12_1_4_fu_8207_p4.read().is_01())? sc_lv<26>(): (sc_biguint<26>(tmp_96_1_4_fu_8268_p1.read()) + sc_biguint<26>(p_Val2_12_1_4_fu_8207_p4.read()));
}

void FIRE4::thread_p_Val2_13_1_5_78_fu_8592_p3() {
    p_Val2_13_1_5_78_fu_8592_p3 = (!underflow_1_5_fu_8560_p2.read()[0].is_01())? sc_lv<26>(): ((underflow_1_5_fu_8560_p2.read()[0].to_bool())? ap_const_lv26_2000000: p_Val2_13_1_5_fu_8478_p2.read());
}

void FIRE4::thread_p_Val2_13_1_5_fu_8478_p2() {
    p_Val2_13_1_5_fu_8478_p2 = (!tmp_96_1_5_fu_8474_p1.read().is_01() || !p_Val2_12_1_5_fu_8413_p4.read().is_01())? sc_lv<26>(): (sc_biguint<26>(tmp_96_1_5_fu_8474_p1.read()) + sc_biguint<26>(p_Val2_12_1_5_fu_8413_p4.read()));
}

void FIRE4::thread_p_Val2_13_1_68_fu_2414_p3() {
    p_Val2_13_1_68_fu_2414_p3 = (!underflow_1_fu_2382_p2.read()[0].is_01())? sc_lv<26>(): ((underflow_1_fu_2382_p2.read()[0].to_bool())? ap_const_lv26_2000000: p_Val2_13_1_fu_2300_p2.read());
}

void FIRE4::thread_p_Val2_13_1_6_80_fu_8798_p3() {
    p_Val2_13_1_6_80_fu_8798_p3 = (!underflow_1_6_fu_8766_p2.read()[0].is_01())? sc_lv<26>(): ((underflow_1_6_fu_8766_p2.read()[0].to_bool())? ap_const_lv26_2000000: p_Val2_13_1_6_fu_8684_p2.read());
}

void FIRE4::thread_p_Val2_13_1_6_fu_8684_p2() {
    p_Val2_13_1_6_fu_8684_p2 = (!tmp_96_1_6_fu_8680_p1.read().is_01() || !p_Val2_12_1_6_fu_8619_p4.read().is_01())? sc_lv<26>(): (sc_biguint<26>(tmp_96_1_6_fu_8680_p1.read()) + sc_biguint<26>(p_Val2_12_1_6_fu_8619_p4.read()));
}

void FIRE4::thread_p_Val2_13_1_fu_2300_p2() {
    p_Val2_13_1_fu_2300_p2 = (!tmp_96_1_fu_2296_p1.read().is_01() || !p_Val2_12_1_fu_2235_p4.read().is_01())? sc_lv<26>(): (sc_biguint<26>(tmp_96_1_fu_2296_p1.read()) + sc_biguint<26>(p_Val2_12_1_fu_2235_p4.read()));
}

void FIRE4::thread_p_Val2_13_2_1_84_fu_3238_p3() {
    p_Val2_13_2_1_84_fu_3238_p3 = (!underflow_2_1_fu_3206_p2.read()[0].is_01())? sc_lv<26>(): ((underflow_2_1_fu_3206_p2.read()[0].to_bool())? ap_const_lv26_2000000: p_Val2_13_2_1_fu_3124_p2.read());
}

void FIRE4::thread_p_Val2_13_2_1_fu_3124_p2() {
    p_Val2_13_2_1_fu_3124_p2 = (!tmp_96_2_1_fu_3120_p1.read().is_01() || !p_Val2_12_2_1_fu_3059_p4.read().is_01())? sc_lv<26>(): (sc_biguint<26>(tmp_96_2_1_fu_3120_p1.read()) + sc_biguint<26>(p_Val2_12_2_1_fu_3059_p4.read()));
}

void FIRE4::thread_p_Val2_13_2_2_86_fu_3444_p3() {
    p_Val2_13_2_2_86_fu_3444_p3 = (!underflow_2_2_fu_3412_p2.read()[0].is_01())? sc_lv<26>(): ((underflow_2_2_fu_3412_p2.read()[0].to_bool())? ap_const_lv26_2000000: p_Val2_13_2_2_fu_3330_p2.read());
}

void FIRE4::thread_p_Val2_13_2_2_fu_3330_p2() {
    p_Val2_13_2_2_fu_3330_p2 = (!tmp_96_2_2_fu_3326_p1.read().is_01() || !p_Val2_12_2_2_fu_3265_p4.read().is_01())? sc_lv<26>(): (sc_biguint<26>(tmp_96_2_2_fu_3326_p1.read()) + sc_biguint<26>(p_Val2_12_2_2_fu_3265_p4.read()));
}

void FIRE4::thread_p_Val2_13_2_3_88_fu_9268_p3() {
    p_Val2_13_2_3_88_fu_9268_p3 = (!underflow_2_3_fu_9236_p2.read()[0].is_01())? sc_lv<26>(): ((underflow_2_3_fu_9236_p2.read()[0].to_bool())? ap_const_lv26_2000000: p_Val2_13_2_3_fu_9154_p2.read());
}

void FIRE4::thread_p_Val2_13_2_3_fu_9154_p2() {
    p_Val2_13_2_3_fu_9154_p2 = (!tmp_96_2_3_fu_9150_p1.read().is_01() || !p_Val2_12_2_3_fu_9089_p4.read().is_01())? sc_lv<26>(): (sc_biguint<26>(tmp_96_2_3_fu_9150_p1.read()) + sc_biguint<26>(p_Val2_12_2_3_fu_9089_p4.read()));
}

void FIRE4::thread_p_Val2_13_2_4_90_fu_9510_p3() {
    p_Val2_13_2_4_90_fu_9510_p3 = (!underflow_2_4_fu_9478_p2.read()[0].is_01())? sc_lv<26>(): ((underflow_2_4_fu_9478_p2.read()[0].to_bool())? ap_const_lv26_2000000: p_Val2_13_2_4_fu_9396_p2.read());
}

void FIRE4::thread_p_Val2_13_2_4_fu_9396_p2() {
    p_Val2_13_2_4_fu_9396_p2 = (!tmp_96_2_4_fu_9392_p1.read().is_01() || !p_Val2_12_2_4_fu_9331_p4.read().is_01())? sc_lv<26>(): (sc_biguint<26>(tmp_96_2_4_fu_9392_p1.read()) + sc_biguint<26>(p_Val2_12_2_4_fu_9331_p4.read()));
}

void FIRE4::thread_p_Val2_13_2_5_92_fu_9716_p3() {
    p_Val2_13_2_5_92_fu_9716_p3 = (!underflow_2_5_fu_9684_p2.read()[0].is_01())? sc_lv<26>(): ((underflow_2_5_fu_9684_p2.read()[0].to_bool())? ap_const_lv26_2000000: p_Val2_13_2_5_fu_9602_p2.read());
}

void FIRE4::thread_p_Val2_13_2_5_fu_9602_p2() {
    p_Val2_13_2_5_fu_9602_p2 = (!tmp_96_2_5_fu_9598_p1.read().is_01() || !p_Val2_12_2_5_fu_9537_p4.read().is_01())? sc_lv<26>(): (sc_biguint<26>(tmp_96_2_5_fu_9598_p1.read()) + sc_biguint<26>(p_Val2_12_2_5_fu_9537_p4.read()));
}

void FIRE4::thread_p_Val2_13_2_6_94_fu_9922_p3() {
    p_Val2_13_2_6_94_fu_9922_p3 = (!underflow_2_6_fu_9890_p2.read()[0].is_01())? sc_lv<26>(): ((underflow_2_6_fu_9890_p2.read()[0].to_bool())? ap_const_lv26_2000000: p_Val2_13_2_6_fu_9808_p2.read());
}

void FIRE4::thread_p_Val2_13_2_6_fu_9808_p2() {
    p_Val2_13_2_6_fu_9808_p2 = (!tmp_96_2_6_fu_9804_p1.read().is_01() || !p_Val2_12_2_6_fu_9743_p4.read().is_01())? sc_lv<26>(): (sc_biguint<26>(tmp_96_2_6_fu_9804_p1.read()) + sc_biguint<26>(p_Val2_12_2_6_fu_9743_p4.read()));
}

void FIRE4::thread_p_Val2_13_2_82_fu_3032_p3() {
    p_Val2_13_2_82_fu_3032_p3 = (!underflow_2_fu_3000_p2.read()[0].is_01())? sc_lv<26>(): ((underflow_2_fu_3000_p2.read()[0].to_bool())? ap_const_lv26_2000000: p_Val2_13_2_fu_2918_p2.read());
}

void FIRE4::thread_p_Val2_13_2_fu_2918_p2() {
    p_Val2_13_2_fu_2918_p2 = (!tmp_96_2_fu_2914_p1.read().is_01() || !p_Val2_12_2_fu_2853_p4.read().is_01())? sc_lv<26>(): (sc_biguint<26>(tmp_96_2_fu_2914_p1.read()) + sc_biguint<26>(p_Val2_12_2_fu_2853_p4.read()));
}

void FIRE4::thread_p_Val2_13_3_1_98_fu_3856_p3() {
    p_Val2_13_3_1_98_fu_3856_p3 = (!underflow_315_1_fu_3824_p2.read()[0].is_01())? sc_lv<26>(): ((underflow_315_1_fu_3824_p2.read()[0].to_bool())? ap_const_lv26_2000000: p_Val2_13_3_1_fu_3742_p2.read());
}

void FIRE4::thread_p_Val2_13_3_1_fu_3742_p2() {
    p_Val2_13_3_1_fu_3742_p2 = (!tmp_96_3_1_fu_3738_p1.read().is_01() || !p_Val2_12_3_1_fu_3677_p4.read().is_01())? sc_lv<26>(): (sc_biguint<26>(tmp_96_3_1_fu_3738_p1.read()) + sc_biguint<26>(p_Val2_12_3_1_fu_3677_p4.read()));
}

void FIRE4::thread_p_Val2_13_3_2_100_fu_4062_p3() {
    p_Val2_13_3_2_100_fu_4062_p3 = (!underflow_315_2_fu_4030_p2.read()[0].is_01())? sc_lv<26>(): ((underflow_315_2_fu_4030_p2.read()[0].to_bool())? ap_const_lv26_2000000: p_Val2_13_3_2_fu_3948_p2.read());
}

void FIRE4::thread_p_Val2_13_3_2_fu_3948_p2() {
    p_Val2_13_3_2_fu_3948_p2 = (!tmp_96_3_2_fu_3944_p1.read().is_01() || !p_Val2_12_3_2_fu_3883_p4.read().is_01())? sc_lv<26>(): (sc_biguint<26>(tmp_96_3_2_fu_3944_p1.read()) + sc_biguint<26>(p_Val2_12_3_2_fu_3883_p4.read()));
}

void FIRE4::thread_p_Val2_13_3_3_102_fu_10392_p3() {
    p_Val2_13_3_3_102_fu_10392_p3 = (!underflow_315_3_fu_10360_p2.read()[0].is_01())? sc_lv<26>(): ((underflow_315_3_fu_10360_p2.read()[0].to_bool())? ap_const_lv26_2000000: p_Val2_13_3_3_fu_10278_p2.read());
}

void FIRE4::thread_p_Val2_13_3_3_fu_10278_p2() {
    p_Val2_13_3_3_fu_10278_p2 = (!tmp_96_3_3_fu_10274_p1.read().is_01() || !p_Val2_12_3_3_fu_10213_p4.read().is_01())? sc_lv<26>(): (sc_biguint<26>(tmp_96_3_3_fu_10274_p1.read()) + sc_biguint<26>(p_Val2_12_3_3_fu_10213_p4.read()));
}

void FIRE4::thread_p_Val2_13_3_4_104_fu_10634_p3() {
    p_Val2_13_3_4_104_fu_10634_p3 = (!underflow_315_4_fu_10602_p2.read()[0].is_01())? sc_lv<26>(): ((underflow_315_4_fu_10602_p2.read()[0].to_bool())? ap_const_lv26_2000000: p_Val2_13_3_4_fu_10520_p2.read());
}

void FIRE4::thread_p_Val2_13_3_4_fu_10520_p2() {
    p_Val2_13_3_4_fu_10520_p2 = (!tmp_96_3_4_fu_10516_p1.read().is_01() || !p_Val2_12_3_4_fu_10455_p4.read().is_01())? sc_lv<26>(): (sc_biguint<26>(tmp_96_3_4_fu_10516_p1.read()) + sc_biguint<26>(p_Val2_12_3_4_fu_10455_p4.read()));
}

void FIRE4::thread_p_Val2_13_3_5_106_fu_10840_p3() {
    p_Val2_13_3_5_106_fu_10840_p3 = (!underflow_315_5_fu_10808_p2.read()[0].is_01())? sc_lv<26>(): ((underflow_315_5_fu_10808_p2.read()[0].to_bool())? ap_const_lv26_2000000: p_Val2_13_3_5_fu_10726_p2.read());
}

void FIRE4::thread_p_Val2_13_3_5_fu_10726_p2() {
    p_Val2_13_3_5_fu_10726_p2 = (!tmp_96_3_5_fu_10722_p1.read().is_01() || !p_Val2_12_3_5_fu_10661_p4.read().is_01())? sc_lv<26>(): (sc_biguint<26>(tmp_96_3_5_fu_10722_p1.read()) + sc_biguint<26>(p_Val2_12_3_5_fu_10661_p4.read()));
}

void FIRE4::thread_p_Val2_13_3_6_108_fu_11046_p3() {
    p_Val2_13_3_6_108_fu_11046_p3 = (!underflow_315_6_fu_11014_p2.read()[0].is_01())? sc_lv<26>(): ((underflow_315_6_fu_11014_p2.read()[0].to_bool())? ap_const_lv26_2000000: p_Val2_13_3_6_fu_10932_p2.read());
}

void FIRE4::thread_p_Val2_13_3_6_fu_10932_p2() {
    p_Val2_13_3_6_fu_10932_p2 = (!tmp_96_3_6_fu_10928_p1.read().is_01() || !p_Val2_12_3_6_fu_10867_p4.read().is_01())? sc_lv<26>(): (sc_biguint<26>(tmp_96_3_6_fu_10928_p1.read()) + sc_biguint<26>(p_Val2_12_3_6_fu_10867_p4.read()));
}

void FIRE4::thread_p_Val2_13_3_96_fu_3650_p3() {
    p_Val2_13_3_96_fu_3650_p3 = (!underflow_s_fu_3618_p2.read()[0].is_01())? sc_lv<26>(): ((underflow_s_fu_3618_p2.read()[0].to_bool())? ap_const_lv26_2000000: p_Val2_13_3_fu_3536_p2.read());
}

void FIRE4::thread_p_Val2_13_3_fu_3536_p2() {
    p_Val2_13_3_fu_3536_p2 = (!tmp_96_3_fu_3532_p1.read().is_01() || !p_Val2_12_3_fu_3471_p4.read().is_01())? sc_lv<26>(): (sc_biguint<26>(tmp_96_3_fu_3532_p1.read()) + sc_biguint<26>(p_Val2_12_3_fu_3471_p4.read()));
}

void FIRE4::thread_p_Val2_13_4_110_fu_4268_p3() {
    p_Val2_13_4_110_fu_4268_p3 = (!underflow_4_fu_4236_p2.read()[0].is_01())? sc_lv<26>(): ((underflow_4_fu_4236_p2.read()[0].to_bool())? ap_const_lv26_2000000: p_Val2_13_4_fu_4154_p2.read());
}

void FIRE4::thread_p_Val2_13_4_1_112_fu_4474_p3() {
    p_Val2_13_4_1_112_fu_4474_p3 = (!underflow_4_1_fu_4442_p2.read()[0].is_01())? sc_lv<26>(): ((underflow_4_1_fu_4442_p2.read()[0].to_bool())? ap_const_lv26_2000000: p_Val2_13_4_1_fu_4360_p2.read());
}

void FIRE4::thread_p_Val2_13_4_1_fu_4360_p2() {
    p_Val2_13_4_1_fu_4360_p2 = (!tmp_96_4_1_fu_4356_p1.read().is_01() || !p_Val2_12_4_1_fu_4295_p4.read().is_01())? sc_lv<26>(): (sc_biguint<26>(tmp_96_4_1_fu_4356_p1.read()) + sc_biguint<26>(p_Val2_12_4_1_fu_4295_p4.read()));
}

void FIRE4::thread_p_Val2_13_4_2_114_fu_4680_p3() {
    p_Val2_13_4_2_114_fu_4680_p3 = (!underflow_4_2_fu_4648_p2.read()[0].is_01())? sc_lv<26>(): ((underflow_4_2_fu_4648_p2.read()[0].to_bool())? ap_const_lv26_2000000: p_Val2_13_4_2_fu_4566_p2.read());
}

void FIRE4::thread_p_Val2_13_4_2_fu_4566_p2() {
    p_Val2_13_4_2_fu_4566_p2 = (!tmp_96_4_2_fu_4562_p1.read().is_01() || !p_Val2_12_4_2_fu_4501_p4.read().is_01())? sc_lv<26>(): (sc_biguint<26>(tmp_96_4_2_fu_4562_p1.read()) + sc_biguint<26>(p_Val2_12_4_2_fu_4501_p4.read()));
}

void FIRE4::thread_p_Val2_13_4_3_116_fu_11516_p3() {
    p_Val2_13_4_3_116_fu_11516_p3 = (!underflow_4_3_fu_11484_p2.read()[0].is_01())? sc_lv<26>(): ((underflow_4_3_fu_11484_p2.read()[0].to_bool())? ap_const_lv26_2000000: p_Val2_13_4_3_fu_11402_p2.read());
}

void FIRE4::thread_p_Val2_13_4_3_fu_11402_p2() {
    p_Val2_13_4_3_fu_11402_p2 = (!tmp_96_4_3_fu_11398_p1.read().is_01() || !p_Val2_12_4_3_fu_11337_p4.read().is_01())? sc_lv<26>(): (sc_biguint<26>(tmp_96_4_3_fu_11398_p1.read()) + sc_biguint<26>(p_Val2_12_4_3_fu_11337_p4.read()));
}

void FIRE4::thread_p_Val2_13_4_4_118_fu_11758_p3() {
    p_Val2_13_4_4_118_fu_11758_p3 = (!underflow_4_4_fu_11726_p2.read()[0].is_01())? sc_lv<26>(): ((underflow_4_4_fu_11726_p2.read()[0].to_bool())? ap_const_lv26_2000000: p_Val2_13_4_4_fu_11644_p2.read());
}

void FIRE4::thread_p_Val2_13_4_4_fu_11644_p2() {
    p_Val2_13_4_4_fu_11644_p2 = (!tmp_96_4_4_fu_11640_p1.read().is_01() || !p_Val2_12_4_4_fu_11579_p4.read().is_01())? sc_lv<26>(): (sc_biguint<26>(tmp_96_4_4_fu_11640_p1.read()) + sc_biguint<26>(p_Val2_12_4_4_fu_11579_p4.read()));
}

void FIRE4::thread_p_Val2_13_4_5_120_fu_11964_p3() {
    p_Val2_13_4_5_120_fu_11964_p3 = (!underflow_4_5_fu_11932_p2.read()[0].is_01())? sc_lv<26>(): ((underflow_4_5_fu_11932_p2.read()[0].to_bool())? ap_const_lv26_2000000: p_Val2_13_4_5_fu_11850_p2.read());
}

void FIRE4::thread_p_Val2_13_4_5_fu_11850_p2() {
    p_Val2_13_4_5_fu_11850_p2 = (!tmp_96_4_5_fu_11846_p1.read().is_01() || !p_Val2_12_4_5_fu_11785_p4.read().is_01())? sc_lv<26>(): (sc_biguint<26>(tmp_96_4_5_fu_11846_p1.read()) + sc_biguint<26>(p_Val2_12_4_5_fu_11785_p4.read()));
}

void FIRE4::thread_p_Val2_13_4_6_122_fu_12170_p3() {
    p_Val2_13_4_6_122_fu_12170_p3 = (!underflow_4_6_fu_12138_p2.read()[0].is_01())? sc_lv<26>(): ((underflow_4_6_fu_12138_p2.read()[0].to_bool())? ap_const_lv26_2000000: p_Val2_13_4_6_fu_12056_p2.read());
}

void FIRE4::thread_p_Val2_13_4_6_fu_12056_p2() {
    p_Val2_13_4_6_fu_12056_p2 = (!tmp_96_4_6_fu_12052_p1.read().is_01() || !p_Val2_12_4_6_fu_11991_p4.read().is_01())? sc_lv<26>(): (sc_biguint<26>(tmp_96_4_6_fu_12052_p1.read()) + sc_biguint<26>(p_Val2_12_4_6_fu_11991_p4.read()));
}

void FIRE4::thread_p_Val2_13_4_fu_4154_p2() {
    p_Val2_13_4_fu_4154_p2 = (!tmp_96_4_fu_4150_p1.read().is_01() || !p_Val2_12_4_fu_4089_p4.read().is_01())? sc_lv<26>(): (sc_biguint<26>(tmp_96_4_fu_4150_p1.read()) + sc_biguint<26>(p_Val2_12_4_fu_4089_p4.read()));
}

void FIRE4::thread_p_Val2_13_5_124_fu_4886_p3() {
    p_Val2_13_5_124_fu_4886_p3 = (!underflow_5_fu_4854_p2.read()[0].is_01())? sc_lv<26>(): ((underflow_5_fu_4854_p2.read()[0].to_bool())? ap_const_lv26_2000000: p_Val2_13_5_fu_4772_p2.read());
}

void FIRE4::thread_p_Val2_13_5_1_126_fu_5092_p3() {
    p_Val2_13_5_1_126_fu_5092_p3 = (!underflow_5_1_fu_5060_p2.read()[0].is_01())? sc_lv<26>(): ((underflow_5_1_fu_5060_p2.read()[0].to_bool())? ap_const_lv26_2000000: p_Val2_13_5_1_fu_4978_p2.read());
}

void FIRE4::thread_p_Val2_13_5_1_fu_4978_p2() {
    p_Val2_13_5_1_fu_4978_p2 = (!tmp_96_5_1_fu_4974_p1.read().is_01() || !p_Val2_12_5_1_fu_4913_p4.read().is_01())? sc_lv<26>(): (sc_biguint<26>(tmp_96_5_1_fu_4974_p1.read()) + sc_biguint<26>(p_Val2_12_5_1_fu_4913_p4.read()));
}

void FIRE4::thread_p_Val2_13_5_2_128_fu_5298_p3() {
    p_Val2_13_5_2_128_fu_5298_p3 = (!underflow_5_2_fu_5266_p2.read()[0].is_01())? sc_lv<26>(): ((underflow_5_2_fu_5266_p2.read()[0].to_bool())? ap_const_lv26_2000000: p_Val2_13_5_2_fu_5184_p2.read());
}

void FIRE4::thread_p_Val2_13_5_2_fu_5184_p2() {
    p_Val2_13_5_2_fu_5184_p2 = (!tmp_96_5_2_fu_5180_p1.read().is_01() || !p_Val2_12_5_2_fu_5119_p4.read().is_01())? sc_lv<26>(): (sc_biguint<26>(tmp_96_5_2_fu_5180_p1.read()) + sc_biguint<26>(p_Val2_12_5_2_fu_5119_p4.read()));
}

void FIRE4::thread_p_Val2_13_5_3_130_fu_12640_p3() {
    p_Val2_13_5_3_130_fu_12640_p3 = (!underflow_5_3_fu_12608_p2.read()[0].is_01())? sc_lv<26>(): ((underflow_5_3_fu_12608_p2.read()[0].to_bool())? ap_const_lv26_2000000: p_Val2_13_5_3_fu_12526_p2.read());
}

void FIRE4::thread_p_Val2_13_5_3_fu_12526_p2() {
    p_Val2_13_5_3_fu_12526_p2 = (!tmp_96_5_3_fu_12522_p1.read().is_01() || !p_Val2_12_5_3_fu_12461_p4.read().is_01())? sc_lv<26>(): (sc_biguint<26>(tmp_96_5_3_fu_12522_p1.read()) + sc_biguint<26>(p_Val2_12_5_3_fu_12461_p4.read()));
}

void FIRE4::thread_p_Val2_13_5_4_132_fu_12882_p3() {
    p_Val2_13_5_4_132_fu_12882_p3 = (!underflow_5_4_fu_12850_p2.read()[0].is_01())? sc_lv<26>(): ((underflow_5_4_fu_12850_p2.read()[0].to_bool())? ap_const_lv26_2000000: p_Val2_13_5_4_fu_12768_p2.read());
}

void FIRE4::thread_p_Val2_13_5_4_fu_12768_p2() {
    p_Val2_13_5_4_fu_12768_p2 = (!tmp_96_5_4_fu_12764_p1.read().is_01() || !p_Val2_12_5_4_fu_12703_p4.read().is_01())? sc_lv<26>(): (sc_biguint<26>(tmp_96_5_4_fu_12764_p1.read()) + sc_biguint<26>(p_Val2_12_5_4_fu_12703_p4.read()));
}

void FIRE4::thread_p_Val2_13_5_5_134_fu_13088_p3() {
    p_Val2_13_5_5_134_fu_13088_p3 = (!underflow_5_5_fu_13056_p2.read()[0].is_01())? sc_lv<26>(): ((underflow_5_5_fu_13056_p2.read()[0].to_bool())? ap_const_lv26_2000000: p_Val2_13_5_5_fu_12974_p2.read());
}

void FIRE4::thread_p_Val2_13_5_5_fu_12974_p2() {
    p_Val2_13_5_5_fu_12974_p2 = (!tmp_96_5_5_fu_12970_p1.read().is_01() || !p_Val2_12_5_5_fu_12909_p4.read().is_01())? sc_lv<26>(): (sc_biguint<26>(tmp_96_5_5_fu_12970_p1.read()) + sc_biguint<26>(p_Val2_12_5_5_fu_12909_p4.read()));
}

void FIRE4::thread_p_Val2_13_5_6_136_fu_13294_p3() {
    p_Val2_13_5_6_136_fu_13294_p3 = (!underflow_5_6_fu_13262_p2.read()[0].is_01())? sc_lv<26>(): ((underflow_5_6_fu_13262_p2.read()[0].to_bool())? ap_const_lv26_2000000: p_Val2_13_5_6_fu_13180_p2.read());
}

void FIRE4::thread_p_Val2_13_5_6_fu_13180_p2() {
    p_Val2_13_5_6_fu_13180_p2 = (!tmp_96_5_6_fu_13176_p1.read().is_01() || !p_Val2_12_5_6_fu_13115_p4.read().is_01())? sc_lv<26>(): (sc_biguint<26>(tmp_96_5_6_fu_13176_p1.read()) + sc_biguint<26>(p_Val2_12_5_6_fu_13115_p4.read()));
}

void FIRE4::thread_p_Val2_13_5_fu_4772_p2() {
    p_Val2_13_5_fu_4772_p2 = (!tmp_96_5_fu_4768_p1.read().is_01() || !p_Val2_12_5_fu_4707_p4.read().is_01())? sc_lv<26>(): (sc_biguint<26>(tmp_96_5_fu_4768_p1.read()) + sc_biguint<26>(p_Val2_12_5_fu_4707_p4.read()));
}

void FIRE4::thread_p_Val2_13_6_138_fu_5504_p3() {
    p_Val2_13_6_138_fu_5504_p3 = (!underflow_6_fu_5472_p2.read()[0].is_01())? sc_lv<26>(): ((underflow_6_fu_5472_p2.read()[0].to_bool())? ap_const_lv26_2000000: p_Val2_13_6_fu_5390_p2.read());
}

void FIRE4::thread_p_Val2_13_6_1_140_fu_5710_p3() {
    p_Val2_13_6_1_140_fu_5710_p3 = (!underflow_6_1_fu_5678_p2.read()[0].is_01())? sc_lv<26>(): ((underflow_6_1_fu_5678_p2.read()[0].to_bool())? ap_const_lv26_2000000: p_Val2_13_6_1_fu_5596_p2.read());
}

void FIRE4::thread_p_Val2_13_6_1_fu_5596_p2() {
    p_Val2_13_6_1_fu_5596_p2 = (!tmp_96_6_1_fu_5592_p1.read().is_01() || !p_Val2_12_6_1_fu_5531_p4.read().is_01())? sc_lv<26>(): (sc_biguint<26>(tmp_96_6_1_fu_5592_p1.read()) + sc_biguint<26>(p_Val2_12_6_1_fu_5531_p4.read()));
}

void FIRE4::thread_p_Val2_13_6_2_142_fu_5916_p3() {
    p_Val2_13_6_2_142_fu_5916_p3 = (!underflow_6_2_fu_5884_p2.read()[0].is_01())? sc_lv<26>(): ((underflow_6_2_fu_5884_p2.read()[0].to_bool())? ap_const_lv26_2000000: p_Val2_13_6_2_fu_5802_p2.read());
}

void FIRE4::thread_p_Val2_13_6_2_fu_5802_p2() {
    p_Val2_13_6_2_fu_5802_p2 = (!tmp_96_6_2_fu_5798_p1.read().is_01() || !p_Val2_12_6_2_fu_5737_p4.read().is_01())? sc_lv<26>(): (sc_biguint<26>(tmp_96_6_2_fu_5798_p1.read()) + sc_biguint<26>(p_Val2_12_6_2_fu_5737_p4.read()));
}

void FIRE4::thread_p_Val2_13_6_3_144_fu_13764_p3() {
    p_Val2_13_6_3_144_fu_13764_p3 = (!underflow_6_3_fu_13732_p2.read()[0].is_01())? sc_lv<26>(): ((underflow_6_3_fu_13732_p2.read()[0].to_bool())? ap_const_lv26_2000000: p_Val2_13_6_3_fu_13650_p2.read());
}

void FIRE4::thread_p_Val2_13_6_3_fu_13650_p2() {
    p_Val2_13_6_3_fu_13650_p2 = (!tmp_96_6_3_fu_13646_p1.read().is_01() || !p_Val2_12_6_3_fu_13585_p4.read().is_01())? sc_lv<26>(): (sc_biguint<26>(tmp_96_6_3_fu_13646_p1.read()) + sc_biguint<26>(p_Val2_12_6_3_fu_13585_p4.read()));
}

void FIRE4::thread_p_Val2_13_6_4_146_fu_14006_p3() {
    p_Val2_13_6_4_146_fu_14006_p3 = (!underflow_6_4_fu_13974_p2.read()[0].is_01())? sc_lv<26>(): ((underflow_6_4_fu_13974_p2.read()[0].to_bool())? ap_const_lv26_2000000: p_Val2_13_6_4_fu_13892_p2.read());
}

void FIRE4::thread_p_Val2_13_6_4_fu_13892_p2() {
    p_Val2_13_6_4_fu_13892_p2 = (!tmp_96_6_4_fu_13888_p1.read().is_01() || !p_Val2_12_6_4_fu_13827_p4.read().is_01())? sc_lv<26>(): (sc_biguint<26>(tmp_96_6_4_fu_13888_p1.read()) + sc_biguint<26>(p_Val2_12_6_4_fu_13827_p4.read()));
}

void FIRE4::thread_p_Val2_13_6_5_148_fu_14212_p3() {
    p_Val2_13_6_5_148_fu_14212_p3 = (!underflow_6_5_fu_14180_p2.read()[0].is_01())? sc_lv<26>(): ((underflow_6_5_fu_14180_p2.read()[0].to_bool())? ap_const_lv26_2000000: p_Val2_13_6_5_fu_14098_p2.read());
}

void FIRE4::thread_p_Val2_13_6_5_fu_14098_p2() {
    p_Val2_13_6_5_fu_14098_p2 = (!tmp_96_6_5_fu_14094_p1.read().is_01() || !p_Val2_12_6_5_fu_14033_p4.read().is_01())? sc_lv<26>(): (sc_biguint<26>(tmp_96_6_5_fu_14094_p1.read()) + sc_biguint<26>(p_Val2_12_6_5_fu_14033_p4.read()));
}

void FIRE4::thread_p_Val2_13_6_6_150_fu_14418_p3() {
    p_Val2_13_6_6_150_fu_14418_p3 = (!underflow_6_6_fu_14386_p2.read()[0].is_01())? sc_lv<26>(): ((underflow_6_6_fu_14386_p2.read()[0].to_bool())? ap_const_lv26_2000000: p_Val2_13_6_6_fu_14304_p2.read());
}

void FIRE4::thread_p_Val2_13_6_6_fu_14304_p2() {
    p_Val2_13_6_6_fu_14304_p2 = (!tmp_96_6_6_fu_14300_p1.read().is_01() || !p_Val2_12_6_6_fu_14239_p4.read().is_01())? sc_lv<26>(): (sc_biguint<26>(tmp_96_6_6_fu_14300_p1.read()) + sc_biguint<26>(p_Val2_12_6_6_fu_14239_p4.read()));
}

void FIRE4::thread_p_Val2_13_6_fu_5390_p2() {
    p_Val2_13_6_fu_5390_p2 = (!tmp_96_6_fu_5386_p1.read().is_01() || !p_Val2_12_6_fu_5325_p4.read().is_01())? sc_lv<26>(): (sc_biguint<26>(tmp_96_6_fu_5386_p1.read()) + sc_biguint<26>(p_Val2_12_6_fu_5325_p4.read()));
}

void FIRE4::thread_p_Val2_13_7_152_fu_6122_p3() {
    p_Val2_13_7_152_fu_6122_p3 = (!underflow_7_fu_6090_p2.read()[0].is_01())? sc_lv<26>(): ((underflow_7_fu_6090_p2.read()[0].to_bool())? ap_const_lv26_2000000: p_Val2_13_7_fu_6008_p2.read());
}

void FIRE4::thread_p_Val2_13_7_1_154_fu_6328_p3() {
    p_Val2_13_7_1_154_fu_6328_p3 = (!underflow_7_1_fu_6296_p2.read()[0].is_01())? sc_lv<26>(): ((underflow_7_1_fu_6296_p2.read()[0].to_bool())? ap_const_lv26_2000000: p_Val2_13_7_1_fu_6214_p2.read());
}

void FIRE4::thread_p_Val2_13_7_1_fu_6214_p2() {
    p_Val2_13_7_1_fu_6214_p2 = (!tmp_96_7_1_fu_6210_p1.read().is_01() || !p_Val2_12_7_1_fu_6149_p4.read().is_01())? sc_lv<26>(): (sc_biguint<26>(tmp_96_7_1_fu_6210_p1.read()) + sc_biguint<26>(p_Val2_12_7_1_fu_6149_p4.read()));
}

void FIRE4::thread_p_Val2_13_7_2_156_fu_6534_p3() {
    p_Val2_13_7_2_156_fu_6534_p3 = (!underflow_7_2_fu_6502_p2.read()[0].is_01())? sc_lv<26>(): ((underflow_7_2_fu_6502_p2.read()[0].to_bool())? ap_const_lv26_2000000: p_Val2_13_7_2_fu_6420_p2.read());
}

void FIRE4::thread_p_Val2_13_7_2_fu_6420_p2() {
    p_Val2_13_7_2_fu_6420_p2 = (!tmp_96_7_2_fu_6416_p1.read().is_01() || !p_Val2_12_7_2_fu_6355_p4.read().is_01())? sc_lv<26>(): (sc_biguint<26>(tmp_96_7_2_fu_6416_p1.read()) + sc_biguint<26>(p_Val2_12_7_2_fu_6355_p4.read()));
}

void FIRE4::thread_p_Val2_13_7_3_158_fu_14888_p3() {
    p_Val2_13_7_3_158_fu_14888_p3 = (!underflow_7_3_fu_14856_p2.read()[0].is_01())? sc_lv<26>(): ((underflow_7_3_fu_14856_p2.read()[0].to_bool())? ap_const_lv26_2000000: p_Val2_13_7_3_fu_14774_p2.read());
}

void FIRE4::thread_p_Val2_13_7_3_fu_14774_p2() {
    p_Val2_13_7_3_fu_14774_p2 = (!tmp_96_7_3_fu_14770_p1.read().is_01() || !p_Val2_12_7_3_fu_14709_p4.read().is_01())? sc_lv<26>(): (sc_biguint<26>(tmp_96_7_3_fu_14770_p1.read()) + sc_biguint<26>(p_Val2_12_7_3_fu_14709_p4.read()));
}

void FIRE4::thread_p_Val2_13_7_4_160_fu_15130_p3() {
    p_Val2_13_7_4_160_fu_15130_p3 = (!underflow_7_4_fu_15098_p2.read()[0].is_01())? sc_lv<26>(): ((underflow_7_4_fu_15098_p2.read()[0].to_bool())? ap_const_lv26_2000000: p_Val2_13_7_4_fu_15016_p2.read());
}

void FIRE4::thread_p_Val2_13_7_4_fu_15016_p2() {
    p_Val2_13_7_4_fu_15016_p2 = (!tmp_96_7_4_fu_15012_p1.read().is_01() || !p_Val2_12_7_4_fu_14951_p4.read().is_01())? sc_lv<26>(): (sc_biguint<26>(tmp_96_7_4_fu_15012_p1.read()) + sc_biguint<26>(p_Val2_12_7_4_fu_14951_p4.read()));
}

void FIRE4::thread_p_Val2_13_7_5_162_fu_15336_p3() {
    p_Val2_13_7_5_162_fu_15336_p3 = (!underflow_7_5_fu_15304_p2.read()[0].is_01())? sc_lv<26>(): ((underflow_7_5_fu_15304_p2.read()[0].to_bool())? ap_const_lv26_2000000: p_Val2_13_7_5_fu_15222_p2.read());
}

void FIRE4::thread_p_Val2_13_7_5_fu_15222_p2() {
    p_Val2_13_7_5_fu_15222_p2 = (!tmp_96_7_5_fu_15218_p1.read().is_01() || !p_Val2_12_7_5_fu_15157_p4.read().is_01())? sc_lv<26>(): (sc_biguint<26>(tmp_96_7_5_fu_15218_p1.read()) + sc_biguint<26>(p_Val2_12_7_5_fu_15157_p4.read()));
}

void FIRE4::thread_p_Val2_13_7_6_164_fu_15542_p3() {
    p_Val2_13_7_6_164_fu_15542_p3 = (!underflow_7_6_fu_15510_p2.read()[0].is_01())? sc_lv<26>(): ((underflow_7_6_fu_15510_p2.read()[0].to_bool())? ap_const_lv26_2000000: p_Val2_13_7_6_fu_15428_p2.read());
}

void FIRE4::thread_p_Val2_13_7_6_fu_15428_p2() {
    p_Val2_13_7_6_fu_15428_p2 = (!tmp_96_7_6_fu_15424_p1.read().is_01() || !p_Val2_12_7_6_fu_15363_p4.read().is_01())? sc_lv<26>(): (sc_biguint<26>(tmp_96_7_6_fu_15424_p1.read()) + sc_biguint<26>(p_Val2_12_7_6_fu_15363_p4.read()));
}

void FIRE4::thread_p_Val2_13_7_fu_6008_p2() {
    p_Val2_13_7_fu_6008_p2 = (!tmp_96_7_fu_6004_p1.read().is_01() || !p_Val2_12_7_fu_5943_p4.read().is_01())? sc_lv<26>(): (sc_biguint<26>(tmp_96_7_fu_6004_p1.read()) + sc_biguint<26>(p_Val2_12_7_fu_5943_p4.read()));
}

void FIRE4::thread_p_Val2_13_mux_0_1_fu_1990_p3() {
    p_Val2_13_mux_0_1_fu_1990_p3 = (!brmerge_i_i_0_1_fu_1972_p2.read()[0].is_01())? sc_lv<26>(): ((brmerge_i_i_0_1_fu_1972_p2.read()[0].to_bool())? ap_const_lv26_1FFFFFF: p_Val2_13_0_1_fu_1884_p2.read());
}

void FIRE4::thread_p_Val2_13_mux_0_2_fu_2200_p3() {
    p_Val2_13_mux_0_2_fu_2200_p3 = (!brmerge_i_i_0_2_fu_2182_p2.read()[0].is_01())? sc_lv<26>(): ((brmerge_i_i_0_2_fu_2182_p2.read()[0].to_bool())? ap_const_lv26_1FFFFFF: p_Val2_13_0_2_fu_2094_p2.read());
}

void FIRE4::thread_p_Val2_13_mux_0_3_fu_7000_p3() {
    p_Val2_13_mux_0_3_fu_7000_p3 = (!brmerge_i_i_0_3_fu_6982_p2.read()[0].is_01())? sc_lv<26>(): ((brmerge_i_i_0_3_fu_6982_p2.read()[0].to_bool())? ap_const_lv26_1FFFFFF: p_Val2_13_0_3_fu_6894_p2.read());
}

void FIRE4::thread_p_Val2_13_mux_0_4_fu_7246_p3() {
    p_Val2_13_mux_0_4_fu_7246_p3 = (!brmerge_i_i_0_4_fu_7228_p2.read()[0].is_01())? sc_lv<26>(): ((brmerge_i_i_0_4_fu_7228_p2.read()[0].to_bool())? ap_const_lv26_1FFFFFF: p_Val2_13_0_4_fu_7140_p2.read());
}

void FIRE4::thread_p_Val2_13_mux_0_5_fu_7456_p3() {
    p_Val2_13_mux_0_5_fu_7456_p3 = (!brmerge_i_i_0_5_fu_7438_p2.read()[0].is_01())? sc_lv<26>(): ((brmerge_i_i_0_5_fu_7438_p2.read()[0].to_bool())? ap_const_lv26_1FFFFFF: p_Val2_13_0_5_fu_7350_p2.read());
}

void FIRE4::thread_p_Val2_13_mux_0_6_fu_7666_p3() {
    p_Val2_13_mux_0_6_fu_7666_p3 = (!brmerge_i_i_0_6_fu_7648_p2.read()[0].is_01())? sc_lv<26>(): ((brmerge_i_i_0_6_fu_7648_p2.read()[0].to_bool())? ap_const_lv26_1FFFFFF: p_Val2_13_0_6_fu_7560_p2.read());
}

void FIRE4::thread_p_Val2_13_mux_1_1_fu_2612_p3() {
    p_Val2_13_mux_1_1_fu_2612_p3 = (!brmerge_i_i_1_1_fu_2594_p2.read()[0].is_01())? sc_lv<26>(): ((brmerge_i_i_1_1_fu_2594_p2.read()[0].to_bool())? ap_const_lv26_1FFFFFF: p_Val2_13_1_1_fu_2506_p2.read());
}

void FIRE4::thread_p_Val2_13_mux_1_2_fu_2818_p3() {
    p_Val2_13_mux_1_2_fu_2818_p3 = (!brmerge_i_i_1_2_fu_2800_p2.read()[0].is_01())? sc_lv<26>(): ((brmerge_i_i_1_2_fu_2800_p2.read()[0].to_bool())? ap_const_lv26_1FFFFFF: p_Val2_13_1_2_fu_2712_p2.read());
}

void FIRE4::thread_p_Val2_13_mux_1_3_fu_8136_p3() {
    p_Val2_13_mux_1_3_fu_8136_p3 = (!brmerge_i_i_1_3_fu_8118_p2.read()[0].is_01())? sc_lv<26>(): ((brmerge_i_i_1_3_fu_8118_p2.read()[0].to_bool())? ap_const_lv26_1FFFFFF: p_Val2_13_1_3_fu_8030_p2.read());
}

void FIRE4::thread_p_Val2_13_mux_1_4_fu_8378_p3() {
    p_Val2_13_mux_1_4_fu_8378_p3 = (!brmerge_i_i_1_4_fu_8360_p2.read()[0].is_01())? sc_lv<26>(): ((brmerge_i_i_1_4_fu_8360_p2.read()[0].to_bool())? ap_const_lv26_1FFFFFF: p_Val2_13_1_4_fu_8272_p2.read());
}

void FIRE4::thread_p_Val2_13_mux_1_5_fu_8584_p3() {
    p_Val2_13_mux_1_5_fu_8584_p3 = (!brmerge_i_i_1_5_fu_8566_p2.read()[0].is_01())? sc_lv<26>(): ((brmerge_i_i_1_5_fu_8566_p2.read()[0].to_bool())? ap_const_lv26_1FFFFFF: p_Val2_13_1_5_fu_8478_p2.read());
}

void FIRE4::thread_p_Val2_13_mux_1_6_fu_8790_p3() {
    p_Val2_13_mux_1_6_fu_8790_p3 = (!brmerge_i_i_1_6_fu_8772_p2.read()[0].is_01())? sc_lv<26>(): ((brmerge_i_i_1_6_fu_8772_p2.read()[0].to_bool())? ap_const_lv26_1FFFFFF: p_Val2_13_1_6_fu_8684_p2.read());
}

void FIRE4::thread_p_Val2_13_mux_1_fu_2406_p3() {
    p_Val2_13_mux_1_fu_2406_p3 = (!brmerge_i_i_1_fu_2388_p2.read()[0].is_01())? sc_lv<26>(): ((brmerge_i_i_1_fu_2388_p2.read()[0].to_bool())? ap_const_lv26_1FFFFFF: p_Val2_13_1_fu_2300_p2.read());
}

void FIRE4::thread_p_Val2_13_mux_2_1_fu_3230_p3() {
    p_Val2_13_mux_2_1_fu_3230_p3 = (!brmerge_i_i_2_1_fu_3212_p2.read()[0].is_01())? sc_lv<26>(): ((brmerge_i_i_2_1_fu_3212_p2.read()[0].to_bool())? ap_const_lv26_1FFFFFF: p_Val2_13_2_1_fu_3124_p2.read());
}

void FIRE4::thread_p_Val2_13_mux_2_2_fu_3436_p3() {
    p_Val2_13_mux_2_2_fu_3436_p3 = (!brmerge_i_i_2_2_fu_3418_p2.read()[0].is_01())? sc_lv<26>(): ((brmerge_i_i_2_2_fu_3418_p2.read()[0].to_bool())? ap_const_lv26_1FFFFFF: p_Val2_13_2_2_fu_3330_p2.read());
}

void FIRE4::thread_p_Val2_13_mux_2_3_fu_9260_p3() {
    p_Val2_13_mux_2_3_fu_9260_p3 = (!brmerge_i_i_2_3_fu_9242_p2.read()[0].is_01())? sc_lv<26>(): ((brmerge_i_i_2_3_fu_9242_p2.read()[0].to_bool())? ap_const_lv26_1FFFFFF: p_Val2_13_2_3_fu_9154_p2.read());
}

void FIRE4::thread_p_Val2_13_mux_2_4_fu_9502_p3() {
    p_Val2_13_mux_2_4_fu_9502_p3 = (!brmerge_i_i_2_4_fu_9484_p2.read()[0].is_01())? sc_lv<26>(): ((brmerge_i_i_2_4_fu_9484_p2.read()[0].to_bool())? ap_const_lv26_1FFFFFF: p_Val2_13_2_4_fu_9396_p2.read());
}

void FIRE4::thread_p_Val2_13_mux_2_5_fu_9708_p3() {
    p_Val2_13_mux_2_5_fu_9708_p3 = (!brmerge_i_i_2_5_fu_9690_p2.read()[0].is_01())? sc_lv<26>(): ((brmerge_i_i_2_5_fu_9690_p2.read()[0].to_bool())? ap_const_lv26_1FFFFFF: p_Val2_13_2_5_fu_9602_p2.read());
}

void FIRE4::thread_p_Val2_13_mux_2_6_fu_9914_p3() {
    p_Val2_13_mux_2_6_fu_9914_p3 = (!brmerge_i_i_2_6_fu_9896_p2.read()[0].is_01())? sc_lv<26>(): ((brmerge_i_i_2_6_fu_9896_p2.read()[0].to_bool())? ap_const_lv26_1FFFFFF: p_Val2_13_2_6_fu_9808_p2.read());
}

void FIRE4::thread_p_Val2_13_mux_2_fu_3024_p3() {
    p_Val2_13_mux_2_fu_3024_p3 = (!brmerge_i_i_2_fu_3006_p2.read()[0].is_01())? sc_lv<26>(): ((brmerge_i_i_2_fu_3006_p2.read()[0].to_bool())? ap_const_lv26_1FFFFFF: p_Val2_13_2_fu_2918_p2.read());
}

void FIRE4::thread_p_Val2_13_mux_3_1_fu_3848_p3() {
    p_Val2_13_mux_3_1_fu_3848_p3 = (!brmerge_i_i_3_1_fu_3830_p2.read()[0].is_01())? sc_lv<26>(): ((brmerge_i_i_3_1_fu_3830_p2.read()[0].to_bool())? ap_const_lv26_1FFFFFF: p_Val2_13_3_1_fu_3742_p2.read());
}

void FIRE4::thread_p_Val2_13_mux_3_2_fu_4054_p3() {
    p_Val2_13_mux_3_2_fu_4054_p3 = (!brmerge_i_i_3_2_fu_4036_p2.read()[0].is_01())? sc_lv<26>(): ((brmerge_i_i_3_2_fu_4036_p2.read()[0].to_bool())? ap_const_lv26_1FFFFFF: p_Val2_13_3_2_fu_3948_p2.read());
}

void FIRE4::thread_p_Val2_13_mux_3_3_fu_10384_p3() {
    p_Val2_13_mux_3_3_fu_10384_p3 = (!brmerge_i_i_3_3_fu_10366_p2.read()[0].is_01())? sc_lv<26>(): ((brmerge_i_i_3_3_fu_10366_p2.read()[0].to_bool())? ap_const_lv26_1FFFFFF: p_Val2_13_3_3_fu_10278_p2.read());
}

void FIRE4::thread_p_Val2_13_mux_3_4_fu_10626_p3() {
    p_Val2_13_mux_3_4_fu_10626_p3 = (!brmerge_i_i_3_4_fu_10608_p2.read()[0].is_01())? sc_lv<26>(): ((brmerge_i_i_3_4_fu_10608_p2.read()[0].to_bool())? ap_const_lv26_1FFFFFF: p_Val2_13_3_4_fu_10520_p2.read());
}

void FIRE4::thread_p_Val2_13_mux_3_5_fu_10832_p3() {
    p_Val2_13_mux_3_5_fu_10832_p3 = (!brmerge_i_i_3_5_fu_10814_p2.read()[0].is_01())? sc_lv<26>(): ((brmerge_i_i_3_5_fu_10814_p2.read()[0].to_bool())? ap_const_lv26_1FFFFFF: p_Val2_13_3_5_fu_10726_p2.read());
}

void FIRE4::thread_p_Val2_13_mux_3_6_fu_11038_p3() {
    p_Val2_13_mux_3_6_fu_11038_p3 = (!brmerge_i_i_3_6_fu_11020_p2.read()[0].is_01())? sc_lv<26>(): ((brmerge_i_i_3_6_fu_11020_p2.read()[0].to_bool())? ap_const_lv26_1FFFFFF: p_Val2_13_3_6_fu_10932_p2.read());
}

void FIRE4::thread_p_Val2_13_mux_3_fu_3642_p3() {
    p_Val2_13_mux_3_fu_3642_p3 = (!brmerge_i_i_3_fu_3624_p2.read()[0].is_01())? sc_lv<26>(): ((brmerge_i_i_3_fu_3624_p2.read()[0].to_bool())? ap_const_lv26_1FFFFFF: p_Val2_13_3_fu_3536_p2.read());
}

void FIRE4::thread_p_Val2_13_mux_4_1_fu_4466_p3() {
    p_Val2_13_mux_4_1_fu_4466_p3 = (!brmerge_i_i_4_1_fu_4448_p2.read()[0].is_01())? sc_lv<26>(): ((brmerge_i_i_4_1_fu_4448_p2.read()[0].to_bool())? ap_const_lv26_1FFFFFF: p_Val2_13_4_1_fu_4360_p2.read());
}

void FIRE4::thread_p_Val2_13_mux_4_2_fu_4672_p3() {
    p_Val2_13_mux_4_2_fu_4672_p3 = (!brmerge_i_i_4_2_fu_4654_p2.read()[0].is_01())? sc_lv<26>(): ((brmerge_i_i_4_2_fu_4654_p2.read()[0].to_bool())? ap_const_lv26_1FFFFFF: p_Val2_13_4_2_fu_4566_p2.read());
}

void FIRE4::thread_p_Val2_13_mux_4_3_fu_11508_p3() {
    p_Val2_13_mux_4_3_fu_11508_p3 = (!brmerge_i_i_4_3_fu_11490_p2.read()[0].is_01())? sc_lv<26>(): ((brmerge_i_i_4_3_fu_11490_p2.read()[0].to_bool())? ap_const_lv26_1FFFFFF: p_Val2_13_4_3_fu_11402_p2.read());
}

void FIRE4::thread_p_Val2_13_mux_4_4_fu_11750_p3() {
    p_Val2_13_mux_4_4_fu_11750_p3 = (!brmerge_i_i_4_4_fu_11732_p2.read()[0].is_01())? sc_lv<26>(): ((brmerge_i_i_4_4_fu_11732_p2.read()[0].to_bool())? ap_const_lv26_1FFFFFF: p_Val2_13_4_4_fu_11644_p2.read());
}

void FIRE4::thread_p_Val2_13_mux_4_5_fu_11956_p3() {
    p_Val2_13_mux_4_5_fu_11956_p3 = (!brmerge_i_i_4_5_fu_11938_p2.read()[0].is_01())? sc_lv<26>(): ((brmerge_i_i_4_5_fu_11938_p2.read()[0].to_bool())? ap_const_lv26_1FFFFFF: p_Val2_13_4_5_fu_11850_p2.read());
}

}

