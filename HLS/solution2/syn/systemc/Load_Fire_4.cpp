#include "Load_Fire.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void Load_Fire::thread_WEIGHT1_33_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_33_4_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_33_4_we0.read();
    } else {
        WEIGHT1_33_4_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_33_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_33_5_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_33_5_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_33_5_address0 = grp_FIRE3_fu_2067_WEIGHT1_33_5_address0.read();
        } else {
            WEIGHT1_33_5_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_33_5_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_33_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_33_5_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_33_5_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_33_5_ce0 = grp_FIRE3_fu_2067_WEIGHT1_33_5_ce0.read();
        } else {
            WEIGHT1_33_5_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_33_5_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_33_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_33_5_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_33_5_we0.read();
    } else {
        WEIGHT1_33_5_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_33_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_33_6_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_33_6_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_33_6_address0 = grp_FIRE3_fu_2067_WEIGHT1_33_6_address0.read();
        } else {
            WEIGHT1_33_6_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_33_6_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_33_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_33_6_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_33_6_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_33_6_ce0 = grp_FIRE3_fu_2067_WEIGHT1_33_6_ce0.read();
        } else {
            WEIGHT1_33_6_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_33_6_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_33_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_33_6_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_33_6_we0.read();
    } else {
        WEIGHT1_33_6_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_34_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_34_0_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_34_0_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_34_0_address0 = grp_FIRE3_fu_2067_WEIGHT1_34_0_address0.read();
        } else {
            WEIGHT1_34_0_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_34_0_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_34_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_34_0_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_34_0_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_34_0_ce0 = grp_FIRE3_fu_2067_WEIGHT1_34_0_ce0.read();
        } else {
            WEIGHT1_34_0_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_34_0_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_34_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_34_0_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_34_0_we0.read();
    } else {
        WEIGHT1_34_0_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_34_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_34_1_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_34_1_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_34_1_address0 = grp_FIRE3_fu_2067_WEIGHT1_34_1_address0.read();
        } else {
            WEIGHT1_34_1_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_34_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_34_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_34_1_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_34_1_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_34_1_ce0 = grp_FIRE3_fu_2067_WEIGHT1_34_1_ce0.read();
        } else {
            WEIGHT1_34_1_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_34_1_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_34_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_34_1_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_34_1_we0.read();
    } else {
        WEIGHT1_34_1_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_34_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_34_2_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_34_2_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_34_2_address0 = grp_FIRE3_fu_2067_WEIGHT1_34_2_address0.read();
        } else {
            WEIGHT1_34_2_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_34_2_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_34_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_34_2_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_34_2_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_34_2_ce0 = grp_FIRE3_fu_2067_WEIGHT1_34_2_ce0.read();
        } else {
            WEIGHT1_34_2_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_34_2_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_34_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_34_2_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_34_2_we0.read();
    } else {
        WEIGHT1_34_2_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_34_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_34_3_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_34_3_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_34_3_address0 = grp_FIRE3_fu_2067_WEIGHT1_34_3_address0.read();
        } else {
            WEIGHT1_34_3_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_34_3_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_34_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_34_3_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_34_3_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_34_3_ce0 = grp_FIRE3_fu_2067_WEIGHT1_34_3_ce0.read();
        } else {
            WEIGHT1_34_3_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_34_3_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_34_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_34_3_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_34_3_we0.read();
    } else {
        WEIGHT1_34_3_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_34_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_34_4_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_34_4_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_34_4_address0 = grp_FIRE3_fu_2067_WEIGHT1_34_4_address0.read();
        } else {
            WEIGHT1_34_4_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_34_4_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_34_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_34_4_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_34_4_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_34_4_ce0 = grp_FIRE3_fu_2067_WEIGHT1_34_4_ce0.read();
        } else {
            WEIGHT1_34_4_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_34_4_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_34_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_34_4_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_34_4_we0.read();
    } else {
        WEIGHT1_34_4_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_34_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_34_5_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_34_5_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_34_5_address0 = grp_FIRE3_fu_2067_WEIGHT1_34_5_address0.read();
        } else {
            WEIGHT1_34_5_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_34_5_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_34_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_34_5_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_34_5_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_34_5_ce0 = grp_FIRE3_fu_2067_WEIGHT1_34_5_ce0.read();
        } else {
            WEIGHT1_34_5_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_34_5_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_34_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_34_5_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_34_5_we0.read();
    } else {
        WEIGHT1_34_5_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_34_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_34_6_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_34_6_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_34_6_address0 = grp_FIRE3_fu_2067_WEIGHT1_34_6_address0.read();
        } else {
            WEIGHT1_34_6_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_34_6_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_34_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_34_6_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_34_6_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_34_6_ce0 = grp_FIRE3_fu_2067_WEIGHT1_34_6_ce0.read();
        } else {
            WEIGHT1_34_6_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_34_6_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_34_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_34_6_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_34_6_we0.read();
    } else {
        WEIGHT1_34_6_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_35_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_35_0_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_35_0_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_35_0_address0 = grp_FIRE3_fu_2067_WEIGHT1_35_0_address0.read();
        } else {
            WEIGHT1_35_0_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_35_0_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_35_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_35_0_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_35_0_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_35_0_ce0 = grp_FIRE3_fu_2067_WEIGHT1_35_0_ce0.read();
        } else {
            WEIGHT1_35_0_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_35_0_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_35_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_35_0_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_35_0_we0.read();
    } else {
        WEIGHT1_35_0_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_35_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_35_1_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_35_1_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_35_1_address0 = grp_FIRE3_fu_2067_WEIGHT1_35_1_address0.read();
        } else {
            WEIGHT1_35_1_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_35_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_35_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_35_1_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_35_1_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_35_1_ce0 = grp_FIRE3_fu_2067_WEIGHT1_35_1_ce0.read();
        } else {
            WEIGHT1_35_1_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_35_1_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_35_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_35_1_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_35_1_we0.read();
    } else {
        WEIGHT1_35_1_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_35_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_35_2_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_35_2_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_35_2_address0 = grp_FIRE3_fu_2067_WEIGHT1_35_2_address0.read();
        } else {
            WEIGHT1_35_2_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_35_2_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_35_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_35_2_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_35_2_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_35_2_ce0 = grp_FIRE3_fu_2067_WEIGHT1_35_2_ce0.read();
        } else {
            WEIGHT1_35_2_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_35_2_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_35_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_35_2_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_35_2_we0.read();
    } else {
        WEIGHT1_35_2_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_35_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_35_3_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_35_3_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_35_3_address0 = grp_FIRE3_fu_2067_WEIGHT1_35_3_address0.read();
        } else {
            WEIGHT1_35_3_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_35_3_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_35_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_35_3_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_35_3_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_35_3_ce0 = grp_FIRE3_fu_2067_WEIGHT1_35_3_ce0.read();
        } else {
            WEIGHT1_35_3_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_35_3_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_35_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_35_3_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_35_3_we0.read();
    } else {
        WEIGHT1_35_3_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_35_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_35_4_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_35_4_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_35_4_address0 = grp_FIRE3_fu_2067_WEIGHT1_35_4_address0.read();
        } else {
            WEIGHT1_35_4_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_35_4_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_35_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_35_4_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_35_4_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_35_4_ce0 = grp_FIRE3_fu_2067_WEIGHT1_35_4_ce0.read();
        } else {
            WEIGHT1_35_4_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_35_4_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_35_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_35_4_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_35_4_we0.read();
    } else {
        WEIGHT1_35_4_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_35_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_35_5_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_35_5_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_35_5_address0 = grp_FIRE3_fu_2067_WEIGHT1_35_5_address0.read();
        } else {
            WEIGHT1_35_5_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_35_5_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_35_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_35_5_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_35_5_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_35_5_ce0 = grp_FIRE3_fu_2067_WEIGHT1_35_5_ce0.read();
        } else {
            WEIGHT1_35_5_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_35_5_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_35_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_35_5_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_35_5_we0.read();
    } else {
        WEIGHT1_35_5_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_35_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_35_6_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_35_6_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_35_6_address0 = grp_FIRE3_fu_2067_WEIGHT1_35_6_address0.read();
        } else {
            WEIGHT1_35_6_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_35_6_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_35_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_35_6_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_35_6_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_35_6_ce0 = grp_FIRE3_fu_2067_WEIGHT1_35_6_ce0.read();
        } else {
            WEIGHT1_35_6_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_35_6_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_35_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_35_6_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_35_6_we0.read();
    } else {
        WEIGHT1_35_6_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_36_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_36_0_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_36_0_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_36_0_address0 = grp_FIRE3_fu_2067_WEIGHT1_36_0_address0.read();
        } else {
            WEIGHT1_36_0_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_36_0_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_36_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_36_0_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_36_0_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_36_0_ce0 = grp_FIRE3_fu_2067_WEIGHT1_36_0_ce0.read();
        } else {
            WEIGHT1_36_0_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_36_0_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_36_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_36_0_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_36_0_we0.read();
    } else {
        WEIGHT1_36_0_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_36_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_36_1_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_36_1_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_36_1_address0 = grp_FIRE3_fu_2067_WEIGHT1_36_1_address0.read();
        } else {
            WEIGHT1_36_1_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_36_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_36_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_36_1_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_36_1_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_36_1_ce0 = grp_FIRE3_fu_2067_WEIGHT1_36_1_ce0.read();
        } else {
            WEIGHT1_36_1_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_36_1_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_36_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_36_1_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_36_1_we0.read();
    } else {
        WEIGHT1_36_1_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_36_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_36_2_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_36_2_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_36_2_address0 = grp_FIRE3_fu_2067_WEIGHT1_36_2_address0.read();
        } else {
            WEIGHT1_36_2_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_36_2_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_36_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_36_2_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_36_2_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_36_2_ce0 = grp_FIRE3_fu_2067_WEIGHT1_36_2_ce0.read();
        } else {
            WEIGHT1_36_2_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_36_2_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_36_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_36_2_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_36_2_we0.read();
    } else {
        WEIGHT1_36_2_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_36_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_36_3_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_36_3_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_36_3_address0 = grp_FIRE3_fu_2067_WEIGHT1_36_3_address0.read();
        } else {
            WEIGHT1_36_3_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_36_3_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_36_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_36_3_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_36_3_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_36_3_ce0 = grp_FIRE3_fu_2067_WEIGHT1_36_3_ce0.read();
        } else {
            WEIGHT1_36_3_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_36_3_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_36_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_36_3_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_36_3_we0.read();
    } else {
        WEIGHT1_36_3_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_36_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_36_4_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_36_4_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_36_4_address0 = grp_FIRE3_fu_2067_WEIGHT1_36_4_address0.read();
        } else {
            WEIGHT1_36_4_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_36_4_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_36_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_36_4_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_36_4_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_36_4_ce0 = grp_FIRE3_fu_2067_WEIGHT1_36_4_ce0.read();
        } else {
            WEIGHT1_36_4_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_36_4_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_36_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_36_4_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_36_4_we0.read();
    } else {
        WEIGHT1_36_4_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_36_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_36_5_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_36_5_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_36_5_address0 = grp_FIRE3_fu_2067_WEIGHT1_36_5_address0.read();
        } else {
            WEIGHT1_36_5_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_36_5_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_36_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_36_5_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_36_5_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_36_5_ce0 = grp_FIRE3_fu_2067_WEIGHT1_36_5_ce0.read();
        } else {
            WEIGHT1_36_5_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_36_5_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_36_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_36_5_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_36_5_we0.read();
    } else {
        WEIGHT1_36_5_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_36_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_36_6_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_36_6_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_36_6_address0 = grp_FIRE3_fu_2067_WEIGHT1_36_6_address0.read();
        } else {
            WEIGHT1_36_6_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_36_6_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_36_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_36_6_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_36_6_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_36_6_ce0 = grp_FIRE3_fu_2067_WEIGHT1_36_6_ce0.read();
        } else {
            WEIGHT1_36_6_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_36_6_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_36_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_36_6_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_36_6_we0.read();
    } else {
        WEIGHT1_36_6_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_37_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_37_0_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_37_0_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_37_0_address0 = grp_FIRE3_fu_2067_WEIGHT1_37_0_address0.read();
        } else {
            WEIGHT1_37_0_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_37_0_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_37_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_37_0_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_37_0_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_37_0_ce0 = grp_FIRE3_fu_2067_WEIGHT1_37_0_ce0.read();
        } else {
            WEIGHT1_37_0_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_37_0_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_37_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_37_0_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_37_0_we0.read();
    } else {
        WEIGHT1_37_0_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_37_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_37_1_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_37_1_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_37_1_address0 = grp_FIRE3_fu_2067_WEIGHT1_37_1_address0.read();
        } else {
            WEIGHT1_37_1_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_37_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_37_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_37_1_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_37_1_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_37_1_ce0 = grp_FIRE3_fu_2067_WEIGHT1_37_1_ce0.read();
        } else {
            WEIGHT1_37_1_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_37_1_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_37_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_37_1_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_37_1_we0.read();
    } else {
        WEIGHT1_37_1_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_37_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_37_2_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_37_2_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_37_2_address0 = grp_FIRE3_fu_2067_WEIGHT1_37_2_address0.read();
        } else {
            WEIGHT1_37_2_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_37_2_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_37_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_37_2_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_37_2_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_37_2_ce0 = grp_FIRE3_fu_2067_WEIGHT1_37_2_ce0.read();
        } else {
            WEIGHT1_37_2_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_37_2_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_37_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_37_2_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_37_2_we0.read();
    } else {
        WEIGHT1_37_2_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_37_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_37_3_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_37_3_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_37_3_address0 = grp_FIRE3_fu_2067_WEIGHT1_37_3_address0.read();
        } else {
            WEIGHT1_37_3_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_37_3_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_37_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_37_3_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_37_3_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_37_3_ce0 = grp_FIRE3_fu_2067_WEIGHT1_37_3_ce0.read();
        } else {
            WEIGHT1_37_3_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_37_3_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_37_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_37_3_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_37_3_we0.read();
    } else {
        WEIGHT1_37_3_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_37_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_37_4_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_37_4_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_37_4_address0 = grp_FIRE3_fu_2067_WEIGHT1_37_4_address0.read();
        } else {
            WEIGHT1_37_4_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_37_4_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_37_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_37_4_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_37_4_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_37_4_ce0 = grp_FIRE3_fu_2067_WEIGHT1_37_4_ce0.read();
        } else {
            WEIGHT1_37_4_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_37_4_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_37_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_37_4_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_37_4_we0.read();
    } else {
        WEIGHT1_37_4_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_37_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_37_5_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_37_5_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_37_5_address0 = grp_FIRE3_fu_2067_WEIGHT1_37_5_address0.read();
        } else {
            WEIGHT1_37_5_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_37_5_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_37_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_37_5_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_37_5_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_37_5_ce0 = grp_FIRE3_fu_2067_WEIGHT1_37_5_ce0.read();
        } else {
            WEIGHT1_37_5_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_37_5_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_37_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_37_5_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_37_5_we0.read();
    } else {
        WEIGHT1_37_5_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_37_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_37_6_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_37_6_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_37_6_address0 = grp_FIRE3_fu_2067_WEIGHT1_37_6_address0.read();
        } else {
            WEIGHT1_37_6_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_37_6_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_37_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_37_6_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_37_6_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_37_6_ce0 = grp_FIRE3_fu_2067_WEIGHT1_37_6_ce0.read();
        } else {
            WEIGHT1_37_6_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_37_6_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_37_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_37_6_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_37_6_we0.read();
    } else {
        WEIGHT1_37_6_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_38_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_38_0_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_38_0_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_38_0_address0 = grp_FIRE3_fu_2067_WEIGHT1_38_0_address0.read();
        } else {
            WEIGHT1_38_0_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_38_0_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_38_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_38_0_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_38_0_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_38_0_ce0 = grp_FIRE3_fu_2067_WEIGHT1_38_0_ce0.read();
        } else {
            WEIGHT1_38_0_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_38_0_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_38_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_38_0_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_38_0_we0.read();
    } else {
        WEIGHT1_38_0_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_38_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_38_1_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_38_1_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_38_1_address0 = grp_FIRE3_fu_2067_WEIGHT1_38_1_address0.read();
        } else {
            WEIGHT1_38_1_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_38_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_38_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_38_1_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_38_1_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_38_1_ce0 = grp_FIRE3_fu_2067_WEIGHT1_38_1_ce0.read();
        } else {
            WEIGHT1_38_1_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_38_1_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_38_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_38_1_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_38_1_we0.read();
    } else {
        WEIGHT1_38_1_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_38_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_38_2_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_38_2_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_38_2_address0 = grp_FIRE3_fu_2067_WEIGHT1_38_2_address0.read();
        } else {
            WEIGHT1_38_2_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_38_2_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_38_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_38_2_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_38_2_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_38_2_ce0 = grp_FIRE3_fu_2067_WEIGHT1_38_2_ce0.read();
        } else {
            WEIGHT1_38_2_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_38_2_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_38_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_38_2_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_38_2_we0.read();
    } else {
        WEIGHT1_38_2_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_38_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_38_3_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_38_3_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_38_3_address0 = grp_FIRE3_fu_2067_WEIGHT1_38_3_address0.read();
        } else {
            WEIGHT1_38_3_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_38_3_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_38_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_38_3_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_38_3_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_38_3_ce0 = grp_FIRE3_fu_2067_WEIGHT1_38_3_ce0.read();
        } else {
            WEIGHT1_38_3_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_38_3_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_38_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_38_3_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_38_3_we0.read();
    } else {
        WEIGHT1_38_3_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_38_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_38_4_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_38_4_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_38_4_address0 = grp_FIRE3_fu_2067_WEIGHT1_38_4_address0.read();
        } else {
            WEIGHT1_38_4_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_38_4_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_38_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_38_4_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_38_4_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_38_4_ce0 = grp_FIRE3_fu_2067_WEIGHT1_38_4_ce0.read();
        } else {
            WEIGHT1_38_4_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_38_4_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_38_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_38_4_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_38_4_we0.read();
    } else {
        WEIGHT1_38_4_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_38_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_38_5_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_38_5_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_38_5_address0 = grp_FIRE3_fu_2067_WEIGHT1_38_5_address0.read();
        } else {
            WEIGHT1_38_5_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_38_5_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_38_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_38_5_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_38_5_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_38_5_ce0 = grp_FIRE3_fu_2067_WEIGHT1_38_5_ce0.read();
        } else {
            WEIGHT1_38_5_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_38_5_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_38_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_38_5_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_38_5_we0.read();
    } else {
        WEIGHT1_38_5_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_38_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_38_6_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_38_6_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_38_6_address0 = grp_FIRE3_fu_2067_WEIGHT1_38_6_address0.read();
        } else {
            WEIGHT1_38_6_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_38_6_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_38_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_38_6_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_38_6_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_38_6_ce0 = grp_FIRE3_fu_2067_WEIGHT1_38_6_ce0.read();
        } else {
            WEIGHT1_38_6_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_38_6_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_38_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_38_6_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_38_6_we0.read();
    } else {
        WEIGHT1_38_6_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_39_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_39_0_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_39_0_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_39_0_address0 = grp_FIRE3_fu_2067_WEIGHT1_39_0_address0.read();
        } else {
            WEIGHT1_39_0_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_39_0_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_39_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_39_0_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_39_0_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_39_0_ce0 = grp_FIRE3_fu_2067_WEIGHT1_39_0_ce0.read();
        } else {
            WEIGHT1_39_0_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_39_0_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_39_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_39_0_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_39_0_we0.read();
    } else {
        WEIGHT1_39_0_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_39_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_39_1_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_39_1_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_39_1_address0 = grp_FIRE3_fu_2067_WEIGHT1_39_1_address0.read();
        } else {
            WEIGHT1_39_1_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_39_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_39_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_39_1_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_39_1_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_39_1_ce0 = grp_FIRE3_fu_2067_WEIGHT1_39_1_ce0.read();
        } else {
            WEIGHT1_39_1_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_39_1_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_39_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_39_1_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_39_1_we0.read();
    } else {
        WEIGHT1_39_1_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_39_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_39_2_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_39_2_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_39_2_address0 = grp_FIRE3_fu_2067_WEIGHT1_39_2_address0.read();
        } else {
            WEIGHT1_39_2_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_39_2_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_39_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_39_2_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_39_2_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_39_2_ce0 = grp_FIRE3_fu_2067_WEIGHT1_39_2_ce0.read();
        } else {
            WEIGHT1_39_2_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_39_2_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_39_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_39_2_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_39_2_we0.read();
    } else {
        WEIGHT1_39_2_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_39_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_39_3_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_39_3_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_39_3_address0 = grp_FIRE3_fu_2067_WEIGHT1_39_3_address0.read();
        } else {
            WEIGHT1_39_3_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_39_3_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_39_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_39_3_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_39_3_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_39_3_ce0 = grp_FIRE3_fu_2067_WEIGHT1_39_3_ce0.read();
        } else {
            WEIGHT1_39_3_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_39_3_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_39_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_39_3_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_39_3_we0.read();
    } else {
        WEIGHT1_39_3_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_39_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_39_4_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_39_4_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_39_4_address0 = grp_FIRE3_fu_2067_WEIGHT1_39_4_address0.read();
        } else {
            WEIGHT1_39_4_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_39_4_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_39_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_39_4_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_39_4_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_39_4_ce0 = grp_FIRE3_fu_2067_WEIGHT1_39_4_ce0.read();
        } else {
            WEIGHT1_39_4_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_39_4_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_39_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_39_4_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_39_4_we0.read();
    } else {
        WEIGHT1_39_4_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_39_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_39_5_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_39_5_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_39_5_address0 = grp_FIRE3_fu_2067_WEIGHT1_39_5_address0.read();
        } else {
            WEIGHT1_39_5_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_39_5_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_39_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_39_5_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_39_5_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_39_5_ce0 = grp_FIRE3_fu_2067_WEIGHT1_39_5_ce0.read();
        } else {
            WEIGHT1_39_5_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_39_5_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_39_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_39_5_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_39_5_we0.read();
    } else {
        WEIGHT1_39_5_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_39_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_39_6_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_39_6_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_39_6_address0 = grp_FIRE3_fu_2067_WEIGHT1_39_6_address0.read();
        } else {
            WEIGHT1_39_6_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_39_6_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_39_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_39_6_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_39_6_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_39_6_ce0 = grp_FIRE3_fu_2067_WEIGHT1_39_6_ce0.read();
        } else {
            WEIGHT1_39_6_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_39_6_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_39_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_39_6_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_39_6_we0.read();
    } else {
        WEIGHT1_39_6_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_3_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_3_0_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_3_0_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_3_0_address0 = grp_FIRE3_fu_2067_WEIGHT1_3_0_address0.read();
        } else {
            WEIGHT1_3_0_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_3_0_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_3_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_3_0_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_3_0_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_3_0_ce0 = grp_FIRE3_fu_2067_WEIGHT1_3_0_ce0.read();
        } else {
            WEIGHT1_3_0_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_3_0_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_3_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_3_0_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_3_0_we0.read();
    } else {
        WEIGHT1_3_0_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_3_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_3_1_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_3_1_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_3_1_address0 = grp_FIRE3_fu_2067_WEIGHT1_3_1_address0.read();
        } else {
            WEIGHT1_3_1_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_3_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_3_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_3_1_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_3_1_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_3_1_ce0 = grp_FIRE3_fu_2067_WEIGHT1_3_1_ce0.read();
        } else {
            WEIGHT1_3_1_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_3_1_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_3_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_3_1_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_3_1_we0.read();
    } else {
        WEIGHT1_3_1_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_3_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_3_2_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_3_2_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_3_2_address0 = grp_FIRE3_fu_2067_WEIGHT1_3_2_address0.read();
        } else {
            WEIGHT1_3_2_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_3_2_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_3_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_3_2_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_3_2_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_3_2_ce0 = grp_FIRE3_fu_2067_WEIGHT1_3_2_ce0.read();
        } else {
            WEIGHT1_3_2_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_3_2_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_3_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_3_2_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_3_2_we0.read();
    } else {
        WEIGHT1_3_2_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_3_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_3_3_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_3_3_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_3_3_address0 = grp_FIRE3_fu_2067_WEIGHT1_3_3_address0.read();
        } else {
            WEIGHT1_3_3_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_3_3_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_3_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_3_3_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_3_3_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_3_3_ce0 = grp_FIRE3_fu_2067_WEIGHT1_3_3_ce0.read();
        } else {
            WEIGHT1_3_3_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_3_3_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_3_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_3_3_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_3_3_we0.read();
    } else {
        WEIGHT1_3_3_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_3_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_3_4_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_3_4_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_3_4_address0 = grp_FIRE3_fu_2067_WEIGHT1_3_4_address0.read();
        } else {
            WEIGHT1_3_4_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_3_4_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_3_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_3_4_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_3_4_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_3_4_ce0 = grp_FIRE3_fu_2067_WEIGHT1_3_4_ce0.read();
        } else {
            WEIGHT1_3_4_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_3_4_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_3_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_3_4_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_3_4_we0.read();
    } else {
        WEIGHT1_3_4_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_3_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_3_5_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_3_5_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_3_5_address0 = grp_FIRE3_fu_2067_WEIGHT1_3_5_address0.read();
        } else {
            WEIGHT1_3_5_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_3_5_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_3_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_3_5_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_3_5_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_3_5_ce0 = grp_FIRE3_fu_2067_WEIGHT1_3_5_ce0.read();
        } else {
            WEIGHT1_3_5_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_3_5_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_3_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_3_5_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_3_5_we0.read();
    } else {
        WEIGHT1_3_5_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_3_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_3_6_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_3_6_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_3_6_address0 = grp_FIRE3_fu_2067_WEIGHT1_3_6_address0.read();
        } else {
            WEIGHT1_3_6_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_3_6_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_3_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_3_6_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_3_6_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_3_6_ce0 = grp_FIRE3_fu_2067_WEIGHT1_3_6_ce0.read();
        } else {
            WEIGHT1_3_6_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_3_6_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_3_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_3_6_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_3_6_we0.read();
    } else {
        WEIGHT1_3_6_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_40_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_40_0_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_40_0_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_40_0_address0 = grp_FIRE3_fu_2067_WEIGHT1_40_0_address0.read();
        } else {
            WEIGHT1_40_0_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_40_0_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_40_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_40_0_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_40_0_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_40_0_ce0 = grp_FIRE3_fu_2067_WEIGHT1_40_0_ce0.read();
        } else {
            WEIGHT1_40_0_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_40_0_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_40_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_40_0_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_40_0_we0.read();
    } else {
        WEIGHT1_40_0_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_40_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_40_1_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_40_1_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_40_1_address0 = grp_FIRE3_fu_2067_WEIGHT1_40_1_address0.read();
        } else {
            WEIGHT1_40_1_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_40_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_40_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_40_1_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_40_1_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_40_1_ce0 = grp_FIRE3_fu_2067_WEIGHT1_40_1_ce0.read();
        } else {
            WEIGHT1_40_1_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_40_1_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_40_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_40_1_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_40_1_we0.read();
    } else {
        WEIGHT1_40_1_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_40_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_40_2_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_40_2_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_40_2_address0 = grp_FIRE3_fu_2067_WEIGHT1_40_2_address0.read();
        } else {
            WEIGHT1_40_2_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_40_2_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_40_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_40_2_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_40_2_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_40_2_ce0 = grp_FIRE3_fu_2067_WEIGHT1_40_2_ce0.read();
        } else {
            WEIGHT1_40_2_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_40_2_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_40_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_40_2_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_40_2_we0.read();
    } else {
        WEIGHT1_40_2_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_40_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_40_3_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_40_3_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_40_3_address0 = grp_FIRE3_fu_2067_WEIGHT1_40_3_address0.read();
        } else {
            WEIGHT1_40_3_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_40_3_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_40_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_40_3_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_40_3_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_40_3_ce0 = grp_FIRE3_fu_2067_WEIGHT1_40_3_ce0.read();
        } else {
            WEIGHT1_40_3_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_40_3_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_40_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_40_3_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_40_3_we0.read();
    } else {
        WEIGHT1_40_3_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_40_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_40_4_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_40_4_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_40_4_address0 = grp_FIRE3_fu_2067_WEIGHT1_40_4_address0.read();
        } else {
            WEIGHT1_40_4_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_40_4_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_40_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_40_4_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_40_4_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_40_4_ce0 = grp_FIRE3_fu_2067_WEIGHT1_40_4_ce0.read();
        } else {
            WEIGHT1_40_4_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_40_4_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_40_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_40_4_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_40_4_we0.read();
    } else {
        WEIGHT1_40_4_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_40_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_40_5_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_40_5_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_40_5_address0 = grp_FIRE3_fu_2067_WEIGHT1_40_5_address0.read();
        } else {
            WEIGHT1_40_5_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_40_5_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_40_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_40_5_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_40_5_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_40_5_ce0 = grp_FIRE3_fu_2067_WEIGHT1_40_5_ce0.read();
        } else {
            WEIGHT1_40_5_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_40_5_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_40_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_40_5_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_40_5_we0.read();
    } else {
        WEIGHT1_40_5_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_40_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_40_6_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_40_6_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_40_6_address0 = grp_FIRE3_fu_2067_WEIGHT1_40_6_address0.read();
        } else {
            WEIGHT1_40_6_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_40_6_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_40_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_40_6_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_40_6_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_40_6_ce0 = grp_FIRE3_fu_2067_WEIGHT1_40_6_ce0.read();
        } else {
            WEIGHT1_40_6_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_40_6_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_40_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_40_6_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_40_6_we0.read();
    } else {
        WEIGHT1_40_6_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_41_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_41_0_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_41_0_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_41_0_address0 = grp_FIRE3_fu_2067_WEIGHT1_41_0_address0.read();
        } else {
            WEIGHT1_41_0_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_41_0_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_41_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_41_0_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_41_0_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_41_0_ce0 = grp_FIRE3_fu_2067_WEIGHT1_41_0_ce0.read();
        } else {
            WEIGHT1_41_0_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_41_0_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_41_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_41_0_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_41_0_we0.read();
    } else {
        WEIGHT1_41_0_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_41_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_41_1_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_41_1_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_41_1_address0 = grp_FIRE3_fu_2067_WEIGHT1_41_1_address0.read();
        } else {
            WEIGHT1_41_1_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_41_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_41_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_41_1_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_41_1_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_41_1_ce0 = grp_FIRE3_fu_2067_WEIGHT1_41_1_ce0.read();
        } else {
            WEIGHT1_41_1_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_41_1_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_41_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_41_1_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_41_1_we0.read();
    } else {
        WEIGHT1_41_1_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_41_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_41_2_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_41_2_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_41_2_address0 = grp_FIRE3_fu_2067_WEIGHT1_41_2_address0.read();
        } else {
            WEIGHT1_41_2_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_41_2_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_41_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_41_2_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_41_2_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_41_2_ce0 = grp_FIRE3_fu_2067_WEIGHT1_41_2_ce0.read();
        } else {
            WEIGHT1_41_2_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_41_2_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_41_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_41_2_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_41_2_we0.read();
    } else {
        WEIGHT1_41_2_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_41_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_41_3_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_41_3_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_41_3_address0 = grp_FIRE3_fu_2067_WEIGHT1_41_3_address0.read();
        } else {
            WEIGHT1_41_3_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_41_3_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_41_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_41_3_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_41_3_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_41_3_ce0 = grp_FIRE3_fu_2067_WEIGHT1_41_3_ce0.read();
        } else {
            WEIGHT1_41_3_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_41_3_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_41_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_41_3_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_41_3_we0.read();
    } else {
        WEIGHT1_41_3_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_41_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_41_4_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_41_4_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_41_4_address0 = grp_FIRE3_fu_2067_WEIGHT1_41_4_address0.read();
        } else {
            WEIGHT1_41_4_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_41_4_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_41_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_41_4_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_41_4_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_41_4_ce0 = grp_FIRE3_fu_2067_WEIGHT1_41_4_ce0.read();
        } else {
            WEIGHT1_41_4_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_41_4_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_41_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_41_4_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_41_4_we0.read();
    } else {
        WEIGHT1_41_4_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_41_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_41_5_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_41_5_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_41_5_address0 = grp_FIRE3_fu_2067_WEIGHT1_41_5_address0.read();
        } else {
            WEIGHT1_41_5_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_41_5_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_41_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_41_5_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_41_5_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_41_5_ce0 = grp_FIRE3_fu_2067_WEIGHT1_41_5_ce0.read();
        } else {
            WEIGHT1_41_5_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_41_5_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_41_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_41_5_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_41_5_we0.read();
    } else {
        WEIGHT1_41_5_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_41_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_41_6_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_41_6_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_41_6_address0 = grp_FIRE3_fu_2067_WEIGHT1_41_6_address0.read();
        } else {
            WEIGHT1_41_6_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_41_6_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_41_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_41_6_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_41_6_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_41_6_ce0 = grp_FIRE3_fu_2067_WEIGHT1_41_6_ce0.read();
        } else {
            WEIGHT1_41_6_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_41_6_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_41_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_41_6_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_41_6_we0.read();
    } else {
        WEIGHT1_41_6_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_42_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_42_0_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_42_0_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_42_0_address0 = grp_FIRE3_fu_2067_WEIGHT1_42_0_address0.read();
        } else {
            WEIGHT1_42_0_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_42_0_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_42_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_42_0_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_42_0_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_42_0_ce0 = grp_FIRE3_fu_2067_WEIGHT1_42_0_ce0.read();
        } else {
            WEIGHT1_42_0_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_42_0_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_42_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_42_0_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_42_0_we0.read();
    } else {
        WEIGHT1_42_0_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_42_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_42_1_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_42_1_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_42_1_address0 = grp_FIRE3_fu_2067_WEIGHT1_42_1_address0.read();
        } else {
            WEIGHT1_42_1_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_42_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_42_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_42_1_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_42_1_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_42_1_ce0 = grp_FIRE3_fu_2067_WEIGHT1_42_1_ce0.read();
        } else {
            WEIGHT1_42_1_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_42_1_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_42_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_42_1_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_42_1_we0.read();
    } else {
        WEIGHT1_42_1_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_42_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_42_2_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_42_2_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_42_2_address0 = grp_FIRE3_fu_2067_WEIGHT1_42_2_address0.read();
        } else {
            WEIGHT1_42_2_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_42_2_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_42_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_42_2_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_42_2_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_42_2_ce0 = grp_FIRE3_fu_2067_WEIGHT1_42_2_ce0.read();
        } else {
            WEIGHT1_42_2_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_42_2_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_42_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_42_2_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_42_2_we0.read();
    } else {
        WEIGHT1_42_2_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_42_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_42_3_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_42_3_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_42_3_address0 = grp_FIRE3_fu_2067_WEIGHT1_42_3_address0.read();
        } else {
            WEIGHT1_42_3_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_42_3_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_42_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_42_3_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_42_3_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_42_3_ce0 = grp_FIRE3_fu_2067_WEIGHT1_42_3_ce0.read();
        } else {
            WEIGHT1_42_3_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_42_3_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_42_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_42_3_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_42_3_we0.read();
    } else {
        WEIGHT1_42_3_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_42_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_42_4_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_42_4_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_42_4_address0 = grp_FIRE3_fu_2067_WEIGHT1_42_4_address0.read();
        } else {
            WEIGHT1_42_4_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_42_4_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_42_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_42_4_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_42_4_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_42_4_ce0 = grp_FIRE3_fu_2067_WEIGHT1_42_4_ce0.read();
        } else {
            WEIGHT1_42_4_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_42_4_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_42_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_42_4_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_42_4_we0.read();
    } else {
        WEIGHT1_42_4_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_42_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_42_5_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_42_5_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_42_5_address0 = grp_FIRE3_fu_2067_WEIGHT1_42_5_address0.read();
        } else {
            WEIGHT1_42_5_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_42_5_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_42_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_42_5_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_42_5_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_42_5_ce0 = grp_FIRE3_fu_2067_WEIGHT1_42_5_ce0.read();
        } else {
            WEIGHT1_42_5_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_42_5_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_42_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_42_5_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_42_5_we0.read();
    } else {
        WEIGHT1_42_5_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_42_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_42_6_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_42_6_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_42_6_address0 = grp_FIRE3_fu_2067_WEIGHT1_42_6_address0.read();
        } else {
            WEIGHT1_42_6_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_42_6_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_42_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_42_6_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_42_6_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_42_6_ce0 = grp_FIRE3_fu_2067_WEIGHT1_42_6_ce0.read();
        } else {
            WEIGHT1_42_6_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_42_6_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_42_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_42_6_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_42_6_we0.read();
    } else {
        WEIGHT1_42_6_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_43_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_43_0_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_43_0_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_43_0_address0 = grp_FIRE3_fu_2067_WEIGHT1_43_0_address0.read();
        } else {
            WEIGHT1_43_0_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_43_0_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_43_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_43_0_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_43_0_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_43_0_ce0 = grp_FIRE3_fu_2067_WEIGHT1_43_0_ce0.read();
        } else {
            WEIGHT1_43_0_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_43_0_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_43_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_43_0_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_43_0_we0.read();
    } else {
        WEIGHT1_43_0_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_43_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_43_1_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_43_1_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_43_1_address0 = grp_FIRE3_fu_2067_WEIGHT1_43_1_address0.read();
        } else {
            WEIGHT1_43_1_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_43_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_43_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_43_1_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_43_1_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_43_1_ce0 = grp_FIRE3_fu_2067_WEIGHT1_43_1_ce0.read();
        } else {
            WEIGHT1_43_1_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_43_1_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_43_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_43_1_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_43_1_we0.read();
    } else {
        WEIGHT1_43_1_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_43_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_43_2_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_43_2_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_43_2_address0 = grp_FIRE3_fu_2067_WEIGHT1_43_2_address0.read();
        } else {
            WEIGHT1_43_2_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_43_2_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_43_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_43_2_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_43_2_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_43_2_ce0 = grp_FIRE3_fu_2067_WEIGHT1_43_2_ce0.read();
        } else {
            WEIGHT1_43_2_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_43_2_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_43_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_43_2_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_43_2_we0.read();
    } else {
        WEIGHT1_43_2_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_43_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_43_3_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_43_3_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_43_3_address0 = grp_FIRE3_fu_2067_WEIGHT1_43_3_address0.read();
        } else {
            WEIGHT1_43_3_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_43_3_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_43_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_43_3_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_43_3_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_43_3_ce0 = grp_FIRE3_fu_2067_WEIGHT1_43_3_ce0.read();
        } else {
            WEIGHT1_43_3_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_43_3_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_43_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_43_3_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_43_3_we0.read();
    } else {
        WEIGHT1_43_3_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_43_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_43_4_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_43_4_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_43_4_address0 = grp_FIRE3_fu_2067_WEIGHT1_43_4_address0.read();
        } else {
            WEIGHT1_43_4_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_43_4_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_43_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_43_4_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_43_4_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_43_4_ce0 = grp_FIRE3_fu_2067_WEIGHT1_43_4_ce0.read();
        } else {
            WEIGHT1_43_4_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_43_4_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_43_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_43_4_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_43_4_we0.read();
    } else {
        WEIGHT1_43_4_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_43_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_43_5_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_43_5_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_43_5_address0 = grp_FIRE3_fu_2067_WEIGHT1_43_5_address0.read();
        } else {
            WEIGHT1_43_5_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_43_5_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_43_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_43_5_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_43_5_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_43_5_ce0 = grp_FIRE3_fu_2067_WEIGHT1_43_5_ce0.read();
        } else {
            WEIGHT1_43_5_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_43_5_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_43_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_43_5_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_43_5_we0.read();
    } else {
        WEIGHT1_43_5_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_43_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_43_6_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_43_6_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_43_6_address0 = grp_FIRE3_fu_2067_WEIGHT1_43_6_address0.read();
        } else {
            WEIGHT1_43_6_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_43_6_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_43_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_43_6_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_43_6_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_43_6_ce0 = grp_FIRE3_fu_2067_WEIGHT1_43_6_ce0.read();
        } else {
            WEIGHT1_43_6_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_43_6_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_43_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_43_6_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_43_6_we0.read();
    } else {
        WEIGHT1_43_6_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_44_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_44_0_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_44_0_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_44_0_address0 = grp_FIRE3_fu_2067_WEIGHT1_44_0_address0.read();
        } else {
            WEIGHT1_44_0_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_44_0_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_44_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_44_0_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_44_0_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_44_0_ce0 = grp_FIRE3_fu_2067_WEIGHT1_44_0_ce0.read();
        } else {
            WEIGHT1_44_0_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_44_0_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_44_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_44_0_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_44_0_we0.read();
    } else {
        WEIGHT1_44_0_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_44_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_44_1_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_44_1_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_44_1_address0 = grp_FIRE3_fu_2067_WEIGHT1_44_1_address0.read();
        } else {
            WEIGHT1_44_1_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_44_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_44_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_44_1_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_44_1_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_44_1_ce0 = grp_FIRE3_fu_2067_WEIGHT1_44_1_ce0.read();
        } else {
            WEIGHT1_44_1_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_44_1_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_44_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_44_1_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_44_1_we0.read();
    } else {
        WEIGHT1_44_1_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_44_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_44_2_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_44_2_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_44_2_address0 = grp_FIRE3_fu_2067_WEIGHT1_44_2_address0.read();
        } else {
            WEIGHT1_44_2_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_44_2_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_44_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_44_2_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_44_2_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_44_2_ce0 = grp_FIRE3_fu_2067_WEIGHT1_44_2_ce0.read();
        } else {
            WEIGHT1_44_2_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_44_2_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_44_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_44_2_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_44_2_we0.read();
    } else {
        WEIGHT1_44_2_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_44_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_44_3_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_44_3_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_44_3_address0 = grp_FIRE3_fu_2067_WEIGHT1_44_3_address0.read();
        } else {
            WEIGHT1_44_3_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_44_3_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_44_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_44_3_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_44_3_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_44_3_ce0 = grp_FIRE3_fu_2067_WEIGHT1_44_3_ce0.read();
        } else {
            WEIGHT1_44_3_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_44_3_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_44_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_44_3_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_44_3_we0.read();
    } else {
        WEIGHT1_44_3_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_44_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_44_4_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_44_4_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_44_4_address0 = grp_FIRE3_fu_2067_WEIGHT1_44_4_address0.read();
        } else {
            WEIGHT1_44_4_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_44_4_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_44_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_44_4_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_44_4_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_44_4_ce0 = grp_FIRE3_fu_2067_WEIGHT1_44_4_ce0.read();
        } else {
            WEIGHT1_44_4_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_44_4_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_44_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_44_4_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_44_4_we0.read();
    } else {
        WEIGHT1_44_4_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_44_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_44_5_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_44_5_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_44_5_address0 = grp_FIRE3_fu_2067_WEIGHT1_44_5_address0.read();
        } else {
            WEIGHT1_44_5_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_44_5_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_44_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_44_5_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_44_5_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_44_5_ce0 = grp_FIRE3_fu_2067_WEIGHT1_44_5_ce0.read();
        } else {
            WEIGHT1_44_5_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_44_5_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_44_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_44_5_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_44_5_we0.read();
    } else {
        WEIGHT1_44_5_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_44_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_44_6_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_44_6_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_44_6_address0 = grp_FIRE3_fu_2067_WEIGHT1_44_6_address0.read();
        } else {
            WEIGHT1_44_6_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_44_6_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_44_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_44_6_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_44_6_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_44_6_ce0 = grp_FIRE3_fu_2067_WEIGHT1_44_6_ce0.read();
        } else {
            WEIGHT1_44_6_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_44_6_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_44_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_44_6_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_44_6_we0.read();
    } else {
        WEIGHT1_44_6_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_45_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_45_0_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_45_0_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_45_0_address0 = grp_FIRE3_fu_2067_WEIGHT1_45_0_address0.read();
        } else {
            WEIGHT1_45_0_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_45_0_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_45_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_45_0_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_45_0_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_45_0_ce0 = grp_FIRE3_fu_2067_WEIGHT1_45_0_ce0.read();
        } else {
            WEIGHT1_45_0_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_45_0_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_45_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_45_0_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_45_0_we0.read();
    } else {
        WEIGHT1_45_0_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_45_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_45_1_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_45_1_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_45_1_address0 = grp_FIRE3_fu_2067_WEIGHT1_45_1_address0.read();
        } else {
            WEIGHT1_45_1_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_45_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_45_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_45_1_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_45_1_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_45_1_ce0 = grp_FIRE3_fu_2067_WEIGHT1_45_1_ce0.read();
        } else {
            WEIGHT1_45_1_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_45_1_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_45_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_45_1_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_45_1_we0.read();
    } else {
        WEIGHT1_45_1_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_45_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_45_2_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_45_2_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_45_2_address0 = grp_FIRE3_fu_2067_WEIGHT1_45_2_address0.read();
        } else {
            WEIGHT1_45_2_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_45_2_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_45_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_45_2_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_45_2_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_45_2_ce0 = grp_FIRE3_fu_2067_WEIGHT1_45_2_ce0.read();
        } else {
            WEIGHT1_45_2_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_45_2_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_45_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_45_2_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_45_2_we0.read();
    } else {
        WEIGHT1_45_2_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_45_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_45_3_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_45_3_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_45_3_address0 = grp_FIRE3_fu_2067_WEIGHT1_45_3_address0.read();
        } else {
            WEIGHT1_45_3_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_45_3_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_45_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_45_3_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_45_3_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_45_3_ce0 = grp_FIRE3_fu_2067_WEIGHT1_45_3_ce0.read();
        } else {
            WEIGHT1_45_3_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_45_3_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_45_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_45_3_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_45_3_we0.read();
    } else {
        WEIGHT1_45_3_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_45_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_45_4_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_45_4_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_45_4_address0 = grp_FIRE3_fu_2067_WEIGHT1_45_4_address0.read();
        } else {
            WEIGHT1_45_4_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_45_4_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_45_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_45_4_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_45_4_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_45_4_ce0 = grp_FIRE3_fu_2067_WEIGHT1_45_4_ce0.read();
        } else {
            WEIGHT1_45_4_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_45_4_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_45_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_45_4_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_45_4_we0.read();
    } else {
        WEIGHT1_45_4_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_45_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_45_5_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_45_5_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_45_5_address0 = grp_FIRE3_fu_2067_WEIGHT1_45_5_address0.read();
        } else {
            WEIGHT1_45_5_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_45_5_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_45_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_45_5_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_45_5_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_45_5_ce0 = grp_FIRE3_fu_2067_WEIGHT1_45_5_ce0.read();
        } else {
            WEIGHT1_45_5_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_45_5_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_45_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_45_5_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_45_5_we0.read();
    } else {
        WEIGHT1_45_5_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_45_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_45_6_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_45_6_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_45_6_address0 = grp_FIRE3_fu_2067_WEIGHT1_45_6_address0.read();
        } else {
            WEIGHT1_45_6_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_45_6_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_45_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_45_6_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_45_6_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_45_6_ce0 = grp_FIRE3_fu_2067_WEIGHT1_45_6_ce0.read();
        } else {
            WEIGHT1_45_6_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_45_6_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_45_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_45_6_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_45_6_we0.read();
    } else {
        WEIGHT1_45_6_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_46_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_46_0_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_46_0_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_46_0_address0 = grp_FIRE3_fu_2067_WEIGHT1_46_0_address0.read();
        } else {
            WEIGHT1_46_0_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_46_0_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_46_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_46_0_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_46_0_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_46_0_ce0 = grp_FIRE3_fu_2067_WEIGHT1_46_0_ce0.read();
        } else {
            WEIGHT1_46_0_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_46_0_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_46_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_46_0_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_46_0_we0.read();
    } else {
        WEIGHT1_46_0_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_46_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_46_1_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_46_1_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_46_1_address0 = grp_FIRE3_fu_2067_WEIGHT1_46_1_address0.read();
        } else {
            WEIGHT1_46_1_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_46_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_46_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_46_1_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_46_1_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_46_1_ce0 = grp_FIRE3_fu_2067_WEIGHT1_46_1_ce0.read();
        } else {
            WEIGHT1_46_1_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_46_1_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_46_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_46_1_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_46_1_we0.read();
    } else {
        WEIGHT1_46_1_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_46_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_46_2_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_46_2_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_46_2_address0 = grp_FIRE3_fu_2067_WEIGHT1_46_2_address0.read();
        } else {
            WEIGHT1_46_2_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_46_2_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_46_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_46_2_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_46_2_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_46_2_ce0 = grp_FIRE3_fu_2067_WEIGHT1_46_2_ce0.read();
        } else {
            WEIGHT1_46_2_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_46_2_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_46_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_46_2_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_46_2_we0.read();
    } else {
        WEIGHT1_46_2_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_46_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_46_3_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_46_3_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_46_3_address0 = grp_FIRE3_fu_2067_WEIGHT1_46_3_address0.read();
        } else {
            WEIGHT1_46_3_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_46_3_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_46_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_46_3_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_46_3_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_46_3_ce0 = grp_FIRE3_fu_2067_WEIGHT1_46_3_ce0.read();
        } else {
            WEIGHT1_46_3_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_46_3_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_46_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_46_3_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_46_3_we0.read();
    } else {
        WEIGHT1_46_3_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_46_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_46_4_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_46_4_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_46_4_address0 = grp_FIRE3_fu_2067_WEIGHT1_46_4_address0.read();
        } else {
            WEIGHT1_46_4_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_46_4_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_46_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_46_4_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_46_4_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_46_4_ce0 = grp_FIRE3_fu_2067_WEIGHT1_46_4_ce0.read();
        } else {
            WEIGHT1_46_4_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_46_4_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_46_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_46_4_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_46_4_we0.read();
    } else {
        WEIGHT1_46_4_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_46_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_46_5_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_46_5_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_46_5_address0 = grp_FIRE3_fu_2067_WEIGHT1_46_5_address0.read();
        } else {
            WEIGHT1_46_5_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_46_5_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_46_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_46_5_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_46_5_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_46_5_ce0 = grp_FIRE3_fu_2067_WEIGHT1_46_5_ce0.read();
        } else {
            WEIGHT1_46_5_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_46_5_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_46_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_46_5_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_46_5_we0.read();
    } else {
        WEIGHT1_46_5_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_46_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_46_6_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_46_6_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_46_6_address0 = grp_FIRE3_fu_2067_WEIGHT1_46_6_address0.read();
        } else {
            WEIGHT1_46_6_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_46_6_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_46_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_46_6_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_46_6_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_46_6_ce0 = grp_FIRE3_fu_2067_WEIGHT1_46_6_ce0.read();
        } else {
            WEIGHT1_46_6_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_46_6_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_46_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_46_6_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_46_6_we0.read();
    } else {
        WEIGHT1_46_6_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_47_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_47_0_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_47_0_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_47_0_address0 = grp_FIRE3_fu_2067_WEIGHT1_47_0_address0.read();
        } else {
            WEIGHT1_47_0_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_47_0_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_47_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_47_0_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_47_0_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_47_0_ce0 = grp_FIRE3_fu_2067_WEIGHT1_47_0_ce0.read();
        } else {
            WEIGHT1_47_0_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_47_0_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_47_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_47_0_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_47_0_we0.read();
    } else {
        WEIGHT1_47_0_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_47_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_47_1_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_47_1_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_47_1_address0 = grp_FIRE3_fu_2067_WEIGHT1_47_1_address0.read();
        } else {
            WEIGHT1_47_1_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_47_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_47_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_47_1_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_47_1_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_47_1_ce0 = grp_FIRE3_fu_2067_WEIGHT1_47_1_ce0.read();
        } else {
            WEIGHT1_47_1_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_47_1_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_47_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_47_1_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_47_1_we0.read();
    } else {
        WEIGHT1_47_1_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_47_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_47_2_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_47_2_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_47_2_address0 = grp_FIRE3_fu_2067_WEIGHT1_47_2_address0.read();
        } else {
            WEIGHT1_47_2_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_47_2_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_47_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_47_2_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_47_2_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_47_2_ce0 = grp_FIRE3_fu_2067_WEIGHT1_47_2_ce0.read();
        } else {
            WEIGHT1_47_2_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_47_2_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_47_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_47_2_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_47_2_we0.read();
    } else {
        WEIGHT1_47_2_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_47_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_47_3_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_47_3_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_47_3_address0 = grp_FIRE3_fu_2067_WEIGHT1_47_3_address0.read();
        } else {
            WEIGHT1_47_3_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_47_3_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_47_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_47_3_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_47_3_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_47_3_ce0 = grp_FIRE3_fu_2067_WEIGHT1_47_3_ce0.read();
        } else {
            WEIGHT1_47_3_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_47_3_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_47_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_47_3_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_47_3_we0.read();
    } else {
        WEIGHT1_47_3_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_47_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_47_4_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_47_4_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_47_4_address0 = grp_FIRE3_fu_2067_WEIGHT1_47_4_address0.read();
        } else {
            WEIGHT1_47_4_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_47_4_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_47_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_47_4_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_47_4_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_47_4_ce0 = grp_FIRE3_fu_2067_WEIGHT1_47_4_ce0.read();
        } else {
            WEIGHT1_47_4_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_47_4_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_47_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_47_4_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_47_4_we0.read();
    } else {
        WEIGHT1_47_4_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_47_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_47_5_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_47_5_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_47_5_address0 = grp_FIRE3_fu_2067_WEIGHT1_47_5_address0.read();
        } else {
            WEIGHT1_47_5_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_47_5_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_47_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_47_5_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_47_5_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_47_5_ce0 = grp_FIRE3_fu_2067_WEIGHT1_47_5_ce0.read();
        } else {
            WEIGHT1_47_5_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_47_5_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_47_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_47_5_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_47_5_we0.read();
    } else {
        WEIGHT1_47_5_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_47_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_47_6_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_47_6_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_47_6_address0 = grp_FIRE3_fu_2067_WEIGHT1_47_6_address0.read();
        } else {
            WEIGHT1_47_6_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_47_6_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_47_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_47_6_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_47_6_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_47_6_ce0 = grp_FIRE3_fu_2067_WEIGHT1_47_6_ce0.read();
        } else {
            WEIGHT1_47_6_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_47_6_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_47_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_47_6_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_47_6_we0.read();
    } else {
        WEIGHT1_47_6_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_48_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_48_0_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_48_0_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_48_0_address0 = grp_FIRE3_fu_2067_WEIGHT1_48_0_address0.read();
        } else {
            WEIGHT1_48_0_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_48_0_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_48_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_48_0_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_48_0_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_48_0_ce0 = grp_FIRE3_fu_2067_WEIGHT1_48_0_ce0.read();
        } else {
            WEIGHT1_48_0_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_48_0_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_48_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_48_0_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_48_0_we0.read();
    } else {
        WEIGHT1_48_0_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_48_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_48_1_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_48_1_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_48_1_address0 = grp_FIRE3_fu_2067_WEIGHT1_48_1_address0.read();
        } else {
            WEIGHT1_48_1_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_48_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_48_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_48_1_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_48_1_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_48_1_ce0 = grp_FIRE3_fu_2067_WEIGHT1_48_1_ce0.read();
        } else {
            WEIGHT1_48_1_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_48_1_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_48_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_48_1_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_48_1_we0.read();
    } else {
        WEIGHT1_48_1_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_48_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_48_2_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_48_2_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_48_2_address0 = grp_FIRE3_fu_2067_WEIGHT1_48_2_address0.read();
        } else {
            WEIGHT1_48_2_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_48_2_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_48_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_48_2_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_48_2_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_48_2_ce0 = grp_FIRE3_fu_2067_WEIGHT1_48_2_ce0.read();
        } else {
            WEIGHT1_48_2_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_48_2_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_48_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_48_2_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_48_2_we0.read();
    } else {
        WEIGHT1_48_2_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_48_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_48_3_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_48_3_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_48_3_address0 = grp_FIRE3_fu_2067_WEIGHT1_48_3_address0.read();
        } else {
            WEIGHT1_48_3_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_48_3_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_48_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_48_3_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_48_3_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_48_3_ce0 = grp_FIRE3_fu_2067_WEIGHT1_48_3_ce0.read();
        } else {
            WEIGHT1_48_3_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_48_3_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_48_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_48_3_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_48_3_we0.read();
    } else {
        WEIGHT1_48_3_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_48_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_48_4_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_48_4_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_48_4_address0 = grp_FIRE3_fu_2067_WEIGHT1_48_4_address0.read();
        } else {
            WEIGHT1_48_4_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_48_4_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_48_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_48_4_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_48_4_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_48_4_ce0 = grp_FIRE3_fu_2067_WEIGHT1_48_4_ce0.read();
        } else {
            WEIGHT1_48_4_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_48_4_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_48_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_48_4_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_48_4_we0.read();
    } else {
        WEIGHT1_48_4_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_48_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_48_5_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_48_5_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_48_5_address0 = grp_FIRE3_fu_2067_WEIGHT1_48_5_address0.read();
        } else {
            WEIGHT1_48_5_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_48_5_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_48_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_48_5_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_48_5_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_48_5_ce0 = grp_FIRE3_fu_2067_WEIGHT1_48_5_ce0.read();
        } else {
            WEIGHT1_48_5_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_48_5_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_48_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_48_5_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_48_5_we0.read();
    } else {
        WEIGHT1_48_5_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_48_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_48_6_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_48_6_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_48_6_address0 = grp_FIRE3_fu_2067_WEIGHT1_48_6_address0.read();
        } else {
            WEIGHT1_48_6_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_48_6_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_48_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_48_6_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_48_6_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_48_6_ce0 = grp_FIRE3_fu_2067_WEIGHT1_48_6_ce0.read();
        } else {
            WEIGHT1_48_6_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_48_6_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_48_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_48_6_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_48_6_we0.read();
    } else {
        WEIGHT1_48_6_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_49_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_49_0_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_49_0_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_49_0_address0 = grp_FIRE3_fu_2067_WEIGHT1_49_0_address0.read();
        } else {
            WEIGHT1_49_0_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_49_0_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_49_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_49_0_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_49_0_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_49_0_ce0 = grp_FIRE3_fu_2067_WEIGHT1_49_0_ce0.read();
        } else {
            WEIGHT1_49_0_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_49_0_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_49_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_49_0_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_49_0_we0.read();
    } else {
        WEIGHT1_49_0_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_49_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_49_1_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_49_1_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_49_1_address0 = grp_FIRE3_fu_2067_WEIGHT1_49_1_address0.read();
        } else {
            WEIGHT1_49_1_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_49_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_49_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_49_1_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_49_1_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_49_1_ce0 = grp_FIRE3_fu_2067_WEIGHT1_49_1_ce0.read();
        } else {
            WEIGHT1_49_1_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_49_1_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_49_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_49_1_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_49_1_we0.read();
    } else {
        WEIGHT1_49_1_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_49_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_49_2_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_49_2_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_49_2_address0 = grp_FIRE3_fu_2067_WEIGHT1_49_2_address0.read();
        } else {
            WEIGHT1_49_2_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_49_2_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_49_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_49_2_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_49_2_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_49_2_ce0 = grp_FIRE3_fu_2067_WEIGHT1_49_2_ce0.read();
        } else {
            WEIGHT1_49_2_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_49_2_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_49_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_49_2_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_49_2_we0.read();
    } else {
        WEIGHT1_49_2_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_49_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_49_3_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_49_3_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_49_3_address0 = grp_FIRE3_fu_2067_WEIGHT1_49_3_address0.read();
        } else {
            WEIGHT1_49_3_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_49_3_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_49_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_49_3_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_49_3_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_49_3_ce0 = grp_FIRE3_fu_2067_WEIGHT1_49_3_ce0.read();
        } else {
            WEIGHT1_49_3_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_49_3_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_49_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_49_3_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_49_3_we0.read();
    } else {
        WEIGHT1_49_3_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_49_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_49_4_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_49_4_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_49_4_address0 = grp_FIRE3_fu_2067_WEIGHT1_49_4_address0.read();
        } else {
            WEIGHT1_49_4_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_49_4_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_49_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_49_4_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_49_4_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_49_4_ce0 = grp_FIRE3_fu_2067_WEIGHT1_49_4_ce0.read();
        } else {
            WEIGHT1_49_4_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_49_4_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_49_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_49_4_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_49_4_we0.read();
    } else {
        WEIGHT1_49_4_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_49_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_49_5_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_49_5_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_49_5_address0 = grp_FIRE3_fu_2067_WEIGHT1_49_5_address0.read();
        } else {
            WEIGHT1_49_5_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_49_5_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_49_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_49_5_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_49_5_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_49_5_ce0 = grp_FIRE3_fu_2067_WEIGHT1_49_5_ce0.read();
        } else {
            WEIGHT1_49_5_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_49_5_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_49_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_49_5_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_49_5_we0.read();
    } else {
        WEIGHT1_49_5_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_49_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_49_6_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_49_6_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_49_6_address0 = grp_FIRE3_fu_2067_WEIGHT1_49_6_address0.read();
        } else {
            WEIGHT1_49_6_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_49_6_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_49_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_49_6_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_49_6_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_49_6_ce0 = grp_FIRE3_fu_2067_WEIGHT1_49_6_ce0.read();
        } else {
            WEIGHT1_49_6_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_49_6_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_49_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_49_6_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_49_6_we0.read();
    } else {
        WEIGHT1_49_6_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_4_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_4_0_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_4_0_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_4_0_address0 = grp_FIRE3_fu_2067_WEIGHT1_4_0_address0.read();
        } else {
            WEIGHT1_4_0_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_4_0_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_4_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_4_0_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_4_0_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_4_0_ce0 = grp_FIRE3_fu_2067_WEIGHT1_4_0_ce0.read();
        } else {
            WEIGHT1_4_0_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_4_0_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_4_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_4_0_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_4_0_we0.read();
    } else {
        WEIGHT1_4_0_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_4_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_4_1_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_4_1_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_4_1_address0 = grp_FIRE3_fu_2067_WEIGHT1_4_1_address0.read();
        } else {
            WEIGHT1_4_1_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_4_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_4_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_4_1_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_4_1_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_4_1_ce0 = grp_FIRE3_fu_2067_WEIGHT1_4_1_ce0.read();
        } else {
            WEIGHT1_4_1_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_4_1_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_4_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_4_1_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_4_1_we0.read();
    } else {
        WEIGHT1_4_1_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_4_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_4_2_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_4_2_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_4_2_address0 = grp_FIRE3_fu_2067_WEIGHT1_4_2_address0.read();
        } else {
            WEIGHT1_4_2_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_4_2_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_4_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_4_2_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_4_2_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_4_2_ce0 = grp_FIRE3_fu_2067_WEIGHT1_4_2_ce0.read();
        } else {
            WEIGHT1_4_2_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_4_2_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_4_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_4_2_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_4_2_we0.read();
    } else {
        WEIGHT1_4_2_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_4_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_4_3_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_4_3_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_4_3_address0 = grp_FIRE3_fu_2067_WEIGHT1_4_3_address0.read();
        } else {
            WEIGHT1_4_3_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_4_3_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_4_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_4_3_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_4_3_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_4_3_ce0 = grp_FIRE3_fu_2067_WEIGHT1_4_3_ce0.read();
        } else {
            WEIGHT1_4_3_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_4_3_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_4_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_4_3_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_4_3_we0.read();
    } else {
        WEIGHT1_4_3_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_4_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_4_4_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_4_4_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_4_4_address0 = grp_FIRE3_fu_2067_WEIGHT1_4_4_address0.read();
        } else {
            WEIGHT1_4_4_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_4_4_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_4_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_4_4_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_4_4_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_4_4_ce0 = grp_FIRE3_fu_2067_WEIGHT1_4_4_ce0.read();
        } else {
            WEIGHT1_4_4_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_4_4_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_4_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_4_4_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_4_4_we0.read();
    } else {
        WEIGHT1_4_4_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_4_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_4_5_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_4_5_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_4_5_address0 = grp_FIRE3_fu_2067_WEIGHT1_4_5_address0.read();
        } else {
            WEIGHT1_4_5_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_4_5_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_4_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_4_5_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_4_5_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_4_5_ce0 = grp_FIRE3_fu_2067_WEIGHT1_4_5_ce0.read();
        } else {
            WEIGHT1_4_5_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_4_5_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_4_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_4_5_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_4_5_we0.read();
    } else {
        WEIGHT1_4_5_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_4_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_4_6_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_4_6_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_4_6_address0 = grp_FIRE3_fu_2067_WEIGHT1_4_6_address0.read();
        } else {
            WEIGHT1_4_6_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_4_6_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_4_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_4_6_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_4_6_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_4_6_ce0 = grp_FIRE3_fu_2067_WEIGHT1_4_6_ce0.read();
        } else {
            WEIGHT1_4_6_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_4_6_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_4_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_4_6_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_4_6_we0.read();
    } else {
        WEIGHT1_4_6_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_50_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_50_0_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_50_0_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_50_0_address0 = grp_FIRE3_fu_2067_WEIGHT1_50_0_address0.read();
        } else {
            WEIGHT1_50_0_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_50_0_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_50_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_50_0_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_50_0_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_50_0_ce0 = grp_FIRE3_fu_2067_WEIGHT1_50_0_ce0.read();
        } else {
            WEIGHT1_50_0_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_50_0_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_50_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_50_0_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_50_0_we0.read();
    } else {
        WEIGHT1_50_0_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_50_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_50_1_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_50_1_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_50_1_address0 = grp_FIRE3_fu_2067_WEIGHT1_50_1_address0.read();
        } else {
            WEIGHT1_50_1_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_50_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_50_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_50_1_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_50_1_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_50_1_ce0 = grp_FIRE3_fu_2067_WEIGHT1_50_1_ce0.read();
        } else {
            WEIGHT1_50_1_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_50_1_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_50_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_50_1_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_50_1_we0.read();
    } else {
        WEIGHT1_50_1_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_50_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_50_2_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_50_2_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_50_2_address0 = grp_FIRE3_fu_2067_WEIGHT1_50_2_address0.read();
        } else {
            WEIGHT1_50_2_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_50_2_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_50_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_50_2_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_50_2_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_50_2_ce0 = grp_FIRE3_fu_2067_WEIGHT1_50_2_ce0.read();
        } else {
            WEIGHT1_50_2_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_50_2_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_50_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_50_2_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_50_2_we0.read();
    } else {
        WEIGHT1_50_2_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_50_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_50_3_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_50_3_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_50_3_address0 = grp_FIRE3_fu_2067_WEIGHT1_50_3_address0.read();
        } else {
            WEIGHT1_50_3_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_50_3_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_50_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_50_3_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_50_3_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_50_3_ce0 = grp_FIRE3_fu_2067_WEIGHT1_50_3_ce0.read();
        } else {
            WEIGHT1_50_3_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_50_3_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_50_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_50_3_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_50_3_we0.read();
    } else {
        WEIGHT1_50_3_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_50_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_50_4_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_50_4_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_50_4_address0 = grp_FIRE3_fu_2067_WEIGHT1_50_4_address0.read();
        } else {
            WEIGHT1_50_4_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_50_4_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_50_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_50_4_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_50_4_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_50_4_ce0 = grp_FIRE3_fu_2067_WEIGHT1_50_4_ce0.read();
        } else {
            WEIGHT1_50_4_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_50_4_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_50_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_50_4_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_50_4_we0.read();
    } else {
        WEIGHT1_50_4_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_50_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_50_5_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_50_5_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_50_5_address0 = grp_FIRE3_fu_2067_WEIGHT1_50_5_address0.read();
        } else {
            WEIGHT1_50_5_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_50_5_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_50_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_50_5_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_50_5_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_50_5_ce0 = grp_FIRE3_fu_2067_WEIGHT1_50_5_ce0.read();
        } else {
            WEIGHT1_50_5_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_50_5_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_50_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_50_5_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_50_5_we0.read();
    } else {
        WEIGHT1_50_5_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_50_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_50_6_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_50_6_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_50_6_address0 = grp_FIRE3_fu_2067_WEIGHT1_50_6_address0.read();
        } else {
            WEIGHT1_50_6_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_50_6_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_50_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_50_6_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_50_6_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_50_6_ce0 = grp_FIRE3_fu_2067_WEIGHT1_50_6_ce0.read();
        } else {
            WEIGHT1_50_6_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_50_6_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_50_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_50_6_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_50_6_we0.read();
    } else {
        WEIGHT1_50_6_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_51_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_51_0_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_51_0_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_51_0_address0 = grp_FIRE3_fu_2067_WEIGHT1_51_0_address0.read();
        } else {
            WEIGHT1_51_0_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_51_0_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_51_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_51_0_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_51_0_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_51_0_ce0 = grp_FIRE3_fu_2067_WEIGHT1_51_0_ce0.read();
        } else {
            WEIGHT1_51_0_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_51_0_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_51_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_51_0_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_51_0_we0.read();
    } else {
        WEIGHT1_51_0_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_51_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_51_1_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_51_1_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_51_1_address0 = grp_FIRE3_fu_2067_WEIGHT1_51_1_address0.read();
        } else {
            WEIGHT1_51_1_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_51_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_51_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_51_1_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_51_1_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_51_1_ce0 = grp_FIRE3_fu_2067_WEIGHT1_51_1_ce0.read();
        } else {
            WEIGHT1_51_1_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_51_1_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_51_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_51_1_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_51_1_we0.read();
    } else {
        WEIGHT1_51_1_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_51_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_51_2_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_51_2_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_51_2_address0 = grp_FIRE3_fu_2067_WEIGHT1_51_2_address0.read();
        } else {
            WEIGHT1_51_2_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_51_2_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_51_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_51_2_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_51_2_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_51_2_ce0 = grp_FIRE3_fu_2067_WEIGHT1_51_2_ce0.read();
        } else {
            WEIGHT1_51_2_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_51_2_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_51_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_51_2_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_51_2_we0.read();
    } else {
        WEIGHT1_51_2_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_51_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_51_3_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_51_3_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_51_3_address0 = grp_FIRE3_fu_2067_WEIGHT1_51_3_address0.read();
        } else {
            WEIGHT1_51_3_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_51_3_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_51_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_51_3_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_51_3_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_51_3_ce0 = grp_FIRE3_fu_2067_WEIGHT1_51_3_ce0.read();
        } else {
            WEIGHT1_51_3_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_51_3_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_51_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_51_3_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_51_3_we0.read();
    } else {
        WEIGHT1_51_3_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_51_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_51_4_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_51_4_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_51_4_address0 = grp_FIRE3_fu_2067_WEIGHT1_51_4_address0.read();
        } else {
            WEIGHT1_51_4_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_51_4_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_51_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_51_4_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_51_4_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_51_4_ce0 = grp_FIRE3_fu_2067_WEIGHT1_51_4_ce0.read();
        } else {
            WEIGHT1_51_4_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_51_4_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_51_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_51_4_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_51_4_we0.read();
    } else {
        WEIGHT1_51_4_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_51_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_51_5_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_51_5_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_51_5_address0 = grp_FIRE3_fu_2067_WEIGHT1_51_5_address0.read();
        } else {
            WEIGHT1_51_5_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_51_5_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_51_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_51_5_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_51_5_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_51_5_ce0 = grp_FIRE3_fu_2067_WEIGHT1_51_5_ce0.read();
        } else {
            WEIGHT1_51_5_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_51_5_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_51_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_51_5_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_51_5_we0.read();
    } else {
        WEIGHT1_51_5_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_51_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_51_6_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_51_6_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_51_6_address0 = grp_FIRE3_fu_2067_WEIGHT1_51_6_address0.read();
        } else {
            WEIGHT1_51_6_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_51_6_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_51_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_51_6_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_51_6_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_51_6_ce0 = grp_FIRE3_fu_2067_WEIGHT1_51_6_ce0.read();
        } else {
            WEIGHT1_51_6_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_51_6_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_51_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_51_6_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_51_6_we0.read();
    } else {
        WEIGHT1_51_6_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_52_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_52_0_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_52_0_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_52_0_address0 = grp_FIRE3_fu_2067_WEIGHT1_52_0_address0.read();
        } else {
            WEIGHT1_52_0_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_52_0_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_52_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_52_0_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_52_0_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_52_0_ce0 = grp_FIRE3_fu_2067_WEIGHT1_52_0_ce0.read();
        } else {
            WEIGHT1_52_0_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_52_0_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_52_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_52_0_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_52_0_we0.read();
    } else {
        WEIGHT1_52_0_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_52_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_52_1_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_52_1_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_52_1_address0 = grp_FIRE3_fu_2067_WEIGHT1_52_1_address0.read();
        } else {
            WEIGHT1_52_1_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_52_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_52_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_52_1_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_52_1_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_52_1_ce0 = grp_FIRE3_fu_2067_WEIGHT1_52_1_ce0.read();
        } else {
            WEIGHT1_52_1_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_52_1_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_52_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_52_1_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_52_1_we0.read();
    } else {
        WEIGHT1_52_1_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_52_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_52_2_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_52_2_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_52_2_address0 = grp_FIRE3_fu_2067_WEIGHT1_52_2_address0.read();
        } else {
            WEIGHT1_52_2_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_52_2_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_52_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_52_2_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_52_2_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_52_2_ce0 = grp_FIRE3_fu_2067_WEIGHT1_52_2_ce0.read();
        } else {
            WEIGHT1_52_2_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_52_2_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_52_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_52_2_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_52_2_we0.read();
    } else {
        WEIGHT1_52_2_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_52_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_52_3_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_52_3_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_52_3_address0 = grp_FIRE3_fu_2067_WEIGHT1_52_3_address0.read();
        } else {
            WEIGHT1_52_3_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_52_3_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_52_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_52_3_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_52_3_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_52_3_ce0 = grp_FIRE3_fu_2067_WEIGHT1_52_3_ce0.read();
        } else {
            WEIGHT1_52_3_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_52_3_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_52_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_52_3_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_52_3_we0.read();
    } else {
        WEIGHT1_52_3_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_52_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_52_4_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_52_4_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_52_4_address0 = grp_FIRE3_fu_2067_WEIGHT1_52_4_address0.read();
        } else {
            WEIGHT1_52_4_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_52_4_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_52_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_52_4_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_52_4_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_52_4_ce0 = grp_FIRE3_fu_2067_WEIGHT1_52_4_ce0.read();
        } else {
            WEIGHT1_52_4_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_52_4_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_52_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_52_4_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_52_4_we0.read();
    } else {
        WEIGHT1_52_4_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_52_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_52_5_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_52_5_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_52_5_address0 = grp_FIRE3_fu_2067_WEIGHT1_52_5_address0.read();
        } else {
            WEIGHT1_52_5_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_52_5_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_52_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_52_5_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_52_5_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_52_5_ce0 = grp_FIRE3_fu_2067_WEIGHT1_52_5_ce0.read();
        } else {
            WEIGHT1_52_5_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_52_5_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_52_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_52_5_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_52_5_we0.read();
    } else {
        WEIGHT1_52_5_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_52_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_52_6_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_52_6_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_52_6_address0 = grp_FIRE3_fu_2067_WEIGHT1_52_6_address0.read();
        } else {
            WEIGHT1_52_6_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_52_6_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_52_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_52_6_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_52_6_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_52_6_ce0 = grp_FIRE3_fu_2067_WEIGHT1_52_6_ce0.read();
        } else {
            WEIGHT1_52_6_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_52_6_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_52_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_52_6_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_52_6_we0.read();
    } else {
        WEIGHT1_52_6_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_53_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_53_0_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_53_0_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_53_0_address0 = grp_FIRE3_fu_2067_WEIGHT1_53_0_address0.read();
        } else {
            WEIGHT1_53_0_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_53_0_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_53_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_53_0_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_53_0_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_53_0_ce0 = grp_FIRE3_fu_2067_WEIGHT1_53_0_ce0.read();
        } else {
            WEIGHT1_53_0_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_53_0_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_53_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_53_0_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_53_0_we0.read();
    } else {
        WEIGHT1_53_0_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_53_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_53_1_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_53_1_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_53_1_address0 = grp_FIRE3_fu_2067_WEIGHT1_53_1_address0.read();
        } else {
            WEIGHT1_53_1_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_53_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_53_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_53_1_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_53_1_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_53_1_ce0 = grp_FIRE3_fu_2067_WEIGHT1_53_1_ce0.read();
        } else {
            WEIGHT1_53_1_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_53_1_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_53_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_53_1_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_53_1_we0.read();
    } else {
        WEIGHT1_53_1_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_53_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_53_2_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_53_2_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_53_2_address0 = grp_FIRE3_fu_2067_WEIGHT1_53_2_address0.read();
        } else {
            WEIGHT1_53_2_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_53_2_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_53_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_53_2_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_53_2_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_53_2_ce0 = grp_FIRE3_fu_2067_WEIGHT1_53_2_ce0.read();
        } else {
            WEIGHT1_53_2_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_53_2_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_53_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_53_2_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_53_2_we0.read();
    } else {
        WEIGHT1_53_2_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_53_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_53_3_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_53_3_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_53_3_address0 = grp_FIRE3_fu_2067_WEIGHT1_53_3_address0.read();
        } else {
            WEIGHT1_53_3_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_53_3_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_53_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_53_3_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_53_3_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_53_3_ce0 = grp_FIRE3_fu_2067_WEIGHT1_53_3_ce0.read();
        } else {
            WEIGHT1_53_3_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_53_3_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_53_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_53_3_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_53_3_we0.read();
    } else {
        WEIGHT1_53_3_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_53_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_53_4_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_53_4_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_53_4_address0 = grp_FIRE3_fu_2067_WEIGHT1_53_4_address0.read();
        } else {
            WEIGHT1_53_4_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_53_4_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_53_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_53_4_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_53_4_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_53_4_ce0 = grp_FIRE3_fu_2067_WEIGHT1_53_4_ce0.read();
        } else {
            WEIGHT1_53_4_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_53_4_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_53_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_53_4_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_53_4_we0.read();
    } else {
        WEIGHT1_53_4_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_53_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_53_5_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_53_5_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_53_5_address0 = grp_FIRE3_fu_2067_WEIGHT1_53_5_address0.read();
        } else {
            WEIGHT1_53_5_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_53_5_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_53_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_53_5_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_53_5_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_53_5_ce0 = grp_FIRE3_fu_2067_WEIGHT1_53_5_ce0.read();
        } else {
            WEIGHT1_53_5_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_53_5_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_53_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_53_5_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_53_5_we0.read();
    } else {
        WEIGHT1_53_5_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_53_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_53_6_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_53_6_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_53_6_address0 = grp_FIRE3_fu_2067_WEIGHT1_53_6_address0.read();
        } else {
            WEIGHT1_53_6_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_53_6_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_53_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_53_6_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_53_6_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_53_6_ce0 = grp_FIRE3_fu_2067_WEIGHT1_53_6_ce0.read();
        } else {
            WEIGHT1_53_6_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_53_6_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_53_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_53_6_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_53_6_we0.read();
    } else {
        WEIGHT1_53_6_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_54_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_54_0_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_54_0_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_54_0_address0 = grp_FIRE3_fu_2067_WEIGHT1_54_0_address0.read();
        } else {
            WEIGHT1_54_0_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_54_0_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_54_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_54_0_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_54_0_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_54_0_ce0 = grp_FIRE3_fu_2067_WEIGHT1_54_0_ce0.read();
        } else {
            WEIGHT1_54_0_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_54_0_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_54_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_54_0_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_54_0_we0.read();
    } else {
        WEIGHT1_54_0_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_54_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_54_1_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_54_1_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_54_1_address0 = grp_FIRE3_fu_2067_WEIGHT1_54_1_address0.read();
        } else {
            WEIGHT1_54_1_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_54_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_54_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_54_1_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_54_1_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_54_1_ce0 = grp_FIRE3_fu_2067_WEIGHT1_54_1_ce0.read();
        } else {
            WEIGHT1_54_1_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_54_1_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_54_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_54_1_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_54_1_we0.read();
    } else {
        WEIGHT1_54_1_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_54_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_54_2_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_54_2_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_54_2_address0 = grp_FIRE3_fu_2067_WEIGHT1_54_2_address0.read();
        } else {
            WEIGHT1_54_2_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_54_2_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_54_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_54_2_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_54_2_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_54_2_ce0 = grp_FIRE3_fu_2067_WEIGHT1_54_2_ce0.read();
        } else {
            WEIGHT1_54_2_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_54_2_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_54_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_54_2_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_54_2_we0.read();
    } else {
        WEIGHT1_54_2_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_54_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_54_3_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_54_3_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_54_3_address0 = grp_FIRE3_fu_2067_WEIGHT1_54_3_address0.read();
        } else {
            WEIGHT1_54_3_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_54_3_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_54_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_54_3_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_54_3_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_54_3_ce0 = grp_FIRE3_fu_2067_WEIGHT1_54_3_ce0.read();
        } else {
            WEIGHT1_54_3_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_54_3_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_54_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_54_3_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_54_3_we0.read();
    } else {
        WEIGHT1_54_3_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_54_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_54_4_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_54_4_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_54_4_address0 = grp_FIRE3_fu_2067_WEIGHT1_54_4_address0.read();
        } else {
            WEIGHT1_54_4_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_54_4_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_54_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_54_4_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_54_4_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_54_4_ce0 = grp_FIRE3_fu_2067_WEIGHT1_54_4_ce0.read();
        } else {
            WEIGHT1_54_4_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_54_4_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_54_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_54_4_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_54_4_we0.read();
    } else {
        WEIGHT1_54_4_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_54_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_54_5_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_54_5_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_54_5_address0 = grp_FIRE3_fu_2067_WEIGHT1_54_5_address0.read();
        } else {
            WEIGHT1_54_5_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_54_5_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_54_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_54_5_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_54_5_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_54_5_ce0 = grp_FIRE3_fu_2067_WEIGHT1_54_5_ce0.read();
        } else {
            WEIGHT1_54_5_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_54_5_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_54_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_54_5_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_54_5_we0.read();
    } else {
        WEIGHT1_54_5_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_54_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_54_6_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_54_6_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_54_6_address0 = grp_FIRE3_fu_2067_WEIGHT1_54_6_address0.read();
        } else {
            WEIGHT1_54_6_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_54_6_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_54_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_54_6_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_54_6_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_54_6_ce0 = grp_FIRE3_fu_2067_WEIGHT1_54_6_ce0.read();
        } else {
            WEIGHT1_54_6_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_54_6_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_54_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_54_6_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_54_6_we0.read();
    } else {
        WEIGHT1_54_6_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_55_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_55_0_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_55_0_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_55_0_address0 = grp_FIRE3_fu_2067_WEIGHT1_55_0_address0.read();
        } else {
            WEIGHT1_55_0_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_55_0_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_55_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_55_0_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_55_0_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_55_0_ce0 = grp_FIRE3_fu_2067_WEIGHT1_55_0_ce0.read();
        } else {
            WEIGHT1_55_0_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_55_0_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_55_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_55_0_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_55_0_we0.read();
    } else {
        WEIGHT1_55_0_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_55_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_55_1_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_55_1_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_55_1_address0 = grp_FIRE3_fu_2067_WEIGHT1_55_1_address0.read();
        } else {
            WEIGHT1_55_1_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_55_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_55_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_55_1_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_55_1_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_55_1_ce0 = grp_FIRE3_fu_2067_WEIGHT1_55_1_ce0.read();
        } else {
            WEIGHT1_55_1_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_55_1_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_55_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_55_1_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_55_1_we0.read();
    } else {
        WEIGHT1_55_1_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_55_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_55_2_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_55_2_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_55_2_address0 = grp_FIRE3_fu_2067_WEIGHT1_55_2_address0.read();
        } else {
            WEIGHT1_55_2_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_55_2_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_55_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_55_2_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_55_2_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_55_2_ce0 = grp_FIRE3_fu_2067_WEIGHT1_55_2_ce0.read();
        } else {
            WEIGHT1_55_2_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_55_2_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_55_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_55_2_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_55_2_we0.read();
    } else {
        WEIGHT1_55_2_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_55_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_55_3_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_55_3_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_55_3_address0 = grp_FIRE3_fu_2067_WEIGHT1_55_3_address0.read();
        } else {
            WEIGHT1_55_3_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_55_3_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_55_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_55_3_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_55_3_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_55_3_ce0 = grp_FIRE3_fu_2067_WEIGHT1_55_3_ce0.read();
        } else {
            WEIGHT1_55_3_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_55_3_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_55_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_55_3_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_55_3_we0.read();
    } else {
        WEIGHT1_55_3_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_55_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_55_4_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_55_4_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_55_4_address0 = grp_FIRE3_fu_2067_WEIGHT1_55_4_address0.read();
        } else {
            WEIGHT1_55_4_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_55_4_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_55_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_55_4_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_55_4_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_55_4_ce0 = grp_FIRE3_fu_2067_WEIGHT1_55_4_ce0.read();
        } else {
            WEIGHT1_55_4_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_55_4_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_55_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_55_4_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_55_4_we0.read();
    } else {
        WEIGHT1_55_4_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_55_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_55_5_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_55_5_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_55_5_address0 = grp_FIRE3_fu_2067_WEIGHT1_55_5_address0.read();
        } else {
            WEIGHT1_55_5_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_55_5_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_55_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_55_5_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_55_5_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_55_5_ce0 = grp_FIRE3_fu_2067_WEIGHT1_55_5_ce0.read();
        } else {
            WEIGHT1_55_5_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_55_5_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_55_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_55_5_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_55_5_we0.read();
    } else {
        WEIGHT1_55_5_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_55_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_55_6_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_55_6_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_55_6_address0 = grp_FIRE3_fu_2067_WEIGHT1_55_6_address0.read();
        } else {
            WEIGHT1_55_6_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_55_6_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_55_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_55_6_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_55_6_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_55_6_ce0 = grp_FIRE3_fu_2067_WEIGHT1_55_6_ce0.read();
        } else {
            WEIGHT1_55_6_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_55_6_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_55_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_55_6_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_55_6_we0.read();
    } else {
        WEIGHT1_55_6_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_56_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_56_0_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_56_0_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_56_0_address0 = grp_FIRE3_fu_2067_WEIGHT1_56_0_address0.read();
        } else {
            WEIGHT1_56_0_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_56_0_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_56_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_56_0_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_56_0_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_56_0_ce0 = grp_FIRE3_fu_2067_WEIGHT1_56_0_ce0.read();
        } else {
            WEIGHT1_56_0_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_56_0_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_56_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_56_0_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_56_0_we0.read();
    } else {
        WEIGHT1_56_0_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_56_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_56_1_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_56_1_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_56_1_address0 = grp_FIRE3_fu_2067_WEIGHT1_56_1_address0.read();
        } else {
            WEIGHT1_56_1_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_56_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_56_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_56_1_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_56_1_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_56_1_ce0 = grp_FIRE3_fu_2067_WEIGHT1_56_1_ce0.read();
        } else {
            WEIGHT1_56_1_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_56_1_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_56_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_56_1_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_56_1_we0.read();
    } else {
        WEIGHT1_56_1_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_56_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_56_2_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_56_2_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_56_2_address0 = grp_FIRE3_fu_2067_WEIGHT1_56_2_address0.read();
        } else {
            WEIGHT1_56_2_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_56_2_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_56_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_56_2_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_56_2_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_56_2_ce0 = grp_FIRE3_fu_2067_WEIGHT1_56_2_ce0.read();
        } else {
            WEIGHT1_56_2_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_56_2_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_56_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_56_2_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_56_2_we0.read();
    } else {
        WEIGHT1_56_2_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_56_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_56_3_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_56_3_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_56_3_address0 = grp_FIRE3_fu_2067_WEIGHT1_56_3_address0.read();
        } else {
            WEIGHT1_56_3_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_56_3_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_56_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_56_3_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_56_3_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_56_3_ce0 = grp_FIRE3_fu_2067_WEIGHT1_56_3_ce0.read();
        } else {
            WEIGHT1_56_3_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_56_3_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_56_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_56_3_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_56_3_we0.read();
    } else {
        WEIGHT1_56_3_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_56_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_56_4_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_56_4_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_56_4_address0 = grp_FIRE3_fu_2067_WEIGHT1_56_4_address0.read();
        } else {
            WEIGHT1_56_4_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_56_4_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_56_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_56_4_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_56_4_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_56_4_ce0 = grp_FIRE3_fu_2067_WEIGHT1_56_4_ce0.read();
        } else {
            WEIGHT1_56_4_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_56_4_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_56_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_56_4_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_56_4_we0.read();
    } else {
        WEIGHT1_56_4_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_56_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_56_5_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_56_5_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_56_5_address0 = grp_FIRE3_fu_2067_WEIGHT1_56_5_address0.read();
        } else {
            WEIGHT1_56_5_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_56_5_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_56_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_56_5_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_56_5_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_56_5_ce0 = grp_FIRE3_fu_2067_WEIGHT1_56_5_ce0.read();
        } else {
            WEIGHT1_56_5_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_56_5_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_56_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_56_5_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_56_5_we0.read();
    } else {
        WEIGHT1_56_5_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_56_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_56_6_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_56_6_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_56_6_address0 = grp_FIRE3_fu_2067_WEIGHT1_56_6_address0.read();
        } else {
            WEIGHT1_56_6_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_56_6_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_56_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_56_6_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_56_6_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_56_6_ce0 = grp_FIRE3_fu_2067_WEIGHT1_56_6_ce0.read();
        } else {
            WEIGHT1_56_6_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_56_6_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_56_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_56_6_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_56_6_we0.read();
    } else {
        WEIGHT1_56_6_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_57_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_57_0_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_57_0_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_57_0_address0 = grp_FIRE3_fu_2067_WEIGHT1_57_0_address0.read();
        } else {
            WEIGHT1_57_0_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_57_0_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_57_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_57_0_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_57_0_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_57_0_ce0 = grp_FIRE3_fu_2067_WEIGHT1_57_0_ce0.read();
        } else {
            WEIGHT1_57_0_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_57_0_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_57_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_57_0_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_57_0_we0.read();
    } else {
        WEIGHT1_57_0_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_57_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_57_1_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_57_1_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_57_1_address0 = grp_FIRE3_fu_2067_WEIGHT1_57_1_address0.read();
        } else {
            WEIGHT1_57_1_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_57_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_57_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_57_1_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_57_1_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_57_1_ce0 = grp_FIRE3_fu_2067_WEIGHT1_57_1_ce0.read();
        } else {
            WEIGHT1_57_1_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_57_1_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_57_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_57_1_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_57_1_we0.read();
    } else {
        WEIGHT1_57_1_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_57_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_57_2_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_57_2_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_57_2_address0 = grp_FIRE3_fu_2067_WEIGHT1_57_2_address0.read();
        } else {
            WEIGHT1_57_2_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_57_2_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_57_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_57_2_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_57_2_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_57_2_ce0 = grp_FIRE3_fu_2067_WEIGHT1_57_2_ce0.read();
        } else {
            WEIGHT1_57_2_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_57_2_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_57_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_57_2_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_57_2_we0.read();
    } else {
        WEIGHT1_57_2_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_57_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_57_3_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_57_3_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_57_3_address0 = grp_FIRE3_fu_2067_WEIGHT1_57_3_address0.read();
        } else {
            WEIGHT1_57_3_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_57_3_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_57_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_57_3_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_57_3_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_57_3_ce0 = grp_FIRE3_fu_2067_WEIGHT1_57_3_ce0.read();
        } else {
            WEIGHT1_57_3_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_57_3_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_57_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_57_3_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_57_3_we0.read();
    } else {
        WEIGHT1_57_3_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_57_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_57_4_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_57_4_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_57_4_address0 = grp_FIRE3_fu_2067_WEIGHT1_57_4_address0.read();
        } else {
            WEIGHT1_57_4_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_57_4_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_57_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_57_4_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_57_4_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_57_4_ce0 = grp_FIRE3_fu_2067_WEIGHT1_57_4_ce0.read();
        } else {
            WEIGHT1_57_4_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_57_4_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_57_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_57_4_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_57_4_we0.read();
    } else {
        WEIGHT1_57_4_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_57_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_57_5_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_57_5_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_57_5_address0 = grp_FIRE3_fu_2067_WEIGHT1_57_5_address0.read();
        } else {
            WEIGHT1_57_5_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_57_5_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_57_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_57_5_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_57_5_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_57_5_ce0 = grp_FIRE3_fu_2067_WEIGHT1_57_5_ce0.read();
        } else {
            WEIGHT1_57_5_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_57_5_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_57_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_57_5_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_57_5_we0.read();
    } else {
        WEIGHT1_57_5_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_57_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_57_6_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_57_6_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_57_6_address0 = grp_FIRE3_fu_2067_WEIGHT1_57_6_address0.read();
        } else {
            WEIGHT1_57_6_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_57_6_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_57_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_57_6_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_57_6_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_57_6_ce0 = grp_FIRE3_fu_2067_WEIGHT1_57_6_ce0.read();
        } else {
            WEIGHT1_57_6_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_57_6_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_57_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_57_6_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_57_6_we0.read();
    } else {
        WEIGHT1_57_6_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_58_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_58_0_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_58_0_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_58_0_address0 = grp_FIRE3_fu_2067_WEIGHT1_58_0_address0.read();
        } else {
            WEIGHT1_58_0_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_58_0_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_58_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_58_0_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_58_0_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_58_0_ce0 = grp_FIRE3_fu_2067_WEIGHT1_58_0_ce0.read();
        } else {
            WEIGHT1_58_0_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_58_0_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_58_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_58_0_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_58_0_we0.read();
    } else {
        WEIGHT1_58_0_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_58_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_58_1_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_58_1_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_58_1_address0 = grp_FIRE3_fu_2067_WEIGHT1_58_1_address0.read();
        } else {
            WEIGHT1_58_1_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_58_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_58_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_58_1_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_58_1_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_58_1_ce0 = grp_FIRE3_fu_2067_WEIGHT1_58_1_ce0.read();
        } else {
            WEIGHT1_58_1_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_58_1_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_58_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_58_1_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_58_1_we0.read();
    } else {
        WEIGHT1_58_1_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_58_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_58_2_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_58_2_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_58_2_address0 = grp_FIRE3_fu_2067_WEIGHT1_58_2_address0.read();
        } else {
            WEIGHT1_58_2_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_58_2_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_58_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_58_2_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_58_2_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_58_2_ce0 = grp_FIRE3_fu_2067_WEIGHT1_58_2_ce0.read();
        } else {
            WEIGHT1_58_2_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_58_2_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_58_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_58_2_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_58_2_we0.read();
    } else {
        WEIGHT1_58_2_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_58_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_58_3_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_58_3_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_58_3_address0 = grp_FIRE3_fu_2067_WEIGHT1_58_3_address0.read();
        } else {
            WEIGHT1_58_3_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_58_3_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_58_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_58_3_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_58_3_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_58_3_ce0 = grp_FIRE3_fu_2067_WEIGHT1_58_3_ce0.read();
        } else {
            WEIGHT1_58_3_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_58_3_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_58_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_58_3_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_58_3_we0.read();
    } else {
        WEIGHT1_58_3_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_58_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_58_4_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_58_4_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_58_4_address0 = grp_FIRE3_fu_2067_WEIGHT1_58_4_address0.read();
        } else {
            WEIGHT1_58_4_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_58_4_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_58_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_58_4_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_58_4_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_58_4_ce0 = grp_FIRE3_fu_2067_WEIGHT1_58_4_ce0.read();
        } else {
            WEIGHT1_58_4_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_58_4_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_58_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_58_4_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_58_4_we0.read();
    } else {
        WEIGHT1_58_4_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_58_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_58_5_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_58_5_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_58_5_address0 = grp_FIRE3_fu_2067_WEIGHT1_58_5_address0.read();
        } else {
            WEIGHT1_58_5_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_58_5_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_58_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_58_5_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_58_5_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_58_5_ce0 = grp_FIRE3_fu_2067_WEIGHT1_58_5_ce0.read();
        } else {
            WEIGHT1_58_5_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_58_5_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_58_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_58_5_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_58_5_we0.read();
    } else {
        WEIGHT1_58_5_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_58_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_58_6_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_58_6_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_58_6_address0 = grp_FIRE3_fu_2067_WEIGHT1_58_6_address0.read();
        } else {
            WEIGHT1_58_6_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_58_6_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_58_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_58_6_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_58_6_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_58_6_ce0 = grp_FIRE3_fu_2067_WEIGHT1_58_6_ce0.read();
        } else {
            WEIGHT1_58_6_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_58_6_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_58_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_58_6_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_58_6_we0.read();
    } else {
        WEIGHT1_58_6_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_59_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_59_0_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_59_0_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_59_0_address0 = grp_FIRE3_fu_2067_WEIGHT1_59_0_address0.read();
        } else {
            WEIGHT1_59_0_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_59_0_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_59_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_59_0_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_59_0_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_59_0_ce0 = grp_FIRE3_fu_2067_WEIGHT1_59_0_ce0.read();
        } else {
            WEIGHT1_59_0_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_59_0_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_59_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_59_0_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_59_0_we0.read();
    } else {
        WEIGHT1_59_0_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_59_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_59_1_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_59_1_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_59_1_address0 = grp_FIRE3_fu_2067_WEIGHT1_59_1_address0.read();
        } else {
            WEIGHT1_59_1_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_59_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_59_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_59_1_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_59_1_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_59_1_ce0 = grp_FIRE3_fu_2067_WEIGHT1_59_1_ce0.read();
        } else {
            WEIGHT1_59_1_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_59_1_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_59_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_59_1_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_59_1_we0.read();
    } else {
        WEIGHT1_59_1_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_59_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_59_2_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_59_2_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_59_2_address0 = grp_FIRE3_fu_2067_WEIGHT1_59_2_address0.read();
        } else {
            WEIGHT1_59_2_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_59_2_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_59_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_59_2_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_59_2_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_59_2_ce0 = grp_FIRE3_fu_2067_WEIGHT1_59_2_ce0.read();
        } else {
            WEIGHT1_59_2_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_59_2_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_59_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_59_2_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_59_2_we0.read();
    } else {
        WEIGHT1_59_2_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_59_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_59_3_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_59_3_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_59_3_address0 = grp_FIRE3_fu_2067_WEIGHT1_59_3_address0.read();
        } else {
            WEIGHT1_59_3_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_59_3_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_59_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_59_3_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_59_3_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_59_3_ce0 = grp_FIRE3_fu_2067_WEIGHT1_59_3_ce0.read();
        } else {
            WEIGHT1_59_3_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_59_3_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_59_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_59_3_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_59_3_we0.read();
    } else {
        WEIGHT1_59_3_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_59_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_59_4_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_59_4_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_59_4_address0 = grp_FIRE3_fu_2067_WEIGHT1_59_4_address0.read();
        } else {
            WEIGHT1_59_4_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_59_4_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_59_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_59_4_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_59_4_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_59_4_ce0 = grp_FIRE3_fu_2067_WEIGHT1_59_4_ce0.read();
        } else {
            WEIGHT1_59_4_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_59_4_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_59_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_59_4_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_59_4_we0.read();
    } else {
        WEIGHT1_59_4_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_59_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_59_5_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_59_5_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_59_5_address0 = grp_FIRE3_fu_2067_WEIGHT1_59_5_address0.read();
        } else {
            WEIGHT1_59_5_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_59_5_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_59_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_59_5_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_59_5_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_59_5_ce0 = grp_FIRE3_fu_2067_WEIGHT1_59_5_ce0.read();
        } else {
            WEIGHT1_59_5_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_59_5_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_59_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_59_5_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_59_5_we0.read();
    } else {
        WEIGHT1_59_5_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_59_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_59_6_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_59_6_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_59_6_address0 = grp_FIRE3_fu_2067_WEIGHT1_59_6_address0.read();
        } else {
            WEIGHT1_59_6_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_59_6_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_59_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_59_6_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_59_6_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_59_6_ce0 = grp_FIRE3_fu_2067_WEIGHT1_59_6_ce0.read();
        } else {
            WEIGHT1_59_6_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_59_6_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_59_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_59_6_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_59_6_we0.read();
    } else {
        WEIGHT1_59_6_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_5_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_5_0_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_5_0_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_5_0_address0 = grp_FIRE3_fu_2067_WEIGHT1_5_0_address0.read();
        } else {
            WEIGHT1_5_0_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_5_0_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_5_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_5_0_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_5_0_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_5_0_ce0 = grp_FIRE3_fu_2067_WEIGHT1_5_0_ce0.read();
        } else {
            WEIGHT1_5_0_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_5_0_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_5_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_5_0_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_5_0_we0.read();
    } else {
        WEIGHT1_5_0_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_5_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_5_1_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_5_1_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_5_1_address0 = grp_FIRE3_fu_2067_WEIGHT1_5_1_address0.read();
        } else {
            WEIGHT1_5_1_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_5_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_5_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_5_1_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_5_1_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_5_1_ce0 = grp_FIRE3_fu_2067_WEIGHT1_5_1_ce0.read();
        } else {
            WEIGHT1_5_1_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_5_1_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_5_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_5_1_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_5_1_we0.read();
    } else {
        WEIGHT1_5_1_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_5_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_5_2_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_5_2_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_5_2_address0 = grp_FIRE3_fu_2067_WEIGHT1_5_2_address0.read();
        } else {
            WEIGHT1_5_2_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_5_2_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_5_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_5_2_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_5_2_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_5_2_ce0 = grp_FIRE3_fu_2067_WEIGHT1_5_2_ce0.read();
        } else {
            WEIGHT1_5_2_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_5_2_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_5_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_5_2_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_5_2_we0.read();
    } else {
        WEIGHT1_5_2_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_5_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_5_3_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_5_3_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_5_3_address0 = grp_FIRE3_fu_2067_WEIGHT1_5_3_address0.read();
        } else {
            WEIGHT1_5_3_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_5_3_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_5_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_5_3_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_5_3_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_5_3_ce0 = grp_FIRE3_fu_2067_WEIGHT1_5_3_ce0.read();
        } else {
            WEIGHT1_5_3_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_5_3_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_5_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_5_3_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_5_3_we0.read();
    } else {
        WEIGHT1_5_3_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_5_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_5_4_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_5_4_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_5_4_address0 = grp_FIRE3_fu_2067_WEIGHT1_5_4_address0.read();
        } else {
            WEIGHT1_5_4_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_5_4_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_5_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_5_4_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_5_4_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_5_4_ce0 = grp_FIRE3_fu_2067_WEIGHT1_5_4_ce0.read();
        } else {
            WEIGHT1_5_4_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_5_4_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_5_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_5_4_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_5_4_we0.read();
    } else {
        WEIGHT1_5_4_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_5_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_5_5_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_5_5_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_5_5_address0 = grp_FIRE3_fu_2067_WEIGHT1_5_5_address0.read();
        } else {
            WEIGHT1_5_5_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_5_5_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_5_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_5_5_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_5_5_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_5_5_ce0 = grp_FIRE3_fu_2067_WEIGHT1_5_5_ce0.read();
        } else {
            WEIGHT1_5_5_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_5_5_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_5_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_5_5_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_5_5_we0.read();
    } else {
        WEIGHT1_5_5_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_5_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_5_6_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_5_6_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_5_6_address0 = grp_FIRE3_fu_2067_WEIGHT1_5_6_address0.read();
        } else {
            WEIGHT1_5_6_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_5_6_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_5_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_5_6_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_5_6_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_5_6_ce0 = grp_FIRE3_fu_2067_WEIGHT1_5_6_ce0.read();
        } else {
            WEIGHT1_5_6_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_5_6_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_5_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_5_6_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_5_6_we0.read();
    } else {
        WEIGHT1_5_6_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_60_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_60_0_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_60_0_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_60_0_address0 = grp_FIRE3_fu_2067_WEIGHT1_60_0_address0.read();
        } else {
            WEIGHT1_60_0_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_60_0_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_60_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_60_0_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_60_0_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_60_0_ce0 = grp_FIRE3_fu_2067_WEIGHT1_60_0_ce0.read();
        } else {
            WEIGHT1_60_0_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_60_0_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_60_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_60_0_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_60_0_we0.read();
    } else {
        WEIGHT1_60_0_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_60_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_60_1_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_60_1_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_60_1_address0 = grp_FIRE3_fu_2067_WEIGHT1_60_1_address0.read();
        } else {
            WEIGHT1_60_1_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_60_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_60_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_60_1_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_60_1_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_60_1_ce0 = grp_FIRE3_fu_2067_WEIGHT1_60_1_ce0.read();
        } else {
            WEIGHT1_60_1_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_60_1_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_60_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_60_1_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_60_1_we0.read();
    } else {
        WEIGHT1_60_1_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_60_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_60_2_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_60_2_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_60_2_address0 = grp_FIRE3_fu_2067_WEIGHT1_60_2_address0.read();
        } else {
            WEIGHT1_60_2_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_60_2_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_60_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_60_2_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_60_2_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_60_2_ce0 = grp_FIRE3_fu_2067_WEIGHT1_60_2_ce0.read();
        } else {
            WEIGHT1_60_2_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_60_2_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_60_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_60_2_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_60_2_we0.read();
    } else {
        WEIGHT1_60_2_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_60_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_60_3_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_60_3_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_60_3_address0 = grp_FIRE3_fu_2067_WEIGHT1_60_3_address0.read();
        } else {
            WEIGHT1_60_3_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_60_3_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_60_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_60_3_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_60_3_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_60_3_ce0 = grp_FIRE3_fu_2067_WEIGHT1_60_3_ce0.read();
        } else {
            WEIGHT1_60_3_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_60_3_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_60_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_60_3_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_60_3_we0.read();
    } else {
        WEIGHT1_60_3_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_60_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_60_4_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_60_4_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_60_4_address0 = grp_FIRE3_fu_2067_WEIGHT1_60_4_address0.read();
        } else {
            WEIGHT1_60_4_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_60_4_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_60_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_60_4_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_60_4_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_60_4_ce0 = grp_FIRE3_fu_2067_WEIGHT1_60_4_ce0.read();
        } else {
            WEIGHT1_60_4_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_60_4_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_60_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_60_4_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_60_4_we0.read();
    } else {
        WEIGHT1_60_4_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_60_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_60_5_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_60_5_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_60_5_address0 = grp_FIRE3_fu_2067_WEIGHT1_60_5_address0.read();
        } else {
            WEIGHT1_60_5_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_60_5_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_60_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_60_5_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_60_5_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_60_5_ce0 = grp_FIRE3_fu_2067_WEIGHT1_60_5_ce0.read();
        } else {
            WEIGHT1_60_5_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_60_5_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_60_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_60_5_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_60_5_we0.read();
    } else {
        WEIGHT1_60_5_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_60_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_60_6_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_60_6_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_60_6_address0 = grp_FIRE3_fu_2067_WEIGHT1_60_6_address0.read();
        } else {
            WEIGHT1_60_6_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_60_6_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_60_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_60_6_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_60_6_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_60_6_ce0 = grp_FIRE3_fu_2067_WEIGHT1_60_6_ce0.read();
        } else {
            WEIGHT1_60_6_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_60_6_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_60_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_60_6_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_60_6_we0.read();
    } else {
        WEIGHT1_60_6_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_61_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_61_0_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_61_0_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_61_0_address0 = grp_FIRE3_fu_2067_WEIGHT1_61_0_address0.read();
        } else {
            WEIGHT1_61_0_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_61_0_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_61_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_61_0_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_61_0_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_61_0_ce0 = grp_FIRE3_fu_2067_WEIGHT1_61_0_ce0.read();
        } else {
            WEIGHT1_61_0_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_61_0_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_61_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_61_0_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_61_0_we0.read();
    } else {
        WEIGHT1_61_0_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_61_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_61_1_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_61_1_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_61_1_address0 = grp_FIRE3_fu_2067_WEIGHT1_61_1_address0.read();
        } else {
            WEIGHT1_61_1_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_61_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_61_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_61_1_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_61_1_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_61_1_ce0 = grp_FIRE3_fu_2067_WEIGHT1_61_1_ce0.read();
        } else {
            WEIGHT1_61_1_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_61_1_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_61_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_61_1_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_61_1_we0.read();
    } else {
        WEIGHT1_61_1_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_61_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_61_2_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_61_2_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_61_2_address0 = grp_FIRE3_fu_2067_WEIGHT1_61_2_address0.read();
        } else {
            WEIGHT1_61_2_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_61_2_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_61_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_61_2_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_61_2_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_61_2_ce0 = grp_FIRE3_fu_2067_WEIGHT1_61_2_ce0.read();
        } else {
            WEIGHT1_61_2_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_61_2_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_61_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_61_2_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_61_2_we0.read();
    } else {
        WEIGHT1_61_2_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_61_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_61_3_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_61_3_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_61_3_address0 = grp_FIRE3_fu_2067_WEIGHT1_61_3_address0.read();
        } else {
            WEIGHT1_61_3_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_61_3_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_61_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_61_3_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_61_3_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_61_3_ce0 = grp_FIRE3_fu_2067_WEIGHT1_61_3_ce0.read();
        } else {
            WEIGHT1_61_3_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_61_3_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_61_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_61_3_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_61_3_we0.read();
    } else {
        WEIGHT1_61_3_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_61_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_61_4_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_61_4_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_61_4_address0 = grp_FIRE3_fu_2067_WEIGHT1_61_4_address0.read();
        } else {
            WEIGHT1_61_4_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_61_4_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_61_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_61_4_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_61_4_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_61_4_ce0 = grp_FIRE3_fu_2067_WEIGHT1_61_4_ce0.read();
        } else {
            WEIGHT1_61_4_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_61_4_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_61_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_61_4_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_61_4_we0.read();
    } else {
        WEIGHT1_61_4_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_61_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_61_5_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_61_5_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_61_5_address0 = grp_FIRE3_fu_2067_WEIGHT1_61_5_address0.read();
        } else {
            WEIGHT1_61_5_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_61_5_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_61_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_61_5_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_61_5_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_61_5_ce0 = grp_FIRE3_fu_2067_WEIGHT1_61_5_ce0.read();
        } else {
            WEIGHT1_61_5_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_61_5_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_61_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_61_5_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_61_5_we0.read();
    } else {
        WEIGHT1_61_5_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_61_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_61_6_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_61_6_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_61_6_address0 = grp_FIRE3_fu_2067_WEIGHT1_61_6_address0.read();
        } else {
            WEIGHT1_61_6_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_61_6_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_61_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_61_6_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_61_6_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_61_6_ce0 = grp_FIRE3_fu_2067_WEIGHT1_61_6_ce0.read();
        } else {
            WEIGHT1_61_6_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_61_6_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_61_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_61_6_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_61_6_we0.read();
    } else {
        WEIGHT1_61_6_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_62_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_62_0_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_62_0_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_62_0_address0 = grp_FIRE3_fu_2067_WEIGHT1_62_0_address0.read();
        } else {
            WEIGHT1_62_0_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_62_0_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_62_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_62_0_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_62_0_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_62_0_ce0 = grp_FIRE3_fu_2067_WEIGHT1_62_0_ce0.read();
        } else {
            WEIGHT1_62_0_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_62_0_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_62_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_62_0_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_62_0_we0.read();
    } else {
        WEIGHT1_62_0_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_62_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_62_1_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_62_1_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_62_1_address0 = grp_FIRE3_fu_2067_WEIGHT1_62_1_address0.read();
        } else {
            WEIGHT1_62_1_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_62_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_62_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_62_1_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_62_1_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_62_1_ce0 = grp_FIRE3_fu_2067_WEIGHT1_62_1_ce0.read();
        } else {
            WEIGHT1_62_1_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_62_1_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_62_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_62_1_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_62_1_we0.read();
    } else {
        WEIGHT1_62_1_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_62_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_62_2_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_62_2_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_62_2_address0 = grp_FIRE3_fu_2067_WEIGHT1_62_2_address0.read();
        } else {
            WEIGHT1_62_2_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_62_2_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_62_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_62_2_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_62_2_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_62_2_ce0 = grp_FIRE3_fu_2067_WEIGHT1_62_2_ce0.read();
        } else {
            WEIGHT1_62_2_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_62_2_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_62_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_62_2_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_62_2_we0.read();
    } else {
        WEIGHT1_62_2_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_62_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_62_3_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_62_3_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_62_3_address0 = grp_FIRE3_fu_2067_WEIGHT1_62_3_address0.read();
        } else {
            WEIGHT1_62_3_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_62_3_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_62_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_62_3_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_62_3_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_62_3_ce0 = grp_FIRE3_fu_2067_WEIGHT1_62_3_ce0.read();
        } else {
            WEIGHT1_62_3_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_62_3_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_62_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_62_3_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_62_3_we0.read();
    } else {
        WEIGHT1_62_3_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_62_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_62_4_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_62_4_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_62_4_address0 = grp_FIRE3_fu_2067_WEIGHT1_62_4_address0.read();
        } else {
            WEIGHT1_62_4_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_62_4_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_62_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_62_4_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_62_4_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_62_4_ce0 = grp_FIRE3_fu_2067_WEIGHT1_62_4_ce0.read();
        } else {
            WEIGHT1_62_4_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_62_4_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_62_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_62_4_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_62_4_we0.read();
    } else {
        WEIGHT1_62_4_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_62_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_62_5_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_62_5_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_62_5_address0 = grp_FIRE3_fu_2067_WEIGHT1_62_5_address0.read();
        } else {
            WEIGHT1_62_5_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_62_5_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_62_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_62_5_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_62_5_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_62_5_ce0 = grp_FIRE3_fu_2067_WEIGHT1_62_5_ce0.read();
        } else {
            WEIGHT1_62_5_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_62_5_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_62_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_62_5_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_62_5_we0.read();
    } else {
        WEIGHT1_62_5_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_62_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_62_6_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_62_6_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_62_6_address0 = grp_FIRE3_fu_2067_WEIGHT1_62_6_address0.read();
        } else {
            WEIGHT1_62_6_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_62_6_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_62_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_62_6_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_62_6_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_62_6_ce0 = grp_FIRE3_fu_2067_WEIGHT1_62_6_ce0.read();
        } else {
            WEIGHT1_62_6_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_62_6_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_62_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_62_6_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_62_6_we0.read();
    } else {
        WEIGHT1_62_6_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_63_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_63_0_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_63_0_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_63_0_address0 = grp_FIRE3_fu_2067_WEIGHT1_63_0_address0.read();
        } else {
            WEIGHT1_63_0_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_63_0_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_63_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_63_0_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_63_0_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_63_0_ce0 = grp_FIRE3_fu_2067_WEIGHT1_63_0_ce0.read();
        } else {
            WEIGHT1_63_0_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_63_0_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_63_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_63_0_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_63_0_we0.read();
    } else {
        WEIGHT1_63_0_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_63_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_63_1_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_63_1_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_63_1_address0 = grp_FIRE3_fu_2067_WEIGHT1_63_1_address0.read();
        } else {
            WEIGHT1_63_1_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_63_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_63_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_63_1_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_63_1_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_63_1_ce0 = grp_FIRE3_fu_2067_WEIGHT1_63_1_ce0.read();
        } else {
            WEIGHT1_63_1_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_63_1_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_63_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_63_1_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_63_1_we0.read();
    } else {
        WEIGHT1_63_1_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_63_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_63_2_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_63_2_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_63_2_address0 = grp_FIRE3_fu_2067_WEIGHT1_63_2_address0.read();
        } else {
            WEIGHT1_63_2_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_63_2_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_63_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_63_2_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_63_2_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_63_2_ce0 = grp_FIRE3_fu_2067_WEIGHT1_63_2_ce0.read();
        } else {
            WEIGHT1_63_2_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_63_2_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_63_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_63_2_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_63_2_we0.read();
    } else {
        WEIGHT1_63_2_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_63_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_63_3_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_63_3_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_63_3_address0 = grp_FIRE3_fu_2067_WEIGHT1_63_3_address0.read();
        } else {
            WEIGHT1_63_3_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_63_3_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_63_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_63_3_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_63_3_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_63_3_ce0 = grp_FIRE3_fu_2067_WEIGHT1_63_3_ce0.read();
        } else {
            WEIGHT1_63_3_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_63_3_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_63_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_63_3_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_63_3_we0.read();
    } else {
        WEIGHT1_63_3_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_63_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_63_4_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_63_4_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_63_4_address0 = grp_FIRE3_fu_2067_WEIGHT1_63_4_address0.read();
        } else {
            WEIGHT1_63_4_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_63_4_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_63_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_63_4_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_63_4_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_63_4_ce0 = grp_FIRE3_fu_2067_WEIGHT1_63_4_ce0.read();
        } else {
            WEIGHT1_63_4_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_63_4_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_63_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_63_4_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_63_4_we0.read();
    } else {
        WEIGHT1_63_4_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_63_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_63_5_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_63_5_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_63_5_address0 = grp_FIRE3_fu_2067_WEIGHT1_63_5_address0.read();
        } else {
            WEIGHT1_63_5_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_63_5_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_63_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_63_5_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_63_5_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_63_5_ce0 = grp_FIRE3_fu_2067_WEIGHT1_63_5_ce0.read();
        } else {
            WEIGHT1_63_5_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_63_5_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_63_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_63_5_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_63_5_we0.read();
    } else {
        WEIGHT1_63_5_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_63_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_63_6_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_63_6_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_63_6_address0 = grp_FIRE3_fu_2067_WEIGHT1_63_6_address0.read();
        } else {
            WEIGHT1_63_6_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_63_6_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_63_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_63_6_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_63_6_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_63_6_ce0 = grp_FIRE3_fu_2067_WEIGHT1_63_6_ce0.read();
        } else {
            WEIGHT1_63_6_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_63_6_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_63_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_63_6_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_63_6_we0.read();
    } else {
        WEIGHT1_63_6_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_6_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_6_0_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_6_0_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_6_0_address0 = grp_FIRE3_fu_2067_WEIGHT1_6_0_address0.read();
        } else {
            WEIGHT1_6_0_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_6_0_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_6_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_6_0_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_6_0_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_6_0_ce0 = grp_FIRE3_fu_2067_WEIGHT1_6_0_ce0.read();
        } else {
            WEIGHT1_6_0_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_6_0_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_6_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_6_0_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_6_0_we0.read();
    } else {
        WEIGHT1_6_0_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_6_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_6_1_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_6_1_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_6_1_address0 = grp_FIRE3_fu_2067_WEIGHT1_6_1_address0.read();
        } else {
            WEIGHT1_6_1_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_6_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_6_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_6_1_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_6_1_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_6_1_ce0 = grp_FIRE3_fu_2067_WEIGHT1_6_1_ce0.read();
        } else {
            WEIGHT1_6_1_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_6_1_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_6_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_6_1_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_6_1_we0.read();
    } else {
        WEIGHT1_6_1_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_6_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_6_2_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_6_2_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_6_2_address0 = grp_FIRE3_fu_2067_WEIGHT1_6_2_address0.read();
        } else {
            WEIGHT1_6_2_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_6_2_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_6_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_6_2_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_6_2_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_6_2_ce0 = grp_FIRE3_fu_2067_WEIGHT1_6_2_ce0.read();
        } else {
            WEIGHT1_6_2_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_6_2_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_6_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_6_2_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_6_2_we0.read();
    } else {
        WEIGHT1_6_2_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_6_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_6_3_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_6_3_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_6_3_address0 = grp_FIRE3_fu_2067_WEIGHT1_6_3_address0.read();
        } else {
            WEIGHT1_6_3_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_6_3_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_6_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_6_3_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_6_3_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_6_3_ce0 = grp_FIRE3_fu_2067_WEIGHT1_6_3_ce0.read();
        } else {
            WEIGHT1_6_3_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_6_3_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_6_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_6_3_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_6_3_we0.read();
    } else {
        WEIGHT1_6_3_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_6_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_6_4_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_6_4_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_6_4_address0 = grp_FIRE3_fu_2067_WEIGHT1_6_4_address0.read();
        } else {
            WEIGHT1_6_4_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_6_4_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_6_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_6_4_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_6_4_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_6_4_ce0 = grp_FIRE3_fu_2067_WEIGHT1_6_4_ce0.read();
        } else {
            WEIGHT1_6_4_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_6_4_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_6_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_6_4_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_6_4_we0.read();
    } else {
        WEIGHT1_6_4_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_6_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_6_5_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_6_5_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_6_5_address0 = grp_FIRE3_fu_2067_WEIGHT1_6_5_address0.read();
        } else {
            WEIGHT1_6_5_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_6_5_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_6_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_6_5_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_6_5_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_6_5_ce0 = grp_FIRE3_fu_2067_WEIGHT1_6_5_ce0.read();
        } else {
            WEIGHT1_6_5_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_6_5_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_6_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_6_5_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_6_5_we0.read();
    } else {
        WEIGHT1_6_5_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_6_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_6_6_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_6_6_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_6_6_address0 = grp_FIRE3_fu_2067_WEIGHT1_6_6_address0.read();
        } else {
            WEIGHT1_6_6_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_6_6_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_6_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_6_6_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_6_6_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_6_6_ce0 = grp_FIRE3_fu_2067_WEIGHT1_6_6_ce0.read();
        } else {
            WEIGHT1_6_6_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_6_6_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_6_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_6_6_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_6_6_we0.read();
    } else {
        WEIGHT1_6_6_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_7_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_7_0_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_7_0_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_7_0_address0 = grp_FIRE3_fu_2067_WEIGHT1_7_0_address0.read();
        } else {
            WEIGHT1_7_0_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_7_0_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_7_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_7_0_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_7_0_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_7_0_ce0 = grp_FIRE3_fu_2067_WEIGHT1_7_0_ce0.read();
        } else {
            WEIGHT1_7_0_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_7_0_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_7_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_7_0_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_7_0_we0.read();
    } else {
        WEIGHT1_7_0_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_7_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_7_1_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_7_1_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_7_1_address0 = grp_FIRE3_fu_2067_WEIGHT1_7_1_address0.read();
        } else {
            WEIGHT1_7_1_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_7_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_7_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_7_1_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_7_1_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_7_1_ce0 = grp_FIRE3_fu_2067_WEIGHT1_7_1_ce0.read();
        } else {
            WEIGHT1_7_1_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_7_1_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_7_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_7_1_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_7_1_we0.read();
    } else {
        WEIGHT1_7_1_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_7_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_7_2_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_7_2_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_7_2_address0 = grp_FIRE3_fu_2067_WEIGHT1_7_2_address0.read();
        } else {
            WEIGHT1_7_2_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_7_2_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_7_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_7_2_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_7_2_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_7_2_ce0 = grp_FIRE3_fu_2067_WEIGHT1_7_2_ce0.read();
        } else {
            WEIGHT1_7_2_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_7_2_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_7_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_7_2_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_7_2_we0.read();
    } else {
        WEIGHT1_7_2_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_7_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_7_3_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_7_3_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_7_3_address0 = grp_FIRE3_fu_2067_WEIGHT1_7_3_address0.read();
        } else {
            WEIGHT1_7_3_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_7_3_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_7_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_7_3_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_7_3_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_7_3_ce0 = grp_FIRE3_fu_2067_WEIGHT1_7_3_ce0.read();
        } else {
            WEIGHT1_7_3_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_7_3_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_7_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_7_3_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_7_3_we0.read();
    } else {
        WEIGHT1_7_3_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_7_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_7_4_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_7_4_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_7_4_address0 = grp_FIRE3_fu_2067_WEIGHT1_7_4_address0.read();
        } else {
            WEIGHT1_7_4_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_7_4_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_7_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_7_4_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_7_4_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_7_4_ce0 = grp_FIRE3_fu_2067_WEIGHT1_7_4_ce0.read();
        } else {
            WEIGHT1_7_4_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_7_4_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_7_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_7_4_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_7_4_we0.read();
    } else {
        WEIGHT1_7_4_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_7_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_7_5_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_7_5_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_7_5_address0 = grp_FIRE3_fu_2067_WEIGHT1_7_5_address0.read();
        } else {
            WEIGHT1_7_5_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_7_5_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_7_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_7_5_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_7_5_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_7_5_ce0 = grp_FIRE3_fu_2067_WEIGHT1_7_5_ce0.read();
        } else {
            WEIGHT1_7_5_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_7_5_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_7_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_7_5_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_7_5_we0.read();
    } else {
        WEIGHT1_7_5_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_7_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_7_6_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_7_6_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_7_6_address0 = grp_FIRE3_fu_2067_WEIGHT1_7_6_address0.read();
        } else {
            WEIGHT1_7_6_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_7_6_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_7_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_7_6_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_7_6_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_7_6_ce0 = grp_FIRE3_fu_2067_WEIGHT1_7_6_ce0.read();
        } else {
            WEIGHT1_7_6_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_7_6_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_7_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_7_6_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_7_6_we0.read();
    } else {
        WEIGHT1_7_6_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_8_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_8_0_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_8_0_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_8_0_address0 = grp_FIRE3_fu_2067_WEIGHT1_8_0_address0.read();
        } else {
            WEIGHT1_8_0_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_8_0_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_8_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_8_0_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_8_0_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_8_0_ce0 = grp_FIRE3_fu_2067_WEIGHT1_8_0_ce0.read();
        } else {
            WEIGHT1_8_0_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_8_0_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_8_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_8_0_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_8_0_we0.read();
    } else {
        WEIGHT1_8_0_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_8_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_8_1_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_8_1_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_8_1_address0 = grp_FIRE3_fu_2067_WEIGHT1_8_1_address0.read();
        } else {
            WEIGHT1_8_1_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_8_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_8_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_8_1_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_8_1_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_8_1_ce0 = grp_FIRE3_fu_2067_WEIGHT1_8_1_ce0.read();
        } else {
            WEIGHT1_8_1_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_8_1_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_8_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_8_1_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_8_1_we0.read();
    } else {
        WEIGHT1_8_1_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_8_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_8_2_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_8_2_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_8_2_address0 = grp_FIRE3_fu_2067_WEIGHT1_8_2_address0.read();
        } else {
            WEIGHT1_8_2_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_8_2_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_8_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_8_2_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_8_2_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_8_2_ce0 = grp_FIRE3_fu_2067_WEIGHT1_8_2_ce0.read();
        } else {
            WEIGHT1_8_2_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_8_2_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_8_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_8_2_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_8_2_we0.read();
    } else {
        WEIGHT1_8_2_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_8_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_8_3_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_8_3_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_8_3_address0 = grp_FIRE3_fu_2067_WEIGHT1_8_3_address0.read();
        } else {
            WEIGHT1_8_3_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_8_3_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_8_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_8_3_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_8_3_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_8_3_ce0 = grp_FIRE3_fu_2067_WEIGHT1_8_3_ce0.read();
        } else {
            WEIGHT1_8_3_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_8_3_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_8_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_8_3_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_8_3_we0.read();
    } else {
        WEIGHT1_8_3_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_8_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_8_4_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_8_4_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_8_4_address0 = grp_FIRE3_fu_2067_WEIGHT1_8_4_address0.read();
        } else {
            WEIGHT1_8_4_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_8_4_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_8_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_8_4_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_8_4_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_8_4_ce0 = grp_FIRE3_fu_2067_WEIGHT1_8_4_ce0.read();
        } else {
            WEIGHT1_8_4_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_8_4_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_8_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_8_4_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_8_4_we0.read();
    } else {
        WEIGHT1_8_4_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_8_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_8_5_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_8_5_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_8_5_address0 = grp_FIRE3_fu_2067_WEIGHT1_8_5_address0.read();
        } else {
            WEIGHT1_8_5_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_8_5_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_8_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_8_5_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_8_5_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_8_5_ce0 = grp_FIRE3_fu_2067_WEIGHT1_8_5_ce0.read();
        } else {
            WEIGHT1_8_5_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_8_5_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_8_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_8_5_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_8_5_we0.read();
    } else {
        WEIGHT1_8_5_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_8_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_8_6_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_8_6_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_8_6_address0 = grp_FIRE3_fu_2067_WEIGHT1_8_6_address0.read();
        } else {
            WEIGHT1_8_6_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_8_6_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_8_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_8_6_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_8_6_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_8_6_ce0 = grp_FIRE3_fu_2067_WEIGHT1_8_6_ce0.read();
        } else {
            WEIGHT1_8_6_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_8_6_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_8_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_8_6_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_8_6_we0.read();
    } else {
        WEIGHT1_8_6_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_9_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_9_0_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_9_0_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_9_0_address0 = grp_FIRE3_fu_2067_WEIGHT1_9_0_address0.read();
        } else {
            WEIGHT1_9_0_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_9_0_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_9_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_9_0_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_9_0_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_9_0_ce0 = grp_FIRE3_fu_2067_WEIGHT1_9_0_ce0.read();
        } else {
            WEIGHT1_9_0_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_9_0_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_9_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_9_0_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_9_0_we0.read();
    } else {
        WEIGHT1_9_0_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_9_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_9_1_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_9_1_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_9_1_address0 = grp_FIRE3_fu_2067_WEIGHT1_9_1_address0.read();
        } else {
            WEIGHT1_9_1_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_9_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_9_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_9_1_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_9_1_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_9_1_ce0 = grp_FIRE3_fu_2067_WEIGHT1_9_1_ce0.read();
        } else {
            WEIGHT1_9_1_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_9_1_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_9_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_9_1_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_9_1_we0.read();
    } else {
        WEIGHT1_9_1_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_9_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_9_2_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_9_2_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_9_2_address0 = grp_FIRE3_fu_2067_WEIGHT1_9_2_address0.read();
        } else {
            WEIGHT1_9_2_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_9_2_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_9_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_9_2_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_9_2_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_9_2_ce0 = grp_FIRE3_fu_2067_WEIGHT1_9_2_ce0.read();
        } else {
            WEIGHT1_9_2_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_9_2_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_9_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_9_2_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_9_2_we0.read();
    } else {
        WEIGHT1_9_2_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_9_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_9_3_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_9_3_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_9_3_address0 = grp_FIRE3_fu_2067_WEIGHT1_9_3_address0.read();
        } else {
            WEIGHT1_9_3_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_9_3_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_9_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_9_3_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_9_3_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_9_3_ce0 = grp_FIRE3_fu_2067_WEIGHT1_9_3_ce0.read();
        } else {
            WEIGHT1_9_3_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_9_3_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_9_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_9_3_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_9_3_we0.read();
    } else {
        WEIGHT1_9_3_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_9_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_9_4_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_9_4_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_9_4_address0 = grp_FIRE3_fu_2067_WEIGHT1_9_4_address0.read();
        } else {
            WEIGHT1_9_4_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_9_4_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_9_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_9_4_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_9_4_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_9_4_ce0 = grp_FIRE3_fu_2067_WEIGHT1_9_4_ce0.read();
        } else {
            WEIGHT1_9_4_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_9_4_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_9_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_9_4_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_9_4_we0.read();
    } else {
        WEIGHT1_9_4_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_9_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_9_5_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_9_5_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_9_5_address0 = grp_FIRE3_fu_2067_WEIGHT1_9_5_address0.read();
        } else {
            WEIGHT1_9_5_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_9_5_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_9_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_9_5_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_9_5_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_9_5_ce0 = grp_FIRE3_fu_2067_WEIGHT1_9_5_ce0.read();
        } else {
            WEIGHT1_9_5_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_9_5_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_9_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_9_5_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_9_5_we0.read();
    } else {
        WEIGHT1_9_5_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_9_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_9_6_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_9_6_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_9_6_address0 = grp_FIRE3_fu_2067_WEIGHT1_9_6_address0.read();
        } else {
            WEIGHT1_9_6_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_9_6_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_9_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_9_6_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_9_6_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_9_6_ce0 = grp_FIRE3_fu_2067_WEIGHT1_9_6_ce0.read();
        } else {
            WEIGHT1_9_6_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_9_6_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_9_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_9_6_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_9_6_we0.read();
    } else {
        WEIGHT1_9_6_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_0_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_0_0_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_0_0_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_0_0_address0 = grp_FIRE3_fu_2067_WEIGHT1_0_0_address0.read();
        } else {
            WEIGHT1_DB_0_0_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_0_0_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_0_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_0_0_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_0_0_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_0_0_ce0 = grp_FIRE3_fu_2067_WEIGHT1_0_0_ce0.read();
        } else {
            WEIGHT1_DB_0_0_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_0_0_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_0_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_0_0_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_0_0_we0.read();
    } else {
        WEIGHT1_DB_0_0_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_0_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_0_1_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_0_1_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_0_1_address0 = grp_FIRE3_fu_2067_WEIGHT1_0_1_address0.read();
        } else {
            WEIGHT1_DB_0_1_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_0_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_0_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_0_1_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_0_1_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_0_1_ce0 = grp_FIRE3_fu_2067_WEIGHT1_0_1_ce0.read();
        } else {
            WEIGHT1_DB_0_1_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_0_1_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_0_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_0_1_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_0_1_we0.read();
    } else {
        WEIGHT1_DB_0_1_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_0_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_0_2_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_0_2_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_0_2_address0 = grp_FIRE3_fu_2067_WEIGHT1_0_2_address0.read();
        } else {
            WEIGHT1_DB_0_2_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_0_2_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_0_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_0_2_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_0_2_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_0_2_ce0 = grp_FIRE3_fu_2067_WEIGHT1_0_2_ce0.read();
        } else {
            WEIGHT1_DB_0_2_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_0_2_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_0_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_0_2_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_0_2_we0.read();
    } else {
        WEIGHT1_DB_0_2_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_0_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_0_3_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_0_3_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_0_3_address0 = grp_FIRE3_fu_2067_WEIGHT1_0_3_address0.read();
        } else {
            WEIGHT1_DB_0_3_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_0_3_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_0_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_0_3_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_0_3_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_0_3_ce0 = grp_FIRE3_fu_2067_WEIGHT1_0_3_ce0.read();
        } else {
            WEIGHT1_DB_0_3_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_0_3_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_0_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_0_3_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_0_3_we0.read();
    } else {
        WEIGHT1_DB_0_3_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_0_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_0_4_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_0_4_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_0_4_address0 = grp_FIRE3_fu_2067_WEIGHT1_0_4_address0.read();
        } else {
            WEIGHT1_DB_0_4_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_0_4_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_0_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_0_4_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_0_4_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_0_4_ce0 = grp_FIRE3_fu_2067_WEIGHT1_0_4_ce0.read();
        } else {
            WEIGHT1_DB_0_4_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_0_4_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_0_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_0_4_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_0_4_we0.read();
    } else {
        WEIGHT1_DB_0_4_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_0_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_0_5_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_0_5_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_0_5_address0 = grp_FIRE3_fu_2067_WEIGHT1_0_5_address0.read();
        } else {
            WEIGHT1_DB_0_5_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_0_5_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_0_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_0_5_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_0_5_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_0_5_ce0 = grp_FIRE3_fu_2067_WEIGHT1_0_5_ce0.read();
        } else {
            WEIGHT1_DB_0_5_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_0_5_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_0_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_0_5_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_0_5_we0.read();
    } else {
        WEIGHT1_DB_0_5_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_0_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_0_6_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_0_6_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_0_6_address0 = grp_FIRE3_fu_2067_WEIGHT1_0_6_address0.read();
        } else {
            WEIGHT1_DB_0_6_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_0_6_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_0_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_0_6_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_0_6_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_0_6_ce0 = grp_FIRE3_fu_2067_WEIGHT1_0_6_ce0.read();
        } else {
            WEIGHT1_DB_0_6_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_0_6_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_0_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_0_6_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_0_6_we0.read();
    } else {
        WEIGHT1_DB_0_6_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_10_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_10_0_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_10_0_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_10_0_address0 = grp_FIRE3_fu_2067_WEIGHT1_10_0_address0.read();
        } else {
            WEIGHT1_DB_10_0_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_10_0_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_10_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_10_0_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_10_0_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_10_0_ce0 = grp_FIRE3_fu_2067_WEIGHT1_10_0_ce0.read();
        } else {
            WEIGHT1_DB_10_0_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_10_0_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_10_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_10_0_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_10_0_we0.read();
    } else {
        WEIGHT1_DB_10_0_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_10_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_10_1_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_10_1_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_10_1_address0 = grp_FIRE3_fu_2067_WEIGHT1_10_1_address0.read();
        } else {
            WEIGHT1_DB_10_1_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_10_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_10_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_10_1_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_10_1_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_10_1_ce0 = grp_FIRE3_fu_2067_WEIGHT1_10_1_ce0.read();
        } else {
            WEIGHT1_DB_10_1_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_10_1_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_10_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_10_1_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_10_1_we0.read();
    } else {
        WEIGHT1_DB_10_1_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_10_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_10_2_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_10_2_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_10_2_address0 = grp_FIRE3_fu_2067_WEIGHT1_10_2_address0.read();
        } else {
            WEIGHT1_DB_10_2_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_10_2_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_10_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_10_2_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_10_2_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_10_2_ce0 = grp_FIRE3_fu_2067_WEIGHT1_10_2_ce0.read();
        } else {
            WEIGHT1_DB_10_2_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_10_2_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_10_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_10_2_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_10_2_we0.read();
    } else {
        WEIGHT1_DB_10_2_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_10_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_10_3_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_10_3_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_10_3_address0 = grp_FIRE3_fu_2067_WEIGHT1_10_3_address0.read();
        } else {
            WEIGHT1_DB_10_3_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_10_3_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_10_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_10_3_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_10_3_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_10_3_ce0 = grp_FIRE3_fu_2067_WEIGHT1_10_3_ce0.read();
        } else {
            WEIGHT1_DB_10_3_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_10_3_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_10_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_10_3_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_10_3_we0.read();
    } else {
        WEIGHT1_DB_10_3_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_10_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_10_4_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_10_4_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_10_4_address0 = grp_FIRE3_fu_2067_WEIGHT1_10_4_address0.read();
        } else {
            WEIGHT1_DB_10_4_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_10_4_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_10_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_10_4_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_10_4_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_10_4_ce0 = grp_FIRE3_fu_2067_WEIGHT1_10_4_ce0.read();
        } else {
            WEIGHT1_DB_10_4_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_10_4_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_10_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_10_4_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_10_4_we0.read();
    } else {
        WEIGHT1_DB_10_4_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_10_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_10_5_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_10_5_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_10_5_address0 = grp_FIRE3_fu_2067_WEIGHT1_10_5_address0.read();
        } else {
            WEIGHT1_DB_10_5_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_10_5_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_10_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_10_5_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_10_5_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_10_5_ce0 = grp_FIRE3_fu_2067_WEIGHT1_10_5_ce0.read();
        } else {
            WEIGHT1_DB_10_5_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_10_5_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_10_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_10_5_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_10_5_we0.read();
    } else {
        WEIGHT1_DB_10_5_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_10_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_10_6_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_10_6_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_10_6_address0 = grp_FIRE3_fu_2067_WEIGHT1_10_6_address0.read();
        } else {
            WEIGHT1_DB_10_6_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_10_6_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_10_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_10_6_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_10_6_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_10_6_ce0 = grp_FIRE3_fu_2067_WEIGHT1_10_6_ce0.read();
        } else {
            WEIGHT1_DB_10_6_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_10_6_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_10_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_10_6_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_10_6_we0.read();
    } else {
        WEIGHT1_DB_10_6_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_11_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_11_0_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_11_0_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_11_0_address0 = grp_FIRE3_fu_2067_WEIGHT1_11_0_address0.read();
        } else {
            WEIGHT1_DB_11_0_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_11_0_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_11_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_11_0_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_11_0_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_11_0_ce0 = grp_FIRE3_fu_2067_WEIGHT1_11_0_ce0.read();
        } else {
            WEIGHT1_DB_11_0_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_11_0_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_11_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_11_0_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_11_0_we0.read();
    } else {
        WEIGHT1_DB_11_0_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_11_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_11_1_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_11_1_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_11_1_address0 = grp_FIRE3_fu_2067_WEIGHT1_11_1_address0.read();
        } else {
            WEIGHT1_DB_11_1_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_11_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_11_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_11_1_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_11_1_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_11_1_ce0 = grp_FIRE3_fu_2067_WEIGHT1_11_1_ce0.read();
        } else {
            WEIGHT1_DB_11_1_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_11_1_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_11_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_11_1_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_11_1_we0.read();
    } else {
        WEIGHT1_DB_11_1_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_11_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_11_2_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_11_2_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_11_2_address0 = grp_FIRE3_fu_2067_WEIGHT1_11_2_address0.read();
        } else {
            WEIGHT1_DB_11_2_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_11_2_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_11_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_11_2_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_11_2_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_11_2_ce0 = grp_FIRE3_fu_2067_WEIGHT1_11_2_ce0.read();
        } else {
            WEIGHT1_DB_11_2_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_11_2_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_11_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_11_2_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_11_2_we0.read();
    } else {
        WEIGHT1_DB_11_2_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_11_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_11_3_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_11_3_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_11_3_address0 = grp_FIRE3_fu_2067_WEIGHT1_11_3_address0.read();
        } else {
            WEIGHT1_DB_11_3_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_11_3_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_11_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_11_3_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_11_3_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_11_3_ce0 = grp_FIRE3_fu_2067_WEIGHT1_11_3_ce0.read();
        } else {
            WEIGHT1_DB_11_3_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_11_3_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_11_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_11_3_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_11_3_we0.read();
    } else {
        WEIGHT1_DB_11_3_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_11_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_11_4_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_11_4_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_11_4_address0 = grp_FIRE3_fu_2067_WEIGHT1_11_4_address0.read();
        } else {
            WEIGHT1_DB_11_4_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_11_4_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_11_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_11_4_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_11_4_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_11_4_ce0 = grp_FIRE3_fu_2067_WEIGHT1_11_4_ce0.read();
        } else {
            WEIGHT1_DB_11_4_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_11_4_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_11_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_11_4_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_11_4_we0.read();
    } else {
        WEIGHT1_DB_11_4_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_11_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_11_5_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_11_5_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_11_5_address0 = grp_FIRE3_fu_2067_WEIGHT1_11_5_address0.read();
        } else {
            WEIGHT1_DB_11_5_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_11_5_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_11_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_11_5_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_11_5_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_11_5_ce0 = grp_FIRE3_fu_2067_WEIGHT1_11_5_ce0.read();
        } else {
            WEIGHT1_DB_11_5_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_11_5_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_11_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_11_5_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_11_5_we0.read();
    } else {
        WEIGHT1_DB_11_5_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_11_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_11_6_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_11_6_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_11_6_address0 = grp_FIRE3_fu_2067_WEIGHT1_11_6_address0.read();
        } else {
            WEIGHT1_DB_11_6_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_11_6_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_11_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_11_6_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_11_6_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_11_6_ce0 = grp_FIRE3_fu_2067_WEIGHT1_11_6_ce0.read();
        } else {
            WEIGHT1_DB_11_6_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_11_6_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_11_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_11_6_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_11_6_we0.read();
    } else {
        WEIGHT1_DB_11_6_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_12_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_12_0_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_12_0_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_12_0_address0 = grp_FIRE3_fu_2067_WEIGHT1_12_0_address0.read();
        } else {
            WEIGHT1_DB_12_0_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_12_0_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_12_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_12_0_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_12_0_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_12_0_ce0 = grp_FIRE3_fu_2067_WEIGHT1_12_0_ce0.read();
        } else {
            WEIGHT1_DB_12_0_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_12_0_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_12_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_12_0_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_12_0_we0.read();
    } else {
        WEIGHT1_DB_12_0_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_12_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_12_1_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_12_1_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_12_1_address0 = grp_FIRE3_fu_2067_WEIGHT1_12_1_address0.read();
        } else {
            WEIGHT1_DB_12_1_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_12_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_12_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_12_1_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_12_1_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_12_1_ce0 = grp_FIRE3_fu_2067_WEIGHT1_12_1_ce0.read();
        } else {
            WEIGHT1_DB_12_1_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_12_1_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_12_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_12_1_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_12_1_we0.read();
    } else {
        WEIGHT1_DB_12_1_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_12_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_12_2_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_12_2_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_12_2_address0 = grp_FIRE3_fu_2067_WEIGHT1_12_2_address0.read();
        } else {
            WEIGHT1_DB_12_2_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_12_2_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_12_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_12_2_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_12_2_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_12_2_ce0 = grp_FIRE3_fu_2067_WEIGHT1_12_2_ce0.read();
        } else {
            WEIGHT1_DB_12_2_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_12_2_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_12_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_12_2_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_12_2_we0.read();
    } else {
        WEIGHT1_DB_12_2_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_12_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_12_3_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_12_3_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_12_3_address0 = grp_FIRE3_fu_2067_WEIGHT1_12_3_address0.read();
        } else {
            WEIGHT1_DB_12_3_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_12_3_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_12_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_12_3_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_12_3_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_12_3_ce0 = grp_FIRE3_fu_2067_WEIGHT1_12_3_ce0.read();
        } else {
            WEIGHT1_DB_12_3_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_12_3_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_12_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_12_3_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_12_3_we0.read();
    } else {
        WEIGHT1_DB_12_3_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_12_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_12_4_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_12_4_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_12_4_address0 = grp_FIRE3_fu_2067_WEIGHT1_12_4_address0.read();
        } else {
            WEIGHT1_DB_12_4_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_12_4_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_12_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_12_4_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_12_4_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_12_4_ce0 = grp_FIRE3_fu_2067_WEIGHT1_12_4_ce0.read();
        } else {
            WEIGHT1_DB_12_4_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_12_4_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_12_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_12_4_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_12_4_we0.read();
    } else {
        WEIGHT1_DB_12_4_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_12_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_12_5_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_12_5_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_12_5_address0 = grp_FIRE3_fu_2067_WEIGHT1_12_5_address0.read();
        } else {
            WEIGHT1_DB_12_5_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_12_5_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_12_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_12_5_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_12_5_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_12_5_ce0 = grp_FIRE3_fu_2067_WEIGHT1_12_5_ce0.read();
        } else {
            WEIGHT1_DB_12_5_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_12_5_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_12_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_12_5_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_12_5_we0.read();
    } else {
        WEIGHT1_DB_12_5_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_12_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_12_6_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_12_6_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_12_6_address0 = grp_FIRE3_fu_2067_WEIGHT1_12_6_address0.read();
        } else {
            WEIGHT1_DB_12_6_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_12_6_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_12_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_12_6_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_12_6_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_12_6_ce0 = grp_FIRE3_fu_2067_WEIGHT1_12_6_ce0.read();
        } else {
            WEIGHT1_DB_12_6_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_12_6_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_12_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_12_6_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_12_6_we0.read();
    } else {
        WEIGHT1_DB_12_6_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_13_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_13_0_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_13_0_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_13_0_address0 = grp_FIRE3_fu_2067_WEIGHT1_13_0_address0.read();
        } else {
            WEIGHT1_DB_13_0_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_13_0_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_13_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_13_0_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_13_0_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_13_0_ce0 = grp_FIRE3_fu_2067_WEIGHT1_13_0_ce0.read();
        } else {
            WEIGHT1_DB_13_0_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_13_0_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_13_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_13_0_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_13_0_we0.read();
    } else {
        WEIGHT1_DB_13_0_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_13_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_13_1_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_13_1_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_13_1_address0 = grp_FIRE3_fu_2067_WEIGHT1_13_1_address0.read();
        } else {
            WEIGHT1_DB_13_1_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_13_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_13_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_13_1_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_13_1_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_13_1_ce0 = grp_FIRE3_fu_2067_WEIGHT1_13_1_ce0.read();
        } else {
            WEIGHT1_DB_13_1_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_13_1_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_13_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_13_1_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_13_1_we0.read();
    } else {
        WEIGHT1_DB_13_1_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_13_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_13_2_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_13_2_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_13_2_address0 = grp_FIRE3_fu_2067_WEIGHT1_13_2_address0.read();
        } else {
            WEIGHT1_DB_13_2_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_13_2_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_13_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_13_2_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_13_2_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_13_2_ce0 = grp_FIRE3_fu_2067_WEIGHT1_13_2_ce0.read();
        } else {
            WEIGHT1_DB_13_2_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_13_2_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_13_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_13_2_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_13_2_we0.read();
    } else {
        WEIGHT1_DB_13_2_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_13_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_13_3_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_13_3_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_13_3_address0 = grp_FIRE3_fu_2067_WEIGHT1_13_3_address0.read();
        } else {
            WEIGHT1_DB_13_3_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_13_3_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_13_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_13_3_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_13_3_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_13_3_ce0 = grp_FIRE3_fu_2067_WEIGHT1_13_3_ce0.read();
        } else {
            WEIGHT1_DB_13_3_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_13_3_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_13_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_13_3_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_13_3_we0.read();
    } else {
        WEIGHT1_DB_13_3_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_13_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_13_4_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_13_4_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_13_4_address0 = grp_FIRE3_fu_2067_WEIGHT1_13_4_address0.read();
        } else {
            WEIGHT1_DB_13_4_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_13_4_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_13_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_13_4_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_13_4_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_13_4_ce0 = grp_FIRE3_fu_2067_WEIGHT1_13_4_ce0.read();
        } else {
            WEIGHT1_DB_13_4_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_13_4_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_13_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_13_4_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_13_4_we0.read();
    } else {
        WEIGHT1_DB_13_4_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_13_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_13_5_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_13_5_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_13_5_address0 = grp_FIRE3_fu_2067_WEIGHT1_13_5_address0.read();
        } else {
            WEIGHT1_DB_13_5_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_13_5_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_13_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_13_5_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_13_5_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_13_5_ce0 = grp_FIRE3_fu_2067_WEIGHT1_13_5_ce0.read();
        } else {
            WEIGHT1_DB_13_5_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_13_5_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_13_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_13_5_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_13_5_we0.read();
    } else {
        WEIGHT1_DB_13_5_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_13_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_13_6_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_13_6_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_13_6_address0 = grp_FIRE3_fu_2067_WEIGHT1_13_6_address0.read();
        } else {
            WEIGHT1_DB_13_6_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_13_6_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_13_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_13_6_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_13_6_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_13_6_ce0 = grp_FIRE3_fu_2067_WEIGHT1_13_6_ce0.read();
        } else {
            WEIGHT1_DB_13_6_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_13_6_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_13_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_13_6_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_13_6_we0.read();
    } else {
        WEIGHT1_DB_13_6_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_14_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_14_0_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_14_0_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_14_0_address0 = grp_FIRE3_fu_2067_WEIGHT1_14_0_address0.read();
        } else {
            WEIGHT1_DB_14_0_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_14_0_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_14_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_14_0_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_14_0_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_14_0_ce0 = grp_FIRE3_fu_2067_WEIGHT1_14_0_ce0.read();
        } else {
            WEIGHT1_DB_14_0_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_14_0_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_14_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_14_0_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_14_0_we0.read();
    } else {
        WEIGHT1_DB_14_0_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_14_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_14_1_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_14_1_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_14_1_address0 = grp_FIRE3_fu_2067_WEIGHT1_14_1_address0.read();
        } else {
            WEIGHT1_DB_14_1_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_14_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_14_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_14_1_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_14_1_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_14_1_ce0 = grp_FIRE3_fu_2067_WEIGHT1_14_1_ce0.read();
        } else {
            WEIGHT1_DB_14_1_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_14_1_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_14_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_14_1_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_14_1_we0.read();
    } else {
        WEIGHT1_DB_14_1_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_14_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_14_2_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_14_2_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_14_2_address0 = grp_FIRE3_fu_2067_WEIGHT1_14_2_address0.read();
        } else {
            WEIGHT1_DB_14_2_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_14_2_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_14_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_14_2_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_14_2_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_14_2_ce0 = grp_FIRE3_fu_2067_WEIGHT1_14_2_ce0.read();
        } else {
            WEIGHT1_DB_14_2_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_14_2_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_14_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_14_2_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_14_2_we0.read();
    } else {
        WEIGHT1_DB_14_2_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_14_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_14_3_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_14_3_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_14_3_address0 = grp_FIRE3_fu_2067_WEIGHT1_14_3_address0.read();
        } else {
            WEIGHT1_DB_14_3_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_14_3_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_14_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_14_3_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_14_3_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_14_3_ce0 = grp_FIRE3_fu_2067_WEIGHT1_14_3_ce0.read();
        } else {
            WEIGHT1_DB_14_3_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_14_3_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_14_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_14_3_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_14_3_we0.read();
    } else {
        WEIGHT1_DB_14_3_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_14_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_14_4_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_14_4_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_14_4_address0 = grp_FIRE3_fu_2067_WEIGHT1_14_4_address0.read();
        } else {
            WEIGHT1_DB_14_4_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_14_4_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_14_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_14_4_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_14_4_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_14_4_ce0 = grp_FIRE3_fu_2067_WEIGHT1_14_4_ce0.read();
        } else {
            WEIGHT1_DB_14_4_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_14_4_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_14_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_14_4_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_14_4_we0.read();
    } else {
        WEIGHT1_DB_14_4_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_14_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_14_5_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_14_5_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_14_5_address0 = grp_FIRE3_fu_2067_WEIGHT1_14_5_address0.read();
        } else {
            WEIGHT1_DB_14_5_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_14_5_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_14_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_14_5_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_14_5_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_14_5_ce0 = grp_FIRE3_fu_2067_WEIGHT1_14_5_ce0.read();
        } else {
            WEIGHT1_DB_14_5_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_14_5_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_14_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_14_5_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_14_5_we0.read();
    } else {
        WEIGHT1_DB_14_5_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_14_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_14_6_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_14_6_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_14_6_address0 = grp_FIRE3_fu_2067_WEIGHT1_14_6_address0.read();
        } else {
            WEIGHT1_DB_14_6_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_14_6_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_14_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_14_6_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_14_6_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_14_6_ce0 = grp_FIRE3_fu_2067_WEIGHT1_14_6_ce0.read();
        } else {
            WEIGHT1_DB_14_6_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_14_6_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_14_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_14_6_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_14_6_we0.read();
    } else {
        WEIGHT1_DB_14_6_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_15_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_15_0_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_15_0_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_15_0_address0 = grp_FIRE3_fu_2067_WEIGHT1_15_0_address0.read();
        } else {
            WEIGHT1_DB_15_0_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_15_0_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_15_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_15_0_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_15_0_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_15_0_ce0 = grp_FIRE3_fu_2067_WEIGHT1_15_0_ce0.read();
        } else {
            WEIGHT1_DB_15_0_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_15_0_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_15_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_15_0_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_15_0_we0.read();
    } else {
        WEIGHT1_DB_15_0_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_15_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_15_1_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_15_1_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_15_1_address0 = grp_FIRE3_fu_2067_WEIGHT1_15_1_address0.read();
        } else {
            WEIGHT1_DB_15_1_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_15_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_15_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_15_1_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_15_1_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_15_1_ce0 = grp_FIRE3_fu_2067_WEIGHT1_15_1_ce0.read();
        } else {
            WEIGHT1_DB_15_1_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_15_1_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_15_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_15_1_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_15_1_we0.read();
    } else {
        WEIGHT1_DB_15_1_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_15_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_15_2_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_15_2_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_15_2_address0 = grp_FIRE3_fu_2067_WEIGHT1_15_2_address0.read();
        } else {
            WEIGHT1_DB_15_2_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_15_2_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_15_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_15_2_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_15_2_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_15_2_ce0 = grp_FIRE3_fu_2067_WEIGHT1_15_2_ce0.read();
        } else {
            WEIGHT1_DB_15_2_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_15_2_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_15_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_15_2_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_15_2_we0.read();
    } else {
        WEIGHT1_DB_15_2_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_15_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_15_3_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_15_3_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_15_3_address0 = grp_FIRE3_fu_2067_WEIGHT1_15_3_address0.read();
        } else {
            WEIGHT1_DB_15_3_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_15_3_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_15_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_15_3_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_15_3_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_15_3_ce0 = grp_FIRE3_fu_2067_WEIGHT1_15_3_ce0.read();
        } else {
            WEIGHT1_DB_15_3_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_15_3_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_15_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_15_3_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_15_3_we0.read();
    } else {
        WEIGHT1_DB_15_3_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_15_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_15_4_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_15_4_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_15_4_address0 = grp_FIRE3_fu_2067_WEIGHT1_15_4_address0.read();
        } else {
            WEIGHT1_DB_15_4_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_15_4_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_15_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_15_4_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_15_4_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_15_4_ce0 = grp_FIRE3_fu_2067_WEIGHT1_15_4_ce0.read();
        } else {
            WEIGHT1_DB_15_4_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_15_4_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_15_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_15_4_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_15_4_we0.read();
    } else {
        WEIGHT1_DB_15_4_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_15_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_15_5_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_15_5_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_15_5_address0 = grp_FIRE3_fu_2067_WEIGHT1_15_5_address0.read();
        } else {
            WEIGHT1_DB_15_5_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_15_5_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_15_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_15_5_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_15_5_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_15_5_ce0 = grp_FIRE3_fu_2067_WEIGHT1_15_5_ce0.read();
        } else {
            WEIGHT1_DB_15_5_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_15_5_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_15_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_15_5_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_15_5_we0.read();
    } else {
        WEIGHT1_DB_15_5_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_15_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_15_6_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_15_6_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_15_6_address0 = grp_FIRE3_fu_2067_WEIGHT1_15_6_address0.read();
        } else {
            WEIGHT1_DB_15_6_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_15_6_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_15_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_15_6_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_15_6_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_15_6_ce0 = grp_FIRE3_fu_2067_WEIGHT1_15_6_ce0.read();
        } else {
            WEIGHT1_DB_15_6_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_15_6_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_15_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_15_6_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_15_6_we0.read();
    } else {
        WEIGHT1_DB_15_6_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_16_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_16_0_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_16_0_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_16_0_address0 = grp_FIRE3_fu_2067_WEIGHT1_16_0_address0.read();
        } else {
            WEIGHT1_DB_16_0_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_16_0_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_16_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_16_0_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_16_0_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_16_0_ce0 = grp_FIRE3_fu_2067_WEIGHT1_16_0_ce0.read();
        } else {
            WEIGHT1_DB_16_0_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_16_0_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_16_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_16_0_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_16_0_we0.read();
    } else {
        WEIGHT1_DB_16_0_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_16_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_16_1_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_16_1_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_16_1_address0 = grp_FIRE3_fu_2067_WEIGHT1_16_1_address0.read();
        } else {
            WEIGHT1_DB_16_1_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_16_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_16_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_16_1_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_16_1_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_16_1_ce0 = grp_FIRE3_fu_2067_WEIGHT1_16_1_ce0.read();
        } else {
            WEIGHT1_DB_16_1_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_16_1_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_16_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_16_1_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_16_1_we0.read();
    } else {
        WEIGHT1_DB_16_1_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_16_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_16_2_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_16_2_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_16_2_address0 = grp_FIRE3_fu_2067_WEIGHT1_16_2_address0.read();
        } else {
            WEIGHT1_DB_16_2_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_16_2_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_16_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_16_2_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_16_2_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_16_2_ce0 = grp_FIRE3_fu_2067_WEIGHT1_16_2_ce0.read();
        } else {
            WEIGHT1_DB_16_2_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_16_2_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_16_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_16_2_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_16_2_we0.read();
    } else {
        WEIGHT1_DB_16_2_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_16_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_16_3_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_16_3_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_16_3_address0 = grp_FIRE3_fu_2067_WEIGHT1_16_3_address0.read();
        } else {
            WEIGHT1_DB_16_3_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_16_3_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_16_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_16_3_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_16_3_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_16_3_ce0 = grp_FIRE3_fu_2067_WEIGHT1_16_3_ce0.read();
        } else {
            WEIGHT1_DB_16_3_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_16_3_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_16_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_16_3_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_16_3_we0.read();
    } else {
        WEIGHT1_DB_16_3_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_16_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_16_4_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_16_4_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_16_4_address0 = grp_FIRE3_fu_2067_WEIGHT1_16_4_address0.read();
        } else {
            WEIGHT1_DB_16_4_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_16_4_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_16_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_16_4_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_16_4_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_16_4_ce0 = grp_FIRE3_fu_2067_WEIGHT1_16_4_ce0.read();
        } else {
            WEIGHT1_DB_16_4_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_16_4_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_16_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_16_4_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_16_4_we0.read();
    } else {
        WEIGHT1_DB_16_4_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_16_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_16_5_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_16_5_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_16_5_address0 = grp_FIRE3_fu_2067_WEIGHT1_16_5_address0.read();
        } else {
            WEIGHT1_DB_16_5_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_16_5_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_16_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_16_5_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_16_5_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_16_5_ce0 = grp_FIRE3_fu_2067_WEIGHT1_16_5_ce0.read();
        } else {
            WEIGHT1_DB_16_5_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_16_5_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_16_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_16_5_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_16_5_we0.read();
    } else {
        WEIGHT1_DB_16_5_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_16_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_16_6_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_16_6_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_16_6_address0 = grp_FIRE3_fu_2067_WEIGHT1_16_6_address0.read();
        } else {
            WEIGHT1_DB_16_6_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_16_6_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_16_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_16_6_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_16_6_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_16_6_ce0 = grp_FIRE3_fu_2067_WEIGHT1_16_6_ce0.read();
        } else {
            WEIGHT1_DB_16_6_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_16_6_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_16_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_16_6_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_16_6_we0.read();
    } else {
        WEIGHT1_DB_16_6_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_17_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_17_0_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_17_0_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_17_0_address0 = grp_FIRE3_fu_2067_WEIGHT1_17_0_address0.read();
        } else {
            WEIGHT1_DB_17_0_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_17_0_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_17_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_17_0_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_17_0_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_17_0_ce0 = grp_FIRE3_fu_2067_WEIGHT1_17_0_ce0.read();
        } else {
            WEIGHT1_DB_17_0_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_17_0_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_17_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_17_0_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_17_0_we0.read();
    } else {
        WEIGHT1_DB_17_0_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_17_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_17_1_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_17_1_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_17_1_address0 = grp_FIRE3_fu_2067_WEIGHT1_17_1_address0.read();
        } else {
            WEIGHT1_DB_17_1_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_17_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_17_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_17_1_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_17_1_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_17_1_ce0 = grp_FIRE3_fu_2067_WEIGHT1_17_1_ce0.read();
        } else {
            WEIGHT1_DB_17_1_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_17_1_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_17_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_17_1_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_17_1_we0.read();
    } else {
        WEIGHT1_DB_17_1_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_17_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_17_2_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_17_2_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_17_2_address0 = grp_FIRE3_fu_2067_WEIGHT1_17_2_address0.read();
        } else {
            WEIGHT1_DB_17_2_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_17_2_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_17_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_17_2_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_17_2_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_17_2_ce0 = grp_FIRE3_fu_2067_WEIGHT1_17_2_ce0.read();
        } else {
            WEIGHT1_DB_17_2_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_17_2_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_17_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_17_2_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_17_2_we0.read();
    } else {
        WEIGHT1_DB_17_2_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_17_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_17_3_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_17_3_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_17_3_address0 = grp_FIRE3_fu_2067_WEIGHT1_17_3_address0.read();
        } else {
            WEIGHT1_DB_17_3_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_17_3_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_17_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_17_3_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_17_3_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_17_3_ce0 = grp_FIRE3_fu_2067_WEIGHT1_17_3_ce0.read();
        } else {
            WEIGHT1_DB_17_3_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_17_3_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_17_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_17_3_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_17_3_we0.read();
    } else {
        WEIGHT1_DB_17_3_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_17_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_17_4_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_17_4_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_17_4_address0 = grp_FIRE3_fu_2067_WEIGHT1_17_4_address0.read();
        } else {
            WEIGHT1_DB_17_4_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_17_4_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_17_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_17_4_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_17_4_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_17_4_ce0 = grp_FIRE3_fu_2067_WEIGHT1_17_4_ce0.read();
        } else {
            WEIGHT1_DB_17_4_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_17_4_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_17_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_17_4_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_17_4_we0.read();
    } else {
        WEIGHT1_DB_17_4_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_17_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_17_5_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_17_5_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_17_5_address0 = grp_FIRE3_fu_2067_WEIGHT1_17_5_address0.read();
        } else {
            WEIGHT1_DB_17_5_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_17_5_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_17_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_17_5_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_17_5_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_17_5_ce0 = grp_FIRE3_fu_2067_WEIGHT1_17_5_ce0.read();
        } else {
            WEIGHT1_DB_17_5_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_17_5_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_17_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_17_5_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_17_5_we0.read();
    } else {
        WEIGHT1_DB_17_5_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_17_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_17_6_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_17_6_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_17_6_address0 = grp_FIRE3_fu_2067_WEIGHT1_17_6_address0.read();
        } else {
            WEIGHT1_DB_17_6_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_17_6_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_17_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_17_6_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_17_6_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_17_6_ce0 = grp_FIRE3_fu_2067_WEIGHT1_17_6_ce0.read();
        } else {
            WEIGHT1_DB_17_6_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_17_6_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_17_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_17_6_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_17_6_we0.read();
    } else {
        WEIGHT1_DB_17_6_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_18_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_18_0_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_18_0_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_18_0_address0 = grp_FIRE3_fu_2067_WEIGHT1_18_0_address0.read();
        } else {
            WEIGHT1_DB_18_0_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_18_0_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_18_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_18_0_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_18_0_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_18_0_ce0 = grp_FIRE3_fu_2067_WEIGHT1_18_0_ce0.read();
        } else {
            WEIGHT1_DB_18_0_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_18_0_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_18_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_18_0_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_18_0_we0.read();
    } else {
        WEIGHT1_DB_18_0_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_18_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_18_1_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_18_1_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_18_1_address0 = grp_FIRE3_fu_2067_WEIGHT1_18_1_address0.read();
        } else {
            WEIGHT1_DB_18_1_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_18_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_18_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_18_1_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_18_1_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_18_1_ce0 = grp_FIRE3_fu_2067_WEIGHT1_18_1_ce0.read();
        } else {
            WEIGHT1_DB_18_1_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_18_1_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_18_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_18_1_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_18_1_we0.read();
    } else {
        WEIGHT1_DB_18_1_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_18_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_18_2_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_18_2_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_18_2_address0 = grp_FIRE3_fu_2067_WEIGHT1_18_2_address0.read();
        } else {
            WEIGHT1_DB_18_2_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_18_2_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_18_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_18_2_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_18_2_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_18_2_ce0 = grp_FIRE3_fu_2067_WEIGHT1_18_2_ce0.read();
        } else {
            WEIGHT1_DB_18_2_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_18_2_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_18_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_18_2_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_18_2_we0.read();
    } else {
        WEIGHT1_DB_18_2_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_18_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_18_3_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_18_3_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_18_3_address0 = grp_FIRE3_fu_2067_WEIGHT1_18_3_address0.read();
        } else {
            WEIGHT1_DB_18_3_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_18_3_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_18_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_18_3_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_18_3_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_18_3_ce0 = grp_FIRE3_fu_2067_WEIGHT1_18_3_ce0.read();
        } else {
            WEIGHT1_DB_18_3_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_18_3_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_18_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_18_3_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_18_3_we0.read();
    } else {
        WEIGHT1_DB_18_3_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_18_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_18_4_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_18_4_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_18_4_address0 = grp_FIRE3_fu_2067_WEIGHT1_18_4_address0.read();
        } else {
            WEIGHT1_DB_18_4_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_18_4_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_18_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_18_4_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_18_4_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_18_4_ce0 = grp_FIRE3_fu_2067_WEIGHT1_18_4_ce0.read();
        } else {
            WEIGHT1_DB_18_4_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_18_4_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_18_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_18_4_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_18_4_we0.read();
    } else {
        WEIGHT1_DB_18_4_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_18_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_18_5_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_18_5_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_18_5_address0 = grp_FIRE3_fu_2067_WEIGHT1_18_5_address0.read();
        } else {
            WEIGHT1_DB_18_5_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_18_5_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_18_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_18_5_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_18_5_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_18_5_ce0 = grp_FIRE3_fu_2067_WEIGHT1_18_5_ce0.read();
        } else {
            WEIGHT1_DB_18_5_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_18_5_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_18_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_18_5_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_18_5_we0.read();
    } else {
        WEIGHT1_DB_18_5_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_18_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_18_6_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_18_6_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_18_6_address0 = grp_FIRE3_fu_2067_WEIGHT1_18_6_address0.read();
        } else {
            WEIGHT1_DB_18_6_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_18_6_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_18_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_18_6_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_18_6_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_18_6_ce0 = grp_FIRE3_fu_2067_WEIGHT1_18_6_ce0.read();
        } else {
            WEIGHT1_DB_18_6_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_18_6_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_18_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_18_6_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_18_6_we0.read();
    } else {
        WEIGHT1_DB_18_6_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_19_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_19_0_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_19_0_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_19_0_address0 = grp_FIRE3_fu_2067_WEIGHT1_19_0_address0.read();
        } else {
            WEIGHT1_DB_19_0_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_19_0_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_19_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_19_0_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_19_0_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_19_0_ce0 = grp_FIRE3_fu_2067_WEIGHT1_19_0_ce0.read();
        } else {
            WEIGHT1_DB_19_0_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_19_0_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_19_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_19_0_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_19_0_we0.read();
    } else {
        WEIGHT1_DB_19_0_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_19_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_19_1_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_19_1_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_19_1_address0 = grp_FIRE3_fu_2067_WEIGHT1_19_1_address0.read();
        } else {
            WEIGHT1_DB_19_1_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_19_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_19_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_19_1_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_19_1_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_19_1_ce0 = grp_FIRE3_fu_2067_WEIGHT1_19_1_ce0.read();
        } else {
            WEIGHT1_DB_19_1_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_19_1_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_19_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_19_1_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_19_1_we0.read();
    } else {
        WEIGHT1_DB_19_1_we0 = ap_const_logic_0;
    }
}

}

