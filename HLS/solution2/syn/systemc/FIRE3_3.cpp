#include "FIRE3.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void FIRE3::thread_IFM_0_address0() {
    IFM_0_address0 =  (sc_lv<8>) (tmp_44_cast_fu_12318_p1.read());
}

void FIRE3::thread_IFM_0_address1() {
    IFM_0_address1 =  (sc_lv<8>) (tmp_44_cast_fu_12318_p1.read());
}

void FIRE3::thread_IFM_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1))) {
        IFM_0_ce0 = ap_const_logic_1;
    } else {
        IFM_0_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_IFM_0_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1))) {
        IFM_0_ce1 = ap_const_logic_1;
    } else {
        IFM_0_ce1 = ap_const_logic_0;
    }
}

void FIRE3::thread_IFM_1_address0() {
    IFM_1_address0 = IFM_1_addr_reg_13659.read();
}

void FIRE3::thread_IFM_1_address1() {
    IFM_1_address1 = IFM_1_addr_reg_13659.read();
}

void FIRE3::thread_IFM_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        IFM_1_ce0 = ap_const_logic_1;
    } else {
        IFM_1_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_IFM_1_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        IFM_1_ce1 = ap_const_logic_1;
    } else {
        IFM_1_ce1 = ap_const_logic_0;
    }
}

void FIRE3::thread_IFM_2_address0() {
    IFM_2_address0 = IFM_2_addr_reg_13665_pp0_iter7_reg.read();
}

void FIRE3::thread_IFM_2_address1() {
    IFM_2_address1 = IFM_2_addr_reg_13665_pp0_iter7_reg.read();
}

void FIRE3::thread_IFM_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()))) {
        IFM_2_ce0 = ap_const_logic_1;
    } else {
        IFM_2_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_IFM_2_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()))) {
        IFM_2_ce1 = ap_const_logic_1;
    } else {
        IFM_2_ce1 = ap_const_logic_0;
    }
}

void FIRE3::thread_IFM_3_address0() {
    IFM_3_address0 = IFM_3_addr_reg_13671_pp0_iter11_reg.read();
}

void FIRE3::thread_IFM_3_address1() {
    IFM_3_address1 = IFM_3_addr_reg_13671_pp0_iter11_reg.read();
}

void FIRE3::thread_IFM_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()))) {
        IFM_3_ce0 = ap_const_logic_1;
    } else {
        IFM_3_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_IFM_3_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()))) {
        IFM_3_ce1 = ap_const_logic_1;
    } else {
        IFM_3_ce1 = ap_const_logic_0;
    }
}

void FIRE3::thread_IFM_4_address0() {
    IFM_4_address0 = IFM_4_addr_reg_13677_pp0_iter15_reg.read();
}

void FIRE3::thread_IFM_4_address1() {
    IFM_4_address1 = IFM_4_addr_reg_13677_pp0_iter15_reg.read();
}

void FIRE3::thread_IFM_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter16.read()))) {
        IFM_4_ce0 = ap_const_logic_1;
    } else {
        IFM_4_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_IFM_4_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter16.read()))) {
        IFM_4_ce1 = ap_const_logic_1;
    } else {
        IFM_4_ce1 = ap_const_logic_0;
    }
}

void FIRE3::thread_IFM_5_address0() {
    IFM_5_address0 = IFM_5_addr_reg_13683_pp0_iter19_reg.read();
}

void FIRE3::thread_IFM_5_address1() {
    IFM_5_address1 = IFM_5_addr_reg_13683_pp0_iter19_reg.read();
}

void FIRE3::thread_IFM_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter20.read()))) {
        IFM_5_ce0 = ap_const_logic_1;
    } else {
        IFM_5_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_IFM_5_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter20.read()))) {
        IFM_5_ce1 = ap_const_logic_1;
    } else {
        IFM_5_ce1 = ap_const_logic_0;
    }
}

void FIRE3::thread_IFM_6_address0() {
    IFM_6_address0 = IFM_6_addr_reg_13689_pp0_iter23_reg.read();
}

void FIRE3::thread_IFM_6_address1() {
    IFM_6_address1 = IFM_6_addr_reg_13689_pp0_iter23_reg.read();
}

