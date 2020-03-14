#include "Load_Fire.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void Load_Fire::thread_WEIGHT1_DB_61_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_61_6_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_61_6_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_61_6_ce0 = grp_FIRE3_fu_2067_WEIGHT1_61_6_ce0.read();
        } else {
            WEIGHT1_DB_61_6_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_61_6_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_61_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_61_6_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_61_6_we0.read();
    } else {
        WEIGHT1_DB_61_6_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_62_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_62_0_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_62_0_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_62_0_address0 = grp_FIRE3_fu_2067_WEIGHT1_62_0_address0.read();
        } else {
            WEIGHT1_DB_62_0_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_62_0_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_62_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_62_0_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_62_0_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_62_0_ce0 = grp_FIRE3_fu_2067_WEIGHT1_62_0_ce0.read();
        } else {
            WEIGHT1_DB_62_0_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_62_0_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_62_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_62_0_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_62_0_we0.read();
    } else {
        WEIGHT1_DB_62_0_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_62_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_62_1_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_62_1_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_62_1_address0 = grp_FIRE3_fu_2067_WEIGHT1_62_1_address0.read();
        } else {
            WEIGHT1_DB_62_1_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_62_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_62_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_62_1_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_62_1_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_62_1_ce0 = grp_FIRE3_fu_2067_WEIGHT1_62_1_ce0.read();
        } else {
            WEIGHT1_DB_62_1_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_62_1_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_62_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_62_1_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_62_1_we0.read();
    } else {
        WEIGHT1_DB_62_1_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_62_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_62_2_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_62_2_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_62_2_address0 = grp_FIRE3_fu_2067_WEIGHT1_62_2_address0.read();
        } else {
            WEIGHT1_DB_62_2_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_62_2_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_62_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_62_2_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_62_2_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_62_2_ce0 = grp_FIRE3_fu_2067_WEIGHT1_62_2_ce0.read();
        } else {
            WEIGHT1_DB_62_2_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_62_2_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_62_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_62_2_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_62_2_we0.read();
    } else {
        WEIGHT1_DB_62_2_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_62_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_62_3_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_62_3_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_62_3_address0 = grp_FIRE3_fu_2067_WEIGHT1_62_3_address0.read();
        } else {
            WEIGHT1_DB_62_3_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_62_3_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_62_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_62_3_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_62_3_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_62_3_ce0 = grp_FIRE3_fu_2067_WEIGHT1_62_3_ce0.read();
        } else {
            WEIGHT1_DB_62_3_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_62_3_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_62_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_62_3_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_62_3_we0.read();
    } else {
        WEIGHT1_DB_62_3_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_62_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_62_4_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_62_4_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_62_4_address0 = grp_FIRE3_fu_2067_WEIGHT1_62_4_address0.read();
        } else {
            WEIGHT1_DB_62_4_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_62_4_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_62_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_62_4_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_62_4_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_62_4_ce0 = grp_FIRE3_fu_2067_WEIGHT1_62_4_ce0.read();
        } else {
            WEIGHT1_DB_62_4_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_62_4_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_62_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_62_4_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_62_4_we0.read();
    } else {
        WEIGHT1_DB_62_4_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_62_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_62_5_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_62_5_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_62_5_address0 = grp_FIRE3_fu_2067_WEIGHT1_62_5_address0.read();
        } else {
            WEIGHT1_DB_62_5_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_62_5_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_62_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_62_5_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_62_5_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_62_5_ce0 = grp_FIRE3_fu_2067_WEIGHT1_62_5_ce0.read();
        } else {
            WEIGHT1_DB_62_5_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_62_5_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_62_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_62_5_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_62_5_we0.read();
    } else {
        WEIGHT1_DB_62_5_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_62_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_62_6_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_62_6_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_62_6_address0 = grp_FIRE3_fu_2067_WEIGHT1_62_6_address0.read();
        } else {
            WEIGHT1_DB_62_6_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_62_6_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_62_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_62_6_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_62_6_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_62_6_ce0 = grp_FIRE3_fu_2067_WEIGHT1_62_6_ce0.read();
        } else {
            WEIGHT1_DB_62_6_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_62_6_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_62_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_62_6_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_62_6_we0.read();
    } else {
        WEIGHT1_DB_62_6_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_63_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_63_0_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_63_0_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_63_0_address0 = grp_FIRE3_fu_2067_WEIGHT1_63_0_address0.read();
        } else {
            WEIGHT1_DB_63_0_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_63_0_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_63_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_63_0_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_63_0_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_63_0_ce0 = grp_FIRE3_fu_2067_WEIGHT1_63_0_ce0.read();
        } else {
            WEIGHT1_DB_63_0_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_63_0_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_63_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_63_0_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_63_0_we0.read();
    } else {
        WEIGHT1_DB_63_0_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_63_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_63_1_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_63_1_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_63_1_address0 = grp_FIRE3_fu_2067_WEIGHT1_63_1_address0.read();
        } else {
            WEIGHT1_DB_63_1_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_63_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_63_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_63_1_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_63_1_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_63_1_ce0 = grp_FIRE3_fu_2067_WEIGHT1_63_1_ce0.read();
        } else {
            WEIGHT1_DB_63_1_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_63_1_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_63_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_63_1_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_63_1_we0.read();
    } else {
        WEIGHT1_DB_63_1_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_63_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_63_2_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_63_2_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_63_2_address0 = grp_FIRE3_fu_2067_WEIGHT1_63_2_address0.read();
        } else {
            WEIGHT1_DB_63_2_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_63_2_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_63_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_63_2_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_63_2_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_63_2_ce0 = grp_FIRE3_fu_2067_WEIGHT1_63_2_ce0.read();
        } else {
            WEIGHT1_DB_63_2_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_63_2_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_63_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_63_2_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_63_2_we0.read();
    } else {
        WEIGHT1_DB_63_2_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_63_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_63_3_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_63_3_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_63_3_address0 = grp_FIRE3_fu_2067_WEIGHT1_63_3_address0.read();
        } else {
            WEIGHT1_DB_63_3_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_63_3_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_63_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_63_3_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_63_3_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_63_3_ce0 = grp_FIRE3_fu_2067_WEIGHT1_63_3_ce0.read();
        } else {
            WEIGHT1_DB_63_3_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_63_3_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_63_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_63_3_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_63_3_we0.read();
    } else {
        WEIGHT1_DB_63_3_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_63_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_63_4_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_63_4_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_63_4_address0 = grp_FIRE3_fu_2067_WEIGHT1_63_4_address0.read();
        } else {
            WEIGHT1_DB_63_4_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_63_4_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_63_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_63_4_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_63_4_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_63_4_ce0 = grp_FIRE3_fu_2067_WEIGHT1_63_4_ce0.read();
        } else {
            WEIGHT1_DB_63_4_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_63_4_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_63_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_63_4_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_63_4_we0.read();
    } else {
        WEIGHT1_DB_63_4_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_63_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_63_5_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_63_5_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_63_5_address0 = grp_FIRE3_fu_2067_WEIGHT1_63_5_address0.read();
        } else {
            WEIGHT1_DB_63_5_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_63_5_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_63_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_63_5_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_63_5_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_63_5_ce0 = grp_FIRE3_fu_2067_WEIGHT1_63_5_ce0.read();
        } else {
            WEIGHT1_DB_63_5_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_63_5_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_63_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_63_5_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_63_5_we0.read();
    } else {
        WEIGHT1_DB_63_5_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_63_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_63_6_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_63_6_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_63_6_address0 = grp_FIRE3_fu_2067_WEIGHT1_63_6_address0.read();
        } else {
            WEIGHT1_DB_63_6_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_63_6_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_63_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_63_6_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_63_6_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_63_6_ce0 = grp_FIRE3_fu_2067_WEIGHT1_63_6_ce0.read();
        } else {
            WEIGHT1_DB_63_6_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_63_6_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_63_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_63_6_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_63_6_we0.read();
    } else {
        WEIGHT1_DB_63_6_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_6_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_6_0_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_6_0_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_6_0_address0 = grp_FIRE3_fu_2067_WEIGHT1_6_0_address0.read();
        } else {
            WEIGHT1_DB_6_0_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_6_0_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_6_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_6_0_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_6_0_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_6_0_ce0 = grp_FIRE3_fu_2067_WEIGHT1_6_0_ce0.read();
        } else {
            WEIGHT1_DB_6_0_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_6_0_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_6_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_6_0_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_6_0_we0.read();
    } else {
        WEIGHT1_DB_6_0_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_6_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_6_1_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_6_1_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_6_1_address0 = grp_FIRE3_fu_2067_WEIGHT1_6_1_address0.read();
        } else {
            WEIGHT1_DB_6_1_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_6_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_6_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_6_1_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_6_1_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_6_1_ce0 = grp_FIRE3_fu_2067_WEIGHT1_6_1_ce0.read();
        } else {
            WEIGHT1_DB_6_1_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_6_1_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_6_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_6_1_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_6_1_we0.read();
    } else {
        WEIGHT1_DB_6_1_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_6_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_6_2_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_6_2_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_6_2_address0 = grp_FIRE3_fu_2067_WEIGHT1_6_2_address0.read();
        } else {
            WEIGHT1_DB_6_2_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_6_2_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_6_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_6_2_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_6_2_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_6_2_ce0 = grp_FIRE3_fu_2067_WEIGHT1_6_2_ce0.read();
        } else {
            WEIGHT1_DB_6_2_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_6_2_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_6_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_6_2_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_6_2_we0.read();
    } else {
        WEIGHT1_DB_6_2_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_6_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_6_3_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_6_3_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_6_3_address0 = grp_FIRE3_fu_2067_WEIGHT1_6_3_address0.read();
        } else {
            WEIGHT1_DB_6_3_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_6_3_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_6_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_6_3_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_6_3_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_6_3_ce0 = grp_FIRE3_fu_2067_WEIGHT1_6_3_ce0.read();
        } else {
            WEIGHT1_DB_6_3_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_6_3_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_6_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_6_3_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_6_3_we0.read();
    } else {
        WEIGHT1_DB_6_3_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_6_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_6_4_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_6_4_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_6_4_address0 = grp_FIRE3_fu_2067_WEIGHT1_6_4_address0.read();
        } else {
            WEIGHT1_DB_6_4_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_6_4_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_6_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_6_4_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_6_4_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_6_4_ce0 = grp_FIRE3_fu_2067_WEIGHT1_6_4_ce0.read();
        } else {
            WEIGHT1_DB_6_4_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_6_4_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_6_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_6_4_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_6_4_we0.read();
    } else {
        WEIGHT1_DB_6_4_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_6_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_6_5_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_6_5_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_6_5_address0 = grp_FIRE3_fu_2067_WEIGHT1_6_5_address0.read();
        } else {
            WEIGHT1_DB_6_5_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_6_5_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_6_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_6_5_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_6_5_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_6_5_ce0 = grp_FIRE3_fu_2067_WEIGHT1_6_5_ce0.read();
        } else {
            WEIGHT1_DB_6_5_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_6_5_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_6_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_6_5_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_6_5_we0.read();
    } else {
        WEIGHT1_DB_6_5_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_6_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_6_6_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_6_6_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_6_6_address0 = grp_FIRE3_fu_2067_WEIGHT1_6_6_address0.read();
        } else {
            WEIGHT1_DB_6_6_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_6_6_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_6_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_6_6_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_6_6_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_6_6_ce0 = grp_FIRE3_fu_2067_WEIGHT1_6_6_ce0.read();
        } else {
            WEIGHT1_DB_6_6_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_6_6_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_6_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_6_6_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_6_6_we0.read();
    } else {
        WEIGHT1_DB_6_6_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_7_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_7_0_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_7_0_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_7_0_address0 = grp_FIRE3_fu_2067_WEIGHT1_7_0_address0.read();
        } else {
            WEIGHT1_DB_7_0_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_7_0_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_7_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_7_0_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_7_0_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_7_0_ce0 = grp_FIRE3_fu_2067_WEIGHT1_7_0_ce0.read();
        } else {
            WEIGHT1_DB_7_0_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_7_0_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_7_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_7_0_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_7_0_we0.read();
    } else {
        WEIGHT1_DB_7_0_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_7_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_7_1_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_7_1_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_7_1_address0 = grp_FIRE3_fu_2067_WEIGHT1_7_1_address0.read();
        } else {
            WEIGHT1_DB_7_1_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_7_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_7_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_7_1_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_7_1_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_7_1_ce0 = grp_FIRE3_fu_2067_WEIGHT1_7_1_ce0.read();
        } else {
            WEIGHT1_DB_7_1_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_7_1_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_7_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_7_1_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_7_1_we0.read();
    } else {
        WEIGHT1_DB_7_1_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_7_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_7_2_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_7_2_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_7_2_address0 = grp_FIRE3_fu_2067_WEIGHT1_7_2_address0.read();
        } else {
            WEIGHT1_DB_7_2_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_7_2_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_7_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_7_2_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_7_2_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_7_2_ce0 = grp_FIRE3_fu_2067_WEIGHT1_7_2_ce0.read();
        } else {
            WEIGHT1_DB_7_2_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_7_2_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_7_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_7_2_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_7_2_we0.read();
    } else {
        WEIGHT1_DB_7_2_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_7_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_7_3_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_7_3_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_7_3_address0 = grp_FIRE3_fu_2067_WEIGHT1_7_3_address0.read();
        } else {
            WEIGHT1_DB_7_3_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_7_3_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_7_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_7_3_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_7_3_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_7_3_ce0 = grp_FIRE3_fu_2067_WEIGHT1_7_3_ce0.read();
        } else {
            WEIGHT1_DB_7_3_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_7_3_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_7_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_7_3_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_7_3_we0.read();
    } else {
        WEIGHT1_DB_7_3_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_7_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_7_4_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_7_4_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_7_4_address0 = grp_FIRE3_fu_2067_WEIGHT1_7_4_address0.read();
        } else {
            WEIGHT1_DB_7_4_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_7_4_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_7_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_7_4_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_7_4_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_7_4_ce0 = grp_FIRE3_fu_2067_WEIGHT1_7_4_ce0.read();
        } else {
            WEIGHT1_DB_7_4_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_7_4_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_7_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_7_4_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_7_4_we0.read();
    } else {
        WEIGHT1_DB_7_4_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_7_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_7_5_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_7_5_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_7_5_address0 = grp_FIRE3_fu_2067_WEIGHT1_7_5_address0.read();
        } else {
            WEIGHT1_DB_7_5_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_7_5_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_7_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_7_5_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_7_5_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_7_5_ce0 = grp_FIRE3_fu_2067_WEIGHT1_7_5_ce0.read();
        } else {
            WEIGHT1_DB_7_5_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_7_5_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_7_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_7_5_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_7_5_we0.read();
    } else {
        WEIGHT1_DB_7_5_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_7_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_7_6_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_7_6_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_7_6_address0 = grp_FIRE3_fu_2067_WEIGHT1_7_6_address0.read();
        } else {
            WEIGHT1_DB_7_6_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_7_6_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_7_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_7_6_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_7_6_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_7_6_ce0 = grp_FIRE3_fu_2067_WEIGHT1_7_6_ce0.read();
        } else {
            WEIGHT1_DB_7_6_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_7_6_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_7_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_7_6_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_7_6_we0.read();
    } else {
        WEIGHT1_DB_7_6_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_8_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_8_0_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_8_0_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_8_0_address0 = grp_FIRE3_fu_2067_WEIGHT1_8_0_address0.read();
        } else {
            WEIGHT1_DB_8_0_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_8_0_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_8_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_8_0_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_8_0_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_8_0_ce0 = grp_FIRE3_fu_2067_WEIGHT1_8_0_ce0.read();
        } else {
            WEIGHT1_DB_8_0_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_8_0_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_8_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_8_0_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_8_0_we0.read();
    } else {
        WEIGHT1_DB_8_0_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_8_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_8_1_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_8_1_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_8_1_address0 = grp_FIRE3_fu_2067_WEIGHT1_8_1_address0.read();
        } else {
            WEIGHT1_DB_8_1_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_8_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_8_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_8_1_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_8_1_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_8_1_ce0 = grp_FIRE3_fu_2067_WEIGHT1_8_1_ce0.read();
        } else {
            WEIGHT1_DB_8_1_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_8_1_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_8_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_8_1_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_8_1_we0.read();
    } else {
        WEIGHT1_DB_8_1_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_8_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_8_2_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_8_2_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_8_2_address0 = grp_FIRE3_fu_2067_WEIGHT1_8_2_address0.read();
        } else {
            WEIGHT1_DB_8_2_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_8_2_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_8_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_8_2_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_8_2_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_8_2_ce0 = grp_FIRE3_fu_2067_WEIGHT1_8_2_ce0.read();
        } else {
            WEIGHT1_DB_8_2_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_8_2_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_8_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_8_2_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_8_2_we0.read();
    } else {
        WEIGHT1_DB_8_2_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_8_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_8_3_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_8_3_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_8_3_address0 = grp_FIRE3_fu_2067_WEIGHT1_8_3_address0.read();
        } else {
            WEIGHT1_DB_8_3_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_8_3_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_8_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_8_3_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_8_3_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_8_3_ce0 = grp_FIRE3_fu_2067_WEIGHT1_8_3_ce0.read();
        } else {
            WEIGHT1_DB_8_3_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_8_3_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_8_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_8_3_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_8_3_we0.read();
    } else {
        WEIGHT1_DB_8_3_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_8_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_8_4_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_8_4_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_8_4_address0 = grp_FIRE3_fu_2067_WEIGHT1_8_4_address0.read();
        } else {
            WEIGHT1_DB_8_4_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_8_4_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_8_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_8_4_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_8_4_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_8_4_ce0 = grp_FIRE3_fu_2067_WEIGHT1_8_4_ce0.read();
        } else {
            WEIGHT1_DB_8_4_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_8_4_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_8_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_8_4_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_8_4_we0.read();
    } else {
        WEIGHT1_DB_8_4_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_8_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_8_5_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_8_5_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_8_5_address0 = grp_FIRE3_fu_2067_WEIGHT1_8_5_address0.read();
        } else {
            WEIGHT1_DB_8_5_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_8_5_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_8_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_8_5_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_8_5_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_8_5_ce0 = grp_FIRE3_fu_2067_WEIGHT1_8_5_ce0.read();
        } else {
            WEIGHT1_DB_8_5_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_8_5_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_8_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_8_5_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_8_5_we0.read();
    } else {
        WEIGHT1_DB_8_5_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_8_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_8_6_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_8_6_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_8_6_address0 = grp_FIRE3_fu_2067_WEIGHT1_8_6_address0.read();
        } else {
            WEIGHT1_DB_8_6_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_8_6_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_8_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_8_6_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_8_6_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_8_6_ce0 = grp_FIRE3_fu_2067_WEIGHT1_8_6_ce0.read();
        } else {
            WEIGHT1_DB_8_6_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_8_6_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_8_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_8_6_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_8_6_we0.read();
    } else {
        WEIGHT1_DB_8_6_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_9_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_9_0_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_9_0_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_9_0_address0 = grp_FIRE3_fu_2067_WEIGHT1_9_0_address0.read();
        } else {
            WEIGHT1_DB_9_0_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_9_0_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_9_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_9_0_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_9_0_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_9_0_ce0 = grp_FIRE3_fu_2067_WEIGHT1_9_0_ce0.read();
        } else {
            WEIGHT1_DB_9_0_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_9_0_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_9_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_9_0_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_9_0_we0.read();
    } else {
        WEIGHT1_DB_9_0_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_9_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_9_1_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_9_1_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_9_1_address0 = grp_FIRE3_fu_2067_WEIGHT1_9_1_address0.read();
        } else {
            WEIGHT1_DB_9_1_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_9_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_9_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_9_1_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_9_1_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_9_1_ce0 = grp_FIRE3_fu_2067_WEIGHT1_9_1_ce0.read();
        } else {
            WEIGHT1_DB_9_1_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_9_1_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_9_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_9_1_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_9_1_we0.read();
    } else {
        WEIGHT1_DB_9_1_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_9_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_9_2_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_9_2_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_9_2_address0 = grp_FIRE3_fu_2067_WEIGHT1_9_2_address0.read();
        } else {
            WEIGHT1_DB_9_2_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_9_2_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_9_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_9_2_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_9_2_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_9_2_ce0 = grp_FIRE3_fu_2067_WEIGHT1_9_2_ce0.read();
        } else {
            WEIGHT1_DB_9_2_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_9_2_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_9_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_9_2_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_9_2_we0.read();
    } else {
        WEIGHT1_DB_9_2_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_9_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_9_3_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_9_3_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_9_3_address0 = grp_FIRE3_fu_2067_WEIGHT1_9_3_address0.read();
        } else {
            WEIGHT1_DB_9_3_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_9_3_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_9_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_9_3_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_9_3_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_9_3_ce0 = grp_FIRE3_fu_2067_WEIGHT1_9_3_ce0.read();
        } else {
            WEIGHT1_DB_9_3_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_9_3_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_9_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_9_3_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_9_3_we0.read();
    } else {
        WEIGHT1_DB_9_3_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_9_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_9_4_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_9_4_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_9_4_address0 = grp_FIRE3_fu_2067_WEIGHT1_9_4_address0.read();
        } else {
            WEIGHT1_DB_9_4_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_9_4_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_9_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_9_4_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_9_4_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_9_4_ce0 = grp_FIRE3_fu_2067_WEIGHT1_9_4_ce0.read();
        } else {
            WEIGHT1_DB_9_4_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_9_4_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_9_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_9_4_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_9_4_we0.read();
    } else {
        WEIGHT1_DB_9_4_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_9_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_9_5_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_9_5_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_9_5_address0 = grp_FIRE3_fu_2067_WEIGHT1_9_5_address0.read();
        } else {
            WEIGHT1_DB_9_5_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_9_5_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_9_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_9_5_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_9_5_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_9_5_ce0 = grp_FIRE3_fu_2067_WEIGHT1_9_5_ce0.read();
        } else {
            WEIGHT1_DB_9_5_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_9_5_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_9_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_9_5_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_9_5_we0.read();
    } else {
        WEIGHT1_DB_9_5_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_9_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_9_6_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_9_6_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_9_6_address0 = grp_FIRE3_fu_2067_WEIGHT1_9_6_address0.read();
        } else {
            WEIGHT1_DB_9_6_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_9_6_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_9_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_9_6_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_9_6_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_9_6_ce0 = grp_FIRE3_fu_2067_WEIGHT1_9_6_ce0.read();
        } else {
            WEIGHT1_DB_9_6_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_9_6_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_9_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_9_6_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_9_6_we0.read();
    } else {
        WEIGHT1_DB_9_6_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void Load_Fire::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void Load_Fire::thread_ap_CS_fsm_state3() {
    ap_CS_fsm_state3 = ap_CS_fsm.read()[2];
}

void Load_Fire::thread_ap_block_state3_on_subcall_done() {
    ap_block_state3_on_subcall_done = ((esl_seteq<1,1,1>(ap_const_logic_0, grp_LOAD_WEIGHT_DMA_fu_3569_ap_done.read()) && 
  esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, grp_LOAD_IFM_fu_4922_ap_done.read())) || (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0) && 
  esl_seteq<1,1,1>(ap_const_logic_0, grp_FIRE3_fu_2067_ap_done.read())) || (esl_seteq<1,1,1>(ap_const_logic_0, grp_LOAD_WEIGHT_DMA_fu_3569_ap_done.read()) && 
  esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) || (esl_seteq<1,1,1>(ap_const_logic_0, grp_LOAD_IFM_fu_4922_ap_done.read()) && 
  esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) || (esl_seteq<1,1,1>(ap_const_logic_0, grp_FIRE3_fu_2067_ap_done.read()) && 
  esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)));
}