void FIRE3::thread_IFM_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter24.read()))) {
        IFM_6_ce0 = ap_const_logic_1;
    } else {
        IFM_6_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_IFM_6_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter24.read()))) {
        IFM_6_ce1 = ap_const_logic_1;
    } else {
        IFM_6_ce1 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_0_address0() {
    OFM_0_address0 =  (sc_lv<8>) (tmp_44_cast_reg_13172_pp0_iter2_reg.read());
}

void FIRE3::thread_OFM_0_address1() {
    OFM_0_address1 = OFM_0_addr_reg_13695_pp0_iter30_reg.read();
}

void FIRE3::thread_OFM_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        OFM_0_ce0 = ap_const_logic_1;
    } else {
        OFM_0_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_0_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter31.read(), ap_const_logic_1))) {
        OFM_0_ce1 = ap_const_logic_1;
    } else {
        OFM_0_ce1 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_0_d1() {
    OFM_0_d1 = grp_fu_9829_p2.read();
}

void FIRE3::thread_OFM_0_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter31.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(exitcond_flatten7_reg_12440_pp0_iter30_reg.read(), ap_const_lv1_0))) {
        OFM_0_we1 = ap_const_logic_1;
    } else {
        OFM_0_we1 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_10_address0() {
    OFM_10_address0 =  (sc_lv<8>) (tmp_44_cast_reg_13172_pp0_iter2_reg.read());
}

void FIRE3::thread_OFM_10_address1() {
    OFM_10_address1 = OFM_10_addr_reg_13755_pp0_iter30_reg.read();
}

void FIRE3::thread_OFM_10_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        OFM_10_ce0 = ap_const_logic_1;
    } else {
        OFM_10_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_10_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter31.read(), ap_const_logic_1))) {
        OFM_10_ce1 = ap_const_logic_1;
    } else {
        OFM_10_ce1 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_10_d1() {
    OFM_10_d1 = grp_fu_9879_p2.read();
}

void FIRE3::thread_OFM_10_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter31.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(exitcond_flatten7_reg_12440_pp0_iter30_reg.read(), ap_const_lv1_0))) {
        OFM_10_we1 = ap_const_logic_1;
    } else {
        OFM_10_we1 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_11_address0() {
    OFM_11_address0 =  (sc_lv<8>) (tmp_44_cast_reg_13172_pp0_iter2_reg.read());
}

void FIRE3::thread_OFM_11_address1() {
    OFM_11_address1 = OFM_11_addr_reg_13761_pp0_iter30_reg.read();
}

void FIRE3::thread_OFM_11_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        OFM_11_ce0 = ap_const_logic_1;
    } else {
        OFM_11_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_11_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter31.read(), ap_const_logic_1))) {
        OFM_11_ce1 = ap_const_logic_1;
    } else {
        OFM_11_ce1 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_11_d1() {
    OFM_11_d1 = grp_fu_9884_p2.read();
}

void FIRE3::thread_OFM_11_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter31.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(exitcond_flatten7_reg_12440_pp0_iter30_reg.read(), ap_const_lv1_0))) {
        OFM_11_we1 = ap_const_logic_1;
    } else {
        OFM_11_we1 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_12_address0() {
    OFM_12_address0 =  (sc_lv<8>) (tmp_44_cast_reg_13172_pp0_iter2_reg.read());
}

void FIRE3::thread_OFM_12_address1() {
    OFM_12_address1 = OFM_12_addr_reg_13767_pp0_iter30_reg.read();
}

void FIRE3::thread_OFM_12_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        OFM_12_ce0 = ap_const_logic_1;
    } else {
        OFM_12_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_12_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter31.read(), ap_const_logic_1))) {
        OFM_12_ce1 = ap_const_logic_1;
    } else {
        OFM_12_ce1 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_12_d1() {
    OFM_12_d1 = grp_fu_9889_p2.read();
}

void FIRE3::thread_OFM_12_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter31.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(exitcond_flatten7_reg_12440_pp0_iter30_reg.read(), ap_const_lv1_0))) {
        OFM_12_we1 = ap_const_logic_1;
    } else {
        OFM_12_we1 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_13_address0() {
    OFM_13_address0 =  (sc_lv<8>) (tmp_44_cast_reg_13172_pp0_iter2_reg.read());
}

void FIRE3::thread_OFM_13_address1() {
    OFM_13_address1 = OFM_13_addr_reg_13773_pp0_iter30_reg.read();
}

void FIRE3::thread_OFM_13_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        OFM_13_ce0 = ap_const_logic_1;
    } else {
        OFM_13_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_13_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter31.read(), ap_const_logic_1))) {
        OFM_13_ce1 = ap_const_logic_1;
    } else {
        OFM_13_ce1 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_13_d1() {
    OFM_13_d1 = grp_fu_9894_p2.read();
}

void FIRE3::thread_OFM_13_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter31.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(exitcond_flatten7_reg_12440_pp0_iter30_reg.read(), ap_const_lv1_0))) {
        OFM_13_we1 = ap_const_logic_1;
    } else {
        OFM_13_we1 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_14_address0() {
    OFM_14_address0 =  (sc_lv<8>) (tmp_44_cast_reg_13172_pp0_iter2_reg.read());
}

void FIRE3::thread_OFM_14_address1() {
    OFM_14_address1 = OFM_14_addr_reg_13779_pp0_iter30_reg.read();
}

void FIRE3::thread_OFM_14_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        OFM_14_ce0 = ap_const_logic_1;
    } else {
        OFM_14_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_14_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter31.read(), ap_const_logic_1))) {
        OFM_14_ce1 = ap_const_logic_1;
    } else {
        OFM_14_ce1 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_14_d1() {
    OFM_14_d1 = grp_fu_9899_p2.read();
}

void FIRE3::thread_OFM_14_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter31.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(exitcond_flatten7_reg_12440_pp0_iter30_reg.read(), ap_const_lv1_0))) {
        OFM_14_we1 = ap_const_logic_1;
    } else {
        OFM_14_we1 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_15_address0() {
    OFM_15_address0 =  (sc_lv<8>) (tmp_44_cast_reg_13172_pp0_iter2_reg.read());
}

void FIRE3::thread_OFM_15_address1() {
    OFM_15_address1 = OFM_15_addr_reg_13785_pp0_iter30_reg.read();
}

void FIRE3::thread_OFM_15_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        OFM_15_ce0 = ap_const_logic_1;
    } else {
        OFM_15_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_15_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter31.read(), ap_const_logic_1))) {
        OFM_15_ce1 = ap_const_logic_1;
    } else {
        OFM_15_ce1 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_15_d1() {
    OFM_15_d1 = grp_fu_9904_p2.read();
}

void FIRE3::thread_OFM_15_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter31.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(exitcond_flatten7_reg_12440_pp0_iter30_reg.read(), ap_const_lv1_0))) {
        OFM_15_we1 = ap_const_logic_1;
    } else {
        OFM_15_we1 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_16_address0() {
    OFM_16_address0 =  (sc_lv<8>) (tmp_44_cast_reg_13172_pp0_iter2_reg.read());
}

void FIRE3::thread_OFM_16_address1() {
    OFM_16_address1 = OFM_16_addr_reg_13791_pp0_iter30_reg.read();
}

void FIRE3::thread_OFM_16_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        OFM_16_ce0 = ap_const_logic_1;
    } else {
        OFM_16_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_16_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter31.read(), ap_const_logic_1))) {
        OFM_16_ce1 = ap_const_logic_1;
    } else {
        OFM_16_ce1 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_16_d1() {
    OFM_16_d1 = grp_fu_9909_p2.read();
}

void FIRE3::thread_OFM_16_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter31.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(exitcond_flatten7_reg_12440_pp0_iter30_reg.read(), ap_const_lv1_0))) {
        OFM_16_we1 = ap_const_logic_1;
    } else {
        OFM_16_we1 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_17_address0() {
    OFM_17_address0 =  (sc_lv<8>) (tmp_44_cast_reg_13172_pp0_iter2_reg.read());
}

void FIRE3::thread_OFM_17_address1() {
    OFM_17_address1 = OFM_17_addr_reg_13797_pp0_iter30_reg.read();
}

void FIRE3::thread_OFM_17_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        OFM_17_ce0 = ap_const_logic_1;
    } else {
        OFM_17_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_17_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter31.read(), ap_const_logic_1))) {
        OFM_17_ce1 = ap_const_logic_1;
    } else {
        OFM_17_ce1 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_17_d1() {
    OFM_17_d1 = grp_fu_9914_p2.read();
}

void FIRE3::thread_OFM_17_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter31.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(exitcond_flatten7_reg_12440_pp0_iter30_reg.read(), ap_const_lv1_0))) {
        OFM_17_we1 = ap_const_logic_1;
    } else {
        OFM_17_we1 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_18_address0() {
    OFM_18_address0 =  (sc_lv<8>) (tmp_44_cast_reg_13172_pp0_iter2_reg.read());
}

void FIRE3::thread_OFM_18_address1() {
    OFM_18_address1 = OFM_18_addr_reg_13803_pp0_iter30_reg.read();
}

void FIRE3::thread_OFM_18_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        OFM_18_ce0 = ap_const_logic_1;
    } else {
        OFM_18_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_18_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter31.read(), ap_const_logic_1))) {
        OFM_18_ce1 = ap_const_logic_1;
    } else {
        OFM_18_ce1 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_18_d1() {
    OFM_18_d1 = grp_fu_9919_p2.read();
}

void FIRE3::thread_OFM_18_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter31.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(exitcond_flatten7_reg_12440_pp0_iter30_reg.read(), ap_const_lv1_0))) {
        OFM_18_we1 = ap_const_logic_1;
    } else {
        OFM_18_we1 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_19_address0() {
    OFM_19_address0 =  (sc_lv<8>) (tmp_44_cast_reg_13172_pp0_iter2_reg.read());
}

void FIRE3::thread_OFM_19_address1() {
    OFM_19_address1 = OFM_19_addr_reg_13809_pp0_iter30_reg.read();
}

void FIRE3::thread_OFM_19_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        OFM_19_ce0 = ap_const_logic_1;
    } else {
        OFM_19_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_19_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter31.read(), ap_const_logic_1))) {
        OFM_19_ce1 = ap_const_logic_1;
    } else {
        OFM_19_ce1 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_19_d1() {
    OFM_19_d1 = grp_fu_9924_p2.read();
}

void FIRE3::thread_OFM_19_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter31.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(exitcond_flatten7_reg_12440_pp0_iter30_reg.read(), ap_const_lv1_0))) {
        OFM_19_we1 = ap_const_logic_1;
    } else {
        OFM_19_we1 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_1_address0() {
    OFM_1_address0 =  (sc_lv<8>) (tmp_44_cast_reg_13172_pp0_iter2_reg.read());
}

void FIRE3::thread_OFM_1_address1() {
    OFM_1_address1 = OFM_1_addr_reg_13701_pp0_iter30_reg.read();
}

void FIRE3::thread_OFM_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        OFM_1_ce0 = ap_const_logic_1;
    } else {
        OFM_1_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_1_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter31.read(), ap_const_logic_1))) {
        OFM_1_ce1 = ap_const_logic_1;
    } else {
        OFM_1_ce1 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_1_d1() {
    OFM_1_d1 = grp_fu_9834_p2.read();
}

void FIRE3::thread_OFM_1_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter31.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(exitcond_flatten7_reg_12440_pp0_iter30_reg.read(), ap_const_lv1_0))) {
        OFM_1_we1 = ap_const_logic_1;
    } else {
        OFM_1_we1 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_20_address0() {
    OFM_20_address0 =  (sc_lv<8>) (tmp_44_cast_reg_13172_pp0_iter2_reg.read());
}

void FIRE3::thread_OFM_20_address1() {
    OFM_20_address1 = OFM_20_addr_reg_13815_pp0_iter30_reg.read();
}

void FIRE3::thread_OFM_20_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        OFM_20_ce0 = ap_const_logic_1;
    } else {
        OFM_20_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_20_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter31.read(), ap_const_logic_1))) {
        OFM_20_ce1 = ap_const_logic_1;
    } else {
        OFM_20_ce1 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_20_d1() {
    OFM_20_d1 = grp_fu_9929_p2.read();
}

void FIRE3::thread_OFM_20_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter31.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(exitcond_flatten7_reg_12440_pp0_iter30_reg.read(), ap_const_lv1_0))) {
        OFM_20_we1 = ap_const_logic_1;
    } else {
        OFM_20_we1 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_21_address0() {
    OFM_21_address0 =  (sc_lv<8>) (tmp_44_cast_reg_13172_pp0_iter2_reg.read());
}

void FIRE3::thread_OFM_21_address1() {
    OFM_21_address1 = OFM_21_addr_reg_13821_pp0_iter30_reg.read();
}

void FIRE3::thread_OFM_21_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        OFM_21_ce0 = ap_const_logic_1;
    } else {
        OFM_21_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_21_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter31.read(), ap_const_logic_1))) {
        OFM_21_ce1 = ap_const_logic_1;
    } else {
        OFM_21_ce1 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_21_d1() {
    OFM_21_d1 = grp_fu_9934_p2.read();
}

void FIRE3::thread_OFM_21_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter31.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(exitcond_flatten7_reg_12440_pp0_iter30_reg.read(), ap_const_lv1_0))) {
        OFM_21_we1 = ap_const_logic_1;
    } else {
        OFM_21_we1 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_22_address0() {
    OFM_22_address0 =  (sc_lv<8>) (tmp_44_cast_reg_13172_pp0_iter2_reg.read());
}

void FIRE3::thread_OFM_22_address1() {
    OFM_22_address1 = OFM_22_addr_reg_13827_pp0_iter30_reg.read();
}

void FIRE3::thread_OFM_22_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        OFM_22_ce0 = ap_const_logic_1;
    } else {
        OFM_22_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_22_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter31.read(), ap_const_logic_1))) {
        OFM_22_ce1 = ap_const_logic_1;
    } else {
        OFM_22_ce1 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_22_d1() {
    OFM_22_d1 = grp_fu_9939_p2.read();
}

void FIRE3::thread_OFM_22_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter31.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(exitcond_flatten7_reg_12440_pp0_iter30_reg.read(), ap_const_lv1_0))) {
        OFM_22_we1 = ap_const_logic_1;
    } else {
        OFM_22_we1 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_23_address0() {
    OFM_23_address0 =  (sc_lv<8>) (tmp_44_cast_reg_13172_pp0_iter2_reg.read());
}

void FIRE3::thread_OFM_23_address1() {
    OFM_23_address1 = OFM_23_addr_reg_13833_pp0_iter30_reg.read();
}

void FIRE3::thread_OFM_23_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        OFM_23_ce0 = ap_const_logic_1;
    } else {
        OFM_23_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_23_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter31.read(), ap_const_logic_1))) {
        OFM_23_ce1 = ap_const_logic_1;
    } else {
        OFM_23_ce1 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_23_d1() {
    OFM_23_d1 = grp_fu_9944_p2.read();
}

void FIRE3::thread_OFM_23_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter31.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(exitcond_flatten7_reg_12440_pp0_iter30_reg.read(), ap_const_lv1_0))) {
        OFM_23_we1 = ap_const_logic_1;
    } else {
        OFM_23_we1 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_24_address0() {
    OFM_24_address0 =  (sc_lv<8>) (tmp_44_cast_reg_13172_pp0_iter2_reg.read());
}

void FIRE3::thread_OFM_24_address1() {
    OFM_24_address1 = OFM_24_addr_reg_13839_pp0_iter30_reg.read();
}

void FIRE3::thread_OFM_24_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        OFM_24_ce0 = ap_const_logic_1;
    } else {
        OFM_24_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_24_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter31.read(), ap_const_logic_1))) {
        OFM_24_ce1 = ap_const_logic_1;
    } else {
        OFM_24_ce1 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_24_d1() {
    OFM_24_d1 = grp_fu_9949_p2.read();
}

void FIRE3::thread_OFM_24_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter31.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(exitcond_flatten7_reg_12440_pp0_iter30_reg.read(), ap_const_lv1_0))) {
        OFM_24_we1 = ap_const_logic_1;
    } else {
        OFM_24_we1 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_25_address0() {
    OFM_25_address0 =  (sc_lv<8>) (tmp_44_cast_reg_13172_pp0_iter2_reg.read());
}

void FIRE3::thread_OFM_25_address1() {
    OFM_25_address1 = OFM_25_addr_reg_13845_pp0_iter30_reg.read();
}

void FIRE3::thread_OFM_25_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        OFM_25_ce0 = ap_const_logic_1;
    } else {
        OFM_25_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_25_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter31.read(), ap_const_logic_1))) {
        OFM_25_ce1 = ap_const_logic_1;
    } else {
        OFM_25_ce1 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_25_d1() {
    OFM_25_d1 = grp_fu_9954_p2.read();
}

void FIRE3::thread_OFM_25_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter31.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(exitcond_flatten7_reg_12440_pp0_iter30_reg.read(), ap_const_lv1_0))) {
        OFM_25_we1 = ap_const_logic_1;
    } else {
        OFM_25_we1 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_26_address0() {
    OFM_26_address0 =  (sc_lv<8>) (tmp_44_cast_reg_13172_pp0_iter2_reg.read());
}

void FIRE3::thread_OFM_26_address1() {
    OFM_26_address1 = OFM_26_addr_reg_13851_pp0_iter30_reg.read();
}

void FIRE3::thread_OFM_26_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        OFM_26_ce0 = ap_const_logic_1;
    } else {
        OFM_26_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_26_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter31.read(), ap_const_logic_1))) {
        OFM_26_ce1 = ap_const_logic_1;
    } else {
        OFM_26_ce1 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_26_d1() {
    OFM_26_d1 = grp_fu_9959_p2.read();
}

void FIRE3::thread_OFM_26_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter31.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(exitcond_flatten7_reg_12440_pp0_iter30_reg.read(), ap_const_lv1_0))) {
        OFM_26_we1 = ap_const_logic_1;
    } else {
        OFM_26_we1 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_27_address0() {
    OFM_27_address0 =  (sc_lv<8>) (tmp_44_cast_reg_13172_pp0_iter2_reg.read());
}

void FIRE3::thread_OFM_27_address1() {
    OFM_27_address1 = OFM_27_addr_reg_13857_pp0_iter30_reg.read();
}

void FIRE3::thread_OFM_27_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        OFM_27_ce0 = ap_const_logic_1;
    } else {
        OFM_27_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_27_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter31.read(), ap_const_logic_1))) {
        OFM_27_ce1 = ap_const_logic_1;
    } else {
        OFM_27_ce1 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_27_d1() {
    OFM_27_d1 = grp_fu_9964_p2.read();
}

void FIRE3::thread_OFM_27_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter31.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(exitcond_flatten7_reg_12440_pp0_iter30_reg.read(), ap_const_lv1_0))) {
        OFM_27_we1 = ap_const_logic_1;
    } else {
        OFM_27_we1 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_28_address0() {
    OFM_28_address0 =  (sc_lv<8>) (tmp_44_cast_reg_13172_pp0_iter2_reg.read());
}

void FIRE3::thread_OFM_28_address1() {
    OFM_28_address1 = OFM_28_addr_reg_13863_pp0_iter30_reg.read();
}

void FIRE3::thread_OFM_28_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        OFM_28_ce0 = ap_const_logic_1;
    } else {
        OFM_28_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_28_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter31.read(), ap_const_logic_1))) {
        OFM_28_ce1 = ap_const_logic_1;
    } else {
        OFM_28_ce1 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_28_d1() {
    OFM_28_d1 = grp_fu_9969_p2.read();
}

void FIRE3::thread_OFM_28_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter31.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(exitcond_flatten7_reg_12440_pp0_iter30_reg.read(), ap_const_lv1_0))) {
        OFM_28_we1 = ap_const_logic_1;
    } else {
        OFM_28_we1 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_29_address0() {
    OFM_29_address0 =  (sc_lv<8>) (tmp_44_cast_reg_13172_pp0_iter2_reg.read());
}

void FIRE3::thread_OFM_29_address1() {
    OFM_29_address1 = OFM_29_addr_reg_13869_pp0_iter30_reg.read();
}

void FIRE3::thread_OFM_29_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        OFM_29_ce0 = ap_const_logic_1;
    } else {
        OFM_29_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_29_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter31.read(), ap_const_logic_1))) {
        OFM_29_ce1 = ap_const_logic_1;
    } else {
        OFM_29_ce1 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_29_d1() {
    OFM_29_d1 = grp_fu_9974_p2.read();
}

void FIRE3::thread_OFM_29_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter31.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(exitcond_flatten7_reg_12440_pp0_iter30_reg.read(), ap_const_lv1_0))) {
        OFM_29_we1 = ap_const_logic_1;
    } else {
        OFM_29_we1 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_2_address0() {
    OFM_2_address0 =  (sc_lv<8>) (tmp_44_cast_reg_13172_pp0_iter2_reg.read());
}

void FIRE3::thread_OFM_2_address1() {
    OFM_2_address1 = OFM_2_addr_reg_13707_pp0_iter30_reg.read();
}

void FIRE3::thread_OFM_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        OFM_2_ce0 = ap_const_logic_1;
    } else {
        OFM_2_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_2_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter31.read(), ap_const_logic_1))) {
        OFM_2_ce1 = ap_const_logic_1;
    } else {
        OFM_2_ce1 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_2_d1() {
    OFM_2_d1 = grp_fu_9839_p2.read();
}

void FIRE3::thread_OFM_2_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter31.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(exitcond_flatten7_reg_12440_pp0_iter30_reg.read(), ap_const_lv1_0))) {
        OFM_2_we1 = ap_const_logic_1;
    } else {
        OFM_2_we1 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_30_address0() {
    OFM_30_address0 =  (sc_lv<8>) (tmp_44_cast_reg_13172_pp0_iter2_reg.read());
}

void FIRE3::thread_OFM_30_address1() {
    OFM_30_address1 = OFM_30_addr_reg_13875_pp0_iter30_reg.read();
}

void FIRE3::thread_OFM_30_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        OFM_30_ce0 = ap_const_logic_1;
    } else {
        OFM_30_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_30_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter31.read(), ap_const_logic_1))) {
        OFM_30_ce1 = ap_const_logic_1;
    } else {
        OFM_30_ce1 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_30_d1() {
    OFM_30_d1 = grp_fu_9979_p2.read();
}

void FIRE3::thread_OFM_30_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter31.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(exitcond_flatten7_reg_12440_pp0_iter30_reg.read(), ap_const_lv1_0))) {
        OFM_30_we1 = ap_const_logic_1;
    } else {
        OFM_30_we1 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_31_address0() {
    OFM_31_address0 =  (sc_lv<8>) (tmp_44_cast_reg_13172_pp0_iter2_reg.read());
}

void FIRE3::thread_OFM_31_address1() {
    OFM_31_address1 = OFM_31_addr_reg_13881_pp0_iter30_reg.read();
}

void FIRE3::thread_OFM_31_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        OFM_31_ce0 = ap_const_logic_1;
    } else {
        OFM_31_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_31_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter31.read(), ap_const_logic_1))) {
        OFM_31_ce1 = ap_const_logic_1;
    } else {
        OFM_31_ce1 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_31_d1() {
    OFM_31_d1 = grp_fu_9984_p2.read();
}

void FIRE3::thread_OFM_31_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter31.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(exitcond_flatten7_reg_12440_pp0_iter30_reg.read(), ap_const_lv1_0))) {
        OFM_31_we1 = ap_const_logic_1;
    } else {
        OFM_31_we1 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_32_address0() {
    OFM_32_address0 =  (sc_lv<8>) (tmp_44_cast_reg_13172_pp0_iter2_reg.read());
}

void FIRE3::thread_OFM_32_address1() {
    OFM_32_address1 = OFM_32_addr_reg_13887_pp0_iter30_reg.read();
}

void FIRE3::thread_OFM_32_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        OFM_32_ce0 = ap_const_logic_1;
    } else {
        OFM_32_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_32_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter31.read(), ap_const_logic_1))) {
        OFM_32_ce1 = ap_const_logic_1;
    } else {
        OFM_32_ce1 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_32_d1() {
    OFM_32_d1 = grp_fu_9989_p2.read();
}

void FIRE3::thread_OFM_32_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter31.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(exitcond_flatten7_reg_12440_pp0_iter30_reg.read(), ap_const_lv1_0))) {
        OFM_32_we1 = ap_const_logic_1;
    } else {
        OFM_32_we1 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_33_address0() {
    OFM_33_address0 =  (sc_lv<8>) (tmp_44_cast_reg_13172_pp0_iter2_reg.read());
}

void FIRE3::thread_OFM_33_address1() {
    OFM_33_address1 = OFM_33_addr_reg_13893_pp0_iter30_reg.read();
}

void FIRE3::thread_OFM_33_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        OFM_33_ce0 = ap_const_logic_1;
    } else {
        OFM_33_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_33_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter31.read(), ap_const_logic_1))) {
        OFM_33_ce1 = ap_const_logic_1;
    } else {
        OFM_33_ce1 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_33_d1() {
    OFM_33_d1 = grp_fu_9994_p2.read();
}

void FIRE3::thread_OFM_33_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter31.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(exitcond_flatten7_reg_12440_pp0_iter30_reg.read(), ap_const_lv1_0))) {
        OFM_33_we1 = ap_const_logic_1;
    } else {
        OFM_33_we1 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_34_address0() {
    OFM_34_address0 =  (sc_lv<8>) (tmp_44_cast_reg_13172_pp0_iter2_reg.read());
}

void FIRE3::thread_OFM_34_address1() {
    OFM_34_address1 = OFM_34_addr_reg_13899_pp0_iter30_reg.read();
}

void FIRE3::thread_OFM_34_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        OFM_34_ce0 = ap_const_logic_1;
    } else {
        OFM_34_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_34_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter31.read(), ap_const_logic_1))) {
        OFM_34_ce1 = ap_const_logic_1;
    } else {
        OFM_34_ce1 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_34_d1() {
    OFM_34_d1 = grp_fu_9999_p2.read();
}

void FIRE3::thread_OFM_34_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter31.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(exitcond_flatten7_reg_12440_pp0_iter30_reg.read(), ap_const_lv1_0))) {
        OFM_34_we1 = ap_const_logic_1;
    } else {
        OFM_34_we1 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_35_address0() {
    OFM_35_address0 =  (sc_lv<8>) (tmp_44_cast_reg_13172_pp0_iter2_reg.read());
}

void FIRE3::thread_OFM_35_address1() {
    OFM_35_address1 = OFM_35_addr_reg_13905_pp0_iter30_reg.read();
}

void FIRE3::thread_OFM_35_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        OFM_35_ce0 = ap_const_logic_1;
    } else {
        OFM_35_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_35_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter31.read(), ap_const_logic_1))) {
        OFM_35_ce1 = ap_const_logic_1;
    } else {
        OFM_35_ce1 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_35_d1() {
    OFM_35_d1 = grp_fu_10004_p2.read();
}

void FIRE3::thread_OFM_35_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter31.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(exitcond_flatten7_reg_12440_pp0_iter30_reg.read(), ap_const_lv1_0))) {
        OFM_35_we1 = ap_const_logic_1;
    } else {
        OFM_35_we1 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_36_address0() {
    OFM_36_address0 =  (sc_lv<8>) (tmp_44_cast_reg_13172_pp0_iter2_reg.read());
}

void FIRE3::thread_OFM_36_address1() {
    OFM_36_address1 = OFM_36_addr_reg_13911_pp0_iter30_reg.read();
}

void FIRE3::thread_OFM_36_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        OFM_36_ce0 = ap_const_logic_1;
    } else {
        OFM_36_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_36_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter31.read(), ap_const_logic_1))) {
        OFM_36_ce1 = ap_const_logic_1;
    } else {
        OFM_36_ce1 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_36_d1() {
    OFM_36_d1 = grp_fu_10009_p2.read();
}

void FIRE3::thread_OFM_36_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter31.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(exitcond_flatten7_reg_12440_pp0_iter30_reg.read(), ap_const_lv1_0))) {
        OFM_36_we1 = ap_const_logic_1;
    } else {
        OFM_36_we1 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_37_address0() {
    OFM_37_address0 =  (sc_lv<8>) (tmp_44_cast_reg_13172_pp0_iter2_reg.read());
}

void FIRE3::thread_OFM_37_address1() {
    OFM_37_address1 = OFM_37_addr_reg_13917_pp0_iter30_reg.read();
}

void FIRE3::thread_OFM_37_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        OFM_37_ce0 = ap_const_logic_1;
    } else {
        OFM_37_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_37_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter31.read(), ap_const_logic_1))) {
        OFM_37_ce1 = ap_const_logic_1;
    } else {
        OFM_37_ce1 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_37_d1() {
    OFM_37_d1 = grp_fu_10014_p2.read();
}

void FIRE3::thread_OFM_37_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter31.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(exitcond_flatten7_reg_12440_pp0_iter30_reg.read(), ap_const_lv1_0))) {
        OFM_37_we1 = ap_const_logic_1;
    } else {
        OFM_37_we1 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_38_address0() {
    OFM_38_address0 =  (sc_lv<8>) (tmp_44_cast_reg_13172_pp0_iter2_reg.read());
}

void FIRE3::thread_OFM_38_address1() {
    OFM_38_address1 = OFM_38_addr_reg_13923_pp0_iter30_reg.read();
}

void FIRE3::thread_OFM_38_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        OFM_38_ce0 = ap_const_logic_1;
    } else {
        OFM_38_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_38_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter31.read(), ap_const_logic_1))) {
        OFM_38_ce1 = ap_const_logic_1;
    } else {
        OFM_38_ce1 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_38_d1() {
    OFM_38_d1 = grp_fu_10019_p2.read();
}

void FIRE3::thread_OFM_38_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter31.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(exitcond_flatten7_reg_12440_pp0_iter30_reg.read(), ap_const_lv1_0))) {
        OFM_38_we1 = ap_const_logic_1;
    } else {
        OFM_38_we1 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_39_address0() {
    OFM_39_address0 =  (sc_lv<8>) (tmp_44_cast_reg_13172_pp0_iter2_reg.read());
}

void FIRE3::thread_OFM_39_address1() {
    OFM_39_address1 = OFM_39_addr_reg_13929_pp0_iter30_reg.read();
}

void FIRE3::thread_OFM_39_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        OFM_39_ce0 = ap_const_logic_1;
    } else {
        OFM_39_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_39_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter31.read(), ap_const_logic_1))) {
        OFM_39_ce1 = ap_const_logic_1;
    } else {
        OFM_39_ce1 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_39_d1() {
    OFM_39_d1 = grp_fu_10024_p2.read();
}

void FIRE3::thread_OFM_39_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter31.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(exitcond_flatten7_reg_12440_pp0_iter30_reg.read(), ap_const_lv1_0))) {
        OFM_39_we1 = ap_const_logic_1;
    } else {
        OFM_39_we1 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_3_address0() {
    OFM_3_address0 =  (sc_lv<8>) (tmp_44_cast_reg_13172_pp0_iter2_reg.read());
}

void FIRE3::thread_OFM_3_address1() {
    OFM_3_address1 = OFM_3_addr_reg_13713_pp0_iter30_reg.read();
}

void FIRE3::thread_OFM_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        OFM_3_ce0 = ap_const_logic_1;
    } else {
        OFM_3_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_3_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter31.read(), ap_const_logic_1))) {
        OFM_3_ce1 = ap_const_logic_1;
    } else {
        OFM_3_ce1 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_3_d1() {
    OFM_3_d1 = grp_fu_9844_p2.read();
}

void FIRE3::thread_OFM_3_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter31.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(exitcond_flatten7_reg_12440_pp0_iter30_reg.read(), ap_const_lv1_0))) {
        OFM_3_we1 = ap_const_logic_1;
    } else {
        OFM_3_we1 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_40_address0() {
    OFM_40_address0 =  (sc_lv<8>) (tmp_44_cast_reg_13172_pp0_iter2_reg.read());
}

void FIRE3::thread_OFM_40_address1() {
    OFM_40_address1 = OFM_40_addr_reg_13935_pp0_iter30_reg.read();
}

void FIRE3::thread_OFM_40_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        OFM_40_ce0 = ap_const_logic_1;
    } else {
        OFM_40_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_40_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter31.read(), ap_const_logic_1))) {
        OFM_40_ce1 = ap_const_logic_1;
    } else {
        OFM_40_ce1 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_40_d1() {
    OFM_40_d1 = grp_fu_10029_p2.read();
}

void FIRE3::thread_OFM_40_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter31.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(exitcond_flatten7_reg_12440_pp0_iter30_reg.read(), ap_const_lv1_0))) {
        OFM_40_we1 = ap_const_logic_1;
    } else {
        OFM_40_we1 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_41_address0() {
    OFM_41_address0 =  (sc_lv<8>) (tmp_44_cast_reg_13172_pp0_iter2_reg.read());
}

void FIRE3::thread_OFM_41_address1() {
    OFM_41_address1 = OFM_41_addr_reg_13941_pp0_iter30_reg.read();
}

void FIRE3::thread_OFM_41_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        OFM_41_ce0 = ap_const_logic_1;
    } else {
        OFM_41_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_41_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter31.read(), ap_const_logic_1))) {
        OFM_41_ce1 = ap_const_logic_1;
    } else {
        OFM_41_ce1 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_41_d1() {
    OFM_41_d1 = grp_fu_10034_p2.read();
}

void FIRE3::thread_OFM_41_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter31.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(exitcond_flatten7_reg_12440_pp0_iter30_reg.read(), ap_const_lv1_0))) {
        OFM_41_we1 = ap_const_logic_1;
    } else {
        OFM_41_we1 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_42_address0() {
    OFM_42_address0 =  (sc_lv<8>) (tmp_44_cast_reg_13172_pp0_iter2_reg.read());
}

void FIRE3::thread_OFM_42_address1() {
    OFM_42_address1 = OFM_42_addr_reg_13947_pp0_iter30_reg.read();
}

void FIRE3::thread_OFM_42_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        OFM_42_ce0 = ap_const_logic_1;
    } else {
        OFM_42_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_42_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter31.read(), ap_const_logic_1))) {
        OFM_42_ce1 = ap_const_logic_1;
    } else {
        OFM_42_ce1 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_42_d1() {
    OFM_42_d1 = grp_fu_10039_p2.read();
}

void FIRE3::thread_OFM_42_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter31.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(exitcond_flatten7_reg_12440_pp0_iter30_reg.read(), ap_const_lv1_0))) {
        OFM_42_we1 = ap_const_logic_1;
    } else {
        OFM_42_we1 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_43_address0() {
    OFM_43_address0 =  (sc_lv<8>) (tmp_44_cast_reg_13172_pp0_iter2_reg.read());
}

void FIRE3::thread_OFM_43_address1() {
    OFM_43_address1 = OFM_43_addr_reg_13953_pp0_iter30_reg.read();
}

void FIRE3::thread_OFM_43_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        OFM_43_ce0 = ap_const_logic_1;
    } else {
        OFM_43_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_43_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter31.read(), ap_const_logic_1))) {
        OFM_43_ce1 = ap_const_logic_1;
    } else {
        OFM_43_ce1 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_43_d1() {
    OFM_43_d1 = grp_fu_10044_p2.read();
}

void FIRE3::thread_OFM_43_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter31.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(exitcond_flatten7_reg_12440_pp0_iter30_reg.read(), ap_const_lv1_0))) {
        OFM_43_we1 = ap_const_logic_1;
    } else {
        OFM_43_we1 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_44_address0() {
    OFM_44_address0 =  (sc_lv<8>) (tmp_44_cast_reg_13172_pp0_iter2_reg.read());
}

void FIRE3::thread_OFM_44_address1() {
    OFM_44_address1 = OFM_44_addr_reg_13959_pp0_iter30_reg.read();
}

void FIRE3::thread_OFM_44_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        OFM_44_ce0 = ap_const_logic_1;
    } else {
        OFM_44_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_44_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter31.read(), ap_const_logic_1))) {
        OFM_44_ce1 = ap_const_logic_1;
    } else {
        OFM_44_ce1 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_44_d1() {
    OFM_44_d1 = grp_fu_10049_p2.read();
}

void FIRE3::thread_OFM_44_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter31.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(exitcond_flatten7_reg_12440_pp0_iter30_reg.read(), ap_const_lv1_0))) {
        OFM_44_we1 = ap_const_logic_1;
    } else {
        OFM_44_we1 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_45_address0() {
    OFM_45_address0 =  (sc_lv<8>) (tmp_44_cast_reg_13172_pp0_iter2_reg.read());
}

void FIRE3::thread_OFM_45_address1() {
    OFM_45_address1 = OFM_45_addr_reg_13965_pp0_iter30_reg.read();
}

void FIRE3::thread_OFM_45_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        OFM_45_ce0 = ap_const_logic_1;
    } else {
        OFM_45_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_45_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter31.read(), ap_const_logic_1))) {
        OFM_45_ce1 = ap_const_logic_1;
    } else {
        OFM_45_ce1 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_45_d1() {
    OFM_45_d1 = grp_fu_10054_p2.read();
}

void FIRE3::thread_OFM_45_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter31.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(exitcond_flatten7_reg_12440_pp0_iter30_reg.read(), ap_const_lv1_0))) {
        OFM_45_we1 = ap_const_logic_1;
    } else {
        OFM_45_we1 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_46_address0() {
    OFM_46_address0 =  (sc_lv<8>) (tmp_44_cast_reg_13172_pp0_iter2_reg.read());
}

void FIRE3::thread_OFM_46_address1() {
    OFM_46_address1 = OFM_46_addr_reg_13971_pp0_iter30_reg.read();
}

void FIRE3::thread_OFM_46_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        OFM_46_ce0 = ap_const_logic_1;
    } else {
        OFM_46_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_46_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter31.read(), ap_const_logic_1))) {
        OFM_46_ce1 = ap_const_logic_1;
    } else {
        OFM_46_ce1 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_46_d1() {
    OFM_46_d1 = grp_fu_10059_p2.read();
}

void FIRE3::thread_OFM_46_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter31.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(exitcond_flatten7_reg_12440_pp0_iter30_reg.read(), ap_const_lv1_0))) {
        OFM_46_we1 = ap_const_logic_1;
    } else {
        OFM_46_we1 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_47_address0() {
    OFM_47_address0 =  (sc_lv<8>) (tmp_44_cast_reg_13172_pp0_iter2_reg.read());
}

void FIRE3::thread_OFM_47_address1() {
    OFM_47_address1 = OFM_47_addr_reg_13977_pp0_iter30_reg.read();
}

void FIRE3::thread_OFM_47_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        OFM_47_ce0 = ap_const_logic_1;
    } else {
        OFM_47_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_47_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter31.read(), ap_const_logic_1))) {
        OFM_47_ce1 = ap_const_logic_1;
    } else {
        OFM_47_ce1 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_47_d1() {
    OFM_47_d1 = grp_fu_10064_p2.read();
}

void FIRE3::thread_OFM_47_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter31.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(exitcond_flatten7_reg_12440_pp0_iter30_reg.read(), ap_const_lv1_0))) {
        OFM_47_we1 = ap_const_logic_1;
    } else {
        OFM_47_we1 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_48_address0() {
    OFM_48_address0 =  (sc_lv<8>) (tmp_44_cast_reg_13172_pp0_iter2_reg.read());
}

void FIRE3::thread_OFM_48_address1() {
    OFM_48_address1 = OFM_48_addr_reg_13983_pp0_iter30_reg.read();
}

void FIRE3::thread_OFM_48_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        OFM_48_ce0 = ap_const_logic_1;
    } else {
        OFM_48_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_48_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter31.read(), ap_const_logic_1))) {
        OFM_48_ce1 = ap_const_logic_1;
    } else {
        OFM_48_ce1 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_48_d1() {
    OFM_48_d1 = grp_fu_10069_p2.read();
}

void FIRE3::thread_OFM_48_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter31.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(exitcond_flatten7_reg_12440_pp0_iter30_reg.read(), ap_const_lv1_0))) {
        OFM_48_we1 = ap_const_logic_1;
    } else {
        OFM_48_we1 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_49_address0() {
    OFM_49_address0 =  (sc_lv<8>) (tmp_44_cast_reg_13172_pp0_iter2_reg.read());
}

void FIRE3::thread_OFM_49_address1() {
    OFM_49_address1 = OFM_49_addr_reg_13989_pp0_iter30_reg.read();
}

void FIRE3::thread_OFM_49_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        OFM_49_ce0 = ap_const_logic_1;
    } else {
        OFM_49_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_49_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter31.read(), ap_const_logic_1))) {
        OFM_49_ce1 = ap_const_logic_1;
    } else {
        OFM_49_ce1 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_49_d1() {
    OFM_49_d1 = grp_fu_10074_p2.read();
}

void FIRE3::thread_OFM_49_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter31.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(exitcond_flatten7_reg_12440_pp0_iter30_reg.read(), ap_const_lv1_0))) {
        OFM_49_we1 = ap_const_logic_1;
    } else {
        OFM_49_we1 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_4_address0() {
    OFM_4_address0 =  (sc_lv<8>) (tmp_44_cast_reg_13172_pp0_iter2_reg.read());
}

void FIRE3::thread_OFM_4_address1() {
    OFM_4_address1 = OFM_4_addr_reg_13719_pp0_iter30_reg.read();
}

void FIRE3::thread_OFM_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        OFM_4_ce0 = ap_const_logic_1;
    } else {
        OFM_4_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_4_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter31.read(), ap_const_logic_1))) {
        OFM_4_ce1 = ap_const_logic_1;
    } else {
        OFM_4_ce1 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_4_d1() {
    OFM_4_d1 = grp_fu_9849_p2.read();
}

void FIRE3::thread_OFM_4_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter31.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(exitcond_flatten7_reg_12440_pp0_iter30_reg.read(), ap_const_lv1_0))) {
        OFM_4_we1 = ap_const_logic_1;
    } else {
        OFM_4_we1 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_50_address0() {
    OFM_50_address0 =  (sc_lv<8>) (tmp_44_cast_reg_13172_pp0_iter2_reg.read());
}

void FIRE3::thread_OFM_50_address1() {
    OFM_50_address1 = OFM_50_addr_reg_13995_pp0_iter30_reg.read();
}

void FIRE3::thread_OFM_50_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        OFM_50_ce0 = ap_const_logic_1;
    } else {
        OFM_50_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_50_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter31.read(), ap_const_logic_1))) {
        OFM_50_ce1 = ap_const_logic_1;
    } else {
        OFM_50_ce1 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_50_d1() {
    OFM_50_d1 = grp_fu_10079_p2.read();
}

void FIRE3::thread_OFM_50_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter31.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(exitcond_flatten7_reg_12440_pp0_iter30_reg.read(), ap_const_lv1_0))) {
        OFM_50_we1 = ap_const_logic_1;
    } else {
        OFM_50_we1 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_51_address0() {
    OFM_51_address0 =  (sc_lv<8>) (tmp_44_cast_reg_13172_pp0_iter2_reg.read());
}

void FIRE3::thread_OFM_51_address1() {
    OFM_51_address1 = OFM_51_addr_reg_14001_pp0_iter30_reg.read();
}

void FIRE3::thread_OFM_51_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        OFM_51_ce0 = ap_const_logic_1;
    } else {
        OFM_51_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_51_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter31.read(), ap_const_logic_1))) {
        OFM_51_ce1 = ap_const_logic_1;
    } else {
        OFM_51_ce1 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_51_d1() {
    OFM_51_d1 = grp_fu_10084_p2.read();
}

void FIRE3::thread_OFM_51_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter31.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(exitcond_flatten7_reg_12440_pp0_iter30_reg.read(), ap_const_lv1_0))) {
        OFM_51_we1 = ap_const_logic_1;
    } else {
        OFM_51_we1 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_52_address0() {
    OFM_52_address0 =  (sc_lv<8>) (tmp_44_cast_reg_13172_pp0_iter2_reg.read());
}

void FIRE3::thread_OFM_52_address1() {
    OFM_52_address1 = OFM_52_addr_reg_14007_pp0_iter30_reg.read();
}

void FIRE3::thread_OFM_52_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        OFM_52_ce0 = ap_const_logic_1;
    } else {
        OFM_52_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_52_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter31.read(), ap_const_logic_1))) {
        OFM_52_ce1 = ap_const_logic_1;
    } else {
        OFM_52_ce1 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_52_d1() {
    OFM_52_d1 = grp_fu_10089_p2.read();
}

void FIRE3::thread_OFM_52_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter31.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(exitcond_flatten7_reg_12440_pp0_iter30_reg.read(), ap_const_lv1_0))) {
        OFM_52_we1 = ap_const_logic_1;
    } else {
        OFM_52_we1 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_53_address0() {
    OFM_53_address0 =  (sc_lv<8>) (tmp_44_cast_reg_13172_pp0_iter2_reg.read());
}

void FIRE3::thread_OFM_53_address1() {
    OFM_53_address1 = OFM_53_addr_reg_14013_pp0_iter30_reg.read();
}

void FIRE3::thread_OFM_53_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        OFM_53_ce0 = ap_const_logic_1;
    } else {
        OFM_53_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_53_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter31.read(), ap_const_logic_1))) {
        OFM_53_ce1 = ap_const_logic_1;
    } else {
        OFM_53_ce1 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_53_d1() {
    OFM_53_d1 = grp_fu_10094_p2.read();
}

void FIRE3::thread_OFM_53_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter31.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(exitcond_flatten7_reg_12440_pp0_iter30_reg.read(), ap_const_lv1_0))) {
        OFM_53_we1 = ap_const_logic_1;
    } else {
        OFM_53_we1 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_54_address0() {
    OFM_54_address0 =  (sc_lv<8>) (tmp_44_cast_reg_13172_pp0_iter2_reg.read());
}

void FIRE3::thread_OFM_54_address1() {
    OFM_54_address1 = OFM_54_addr_reg_14019_pp0_iter30_reg.read();
}

void FIRE3::thread_OFM_54_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        OFM_54_ce0 = ap_const_logic_1;
    } else {
        OFM_54_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_54_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter31.read(), ap_const_logic_1))) {
        OFM_54_ce1 = ap_const_logic_1;
    } else {
        OFM_54_ce1 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_54_d1() {
    OFM_54_d1 = grp_fu_10099_p2.read();
}

void FIRE3::thread_OFM_54_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter31.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(exitcond_flatten7_reg_12440_pp0_iter30_reg.read(), ap_const_lv1_0))) {
        OFM_54_we1 = ap_const_logic_1;
    } else {
        OFM_54_we1 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_55_address0() {
    OFM_55_address0 =  (sc_lv<8>) (tmp_44_cast_reg_13172_pp0_iter2_reg.read());
}

void FIRE3::thread_OFM_55_address1() {
    OFM_55_address1 = OFM_55_addr_reg_14025_pp0_iter30_reg.read();
}

void FIRE3::thread_OFM_55_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        OFM_55_ce0 = ap_const_logic_1;
    } else {
        OFM_55_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_55_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter31.read(), ap_const_logic_1))) {
        OFM_55_ce1 = ap_const_logic_1;
    } else {
        OFM_55_ce1 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_55_d1() {
    OFM_55_d1 = grp_fu_10104_p2.read();
}

void FIRE3::thread_OFM_55_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter31.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(exitcond_flatten7_reg_12440_pp0_iter30_reg.read(), ap_const_lv1_0))) {
        OFM_55_we1 = ap_const_logic_1;
    } else {
        OFM_55_we1 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_56_address0() {
    OFM_56_address0 =  (sc_lv<8>) (tmp_44_cast_reg_13172_pp0_iter2_reg.read());
}

void FIRE3::thread_OFM_56_address1() {
    OFM_56_address1 = OFM_56_addr_reg_14031_pp0_iter30_reg.read();
}

void FIRE3::thread_OFM_56_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        OFM_56_ce0 = ap_const_logic_1;
    } else {
        OFM_56_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_56_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter31.read(), ap_const_logic_1))) {
        OFM_56_ce1 = ap_const_logic_1;
    } else {
        OFM_56_ce1 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_56_d1() {
    OFM_56_d1 = grp_fu_10109_p2.read();
}

void FIRE3::thread_OFM_56_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter31.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(exitcond_flatten7_reg_12440_pp0_iter30_reg.read(), ap_const_lv1_0))) {
        OFM_56_we1 = ap_const_logic_1;
    } else {
        OFM_56_we1 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_57_address0() {
    OFM_57_address0 =  (sc_lv<8>) (tmp_44_cast_reg_13172_pp0_iter2_reg.read());
}

void FIRE3::thread_OFM_57_address1() {
    OFM_57_address1 = OFM_57_addr_reg_14037_pp0_iter30_reg.read();
}

void FIRE3::thread_OFM_57_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        OFM_57_ce0 = ap_const_logic_1;
    } else {
        OFM_57_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_57_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter31.read(), ap_const_logic_1))) {
        OFM_57_ce1 = ap_const_logic_1;
    } else {
        OFM_57_ce1 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_57_d1() {
    OFM_57_d1 = grp_fu_10114_p2.read();
}

void FIRE3::thread_OFM_57_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter31.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(exitcond_flatten7_reg_12440_pp0_iter30_reg.read(), ap_const_lv1_0))) {
        OFM_57_we1 = ap_const_logic_1;
    } else {
        OFM_57_we1 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_58_address0() {
    OFM_58_address0 =  (sc_lv<8>) (tmp_44_cast_reg_13172_pp0_iter2_reg.read());
}

void FIRE3::thread_OFM_58_address1() {
    OFM_58_address1 = OFM_58_addr_reg_14043_pp0_iter30_reg.read();
}

void FIRE3::thread_OFM_58_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        OFM_58_ce0 = ap_const_logic_1;
    } else {
        OFM_58_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_58_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter31.read(), ap_const_logic_1))) {
        OFM_58_ce1 = ap_const_logic_1;
    } else {
        OFM_58_ce1 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_58_d1() {
    OFM_58_d1 = grp_fu_10119_p2.read();
}

void FIRE3::thread_OFM_58_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter31.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(exitcond_flatten7_reg_12440_pp0_iter30_reg.read(), ap_const_lv1_0))) {
        OFM_58_we1 = ap_const_logic_1;
    } else {
        OFM_58_we1 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_59_address0() {
    OFM_59_address0 =  (sc_lv<8>) (tmp_44_cast_reg_13172_pp0_iter2_reg.read());
}

void FIRE3::thread_OFM_59_address1() {
    OFM_59_address1 = OFM_59_addr_reg_14049_pp0_iter30_reg.read();
}

void FIRE3::thread_OFM_59_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        OFM_59_ce0 = ap_const_logic_1;
    } else {
        OFM_59_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_59_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter31.read(), ap_const_logic_1))) {
        OFM_59_ce1 = ap_const_logic_1;
    } else {
        OFM_59_ce1 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_59_d1() {
    OFM_59_d1 = grp_fu_10124_p2.read();
}

void FIRE3::thread_OFM_59_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter31.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(exitcond_flatten7_reg_12440_pp0_iter30_reg.read(), ap_const_lv1_0))) {
        OFM_59_we1 = ap_const_logic_1;
    } else {
        OFM_59_we1 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_5_address0() {
    OFM_5_address0 =  (sc_lv<8>) (tmp_44_cast_reg_13172_pp0_iter2_reg.read());
}

void FIRE3::thread_OFM_5_address1() {
    OFM_5_address1 = OFM_5_addr_reg_13725_pp0_iter30_reg.read();
}

void FIRE3::thread_OFM_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        OFM_5_ce0 = ap_const_logic_1;
    } else {
        OFM_5_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_5_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter31.read(), ap_const_logic_1))) {
        OFM_5_ce1 = ap_const_logic_1;
    } else {
        OFM_5_ce1 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_5_d1() {
    OFM_5_d1 = grp_fu_9854_p2.read();
}

void FIRE3::thread_OFM_5_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter31.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(exitcond_flatten7_reg_12440_pp0_iter30_reg.read(), ap_const_lv1_0))) {
        OFM_5_we1 = ap_const_logic_1;
    } else {
        OFM_5_we1 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_60_address0() {
    OFM_60_address0 =  (sc_lv<8>) (tmp_44_cast_reg_13172_pp0_iter2_reg.read());
}

void FIRE3::thread_OFM_60_address1() {
    OFM_60_address1 = OFM_60_addr_reg_14055_pp0_iter30_reg.read();
}

void FIRE3::thread_OFM_60_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        OFM_60_ce0 = ap_const_logic_1;
    } else {
        OFM_60_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_60_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter31.read(), ap_const_logic_1))) {
        OFM_60_ce1 = ap_const_logic_1;
    } else {
        OFM_60_ce1 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_60_d1() {
    OFM_60_d1 = grp_fu_10129_p2.read();
}

void FIRE3::thread_OFM_60_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter31.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(exitcond_flatten7_reg_12440_pp0_iter30_reg.read(), ap_const_lv1_0))) {
        OFM_60_we1 = ap_const_logic_1;
    } else {
        OFM_60_we1 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_61_address0() {
    OFM_61_address0 =  (sc_lv<8>) (tmp_44_cast_reg_13172_pp0_iter2_reg.read());
}

void FIRE3::thread_OFM_61_address1() {
    OFM_61_address1 = OFM_61_addr_reg_14061_pp0_iter30_reg.read();
}

void FIRE3::thread_OFM_61_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        OFM_61_ce0 = ap_const_logic_1;
    } else {
        OFM_61_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_61_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter31.read(), ap_const_logic_1))) {
        OFM_61_ce1 = ap_const_logic_1;
    } else {
        OFM_61_ce1 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_61_d1() {
    OFM_61_d1 = grp_fu_10134_p2.read();
}

void FIRE3::thread_OFM_61_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter31.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(exitcond_flatten7_reg_12440_pp0_iter30_reg.read(), ap_const_lv1_0))) {
        OFM_61_we1 = ap_const_logic_1;
    } else {
        OFM_61_we1 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_62_address0() {
    OFM_62_address0 =  (sc_lv<8>) (tmp_44_cast_reg_13172_pp0_iter2_reg.read());
}

void FIRE3::thread_OFM_62_address1() {
    OFM_62_address1 = OFM_62_addr_reg_14067_pp0_iter30_reg.read();
}

void FIRE3::thread_OFM_62_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        OFM_62_ce0 = ap_const_logic_1;
    } else {
        OFM_62_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_62_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter31.read(), ap_const_logic_1))) {
        OFM_62_ce1 = ap_const_logic_1;
    } else {
        OFM_62_ce1 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_62_d1() {
    OFM_62_d1 = grp_fu_10139_p2.read();
}

void FIRE3::thread_OFM_62_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter31.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(exitcond_flatten7_reg_12440_pp0_iter30_reg.read(), ap_const_lv1_0))) {
        OFM_62_we1 = ap_const_logic_1;
    } else {
        OFM_62_we1 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_63_address0() {
    OFM_63_address0 =  (sc_lv<8>) (tmp_44_cast_reg_13172_pp0_iter2_reg.read());
}

void FIRE3::thread_OFM_63_address1() {
    OFM_63_address1 = OFM_63_addr_reg_14073_pp0_iter30_reg.read();
}

void FIRE3::thread_OFM_63_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        OFM_63_ce0 = ap_const_logic_1;
    } else {
        OFM_63_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_63_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter31.read(), ap_const_logic_1))) {
        OFM_63_ce1 = ap_const_logic_1;
    } else {
        OFM_63_ce1 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_63_d1() {
    OFM_63_d1 = grp_fu_10144_p2.read();
}

void FIRE3::thread_OFM_63_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter31.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(exitcond_flatten7_reg_12440_pp0_iter30_reg.read(), ap_const_lv1_0))) {
        OFM_63_we1 = ap_const_logic_1;
    } else {
        OFM_63_we1 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_6_address0() {
    OFM_6_address0 =  (sc_lv<8>) (tmp_44_cast_reg_13172_pp0_iter2_reg.read());
}

void FIRE3::thread_OFM_6_address1() {
    OFM_6_address1 = OFM_6_addr_reg_13731_pp0_iter30_reg.read();
}

void FIRE3::thread_OFM_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        OFM_6_ce0 = ap_const_logic_1;
    } else {
        OFM_6_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_6_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter31.read(), ap_const_logic_1))) {
        OFM_6_ce1 = ap_const_logic_1;
    } else {
        OFM_6_ce1 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_6_d1() {
    OFM_6_d1 = grp_fu_9859_p2.read();
}

void FIRE3::thread_OFM_6_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter31.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(exitcond_flatten7_reg_12440_pp0_iter30_reg.read(), ap_const_lv1_0))) {
        OFM_6_we1 = ap_const_logic_1;
    } else {
        OFM_6_we1 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_7_address0() {
    OFM_7_address0 =  (sc_lv<8>) (tmp_44_cast_reg_13172_pp0_iter2_reg.read());
}

void FIRE3::thread_OFM_7_address1() {
    OFM_7_address1 = OFM_7_addr_reg_13737_pp0_iter30_reg.read();
}

void FIRE3::thread_OFM_7_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        OFM_7_ce0 = ap_const_logic_1;
    } else {
        OFM_7_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_7_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter31.read(), ap_const_logic_1))) {
        OFM_7_ce1 = ap_const_logic_1;
    } else {
        OFM_7_ce1 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_7_d1() {
    OFM_7_d1 = grp_fu_9864_p2.read();
}

void FIRE3::thread_OFM_7_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter31.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(exitcond_flatten7_reg_12440_pp0_iter30_reg.read(), ap_const_lv1_0))) {
        OFM_7_we1 = ap_const_logic_1;
    } else {
        OFM_7_we1 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_8_address0() {
    OFM_8_address0 =  (sc_lv<8>) (tmp_44_cast_reg_13172_pp0_iter2_reg.read());
}

void FIRE3::thread_OFM_8_address1() {
    OFM_8_address1 = OFM_8_addr_reg_13743_pp0_iter30_reg.read();
}

void FIRE3::thread_OFM_8_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        OFM_8_ce0 = ap_const_logic_1;
    } else {
        OFM_8_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_8_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter31.read(), ap_const_logic_1))) {
        OFM_8_ce1 = ap_const_logic_1;
    } else {
        OFM_8_ce1 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_8_d1() {
    OFM_8_d1 = grp_fu_9869_p2.read();
}

void FIRE3::thread_OFM_8_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter31.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(exitcond_flatten7_reg_12440_pp0_iter30_reg.read(), ap_const_lv1_0))) {
        OFM_8_we1 = ap_const_logic_1;
    } else {
        OFM_8_we1 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_9_address0() {
    OFM_9_address0 =  (sc_lv<8>) (tmp_44_cast_reg_13172_pp0_iter2_reg.read());
}

void FIRE3::thread_OFM_9_address1() {
    OFM_9_address1 = OFM_9_addr_reg_13749_pp0_iter30_reg.read();
}

void FIRE3::thread_OFM_9_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter3.read()))) {
        OFM_9_ce0 = ap_const_logic_1;
    } else {
        OFM_9_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_9_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter31.read(), ap_const_logic_1))) {
        OFM_9_ce1 = ap_const_logic_1;
    } else {
        OFM_9_ce1 = ap_const_logic_0;
    }
}

void FIRE3::thread_OFM_9_d1() {
    OFM_9_d1 = grp_fu_9874_p2.read();
}

void FIRE3::thread_OFM_9_we1() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter31.read(), ap_const_logic_1) && 
         esl_seteq<1,1,1>(exitcond_flatten7_reg_12440_pp0_iter30_reg.read(), ap_const_lv1_0))) {
        OFM_9_we1 = ap_const_logic_1;
    } else {
        OFM_9_we1 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_0_0_address0() {
    WEIGHT1_0_0_address0 =  (sc_lv<7>) (tmp_41_cast_fu_12171_p1.read());
}

void FIRE3::thread_WEIGHT1_0_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1))) {
        WEIGHT1_0_0_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_0_0_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_0_1_address0() {
    WEIGHT1_0_1_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter3_reg.read());
}

void FIRE3::thread_WEIGHT1_0_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        WEIGHT1_0_1_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_0_1_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_0_2_address0() {
    WEIGHT1_0_2_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter7_reg.read());
}

void FIRE3::thread_WEIGHT1_0_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()))) {
        WEIGHT1_0_2_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_0_2_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_0_3_address0() {
    WEIGHT1_0_3_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter11_reg.read());
}

void FIRE3::thread_WEIGHT1_0_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()))) {
        WEIGHT1_0_3_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_0_3_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_0_4_address0() {
    WEIGHT1_0_4_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter15_reg.read());
}