void Load_Fire::thread_ap_done() {
    if (((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) || 
         (esl_seteq<1,1,1>(tmp_fu_4957_p2.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void Load_Fire::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void Load_Fire::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(tmp_fu_4957_p2.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_IFM_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_IFM_0_q0 = IFM_0_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_IFM_0_q0 = IFM_DB_0_q0.read();
        } else {
            grp_FIRE3_fu_2067_IFM_0_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_IFM_0_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_IFM_0_q1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_IFM_0_q1 = IFM_0_q1.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_IFM_0_q1 = IFM_DB_0_q1.read();
        } else {
            grp_FIRE3_fu_2067_IFM_0_q1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_IFM_0_q1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_IFM_1_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_IFM_1_q0 = IFM_1_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_IFM_1_q0 = IFM_DB_1_q0.read();
        } else {
            grp_FIRE3_fu_2067_IFM_1_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_IFM_1_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_IFM_1_q1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_IFM_1_q1 = IFM_1_q1.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_IFM_1_q1 = IFM_DB_1_q1.read();
        } else {
            grp_FIRE3_fu_2067_IFM_1_q1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_IFM_1_q1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_IFM_2_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_IFM_2_q0 = IFM_2_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_IFM_2_q0 = IFM_DB_2_q0.read();
        } else {
            grp_FIRE3_fu_2067_IFM_2_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_IFM_2_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_IFM_2_q1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_IFM_2_q1 = IFM_2_q1.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_IFM_2_q1 = IFM_DB_2_q1.read();
        } else {
            grp_FIRE3_fu_2067_IFM_2_q1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_IFM_2_q1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_IFM_3_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_IFM_3_q0 = IFM_3_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_IFM_3_q0 = IFM_DB_3_q0.read();
        } else {
            grp_FIRE3_fu_2067_IFM_3_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_IFM_3_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_IFM_3_q1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_IFM_3_q1 = IFM_3_q1.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_IFM_3_q1 = IFM_DB_3_q1.read();
        } else {
            grp_FIRE3_fu_2067_IFM_3_q1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_IFM_3_q1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_IFM_4_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_IFM_4_q0 = IFM_4_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_IFM_4_q0 = IFM_DB_4_q0.read();
        } else {
            grp_FIRE3_fu_2067_IFM_4_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_IFM_4_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_IFM_4_q1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_IFM_4_q1 = IFM_4_q1.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_IFM_4_q1 = IFM_DB_4_q1.read();
        } else {
            grp_FIRE3_fu_2067_IFM_4_q1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_IFM_4_q1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_IFM_5_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_IFM_5_q0 = IFM_5_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_IFM_5_q0 = IFM_DB_5_q0.read();
        } else {
            grp_FIRE3_fu_2067_IFM_5_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_IFM_5_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_IFM_5_q1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_IFM_5_q1 = IFM_5_q1.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_IFM_5_q1 = IFM_DB_5_q1.read();
        } else {
            grp_FIRE3_fu_2067_IFM_5_q1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_IFM_5_q1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_IFM_6_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_IFM_6_q0 = IFM_6_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_IFM_6_q0 = IFM_DB_6_q0.read();
        } else {
            grp_FIRE3_fu_2067_IFM_6_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_IFM_6_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_IFM_6_q1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_IFM_6_q1 = IFM_6_q1.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_IFM_6_q1 = IFM_DB_6_q1.read();
        } else {
            grp_FIRE3_fu_2067_IFM_6_q1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_IFM_6_q1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_0_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_0_0_q0 = WEIGHT1_0_0_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_0_0_q0 = WEIGHT1_DB_0_0_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_0_0_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_0_0_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_0_1_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_0_1_q0 = WEIGHT1_0_1_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_0_1_q0 = WEIGHT1_DB_0_1_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_0_1_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_0_1_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_0_2_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_0_2_q0 = WEIGHT1_0_2_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_0_2_q0 = WEIGHT1_DB_0_2_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_0_2_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_0_2_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_0_3_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_0_3_q0 = WEIGHT1_0_3_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_0_3_q0 = WEIGHT1_DB_0_3_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_0_3_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_0_3_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_0_4_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_0_4_q0 = WEIGHT1_0_4_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_0_4_q0 = WEIGHT1_DB_0_4_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_0_4_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_0_4_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_0_5_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_0_5_q0 = WEIGHT1_0_5_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_0_5_q0 = WEIGHT1_DB_0_5_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_0_5_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_0_5_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_0_6_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_0_6_q0 = WEIGHT1_0_6_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_0_6_q0 = WEIGHT1_DB_0_6_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_0_6_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_0_6_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_10_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_10_0_q0 = WEIGHT1_10_0_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_10_0_q0 = WEIGHT1_DB_10_0_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_10_0_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_10_0_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_10_1_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_10_1_q0 = WEIGHT1_10_1_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_10_1_q0 = WEIGHT1_DB_10_1_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_10_1_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_10_1_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_10_2_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_10_2_q0 = WEIGHT1_10_2_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_10_2_q0 = WEIGHT1_DB_10_2_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_10_2_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_10_2_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_10_3_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_10_3_q0 = WEIGHT1_10_3_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_10_3_q0 = WEIGHT1_DB_10_3_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_10_3_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_10_3_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_10_4_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_10_4_q0 = WEIGHT1_10_4_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_10_4_q0 = WEIGHT1_DB_10_4_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_10_4_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_10_4_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_10_5_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_10_5_q0 = WEIGHT1_10_5_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_10_5_q0 = WEIGHT1_DB_10_5_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_10_5_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_10_5_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_10_6_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_10_6_q0 = WEIGHT1_10_6_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_10_6_q0 = WEIGHT1_DB_10_6_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_10_6_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_10_6_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_11_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_11_0_q0 = WEIGHT1_11_0_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_11_0_q0 = WEIGHT1_DB_11_0_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_11_0_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_11_0_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_11_1_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_11_1_q0 = WEIGHT1_11_1_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_11_1_q0 = WEIGHT1_DB_11_1_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_11_1_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_11_1_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_11_2_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_11_2_q0 = WEIGHT1_11_2_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_11_2_q0 = WEIGHT1_DB_11_2_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_11_2_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_11_2_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_11_3_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_11_3_q0 = WEIGHT1_11_3_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_11_3_q0 = WEIGHT1_DB_11_3_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_11_3_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_11_3_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_11_4_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_11_4_q0 = WEIGHT1_11_4_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_11_4_q0 = WEIGHT1_DB_11_4_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_11_4_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_11_4_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_11_5_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_11_5_q0 = WEIGHT1_11_5_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_11_5_q0 = WEIGHT1_DB_11_5_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_11_5_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_11_5_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_11_6_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_11_6_q0 = WEIGHT1_11_6_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_11_6_q0 = WEIGHT1_DB_11_6_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_11_6_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_11_6_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_12_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_12_0_q0 = WEIGHT1_12_0_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_12_0_q0 = WEIGHT1_DB_12_0_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_12_0_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_12_0_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_12_1_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_12_1_q0 = WEIGHT1_12_1_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_12_1_q0 = WEIGHT1_DB_12_1_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_12_1_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_12_1_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_12_2_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_12_2_q0 = WEIGHT1_12_2_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_12_2_q0 = WEIGHT1_DB_12_2_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_12_2_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_12_2_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_12_3_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_12_3_q0 = WEIGHT1_12_3_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_12_3_q0 = WEIGHT1_DB_12_3_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_12_3_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_12_3_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_12_4_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_12_4_q0 = WEIGHT1_12_4_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_12_4_q0 = WEIGHT1_DB_12_4_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_12_4_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_12_4_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_12_5_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_12_5_q0 = WEIGHT1_12_5_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_12_5_q0 = WEIGHT1_DB_12_5_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_12_5_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_12_5_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_12_6_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_12_6_q0 = WEIGHT1_12_6_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_12_6_q0 = WEIGHT1_DB_12_6_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_12_6_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_12_6_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_13_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_13_0_q0 = WEIGHT1_13_0_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_13_0_q0 = WEIGHT1_DB_13_0_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_13_0_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_13_0_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_13_1_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_13_1_q0 = WEIGHT1_13_1_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_13_1_q0 = WEIGHT1_DB_13_1_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_13_1_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_13_1_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_13_2_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_13_2_q0 = WEIGHT1_13_2_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_13_2_q0 = WEIGHT1_DB_13_2_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_13_2_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_13_2_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_13_3_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_13_3_q0 = WEIGHT1_13_3_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_13_3_q0 = WEIGHT1_DB_13_3_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_13_3_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_13_3_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_13_4_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_13_4_q0 = WEIGHT1_13_4_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_13_4_q0 = WEIGHT1_DB_13_4_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_13_4_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_13_4_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_13_5_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_13_5_q0 = WEIGHT1_13_5_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_13_5_q0 = WEIGHT1_DB_13_5_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_13_5_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_13_5_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_13_6_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_13_6_q0 = WEIGHT1_13_6_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_13_6_q0 = WEIGHT1_DB_13_6_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_13_6_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_13_6_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_14_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_14_0_q0 = WEIGHT1_14_0_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_14_0_q0 = WEIGHT1_DB_14_0_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_14_0_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_14_0_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_14_1_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_14_1_q0 = WEIGHT1_14_1_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_14_1_q0 = WEIGHT1_DB_14_1_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_14_1_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_14_1_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_14_2_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_14_2_q0 = WEIGHT1_14_2_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_14_2_q0 = WEIGHT1_DB_14_2_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_14_2_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_14_2_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_14_3_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_14_3_q0 = WEIGHT1_14_3_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_14_3_q0 = WEIGHT1_DB_14_3_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_14_3_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_14_3_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_14_4_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_14_4_q0 = WEIGHT1_14_4_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_14_4_q0 = WEIGHT1_DB_14_4_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_14_4_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_14_4_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_14_5_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_14_5_q0 = WEIGHT1_14_5_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_14_5_q0 = WEIGHT1_DB_14_5_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_14_5_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_14_5_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_14_6_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_14_6_q0 = WEIGHT1_14_6_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_14_6_q0 = WEIGHT1_DB_14_6_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_14_6_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_14_6_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_15_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_15_0_q0 = WEIGHT1_15_0_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_15_0_q0 = WEIGHT1_DB_15_0_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_15_0_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_15_0_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_15_1_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_15_1_q0 = WEIGHT1_15_1_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_15_1_q0 = WEIGHT1_DB_15_1_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_15_1_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_15_1_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_15_2_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_15_2_q0 = WEIGHT1_15_2_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_15_2_q0 = WEIGHT1_DB_15_2_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_15_2_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_15_2_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_15_3_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_15_3_q0 = WEIGHT1_15_3_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_15_3_q0 = WEIGHT1_DB_15_3_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_15_3_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_15_3_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_15_4_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_15_4_q0 = WEIGHT1_15_4_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_15_4_q0 = WEIGHT1_DB_15_4_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_15_4_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_15_4_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_15_5_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_15_5_q0 = WEIGHT1_15_5_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_15_5_q0 = WEIGHT1_DB_15_5_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_15_5_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_15_5_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_15_6_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_15_6_q0 = WEIGHT1_15_6_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_15_6_q0 = WEIGHT1_DB_15_6_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_15_6_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_15_6_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_16_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_16_0_q0 = WEIGHT1_16_0_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_16_0_q0 = WEIGHT1_DB_16_0_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_16_0_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_16_0_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_16_1_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_16_1_q0 = WEIGHT1_16_1_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_16_1_q0 = WEIGHT1_DB_16_1_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_16_1_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_16_1_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_16_2_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_16_2_q0 = WEIGHT1_16_2_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_16_2_q0 = WEIGHT1_DB_16_2_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_16_2_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_16_2_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_16_3_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_16_3_q0 = WEIGHT1_16_3_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_16_3_q0 = WEIGHT1_DB_16_3_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_16_3_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_16_3_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_16_4_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_16_4_q0 = WEIGHT1_16_4_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_16_4_q0 = WEIGHT1_DB_16_4_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_16_4_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_16_4_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_16_5_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_16_5_q0 = WEIGHT1_16_5_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_16_5_q0 = WEIGHT1_DB_16_5_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_16_5_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_16_5_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_16_6_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_16_6_q0 = WEIGHT1_16_6_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_16_6_q0 = WEIGHT1_DB_16_6_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_16_6_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_16_6_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_17_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_17_0_q0 = WEIGHT1_17_0_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_17_0_q0 = WEIGHT1_DB_17_0_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_17_0_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_17_0_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_17_1_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_17_1_q0 = WEIGHT1_17_1_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_17_1_q0 = WEIGHT1_DB_17_1_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_17_1_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_17_1_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_17_2_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_17_2_q0 = WEIGHT1_17_2_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_17_2_q0 = WEIGHT1_DB_17_2_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_17_2_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_17_2_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_17_3_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_17_3_q0 = WEIGHT1_17_3_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_17_3_q0 = WEIGHT1_DB_17_3_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_17_3_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_17_3_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_17_4_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_17_4_q0 = WEIGHT1_17_4_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_17_4_q0 = WEIGHT1_DB_17_4_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_17_4_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_17_4_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_17_5_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_17_5_q0 = WEIGHT1_17_5_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_17_5_q0 = WEIGHT1_DB_17_5_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_17_5_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_17_5_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_17_6_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_17_6_q0 = WEIGHT1_17_6_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_17_6_q0 = WEIGHT1_DB_17_6_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_17_6_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_17_6_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_18_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_18_0_q0 = WEIGHT1_18_0_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_18_0_q0 = WEIGHT1_DB_18_0_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_18_0_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_18_0_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_18_1_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_18_1_q0 = WEIGHT1_18_1_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_18_1_q0 = WEIGHT1_DB_18_1_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_18_1_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_18_1_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_18_2_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_18_2_q0 = WEIGHT1_18_2_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_18_2_q0 = WEIGHT1_DB_18_2_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_18_2_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_18_2_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_18_3_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_18_3_q0 = WEIGHT1_18_3_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_18_3_q0 = WEIGHT1_DB_18_3_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_18_3_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_18_3_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_18_4_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_18_4_q0 = WEIGHT1_18_4_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_18_4_q0 = WEIGHT1_DB_18_4_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_18_4_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_18_4_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_18_5_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_18_5_q0 = WEIGHT1_18_5_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_18_5_q0 = WEIGHT1_DB_18_5_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_18_5_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_18_5_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_18_6_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_18_6_q0 = WEIGHT1_18_6_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_18_6_q0 = WEIGHT1_DB_18_6_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_18_6_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_18_6_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_19_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_19_0_q0 = WEIGHT1_19_0_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_19_0_q0 = WEIGHT1_DB_19_0_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_19_0_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_19_0_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_19_1_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_19_1_q0 = WEIGHT1_19_1_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_19_1_q0 = WEIGHT1_DB_19_1_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_19_1_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_19_1_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_19_2_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_19_2_q0 = WEIGHT1_19_2_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_19_2_q0 = WEIGHT1_DB_19_2_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_19_2_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_19_2_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_19_3_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_19_3_q0 = WEIGHT1_19_3_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_19_3_q0 = WEIGHT1_DB_19_3_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_19_3_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_19_3_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_19_4_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_19_4_q0 = WEIGHT1_19_4_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_19_4_q0 = WEIGHT1_DB_19_4_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_19_4_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_19_4_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_19_5_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_19_5_q0 = WEIGHT1_19_5_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_19_5_q0 = WEIGHT1_DB_19_5_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_19_5_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_19_5_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_19_6_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_19_6_q0 = WEIGHT1_19_6_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_19_6_q0 = WEIGHT1_DB_19_6_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_19_6_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_19_6_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_1_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_1_0_q0 = WEIGHT1_1_0_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_1_0_q0 = WEIGHT1_DB_1_0_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_1_0_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_1_0_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_1_1_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_1_1_q0 = WEIGHT1_1_1_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_1_1_q0 = WEIGHT1_DB_1_1_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_1_1_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_1_1_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_1_2_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_1_2_q0 = WEIGHT1_1_2_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_1_2_q0 = WEIGHT1_DB_1_2_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_1_2_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_1_2_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_1_3_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_1_3_q0 = WEIGHT1_1_3_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_1_3_q0 = WEIGHT1_DB_1_3_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_1_3_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_1_3_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_1_4_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_1_4_q0 = WEIGHT1_1_4_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_1_4_q0 = WEIGHT1_DB_1_4_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_1_4_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_1_4_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_1_5_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_1_5_q0 = WEIGHT1_1_5_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_1_5_q0 = WEIGHT1_DB_1_5_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_1_5_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_1_5_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_1_6_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_1_6_q0 = WEIGHT1_1_6_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_1_6_q0 = WEIGHT1_DB_1_6_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_1_6_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_1_6_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_20_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_20_0_q0 = WEIGHT1_20_0_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_20_0_q0 = WEIGHT1_DB_20_0_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_20_0_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_20_0_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_20_1_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_20_1_q0 = WEIGHT1_20_1_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_20_1_q0 = WEIGHT1_DB_20_1_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_20_1_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_20_1_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_20_2_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_20_2_q0 = WEIGHT1_20_2_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_20_2_q0 = WEIGHT1_DB_20_2_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_20_2_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_20_2_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_20_3_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_20_3_q0 = WEIGHT1_20_3_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_20_3_q0 = WEIGHT1_DB_20_3_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_20_3_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_20_3_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_20_4_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_20_4_q0 = WEIGHT1_20_4_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_20_4_q0 = WEIGHT1_DB_20_4_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_20_4_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_20_4_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_20_5_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_20_5_q0 = WEIGHT1_20_5_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_20_5_q0 = WEIGHT1_DB_20_5_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_20_5_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_20_5_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_20_6_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_20_6_q0 = WEIGHT1_20_6_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_20_6_q0 = WEIGHT1_DB_20_6_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_20_6_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_20_6_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_21_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_21_0_q0 = WEIGHT1_21_0_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_21_0_q0 = WEIGHT1_DB_21_0_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_21_0_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_21_0_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_21_1_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_21_1_q0 = WEIGHT1_21_1_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_21_1_q0 = WEIGHT1_DB_21_1_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_21_1_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_21_1_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_21_2_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_21_2_q0 = WEIGHT1_21_2_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_21_2_q0 = WEIGHT1_DB_21_2_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_21_2_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_21_2_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_21_3_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_21_3_q0 = WEIGHT1_21_3_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_21_3_q0 = WEIGHT1_DB_21_3_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_21_3_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_21_3_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_21_4_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_21_4_q0 = WEIGHT1_21_4_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_21_4_q0 = WEIGHT1_DB_21_4_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_21_4_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_21_4_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_21_5_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_21_5_q0 = WEIGHT1_21_5_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_21_5_q0 = WEIGHT1_DB_21_5_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_21_5_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_21_5_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_21_6_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_21_6_q0 = WEIGHT1_21_6_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_21_6_q0 = WEIGHT1_DB_21_6_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_21_6_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_21_6_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_22_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_22_0_q0 = WEIGHT1_22_0_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_22_0_q0 = WEIGHT1_DB_22_0_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_22_0_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_22_0_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_22_1_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_22_1_q0 = WEIGHT1_22_1_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_22_1_q0 = WEIGHT1_DB_22_1_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_22_1_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_22_1_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_22_2_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_22_2_q0 = WEIGHT1_22_2_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_22_2_q0 = WEIGHT1_DB_22_2_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_22_2_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_22_2_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_22_3_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_22_3_q0 = WEIGHT1_22_3_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_22_3_q0 = WEIGHT1_DB_22_3_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_22_3_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_22_3_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_22_4_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_22_4_q0 = WEIGHT1_22_4_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_22_4_q0 = WEIGHT1_DB_22_4_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_22_4_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_22_4_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_22_5_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_22_5_q0 = WEIGHT1_22_5_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_22_5_q0 = WEIGHT1_DB_22_5_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_22_5_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_22_5_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_22_6_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_22_6_q0 = WEIGHT1_22_6_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_22_6_q0 = WEIGHT1_DB_22_6_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_22_6_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_22_6_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_23_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_23_0_q0 = WEIGHT1_23_0_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_23_0_q0 = WEIGHT1_DB_23_0_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_23_0_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_23_0_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_23_1_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_23_1_q0 = WEIGHT1_23_1_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_23_1_q0 = WEIGHT1_DB_23_1_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_23_1_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_23_1_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_23_2_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_23_2_q0 = WEIGHT1_23_2_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_23_2_q0 = WEIGHT1_DB_23_2_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_23_2_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_23_2_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_23_3_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_23_3_q0 = WEIGHT1_23_3_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_23_3_q0 = WEIGHT1_DB_23_3_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_23_3_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_23_3_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_23_4_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_23_4_q0 = WEIGHT1_23_4_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_23_4_q0 = WEIGHT1_DB_23_4_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_23_4_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_23_4_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_23_5_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_23_5_q0 = WEIGHT1_23_5_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_23_5_q0 = WEIGHT1_DB_23_5_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_23_5_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_23_5_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_23_6_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_23_6_q0 = WEIGHT1_23_6_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_23_6_q0 = WEIGHT1_DB_23_6_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_23_6_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_23_6_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_24_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_24_0_q0 = WEIGHT1_24_0_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_24_0_q0 = WEIGHT1_DB_24_0_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_24_0_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_24_0_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_24_1_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_24_1_q0 = WEIGHT1_24_1_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_24_1_q0 = WEIGHT1_DB_24_1_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_24_1_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_24_1_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_24_2_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_24_2_q0 = WEIGHT1_24_2_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_24_2_q0 = WEIGHT1_DB_24_2_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_24_2_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_24_2_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_24_3_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_24_3_q0 = WEIGHT1_24_3_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_24_3_q0 = WEIGHT1_DB_24_3_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_24_3_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_24_3_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_24_4_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_24_4_q0 = WEIGHT1_24_4_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_24_4_q0 = WEIGHT1_DB_24_4_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_24_4_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_24_4_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_24_5_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_24_5_q0 = WEIGHT1_24_5_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_24_5_q0 = WEIGHT1_DB_24_5_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_24_5_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_24_5_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_24_6_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_24_6_q0 = WEIGHT1_24_6_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_24_6_q0 = WEIGHT1_DB_24_6_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_24_6_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_24_6_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_25_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_25_0_q0 = WEIGHT1_25_0_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_25_0_q0 = WEIGHT1_DB_25_0_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_25_0_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_25_0_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_25_1_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_25_1_q0 = WEIGHT1_25_1_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_25_1_q0 = WEIGHT1_DB_25_1_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_25_1_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_25_1_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_25_2_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_25_2_q0 = WEIGHT1_25_2_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_25_2_q0 = WEIGHT1_DB_25_2_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_25_2_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_25_2_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_25_3_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_25_3_q0 = WEIGHT1_25_3_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_25_3_q0 = WEIGHT1_DB_25_3_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_25_3_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_25_3_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_25_4_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_25_4_q0 = WEIGHT1_25_4_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_25_4_q0 = WEIGHT1_DB_25_4_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_25_4_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_25_4_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_25_5_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_25_5_q0 = WEIGHT1_25_5_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_25_5_q0 = WEIGHT1_DB_25_5_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_25_5_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_25_5_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_25_6_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_25_6_q0 = WEIGHT1_25_6_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_25_6_q0 = WEIGHT1_DB_25_6_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_25_6_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_25_6_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_26_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_26_0_q0 = WEIGHT1_26_0_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_26_0_q0 = WEIGHT1_DB_26_0_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_26_0_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_26_0_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_26_1_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_26_1_q0 = WEIGHT1_26_1_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_26_1_q0 = WEIGHT1_DB_26_1_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_26_1_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_26_1_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_26_2_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_26_2_q0 = WEIGHT1_26_2_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_26_2_q0 = WEIGHT1_DB_26_2_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_26_2_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_26_2_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_26_3_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_26_3_q0 = WEIGHT1_26_3_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_26_3_q0 = WEIGHT1_DB_26_3_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_26_3_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_26_3_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_26_4_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_26_4_q0 = WEIGHT1_26_4_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_26_4_q0 = WEIGHT1_DB_26_4_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_26_4_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_26_4_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_26_5_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_26_5_q0 = WEIGHT1_26_5_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_26_5_q0 = WEIGHT1_DB_26_5_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_26_5_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_26_5_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_26_6_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_26_6_q0 = WEIGHT1_26_6_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_26_6_q0 = WEIGHT1_DB_26_6_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_26_6_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_26_6_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_27_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_27_0_q0 = WEIGHT1_27_0_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_27_0_q0 = WEIGHT1_DB_27_0_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_27_0_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_27_0_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_27_1_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_27_1_q0 = WEIGHT1_27_1_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_27_1_q0 = WEIGHT1_DB_27_1_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_27_1_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_27_1_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_27_2_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_27_2_q0 = WEIGHT1_27_2_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_27_2_q0 = WEIGHT1_DB_27_2_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_27_2_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_27_2_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_27_3_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_27_3_q0 = WEIGHT1_27_3_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_27_3_q0 = WEIGHT1_DB_27_3_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_27_3_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_27_3_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_27_4_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_27_4_q0 = WEIGHT1_27_4_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_27_4_q0 = WEIGHT1_DB_27_4_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_27_4_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_27_4_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_27_5_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_27_5_q0 = WEIGHT1_27_5_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_27_5_q0 = WEIGHT1_DB_27_5_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_27_5_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_27_5_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_27_6_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_27_6_q0 = WEIGHT1_27_6_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_27_6_q0 = WEIGHT1_DB_27_6_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_27_6_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_27_6_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_28_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_28_0_q0 = WEIGHT1_28_0_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_28_0_q0 = WEIGHT1_DB_28_0_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_28_0_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_28_0_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_28_1_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_28_1_q0 = WEIGHT1_28_1_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_28_1_q0 = WEIGHT1_DB_28_1_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_28_1_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_28_1_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_28_2_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_28_2_q0 = WEIGHT1_28_2_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_28_2_q0 = WEIGHT1_DB_28_2_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_28_2_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_28_2_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_28_3_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_28_3_q0 = WEIGHT1_28_3_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_28_3_q0 = WEIGHT1_DB_28_3_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_28_3_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_28_3_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_28_4_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_28_4_q0 = WEIGHT1_28_4_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_28_4_q0 = WEIGHT1_DB_28_4_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_28_4_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_28_4_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_28_5_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_28_5_q0 = WEIGHT1_28_5_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_28_5_q0 = WEIGHT1_DB_28_5_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_28_5_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_28_5_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_28_6_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_28_6_q0 = WEIGHT1_28_6_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_28_6_q0 = WEIGHT1_DB_28_6_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_28_6_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_28_6_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_29_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_29_0_q0 = WEIGHT1_29_0_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_29_0_q0 = WEIGHT1_DB_29_0_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_29_0_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_29_0_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_29_1_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_29_1_q0 = WEIGHT1_29_1_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_29_1_q0 = WEIGHT1_DB_29_1_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_29_1_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_29_1_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_29_2_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_29_2_q0 = WEIGHT1_29_2_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_29_2_q0 = WEIGHT1_DB_29_2_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_29_2_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_29_2_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_29_3_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_29_3_q0 = WEIGHT1_29_3_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_29_3_q0 = WEIGHT1_DB_29_3_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_29_3_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_29_3_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_29_4_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_29_4_q0 = WEIGHT1_29_4_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_29_4_q0 = WEIGHT1_DB_29_4_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_29_4_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_29_4_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_29_5_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_29_5_q0 = WEIGHT1_29_5_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_29_5_q0 = WEIGHT1_DB_29_5_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_29_5_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_29_5_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_29_6_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_29_6_q0 = WEIGHT1_29_6_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_29_6_q0 = WEIGHT1_DB_29_6_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_29_6_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_29_6_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_2_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_2_0_q0 = WEIGHT1_2_0_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_2_0_q0 = WEIGHT1_DB_2_0_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_2_0_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_2_0_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_2_1_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_2_1_q0 = WEIGHT1_2_1_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_2_1_q0 = WEIGHT1_DB_2_1_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_2_1_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_2_1_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_2_2_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_2_2_q0 = WEIGHT1_2_2_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_2_2_q0 = WEIGHT1_DB_2_2_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_2_2_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_2_2_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_2_3_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_2_3_q0 = WEIGHT1_2_3_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_2_3_q0 = WEIGHT1_DB_2_3_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_2_3_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_2_3_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_2_4_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_2_4_q0 = WEIGHT1_2_4_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_2_4_q0 = WEIGHT1_DB_2_4_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_2_4_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_2_4_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_2_5_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_2_5_q0 = WEIGHT1_2_5_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_2_5_q0 = WEIGHT1_DB_2_5_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_2_5_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_2_5_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_2_6_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_2_6_q0 = WEIGHT1_2_6_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_2_6_q0 = WEIGHT1_DB_2_6_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_2_6_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_2_6_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_30_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_30_0_q0 = WEIGHT1_30_0_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_30_0_q0 = WEIGHT1_DB_30_0_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_30_0_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_30_0_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_30_1_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_30_1_q0 = WEIGHT1_30_1_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_30_1_q0 = WEIGHT1_DB_30_1_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_30_1_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_30_1_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_30_2_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_30_2_q0 = WEIGHT1_30_2_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_30_2_q0 = WEIGHT1_DB_30_2_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_30_2_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_30_2_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_30_3_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_30_3_q0 = WEIGHT1_30_3_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_30_3_q0 = WEIGHT1_DB_30_3_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_30_3_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_30_3_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_30_4_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_30_4_q0 = WEIGHT1_30_4_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_30_4_q0 = WEIGHT1_DB_30_4_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_30_4_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_30_4_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_30_5_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_30_5_q0 = WEIGHT1_30_5_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_30_5_q0 = WEIGHT1_DB_30_5_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_30_5_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_30_5_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_30_6_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_30_6_q0 = WEIGHT1_30_6_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_30_6_q0 = WEIGHT1_DB_30_6_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_30_6_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_30_6_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_31_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_31_0_q0 = WEIGHT1_31_0_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_31_0_q0 = WEIGHT1_DB_31_0_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_31_0_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_31_0_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_31_1_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_31_1_q0 = WEIGHT1_31_1_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_31_1_q0 = WEIGHT1_DB_31_1_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_31_1_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_31_1_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_31_2_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_31_2_q0 = WEIGHT1_31_2_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_31_2_q0 = WEIGHT1_DB_31_2_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_31_2_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_31_2_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_31_3_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_31_3_q0 = WEIGHT1_31_3_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_31_3_q0 = WEIGHT1_DB_31_3_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_31_3_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_31_3_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_31_4_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_31_4_q0 = WEIGHT1_31_4_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_31_4_q0 = WEIGHT1_DB_31_4_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_31_4_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_31_4_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_31_5_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_31_5_q0 = WEIGHT1_31_5_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_31_5_q0 = WEIGHT1_DB_31_5_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_31_5_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_31_5_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_31_6_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_31_6_q0 = WEIGHT1_31_6_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_31_6_q0 = WEIGHT1_DB_31_6_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_31_6_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_31_6_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_32_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_32_0_q0 = WEIGHT1_32_0_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_32_0_q0 = WEIGHT1_DB_32_0_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_32_0_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_32_0_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_32_1_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_32_1_q0 = WEIGHT1_32_1_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_32_1_q0 = WEIGHT1_DB_32_1_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_32_1_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_32_1_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_32_2_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_32_2_q0 = WEIGHT1_32_2_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_32_2_q0 = WEIGHT1_DB_32_2_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_32_2_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_32_2_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_32_3_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_32_3_q0 = WEIGHT1_32_3_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_32_3_q0 = WEIGHT1_DB_32_3_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_32_3_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_32_3_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_32_4_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_32_4_q0 = WEIGHT1_32_4_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_32_4_q0 = WEIGHT1_DB_32_4_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_32_4_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_32_4_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_32_5_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_32_5_q0 = WEIGHT1_32_5_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_32_5_q0 = WEIGHT1_DB_32_5_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_32_5_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_32_5_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_32_6_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_32_6_q0 = WEIGHT1_32_6_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_32_6_q0 = WEIGHT1_DB_32_6_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_32_6_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_32_6_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_33_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_33_0_q0 = WEIGHT1_33_0_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_33_0_q0 = WEIGHT1_DB_33_0_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_33_0_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_33_0_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_33_1_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_33_1_q0 = WEIGHT1_33_1_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_33_1_q0 = WEIGHT1_DB_33_1_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_33_1_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_33_1_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_33_2_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_33_2_q0 = WEIGHT1_33_2_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_33_2_q0 = WEIGHT1_DB_33_2_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_33_2_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_33_2_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_33_3_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_33_3_q0 = WEIGHT1_33_3_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_33_3_q0 = WEIGHT1_DB_33_3_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_33_3_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_33_3_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_33_4_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_33_4_q0 = WEIGHT1_33_4_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_33_4_q0 = WEIGHT1_DB_33_4_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_33_4_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_33_4_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_33_5_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_33_5_q0 = WEIGHT1_33_5_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_33_5_q0 = WEIGHT1_DB_33_5_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_33_5_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_33_5_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_33_6_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_33_6_q0 = WEIGHT1_33_6_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_33_6_q0 = WEIGHT1_DB_33_6_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_33_6_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_33_6_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_34_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_34_0_q0 = WEIGHT1_34_0_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_34_0_q0 = WEIGHT1_DB_34_0_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_34_0_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_34_0_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_34_1_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_34_1_q0 = WEIGHT1_34_1_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_34_1_q0 = WEIGHT1_DB_34_1_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_34_1_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_34_1_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_34_2_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_34_2_q0 = WEIGHT1_34_2_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_34_2_q0 = WEIGHT1_DB_34_2_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_34_2_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_34_2_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_34_3_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_34_3_q0 = WEIGHT1_34_3_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_34_3_q0 = WEIGHT1_DB_34_3_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_34_3_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_34_3_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_34_4_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_34_4_q0 = WEIGHT1_34_4_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_34_4_q0 = WEIGHT1_DB_34_4_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_34_4_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_34_4_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_34_5_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_34_5_q0 = WEIGHT1_34_5_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_34_5_q0 = WEIGHT1_DB_34_5_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_34_5_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_34_5_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_34_6_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_34_6_q0 = WEIGHT1_34_6_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_34_6_q0 = WEIGHT1_DB_34_6_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_34_6_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_34_6_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_35_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_35_0_q0 = WEIGHT1_35_0_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_35_0_q0 = WEIGHT1_DB_35_0_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_35_0_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_35_0_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_35_1_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_35_1_q0 = WEIGHT1_35_1_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_35_1_q0 = WEIGHT1_DB_35_1_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_35_1_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_35_1_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_35_2_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_35_2_q0 = WEIGHT1_35_2_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_35_2_q0 = WEIGHT1_DB_35_2_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_35_2_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_35_2_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_35_3_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_35_3_q0 = WEIGHT1_35_3_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_35_3_q0 = WEIGHT1_DB_35_3_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_35_3_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_35_3_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_35_4_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_35_4_q0 = WEIGHT1_35_4_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_35_4_q0 = WEIGHT1_DB_35_4_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_35_4_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_35_4_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_35_5_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_35_5_q0 = WEIGHT1_35_5_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_35_5_q0 = WEIGHT1_DB_35_5_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_35_5_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_35_5_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_35_6_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_35_6_q0 = WEIGHT1_35_6_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_35_6_q0 = WEIGHT1_DB_35_6_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_35_6_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_35_6_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_36_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_36_0_q0 = WEIGHT1_36_0_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_36_0_q0 = WEIGHT1_DB_36_0_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_36_0_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_36_0_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_36_1_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_36_1_q0 = WEIGHT1_36_1_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_36_1_q0 = WEIGHT1_DB_36_1_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_36_1_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_36_1_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_36_2_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_36_2_q0 = WEIGHT1_36_2_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_36_2_q0 = WEIGHT1_DB_36_2_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_36_2_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_36_2_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_36_3_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_36_3_q0 = WEIGHT1_36_3_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_36_3_q0 = WEIGHT1_DB_36_3_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_36_3_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_36_3_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_36_4_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_36_4_q0 = WEIGHT1_36_4_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_36_4_q0 = WEIGHT1_DB_36_4_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_36_4_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_36_4_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_36_5_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_36_5_q0 = WEIGHT1_36_5_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_36_5_q0 = WEIGHT1_DB_36_5_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_36_5_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_36_5_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_36_6_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_36_6_q0 = WEIGHT1_36_6_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_36_6_q0 = WEIGHT1_DB_36_6_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_36_6_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_36_6_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_37_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_37_0_q0 = WEIGHT1_37_0_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_37_0_q0 = WEIGHT1_DB_37_0_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_37_0_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_37_0_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_37_1_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_37_1_q0 = WEIGHT1_37_1_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_37_1_q0 = WEIGHT1_DB_37_1_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_37_1_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_37_1_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_37_2_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_37_2_q0 = WEIGHT1_37_2_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_37_2_q0 = WEIGHT1_DB_37_2_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_37_2_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_37_2_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_37_3_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_37_3_q0 = WEIGHT1_37_3_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_37_3_q0 = WEIGHT1_DB_37_3_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_37_3_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_37_3_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_37_4_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_37_4_q0 = WEIGHT1_37_4_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_37_4_q0 = WEIGHT1_DB_37_4_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_37_4_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_37_4_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_37_5_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_37_5_q0 = WEIGHT1_37_5_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_37_5_q0 = WEIGHT1_DB_37_5_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_37_5_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_37_5_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_37_6_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_37_6_q0 = WEIGHT1_37_6_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_37_6_q0 = WEIGHT1_DB_37_6_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_37_6_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_37_6_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_38_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_38_0_q0 = WEIGHT1_38_0_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_38_0_q0 = WEIGHT1_DB_38_0_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_38_0_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_38_0_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_38_1_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_38_1_q0 = WEIGHT1_38_1_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_38_1_q0 = WEIGHT1_DB_38_1_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_38_1_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_38_1_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_38_2_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_38_2_q0 = WEIGHT1_38_2_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_38_2_q0 = WEIGHT1_DB_38_2_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_38_2_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_38_2_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_38_3_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_38_3_q0 = WEIGHT1_38_3_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_38_3_q0 = WEIGHT1_DB_38_3_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_38_3_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_38_3_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_38_4_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_38_4_q0 = WEIGHT1_38_4_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_38_4_q0 = WEIGHT1_DB_38_4_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_38_4_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_38_4_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_38_5_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_38_5_q0 = WEIGHT1_38_5_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_38_5_q0 = WEIGHT1_DB_38_5_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_38_5_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_38_5_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_38_6_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_38_6_q0 = WEIGHT1_38_6_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_38_6_q0 = WEIGHT1_DB_38_6_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_38_6_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_38_6_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_39_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_39_0_q0 = WEIGHT1_39_0_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_39_0_q0 = WEIGHT1_DB_39_0_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_39_0_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_39_0_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_39_1_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_39_1_q0 = WEIGHT1_39_1_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_39_1_q0 = WEIGHT1_DB_39_1_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_39_1_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_39_1_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_39_2_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_39_2_q0 = WEIGHT1_39_2_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_39_2_q0 = WEIGHT1_DB_39_2_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_39_2_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_39_2_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_39_3_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_39_3_q0 = WEIGHT1_39_3_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_39_3_q0 = WEIGHT1_DB_39_3_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_39_3_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_39_3_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_39_4_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_39_4_q0 = WEIGHT1_39_4_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_39_4_q0 = WEIGHT1_DB_39_4_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_39_4_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_39_4_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_39_5_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_39_5_q0 = WEIGHT1_39_5_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_39_5_q0 = WEIGHT1_DB_39_5_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_39_5_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_39_5_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_39_6_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_39_6_q0 = WEIGHT1_39_6_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_39_6_q0 = WEIGHT1_DB_39_6_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_39_6_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_39_6_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_3_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_3_0_q0 = WEIGHT1_3_0_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_3_0_q0 = WEIGHT1_DB_3_0_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_3_0_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_3_0_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_3_1_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_3_1_q0 = WEIGHT1_3_1_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_3_1_q0 = WEIGHT1_DB_3_1_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_3_1_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_3_1_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_3_2_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_3_2_q0 = WEIGHT1_3_2_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_3_2_q0 = WEIGHT1_DB_3_2_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_3_2_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_3_2_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_3_3_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_3_3_q0 = WEIGHT1_3_3_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_3_3_q0 = WEIGHT1_DB_3_3_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_3_3_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_3_3_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_3_4_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_3_4_q0 = WEIGHT1_3_4_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_3_4_q0 = WEIGHT1_DB_3_4_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_3_4_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_3_4_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_3_5_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_3_5_q0 = WEIGHT1_3_5_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_3_5_q0 = WEIGHT1_DB_3_5_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_3_5_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_3_5_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_3_6_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_3_6_q0 = WEIGHT1_3_6_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_3_6_q0 = WEIGHT1_DB_3_6_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_3_6_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_3_6_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_40_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_40_0_q0 = WEIGHT1_40_0_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_40_0_q0 = WEIGHT1_DB_40_0_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_40_0_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_40_0_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_40_1_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_40_1_q0 = WEIGHT1_40_1_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_40_1_q0 = WEIGHT1_DB_40_1_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_40_1_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_40_1_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_40_2_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_40_2_q0 = WEIGHT1_40_2_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_40_2_q0 = WEIGHT1_DB_40_2_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_40_2_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_40_2_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_40_3_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_40_3_q0 = WEIGHT1_40_3_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_40_3_q0 = WEIGHT1_DB_40_3_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_40_3_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_40_3_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_40_4_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_40_4_q0 = WEIGHT1_40_4_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_40_4_q0 = WEIGHT1_DB_40_4_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_40_4_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_40_4_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_40_5_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_40_5_q0 = WEIGHT1_40_5_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_40_5_q0 = WEIGHT1_DB_40_5_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_40_5_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_40_5_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_40_6_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_40_6_q0 = WEIGHT1_40_6_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_40_6_q0 = WEIGHT1_DB_40_6_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_40_6_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_40_6_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_41_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_41_0_q0 = WEIGHT1_41_0_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_41_0_q0 = WEIGHT1_DB_41_0_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_41_0_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_41_0_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_41_1_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_41_1_q0 = WEIGHT1_41_1_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_41_1_q0 = WEIGHT1_DB_41_1_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_41_1_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_41_1_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_41_2_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_41_2_q0 = WEIGHT1_41_2_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_41_2_q0 = WEIGHT1_DB_41_2_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_41_2_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_41_2_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_41_3_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_41_3_q0 = WEIGHT1_41_3_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_41_3_q0 = WEIGHT1_DB_41_3_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_41_3_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_41_3_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_41_4_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_41_4_q0 = WEIGHT1_41_4_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_41_4_q0 = WEIGHT1_DB_41_4_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_41_4_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_41_4_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_41_5_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_41_5_q0 = WEIGHT1_41_5_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_41_5_q0 = WEIGHT1_DB_41_5_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_41_5_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_41_5_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_41_6_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_41_6_q0 = WEIGHT1_41_6_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_41_6_q0 = WEIGHT1_DB_41_6_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_41_6_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_41_6_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_42_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_42_0_q0 = WEIGHT1_42_0_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_42_0_q0 = WEIGHT1_DB_42_0_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_42_0_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_42_0_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_42_1_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_42_1_q0 = WEIGHT1_42_1_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_42_1_q0 = WEIGHT1_DB_42_1_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_42_1_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_42_1_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_42_2_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_42_2_q0 = WEIGHT1_42_2_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_42_2_q0 = WEIGHT1_DB_42_2_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_42_2_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_42_2_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_42_3_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_42_3_q0 = WEIGHT1_42_3_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_42_3_q0 = WEIGHT1_DB_42_3_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_42_3_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_42_3_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_42_4_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_42_4_q0 = WEIGHT1_42_4_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_42_4_q0 = WEIGHT1_DB_42_4_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_42_4_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_42_4_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_42_5_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_42_5_q0 = WEIGHT1_42_5_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_42_5_q0 = WEIGHT1_DB_42_5_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_42_5_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_42_5_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_42_6_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_42_6_q0 = WEIGHT1_42_6_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_42_6_q0 = WEIGHT1_DB_42_6_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_42_6_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_42_6_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_43_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_43_0_q0 = WEIGHT1_43_0_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_43_0_q0 = WEIGHT1_DB_43_0_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_43_0_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_43_0_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_43_1_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_43_1_q0 = WEIGHT1_43_1_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_43_1_q0 = WEIGHT1_DB_43_1_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_43_1_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_43_1_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_43_2_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_43_2_q0 = WEIGHT1_43_2_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_43_2_q0 = WEIGHT1_DB_43_2_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_43_2_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_43_2_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_43_3_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_43_3_q0 = WEIGHT1_43_3_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_43_3_q0 = WEIGHT1_DB_43_3_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_43_3_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_43_3_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_43_4_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_43_4_q0 = WEIGHT1_43_4_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_43_4_q0 = WEIGHT1_DB_43_4_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_43_4_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_43_4_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_43_5_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_43_5_q0 = WEIGHT1_43_5_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_43_5_q0 = WEIGHT1_DB_43_5_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_43_5_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_43_5_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_43_6_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_43_6_q0 = WEIGHT1_43_6_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_43_6_q0 = WEIGHT1_DB_43_6_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_43_6_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_43_6_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_44_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_44_0_q0 = WEIGHT1_44_0_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_44_0_q0 = WEIGHT1_DB_44_0_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_44_0_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_44_0_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_44_1_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_44_1_q0 = WEIGHT1_44_1_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_44_1_q0 = WEIGHT1_DB_44_1_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_44_1_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_44_1_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_44_2_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_44_2_q0 = WEIGHT1_44_2_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_44_2_q0 = WEIGHT1_DB_44_2_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_44_2_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_44_2_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_44_3_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_44_3_q0 = WEIGHT1_44_3_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_44_3_q0 = WEIGHT1_DB_44_3_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_44_3_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_44_3_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_44_4_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_44_4_q0 = WEIGHT1_44_4_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_44_4_q0 = WEIGHT1_DB_44_4_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_44_4_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_44_4_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_44_5_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_44_5_q0 = WEIGHT1_44_5_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_44_5_q0 = WEIGHT1_DB_44_5_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_44_5_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_44_5_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_44_6_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_44_6_q0 = WEIGHT1_44_6_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_44_6_q0 = WEIGHT1_DB_44_6_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_44_6_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_44_6_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_45_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_45_0_q0 = WEIGHT1_45_0_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_45_0_q0 = WEIGHT1_DB_45_0_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_45_0_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_45_0_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_45_1_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_45_1_q0 = WEIGHT1_45_1_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_45_1_q0 = WEIGHT1_DB_45_1_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_45_1_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_45_1_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_45_2_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_45_2_q0 = WEIGHT1_45_2_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_45_2_q0 = WEIGHT1_DB_45_2_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_45_2_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_45_2_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_45_3_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_45_3_q0 = WEIGHT1_45_3_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_45_3_q0 = WEIGHT1_DB_45_3_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_45_3_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_45_3_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_45_4_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_45_4_q0 = WEIGHT1_45_4_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_45_4_q0 = WEIGHT1_DB_45_4_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_45_4_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_45_4_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_45_5_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_45_5_q0 = WEIGHT1_45_5_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_45_5_q0 = WEIGHT1_DB_45_5_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_45_5_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_45_5_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_45_6_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_45_6_q0 = WEIGHT1_45_6_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_45_6_q0 = WEIGHT1_DB_45_6_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_45_6_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_45_6_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_46_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_46_0_q0 = WEIGHT1_46_0_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_46_0_q0 = WEIGHT1_DB_46_0_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_46_0_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_46_0_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_46_1_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_46_1_q0 = WEIGHT1_46_1_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_46_1_q0 = WEIGHT1_DB_46_1_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_46_1_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_46_1_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_46_2_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_46_2_q0 = WEIGHT1_46_2_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_46_2_q0 = WEIGHT1_DB_46_2_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_46_2_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_46_2_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_46_3_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_46_3_q0 = WEIGHT1_46_3_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_46_3_q0 = WEIGHT1_DB_46_3_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_46_3_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_46_3_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_46_4_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_46_4_q0 = WEIGHT1_46_4_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_46_4_q0 = WEIGHT1_DB_46_4_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_46_4_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_46_4_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_46_5_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_46_5_q0 = WEIGHT1_46_5_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_46_5_q0 = WEIGHT1_DB_46_5_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_46_5_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_46_5_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_46_6_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_46_6_q0 = WEIGHT1_46_6_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_46_6_q0 = WEIGHT1_DB_46_6_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_46_6_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_46_6_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_47_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_47_0_q0 = WEIGHT1_47_0_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_47_0_q0 = WEIGHT1_DB_47_0_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_47_0_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_47_0_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_47_1_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_47_1_q0 = WEIGHT1_47_1_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_47_1_q0 = WEIGHT1_DB_47_1_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_47_1_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_47_1_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_47_2_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_47_2_q0 = WEIGHT1_47_2_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_47_2_q0 = WEIGHT1_DB_47_2_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_47_2_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_47_2_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_47_3_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_47_3_q0 = WEIGHT1_47_3_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_47_3_q0 = WEIGHT1_DB_47_3_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_47_3_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_47_3_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_47_4_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_47_4_q0 = WEIGHT1_47_4_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_47_4_q0 = WEIGHT1_DB_47_4_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_47_4_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_47_4_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_47_5_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_47_5_q0 = WEIGHT1_47_5_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_47_5_q0 = WEIGHT1_DB_47_5_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_47_5_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_47_5_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_47_6_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_47_6_q0 = WEIGHT1_47_6_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_47_6_q0 = WEIGHT1_DB_47_6_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_47_6_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_47_6_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_48_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_48_0_q0 = WEIGHT1_48_0_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_48_0_q0 = WEIGHT1_DB_48_0_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_48_0_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_48_0_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_48_1_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_48_1_q0 = WEIGHT1_48_1_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_48_1_q0 = WEIGHT1_DB_48_1_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_48_1_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_48_1_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_48_2_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_48_2_q0 = WEIGHT1_48_2_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_48_2_q0 = WEIGHT1_DB_48_2_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_48_2_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_48_2_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_48_3_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_48_3_q0 = WEIGHT1_48_3_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_48_3_q0 = WEIGHT1_DB_48_3_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_48_3_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_48_3_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_48_4_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_48_4_q0 = WEIGHT1_48_4_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_48_4_q0 = WEIGHT1_DB_48_4_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_48_4_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_48_4_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_48_5_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_48_5_q0 = WEIGHT1_48_5_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_48_5_q0 = WEIGHT1_DB_48_5_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_48_5_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_48_5_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_48_6_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_48_6_q0 = WEIGHT1_48_6_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_48_6_q0 = WEIGHT1_DB_48_6_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_48_6_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_48_6_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_49_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_49_0_q0 = WEIGHT1_49_0_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_49_0_q0 = WEIGHT1_DB_49_0_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_49_0_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_49_0_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_49_1_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_49_1_q0 = WEIGHT1_49_1_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_49_1_q0 = WEIGHT1_DB_49_1_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_49_1_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_49_1_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_49_2_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_49_2_q0 = WEIGHT1_49_2_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_49_2_q0 = WEIGHT1_DB_49_2_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_49_2_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_49_2_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_49_3_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_49_3_q0 = WEIGHT1_49_3_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_49_3_q0 = WEIGHT1_DB_49_3_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_49_3_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_49_3_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_49_4_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_49_4_q0 = WEIGHT1_49_4_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_49_4_q0 = WEIGHT1_DB_49_4_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_49_4_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_49_4_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_49_5_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_49_5_q0 = WEIGHT1_49_5_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_49_5_q0 = WEIGHT1_DB_49_5_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_49_5_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_49_5_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_49_6_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_49_6_q0 = WEIGHT1_49_6_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_49_6_q0 = WEIGHT1_DB_49_6_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_49_6_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_49_6_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_4_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_4_0_q0 = WEIGHT1_4_0_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_4_0_q0 = WEIGHT1_DB_4_0_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_4_0_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_4_0_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_4_1_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_4_1_q0 = WEIGHT1_4_1_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_4_1_q0 = WEIGHT1_DB_4_1_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_4_1_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_4_1_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_4_2_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_4_2_q0 = WEIGHT1_4_2_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_4_2_q0 = WEIGHT1_DB_4_2_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_4_2_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_4_2_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_4_3_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_4_3_q0 = WEIGHT1_4_3_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_4_3_q0 = WEIGHT1_DB_4_3_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_4_3_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_4_3_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_4_4_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_4_4_q0 = WEIGHT1_4_4_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_4_4_q0 = WEIGHT1_DB_4_4_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_4_4_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_4_4_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_4_5_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_4_5_q0 = WEIGHT1_4_5_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_4_5_q0 = WEIGHT1_DB_4_5_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_4_5_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_4_5_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_4_6_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_4_6_q0 = WEIGHT1_4_6_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_4_6_q0 = WEIGHT1_DB_4_6_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_4_6_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_4_6_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_50_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_50_0_q0 = WEIGHT1_50_0_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_50_0_q0 = WEIGHT1_DB_50_0_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_50_0_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_50_0_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_50_1_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_50_1_q0 = WEIGHT1_50_1_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_50_1_q0 = WEIGHT1_DB_50_1_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_50_1_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_50_1_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_50_2_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_50_2_q0 = WEIGHT1_50_2_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_50_2_q0 = WEIGHT1_DB_50_2_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_50_2_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_50_2_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_50_3_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_50_3_q0 = WEIGHT1_50_3_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_50_3_q0 = WEIGHT1_DB_50_3_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_50_3_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_50_3_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_50_4_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_50_4_q0 = WEIGHT1_50_4_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_50_4_q0 = WEIGHT1_DB_50_4_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_50_4_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_50_4_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_50_5_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_50_5_q0 = WEIGHT1_50_5_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_50_5_q0 = WEIGHT1_DB_50_5_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_50_5_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_50_5_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_50_6_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_50_6_q0 = WEIGHT1_50_6_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_50_6_q0 = WEIGHT1_DB_50_6_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_50_6_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_50_6_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_51_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_51_0_q0 = WEIGHT1_51_0_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_51_0_q0 = WEIGHT1_DB_51_0_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_51_0_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_51_0_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_51_1_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_51_1_q0 = WEIGHT1_51_1_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_51_1_q0 = WEIGHT1_DB_51_1_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_51_1_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_51_1_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_51_2_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_51_2_q0 = WEIGHT1_51_2_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_51_2_q0 = WEIGHT1_DB_51_2_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_51_2_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_51_2_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_51_3_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_51_3_q0 = WEIGHT1_51_3_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_51_3_q0 = WEIGHT1_DB_51_3_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_51_3_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_51_3_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_51_4_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_51_4_q0 = WEIGHT1_51_4_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_51_4_q0 = WEIGHT1_DB_51_4_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_51_4_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_51_4_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_51_5_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_51_5_q0 = WEIGHT1_51_5_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_51_5_q0 = WEIGHT1_DB_51_5_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_51_5_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_51_5_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_51_6_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_51_6_q0 = WEIGHT1_51_6_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_51_6_q0 = WEIGHT1_DB_51_6_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_51_6_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_51_6_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_52_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_52_0_q0 = WEIGHT1_52_0_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_52_0_q0 = WEIGHT1_DB_52_0_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_52_0_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_52_0_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_52_1_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_52_1_q0 = WEIGHT1_52_1_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_52_1_q0 = WEIGHT1_DB_52_1_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_52_1_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_52_1_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_52_2_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_52_2_q0 = WEIGHT1_52_2_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_52_2_q0 = WEIGHT1_DB_52_2_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_52_2_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_52_2_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_52_3_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_52_3_q0 = WEIGHT1_52_3_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_52_3_q0 = WEIGHT1_DB_52_3_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_52_3_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_52_3_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_52_4_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_52_4_q0 = WEIGHT1_52_4_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_52_4_q0 = WEIGHT1_DB_52_4_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_52_4_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_52_4_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_52_5_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_52_5_q0 = WEIGHT1_52_5_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_52_5_q0 = WEIGHT1_DB_52_5_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_52_5_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_52_5_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_52_6_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_52_6_q0 = WEIGHT1_52_6_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_52_6_q0 = WEIGHT1_DB_52_6_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_52_6_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_52_6_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_53_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_53_0_q0 = WEIGHT1_53_0_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_53_0_q0 = WEIGHT1_DB_53_0_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_53_0_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_53_0_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_53_1_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_53_1_q0 = WEIGHT1_53_1_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_53_1_q0 = WEIGHT1_DB_53_1_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_53_1_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_53_1_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_53_2_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_53_2_q0 = WEIGHT1_53_2_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_53_2_q0 = WEIGHT1_DB_53_2_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_53_2_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_53_2_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_53_3_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_53_3_q0 = WEIGHT1_53_3_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_53_3_q0 = WEIGHT1_DB_53_3_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_53_3_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_53_3_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_53_4_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_53_4_q0 = WEIGHT1_53_4_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_53_4_q0 = WEIGHT1_DB_53_4_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_53_4_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_53_4_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_53_5_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_53_5_q0 = WEIGHT1_53_5_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_53_5_q0 = WEIGHT1_DB_53_5_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_53_5_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_53_5_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_53_6_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_53_6_q0 = WEIGHT1_53_6_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_53_6_q0 = WEIGHT1_DB_53_6_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_53_6_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_53_6_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_54_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_54_0_q0 = WEIGHT1_54_0_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_54_0_q0 = WEIGHT1_DB_54_0_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_54_0_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_54_0_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_54_1_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_54_1_q0 = WEIGHT1_54_1_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_54_1_q0 = WEIGHT1_DB_54_1_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_54_1_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_54_1_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_54_2_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_54_2_q0 = WEIGHT1_54_2_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_54_2_q0 = WEIGHT1_DB_54_2_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_54_2_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_54_2_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_54_3_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_54_3_q0 = WEIGHT1_54_3_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_54_3_q0 = WEIGHT1_DB_54_3_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_54_3_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_54_3_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_54_4_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_54_4_q0 = WEIGHT1_54_4_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_54_4_q0 = WEIGHT1_DB_54_4_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_54_4_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_54_4_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_54_5_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_54_5_q0 = WEIGHT1_54_5_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_54_5_q0 = WEIGHT1_DB_54_5_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_54_5_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_54_5_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_54_6_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_54_6_q0 = WEIGHT1_54_6_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_54_6_q0 = WEIGHT1_DB_54_6_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_54_6_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_54_6_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_55_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_55_0_q0 = WEIGHT1_55_0_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_55_0_q0 = WEIGHT1_DB_55_0_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_55_0_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_55_0_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_55_1_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_55_1_q0 = WEIGHT1_55_1_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_55_1_q0 = WEIGHT1_DB_55_1_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_55_1_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_55_1_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_55_2_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_55_2_q0 = WEIGHT1_55_2_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_55_2_q0 = WEIGHT1_DB_55_2_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_55_2_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_55_2_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_55_3_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_55_3_q0 = WEIGHT1_55_3_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_55_3_q0 = WEIGHT1_DB_55_3_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_55_3_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_55_3_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_55_4_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_55_4_q0 = WEIGHT1_55_4_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_55_4_q0 = WEIGHT1_DB_55_4_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_55_4_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_55_4_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_55_5_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_55_5_q0 = WEIGHT1_55_5_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_55_5_q0 = WEIGHT1_DB_55_5_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_55_5_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_55_5_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_55_6_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_55_6_q0 = WEIGHT1_55_6_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_55_6_q0 = WEIGHT1_DB_55_6_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_55_6_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_55_6_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_56_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_56_0_q0 = WEIGHT1_56_0_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_56_0_q0 = WEIGHT1_DB_56_0_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_56_0_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_56_0_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_56_1_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_56_1_q0 = WEIGHT1_56_1_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_56_1_q0 = WEIGHT1_DB_56_1_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_56_1_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_56_1_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_56_2_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_56_2_q0 = WEIGHT1_56_2_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_56_2_q0 = WEIGHT1_DB_56_2_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_56_2_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_56_2_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_56_3_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_56_3_q0 = WEIGHT1_56_3_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_56_3_q0 = WEIGHT1_DB_56_3_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_56_3_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_56_3_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_56_4_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_56_4_q0 = WEIGHT1_56_4_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_56_4_q0 = WEIGHT1_DB_56_4_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_56_4_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_56_4_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_56_5_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_56_5_q0 = WEIGHT1_56_5_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_56_5_q0 = WEIGHT1_DB_56_5_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_56_5_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_56_5_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_56_6_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_56_6_q0 = WEIGHT1_56_6_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_56_6_q0 = WEIGHT1_DB_56_6_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_56_6_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_56_6_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_57_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_57_0_q0 = WEIGHT1_57_0_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_57_0_q0 = WEIGHT1_DB_57_0_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_57_0_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_57_0_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_57_1_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_57_1_q0 = WEIGHT1_57_1_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_57_1_q0 = WEIGHT1_DB_57_1_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_57_1_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_57_1_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_57_2_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_57_2_q0 = WEIGHT1_57_2_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_57_2_q0 = WEIGHT1_DB_57_2_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_57_2_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_57_2_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_57_3_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_57_3_q0 = WEIGHT1_57_3_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_57_3_q0 = WEIGHT1_DB_57_3_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_57_3_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_57_3_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_57_4_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_57_4_q0 = WEIGHT1_57_4_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_57_4_q0 = WEIGHT1_DB_57_4_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_57_4_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_57_4_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_57_5_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_57_5_q0 = WEIGHT1_57_5_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_57_5_q0 = WEIGHT1_DB_57_5_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_57_5_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_57_5_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_57_6_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_57_6_q0 = WEIGHT1_57_6_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_57_6_q0 = WEIGHT1_DB_57_6_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_57_6_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_57_6_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_58_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_58_0_q0 = WEIGHT1_58_0_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_58_0_q0 = WEIGHT1_DB_58_0_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_58_0_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_58_0_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_58_1_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_58_1_q0 = WEIGHT1_58_1_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_58_1_q0 = WEIGHT1_DB_58_1_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_58_1_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_58_1_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_58_2_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_58_2_q0 = WEIGHT1_58_2_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_58_2_q0 = WEIGHT1_DB_58_2_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_58_2_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_58_2_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_58_3_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_58_3_q0 = WEIGHT1_58_3_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_58_3_q0 = WEIGHT1_DB_58_3_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_58_3_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_58_3_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_58_4_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_58_4_q0 = WEIGHT1_58_4_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_58_4_q0 = WEIGHT1_DB_58_4_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_58_4_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_58_4_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_58_5_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_58_5_q0 = WEIGHT1_58_5_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_58_5_q0 = WEIGHT1_DB_58_5_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_58_5_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_58_5_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_58_6_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_58_6_q0 = WEIGHT1_58_6_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_58_6_q0 = WEIGHT1_DB_58_6_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_58_6_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_58_6_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_59_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_59_0_q0 = WEIGHT1_59_0_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_59_0_q0 = WEIGHT1_DB_59_0_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_59_0_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_59_0_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_59_1_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_59_1_q0 = WEIGHT1_59_1_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_59_1_q0 = WEIGHT1_DB_59_1_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_59_1_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_59_1_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_59_2_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_59_2_q0 = WEIGHT1_59_2_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_59_2_q0 = WEIGHT1_DB_59_2_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_59_2_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_59_2_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_59_3_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_59_3_q0 = WEIGHT1_59_3_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_59_3_q0 = WEIGHT1_DB_59_3_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_59_3_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_59_3_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_59_4_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_59_4_q0 = WEIGHT1_59_4_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_59_4_q0 = WEIGHT1_DB_59_4_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_59_4_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_59_4_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_59_5_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_59_5_q0 = WEIGHT1_59_5_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_59_5_q0 = WEIGHT1_DB_59_5_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_59_5_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_59_5_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_59_6_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_59_6_q0 = WEIGHT1_59_6_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_59_6_q0 = WEIGHT1_DB_59_6_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_59_6_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_59_6_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_5_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_5_0_q0 = WEIGHT1_5_0_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_5_0_q0 = WEIGHT1_DB_5_0_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_5_0_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_5_0_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_5_1_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_5_1_q0 = WEIGHT1_5_1_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_5_1_q0 = WEIGHT1_DB_5_1_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_5_1_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_5_1_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_5_2_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_5_2_q0 = WEIGHT1_5_2_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_5_2_q0 = WEIGHT1_DB_5_2_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_5_2_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_5_2_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_5_3_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_5_3_q0 = WEIGHT1_5_3_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_5_3_q0 = WEIGHT1_DB_5_3_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_5_3_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_5_3_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_5_4_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_5_4_q0 = WEIGHT1_5_4_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_5_4_q0 = WEIGHT1_DB_5_4_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_5_4_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_5_4_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_5_5_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_5_5_q0 = WEIGHT1_5_5_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_5_5_q0 = WEIGHT1_DB_5_5_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_5_5_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_5_5_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_5_6_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_5_6_q0 = WEIGHT1_5_6_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_5_6_q0 = WEIGHT1_DB_5_6_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_5_6_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_5_6_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_60_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_60_0_q0 = WEIGHT1_60_0_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_60_0_q0 = WEIGHT1_DB_60_0_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_60_0_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_60_0_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_60_1_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_60_1_q0 = WEIGHT1_60_1_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_60_1_q0 = WEIGHT1_DB_60_1_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_60_1_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_60_1_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_60_2_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_60_2_q0 = WEIGHT1_60_2_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_60_2_q0 = WEIGHT1_DB_60_2_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_60_2_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_60_2_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_60_3_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_60_3_q0 = WEIGHT1_60_3_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_60_3_q0 = WEIGHT1_DB_60_3_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_60_3_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_60_3_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_60_4_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_60_4_q0 = WEIGHT1_60_4_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_60_4_q0 = WEIGHT1_DB_60_4_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_60_4_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_60_4_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_60_5_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_60_5_q0 = WEIGHT1_60_5_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_60_5_q0 = WEIGHT1_DB_60_5_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_60_5_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_60_5_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_60_6_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_60_6_q0 = WEIGHT1_60_6_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_60_6_q0 = WEIGHT1_DB_60_6_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_60_6_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_60_6_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_61_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_61_0_q0 = WEIGHT1_61_0_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_61_0_q0 = WEIGHT1_DB_61_0_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_61_0_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_61_0_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_61_1_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_61_1_q0 = WEIGHT1_61_1_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_61_1_q0 = WEIGHT1_DB_61_1_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_61_1_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_61_1_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_61_2_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_61_2_q0 = WEIGHT1_61_2_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_61_2_q0 = WEIGHT1_DB_61_2_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_61_2_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_61_2_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_61_3_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_61_3_q0 = WEIGHT1_61_3_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_61_3_q0 = WEIGHT1_DB_61_3_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_61_3_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_61_3_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_61_4_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_61_4_q0 = WEIGHT1_61_4_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_61_4_q0 = WEIGHT1_DB_61_4_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_61_4_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_61_4_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_61_5_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_61_5_q0 = WEIGHT1_61_5_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_61_5_q0 = WEIGHT1_DB_61_5_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_61_5_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_61_5_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_61_6_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_61_6_q0 = WEIGHT1_61_6_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_61_6_q0 = WEIGHT1_DB_61_6_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_61_6_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_61_6_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_62_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_62_0_q0 = WEIGHT1_62_0_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_62_0_q0 = WEIGHT1_DB_62_0_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_62_0_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_62_0_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_62_1_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_62_1_q0 = WEIGHT1_62_1_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_62_1_q0 = WEIGHT1_DB_62_1_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_62_1_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_62_1_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_62_2_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_62_2_q0 = WEIGHT1_62_2_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_62_2_q0 = WEIGHT1_DB_62_2_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_62_2_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_62_2_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_62_3_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_62_3_q0 = WEIGHT1_62_3_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_62_3_q0 = WEIGHT1_DB_62_3_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_62_3_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_62_3_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_62_4_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_62_4_q0 = WEIGHT1_62_4_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_62_4_q0 = WEIGHT1_DB_62_4_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_62_4_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_62_4_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_62_5_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_62_5_q0 = WEIGHT1_62_5_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_62_5_q0 = WEIGHT1_DB_62_5_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_62_5_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_62_5_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_62_6_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_62_6_q0 = WEIGHT1_62_6_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_62_6_q0 = WEIGHT1_DB_62_6_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_62_6_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_62_6_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_63_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_63_0_q0 = WEIGHT1_63_0_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_63_0_q0 = WEIGHT1_DB_63_0_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_63_0_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_63_0_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_63_1_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_63_1_q0 = WEIGHT1_63_1_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_63_1_q0 = WEIGHT1_DB_63_1_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_63_1_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_63_1_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_63_2_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_63_2_q0 = WEIGHT1_63_2_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_63_2_q0 = WEIGHT1_DB_63_2_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_63_2_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_63_2_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_63_3_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_63_3_q0 = WEIGHT1_63_3_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_63_3_q0 = WEIGHT1_DB_63_3_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_63_3_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_63_3_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_63_4_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_63_4_q0 = WEIGHT1_63_4_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_63_4_q0 = WEIGHT1_DB_63_4_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_63_4_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_63_4_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_63_5_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_63_5_q0 = WEIGHT1_63_5_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_63_5_q0 = WEIGHT1_DB_63_5_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_63_5_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_63_5_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_63_6_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_63_6_q0 = WEIGHT1_63_6_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_63_6_q0 = WEIGHT1_DB_63_6_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_63_6_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_63_6_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_6_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_6_0_q0 = WEIGHT1_6_0_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_6_0_q0 = WEIGHT1_DB_6_0_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_6_0_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_6_0_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_6_1_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_6_1_q0 = WEIGHT1_6_1_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_6_1_q0 = WEIGHT1_DB_6_1_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_6_1_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_6_1_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_6_2_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_6_2_q0 = WEIGHT1_6_2_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_6_2_q0 = WEIGHT1_DB_6_2_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_6_2_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_6_2_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_6_3_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_6_3_q0 = WEIGHT1_6_3_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_6_3_q0 = WEIGHT1_DB_6_3_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_6_3_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_6_3_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_6_4_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_6_4_q0 = WEIGHT1_6_4_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_6_4_q0 = WEIGHT1_DB_6_4_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_6_4_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_6_4_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_6_5_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_6_5_q0 = WEIGHT1_6_5_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_6_5_q0 = WEIGHT1_DB_6_5_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_6_5_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_6_5_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_6_6_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_6_6_q0 = WEIGHT1_6_6_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_6_6_q0 = WEIGHT1_DB_6_6_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_6_6_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_6_6_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_7_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_7_0_q0 = WEIGHT1_7_0_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_7_0_q0 = WEIGHT1_DB_7_0_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_7_0_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_7_0_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_7_1_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_7_1_q0 = WEIGHT1_7_1_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_7_1_q0 = WEIGHT1_DB_7_1_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_7_1_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_7_1_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_7_2_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_7_2_q0 = WEIGHT1_7_2_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_7_2_q0 = WEIGHT1_DB_7_2_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_7_2_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_7_2_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_7_3_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_7_3_q0 = WEIGHT1_7_3_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_7_3_q0 = WEIGHT1_DB_7_3_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_7_3_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_7_3_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_7_4_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_7_4_q0 = WEIGHT1_7_4_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_7_4_q0 = WEIGHT1_DB_7_4_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_7_4_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_7_4_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_7_5_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_7_5_q0 = WEIGHT1_7_5_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_7_5_q0 = WEIGHT1_DB_7_5_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_7_5_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_7_5_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_7_6_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_7_6_q0 = WEIGHT1_7_6_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_7_6_q0 = WEIGHT1_DB_7_6_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_7_6_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_7_6_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_8_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_8_0_q0 = WEIGHT1_8_0_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_8_0_q0 = WEIGHT1_DB_8_0_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_8_0_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_8_0_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_8_1_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_8_1_q0 = WEIGHT1_8_1_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_8_1_q0 = WEIGHT1_DB_8_1_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_8_1_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_8_1_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_8_2_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_8_2_q0 = WEIGHT1_8_2_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_8_2_q0 = WEIGHT1_DB_8_2_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_8_2_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_8_2_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_8_3_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_8_3_q0 = WEIGHT1_8_3_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_8_3_q0 = WEIGHT1_DB_8_3_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_8_3_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_8_3_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_8_4_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_8_4_q0 = WEIGHT1_8_4_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_8_4_q0 = WEIGHT1_DB_8_4_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_8_4_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_8_4_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_8_5_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_8_5_q0 = WEIGHT1_8_5_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_8_5_q0 = WEIGHT1_DB_8_5_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_8_5_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_8_5_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_8_6_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_8_6_q0 = WEIGHT1_8_6_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_8_6_q0 = WEIGHT1_DB_8_6_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_8_6_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_8_6_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_9_0_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_9_0_q0 = WEIGHT1_9_0_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_9_0_q0 = WEIGHT1_DB_9_0_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_9_0_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_9_0_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_9_1_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_9_1_q0 = WEIGHT1_9_1_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_9_1_q0 = WEIGHT1_DB_9_1_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_9_1_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_9_1_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_9_2_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_9_2_q0 = WEIGHT1_9_2_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_9_2_q0 = WEIGHT1_DB_9_2_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_9_2_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_9_2_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_9_3_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_9_3_q0 = WEIGHT1_9_3_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_9_3_q0 = WEIGHT1_DB_9_3_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_9_3_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_9_3_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_9_4_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_9_4_q0 = WEIGHT1_9_4_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_9_4_q0 = WEIGHT1_DB_9_4_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_9_4_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_9_4_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_9_5_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_9_5_q0 = WEIGHT1_9_5_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_9_5_q0 = WEIGHT1_DB_9_5_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_9_5_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_9_5_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_WEIGHT1_9_6_q0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            grp_FIRE3_fu_2067_WEIGHT1_9_6_q0 = WEIGHT1_9_6_q0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            grp_FIRE3_fu_2067_WEIGHT1_9_6_q0 = WEIGHT1_DB_9_6_q0.read();
        } else {
            grp_FIRE3_fu_2067_WEIGHT1_9_6_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_FIRE3_fu_2067_WEIGHT1_9_6_q0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void Load_Fire::thread_grp_FIRE3_fu_2067_ap_start() {
    grp_FIRE3_fu_2067_ap_start = grp_FIRE3_fu_2067_ap_start_reg.read();
}

void Load_Fire::thread_grp_LOAD_IFM_fu_4922_ap_start() {
    grp_LOAD_IFM_fu_4922_ap_start = grp_LOAD_IFM_fu_4922_ap_start_reg.read();
}

void Load_Fire::thread_grp_LOAD_WEIGHT_DMA_fu_3569_ap_start() {
    grp_LOAD_WEIGHT_DMA_fu_3569_ap_start = grp_LOAD_WEIGHT_DMA_fu_3569_ap_start_reg.read();
}

void Load_Fire::thread_i_3_fu_4968_p2() {
    i_3_fu_4968_p2 = (!i_reg_2055.read().is_01() || !ap_const_lv32_7.is_01())? sc_lv<32>(): (sc_biguint<32>(i_reg_2055.read()) + sc_biguint<32>(ap_const_lv32_7));
}

void Load_Fire::thread_idx_1_fu_4962_p2() {
    idx_1_fu_4962_p2 = (!ap_const_lv32_1.is_01() || !idx_reg_2044.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_1) + sc_biguint<32>(idx_reg_2044.read()));
}

void Load_Fire::thread_input_dma_I_TREADY() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        input_dma_I_TREADY = grp_LOAD_IFM_fu_4922_input_dma_I_TREADY.read();
    } else {
        input_dma_I_TREADY = ap_const_logic_0;
    }
}

void Load_Fire::thread_input_dma_W_TREADY() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        input_dma_W_TREADY = grp_LOAD_WEIGHT_DMA_fu_3569_input_dma_W_TREADY.read();
    } else {
        input_dma_W_TREADY = ap_const_logic_0;
    }
}

void Load_Fire::thread_tmp_23_fu_4953_p1() {
    tmp_23_fu_4953_p1 = idx_reg_2044.read().range(1-1, 0);
}

void Load_Fire::thread_tmp_fu_4957_p2() {
    tmp_fu_4957_p2 = (!i_reg_2055.read().is_01() || !N.read().is_01())? sc_lv<1>(): (sc_bigint<32>(i_reg_2055.read()) < sc_bigint<32>(N.read()));
}

}