void FIRE3::thread_WEIGHT1_0_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter16.read()))) {
        WEIGHT1_0_4_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_0_4_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_0_5_address0() {
    WEIGHT1_0_5_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter19_reg.read());
}

void FIRE3::thread_WEIGHT1_0_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter20.read()))) {
        WEIGHT1_0_5_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_0_5_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_0_6_address0() {
    WEIGHT1_0_6_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter23_reg.read());
}

void FIRE3::thread_WEIGHT1_0_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter24.read()))) {
        WEIGHT1_0_6_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_0_6_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_10_0_address0() {
    WEIGHT1_10_0_address0 =  (sc_lv<7>) (tmp_41_cast_fu_12171_p1.read());
}

void FIRE3::thread_WEIGHT1_10_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1))) {
        WEIGHT1_10_0_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_10_0_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_10_1_address0() {
    WEIGHT1_10_1_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter3_reg.read());
}

void FIRE3::thread_WEIGHT1_10_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        WEIGHT1_10_1_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_10_1_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_10_2_address0() {
    WEIGHT1_10_2_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter7_reg.read());
}

void FIRE3::thread_WEIGHT1_10_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()))) {
        WEIGHT1_10_2_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_10_2_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_10_3_address0() {
    WEIGHT1_10_3_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter11_reg.read());
}

void FIRE3::thread_WEIGHT1_10_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()))) {
        WEIGHT1_10_3_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_10_3_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_10_4_address0() {
    WEIGHT1_10_4_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter15_reg.read());
}

void FIRE3::thread_WEIGHT1_10_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter16.read()))) {
        WEIGHT1_10_4_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_10_4_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_10_5_address0() {
    WEIGHT1_10_5_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter19_reg.read());
}

void FIRE3::thread_WEIGHT1_10_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter20.read()))) {
        WEIGHT1_10_5_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_10_5_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_10_6_address0() {
    WEIGHT1_10_6_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter23_reg.read());
}

void FIRE3::thread_WEIGHT1_10_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter24.read()))) {
        WEIGHT1_10_6_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_10_6_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_11_0_address0() {
    WEIGHT1_11_0_address0 =  (sc_lv<7>) (tmp_41_cast_fu_12171_p1.read());
}

void FIRE3::thread_WEIGHT1_11_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1))) {
        WEIGHT1_11_0_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_11_0_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_11_1_address0() {
    WEIGHT1_11_1_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter3_reg.read());
}

void FIRE3::thread_WEIGHT1_11_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        WEIGHT1_11_1_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_11_1_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_11_2_address0() {
    WEIGHT1_11_2_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter7_reg.read());
}

void FIRE3::thread_WEIGHT1_11_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()))) {
        WEIGHT1_11_2_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_11_2_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_11_3_address0() {
    WEIGHT1_11_3_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter11_reg.read());
}

void FIRE3::thread_WEIGHT1_11_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()))) {
        WEIGHT1_11_3_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_11_3_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_11_4_address0() {
    WEIGHT1_11_4_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter15_reg.read());
}

void FIRE3::thread_WEIGHT1_11_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter16.read()))) {
        WEIGHT1_11_4_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_11_4_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_11_5_address0() {
    WEIGHT1_11_5_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter19_reg.read());
}

void FIRE3::thread_WEIGHT1_11_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter20.read()))) {
        WEIGHT1_11_5_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_11_5_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_11_6_address0() {
    WEIGHT1_11_6_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter23_reg.read());
}

void FIRE3::thread_WEIGHT1_11_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter24.read()))) {
        WEIGHT1_11_6_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_11_6_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_12_0_address0() {
    WEIGHT1_12_0_address0 =  (sc_lv<7>) (tmp_41_cast_fu_12171_p1.read());
}

void FIRE3::thread_WEIGHT1_12_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1))) {
        WEIGHT1_12_0_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_12_0_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_12_1_address0() {
    WEIGHT1_12_1_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter3_reg.read());
}

void FIRE3::thread_WEIGHT1_12_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        WEIGHT1_12_1_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_12_1_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_12_2_address0() {
    WEIGHT1_12_2_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter7_reg.read());
}

void FIRE3::thread_WEIGHT1_12_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()))) {
        WEIGHT1_12_2_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_12_2_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_12_3_address0() {
    WEIGHT1_12_3_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter11_reg.read());
}

void FIRE3::thread_WEIGHT1_12_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()))) {
        WEIGHT1_12_3_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_12_3_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_12_4_address0() {
    WEIGHT1_12_4_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter15_reg.read());
}

void FIRE3::thread_WEIGHT1_12_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter16.read()))) {
        WEIGHT1_12_4_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_12_4_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_12_5_address0() {
    WEIGHT1_12_5_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter19_reg.read());
}

void FIRE3::thread_WEIGHT1_12_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter20.read()))) {
        WEIGHT1_12_5_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_12_5_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_12_6_address0() {
    WEIGHT1_12_6_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter23_reg.read());
}

void FIRE3::thread_WEIGHT1_12_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter24.read()))) {
        WEIGHT1_12_6_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_12_6_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_13_0_address0() {
    WEIGHT1_13_0_address0 =  (sc_lv<7>) (tmp_41_cast_fu_12171_p1.read());
}

void FIRE3::thread_WEIGHT1_13_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1))) {
        WEIGHT1_13_0_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_13_0_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_13_1_address0() {
    WEIGHT1_13_1_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter3_reg.read());
}

void FIRE3::thread_WEIGHT1_13_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        WEIGHT1_13_1_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_13_1_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_13_2_address0() {
    WEIGHT1_13_2_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter7_reg.read());
}

void FIRE3::thread_WEIGHT1_13_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()))) {
        WEIGHT1_13_2_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_13_2_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_13_3_address0() {
    WEIGHT1_13_3_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter11_reg.read());
}

void FIRE3::thread_WEIGHT1_13_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()))) {
        WEIGHT1_13_3_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_13_3_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_13_4_address0() {
    WEIGHT1_13_4_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter15_reg.read());
}

void FIRE3::thread_WEIGHT1_13_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter16.read()))) {
        WEIGHT1_13_4_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_13_4_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_13_5_address0() {
    WEIGHT1_13_5_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter19_reg.read());
}

void FIRE3::thread_WEIGHT1_13_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter20.read()))) {
        WEIGHT1_13_5_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_13_5_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_13_6_address0() {
    WEIGHT1_13_6_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter23_reg.read());
}

void FIRE3::thread_WEIGHT1_13_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter24.read()))) {
        WEIGHT1_13_6_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_13_6_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_14_0_address0() {
    WEIGHT1_14_0_address0 =  (sc_lv<7>) (tmp_41_cast_fu_12171_p1.read());
}

void FIRE3::thread_WEIGHT1_14_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1))) {
        WEIGHT1_14_0_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_14_0_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_14_1_address0() {
    WEIGHT1_14_1_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter3_reg.read());
}

void FIRE3::thread_WEIGHT1_14_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        WEIGHT1_14_1_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_14_1_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_14_2_address0() {
    WEIGHT1_14_2_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter7_reg.read());
}

void FIRE3::thread_WEIGHT1_14_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()))) {
        WEIGHT1_14_2_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_14_2_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_14_3_address0() {
    WEIGHT1_14_3_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter11_reg.read());
}

void FIRE3::thread_WEIGHT1_14_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()))) {
        WEIGHT1_14_3_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_14_3_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_14_4_address0() {
    WEIGHT1_14_4_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter15_reg.read());
}

void FIRE3::thread_WEIGHT1_14_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter16.read()))) {
        WEIGHT1_14_4_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_14_4_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_14_5_address0() {
    WEIGHT1_14_5_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter19_reg.read());
}

void FIRE3::thread_WEIGHT1_14_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter20.read()))) {
        WEIGHT1_14_5_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_14_5_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_14_6_address0() {
    WEIGHT1_14_6_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter23_reg.read());
}

void FIRE3::thread_WEIGHT1_14_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter24.read()))) {
        WEIGHT1_14_6_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_14_6_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_15_0_address0() {
    WEIGHT1_15_0_address0 =  (sc_lv<7>) (tmp_41_cast_fu_12171_p1.read());
}

void FIRE3::thread_WEIGHT1_15_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1))) {
        WEIGHT1_15_0_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_15_0_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_15_1_address0() {
    WEIGHT1_15_1_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter3_reg.read());
}

void FIRE3::thread_WEIGHT1_15_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        WEIGHT1_15_1_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_15_1_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_15_2_address0() {
    WEIGHT1_15_2_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter7_reg.read());
}

void FIRE3::thread_WEIGHT1_15_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()))) {
        WEIGHT1_15_2_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_15_2_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_15_3_address0() {
    WEIGHT1_15_3_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter11_reg.read());
}

void FIRE3::thread_WEIGHT1_15_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()))) {
        WEIGHT1_15_3_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_15_3_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_15_4_address0() {
    WEIGHT1_15_4_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter15_reg.read());
}

void FIRE3::thread_WEIGHT1_15_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter16.read()))) {
        WEIGHT1_15_4_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_15_4_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_15_5_address0() {
    WEIGHT1_15_5_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter19_reg.read());
}

void FIRE3::thread_WEIGHT1_15_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter20.read()))) {
        WEIGHT1_15_5_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_15_5_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_15_6_address0() {
    WEIGHT1_15_6_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter23_reg.read());
}

void FIRE3::thread_WEIGHT1_15_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter24.read()))) {
        WEIGHT1_15_6_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_15_6_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_16_0_address0() {
    WEIGHT1_16_0_address0 =  (sc_lv<7>) (tmp_41_cast_fu_12171_p1.read());
}

void FIRE3::thread_WEIGHT1_16_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1))) {
        WEIGHT1_16_0_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_16_0_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_16_1_address0() {
    WEIGHT1_16_1_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter3_reg.read());
}

void FIRE3::thread_WEIGHT1_16_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        WEIGHT1_16_1_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_16_1_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_16_2_address0() {
    WEIGHT1_16_2_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter7_reg.read());
}

void FIRE3::thread_WEIGHT1_16_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()))) {
        WEIGHT1_16_2_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_16_2_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_16_3_address0() {
    WEIGHT1_16_3_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter11_reg.read());
}

void FIRE3::thread_WEIGHT1_16_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()))) {
        WEIGHT1_16_3_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_16_3_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_16_4_address0() {
    WEIGHT1_16_4_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter15_reg.read());
}

void FIRE3::thread_WEIGHT1_16_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter16.read()))) {
        WEIGHT1_16_4_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_16_4_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_16_5_address0() {
    WEIGHT1_16_5_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter19_reg.read());
}

void FIRE3::thread_WEIGHT1_16_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter20.read()))) {
        WEIGHT1_16_5_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_16_5_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_16_6_address0() {
    WEIGHT1_16_6_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter23_reg.read());
}

void FIRE3::thread_WEIGHT1_16_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter24.read()))) {
        WEIGHT1_16_6_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_16_6_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_17_0_address0() {
    WEIGHT1_17_0_address0 =  (sc_lv<7>) (tmp_41_cast_fu_12171_p1.read());
}

void FIRE3::thread_WEIGHT1_17_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1))) {
        WEIGHT1_17_0_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_17_0_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_17_1_address0() {
    WEIGHT1_17_1_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter3_reg.read());
}

void FIRE3::thread_WEIGHT1_17_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        WEIGHT1_17_1_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_17_1_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_17_2_address0() {
    WEIGHT1_17_2_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter7_reg.read());
}

void FIRE3::thread_WEIGHT1_17_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()))) {
        WEIGHT1_17_2_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_17_2_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_17_3_address0() {
    WEIGHT1_17_3_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter11_reg.read());
}

void FIRE3::thread_WEIGHT1_17_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()))) {
        WEIGHT1_17_3_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_17_3_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_17_4_address0() {
    WEIGHT1_17_4_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter15_reg.read());
}

void FIRE3::thread_WEIGHT1_17_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter16.read()))) {
        WEIGHT1_17_4_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_17_4_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_17_5_address0() {
    WEIGHT1_17_5_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter19_reg.read());
}

void FIRE3::thread_WEIGHT1_17_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter20.read()))) {
        WEIGHT1_17_5_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_17_5_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_17_6_address0() {
    WEIGHT1_17_6_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter23_reg.read());
}

void FIRE3::thread_WEIGHT1_17_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter24.read()))) {
        WEIGHT1_17_6_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_17_6_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_18_0_address0() {
    WEIGHT1_18_0_address0 =  (sc_lv<7>) (tmp_41_cast_fu_12171_p1.read());
}

void FIRE3::thread_WEIGHT1_18_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1))) {
        WEIGHT1_18_0_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_18_0_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_18_1_address0() {
    WEIGHT1_18_1_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter3_reg.read());
}

void FIRE3::thread_WEIGHT1_18_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        WEIGHT1_18_1_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_18_1_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_18_2_address0() {
    WEIGHT1_18_2_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter7_reg.read());
}

void FIRE3::thread_WEIGHT1_18_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()))) {
        WEIGHT1_18_2_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_18_2_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_18_3_address0() {
    WEIGHT1_18_3_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter11_reg.read());
}

void FIRE3::thread_WEIGHT1_18_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()))) {
        WEIGHT1_18_3_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_18_3_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_18_4_address0() {
    WEIGHT1_18_4_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter15_reg.read());
}

void FIRE3::thread_WEIGHT1_18_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter16.read()))) {
        WEIGHT1_18_4_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_18_4_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_18_5_address0() {
    WEIGHT1_18_5_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter19_reg.read());
}

void FIRE3::thread_WEIGHT1_18_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter20.read()))) {
        WEIGHT1_18_5_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_18_5_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_18_6_address0() {
    WEIGHT1_18_6_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter23_reg.read());
}

void FIRE3::thread_WEIGHT1_18_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter24.read()))) {
        WEIGHT1_18_6_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_18_6_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_19_0_address0() {
    WEIGHT1_19_0_address0 =  (sc_lv<7>) (tmp_41_cast_fu_12171_p1.read());
}

void FIRE3::thread_WEIGHT1_19_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1))) {
        WEIGHT1_19_0_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_19_0_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_19_1_address0() {
    WEIGHT1_19_1_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter3_reg.read());
}

void FIRE3::thread_WEIGHT1_19_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        WEIGHT1_19_1_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_19_1_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_19_2_address0() {
    WEIGHT1_19_2_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter7_reg.read());
}

void FIRE3::thread_WEIGHT1_19_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()))) {
        WEIGHT1_19_2_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_19_2_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_19_3_address0() {
    WEIGHT1_19_3_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter11_reg.read());
}

void FIRE3::thread_WEIGHT1_19_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()))) {
        WEIGHT1_19_3_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_19_3_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_19_4_address0() {
    WEIGHT1_19_4_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter15_reg.read());
}

void FIRE3::thread_WEIGHT1_19_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter16.read()))) {
        WEIGHT1_19_4_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_19_4_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_19_5_address0() {
    WEIGHT1_19_5_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter19_reg.read());
}

void FIRE3::thread_WEIGHT1_19_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter20.read()))) {
        WEIGHT1_19_5_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_19_5_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_19_6_address0() {
    WEIGHT1_19_6_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter23_reg.read());
}

void FIRE3::thread_WEIGHT1_19_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter24.read()))) {
        WEIGHT1_19_6_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_19_6_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_1_0_address0() {
    WEIGHT1_1_0_address0 =  (sc_lv<7>) (tmp_41_cast_fu_12171_p1.read());
}

void FIRE3::thread_WEIGHT1_1_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1))) {
        WEIGHT1_1_0_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_1_0_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_1_1_address0() {
    WEIGHT1_1_1_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter3_reg.read());
}

void FIRE3::thread_WEIGHT1_1_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        WEIGHT1_1_1_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_1_1_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_1_2_address0() {
    WEIGHT1_1_2_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter7_reg.read());
}

void FIRE3::thread_WEIGHT1_1_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()))) {
        WEIGHT1_1_2_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_1_2_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_1_3_address0() {
    WEIGHT1_1_3_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter11_reg.read());
}

void FIRE3::thread_WEIGHT1_1_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()))) {
        WEIGHT1_1_3_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_1_3_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_1_4_address0() {
    WEIGHT1_1_4_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter15_reg.read());
}

void FIRE3::thread_WEIGHT1_1_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter16.read()))) {
        WEIGHT1_1_4_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_1_4_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_1_5_address0() {
    WEIGHT1_1_5_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter19_reg.read());
}

void FIRE3::thread_WEIGHT1_1_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter20.read()))) {
        WEIGHT1_1_5_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_1_5_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_1_6_address0() {
    WEIGHT1_1_6_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter23_reg.read());
}

void FIRE3::thread_WEIGHT1_1_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter24.read()))) {
        WEIGHT1_1_6_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_1_6_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_20_0_address0() {
    WEIGHT1_20_0_address0 =  (sc_lv<7>) (tmp_41_cast_fu_12171_p1.read());
}

void FIRE3::thread_WEIGHT1_20_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1))) {
        WEIGHT1_20_0_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_20_0_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_20_1_address0() {
    WEIGHT1_20_1_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter3_reg.read());
}

void FIRE3::thread_WEIGHT1_20_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        WEIGHT1_20_1_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_20_1_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_20_2_address0() {
    WEIGHT1_20_2_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter7_reg.read());
}

void FIRE3::thread_WEIGHT1_20_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()))) {
        WEIGHT1_20_2_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_20_2_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_20_3_address0() {
    WEIGHT1_20_3_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter11_reg.read());
}

void FIRE3::thread_WEIGHT1_20_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()))) {
        WEIGHT1_20_3_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_20_3_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_20_4_address0() {
    WEIGHT1_20_4_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter15_reg.read());
}

void FIRE3::thread_WEIGHT1_20_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter16.read()))) {
        WEIGHT1_20_4_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_20_4_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_20_5_address0() {
    WEIGHT1_20_5_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter19_reg.read());
}

void FIRE3::thread_WEIGHT1_20_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter20.read()))) {
        WEIGHT1_20_5_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_20_5_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_20_6_address0() {
    WEIGHT1_20_6_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter23_reg.read());
}

void FIRE3::thread_WEIGHT1_20_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter24.read()))) {
        WEIGHT1_20_6_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_20_6_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_21_0_address0() {
    WEIGHT1_21_0_address0 =  (sc_lv<7>) (tmp_41_cast_fu_12171_p1.read());
}

void FIRE3::thread_WEIGHT1_21_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1))) {
        WEIGHT1_21_0_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_21_0_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_21_1_address0() {
    WEIGHT1_21_1_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter3_reg.read());
}

void FIRE3::thread_WEIGHT1_21_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        WEIGHT1_21_1_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_21_1_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_21_2_address0() {
    WEIGHT1_21_2_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter7_reg.read());
}

void FIRE3::thread_WEIGHT1_21_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()))) {
        WEIGHT1_21_2_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_21_2_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_21_3_address0() {
    WEIGHT1_21_3_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter11_reg.read());
}

void FIRE3::thread_WEIGHT1_21_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()))) {
        WEIGHT1_21_3_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_21_3_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_21_4_address0() {
    WEIGHT1_21_4_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter15_reg.read());
}

void FIRE3::thread_WEIGHT1_21_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter16.read()))) {
        WEIGHT1_21_4_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_21_4_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_21_5_address0() {
    WEIGHT1_21_5_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter19_reg.read());
}

void FIRE3::thread_WEIGHT1_21_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter20.read()))) {
        WEIGHT1_21_5_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_21_5_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_21_6_address0() {
    WEIGHT1_21_6_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter23_reg.read());
}

void FIRE3::thread_WEIGHT1_21_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter24.read()))) {
        WEIGHT1_21_6_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_21_6_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_22_0_address0() {
    WEIGHT1_22_0_address0 =  (sc_lv<7>) (tmp_41_cast_fu_12171_p1.read());
}

void FIRE3::thread_WEIGHT1_22_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1))) {
        WEIGHT1_22_0_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_22_0_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_22_1_address0() {
    WEIGHT1_22_1_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter3_reg.read());
}

void FIRE3::thread_WEIGHT1_22_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        WEIGHT1_22_1_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_22_1_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_22_2_address0() {
    WEIGHT1_22_2_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter7_reg.read());
}

void FIRE3::thread_WEIGHT1_22_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()))) {
        WEIGHT1_22_2_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_22_2_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_22_3_address0() {
    WEIGHT1_22_3_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter11_reg.read());
}

void FIRE3::thread_WEIGHT1_22_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()))) {
        WEIGHT1_22_3_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_22_3_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_22_4_address0() {
    WEIGHT1_22_4_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter15_reg.read());
}

void FIRE3::thread_WEIGHT1_22_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter16.read()))) {
        WEIGHT1_22_4_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_22_4_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_22_5_address0() {
    WEIGHT1_22_5_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter19_reg.read());
}

void FIRE3::thread_WEIGHT1_22_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter20.read()))) {
        WEIGHT1_22_5_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_22_5_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_22_6_address0() {
    WEIGHT1_22_6_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter23_reg.read());
}

void FIRE3::thread_WEIGHT1_22_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter24.read()))) {
        WEIGHT1_22_6_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_22_6_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_23_0_address0() {
    WEIGHT1_23_0_address0 =  (sc_lv<7>) (tmp_41_cast_fu_12171_p1.read());
}

void FIRE3::thread_WEIGHT1_23_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1))) {
        WEIGHT1_23_0_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_23_0_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_23_1_address0() {
    WEIGHT1_23_1_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter3_reg.read());
}

void FIRE3::thread_WEIGHT1_23_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        WEIGHT1_23_1_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_23_1_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_23_2_address0() {
    WEIGHT1_23_2_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter7_reg.read());
}

void FIRE3::thread_WEIGHT1_23_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()))) {
        WEIGHT1_23_2_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_23_2_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_23_3_address0() {
    WEIGHT1_23_3_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter11_reg.read());
}

void FIRE3::thread_WEIGHT1_23_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()))) {
        WEIGHT1_23_3_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_23_3_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_23_4_address0() {
    WEIGHT1_23_4_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter15_reg.read());
}

void FIRE3::thread_WEIGHT1_23_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter16.read()))) {
        WEIGHT1_23_4_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_23_4_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_23_5_address0() {
    WEIGHT1_23_5_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter19_reg.read());
}

void FIRE3::thread_WEIGHT1_23_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter20.read()))) {
        WEIGHT1_23_5_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_23_5_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_23_6_address0() {
    WEIGHT1_23_6_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter23_reg.read());
}

void FIRE3::thread_WEIGHT1_23_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter24.read()))) {
        WEIGHT1_23_6_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_23_6_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_24_0_address0() {
    WEIGHT1_24_0_address0 =  (sc_lv<7>) (tmp_41_cast_fu_12171_p1.read());
}

void FIRE3::thread_WEIGHT1_24_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1))) {
        WEIGHT1_24_0_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_24_0_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_24_1_address0() {
    WEIGHT1_24_1_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter3_reg.read());
}

void FIRE3::thread_WEIGHT1_24_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        WEIGHT1_24_1_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_24_1_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_24_2_address0() {
    WEIGHT1_24_2_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter7_reg.read());
}

void FIRE3::thread_WEIGHT1_24_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()))) {
        WEIGHT1_24_2_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_24_2_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_24_3_address0() {
    WEIGHT1_24_3_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter11_reg.read());
}

void FIRE3::thread_WEIGHT1_24_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()))) {
        WEIGHT1_24_3_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_24_3_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_24_4_address0() {
    WEIGHT1_24_4_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter15_reg.read());
}

void FIRE3::thread_WEIGHT1_24_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter16.read()))) {
        WEIGHT1_24_4_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_24_4_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_24_5_address0() {
    WEIGHT1_24_5_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter19_reg.read());
}

void FIRE3::thread_WEIGHT1_24_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter20.read()))) {
        WEIGHT1_24_5_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_24_5_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_24_6_address0() {
    WEIGHT1_24_6_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter23_reg.read());
}

void FIRE3::thread_WEIGHT1_24_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter24.read()))) {
        WEIGHT1_24_6_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_24_6_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_25_0_address0() {
    WEIGHT1_25_0_address0 =  (sc_lv<7>) (tmp_41_cast_fu_12171_p1.read());
}

void FIRE3::thread_WEIGHT1_25_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1))) {
        WEIGHT1_25_0_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_25_0_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_25_1_address0() {
    WEIGHT1_25_1_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter3_reg.read());
}

void FIRE3::thread_WEIGHT1_25_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        WEIGHT1_25_1_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_25_1_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_25_2_address0() {
    WEIGHT1_25_2_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter7_reg.read());
}

void FIRE3::thread_WEIGHT1_25_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()))) {
        WEIGHT1_25_2_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_25_2_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_25_3_address0() {
    WEIGHT1_25_3_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter11_reg.read());
}

void FIRE3::thread_WEIGHT1_25_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()))) {
        WEIGHT1_25_3_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_25_3_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_25_4_address0() {
    WEIGHT1_25_4_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter15_reg.read());
}

void FIRE3::thread_WEIGHT1_25_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter16.read()))) {
        WEIGHT1_25_4_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_25_4_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_25_5_address0() {
    WEIGHT1_25_5_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter19_reg.read());
}

void FIRE3::thread_WEIGHT1_25_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter20.read()))) {
        WEIGHT1_25_5_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_25_5_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_25_6_address0() {
    WEIGHT1_25_6_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter23_reg.read());
}

void FIRE3::thread_WEIGHT1_25_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter24.read()))) {
        WEIGHT1_25_6_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_25_6_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_26_0_address0() {
    WEIGHT1_26_0_address0 =  (sc_lv<7>) (tmp_41_cast_fu_12171_p1.read());
}

void FIRE3::thread_WEIGHT1_26_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1))) {
        WEIGHT1_26_0_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_26_0_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_26_1_address0() {
    WEIGHT1_26_1_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter3_reg.read());
}

void FIRE3::thread_WEIGHT1_26_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        WEIGHT1_26_1_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_26_1_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_26_2_address0() {
    WEIGHT1_26_2_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter7_reg.read());
}

void FIRE3::thread_WEIGHT1_26_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()))) {
        WEIGHT1_26_2_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_26_2_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_26_3_address0() {
    WEIGHT1_26_3_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter11_reg.read());
}

void FIRE3::thread_WEIGHT1_26_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()))) {
        WEIGHT1_26_3_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_26_3_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_26_4_address0() {
    WEIGHT1_26_4_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter15_reg.read());
}

void FIRE3::thread_WEIGHT1_26_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter16.read()))) {
        WEIGHT1_26_4_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_26_4_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_26_5_address0() {
    WEIGHT1_26_5_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter19_reg.read());
}

void FIRE3::thread_WEIGHT1_26_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter20.read()))) {
        WEIGHT1_26_5_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_26_5_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_26_6_address0() {
    WEIGHT1_26_6_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter23_reg.read());
}

void FIRE3::thread_WEIGHT1_26_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter24.read()))) {
        WEIGHT1_26_6_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_26_6_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_27_0_address0() {
    WEIGHT1_27_0_address0 =  (sc_lv<7>) (tmp_41_cast_fu_12171_p1.read());
}

void FIRE3::thread_WEIGHT1_27_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1))) {
        WEIGHT1_27_0_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_27_0_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_27_1_address0() {
    WEIGHT1_27_1_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter3_reg.read());
}

void FIRE3::thread_WEIGHT1_27_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        WEIGHT1_27_1_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_27_1_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_27_2_address0() {
    WEIGHT1_27_2_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter7_reg.read());
}

void FIRE3::thread_WEIGHT1_27_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()))) {
        WEIGHT1_27_2_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_27_2_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_27_3_address0() {
    WEIGHT1_27_3_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter11_reg.read());
}

void FIRE3::thread_WEIGHT1_27_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()))) {
        WEIGHT1_27_3_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_27_3_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_27_4_address0() {
    WEIGHT1_27_4_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter15_reg.read());
}

void FIRE3::thread_WEIGHT1_27_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter16.read()))) {
        WEIGHT1_27_4_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_27_4_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_27_5_address0() {
    WEIGHT1_27_5_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter19_reg.read());
}

void FIRE3::thread_WEIGHT1_27_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter20.read()))) {
        WEIGHT1_27_5_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_27_5_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_27_6_address0() {
    WEIGHT1_27_6_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter23_reg.read());
}

void FIRE3::thread_WEIGHT1_27_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter24.read()))) {
        WEIGHT1_27_6_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_27_6_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_28_0_address0() {
    WEIGHT1_28_0_address0 =  (sc_lv<7>) (tmp_41_cast_fu_12171_p1.read());
}

void FIRE3::thread_WEIGHT1_28_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1))) {
        WEIGHT1_28_0_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_28_0_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_28_1_address0() {
    WEIGHT1_28_1_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter3_reg.read());
}

void FIRE3::thread_WEIGHT1_28_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        WEIGHT1_28_1_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_28_1_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_28_2_address0() {
    WEIGHT1_28_2_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter7_reg.read());
}

void FIRE3::thread_WEIGHT1_28_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()))) {
        WEIGHT1_28_2_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_28_2_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_28_3_address0() {
    WEIGHT1_28_3_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter11_reg.read());
}

void FIRE3::thread_WEIGHT1_28_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()))) {
        WEIGHT1_28_3_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_28_3_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_28_4_address0() {
    WEIGHT1_28_4_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter15_reg.read());
}

void FIRE3::thread_WEIGHT1_28_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter16.read()))) {
        WEIGHT1_28_4_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_28_4_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_28_5_address0() {
    WEIGHT1_28_5_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter19_reg.read());
}

void FIRE3::thread_WEIGHT1_28_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter20.read()))) {
        WEIGHT1_28_5_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_28_5_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_28_6_address0() {
    WEIGHT1_28_6_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter23_reg.read());
}

void FIRE3::thread_WEIGHT1_28_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter24.read()))) {
        WEIGHT1_28_6_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_28_6_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_29_0_address0() {
    WEIGHT1_29_0_address0 =  (sc_lv<7>) (tmp_41_cast_fu_12171_p1.read());
}

void FIRE3::thread_WEIGHT1_29_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1))) {
        WEIGHT1_29_0_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_29_0_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_29_1_address0() {
    WEIGHT1_29_1_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter3_reg.read());
}

void FIRE3::thread_WEIGHT1_29_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        WEIGHT1_29_1_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_29_1_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_29_2_address0() {
    WEIGHT1_29_2_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter7_reg.read());
}

void FIRE3::thread_WEIGHT1_29_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()))) {
        WEIGHT1_29_2_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_29_2_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_29_3_address0() {
    WEIGHT1_29_3_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter11_reg.read());
}

void FIRE3::thread_WEIGHT1_29_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()))) {
        WEIGHT1_29_3_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_29_3_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_29_4_address0() {
    WEIGHT1_29_4_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter15_reg.read());
}

void FIRE3::thread_WEIGHT1_29_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter16.read()))) {
        WEIGHT1_29_4_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_29_4_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_29_5_address0() {
    WEIGHT1_29_5_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter19_reg.read());
}

void FIRE3::thread_WEIGHT1_29_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter20.read()))) {
        WEIGHT1_29_5_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_29_5_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_29_6_address0() {
    WEIGHT1_29_6_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter23_reg.read());
}

void FIRE3::thread_WEIGHT1_29_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter24.read()))) {
        WEIGHT1_29_6_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_29_6_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_2_0_address0() {
    WEIGHT1_2_0_address0 =  (sc_lv<7>) (tmp_41_cast_fu_12171_p1.read());
}

void FIRE3::thread_WEIGHT1_2_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1))) {
        WEIGHT1_2_0_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_2_0_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_2_1_address0() {
    WEIGHT1_2_1_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter3_reg.read());
}

void FIRE3::thread_WEIGHT1_2_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        WEIGHT1_2_1_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_2_1_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_2_2_address0() {
    WEIGHT1_2_2_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter7_reg.read());
}

void FIRE3::thread_WEIGHT1_2_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()))) {
        WEIGHT1_2_2_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_2_2_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_2_3_address0() {
    WEIGHT1_2_3_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter11_reg.read());
}

void FIRE3::thread_WEIGHT1_2_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()))) {
        WEIGHT1_2_3_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_2_3_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_2_4_address0() {
    WEIGHT1_2_4_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter15_reg.read());
}

void FIRE3::thread_WEIGHT1_2_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter16.read()))) {
        WEIGHT1_2_4_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_2_4_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_2_5_address0() {
    WEIGHT1_2_5_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter19_reg.read());
}

void FIRE3::thread_WEIGHT1_2_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter20.read()))) {
        WEIGHT1_2_5_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_2_5_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_2_6_address0() {
    WEIGHT1_2_6_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter23_reg.read());
}

void FIRE3::thread_WEIGHT1_2_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter24.read()))) {
        WEIGHT1_2_6_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_2_6_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_30_0_address0() {
    WEIGHT1_30_0_address0 =  (sc_lv<7>) (tmp_41_cast_fu_12171_p1.read());
}

void FIRE3::thread_WEIGHT1_30_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1))) {
        WEIGHT1_30_0_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_30_0_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_30_1_address0() {
    WEIGHT1_30_1_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter3_reg.read());
}

void FIRE3::thread_WEIGHT1_30_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        WEIGHT1_30_1_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_30_1_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_30_2_address0() {
    WEIGHT1_30_2_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter7_reg.read());
}

void FIRE3::thread_WEIGHT1_30_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()))) {
        WEIGHT1_30_2_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_30_2_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_30_3_address0() {
    WEIGHT1_30_3_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter11_reg.read());
}

void FIRE3::thread_WEIGHT1_30_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()))) {
        WEIGHT1_30_3_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_30_3_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_30_4_address0() {
    WEIGHT1_30_4_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter15_reg.read());
}

void FIRE3::thread_WEIGHT1_30_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter16.read()))) {
        WEIGHT1_30_4_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_30_4_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_30_5_address0() {
    WEIGHT1_30_5_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter19_reg.read());
}

void FIRE3::thread_WEIGHT1_30_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter20.read()))) {
        WEIGHT1_30_5_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_30_5_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_30_6_address0() {
    WEIGHT1_30_6_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter23_reg.read());
}

void FIRE3::thread_WEIGHT1_30_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter24.read()))) {
        WEIGHT1_30_6_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_30_6_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_31_0_address0() {
    WEIGHT1_31_0_address0 =  (sc_lv<7>) (tmp_41_cast_fu_12171_p1.read());
}

void FIRE3::thread_WEIGHT1_31_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1))) {
        WEIGHT1_31_0_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_31_0_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_31_1_address0() {
    WEIGHT1_31_1_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter3_reg.read());
}

void FIRE3::thread_WEIGHT1_31_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        WEIGHT1_31_1_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_31_1_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_31_2_address0() {
    WEIGHT1_31_2_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter7_reg.read());
}

void FIRE3::thread_WEIGHT1_31_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()))) {
        WEIGHT1_31_2_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_31_2_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_31_3_address0() {
    WEIGHT1_31_3_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter11_reg.read());
}

void FIRE3::thread_WEIGHT1_31_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()))) {
        WEIGHT1_31_3_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_31_3_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_31_4_address0() {
    WEIGHT1_31_4_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter15_reg.read());
}

void FIRE3::thread_WEIGHT1_31_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter16.read()))) {
        WEIGHT1_31_4_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_31_4_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_31_5_address0() {
    WEIGHT1_31_5_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter19_reg.read());
}

void FIRE3::thread_WEIGHT1_31_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter20.read()))) {
        WEIGHT1_31_5_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_31_5_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_31_6_address0() {
    WEIGHT1_31_6_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter23_reg.read());
}

void FIRE3::thread_WEIGHT1_31_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter24.read()))) {
        WEIGHT1_31_6_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_31_6_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_32_0_address0() {
    WEIGHT1_32_0_address0 =  (sc_lv<7>) (tmp_41_cast_fu_12171_p1.read());
}

void FIRE3::thread_WEIGHT1_32_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1))) {
        WEIGHT1_32_0_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_32_0_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_32_1_address0() {
    WEIGHT1_32_1_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter3_reg.read());
}

void FIRE3::thread_WEIGHT1_32_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        WEIGHT1_32_1_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_32_1_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_32_2_address0() {
    WEIGHT1_32_2_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter7_reg.read());
}

void FIRE3::thread_WEIGHT1_32_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()))) {
        WEIGHT1_32_2_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_32_2_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_32_3_address0() {
    WEIGHT1_32_3_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter11_reg.read());
}

void FIRE3::thread_WEIGHT1_32_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()))) {
        WEIGHT1_32_3_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_32_3_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_32_4_address0() {
    WEIGHT1_32_4_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter15_reg.read());
}

void FIRE3::thread_WEIGHT1_32_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter16.read()))) {
        WEIGHT1_32_4_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_32_4_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_32_5_address0() {
    WEIGHT1_32_5_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter19_reg.read());
}

void FIRE3::thread_WEIGHT1_32_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter20.read()))) {
        WEIGHT1_32_5_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_32_5_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_32_6_address0() {
    WEIGHT1_32_6_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter23_reg.read());
}

void FIRE3::thread_WEIGHT1_32_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter24.read()))) {
        WEIGHT1_32_6_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_32_6_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_33_0_address0() {
    WEIGHT1_33_0_address0 =  (sc_lv<7>) (tmp_41_cast_fu_12171_p1.read());
}

void FIRE3::thread_WEIGHT1_33_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1))) {
        WEIGHT1_33_0_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_33_0_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_33_1_address0() {
    WEIGHT1_33_1_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter3_reg.read());
}

void FIRE3::thread_WEIGHT1_33_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        WEIGHT1_33_1_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_33_1_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_33_2_address0() {
    WEIGHT1_33_2_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter7_reg.read());
}

void FIRE3::thread_WEIGHT1_33_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()))) {
        WEIGHT1_33_2_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_33_2_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_33_3_address0() {
    WEIGHT1_33_3_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter11_reg.read());
}

void FIRE3::thread_WEIGHT1_33_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()))) {
        WEIGHT1_33_3_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_33_3_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_33_4_address0() {
    WEIGHT1_33_4_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter15_reg.read());
}

void FIRE3::thread_WEIGHT1_33_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter16.read()))) {
        WEIGHT1_33_4_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_33_4_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_33_5_address0() {
    WEIGHT1_33_5_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter19_reg.read());
}

void FIRE3::thread_WEIGHT1_33_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter20.read()))) {
        WEIGHT1_33_5_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_33_5_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_33_6_address0() {
    WEIGHT1_33_6_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter23_reg.read());
}

void FIRE3::thread_WEIGHT1_33_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter24.read()))) {
        WEIGHT1_33_6_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_33_6_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_34_0_address0() {
    WEIGHT1_34_0_address0 =  (sc_lv<7>) (tmp_41_cast_fu_12171_p1.read());
}

void FIRE3::thread_WEIGHT1_34_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1))) {
        WEIGHT1_34_0_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_34_0_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_34_1_address0() {
    WEIGHT1_34_1_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter3_reg.read());
}

void FIRE3::thread_WEIGHT1_34_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        WEIGHT1_34_1_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_34_1_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_34_2_address0() {
    WEIGHT1_34_2_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter7_reg.read());
}

void FIRE3::thread_WEIGHT1_34_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()))) {
        WEIGHT1_34_2_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_34_2_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_34_3_address0() {
    WEIGHT1_34_3_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter11_reg.read());
}

void FIRE3::thread_WEIGHT1_34_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()))) {
        WEIGHT1_34_3_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_34_3_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_34_4_address0() {
    WEIGHT1_34_4_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter15_reg.read());
}

void FIRE3::thread_WEIGHT1_34_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter16.read()))) {
        WEIGHT1_34_4_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_34_4_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_34_5_address0() {
    WEIGHT1_34_5_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter19_reg.read());
}

void FIRE3::thread_WEIGHT1_34_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter20.read()))) {
        WEIGHT1_34_5_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_34_5_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_34_6_address0() {
    WEIGHT1_34_6_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter23_reg.read());
}

void FIRE3::thread_WEIGHT1_34_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter24.read()))) {
        WEIGHT1_34_6_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_34_6_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_35_0_address0() {
    WEIGHT1_35_0_address0 =  (sc_lv<7>) (tmp_41_cast_fu_12171_p1.read());
}

void FIRE3::thread_WEIGHT1_35_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1))) {
        WEIGHT1_35_0_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_35_0_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_35_1_address0() {
    WEIGHT1_35_1_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter3_reg.read());
}

void FIRE3::thread_WEIGHT1_35_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        WEIGHT1_35_1_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_35_1_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_35_2_address0() {
    WEIGHT1_35_2_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter7_reg.read());
}

void FIRE3::thread_WEIGHT1_35_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()))) {
        WEIGHT1_35_2_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_35_2_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_35_3_address0() {
    WEIGHT1_35_3_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter11_reg.read());
}

void FIRE3::thread_WEIGHT1_35_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()))) {
        WEIGHT1_35_3_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_35_3_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_35_4_address0() {
    WEIGHT1_35_4_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter15_reg.read());
}

void FIRE3::thread_WEIGHT1_35_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter16.read()))) {
        WEIGHT1_35_4_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_35_4_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_35_5_address0() {
    WEIGHT1_35_5_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter19_reg.read());
}

void FIRE3::thread_WEIGHT1_35_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter20.read()))) {
        WEIGHT1_35_5_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_35_5_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_35_6_address0() {
    WEIGHT1_35_6_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter23_reg.read());
}

void FIRE3::thread_WEIGHT1_35_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter24.read()))) {
        WEIGHT1_35_6_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_35_6_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_36_0_address0() {
    WEIGHT1_36_0_address0 =  (sc_lv<7>) (tmp_41_cast_fu_12171_p1.read());
}

void FIRE3::thread_WEIGHT1_36_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1))) {
        WEIGHT1_36_0_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_36_0_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_36_1_address0() {
    WEIGHT1_36_1_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter3_reg.read());
}

void FIRE3::thread_WEIGHT1_36_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        WEIGHT1_36_1_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_36_1_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_36_2_address0() {
    WEIGHT1_36_2_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter7_reg.read());
}

void FIRE3::thread_WEIGHT1_36_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()))) {
        WEIGHT1_36_2_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_36_2_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_36_3_address0() {
    WEIGHT1_36_3_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter11_reg.read());
}

void FIRE3::thread_WEIGHT1_36_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()))) {
        WEIGHT1_36_3_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_36_3_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_36_4_address0() {
    WEIGHT1_36_4_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter15_reg.read());
}

void FIRE3::thread_WEIGHT1_36_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter16.read()))) {
        WEIGHT1_36_4_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_36_4_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_36_5_address0() {
    WEIGHT1_36_5_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter19_reg.read());
}

void FIRE3::thread_WEIGHT1_36_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter20.read()))) {
        WEIGHT1_36_5_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_36_5_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_36_6_address0() {
    WEIGHT1_36_6_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter23_reg.read());
}

void FIRE3::thread_WEIGHT1_36_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter24.read()))) {
        WEIGHT1_36_6_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_36_6_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_37_0_address0() {
    WEIGHT1_37_0_address0 =  (sc_lv<7>) (tmp_41_cast_fu_12171_p1.read());
}

void FIRE3::thread_WEIGHT1_37_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1))) {
        WEIGHT1_37_0_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_37_0_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_37_1_address0() {
    WEIGHT1_37_1_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter3_reg.read());
}

void FIRE3::thread_WEIGHT1_37_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        WEIGHT1_37_1_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_37_1_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_37_2_address0() {
    WEIGHT1_37_2_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter7_reg.read());
}

void FIRE3::thread_WEIGHT1_37_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()))) {
        WEIGHT1_37_2_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_37_2_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_37_3_address0() {
    WEIGHT1_37_3_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter11_reg.read());
}

void FIRE3::thread_WEIGHT1_37_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()))) {
        WEIGHT1_37_3_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_37_3_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_37_4_address0() {
    WEIGHT1_37_4_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter15_reg.read());
}

void FIRE3::thread_WEIGHT1_37_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter16.read()))) {
        WEIGHT1_37_4_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_37_4_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_37_5_address0() {
    WEIGHT1_37_5_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter19_reg.read());
}

void FIRE3::thread_WEIGHT1_37_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter20.read()))) {
        WEIGHT1_37_5_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_37_5_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_37_6_address0() {
    WEIGHT1_37_6_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter23_reg.read());
}

void FIRE3::thread_WEIGHT1_37_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter24.read()))) {
        WEIGHT1_37_6_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_37_6_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_38_0_address0() {
    WEIGHT1_38_0_address0 =  (sc_lv<7>) (tmp_41_cast_fu_12171_p1.read());
}

void FIRE3::thread_WEIGHT1_38_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1))) {
        WEIGHT1_38_0_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_38_0_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_38_1_address0() {
    WEIGHT1_38_1_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter3_reg.read());
}

void FIRE3::thread_WEIGHT1_38_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        WEIGHT1_38_1_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_38_1_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_38_2_address0() {
    WEIGHT1_38_2_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter7_reg.read());
}

void FIRE3::thread_WEIGHT1_38_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()))) {
        WEIGHT1_38_2_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_38_2_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_38_3_address0() {
    WEIGHT1_38_3_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter11_reg.read());
}

void FIRE3::thread_WEIGHT1_38_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()))) {
        WEIGHT1_38_3_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_38_3_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_38_4_address0() {
    WEIGHT1_38_4_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter15_reg.read());
}

void FIRE3::thread_WEIGHT1_38_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter16.read()))) {
        WEIGHT1_38_4_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_38_4_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_38_5_address0() {
    WEIGHT1_38_5_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter19_reg.read());
}

void FIRE3::thread_WEIGHT1_38_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter20.read()))) {
        WEIGHT1_38_5_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_38_5_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_38_6_address0() {
    WEIGHT1_38_6_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter23_reg.read());
}

void FIRE3::thread_WEIGHT1_38_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter24.read()))) {
        WEIGHT1_38_6_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_38_6_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_39_0_address0() {
    WEIGHT1_39_0_address0 =  (sc_lv<7>) (tmp_41_cast_fu_12171_p1.read());
}

void FIRE3::thread_WEIGHT1_39_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1))) {
        WEIGHT1_39_0_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_39_0_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_39_1_address0() {
    WEIGHT1_39_1_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter3_reg.read());
}

void FIRE3::thread_WEIGHT1_39_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        WEIGHT1_39_1_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_39_1_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_39_2_address0() {
    WEIGHT1_39_2_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter7_reg.read());
}

void FIRE3::thread_WEIGHT1_39_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()))) {
        WEIGHT1_39_2_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_39_2_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_39_3_address0() {
    WEIGHT1_39_3_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter11_reg.read());
}

void FIRE3::thread_WEIGHT1_39_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()))) {
        WEIGHT1_39_3_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_39_3_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_39_4_address0() {
    WEIGHT1_39_4_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter15_reg.read());
}

void FIRE3::thread_WEIGHT1_39_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter16.read()))) {
        WEIGHT1_39_4_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_39_4_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_39_5_address0() {
    WEIGHT1_39_5_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter19_reg.read());
}

void FIRE3::thread_WEIGHT1_39_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter20.read()))) {
        WEIGHT1_39_5_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_39_5_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_39_6_address0() {
    WEIGHT1_39_6_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter23_reg.read());
}

void FIRE3::thread_WEIGHT1_39_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter24.read()))) {
        WEIGHT1_39_6_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_39_6_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_3_0_address0() {
    WEIGHT1_3_0_address0 =  (sc_lv<7>) (tmp_41_cast_fu_12171_p1.read());
}

void FIRE3::thread_WEIGHT1_3_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1))) {
        WEIGHT1_3_0_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_3_0_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_3_1_address0() {
    WEIGHT1_3_1_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter3_reg.read());
}

void FIRE3::thread_WEIGHT1_3_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        WEIGHT1_3_1_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_3_1_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_3_2_address0() {
    WEIGHT1_3_2_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter7_reg.read());
}

void FIRE3::thread_WEIGHT1_3_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()))) {
        WEIGHT1_3_2_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_3_2_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_3_3_address0() {
    WEIGHT1_3_3_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter11_reg.read());
}

void FIRE3::thread_WEIGHT1_3_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()))) {
        WEIGHT1_3_3_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_3_3_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_3_4_address0() {
    WEIGHT1_3_4_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter15_reg.read());
}

void FIRE3::thread_WEIGHT1_3_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter16.read()))) {
        WEIGHT1_3_4_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_3_4_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_3_5_address0() {
    WEIGHT1_3_5_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter19_reg.read());
}

void FIRE3::thread_WEIGHT1_3_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter20.read()))) {
        WEIGHT1_3_5_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_3_5_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_3_6_address0() {
    WEIGHT1_3_6_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter23_reg.read());
}

void FIRE3::thread_WEIGHT1_3_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter24.read()))) {
        WEIGHT1_3_6_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_3_6_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_40_0_address0() {
    WEIGHT1_40_0_address0 =  (sc_lv<7>) (tmp_41_cast_fu_12171_p1.read());
}

void FIRE3::thread_WEIGHT1_40_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1))) {
        WEIGHT1_40_0_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_40_0_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_40_1_address0() {
    WEIGHT1_40_1_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter3_reg.read());
}

void FIRE3::thread_WEIGHT1_40_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        WEIGHT1_40_1_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_40_1_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_40_2_address0() {
    WEIGHT1_40_2_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter7_reg.read());
}

void FIRE3::thread_WEIGHT1_40_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()))) {
        WEIGHT1_40_2_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_40_2_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_40_3_address0() {
    WEIGHT1_40_3_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter11_reg.read());
}

void FIRE3::thread_WEIGHT1_40_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()))) {
        WEIGHT1_40_3_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_40_3_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_40_4_address0() {
    WEIGHT1_40_4_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter15_reg.read());
}

void FIRE3::thread_WEIGHT1_40_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter16.read()))) {
        WEIGHT1_40_4_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_40_4_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_40_5_address0() {
    WEIGHT1_40_5_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter19_reg.read());
}

void FIRE3::thread_WEIGHT1_40_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter20.read()))) {
        WEIGHT1_40_5_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_40_5_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_40_6_address0() {
    WEIGHT1_40_6_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter23_reg.read());
}

void FIRE3::thread_WEIGHT1_40_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter24.read()))) {
        WEIGHT1_40_6_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_40_6_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_41_0_address0() {
    WEIGHT1_41_0_address0 =  (sc_lv<7>) (tmp_41_cast_fu_12171_p1.read());
}

void FIRE3::thread_WEIGHT1_41_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1))) {
        WEIGHT1_41_0_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_41_0_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_41_1_address0() {
    WEIGHT1_41_1_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter3_reg.read());
}

void FIRE3::thread_WEIGHT1_41_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        WEIGHT1_41_1_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_41_1_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_41_2_address0() {
    WEIGHT1_41_2_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter7_reg.read());
}

void FIRE3::thread_WEIGHT1_41_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()))) {
        WEIGHT1_41_2_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_41_2_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_41_3_address0() {
    WEIGHT1_41_3_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter11_reg.read());
}

void FIRE3::thread_WEIGHT1_41_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()))) {
        WEIGHT1_41_3_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_41_3_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_41_4_address0() {
    WEIGHT1_41_4_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter15_reg.read());
}

void FIRE3::thread_WEIGHT1_41_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter16.read()))) {
        WEIGHT1_41_4_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_41_4_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_41_5_address0() {
    WEIGHT1_41_5_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter19_reg.read());
}

void FIRE3::thread_WEIGHT1_41_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter20.read()))) {
        WEIGHT1_41_5_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_41_5_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_41_6_address0() {
    WEIGHT1_41_6_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter23_reg.read());
}

void FIRE3::thread_WEIGHT1_41_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter24.read()))) {
        WEIGHT1_41_6_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_41_6_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_42_0_address0() {
    WEIGHT1_42_0_address0 =  (sc_lv<7>) (tmp_41_cast_fu_12171_p1.read());
}

void FIRE3::thread_WEIGHT1_42_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1))) {
        WEIGHT1_42_0_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_42_0_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_42_1_address0() {
    WEIGHT1_42_1_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter3_reg.read());
}

void FIRE3::thread_WEIGHT1_42_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        WEIGHT1_42_1_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_42_1_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_42_2_address0() {
    WEIGHT1_42_2_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter7_reg.read());
}

void FIRE3::thread_WEIGHT1_42_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()))) {
        WEIGHT1_42_2_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_42_2_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_42_3_address0() {
    WEIGHT1_42_3_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter11_reg.read());
}

void FIRE3::thread_WEIGHT1_42_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()))) {
        WEIGHT1_42_3_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_42_3_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_42_4_address0() {
    WEIGHT1_42_4_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter15_reg.read());
}

void FIRE3::thread_WEIGHT1_42_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter16.read()))) {
        WEIGHT1_42_4_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_42_4_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_42_5_address0() {
    WEIGHT1_42_5_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter19_reg.read());
}

void FIRE3::thread_WEIGHT1_42_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter20.read()))) {
        WEIGHT1_42_5_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_42_5_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_42_6_address0() {
    WEIGHT1_42_6_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter23_reg.read());
}

void FIRE3::thread_WEIGHT1_42_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter24.read()))) {
        WEIGHT1_42_6_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_42_6_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_43_0_address0() {
    WEIGHT1_43_0_address0 =  (sc_lv<7>) (tmp_41_cast_fu_12171_p1.read());
}

void FIRE3::thread_WEIGHT1_43_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1))) {
        WEIGHT1_43_0_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_43_0_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_43_1_address0() {
    WEIGHT1_43_1_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter3_reg.read());
}

void FIRE3::thread_WEIGHT1_43_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        WEIGHT1_43_1_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_43_1_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_43_2_address0() {
    WEIGHT1_43_2_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter7_reg.read());
}

void FIRE3::thread_WEIGHT1_43_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()))) {
        WEIGHT1_43_2_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_43_2_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_43_3_address0() {
    WEIGHT1_43_3_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter11_reg.read());
}

void FIRE3::thread_WEIGHT1_43_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()))) {
        WEIGHT1_43_3_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_43_3_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_43_4_address0() {
    WEIGHT1_43_4_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter15_reg.read());
}

void FIRE3::thread_WEIGHT1_43_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter16.read()))) {
        WEIGHT1_43_4_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_43_4_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_43_5_address0() {
    WEIGHT1_43_5_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter19_reg.read());
}

void FIRE3::thread_WEIGHT1_43_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter20.read()))) {
        WEIGHT1_43_5_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_43_5_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_43_6_address0() {
    WEIGHT1_43_6_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter23_reg.read());
}

void FIRE3::thread_WEIGHT1_43_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter24.read()))) {
        WEIGHT1_43_6_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_43_6_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_44_0_address0() {
    WEIGHT1_44_0_address0 =  (sc_lv<7>) (tmp_41_cast_fu_12171_p1.read());
}

void FIRE3::thread_WEIGHT1_44_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1))) {
        WEIGHT1_44_0_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_44_0_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_44_1_address0() {
    WEIGHT1_44_1_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter3_reg.read());
}

void FIRE3::thread_WEIGHT1_44_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        WEIGHT1_44_1_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_44_1_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_44_2_address0() {
    WEIGHT1_44_2_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter7_reg.read());
}

void FIRE3::thread_WEIGHT1_44_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()))) {
        WEIGHT1_44_2_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_44_2_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_44_3_address0() {
    WEIGHT1_44_3_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter11_reg.read());
}

void FIRE3::thread_WEIGHT1_44_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()))) {
        WEIGHT1_44_3_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_44_3_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_44_4_address0() {
    WEIGHT1_44_4_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter15_reg.read());
}

void FIRE3::thread_WEIGHT1_44_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter16.read()))) {
        WEIGHT1_44_4_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_44_4_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_44_5_address0() {
    WEIGHT1_44_5_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter19_reg.read());
}

void FIRE3::thread_WEIGHT1_44_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter20.read()))) {
        WEIGHT1_44_5_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_44_5_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_44_6_address0() {
    WEIGHT1_44_6_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter23_reg.read());
}

void FIRE3::thread_WEIGHT1_44_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter24.read()))) {
        WEIGHT1_44_6_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_44_6_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_45_0_address0() {
    WEIGHT1_45_0_address0 =  (sc_lv<7>) (tmp_41_cast_fu_12171_p1.read());
}

void FIRE3::thread_WEIGHT1_45_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1))) {
        WEIGHT1_45_0_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_45_0_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_45_1_address0() {
    WEIGHT1_45_1_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter3_reg.read());
}

void FIRE3::thread_WEIGHT1_45_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        WEIGHT1_45_1_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_45_1_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_45_2_address0() {
    WEIGHT1_45_2_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter7_reg.read());
}

void FIRE3::thread_WEIGHT1_45_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()))) {
        WEIGHT1_45_2_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_45_2_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_45_3_address0() {
    WEIGHT1_45_3_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter11_reg.read());
}

void FIRE3::thread_WEIGHT1_45_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()))) {
        WEIGHT1_45_3_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_45_3_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_45_4_address0() {
    WEIGHT1_45_4_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter15_reg.read());
}

void FIRE3::thread_WEIGHT1_45_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter16.read()))) {
        WEIGHT1_45_4_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_45_4_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_45_5_address0() {
    WEIGHT1_45_5_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter19_reg.read());
}

void FIRE3::thread_WEIGHT1_45_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter20.read()))) {
        WEIGHT1_45_5_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_45_5_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_45_6_address0() {
    WEIGHT1_45_6_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter23_reg.read());
}

void FIRE3::thread_WEIGHT1_45_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter24.read()))) {
        WEIGHT1_45_6_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_45_6_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_46_0_address0() {
    WEIGHT1_46_0_address0 =  (sc_lv<7>) (tmp_41_cast_fu_12171_p1.read());
}

void FIRE3::thread_WEIGHT1_46_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1))) {
        WEIGHT1_46_0_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_46_0_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_46_1_address0() {
    WEIGHT1_46_1_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter3_reg.read());
}

void FIRE3::thread_WEIGHT1_46_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        WEIGHT1_46_1_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_46_1_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_46_2_address0() {
    WEIGHT1_46_2_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter7_reg.read());
}

void FIRE3::thread_WEIGHT1_46_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()))) {
        WEIGHT1_46_2_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_46_2_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_46_3_address0() {
    WEIGHT1_46_3_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter11_reg.read());
}

void FIRE3::thread_WEIGHT1_46_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()))) {
        WEIGHT1_46_3_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_46_3_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_46_4_address0() {
    WEIGHT1_46_4_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter15_reg.read());
}

void FIRE3::thread_WEIGHT1_46_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter16.read()))) {
        WEIGHT1_46_4_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_46_4_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_46_5_address0() {
    WEIGHT1_46_5_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter19_reg.read());
}

void FIRE3::thread_WEIGHT1_46_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter20.read()))) {
        WEIGHT1_46_5_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_46_5_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_46_6_address0() {
    WEIGHT1_46_6_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter23_reg.read());
}

void FIRE3::thread_WEIGHT1_46_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter24.read()))) {
        WEIGHT1_46_6_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_46_6_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_47_0_address0() {
    WEIGHT1_47_0_address0 =  (sc_lv<7>) (tmp_41_cast_fu_12171_p1.read());
}

void FIRE3::thread_WEIGHT1_47_0_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_1))) {
        WEIGHT1_47_0_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_47_0_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_47_1_address0() {
    WEIGHT1_47_1_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter3_reg.read());
}

void FIRE3::thread_WEIGHT1_47_1_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter4.read()))) {
        WEIGHT1_47_1_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_47_1_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_47_2_address0() {
    WEIGHT1_47_2_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter7_reg.read());
}

void FIRE3::thread_WEIGHT1_47_2_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter8.read()))) {
        WEIGHT1_47_2_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_47_2_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_47_3_address0() {
    WEIGHT1_47_3_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter11_reg.read());
}

void FIRE3::thread_WEIGHT1_47_3_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter12.read()))) {
        WEIGHT1_47_3_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_47_3_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_47_4_address0() {
    WEIGHT1_47_4_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter15_reg.read());
}

void FIRE3::thread_WEIGHT1_47_4_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter16.read()))) {
        WEIGHT1_47_4_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_47_4_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_47_5_address0() {
    WEIGHT1_47_5_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter19_reg.read());
}

void FIRE3::thread_WEIGHT1_47_5_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter20.read()))) {
        WEIGHT1_47_5_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_47_5_ce0 = ap_const_logic_0;
    }
}

void FIRE3::thread_WEIGHT1_47_6_address0() {
    WEIGHT1_47_6_address0 =  (sc_lv<7>) (tmp_41_cast_reg_12454_pp0_iter23_reg.read());
}

void FIRE3::thread_WEIGHT1_47_6_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_pp0_stage0_11001.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter24.read()))) {
        WEIGHT1_47_6_ce0 = ap_const_logic_1;
    } else {
        WEIGHT1_47_6_ce0 = ap_const_logic_0;
    }
}

}

