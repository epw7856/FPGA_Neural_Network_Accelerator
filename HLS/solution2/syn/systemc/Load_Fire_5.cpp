#include "Load_Fire.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void Load_Fire::thread_WEIGHT1_DB_19_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_19_2_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_19_2_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_19_2_address0 = grp_FIRE3_fu_2067_WEIGHT1_19_2_address0.read();
        } else {
            WEIGHT1_DB_19_2_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_19_2_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_19_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_19_2_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_19_2_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_19_2_ce0 = grp_FIRE3_fu_2067_WEIGHT1_19_2_ce0.read();
        } else {
            WEIGHT1_DB_19_2_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_19_2_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_19_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_19_2_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_19_2_we0.read();
    } else {
        WEIGHT1_DB_19_2_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_19_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_19_3_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_19_3_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_19_3_address0 = grp_FIRE3_fu_2067_WEIGHT1_19_3_address0.read();
        } else {
            WEIGHT1_DB_19_3_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_19_3_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_19_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_19_3_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_19_3_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_19_3_ce0 = grp_FIRE3_fu_2067_WEIGHT1_19_3_ce0.read();
        } else {
            WEIGHT1_DB_19_3_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_19_3_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_19_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_19_3_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_19_3_we0.read();
    } else {
        WEIGHT1_DB_19_3_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_19_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_19_4_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_19_4_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_19_4_address0 = grp_FIRE3_fu_2067_WEIGHT1_19_4_address0.read();
        } else {
            WEIGHT1_DB_19_4_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_19_4_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_19_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_19_4_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_19_4_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_19_4_ce0 = grp_FIRE3_fu_2067_WEIGHT1_19_4_ce0.read();
        } else {
            WEIGHT1_DB_19_4_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_19_4_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_19_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_19_4_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_19_4_we0.read();
    } else {
        WEIGHT1_DB_19_4_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_19_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_19_5_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_19_5_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_19_5_address0 = grp_FIRE3_fu_2067_WEIGHT1_19_5_address0.read();
        } else {
            WEIGHT1_DB_19_5_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_19_5_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_19_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_19_5_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_19_5_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_19_5_ce0 = grp_FIRE3_fu_2067_WEIGHT1_19_5_ce0.read();
        } else {
            WEIGHT1_DB_19_5_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_19_5_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_19_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_19_5_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_19_5_we0.read();
    } else {
        WEIGHT1_DB_19_5_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_19_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_19_6_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_19_6_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_19_6_address0 = grp_FIRE3_fu_2067_WEIGHT1_19_6_address0.read();
        } else {
            WEIGHT1_DB_19_6_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_19_6_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_19_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_19_6_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_19_6_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_19_6_ce0 = grp_FIRE3_fu_2067_WEIGHT1_19_6_ce0.read();
        } else {
            WEIGHT1_DB_19_6_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_19_6_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_19_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_19_6_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_19_6_we0.read();
    } else {
        WEIGHT1_DB_19_6_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_1_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_1_0_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_1_0_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_1_0_address0 = grp_FIRE3_fu_2067_WEIGHT1_1_0_address0.read();
        } else {
            WEIGHT1_DB_1_0_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_1_0_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_1_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_1_0_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_1_0_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_1_0_ce0 = grp_FIRE3_fu_2067_WEIGHT1_1_0_ce0.read();
        } else {
            WEIGHT1_DB_1_0_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_1_0_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_1_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_1_0_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_1_0_we0.read();
    } else {
        WEIGHT1_DB_1_0_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_1_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_1_1_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_1_1_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_1_1_address0 = grp_FIRE3_fu_2067_WEIGHT1_1_1_address0.read();
        } else {
            WEIGHT1_DB_1_1_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_1_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_1_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_1_1_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_1_1_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_1_1_ce0 = grp_FIRE3_fu_2067_WEIGHT1_1_1_ce0.read();
        } else {
            WEIGHT1_DB_1_1_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_1_1_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_1_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_1_1_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_1_1_we0.read();
    } else {
        WEIGHT1_DB_1_1_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_1_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_1_2_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_1_2_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_1_2_address0 = grp_FIRE3_fu_2067_WEIGHT1_1_2_address0.read();
        } else {
            WEIGHT1_DB_1_2_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_1_2_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_1_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_1_2_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_1_2_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_1_2_ce0 = grp_FIRE3_fu_2067_WEIGHT1_1_2_ce0.read();
        } else {
            WEIGHT1_DB_1_2_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_1_2_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_1_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_1_2_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_1_2_we0.read();
    } else {
        WEIGHT1_DB_1_2_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_1_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_1_3_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_1_3_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_1_3_address0 = grp_FIRE3_fu_2067_WEIGHT1_1_3_address0.read();
        } else {
            WEIGHT1_DB_1_3_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_1_3_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_1_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_1_3_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_1_3_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_1_3_ce0 = grp_FIRE3_fu_2067_WEIGHT1_1_3_ce0.read();
        } else {
            WEIGHT1_DB_1_3_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_1_3_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_1_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_1_3_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_1_3_we0.read();
    } else {
        WEIGHT1_DB_1_3_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_1_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_1_4_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_1_4_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_1_4_address0 = grp_FIRE3_fu_2067_WEIGHT1_1_4_address0.read();
        } else {
            WEIGHT1_DB_1_4_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_1_4_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_1_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_1_4_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_1_4_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_1_4_ce0 = grp_FIRE3_fu_2067_WEIGHT1_1_4_ce0.read();
        } else {
            WEIGHT1_DB_1_4_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_1_4_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_1_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_1_4_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_1_4_we0.read();
    } else {
        WEIGHT1_DB_1_4_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_1_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_1_5_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_1_5_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_1_5_address0 = grp_FIRE3_fu_2067_WEIGHT1_1_5_address0.read();
        } else {
            WEIGHT1_DB_1_5_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_1_5_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_1_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_1_5_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_1_5_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_1_5_ce0 = grp_FIRE3_fu_2067_WEIGHT1_1_5_ce0.read();
        } else {
            WEIGHT1_DB_1_5_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_1_5_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_1_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_1_5_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_1_5_we0.read();
    } else {
        WEIGHT1_DB_1_5_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_1_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_1_6_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_1_6_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_1_6_address0 = grp_FIRE3_fu_2067_WEIGHT1_1_6_address0.read();
        } else {
            WEIGHT1_DB_1_6_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_1_6_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_1_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_1_6_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_1_6_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_1_6_ce0 = grp_FIRE3_fu_2067_WEIGHT1_1_6_ce0.read();
        } else {
            WEIGHT1_DB_1_6_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_1_6_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_1_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_1_6_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_1_6_we0.read();
    } else {
        WEIGHT1_DB_1_6_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_20_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_20_0_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_20_0_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_20_0_address0 = grp_FIRE3_fu_2067_WEIGHT1_20_0_address0.read();
        } else {
            WEIGHT1_DB_20_0_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_20_0_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_20_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_20_0_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_20_0_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_20_0_ce0 = grp_FIRE3_fu_2067_WEIGHT1_20_0_ce0.read();
        } else {
            WEIGHT1_DB_20_0_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_20_0_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_20_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_20_0_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_20_0_we0.read();
    } else {
        WEIGHT1_DB_20_0_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_20_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_20_1_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_20_1_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_20_1_address0 = grp_FIRE3_fu_2067_WEIGHT1_20_1_address0.read();
        } else {
            WEIGHT1_DB_20_1_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_20_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_20_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_20_1_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_20_1_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_20_1_ce0 = grp_FIRE3_fu_2067_WEIGHT1_20_1_ce0.read();
        } else {
            WEIGHT1_DB_20_1_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_20_1_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_20_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_20_1_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_20_1_we0.read();
    } else {
        WEIGHT1_DB_20_1_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_20_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_20_2_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_20_2_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_20_2_address0 = grp_FIRE3_fu_2067_WEIGHT1_20_2_address0.read();
        } else {
            WEIGHT1_DB_20_2_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_20_2_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_20_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_20_2_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_20_2_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_20_2_ce0 = grp_FIRE3_fu_2067_WEIGHT1_20_2_ce0.read();
        } else {
            WEIGHT1_DB_20_2_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_20_2_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_20_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_20_2_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_20_2_we0.read();
    } else {
        WEIGHT1_DB_20_2_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_20_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_20_3_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_20_3_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_20_3_address0 = grp_FIRE3_fu_2067_WEIGHT1_20_3_address0.read();
        } else {
            WEIGHT1_DB_20_3_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_20_3_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_20_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_20_3_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_20_3_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_20_3_ce0 = grp_FIRE3_fu_2067_WEIGHT1_20_3_ce0.read();
        } else {
            WEIGHT1_DB_20_3_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_20_3_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_20_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_20_3_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_20_3_we0.read();
    } else {
        WEIGHT1_DB_20_3_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_20_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_20_4_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_20_4_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_20_4_address0 = grp_FIRE3_fu_2067_WEIGHT1_20_4_address0.read();
        } else {
            WEIGHT1_DB_20_4_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_20_4_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_20_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_20_4_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_20_4_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_20_4_ce0 = grp_FIRE3_fu_2067_WEIGHT1_20_4_ce0.read();
        } else {
            WEIGHT1_DB_20_4_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_20_4_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_20_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_20_4_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_20_4_we0.read();
    } else {
        WEIGHT1_DB_20_4_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_20_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_20_5_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_20_5_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_20_5_address0 = grp_FIRE3_fu_2067_WEIGHT1_20_5_address0.read();
        } else {
            WEIGHT1_DB_20_5_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_20_5_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_20_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_20_5_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_20_5_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_20_5_ce0 = grp_FIRE3_fu_2067_WEIGHT1_20_5_ce0.read();
        } else {
            WEIGHT1_DB_20_5_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_20_5_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_20_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_20_5_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_20_5_we0.read();
    } else {
        WEIGHT1_DB_20_5_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_20_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_20_6_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_20_6_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_20_6_address0 = grp_FIRE3_fu_2067_WEIGHT1_20_6_address0.read();
        } else {
            WEIGHT1_DB_20_6_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_20_6_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_20_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_20_6_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_20_6_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_20_6_ce0 = grp_FIRE3_fu_2067_WEIGHT1_20_6_ce0.read();
        } else {
            WEIGHT1_DB_20_6_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_20_6_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_20_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_20_6_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_20_6_we0.read();
    } else {
        WEIGHT1_DB_20_6_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_21_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_21_0_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_21_0_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_21_0_address0 = grp_FIRE3_fu_2067_WEIGHT1_21_0_address0.read();
        } else {
            WEIGHT1_DB_21_0_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_21_0_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_21_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_21_0_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_21_0_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_21_0_ce0 = grp_FIRE3_fu_2067_WEIGHT1_21_0_ce0.read();
        } else {
            WEIGHT1_DB_21_0_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_21_0_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_21_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_21_0_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_21_0_we0.read();
    } else {
        WEIGHT1_DB_21_0_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_21_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_21_1_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_21_1_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_21_1_address0 = grp_FIRE3_fu_2067_WEIGHT1_21_1_address0.read();
        } else {
            WEIGHT1_DB_21_1_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_21_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_21_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_21_1_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_21_1_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_21_1_ce0 = grp_FIRE3_fu_2067_WEIGHT1_21_1_ce0.read();
        } else {
            WEIGHT1_DB_21_1_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_21_1_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_21_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_21_1_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_21_1_we0.read();
    } else {
        WEIGHT1_DB_21_1_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_21_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_21_2_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_21_2_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_21_2_address0 = grp_FIRE3_fu_2067_WEIGHT1_21_2_address0.read();
        } else {
            WEIGHT1_DB_21_2_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_21_2_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_21_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_21_2_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_21_2_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_21_2_ce0 = grp_FIRE3_fu_2067_WEIGHT1_21_2_ce0.read();
        } else {
            WEIGHT1_DB_21_2_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_21_2_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_21_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_21_2_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_21_2_we0.read();
    } else {
        WEIGHT1_DB_21_2_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_21_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_21_3_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_21_3_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_21_3_address0 = grp_FIRE3_fu_2067_WEIGHT1_21_3_address0.read();
        } else {
            WEIGHT1_DB_21_3_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_21_3_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_21_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_21_3_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_21_3_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_21_3_ce0 = grp_FIRE3_fu_2067_WEIGHT1_21_3_ce0.read();
        } else {
            WEIGHT1_DB_21_3_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_21_3_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_21_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_21_3_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_21_3_we0.read();
    } else {
        WEIGHT1_DB_21_3_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_21_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_21_4_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_21_4_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_21_4_address0 = grp_FIRE3_fu_2067_WEIGHT1_21_4_address0.read();
        } else {
            WEIGHT1_DB_21_4_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_21_4_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_21_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_21_4_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_21_4_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_21_4_ce0 = grp_FIRE3_fu_2067_WEIGHT1_21_4_ce0.read();
        } else {
            WEIGHT1_DB_21_4_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_21_4_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_21_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_21_4_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_21_4_we0.read();
    } else {
        WEIGHT1_DB_21_4_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_21_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_21_5_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_21_5_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_21_5_address0 = grp_FIRE3_fu_2067_WEIGHT1_21_5_address0.read();
        } else {
            WEIGHT1_DB_21_5_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_21_5_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_21_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_21_5_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_21_5_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_21_5_ce0 = grp_FIRE3_fu_2067_WEIGHT1_21_5_ce0.read();
        } else {
            WEIGHT1_DB_21_5_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_21_5_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_21_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_21_5_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_21_5_we0.read();
    } else {
        WEIGHT1_DB_21_5_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_21_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_21_6_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_21_6_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_21_6_address0 = grp_FIRE3_fu_2067_WEIGHT1_21_6_address0.read();
        } else {
            WEIGHT1_DB_21_6_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_21_6_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_21_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_21_6_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_21_6_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_21_6_ce0 = grp_FIRE3_fu_2067_WEIGHT1_21_6_ce0.read();
        } else {
            WEIGHT1_DB_21_6_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_21_6_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_21_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_21_6_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_21_6_we0.read();
    } else {
        WEIGHT1_DB_21_6_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_22_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_22_0_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_22_0_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_22_0_address0 = grp_FIRE3_fu_2067_WEIGHT1_22_0_address0.read();
        } else {
            WEIGHT1_DB_22_0_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_22_0_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_22_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_22_0_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_22_0_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_22_0_ce0 = grp_FIRE3_fu_2067_WEIGHT1_22_0_ce0.read();
        } else {
            WEIGHT1_DB_22_0_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_22_0_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_22_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_22_0_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_22_0_we0.read();
    } else {
        WEIGHT1_DB_22_0_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_22_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_22_1_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_22_1_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_22_1_address0 = grp_FIRE3_fu_2067_WEIGHT1_22_1_address0.read();
        } else {
            WEIGHT1_DB_22_1_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_22_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_22_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_22_1_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_22_1_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_22_1_ce0 = grp_FIRE3_fu_2067_WEIGHT1_22_1_ce0.read();
        } else {
            WEIGHT1_DB_22_1_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_22_1_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_22_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_22_1_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_22_1_we0.read();
    } else {
        WEIGHT1_DB_22_1_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_22_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_22_2_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_22_2_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_22_2_address0 = grp_FIRE3_fu_2067_WEIGHT1_22_2_address0.read();
        } else {
            WEIGHT1_DB_22_2_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_22_2_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_22_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_22_2_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_22_2_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_22_2_ce0 = grp_FIRE3_fu_2067_WEIGHT1_22_2_ce0.read();
        } else {
            WEIGHT1_DB_22_2_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_22_2_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_22_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_22_2_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_22_2_we0.read();
    } else {
        WEIGHT1_DB_22_2_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_22_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_22_3_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_22_3_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_22_3_address0 = grp_FIRE3_fu_2067_WEIGHT1_22_3_address0.read();
        } else {
            WEIGHT1_DB_22_3_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_22_3_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_22_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_22_3_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_22_3_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_22_3_ce0 = grp_FIRE3_fu_2067_WEIGHT1_22_3_ce0.read();
        } else {
            WEIGHT1_DB_22_3_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_22_3_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_22_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_22_3_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_22_3_we0.read();
    } else {
        WEIGHT1_DB_22_3_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_22_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_22_4_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_22_4_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_22_4_address0 = grp_FIRE3_fu_2067_WEIGHT1_22_4_address0.read();
        } else {
            WEIGHT1_DB_22_4_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_22_4_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_22_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_22_4_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_22_4_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_22_4_ce0 = grp_FIRE3_fu_2067_WEIGHT1_22_4_ce0.read();
        } else {
            WEIGHT1_DB_22_4_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_22_4_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_22_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_22_4_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_22_4_we0.read();
    } else {
        WEIGHT1_DB_22_4_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_22_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_22_5_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_22_5_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_22_5_address0 = grp_FIRE3_fu_2067_WEIGHT1_22_5_address0.read();
        } else {
            WEIGHT1_DB_22_5_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_22_5_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_22_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_22_5_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_22_5_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_22_5_ce0 = grp_FIRE3_fu_2067_WEIGHT1_22_5_ce0.read();
        } else {
            WEIGHT1_DB_22_5_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_22_5_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_22_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_22_5_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_22_5_we0.read();
    } else {
        WEIGHT1_DB_22_5_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_22_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_22_6_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_22_6_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_22_6_address0 = grp_FIRE3_fu_2067_WEIGHT1_22_6_address0.read();
        } else {
            WEIGHT1_DB_22_6_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_22_6_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_22_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_22_6_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_22_6_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_22_6_ce0 = grp_FIRE3_fu_2067_WEIGHT1_22_6_ce0.read();
        } else {
            WEIGHT1_DB_22_6_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_22_6_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_22_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_22_6_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_22_6_we0.read();
    } else {
        WEIGHT1_DB_22_6_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_23_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_23_0_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_23_0_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_23_0_address0 = grp_FIRE3_fu_2067_WEIGHT1_23_0_address0.read();
        } else {
            WEIGHT1_DB_23_0_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_23_0_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_23_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_23_0_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_23_0_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_23_0_ce0 = grp_FIRE3_fu_2067_WEIGHT1_23_0_ce0.read();
        } else {
            WEIGHT1_DB_23_0_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_23_0_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_23_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_23_0_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_23_0_we0.read();
    } else {
        WEIGHT1_DB_23_0_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_23_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_23_1_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_23_1_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_23_1_address0 = grp_FIRE3_fu_2067_WEIGHT1_23_1_address0.read();
        } else {
            WEIGHT1_DB_23_1_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_23_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_23_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_23_1_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_23_1_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_23_1_ce0 = grp_FIRE3_fu_2067_WEIGHT1_23_1_ce0.read();
        } else {
            WEIGHT1_DB_23_1_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_23_1_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_23_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_23_1_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_23_1_we0.read();
    } else {
        WEIGHT1_DB_23_1_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_23_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_23_2_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_23_2_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_23_2_address0 = grp_FIRE3_fu_2067_WEIGHT1_23_2_address0.read();
        } else {
            WEIGHT1_DB_23_2_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_23_2_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_23_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_23_2_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_23_2_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_23_2_ce0 = grp_FIRE3_fu_2067_WEIGHT1_23_2_ce0.read();
        } else {
            WEIGHT1_DB_23_2_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_23_2_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_23_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_23_2_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_23_2_we0.read();
    } else {
        WEIGHT1_DB_23_2_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_23_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_23_3_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_23_3_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_23_3_address0 = grp_FIRE3_fu_2067_WEIGHT1_23_3_address0.read();
        } else {
            WEIGHT1_DB_23_3_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_23_3_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_23_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_23_3_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_23_3_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_23_3_ce0 = grp_FIRE3_fu_2067_WEIGHT1_23_3_ce0.read();
        } else {
            WEIGHT1_DB_23_3_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_23_3_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_23_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_23_3_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_23_3_we0.read();
    } else {
        WEIGHT1_DB_23_3_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_23_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_23_4_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_23_4_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_23_4_address0 = grp_FIRE3_fu_2067_WEIGHT1_23_4_address0.read();
        } else {
            WEIGHT1_DB_23_4_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_23_4_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_23_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_23_4_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_23_4_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_23_4_ce0 = grp_FIRE3_fu_2067_WEIGHT1_23_4_ce0.read();
        } else {
            WEIGHT1_DB_23_4_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_23_4_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_23_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_23_4_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_23_4_we0.read();
    } else {
        WEIGHT1_DB_23_4_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_23_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_23_5_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_23_5_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_23_5_address0 = grp_FIRE3_fu_2067_WEIGHT1_23_5_address0.read();
        } else {
            WEIGHT1_DB_23_5_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_23_5_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_23_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_23_5_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_23_5_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_23_5_ce0 = grp_FIRE3_fu_2067_WEIGHT1_23_5_ce0.read();
        } else {
            WEIGHT1_DB_23_5_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_23_5_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_23_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_23_5_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_23_5_we0.read();
    } else {
        WEIGHT1_DB_23_5_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_23_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_23_6_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_23_6_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_23_6_address0 = grp_FIRE3_fu_2067_WEIGHT1_23_6_address0.read();
        } else {
            WEIGHT1_DB_23_6_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_23_6_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_23_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_23_6_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_23_6_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_23_6_ce0 = grp_FIRE3_fu_2067_WEIGHT1_23_6_ce0.read();
        } else {
            WEIGHT1_DB_23_6_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_23_6_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_23_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_23_6_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_23_6_we0.read();
    } else {
        WEIGHT1_DB_23_6_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_24_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_24_0_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_24_0_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_24_0_address0 = grp_FIRE3_fu_2067_WEIGHT1_24_0_address0.read();
        } else {
            WEIGHT1_DB_24_0_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_24_0_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_24_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_24_0_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_24_0_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_24_0_ce0 = grp_FIRE3_fu_2067_WEIGHT1_24_0_ce0.read();
        } else {
            WEIGHT1_DB_24_0_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_24_0_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_24_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_24_0_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_24_0_we0.read();
    } else {
        WEIGHT1_DB_24_0_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_24_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_24_1_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_24_1_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_24_1_address0 = grp_FIRE3_fu_2067_WEIGHT1_24_1_address0.read();
        } else {
            WEIGHT1_DB_24_1_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_24_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_24_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_24_1_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_24_1_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_24_1_ce0 = grp_FIRE3_fu_2067_WEIGHT1_24_1_ce0.read();
        } else {
            WEIGHT1_DB_24_1_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_24_1_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_24_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_24_1_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_24_1_we0.read();
    } else {
        WEIGHT1_DB_24_1_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_24_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_24_2_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_24_2_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_24_2_address0 = grp_FIRE3_fu_2067_WEIGHT1_24_2_address0.read();
        } else {
            WEIGHT1_DB_24_2_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_24_2_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_24_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_24_2_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_24_2_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_24_2_ce0 = grp_FIRE3_fu_2067_WEIGHT1_24_2_ce0.read();
        } else {
            WEIGHT1_DB_24_2_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_24_2_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_24_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_24_2_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_24_2_we0.read();
    } else {
        WEIGHT1_DB_24_2_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_24_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_24_3_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_24_3_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_24_3_address0 = grp_FIRE3_fu_2067_WEIGHT1_24_3_address0.read();
        } else {
            WEIGHT1_DB_24_3_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_24_3_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_24_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_24_3_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_24_3_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_24_3_ce0 = grp_FIRE3_fu_2067_WEIGHT1_24_3_ce0.read();
        } else {
            WEIGHT1_DB_24_3_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_24_3_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_24_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_24_3_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_24_3_we0.read();
    } else {
        WEIGHT1_DB_24_3_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_24_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_24_4_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_24_4_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_24_4_address0 = grp_FIRE3_fu_2067_WEIGHT1_24_4_address0.read();
        } else {
            WEIGHT1_DB_24_4_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_24_4_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_24_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_24_4_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_24_4_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_24_4_ce0 = grp_FIRE3_fu_2067_WEIGHT1_24_4_ce0.read();
        } else {
            WEIGHT1_DB_24_4_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_24_4_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_24_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_24_4_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_24_4_we0.read();
    } else {
        WEIGHT1_DB_24_4_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_24_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_24_5_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_24_5_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_24_5_address0 = grp_FIRE3_fu_2067_WEIGHT1_24_5_address0.read();
        } else {
            WEIGHT1_DB_24_5_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_24_5_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_24_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_24_5_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_24_5_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_24_5_ce0 = grp_FIRE3_fu_2067_WEIGHT1_24_5_ce0.read();
        } else {
            WEIGHT1_DB_24_5_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_24_5_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_24_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_24_5_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_24_5_we0.read();
    } else {
        WEIGHT1_DB_24_5_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_24_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_24_6_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_24_6_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_24_6_address0 = grp_FIRE3_fu_2067_WEIGHT1_24_6_address0.read();
        } else {
            WEIGHT1_DB_24_6_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_24_6_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_24_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_24_6_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_24_6_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_24_6_ce0 = grp_FIRE3_fu_2067_WEIGHT1_24_6_ce0.read();
        } else {
            WEIGHT1_DB_24_6_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_24_6_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_24_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_24_6_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_24_6_we0.read();
    } else {
        WEIGHT1_DB_24_6_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_25_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_25_0_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_25_0_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_25_0_address0 = grp_FIRE3_fu_2067_WEIGHT1_25_0_address0.read();
        } else {
            WEIGHT1_DB_25_0_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_25_0_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_25_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_25_0_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_25_0_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_25_0_ce0 = grp_FIRE3_fu_2067_WEIGHT1_25_0_ce0.read();
        } else {
            WEIGHT1_DB_25_0_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_25_0_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_25_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_25_0_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_25_0_we0.read();
    } else {
        WEIGHT1_DB_25_0_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_25_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_25_1_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_25_1_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_25_1_address0 = grp_FIRE3_fu_2067_WEIGHT1_25_1_address0.read();
        } else {
            WEIGHT1_DB_25_1_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_25_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_25_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_25_1_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_25_1_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_25_1_ce0 = grp_FIRE3_fu_2067_WEIGHT1_25_1_ce0.read();
        } else {
            WEIGHT1_DB_25_1_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_25_1_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_25_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_25_1_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_25_1_we0.read();
    } else {
        WEIGHT1_DB_25_1_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_25_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_25_2_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_25_2_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_25_2_address0 = grp_FIRE3_fu_2067_WEIGHT1_25_2_address0.read();
        } else {
            WEIGHT1_DB_25_2_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_25_2_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_25_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_25_2_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_25_2_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_25_2_ce0 = grp_FIRE3_fu_2067_WEIGHT1_25_2_ce0.read();
        } else {
            WEIGHT1_DB_25_2_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_25_2_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_25_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_25_2_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_25_2_we0.read();
    } else {
        WEIGHT1_DB_25_2_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_25_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_25_3_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_25_3_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_25_3_address0 = grp_FIRE3_fu_2067_WEIGHT1_25_3_address0.read();
        } else {
            WEIGHT1_DB_25_3_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_25_3_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_25_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_25_3_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_25_3_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_25_3_ce0 = grp_FIRE3_fu_2067_WEIGHT1_25_3_ce0.read();
        } else {
            WEIGHT1_DB_25_3_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_25_3_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_25_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_25_3_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_25_3_we0.read();
    } else {
        WEIGHT1_DB_25_3_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_25_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_25_4_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_25_4_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_25_4_address0 = grp_FIRE3_fu_2067_WEIGHT1_25_4_address0.read();
        } else {
            WEIGHT1_DB_25_4_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_25_4_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_25_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_25_4_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_25_4_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_25_4_ce0 = grp_FIRE3_fu_2067_WEIGHT1_25_4_ce0.read();
        } else {
            WEIGHT1_DB_25_4_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_25_4_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_25_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_25_4_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_25_4_we0.read();
    } else {
        WEIGHT1_DB_25_4_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_25_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_25_5_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_25_5_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_25_5_address0 = grp_FIRE3_fu_2067_WEIGHT1_25_5_address0.read();
        } else {
            WEIGHT1_DB_25_5_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_25_5_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_25_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_25_5_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_25_5_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_25_5_ce0 = grp_FIRE3_fu_2067_WEIGHT1_25_5_ce0.read();
        } else {
            WEIGHT1_DB_25_5_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_25_5_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_25_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_25_5_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_25_5_we0.read();
    } else {
        WEIGHT1_DB_25_5_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_25_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_25_6_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_25_6_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_25_6_address0 = grp_FIRE3_fu_2067_WEIGHT1_25_6_address0.read();
        } else {
            WEIGHT1_DB_25_6_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_25_6_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_25_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_25_6_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_25_6_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_25_6_ce0 = grp_FIRE3_fu_2067_WEIGHT1_25_6_ce0.read();
        } else {
            WEIGHT1_DB_25_6_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_25_6_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_25_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_25_6_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_25_6_we0.read();
    } else {
        WEIGHT1_DB_25_6_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_26_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_26_0_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_26_0_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_26_0_address0 = grp_FIRE3_fu_2067_WEIGHT1_26_0_address0.read();
        } else {
            WEIGHT1_DB_26_0_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_26_0_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_26_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_26_0_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_26_0_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_26_0_ce0 = grp_FIRE3_fu_2067_WEIGHT1_26_0_ce0.read();
        } else {
            WEIGHT1_DB_26_0_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_26_0_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_26_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_26_0_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_26_0_we0.read();
    } else {
        WEIGHT1_DB_26_0_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_26_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_26_1_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_26_1_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_26_1_address0 = grp_FIRE3_fu_2067_WEIGHT1_26_1_address0.read();
        } else {
            WEIGHT1_DB_26_1_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_26_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_26_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_26_1_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_26_1_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_26_1_ce0 = grp_FIRE3_fu_2067_WEIGHT1_26_1_ce0.read();
        } else {
            WEIGHT1_DB_26_1_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_26_1_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_26_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_26_1_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_26_1_we0.read();
    } else {
        WEIGHT1_DB_26_1_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_26_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_26_2_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_26_2_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_26_2_address0 = grp_FIRE3_fu_2067_WEIGHT1_26_2_address0.read();
        } else {
            WEIGHT1_DB_26_2_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_26_2_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_26_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_26_2_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_26_2_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_26_2_ce0 = grp_FIRE3_fu_2067_WEIGHT1_26_2_ce0.read();
        } else {
            WEIGHT1_DB_26_2_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_26_2_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_26_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_26_2_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_26_2_we0.read();
    } else {
        WEIGHT1_DB_26_2_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_26_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_26_3_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_26_3_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_26_3_address0 = grp_FIRE3_fu_2067_WEIGHT1_26_3_address0.read();
        } else {
            WEIGHT1_DB_26_3_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_26_3_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_26_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_26_3_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_26_3_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_26_3_ce0 = grp_FIRE3_fu_2067_WEIGHT1_26_3_ce0.read();
        } else {
            WEIGHT1_DB_26_3_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_26_3_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_26_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_26_3_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_26_3_we0.read();
    } else {
        WEIGHT1_DB_26_3_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_26_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_26_4_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_26_4_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_26_4_address0 = grp_FIRE3_fu_2067_WEIGHT1_26_4_address0.read();
        } else {
            WEIGHT1_DB_26_4_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_26_4_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_26_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_26_4_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_26_4_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_26_4_ce0 = grp_FIRE3_fu_2067_WEIGHT1_26_4_ce0.read();
        } else {
            WEIGHT1_DB_26_4_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_26_4_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_26_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_26_4_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_26_4_we0.read();
    } else {
        WEIGHT1_DB_26_4_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_26_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_26_5_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_26_5_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_26_5_address0 = grp_FIRE3_fu_2067_WEIGHT1_26_5_address0.read();
        } else {
            WEIGHT1_DB_26_5_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_26_5_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_26_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_26_5_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_26_5_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_26_5_ce0 = grp_FIRE3_fu_2067_WEIGHT1_26_5_ce0.read();
        } else {
            WEIGHT1_DB_26_5_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_26_5_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_26_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_26_5_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_26_5_we0.read();
    } else {
        WEIGHT1_DB_26_5_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_26_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_26_6_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_26_6_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_26_6_address0 = grp_FIRE3_fu_2067_WEIGHT1_26_6_address0.read();
        } else {
            WEIGHT1_DB_26_6_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_26_6_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_26_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_26_6_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_26_6_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_26_6_ce0 = grp_FIRE3_fu_2067_WEIGHT1_26_6_ce0.read();
        } else {
            WEIGHT1_DB_26_6_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_26_6_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_26_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_26_6_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_26_6_we0.read();
    } else {
        WEIGHT1_DB_26_6_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_27_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_27_0_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_27_0_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_27_0_address0 = grp_FIRE3_fu_2067_WEIGHT1_27_0_address0.read();
        } else {
            WEIGHT1_DB_27_0_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_27_0_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_27_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_27_0_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_27_0_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_27_0_ce0 = grp_FIRE3_fu_2067_WEIGHT1_27_0_ce0.read();
        } else {
            WEIGHT1_DB_27_0_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_27_0_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_27_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_27_0_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_27_0_we0.read();
    } else {
        WEIGHT1_DB_27_0_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_27_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_27_1_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_27_1_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_27_1_address0 = grp_FIRE3_fu_2067_WEIGHT1_27_1_address0.read();
        } else {
            WEIGHT1_DB_27_1_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_27_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_27_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_27_1_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_27_1_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_27_1_ce0 = grp_FIRE3_fu_2067_WEIGHT1_27_1_ce0.read();
        } else {
            WEIGHT1_DB_27_1_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_27_1_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_27_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_27_1_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_27_1_we0.read();
    } else {
        WEIGHT1_DB_27_1_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_27_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_27_2_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_27_2_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_27_2_address0 = grp_FIRE3_fu_2067_WEIGHT1_27_2_address0.read();
        } else {
            WEIGHT1_DB_27_2_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_27_2_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_27_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_27_2_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_27_2_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_27_2_ce0 = grp_FIRE3_fu_2067_WEIGHT1_27_2_ce0.read();
        } else {
            WEIGHT1_DB_27_2_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_27_2_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_27_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_27_2_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_27_2_we0.read();
    } else {
        WEIGHT1_DB_27_2_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_27_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_27_3_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_27_3_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_27_3_address0 = grp_FIRE3_fu_2067_WEIGHT1_27_3_address0.read();
        } else {
            WEIGHT1_DB_27_3_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_27_3_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_27_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_27_3_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_27_3_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_27_3_ce0 = grp_FIRE3_fu_2067_WEIGHT1_27_3_ce0.read();
        } else {
            WEIGHT1_DB_27_3_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_27_3_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_27_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_27_3_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_27_3_we0.read();
    } else {
        WEIGHT1_DB_27_3_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_27_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_27_4_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_27_4_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_27_4_address0 = grp_FIRE3_fu_2067_WEIGHT1_27_4_address0.read();
        } else {
            WEIGHT1_DB_27_4_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_27_4_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_27_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_27_4_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_27_4_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_27_4_ce0 = grp_FIRE3_fu_2067_WEIGHT1_27_4_ce0.read();
        } else {
            WEIGHT1_DB_27_4_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_27_4_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_27_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_27_4_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_27_4_we0.read();
    } else {
        WEIGHT1_DB_27_4_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_27_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_27_5_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_27_5_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_27_5_address0 = grp_FIRE3_fu_2067_WEIGHT1_27_5_address0.read();
        } else {
            WEIGHT1_DB_27_5_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_27_5_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_27_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_27_5_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_27_5_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_27_5_ce0 = grp_FIRE3_fu_2067_WEIGHT1_27_5_ce0.read();
        } else {
            WEIGHT1_DB_27_5_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_27_5_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_27_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_27_5_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_27_5_we0.read();
    } else {
        WEIGHT1_DB_27_5_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_27_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_27_6_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_27_6_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_27_6_address0 = grp_FIRE3_fu_2067_WEIGHT1_27_6_address0.read();
        } else {
            WEIGHT1_DB_27_6_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_27_6_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_27_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_27_6_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_27_6_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_27_6_ce0 = grp_FIRE3_fu_2067_WEIGHT1_27_6_ce0.read();
        } else {
            WEIGHT1_DB_27_6_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_27_6_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_27_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_27_6_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_27_6_we0.read();
    } else {
        WEIGHT1_DB_27_6_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_28_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_28_0_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_28_0_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_28_0_address0 = grp_FIRE3_fu_2067_WEIGHT1_28_0_address0.read();
        } else {
            WEIGHT1_DB_28_0_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_28_0_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_28_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_28_0_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_28_0_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_28_0_ce0 = grp_FIRE3_fu_2067_WEIGHT1_28_0_ce0.read();
        } else {
            WEIGHT1_DB_28_0_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_28_0_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_28_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_28_0_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_28_0_we0.read();
    } else {
        WEIGHT1_DB_28_0_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_28_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_28_1_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_28_1_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_28_1_address0 = grp_FIRE3_fu_2067_WEIGHT1_28_1_address0.read();
        } else {
            WEIGHT1_DB_28_1_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_28_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_28_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_28_1_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_28_1_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_28_1_ce0 = grp_FIRE3_fu_2067_WEIGHT1_28_1_ce0.read();
        } else {
            WEIGHT1_DB_28_1_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_28_1_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_28_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_28_1_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_28_1_we0.read();
    } else {
        WEIGHT1_DB_28_1_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_28_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_28_2_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_28_2_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_28_2_address0 = grp_FIRE3_fu_2067_WEIGHT1_28_2_address0.read();
        } else {
            WEIGHT1_DB_28_2_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_28_2_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_28_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_28_2_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_28_2_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_28_2_ce0 = grp_FIRE3_fu_2067_WEIGHT1_28_2_ce0.read();
        } else {
            WEIGHT1_DB_28_2_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_28_2_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_28_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_28_2_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_28_2_we0.read();
    } else {
        WEIGHT1_DB_28_2_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_28_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_28_3_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_28_3_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_28_3_address0 = grp_FIRE3_fu_2067_WEIGHT1_28_3_address0.read();
        } else {
            WEIGHT1_DB_28_3_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_28_3_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_28_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_28_3_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_28_3_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_28_3_ce0 = grp_FIRE3_fu_2067_WEIGHT1_28_3_ce0.read();
        } else {
            WEIGHT1_DB_28_3_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_28_3_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_28_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_28_3_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_28_3_we0.read();
    } else {
        WEIGHT1_DB_28_3_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_28_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_28_4_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_28_4_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_28_4_address0 = grp_FIRE3_fu_2067_WEIGHT1_28_4_address0.read();
        } else {
            WEIGHT1_DB_28_4_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_28_4_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_28_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_28_4_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_28_4_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_28_4_ce0 = grp_FIRE3_fu_2067_WEIGHT1_28_4_ce0.read();
        } else {
            WEIGHT1_DB_28_4_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_28_4_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_28_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_28_4_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_28_4_we0.read();
    } else {
        WEIGHT1_DB_28_4_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_28_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_28_5_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_28_5_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_28_5_address0 = grp_FIRE3_fu_2067_WEIGHT1_28_5_address0.read();
        } else {
            WEIGHT1_DB_28_5_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_28_5_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_28_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_28_5_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_28_5_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_28_5_ce0 = grp_FIRE3_fu_2067_WEIGHT1_28_5_ce0.read();
        } else {
            WEIGHT1_DB_28_5_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_28_5_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_28_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_28_5_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_28_5_we0.read();
    } else {
        WEIGHT1_DB_28_5_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_28_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_28_6_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_28_6_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_28_6_address0 = grp_FIRE3_fu_2067_WEIGHT1_28_6_address0.read();
        } else {
            WEIGHT1_DB_28_6_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_28_6_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_28_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_28_6_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_28_6_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_28_6_ce0 = grp_FIRE3_fu_2067_WEIGHT1_28_6_ce0.read();
        } else {
            WEIGHT1_DB_28_6_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_28_6_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_28_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_28_6_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_28_6_we0.read();
    } else {
        WEIGHT1_DB_28_6_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_29_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_29_0_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_29_0_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_29_0_address0 = grp_FIRE3_fu_2067_WEIGHT1_29_0_address0.read();
        } else {
            WEIGHT1_DB_29_0_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_29_0_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_29_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_29_0_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_29_0_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_29_0_ce0 = grp_FIRE3_fu_2067_WEIGHT1_29_0_ce0.read();
        } else {
            WEIGHT1_DB_29_0_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_29_0_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_29_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_29_0_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_29_0_we0.read();
    } else {
        WEIGHT1_DB_29_0_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_29_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_29_1_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_29_1_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_29_1_address0 = grp_FIRE3_fu_2067_WEIGHT1_29_1_address0.read();
        } else {
            WEIGHT1_DB_29_1_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_29_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_29_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_29_1_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_29_1_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_29_1_ce0 = grp_FIRE3_fu_2067_WEIGHT1_29_1_ce0.read();
        } else {
            WEIGHT1_DB_29_1_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_29_1_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_29_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_29_1_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_29_1_we0.read();
    } else {
        WEIGHT1_DB_29_1_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_29_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_29_2_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_29_2_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_29_2_address0 = grp_FIRE3_fu_2067_WEIGHT1_29_2_address0.read();
        } else {
            WEIGHT1_DB_29_2_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_29_2_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_29_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_29_2_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_29_2_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_29_2_ce0 = grp_FIRE3_fu_2067_WEIGHT1_29_2_ce0.read();
        } else {
            WEIGHT1_DB_29_2_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_29_2_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_29_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_29_2_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_29_2_we0.read();
    } else {
        WEIGHT1_DB_29_2_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_29_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_29_3_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_29_3_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_29_3_address0 = grp_FIRE3_fu_2067_WEIGHT1_29_3_address0.read();
        } else {
            WEIGHT1_DB_29_3_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_29_3_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_29_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_29_3_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_29_3_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_29_3_ce0 = grp_FIRE3_fu_2067_WEIGHT1_29_3_ce0.read();
        } else {
            WEIGHT1_DB_29_3_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_29_3_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_29_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_29_3_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_29_3_we0.read();
    } else {
        WEIGHT1_DB_29_3_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_29_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_29_4_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_29_4_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_29_4_address0 = grp_FIRE3_fu_2067_WEIGHT1_29_4_address0.read();
        } else {
            WEIGHT1_DB_29_4_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_29_4_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_29_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_29_4_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_29_4_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_29_4_ce0 = grp_FIRE3_fu_2067_WEIGHT1_29_4_ce0.read();
        } else {
            WEIGHT1_DB_29_4_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_29_4_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_29_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_29_4_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_29_4_we0.read();
    } else {
        WEIGHT1_DB_29_4_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_29_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_29_5_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_29_5_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_29_5_address0 = grp_FIRE3_fu_2067_WEIGHT1_29_5_address0.read();
        } else {
            WEIGHT1_DB_29_5_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_29_5_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_29_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_29_5_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_29_5_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_29_5_ce0 = grp_FIRE3_fu_2067_WEIGHT1_29_5_ce0.read();
        } else {
            WEIGHT1_DB_29_5_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_29_5_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_29_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_29_5_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_29_5_we0.read();
    } else {
        WEIGHT1_DB_29_5_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_29_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_29_6_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_29_6_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_29_6_address0 = grp_FIRE3_fu_2067_WEIGHT1_29_6_address0.read();
        } else {
            WEIGHT1_DB_29_6_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_29_6_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_29_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_29_6_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_29_6_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_29_6_ce0 = grp_FIRE3_fu_2067_WEIGHT1_29_6_ce0.read();
        } else {
            WEIGHT1_DB_29_6_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_29_6_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_29_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_29_6_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_29_6_we0.read();
    } else {
        WEIGHT1_DB_29_6_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_2_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_2_0_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_2_0_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_2_0_address0 = grp_FIRE3_fu_2067_WEIGHT1_2_0_address0.read();
        } else {
            WEIGHT1_DB_2_0_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_2_0_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_2_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_2_0_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_2_0_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_2_0_ce0 = grp_FIRE3_fu_2067_WEIGHT1_2_0_ce0.read();
        } else {
            WEIGHT1_DB_2_0_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_2_0_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_2_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_2_0_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_2_0_we0.read();
    } else {
        WEIGHT1_DB_2_0_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_2_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_2_1_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_2_1_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_2_1_address0 = grp_FIRE3_fu_2067_WEIGHT1_2_1_address0.read();
        } else {
            WEIGHT1_DB_2_1_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_2_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_2_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_2_1_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_2_1_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_2_1_ce0 = grp_FIRE3_fu_2067_WEIGHT1_2_1_ce0.read();
        } else {
            WEIGHT1_DB_2_1_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_2_1_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_2_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_2_1_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_2_1_we0.read();
    } else {
        WEIGHT1_DB_2_1_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_2_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_2_2_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_2_2_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_2_2_address0 = grp_FIRE3_fu_2067_WEIGHT1_2_2_address0.read();
        } else {
            WEIGHT1_DB_2_2_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_2_2_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_2_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_2_2_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_2_2_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_2_2_ce0 = grp_FIRE3_fu_2067_WEIGHT1_2_2_ce0.read();
        } else {
            WEIGHT1_DB_2_2_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_2_2_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_2_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_2_2_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_2_2_we0.read();
    } else {
        WEIGHT1_DB_2_2_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_2_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_2_3_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_2_3_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_2_3_address0 = grp_FIRE3_fu_2067_WEIGHT1_2_3_address0.read();
        } else {
            WEIGHT1_DB_2_3_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_2_3_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_2_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_2_3_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_2_3_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_2_3_ce0 = grp_FIRE3_fu_2067_WEIGHT1_2_3_ce0.read();
        } else {
            WEIGHT1_DB_2_3_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_2_3_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_2_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_2_3_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_2_3_we0.read();
    } else {
        WEIGHT1_DB_2_3_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_2_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_2_4_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_2_4_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_2_4_address0 = grp_FIRE3_fu_2067_WEIGHT1_2_4_address0.read();
        } else {
            WEIGHT1_DB_2_4_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_2_4_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_2_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_2_4_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_2_4_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_2_4_ce0 = grp_FIRE3_fu_2067_WEIGHT1_2_4_ce0.read();
        } else {
            WEIGHT1_DB_2_4_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_2_4_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_2_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_2_4_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_2_4_we0.read();
    } else {
        WEIGHT1_DB_2_4_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_2_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_2_5_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_2_5_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_2_5_address0 = grp_FIRE3_fu_2067_WEIGHT1_2_5_address0.read();
        } else {
            WEIGHT1_DB_2_5_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_2_5_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_2_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_2_5_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_2_5_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_2_5_ce0 = grp_FIRE3_fu_2067_WEIGHT1_2_5_ce0.read();
        } else {
            WEIGHT1_DB_2_5_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_2_5_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_2_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_2_5_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_2_5_we0.read();
    } else {
        WEIGHT1_DB_2_5_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_2_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_2_6_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_2_6_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_2_6_address0 = grp_FIRE3_fu_2067_WEIGHT1_2_6_address0.read();
        } else {
            WEIGHT1_DB_2_6_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_2_6_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_2_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_2_6_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_2_6_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_2_6_ce0 = grp_FIRE3_fu_2067_WEIGHT1_2_6_ce0.read();
        } else {
            WEIGHT1_DB_2_6_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_2_6_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_2_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_2_6_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_2_6_we0.read();
    } else {
        WEIGHT1_DB_2_6_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_30_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_30_0_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_30_0_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_30_0_address0 = grp_FIRE3_fu_2067_WEIGHT1_30_0_address0.read();
        } else {
            WEIGHT1_DB_30_0_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_30_0_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_30_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_30_0_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_30_0_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_30_0_ce0 = grp_FIRE3_fu_2067_WEIGHT1_30_0_ce0.read();
        } else {
            WEIGHT1_DB_30_0_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_30_0_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_30_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_30_0_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_30_0_we0.read();
    } else {
        WEIGHT1_DB_30_0_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_30_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_30_1_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_30_1_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_30_1_address0 = grp_FIRE3_fu_2067_WEIGHT1_30_1_address0.read();
        } else {
            WEIGHT1_DB_30_1_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_30_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_30_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_30_1_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_30_1_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_30_1_ce0 = grp_FIRE3_fu_2067_WEIGHT1_30_1_ce0.read();
        } else {
            WEIGHT1_DB_30_1_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_30_1_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_30_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_30_1_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_30_1_we0.read();
    } else {
        WEIGHT1_DB_30_1_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_30_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_30_2_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_30_2_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_30_2_address0 = grp_FIRE3_fu_2067_WEIGHT1_30_2_address0.read();
        } else {
            WEIGHT1_DB_30_2_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_30_2_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_30_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_30_2_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_30_2_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_30_2_ce0 = grp_FIRE3_fu_2067_WEIGHT1_30_2_ce0.read();
        } else {
            WEIGHT1_DB_30_2_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_30_2_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_30_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_30_2_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_30_2_we0.read();
    } else {
        WEIGHT1_DB_30_2_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_30_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_30_3_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_30_3_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_30_3_address0 = grp_FIRE3_fu_2067_WEIGHT1_30_3_address0.read();
        } else {
            WEIGHT1_DB_30_3_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_30_3_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_30_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_30_3_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_30_3_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_30_3_ce0 = grp_FIRE3_fu_2067_WEIGHT1_30_3_ce0.read();
        } else {
            WEIGHT1_DB_30_3_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_30_3_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_30_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_30_3_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_30_3_we0.read();
    } else {
        WEIGHT1_DB_30_3_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_30_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_30_4_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_30_4_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_30_4_address0 = grp_FIRE3_fu_2067_WEIGHT1_30_4_address0.read();
        } else {
            WEIGHT1_DB_30_4_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_30_4_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_30_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_30_4_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_30_4_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_30_4_ce0 = grp_FIRE3_fu_2067_WEIGHT1_30_4_ce0.read();
        } else {
            WEIGHT1_DB_30_4_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_30_4_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_30_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_30_4_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_30_4_we0.read();
    } else {
        WEIGHT1_DB_30_4_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_30_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_30_5_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_30_5_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_30_5_address0 = grp_FIRE3_fu_2067_WEIGHT1_30_5_address0.read();
        } else {
            WEIGHT1_DB_30_5_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_30_5_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_30_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_30_5_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_30_5_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_30_5_ce0 = grp_FIRE3_fu_2067_WEIGHT1_30_5_ce0.read();
        } else {
            WEIGHT1_DB_30_5_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_30_5_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_30_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_30_5_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_30_5_we0.read();
    } else {
        WEIGHT1_DB_30_5_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_30_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_30_6_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_30_6_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_30_6_address0 = grp_FIRE3_fu_2067_WEIGHT1_30_6_address0.read();
        } else {
            WEIGHT1_DB_30_6_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_30_6_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_30_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_30_6_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_30_6_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_30_6_ce0 = grp_FIRE3_fu_2067_WEIGHT1_30_6_ce0.read();
        } else {
            WEIGHT1_DB_30_6_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_30_6_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_30_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_30_6_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_30_6_we0.read();
    } else {
        WEIGHT1_DB_30_6_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_31_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_31_0_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_31_0_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_31_0_address0 = grp_FIRE3_fu_2067_WEIGHT1_31_0_address0.read();
        } else {
            WEIGHT1_DB_31_0_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_31_0_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_31_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_31_0_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_31_0_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_31_0_ce0 = grp_FIRE3_fu_2067_WEIGHT1_31_0_ce0.read();
        } else {
            WEIGHT1_DB_31_0_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_31_0_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_31_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_31_0_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_31_0_we0.read();
    } else {
        WEIGHT1_DB_31_0_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_31_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_31_1_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_31_1_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_31_1_address0 = grp_FIRE3_fu_2067_WEIGHT1_31_1_address0.read();
        } else {
            WEIGHT1_DB_31_1_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_31_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_31_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_31_1_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_31_1_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_31_1_ce0 = grp_FIRE3_fu_2067_WEIGHT1_31_1_ce0.read();
        } else {
            WEIGHT1_DB_31_1_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_31_1_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_31_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_31_1_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_31_1_we0.read();
    } else {
        WEIGHT1_DB_31_1_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_31_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_31_2_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_31_2_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_31_2_address0 = grp_FIRE3_fu_2067_WEIGHT1_31_2_address0.read();
        } else {
            WEIGHT1_DB_31_2_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_31_2_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_31_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_31_2_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_31_2_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_31_2_ce0 = grp_FIRE3_fu_2067_WEIGHT1_31_2_ce0.read();
        } else {
            WEIGHT1_DB_31_2_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_31_2_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_31_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_31_2_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_31_2_we0.read();
    } else {
        WEIGHT1_DB_31_2_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_31_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_31_3_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_31_3_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_31_3_address0 = grp_FIRE3_fu_2067_WEIGHT1_31_3_address0.read();
        } else {
            WEIGHT1_DB_31_3_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_31_3_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_31_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_31_3_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_31_3_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_31_3_ce0 = grp_FIRE3_fu_2067_WEIGHT1_31_3_ce0.read();
        } else {
            WEIGHT1_DB_31_3_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_31_3_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_31_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_31_3_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_31_3_we0.read();
    } else {
        WEIGHT1_DB_31_3_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_31_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_31_4_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_31_4_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_31_4_address0 = grp_FIRE3_fu_2067_WEIGHT1_31_4_address0.read();
        } else {
            WEIGHT1_DB_31_4_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_31_4_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_31_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_31_4_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_31_4_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_31_4_ce0 = grp_FIRE3_fu_2067_WEIGHT1_31_4_ce0.read();
        } else {
            WEIGHT1_DB_31_4_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_31_4_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_31_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_31_4_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_31_4_we0.read();
    } else {
        WEIGHT1_DB_31_4_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_31_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_31_5_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_31_5_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_31_5_address0 = grp_FIRE3_fu_2067_WEIGHT1_31_5_address0.read();
        } else {
            WEIGHT1_DB_31_5_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_31_5_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_31_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_31_5_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_31_5_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_31_5_ce0 = grp_FIRE3_fu_2067_WEIGHT1_31_5_ce0.read();
        } else {
            WEIGHT1_DB_31_5_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_31_5_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_31_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_31_5_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_31_5_we0.read();
    } else {
        WEIGHT1_DB_31_5_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_31_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_31_6_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_31_6_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_31_6_address0 = grp_FIRE3_fu_2067_WEIGHT1_31_6_address0.read();
        } else {
            WEIGHT1_DB_31_6_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_31_6_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_31_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_31_6_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_31_6_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_31_6_ce0 = grp_FIRE3_fu_2067_WEIGHT1_31_6_ce0.read();
        } else {
            WEIGHT1_DB_31_6_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_31_6_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_31_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_31_6_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_31_6_we0.read();
    } else {
        WEIGHT1_DB_31_6_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_32_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_32_0_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_32_0_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_32_0_address0 = grp_FIRE3_fu_2067_WEIGHT1_32_0_address0.read();
        } else {
            WEIGHT1_DB_32_0_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_32_0_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_32_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_32_0_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_32_0_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_32_0_ce0 = grp_FIRE3_fu_2067_WEIGHT1_32_0_ce0.read();
        } else {
            WEIGHT1_DB_32_0_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_32_0_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_32_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_32_0_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_32_0_we0.read();
    } else {
        WEIGHT1_DB_32_0_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_32_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_32_1_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_32_1_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_32_1_address0 = grp_FIRE3_fu_2067_WEIGHT1_32_1_address0.read();
        } else {
            WEIGHT1_DB_32_1_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_32_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_32_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_32_1_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_32_1_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_32_1_ce0 = grp_FIRE3_fu_2067_WEIGHT1_32_1_ce0.read();
        } else {
            WEIGHT1_DB_32_1_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_32_1_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_32_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_32_1_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_32_1_we0.read();
    } else {
        WEIGHT1_DB_32_1_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_32_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_32_2_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_32_2_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_32_2_address0 = grp_FIRE3_fu_2067_WEIGHT1_32_2_address0.read();
        } else {
            WEIGHT1_DB_32_2_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_32_2_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_32_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_32_2_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_32_2_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_32_2_ce0 = grp_FIRE3_fu_2067_WEIGHT1_32_2_ce0.read();
        } else {
            WEIGHT1_DB_32_2_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_32_2_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_32_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_32_2_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_32_2_we0.read();
    } else {
        WEIGHT1_DB_32_2_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_32_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_32_3_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_32_3_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_32_3_address0 = grp_FIRE3_fu_2067_WEIGHT1_32_3_address0.read();
        } else {
            WEIGHT1_DB_32_3_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_32_3_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_32_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_32_3_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_32_3_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_32_3_ce0 = grp_FIRE3_fu_2067_WEIGHT1_32_3_ce0.read();
        } else {
            WEIGHT1_DB_32_3_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_32_3_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_32_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_32_3_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_32_3_we0.read();
    } else {
        WEIGHT1_DB_32_3_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_32_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_32_4_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_32_4_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_32_4_address0 = grp_FIRE3_fu_2067_WEIGHT1_32_4_address0.read();
        } else {
            WEIGHT1_DB_32_4_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_32_4_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_32_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_32_4_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_32_4_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_32_4_ce0 = grp_FIRE3_fu_2067_WEIGHT1_32_4_ce0.read();
        } else {
            WEIGHT1_DB_32_4_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_32_4_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_32_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_32_4_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_32_4_we0.read();
    } else {
        WEIGHT1_DB_32_4_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_32_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_32_5_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_32_5_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_32_5_address0 = grp_FIRE3_fu_2067_WEIGHT1_32_5_address0.read();
        } else {
            WEIGHT1_DB_32_5_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_32_5_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_32_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_32_5_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_32_5_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_32_5_ce0 = grp_FIRE3_fu_2067_WEIGHT1_32_5_ce0.read();
        } else {
            WEIGHT1_DB_32_5_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_32_5_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_32_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_32_5_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_32_5_we0.read();
    } else {
        WEIGHT1_DB_32_5_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_32_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_32_6_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_32_6_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_32_6_address0 = grp_FIRE3_fu_2067_WEIGHT1_32_6_address0.read();
        } else {
            WEIGHT1_DB_32_6_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_32_6_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_32_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_32_6_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_32_6_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_32_6_ce0 = grp_FIRE3_fu_2067_WEIGHT1_32_6_ce0.read();
        } else {
            WEIGHT1_DB_32_6_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_32_6_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_32_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_32_6_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_32_6_we0.read();
    } else {
        WEIGHT1_DB_32_6_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_33_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_33_0_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_33_0_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_33_0_address0 = grp_FIRE3_fu_2067_WEIGHT1_33_0_address0.read();
        } else {
            WEIGHT1_DB_33_0_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_33_0_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_33_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_33_0_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_33_0_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_33_0_ce0 = grp_FIRE3_fu_2067_WEIGHT1_33_0_ce0.read();
        } else {
            WEIGHT1_DB_33_0_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_33_0_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_33_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_33_0_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_33_0_we0.read();
    } else {
        WEIGHT1_DB_33_0_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_33_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_33_1_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_33_1_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_33_1_address0 = grp_FIRE3_fu_2067_WEIGHT1_33_1_address0.read();
        } else {
            WEIGHT1_DB_33_1_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_33_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_33_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_33_1_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_33_1_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_33_1_ce0 = grp_FIRE3_fu_2067_WEIGHT1_33_1_ce0.read();
        } else {
            WEIGHT1_DB_33_1_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_33_1_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_33_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_33_1_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_33_1_we0.read();
    } else {
        WEIGHT1_DB_33_1_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_33_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_33_2_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_33_2_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_33_2_address0 = grp_FIRE3_fu_2067_WEIGHT1_33_2_address0.read();
        } else {
            WEIGHT1_DB_33_2_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_33_2_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_33_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_33_2_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_33_2_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_33_2_ce0 = grp_FIRE3_fu_2067_WEIGHT1_33_2_ce0.read();
        } else {
            WEIGHT1_DB_33_2_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_33_2_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_33_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_33_2_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_33_2_we0.read();
    } else {
        WEIGHT1_DB_33_2_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_33_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_33_3_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_33_3_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_33_3_address0 = grp_FIRE3_fu_2067_WEIGHT1_33_3_address0.read();
        } else {
            WEIGHT1_DB_33_3_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_33_3_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_33_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_33_3_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_33_3_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_33_3_ce0 = grp_FIRE3_fu_2067_WEIGHT1_33_3_ce0.read();
        } else {
            WEIGHT1_DB_33_3_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_33_3_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_33_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_33_3_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_33_3_we0.read();
    } else {
        WEIGHT1_DB_33_3_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_33_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_33_4_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_33_4_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_33_4_address0 = grp_FIRE3_fu_2067_WEIGHT1_33_4_address0.read();
        } else {
            WEIGHT1_DB_33_4_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_33_4_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_33_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_33_4_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_33_4_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_33_4_ce0 = grp_FIRE3_fu_2067_WEIGHT1_33_4_ce0.read();
        } else {
            WEIGHT1_DB_33_4_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_33_4_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_33_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_33_4_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_33_4_we0.read();
    } else {
        WEIGHT1_DB_33_4_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_33_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_33_5_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_33_5_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_33_5_address0 = grp_FIRE3_fu_2067_WEIGHT1_33_5_address0.read();
        } else {
            WEIGHT1_DB_33_5_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_33_5_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_33_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_33_5_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_33_5_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_33_5_ce0 = grp_FIRE3_fu_2067_WEIGHT1_33_5_ce0.read();
        } else {
            WEIGHT1_DB_33_5_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_33_5_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_33_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_33_5_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_33_5_we0.read();
    } else {
        WEIGHT1_DB_33_5_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_33_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_33_6_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_33_6_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_33_6_address0 = grp_FIRE3_fu_2067_WEIGHT1_33_6_address0.read();
        } else {
            WEIGHT1_DB_33_6_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_33_6_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_33_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_33_6_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_33_6_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_33_6_ce0 = grp_FIRE3_fu_2067_WEIGHT1_33_6_ce0.read();
        } else {
            WEIGHT1_DB_33_6_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_33_6_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_33_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_33_6_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_33_6_we0.read();
    } else {
        WEIGHT1_DB_33_6_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_34_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_34_0_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_34_0_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_34_0_address0 = grp_FIRE3_fu_2067_WEIGHT1_34_0_address0.read();
        } else {
            WEIGHT1_DB_34_0_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_34_0_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_34_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_34_0_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_34_0_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_34_0_ce0 = grp_FIRE3_fu_2067_WEIGHT1_34_0_ce0.read();
        } else {
            WEIGHT1_DB_34_0_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_34_0_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_34_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_34_0_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_34_0_we0.read();
    } else {
        WEIGHT1_DB_34_0_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_34_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_34_1_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_34_1_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_34_1_address0 = grp_FIRE3_fu_2067_WEIGHT1_34_1_address0.read();
        } else {
            WEIGHT1_DB_34_1_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_34_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_34_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_34_1_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_34_1_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_34_1_ce0 = grp_FIRE3_fu_2067_WEIGHT1_34_1_ce0.read();
        } else {
            WEIGHT1_DB_34_1_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_34_1_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_34_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_34_1_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_34_1_we0.read();
    } else {
        WEIGHT1_DB_34_1_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_34_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_34_2_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_34_2_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_34_2_address0 = grp_FIRE3_fu_2067_WEIGHT1_34_2_address0.read();
        } else {
            WEIGHT1_DB_34_2_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_34_2_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_34_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_34_2_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_34_2_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_34_2_ce0 = grp_FIRE3_fu_2067_WEIGHT1_34_2_ce0.read();
        } else {
            WEIGHT1_DB_34_2_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_34_2_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_34_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_34_2_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_34_2_we0.read();
    } else {
        WEIGHT1_DB_34_2_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_34_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_34_3_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_34_3_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_34_3_address0 = grp_FIRE3_fu_2067_WEIGHT1_34_3_address0.read();
        } else {
            WEIGHT1_DB_34_3_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_34_3_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_34_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_34_3_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_34_3_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_34_3_ce0 = grp_FIRE3_fu_2067_WEIGHT1_34_3_ce0.read();
        } else {
            WEIGHT1_DB_34_3_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_34_3_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_34_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_34_3_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_34_3_we0.read();
    } else {
        WEIGHT1_DB_34_3_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_34_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_34_4_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_34_4_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_34_4_address0 = grp_FIRE3_fu_2067_WEIGHT1_34_4_address0.read();
        } else {
            WEIGHT1_DB_34_4_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_34_4_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_34_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_34_4_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_34_4_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_34_4_ce0 = grp_FIRE3_fu_2067_WEIGHT1_34_4_ce0.read();
        } else {
            WEIGHT1_DB_34_4_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_34_4_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_34_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_34_4_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_34_4_we0.read();
    } else {
        WEIGHT1_DB_34_4_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_34_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_34_5_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_34_5_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_34_5_address0 = grp_FIRE3_fu_2067_WEIGHT1_34_5_address0.read();
        } else {
            WEIGHT1_DB_34_5_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_34_5_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_34_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_34_5_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_34_5_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_34_5_ce0 = grp_FIRE3_fu_2067_WEIGHT1_34_5_ce0.read();
        } else {
            WEIGHT1_DB_34_5_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_34_5_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_34_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_34_5_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_34_5_we0.read();
    } else {
        WEIGHT1_DB_34_5_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_34_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_34_6_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_34_6_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_34_6_address0 = grp_FIRE3_fu_2067_WEIGHT1_34_6_address0.read();
        } else {
            WEIGHT1_DB_34_6_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_34_6_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_34_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_34_6_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_34_6_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_34_6_ce0 = grp_FIRE3_fu_2067_WEIGHT1_34_6_ce0.read();
        } else {
            WEIGHT1_DB_34_6_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_34_6_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_34_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_34_6_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_34_6_we0.read();
    } else {
        WEIGHT1_DB_34_6_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_35_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_35_0_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_35_0_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_35_0_address0 = grp_FIRE3_fu_2067_WEIGHT1_35_0_address0.read();
        } else {
            WEIGHT1_DB_35_0_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_35_0_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_35_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_35_0_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_35_0_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_35_0_ce0 = grp_FIRE3_fu_2067_WEIGHT1_35_0_ce0.read();
        } else {
            WEIGHT1_DB_35_0_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_35_0_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_35_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_35_0_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_35_0_we0.read();
    } else {
        WEIGHT1_DB_35_0_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_35_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_35_1_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_35_1_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_35_1_address0 = grp_FIRE3_fu_2067_WEIGHT1_35_1_address0.read();
        } else {
            WEIGHT1_DB_35_1_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_35_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_35_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_35_1_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_35_1_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_35_1_ce0 = grp_FIRE3_fu_2067_WEIGHT1_35_1_ce0.read();
        } else {
            WEIGHT1_DB_35_1_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_35_1_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_35_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_35_1_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_35_1_we0.read();
    } else {
        WEIGHT1_DB_35_1_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_35_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_35_2_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_35_2_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_35_2_address0 = grp_FIRE3_fu_2067_WEIGHT1_35_2_address0.read();
        } else {
            WEIGHT1_DB_35_2_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_35_2_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_35_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_35_2_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_35_2_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_35_2_ce0 = grp_FIRE3_fu_2067_WEIGHT1_35_2_ce0.read();
        } else {
            WEIGHT1_DB_35_2_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_35_2_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_35_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_35_2_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_35_2_we0.read();
    } else {
        WEIGHT1_DB_35_2_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_35_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_35_3_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_35_3_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_35_3_address0 = grp_FIRE3_fu_2067_WEIGHT1_35_3_address0.read();
        } else {
            WEIGHT1_DB_35_3_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_35_3_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_35_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_35_3_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_35_3_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_35_3_ce0 = grp_FIRE3_fu_2067_WEIGHT1_35_3_ce0.read();
        } else {
            WEIGHT1_DB_35_3_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_35_3_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_35_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_35_3_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_35_3_we0.read();
    } else {
        WEIGHT1_DB_35_3_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_35_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_35_4_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_35_4_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_35_4_address0 = grp_FIRE3_fu_2067_WEIGHT1_35_4_address0.read();
        } else {
            WEIGHT1_DB_35_4_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_35_4_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_35_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_35_4_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_35_4_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_35_4_ce0 = grp_FIRE3_fu_2067_WEIGHT1_35_4_ce0.read();
        } else {
            WEIGHT1_DB_35_4_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_35_4_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_35_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_35_4_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_35_4_we0.read();
    } else {
        WEIGHT1_DB_35_4_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_35_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_35_5_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_35_5_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_35_5_address0 = grp_FIRE3_fu_2067_WEIGHT1_35_5_address0.read();
        } else {
            WEIGHT1_DB_35_5_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_35_5_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_35_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_35_5_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_35_5_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_35_5_ce0 = grp_FIRE3_fu_2067_WEIGHT1_35_5_ce0.read();
        } else {
            WEIGHT1_DB_35_5_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_35_5_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_35_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_35_5_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_35_5_we0.read();
    } else {
        WEIGHT1_DB_35_5_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_35_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_35_6_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_35_6_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_35_6_address0 = grp_FIRE3_fu_2067_WEIGHT1_35_6_address0.read();
        } else {
            WEIGHT1_DB_35_6_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_35_6_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_35_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_35_6_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_35_6_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_35_6_ce0 = grp_FIRE3_fu_2067_WEIGHT1_35_6_ce0.read();
        } else {
            WEIGHT1_DB_35_6_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_35_6_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_35_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_35_6_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_35_6_we0.read();
    } else {
        WEIGHT1_DB_35_6_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_36_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_36_0_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_36_0_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_36_0_address0 = grp_FIRE3_fu_2067_WEIGHT1_36_0_address0.read();
        } else {
            WEIGHT1_DB_36_0_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_36_0_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_36_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_36_0_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_36_0_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_36_0_ce0 = grp_FIRE3_fu_2067_WEIGHT1_36_0_ce0.read();
        } else {
            WEIGHT1_DB_36_0_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_36_0_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_36_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_36_0_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_36_0_we0.read();
    } else {
        WEIGHT1_DB_36_0_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_36_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_36_1_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_36_1_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_36_1_address0 = grp_FIRE3_fu_2067_WEIGHT1_36_1_address0.read();
        } else {
            WEIGHT1_DB_36_1_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_36_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_36_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_36_1_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_36_1_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_36_1_ce0 = grp_FIRE3_fu_2067_WEIGHT1_36_1_ce0.read();
        } else {
            WEIGHT1_DB_36_1_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_36_1_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_36_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_36_1_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_36_1_we0.read();
    } else {
        WEIGHT1_DB_36_1_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_36_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_36_2_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_36_2_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_36_2_address0 = grp_FIRE3_fu_2067_WEIGHT1_36_2_address0.read();
        } else {
            WEIGHT1_DB_36_2_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_36_2_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_36_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_36_2_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_36_2_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_36_2_ce0 = grp_FIRE3_fu_2067_WEIGHT1_36_2_ce0.read();
        } else {
            WEIGHT1_DB_36_2_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_36_2_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_36_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_36_2_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_36_2_we0.read();
    } else {
        WEIGHT1_DB_36_2_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_36_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_36_3_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_36_3_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_36_3_address0 = grp_FIRE3_fu_2067_WEIGHT1_36_3_address0.read();
        } else {
            WEIGHT1_DB_36_3_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_36_3_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_36_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_36_3_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_36_3_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_36_3_ce0 = grp_FIRE3_fu_2067_WEIGHT1_36_3_ce0.read();
        } else {
            WEIGHT1_DB_36_3_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_36_3_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_36_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_36_3_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_36_3_we0.read();
    } else {
        WEIGHT1_DB_36_3_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_36_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_36_4_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_36_4_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_36_4_address0 = grp_FIRE3_fu_2067_WEIGHT1_36_4_address0.read();
        } else {
            WEIGHT1_DB_36_4_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_36_4_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_36_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_36_4_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_36_4_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_36_4_ce0 = grp_FIRE3_fu_2067_WEIGHT1_36_4_ce0.read();
        } else {
            WEIGHT1_DB_36_4_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_36_4_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_36_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_36_4_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_36_4_we0.read();
    } else {
        WEIGHT1_DB_36_4_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_36_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_36_5_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_36_5_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_36_5_address0 = grp_FIRE3_fu_2067_WEIGHT1_36_5_address0.read();
        } else {
            WEIGHT1_DB_36_5_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_36_5_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_36_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_36_5_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_36_5_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_36_5_ce0 = grp_FIRE3_fu_2067_WEIGHT1_36_5_ce0.read();
        } else {
            WEIGHT1_DB_36_5_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_36_5_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_36_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_36_5_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_36_5_we0.read();
    } else {
        WEIGHT1_DB_36_5_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_36_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_36_6_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_36_6_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_36_6_address0 = grp_FIRE3_fu_2067_WEIGHT1_36_6_address0.read();
        } else {
            WEIGHT1_DB_36_6_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_36_6_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_36_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_36_6_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_36_6_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_36_6_ce0 = grp_FIRE3_fu_2067_WEIGHT1_36_6_ce0.read();
        } else {
            WEIGHT1_DB_36_6_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_36_6_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_36_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_36_6_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_36_6_we0.read();
    } else {
        WEIGHT1_DB_36_6_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_37_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_37_0_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_37_0_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_37_0_address0 = grp_FIRE3_fu_2067_WEIGHT1_37_0_address0.read();
        } else {
            WEIGHT1_DB_37_0_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_37_0_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_37_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_37_0_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_37_0_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_37_0_ce0 = grp_FIRE3_fu_2067_WEIGHT1_37_0_ce0.read();
        } else {
            WEIGHT1_DB_37_0_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_37_0_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_37_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_37_0_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_37_0_we0.read();
    } else {
        WEIGHT1_DB_37_0_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_37_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_37_1_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_37_1_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_37_1_address0 = grp_FIRE3_fu_2067_WEIGHT1_37_1_address0.read();
        } else {
            WEIGHT1_DB_37_1_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_37_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_37_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_37_1_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_37_1_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_37_1_ce0 = grp_FIRE3_fu_2067_WEIGHT1_37_1_ce0.read();
        } else {
            WEIGHT1_DB_37_1_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_37_1_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_37_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_37_1_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_37_1_we0.read();
    } else {
        WEIGHT1_DB_37_1_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_37_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_37_2_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_37_2_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_37_2_address0 = grp_FIRE3_fu_2067_WEIGHT1_37_2_address0.read();
        } else {
            WEIGHT1_DB_37_2_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_37_2_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_37_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_37_2_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_37_2_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_37_2_ce0 = grp_FIRE3_fu_2067_WEIGHT1_37_2_ce0.read();
        } else {
            WEIGHT1_DB_37_2_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_37_2_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_37_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_37_2_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_37_2_we0.read();
    } else {
        WEIGHT1_DB_37_2_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_37_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_37_3_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_37_3_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_37_3_address0 = grp_FIRE3_fu_2067_WEIGHT1_37_3_address0.read();
        } else {
            WEIGHT1_DB_37_3_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_37_3_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_37_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_37_3_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_37_3_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_37_3_ce0 = grp_FIRE3_fu_2067_WEIGHT1_37_3_ce0.read();
        } else {
            WEIGHT1_DB_37_3_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_37_3_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_37_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_37_3_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_37_3_we0.read();
    } else {
        WEIGHT1_DB_37_3_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_37_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_37_4_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_37_4_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_37_4_address0 = grp_FIRE3_fu_2067_WEIGHT1_37_4_address0.read();
        } else {
            WEIGHT1_DB_37_4_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_37_4_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_37_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_37_4_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_37_4_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_37_4_ce0 = grp_FIRE3_fu_2067_WEIGHT1_37_4_ce0.read();
        } else {
            WEIGHT1_DB_37_4_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_37_4_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_37_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_37_4_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_37_4_we0.read();
    } else {
        WEIGHT1_DB_37_4_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_37_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_37_5_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_37_5_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_37_5_address0 = grp_FIRE3_fu_2067_WEIGHT1_37_5_address0.read();
        } else {
            WEIGHT1_DB_37_5_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_37_5_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_37_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_37_5_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_37_5_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_37_5_ce0 = grp_FIRE3_fu_2067_WEIGHT1_37_5_ce0.read();
        } else {
            WEIGHT1_DB_37_5_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_37_5_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_37_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_37_5_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_37_5_we0.read();
    } else {
        WEIGHT1_DB_37_5_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_37_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_37_6_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_37_6_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_37_6_address0 = grp_FIRE3_fu_2067_WEIGHT1_37_6_address0.read();
        } else {
            WEIGHT1_DB_37_6_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_37_6_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_37_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_37_6_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_37_6_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_37_6_ce0 = grp_FIRE3_fu_2067_WEIGHT1_37_6_ce0.read();
        } else {
            WEIGHT1_DB_37_6_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_37_6_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_37_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_37_6_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_37_6_we0.read();
    } else {
        WEIGHT1_DB_37_6_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_38_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_38_0_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_38_0_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_38_0_address0 = grp_FIRE3_fu_2067_WEIGHT1_38_0_address0.read();
        } else {
            WEIGHT1_DB_38_0_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_38_0_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_38_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_38_0_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_38_0_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_38_0_ce0 = grp_FIRE3_fu_2067_WEIGHT1_38_0_ce0.read();
        } else {
            WEIGHT1_DB_38_0_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_38_0_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_38_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_38_0_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_38_0_we0.read();
    } else {
        WEIGHT1_DB_38_0_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_38_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_38_1_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_38_1_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_38_1_address0 = grp_FIRE3_fu_2067_WEIGHT1_38_1_address0.read();
        } else {
            WEIGHT1_DB_38_1_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_38_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_38_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_38_1_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_38_1_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_38_1_ce0 = grp_FIRE3_fu_2067_WEIGHT1_38_1_ce0.read();
        } else {
            WEIGHT1_DB_38_1_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_38_1_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_38_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_38_1_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_38_1_we0.read();
    } else {
        WEIGHT1_DB_38_1_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_38_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_38_2_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_38_2_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_38_2_address0 = grp_FIRE3_fu_2067_WEIGHT1_38_2_address0.read();
        } else {
            WEIGHT1_DB_38_2_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_38_2_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_38_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_38_2_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_38_2_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_38_2_ce0 = grp_FIRE3_fu_2067_WEIGHT1_38_2_ce0.read();
        } else {
            WEIGHT1_DB_38_2_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_38_2_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_38_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_38_2_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_38_2_we0.read();
    } else {
        WEIGHT1_DB_38_2_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_38_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_38_3_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_38_3_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_38_3_address0 = grp_FIRE3_fu_2067_WEIGHT1_38_3_address0.read();
        } else {
            WEIGHT1_DB_38_3_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_38_3_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_38_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_38_3_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_38_3_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_38_3_ce0 = grp_FIRE3_fu_2067_WEIGHT1_38_3_ce0.read();
        } else {
            WEIGHT1_DB_38_3_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_38_3_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_38_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_38_3_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_38_3_we0.read();
    } else {
        WEIGHT1_DB_38_3_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_38_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_38_4_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_38_4_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_38_4_address0 = grp_FIRE3_fu_2067_WEIGHT1_38_4_address0.read();
        } else {
            WEIGHT1_DB_38_4_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_38_4_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_38_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_38_4_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_38_4_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_38_4_ce0 = grp_FIRE3_fu_2067_WEIGHT1_38_4_ce0.read();
        } else {
            WEIGHT1_DB_38_4_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_38_4_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_38_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_38_4_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_38_4_we0.read();
    } else {
        WEIGHT1_DB_38_4_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_38_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_38_5_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_38_5_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_38_5_address0 = grp_FIRE3_fu_2067_WEIGHT1_38_5_address0.read();
        } else {
            WEIGHT1_DB_38_5_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_38_5_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_38_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_38_5_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_38_5_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_38_5_ce0 = grp_FIRE3_fu_2067_WEIGHT1_38_5_ce0.read();
        } else {
            WEIGHT1_DB_38_5_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_38_5_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_38_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_38_5_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_38_5_we0.read();
    } else {
        WEIGHT1_DB_38_5_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_38_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_38_6_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_38_6_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_38_6_address0 = grp_FIRE3_fu_2067_WEIGHT1_38_6_address0.read();
        } else {
            WEIGHT1_DB_38_6_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_38_6_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_38_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_38_6_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_38_6_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_38_6_ce0 = grp_FIRE3_fu_2067_WEIGHT1_38_6_ce0.read();
        } else {
            WEIGHT1_DB_38_6_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_38_6_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_38_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_38_6_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_38_6_we0.read();
    } else {
        WEIGHT1_DB_38_6_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_39_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_39_0_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_39_0_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_39_0_address0 = grp_FIRE3_fu_2067_WEIGHT1_39_0_address0.read();
        } else {
            WEIGHT1_DB_39_0_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_39_0_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_39_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_39_0_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_39_0_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_39_0_ce0 = grp_FIRE3_fu_2067_WEIGHT1_39_0_ce0.read();
        } else {
            WEIGHT1_DB_39_0_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_39_0_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_39_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_39_0_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_39_0_we0.read();
    } else {
        WEIGHT1_DB_39_0_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_39_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_39_1_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_39_1_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_39_1_address0 = grp_FIRE3_fu_2067_WEIGHT1_39_1_address0.read();
        } else {
            WEIGHT1_DB_39_1_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_39_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_39_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_39_1_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_39_1_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_39_1_ce0 = grp_FIRE3_fu_2067_WEIGHT1_39_1_ce0.read();
        } else {
            WEIGHT1_DB_39_1_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_39_1_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_39_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_39_1_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_39_1_we0.read();
    } else {
        WEIGHT1_DB_39_1_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_39_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_39_2_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_39_2_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_39_2_address0 = grp_FIRE3_fu_2067_WEIGHT1_39_2_address0.read();
        } else {
            WEIGHT1_DB_39_2_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_39_2_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_39_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_39_2_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_39_2_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_39_2_ce0 = grp_FIRE3_fu_2067_WEIGHT1_39_2_ce0.read();
        } else {
            WEIGHT1_DB_39_2_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_39_2_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_39_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_39_2_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_39_2_we0.read();
    } else {
        WEIGHT1_DB_39_2_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_39_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_39_3_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_39_3_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_39_3_address0 = grp_FIRE3_fu_2067_WEIGHT1_39_3_address0.read();
        } else {
            WEIGHT1_DB_39_3_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_39_3_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_39_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_39_3_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_39_3_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_39_3_ce0 = grp_FIRE3_fu_2067_WEIGHT1_39_3_ce0.read();
        } else {
            WEIGHT1_DB_39_3_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_39_3_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_39_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_39_3_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_39_3_we0.read();
    } else {
        WEIGHT1_DB_39_3_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_39_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_39_4_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_39_4_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_39_4_address0 = grp_FIRE3_fu_2067_WEIGHT1_39_4_address0.read();
        } else {
            WEIGHT1_DB_39_4_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_39_4_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_39_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_39_4_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_39_4_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_39_4_ce0 = grp_FIRE3_fu_2067_WEIGHT1_39_4_ce0.read();
        } else {
            WEIGHT1_DB_39_4_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_39_4_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_39_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_39_4_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_39_4_we0.read();
    } else {
        WEIGHT1_DB_39_4_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_39_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_39_5_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_39_5_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_39_5_address0 = grp_FIRE3_fu_2067_WEIGHT1_39_5_address0.read();
        } else {
            WEIGHT1_DB_39_5_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_39_5_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_39_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_39_5_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_39_5_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_39_5_ce0 = grp_FIRE3_fu_2067_WEIGHT1_39_5_ce0.read();
        } else {
            WEIGHT1_DB_39_5_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_39_5_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_39_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_39_5_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_39_5_we0.read();
    } else {
        WEIGHT1_DB_39_5_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_39_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_39_6_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_39_6_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_39_6_address0 = grp_FIRE3_fu_2067_WEIGHT1_39_6_address0.read();
        } else {
            WEIGHT1_DB_39_6_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_39_6_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_39_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_39_6_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_39_6_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_39_6_ce0 = grp_FIRE3_fu_2067_WEIGHT1_39_6_ce0.read();
        } else {
            WEIGHT1_DB_39_6_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_39_6_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_39_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_39_6_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_39_6_we0.read();
    } else {
        WEIGHT1_DB_39_6_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_3_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_3_0_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_3_0_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_3_0_address0 = grp_FIRE3_fu_2067_WEIGHT1_3_0_address0.read();
        } else {
            WEIGHT1_DB_3_0_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_3_0_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_3_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_3_0_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_3_0_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_3_0_ce0 = grp_FIRE3_fu_2067_WEIGHT1_3_0_ce0.read();
        } else {
            WEIGHT1_DB_3_0_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_3_0_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_3_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_3_0_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_3_0_we0.read();
    } else {
        WEIGHT1_DB_3_0_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_3_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_3_1_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_3_1_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_3_1_address0 = grp_FIRE3_fu_2067_WEIGHT1_3_1_address0.read();
        } else {
            WEIGHT1_DB_3_1_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_3_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_3_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_3_1_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_3_1_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_3_1_ce0 = grp_FIRE3_fu_2067_WEIGHT1_3_1_ce0.read();
        } else {
            WEIGHT1_DB_3_1_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_3_1_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_3_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_3_1_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_3_1_we0.read();
    } else {
        WEIGHT1_DB_3_1_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_3_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_3_2_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_3_2_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_3_2_address0 = grp_FIRE3_fu_2067_WEIGHT1_3_2_address0.read();
        } else {
            WEIGHT1_DB_3_2_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_3_2_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_3_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_3_2_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_3_2_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_3_2_ce0 = grp_FIRE3_fu_2067_WEIGHT1_3_2_ce0.read();
        } else {
            WEIGHT1_DB_3_2_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_3_2_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_3_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_3_2_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_3_2_we0.read();
    } else {
        WEIGHT1_DB_3_2_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_3_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_3_3_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_3_3_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_3_3_address0 = grp_FIRE3_fu_2067_WEIGHT1_3_3_address0.read();
        } else {
            WEIGHT1_DB_3_3_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_3_3_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_3_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_3_3_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_3_3_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_3_3_ce0 = grp_FIRE3_fu_2067_WEIGHT1_3_3_ce0.read();
        } else {
            WEIGHT1_DB_3_3_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_3_3_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_3_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_3_3_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_3_3_we0.read();
    } else {
        WEIGHT1_DB_3_3_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_3_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_3_4_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_3_4_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_3_4_address0 = grp_FIRE3_fu_2067_WEIGHT1_3_4_address0.read();
        } else {
            WEIGHT1_DB_3_4_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_3_4_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_3_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_3_4_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_3_4_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_3_4_ce0 = grp_FIRE3_fu_2067_WEIGHT1_3_4_ce0.read();
        } else {
            WEIGHT1_DB_3_4_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_3_4_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_3_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_3_4_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_3_4_we0.read();
    } else {
        WEIGHT1_DB_3_4_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_3_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_3_5_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_3_5_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_3_5_address0 = grp_FIRE3_fu_2067_WEIGHT1_3_5_address0.read();
        } else {
            WEIGHT1_DB_3_5_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_3_5_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_3_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_3_5_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_3_5_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_3_5_ce0 = grp_FIRE3_fu_2067_WEIGHT1_3_5_ce0.read();
        } else {
            WEIGHT1_DB_3_5_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_3_5_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_3_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_3_5_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_3_5_we0.read();
    } else {
        WEIGHT1_DB_3_5_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_3_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_3_6_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_3_6_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_3_6_address0 = grp_FIRE3_fu_2067_WEIGHT1_3_6_address0.read();
        } else {
            WEIGHT1_DB_3_6_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_3_6_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_3_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_3_6_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_3_6_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_3_6_ce0 = grp_FIRE3_fu_2067_WEIGHT1_3_6_ce0.read();
        } else {
            WEIGHT1_DB_3_6_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_3_6_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_3_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_3_6_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_3_6_we0.read();
    } else {
        WEIGHT1_DB_3_6_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_40_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_40_0_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_40_0_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_40_0_address0 = grp_FIRE3_fu_2067_WEIGHT1_40_0_address0.read();
        } else {
            WEIGHT1_DB_40_0_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_40_0_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_40_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_40_0_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_40_0_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_40_0_ce0 = grp_FIRE3_fu_2067_WEIGHT1_40_0_ce0.read();
        } else {
            WEIGHT1_DB_40_0_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_40_0_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_40_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_40_0_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_40_0_we0.read();
    } else {
        WEIGHT1_DB_40_0_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_40_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_40_1_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_40_1_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_40_1_address0 = grp_FIRE3_fu_2067_WEIGHT1_40_1_address0.read();
        } else {
            WEIGHT1_DB_40_1_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_40_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_40_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_40_1_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_40_1_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_40_1_ce0 = grp_FIRE3_fu_2067_WEIGHT1_40_1_ce0.read();
        } else {
            WEIGHT1_DB_40_1_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_40_1_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_40_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_40_1_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_40_1_we0.read();
    } else {
        WEIGHT1_DB_40_1_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_40_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_40_2_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_40_2_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_40_2_address0 = grp_FIRE3_fu_2067_WEIGHT1_40_2_address0.read();
        } else {
            WEIGHT1_DB_40_2_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_40_2_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_40_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_40_2_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_40_2_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_40_2_ce0 = grp_FIRE3_fu_2067_WEIGHT1_40_2_ce0.read();
        } else {
            WEIGHT1_DB_40_2_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_40_2_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_40_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_40_2_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_40_2_we0.read();
    } else {
        WEIGHT1_DB_40_2_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_40_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_40_3_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_40_3_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_40_3_address0 = grp_FIRE3_fu_2067_WEIGHT1_40_3_address0.read();
        } else {
            WEIGHT1_DB_40_3_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_40_3_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_40_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_40_3_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_40_3_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_40_3_ce0 = grp_FIRE3_fu_2067_WEIGHT1_40_3_ce0.read();
        } else {
            WEIGHT1_DB_40_3_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_40_3_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_40_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_40_3_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_40_3_we0.read();
    } else {
        WEIGHT1_DB_40_3_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_40_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_40_4_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_40_4_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_40_4_address0 = grp_FIRE3_fu_2067_WEIGHT1_40_4_address0.read();
        } else {
            WEIGHT1_DB_40_4_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_40_4_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_40_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_40_4_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_40_4_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_40_4_ce0 = grp_FIRE3_fu_2067_WEIGHT1_40_4_ce0.read();
        } else {
            WEIGHT1_DB_40_4_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_40_4_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_40_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_40_4_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_40_4_we0.read();
    } else {
        WEIGHT1_DB_40_4_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_40_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_40_5_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_40_5_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_40_5_address0 = grp_FIRE3_fu_2067_WEIGHT1_40_5_address0.read();
        } else {
            WEIGHT1_DB_40_5_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_40_5_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_40_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_40_5_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_40_5_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_40_5_ce0 = grp_FIRE3_fu_2067_WEIGHT1_40_5_ce0.read();
        } else {
            WEIGHT1_DB_40_5_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_40_5_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_40_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_40_5_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_40_5_we0.read();
    } else {
        WEIGHT1_DB_40_5_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_40_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_40_6_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_40_6_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_40_6_address0 = grp_FIRE3_fu_2067_WEIGHT1_40_6_address0.read();
        } else {
            WEIGHT1_DB_40_6_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_40_6_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_40_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_40_6_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_40_6_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_40_6_ce0 = grp_FIRE3_fu_2067_WEIGHT1_40_6_ce0.read();
        } else {
            WEIGHT1_DB_40_6_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_40_6_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_40_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_40_6_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_40_6_we0.read();
    } else {
        WEIGHT1_DB_40_6_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_41_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_41_0_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_41_0_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_41_0_address0 = grp_FIRE3_fu_2067_WEIGHT1_41_0_address0.read();
        } else {
            WEIGHT1_DB_41_0_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_41_0_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_41_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_41_0_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_41_0_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_41_0_ce0 = grp_FIRE3_fu_2067_WEIGHT1_41_0_ce0.read();
        } else {
            WEIGHT1_DB_41_0_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_41_0_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_41_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_41_0_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_41_0_we0.read();
    } else {
        WEIGHT1_DB_41_0_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_41_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_41_1_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_41_1_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_41_1_address0 = grp_FIRE3_fu_2067_WEIGHT1_41_1_address0.read();
        } else {
            WEIGHT1_DB_41_1_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_41_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_41_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_41_1_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_41_1_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_41_1_ce0 = grp_FIRE3_fu_2067_WEIGHT1_41_1_ce0.read();
        } else {
            WEIGHT1_DB_41_1_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_41_1_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_41_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_41_1_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_41_1_we0.read();
    } else {
        WEIGHT1_DB_41_1_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_41_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_41_2_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_41_2_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_41_2_address0 = grp_FIRE3_fu_2067_WEIGHT1_41_2_address0.read();
        } else {
            WEIGHT1_DB_41_2_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_41_2_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_41_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_41_2_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_41_2_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_41_2_ce0 = grp_FIRE3_fu_2067_WEIGHT1_41_2_ce0.read();
        } else {
            WEIGHT1_DB_41_2_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_41_2_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_41_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_41_2_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_41_2_we0.read();
    } else {
        WEIGHT1_DB_41_2_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_41_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_41_3_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_41_3_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_41_3_address0 = grp_FIRE3_fu_2067_WEIGHT1_41_3_address0.read();
        } else {
            WEIGHT1_DB_41_3_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_41_3_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_41_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_41_3_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_41_3_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_41_3_ce0 = grp_FIRE3_fu_2067_WEIGHT1_41_3_ce0.read();
        } else {
            WEIGHT1_DB_41_3_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_41_3_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_41_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_41_3_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_41_3_we0.read();
    } else {
        WEIGHT1_DB_41_3_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_41_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_41_4_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_41_4_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_41_4_address0 = grp_FIRE3_fu_2067_WEIGHT1_41_4_address0.read();
        } else {
            WEIGHT1_DB_41_4_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_41_4_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_41_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_41_4_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_41_4_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_41_4_ce0 = grp_FIRE3_fu_2067_WEIGHT1_41_4_ce0.read();
        } else {
            WEIGHT1_DB_41_4_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_41_4_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_41_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_41_4_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_41_4_we0.read();
    } else {
        WEIGHT1_DB_41_4_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_41_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_41_5_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_41_5_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_41_5_address0 = grp_FIRE3_fu_2067_WEIGHT1_41_5_address0.read();
        } else {
            WEIGHT1_DB_41_5_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_41_5_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_41_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_41_5_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_41_5_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_41_5_ce0 = grp_FIRE3_fu_2067_WEIGHT1_41_5_ce0.read();
        } else {
            WEIGHT1_DB_41_5_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_41_5_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_41_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_41_5_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_41_5_we0.read();
    } else {
        WEIGHT1_DB_41_5_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_41_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_41_6_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_41_6_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_41_6_address0 = grp_FIRE3_fu_2067_WEIGHT1_41_6_address0.read();
        } else {
            WEIGHT1_DB_41_6_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_41_6_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_41_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_41_6_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_41_6_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_41_6_ce0 = grp_FIRE3_fu_2067_WEIGHT1_41_6_ce0.read();
        } else {
            WEIGHT1_DB_41_6_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_41_6_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_41_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_41_6_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_41_6_we0.read();
    } else {
        WEIGHT1_DB_41_6_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_42_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_42_0_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_42_0_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_42_0_address0 = grp_FIRE3_fu_2067_WEIGHT1_42_0_address0.read();
        } else {
            WEIGHT1_DB_42_0_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_42_0_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_42_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_42_0_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_42_0_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_42_0_ce0 = grp_FIRE3_fu_2067_WEIGHT1_42_0_ce0.read();
        } else {
            WEIGHT1_DB_42_0_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_42_0_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_42_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_42_0_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_42_0_we0.read();
    } else {
        WEIGHT1_DB_42_0_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_42_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_42_1_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_42_1_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_42_1_address0 = grp_FIRE3_fu_2067_WEIGHT1_42_1_address0.read();
        } else {
            WEIGHT1_DB_42_1_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_42_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_42_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_42_1_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_42_1_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_42_1_ce0 = grp_FIRE3_fu_2067_WEIGHT1_42_1_ce0.read();
        } else {
            WEIGHT1_DB_42_1_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_42_1_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_42_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_42_1_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_42_1_we0.read();
    } else {
        WEIGHT1_DB_42_1_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_42_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_42_2_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_42_2_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_42_2_address0 = grp_FIRE3_fu_2067_WEIGHT1_42_2_address0.read();
        } else {
            WEIGHT1_DB_42_2_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_42_2_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_42_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_42_2_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_42_2_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_42_2_ce0 = grp_FIRE3_fu_2067_WEIGHT1_42_2_ce0.read();
        } else {
            WEIGHT1_DB_42_2_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_42_2_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_42_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_42_2_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_42_2_we0.read();
    } else {
        WEIGHT1_DB_42_2_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_42_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_42_3_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_42_3_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_42_3_address0 = grp_FIRE3_fu_2067_WEIGHT1_42_3_address0.read();
        } else {
            WEIGHT1_DB_42_3_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_42_3_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_42_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_42_3_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_42_3_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_42_3_ce0 = grp_FIRE3_fu_2067_WEIGHT1_42_3_ce0.read();
        } else {
            WEIGHT1_DB_42_3_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_42_3_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_42_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_42_3_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_42_3_we0.read();
    } else {
        WEIGHT1_DB_42_3_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_42_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_42_4_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_42_4_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_42_4_address0 = grp_FIRE3_fu_2067_WEIGHT1_42_4_address0.read();
        } else {
            WEIGHT1_DB_42_4_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_42_4_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_42_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_42_4_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_42_4_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_42_4_ce0 = grp_FIRE3_fu_2067_WEIGHT1_42_4_ce0.read();
        } else {
            WEIGHT1_DB_42_4_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_42_4_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_42_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_42_4_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_42_4_we0.read();
    } else {
        WEIGHT1_DB_42_4_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_42_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_42_5_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_42_5_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_42_5_address0 = grp_FIRE3_fu_2067_WEIGHT1_42_5_address0.read();
        } else {
            WEIGHT1_DB_42_5_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_42_5_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_42_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_42_5_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_42_5_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_42_5_ce0 = grp_FIRE3_fu_2067_WEIGHT1_42_5_ce0.read();
        } else {
            WEIGHT1_DB_42_5_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_42_5_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_42_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_42_5_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_42_5_we0.read();
    } else {
        WEIGHT1_DB_42_5_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_42_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_42_6_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_42_6_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_42_6_address0 = grp_FIRE3_fu_2067_WEIGHT1_42_6_address0.read();
        } else {
            WEIGHT1_DB_42_6_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_42_6_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_42_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_42_6_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_42_6_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_42_6_ce0 = grp_FIRE3_fu_2067_WEIGHT1_42_6_ce0.read();
        } else {
            WEIGHT1_DB_42_6_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_42_6_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_42_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_42_6_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_42_6_we0.read();
    } else {
        WEIGHT1_DB_42_6_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_43_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_43_0_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_43_0_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_43_0_address0 = grp_FIRE3_fu_2067_WEIGHT1_43_0_address0.read();
        } else {
            WEIGHT1_DB_43_0_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_43_0_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_43_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_43_0_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_43_0_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_43_0_ce0 = grp_FIRE3_fu_2067_WEIGHT1_43_0_ce0.read();
        } else {
            WEIGHT1_DB_43_0_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_43_0_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_43_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_43_0_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_43_0_we0.read();
    } else {
        WEIGHT1_DB_43_0_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_43_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_43_1_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_43_1_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_43_1_address0 = grp_FIRE3_fu_2067_WEIGHT1_43_1_address0.read();
        } else {
            WEIGHT1_DB_43_1_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_43_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_43_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_43_1_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_43_1_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_43_1_ce0 = grp_FIRE3_fu_2067_WEIGHT1_43_1_ce0.read();
        } else {
            WEIGHT1_DB_43_1_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_43_1_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_43_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_43_1_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_43_1_we0.read();
    } else {
        WEIGHT1_DB_43_1_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_43_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_43_2_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_43_2_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_43_2_address0 = grp_FIRE3_fu_2067_WEIGHT1_43_2_address0.read();
        } else {
            WEIGHT1_DB_43_2_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_43_2_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_43_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_43_2_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_43_2_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_43_2_ce0 = grp_FIRE3_fu_2067_WEIGHT1_43_2_ce0.read();
        } else {
            WEIGHT1_DB_43_2_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_43_2_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_43_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_43_2_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_43_2_we0.read();
    } else {
        WEIGHT1_DB_43_2_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_43_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_43_3_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_43_3_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_43_3_address0 = grp_FIRE3_fu_2067_WEIGHT1_43_3_address0.read();
        } else {
            WEIGHT1_DB_43_3_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_43_3_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_43_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_43_3_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_43_3_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_43_3_ce0 = grp_FIRE3_fu_2067_WEIGHT1_43_3_ce0.read();
        } else {
            WEIGHT1_DB_43_3_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_43_3_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_43_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_43_3_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_43_3_we0.read();
    } else {
        WEIGHT1_DB_43_3_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_43_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_43_4_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_43_4_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_43_4_address0 = grp_FIRE3_fu_2067_WEIGHT1_43_4_address0.read();
        } else {
            WEIGHT1_DB_43_4_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_43_4_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_43_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_43_4_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_43_4_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_43_4_ce0 = grp_FIRE3_fu_2067_WEIGHT1_43_4_ce0.read();
        } else {
            WEIGHT1_DB_43_4_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_43_4_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_43_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_43_4_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_43_4_we0.read();
    } else {
        WEIGHT1_DB_43_4_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_43_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_43_5_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_43_5_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_43_5_address0 = grp_FIRE3_fu_2067_WEIGHT1_43_5_address0.read();
        } else {
            WEIGHT1_DB_43_5_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_43_5_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_43_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_43_5_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_43_5_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_43_5_ce0 = grp_FIRE3_fu_2067_WEIGHT1_43_5_ce0.read();
        } else {
            WEIGHT1_DB_43_5_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_43_5_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_43_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_43_5_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_43_5_we0.read();
    } else {
        WEIGHT1_DB_43_5_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_43_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_43_6_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_43_6_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_43_6_address0 = grp_FIRE3_fu_2067_WEIGHT1_43_6_address0.read();
        } else {
            WEIGHT1_DB_43_6_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_43_6_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_43_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_43_6_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_43_6_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_43_6_ce0 = grp_FIRE3_fu_2067_WEIGHT1_43_6_ce0.read();
        } else {
            WEIGHT1_DB_43_6_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_43_6_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_43_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_43_6_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_43_6_we0.read();
    } else {
        WEIGHT1_DB_43_6_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_44_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_44_0_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_44_0_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_44_0_address0 = grp_FIRE3_fu_2067_WEIGHT1_44_0_address0.read();
        } else {
            WEIGHT1_DB_44_0_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_44_0_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_44_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_44_0_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_44_0_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_44_0_ce0 = grp_FIRE3_fu_2067_WEIGHT1_44_0_ce0.read();
        } else {
            WEIGHT1_DB_44_0_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_44_0_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_44_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_44_0_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_44_0_we0.read();
    } else {
        WEIGHT1_DB_44_0_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_44_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_44_1_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_44_1_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_44_1_address0 = grp_FIRE3_fu_2067_WEIGHT1_44_1_address0.read();
        } else {
            WEIGHT1_DB_44_1_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_44_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_44_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_44_1_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_44_1_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_44_1_ce0 = grp_FIRE3_fu_2067_WEIGHT1_44_1_ce0.read();
        } else {
            WEIGHT1_DB_44_1_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_44_1_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_44_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_44_1_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_44_1_we0.read();
    } else {
        WEIGHT1_DB_44_1_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_44_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_44_2_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_44_2_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_44_2_address0 = grp_FIRE3_fu_2067_WEIGHT1_44_2_address0.read();
        } else {
            WEIGHT1_DB_44_2_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_44_2_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_44_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_44_2_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_44_2_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_44_2_ce0 = grp_FIRE3_fu_2067_WEIGHT1_44_2_ce0.read();
        } else {
            WEIGHT1_DB_44_2_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_44_2_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_44_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_44_2_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_44_2_we0.read();
    } else {
        WEIGHT1_DB_44_2_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_44_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_44_3_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_44_3_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_44_3_address0 = grp_FIRE3_fu_2067_WEIGHT1_44_3_address0.read();
        } else {
            WEIGHT1_DB_44_3_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_44_3_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_44_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_44_3_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_44_3_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_44_3_ce0 = grp_FIRE3_fu_2067_WEIGHT1_44_3_ce0.read();
        } else {
            WEIGHT1_DB_44_3_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_44_3_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_44_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_44_3_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_44_3_we0.read();
    } else {
        WEIGHT1_DB_44_3_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_44_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_44_4_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_44_4_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_44_4_address0 = grp_FIRE3_fu_2067_WEIGHT1_44_4_address0.read();
        } else {
            WEIGHT1_DB_44_4_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_44_4_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_44_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_44_4_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_44_4_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_44_4_ce0 = grp_FIRE3_fu_2067_WEIGHT1_44_4_ce0.read();
        } else {
            WEIGHT1_DB_44_4_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_44_4_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_44_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_44_4_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_44_4_we0.read();
    } else {
        WEIGHT1_DB_44_4_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_44_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_44_5_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_44_5_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_44_5_address0 = grp_FIRE3_fu_2067_WEIGHT1_44_5_address0.read();
        } else {
            WEIGHT1_DB_44_5_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_44_5_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_44_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_44_5_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_44_5_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_44_5_ce0 = grp_FIRE3_fu_2067_WEIGHT1_44_5_ce0.read();
        } else {
            WEIGHT1_DB_44_5_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_44_5_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_44_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_44_5_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_44_5_we0.read();
    } else {
        WEIGHT1_DB_44_5_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_44_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_44_6_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_44_6_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_44_6_address0 = grp_FIRE3_fu_2067_WEIGHT1_44_6_address0.read();
        } else {
            WEIGHT1_DB_44_6_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_44_6_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_44_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_44_6_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_44_6_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_44_6_ce0 = grp_FIRE3_fu_2067_WEIGHT1_44_6_ce0.read();
        } else {
            WEIGHT1_DB_44_6_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_44_6_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_44_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_44_6_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_44_6_we0.read();
    } else {
        WEIGHT1_DB_44_6_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_45_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_45_0_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_45_0_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_45_0_address0 = grp_FIRE3_fu_2067_WEIGHT1_45_0_address0.read();
        } else {
            WEIGHT1_DB_45_0_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_45_0_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_45_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_45_0_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_45_0_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_45_0_ce0 = grp_FIRE3_fu_2067_WEIGHT1_45_0_ce0.read();
        } else {
            WEIGHT1_DB_45_0_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_45_0_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_45_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_45_0_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_45_0_we0.read();
    } else {
        WEIGHT1_DB_45_0_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_45_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_45_1_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_45_1_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_45_1_address0 = grp_FIRE3_fu_2067_WEIGHT1_45_1_address0.read();
        } else {
            WEIGHT1_DB_45_1_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_45_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_45_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_45_1_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_45_1_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_45_1_ce0 = grp_FIRE3_fu_2067_WEIGHT1_45_1_ce0.read();
        } else {
            WEIGHT1_DB_45_1_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_45_1_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_45_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_45_1_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_45_1_we0.read();
    } else {
        WEIGHT1_DB_45_1_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_45_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_45_2_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_45_2_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_45_2_address0 = grp_FIRE3_fu_2067_WEIGHT1_45_2_address0.read();
        } else {
            WEIGHT1_DB_45_2_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_45_2_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_45_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_45_2_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_45_2_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_45_2_ce0 = grp_FIRE3_fu_2067_WEIGHT1_45_2_ce0.read();
        } else {
            WEIGHT1_DB_45_2_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_45_2_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_45_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_45_2_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_45_2_we0.read();
    } else {
        WEIGHT1_DB_45_2_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_45_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_45_3_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_45_3_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_45_3_address0 = grp_FIRE3_fu_2067_WEIGHT1_45_3_address0.read();
        } else {
            WEIGHT1_DB_45_3_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_45_3_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_45_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_45_3_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_45_3_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_45_3_ce0 = grp_FIRE3_fu_2067_WEIGHT1_45_3_ce0.read();
        } else {
            WEIGHT1_DB_45_3_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_45_3_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_45_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_45_3_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_45_3_we0.read();
    } else {
        WEIGHT1_DB_45_3_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_45_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_45_4_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_45_4_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_45_4_address0 = grp_FIRE3_fu_2067_WEIGHT1_45_4_address0.read();
        } else {
            WEIGHT1_DB_45_4_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_45_4_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_45_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_45_4_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_45_4_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_45_4_ce0 = grp_FIRE3_fu_2067_WEIGHT1_45_4_ce0.read();
        } else {
            WEIGHT1_DB_45_4_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_45_4_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_45_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_45_4_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_45_4_we0.read();
    } else {
        WEIGHT1_DB_45_4_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_45_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_45_5_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_45_5_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_45_5_address0 = grp_FIRE3_fu_2067_WEIGHT1_45_5_address0.read();
        } else {
            WEIGHT1_DB_45_5_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_45_5_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_45_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_45_5_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_45_5_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_45_5_ce0 = grp_FIRE3_fu_2067_WEIGHT1_45_5_ce0.read();
        } else {
            WEIGHT1_DB_45_5_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_45_5_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_45_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_45_5_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_45_5_we0.read();
    } else {
        WEIGHT1_DB_45_5_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_45_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_45_6_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_45_6_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_45_6_address0 = grp_FIRE3_fu_2067_WEIGHT1_45_6_address0.read();
        } else {
            WEIGHT1_DB_45_6_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_45_6_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_45_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_45_6_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_45_6_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_45_6_ce0 = grp_FIRE3_fu_2067_WEIGHT1_45_6_ce0.read();
        } else {
            WEIGHT1_DB_45_6_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_45_6_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_45_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_45_6_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_45_6_we0.read();
    } else {
        WEIGHT1_DB_45_6_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_46_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_46_0_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_46_0_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_46_0_address0 = grp_FIRE3_fu_2067_WEIGHT1_46_0_address0.read();
        } else {
            WEIGHT1_DB_46_0_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_46_0_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_46_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_46_0_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_46_0_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_46_0_ce0 = grp_FIRE3_fu_2067_WEIGHT1_46_0_ce0.read();
        } else {
            WEIGHT1_DB_46_0_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_46_0_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_46_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_46_0_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_46_0_we0.read();
    } else {
        WEIGHT1_DB_46_0_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_46_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_46_1_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_46_1_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_46_1_address0 = grp_FIRE3_fu_2067_WEIGHT1_46_1_address0.read();
        } else {
            WEIGHT1_DB_46_1_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_46_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_46_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_46_1_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_46_1_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_46_1_ce0 = grp_FIRE3_fu_2067_WEIGHT1_46_1_ce0.read();
        } else {
            WEIGHT1_DB_46_1_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_46_1_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_46_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_46_1_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_46_1_we0.read();
    } else {
        WEIGHT1_DB_46_1_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_46_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_46_2_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_46_2_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_46_2_address0 = grp_FIRE3_fu_2067_WEIGHT1_46_2_address0.read();
        } else {
            WEIGHT1_DB_46_2_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_46_2_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_46_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_46_2_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_46_2_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_46_2_ce0 = grp_FIRE3_fu_2067_WEIGHT1_46_2_ce0.read();
        } else {
            WEIGHT1_DB_46_2_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_46_2_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_46_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_46_2_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_46_2_we0.read();
    } else {
        WEIGHT1_DB_46_2_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_46_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_46_3_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_46_3_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_46_3_address0 = grp_FIRE3_fu_2067_WEIGHT1_46_3_address0.read();
        } else {
            WEIGHT1_DB_46_3_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_46_3_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_46_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_46_3_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_46_3_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_46_3_ce0 = grp_FIRE3_fu_2067_WEIGHT1_46_3_ce0.read();
        } else {
            WEIGHT1_DB_46_3_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_46_3_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_46_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_46_3_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_46_3_we0.read();
    } else {
        WEIGHT1_DB_46_3_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_46_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_46_4_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_46_4_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_46_4_address0 = grp_FIRE3_fu_2067_WEIGHT1_46_4_address0.read();
        } else {
            WEIGHT1_DB_46_4_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_46_4_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_46_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_46_4_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_46_4_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_46_4_ce0 = grp_FIRE3_fu_2067_WEIGHT1_46_4_ce0.read();
        } else {
            WEIGHT1_DB_46_4_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_46_4_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_46_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_46_4_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_46_4_we0.read();
    } else {
        WEIGHT1_DB_46_4_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_46_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_46_5_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_46_5_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_46_5_address0 = grp_FIRE3_fu_2067_WEIGHT1_46_5_address0.read();
        } else {
            WEIGHT1_DB_46_5_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_46_5_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_46_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_46_5_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_46_5_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_46_5_ce0 = grp_FIRE3_fu_2067_WEIGHT1_46_5_ce0.read();
        } else {
            WEIGHT1_DB_46_5_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_46_5_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_46_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_46_5_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_46_5_we0.read();
    } else {
        WEIGHT1_DB_46_5_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_46_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_46_6_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_46_6_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_46_6_address0 = grp_FIRE3_fu_2067_WEIGHT1_46_6_address0.read();
        } else {
            WEIGHT1_DB_46_6_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_46_6_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_46_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_46_6_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_46_6_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_46_6_ce0 = grp_FIRE3_fu_2067_WEIGHT1_46_6_ce0.read();
        } else {
            WEIGHT1_DB_46_6_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_46_6_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_46_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_46_6_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_46_6_we0.read();
    } else {
        WEIGHT1_DB_46_6_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_47_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_47_0_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_47_0_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_47_0_address0 = grp_FIRE3_fu_2067_WEIGHT1_47_0_address0.read();
        } else {
            WEIGHT1_DB_47_0_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_47_0_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_47_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_47_0_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_47_0_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_47_0_ce0 = grp_FIRE3_fu_2067_WEIGHT1_47_0_ce0.read();
        } else {
            WEIGHT1_DB_47_0_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_47_0_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_47_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_47_0_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_47_0_we0.read();
    } else {
        WEIGHT1_DB_47_0_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_47_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_47_1_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_47_1_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_47_1_address0 = grp_FIRE3_fu_2067_WEIGHT1_47_1_address0.read();
        } else {
            WEIGHT1_DB_47_1_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_47_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_47_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_47_1_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_47_1_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_47_1_ce0 = grp_FIRE3_fu_2067_WEIGHT1_47_1_ce0.read();
        } else {
            WEIGHT1_DB_47_1_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_47_1_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_47_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_47_1_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_47_1_we0.read();
    } else {
        WEIGHT1_DB_47_1_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_47_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_47_2_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_47_2_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_47_2_address0 = grp_FIRE3_fu_2067_WEIGHT1_47_2_address0.read();
        } else {
            WEIGHT1_DB_47_2_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_47_2_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_47_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_47_2_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_47_2_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_47_2_ce0 = grp_FIRE3_fu_2067_WEIGHT1_47_2_ce0.read();
        } else {
            WEIGHT1_DB_47_2_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_47_2_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_47_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_47_2_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_47_2_we0.read();
    } else {
        WEIGHT1_DB_47_2_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_47_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_47_3_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_47_3_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_47_3_address0 = grp_FIRE3_fu_2067_WEIGHT1_47_3_address0.read();
        } else {
            WEIGHT1_DB_47_3_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_47_3_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_47_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_47_3_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_47_3_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_47_3_ce0 = grp_FIRE3_fu_2067_WEIGHT1_47_3_ce0.read();
        } else {
            WEIGHT1_DB_47_3_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_47_3_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_47_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_47_3_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_47_3_we0.read();
    } else {
        WEIGHT1_DB_47_3_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_47_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_47_4_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_47_4_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_47_4_address0 = grp_FIRE3_fu_2067_WEIGHT1_47_4_address0.read();
        } else {
            WEIGHT1_DB_47_4_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_47_4_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_47_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_47_4_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_47_4_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_47_4_ce0 = grp_FIRE3_fu_2067_WEIGHT1_47_4_ce0.read();
        } else {
            WEIGHT1_DB_47_4_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_47_4_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_47_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_47_4_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_47_4_we0.read();
    } else {
        WEIGHT1_DB_47_4_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_47_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_47_5_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_47_5_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_47_5_address0 = grp_FIRE3_fu_2067_WEIGHT1_47_5_address0.read();
        } else {
            WEIGHT1_DB_47_5_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_47_5_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_47_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_47_5_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_47_5_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_47_5_ce0 = grp_FIRE3_fu_2067_WEIGHT1_47_5_ce0.read();
        } else {
            WEIGHT1_DB_47_5_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_47_5_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_47_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_47_5_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_47_5_we0.read();
    } else {
        WEIGHT1_DB_47_5_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_47_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_47_6_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_47_6_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_47_6_address0 = grp_FIRE3_fu_2067_WEIGHT1_47_6_address0.read();
        } else {
            WEIGHT1_DB_47_6_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_47_6_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_47_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_47_6_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_47_6_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_47_6_ce0 = grp_FIRE3_fu_2067_WEIGHT1_47_6_ce0.read();
        } else {
            WEIGHT1_DB_47_6_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_47_6_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_47_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_47_6_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_47_6_we0.read();
    } else {
        WEIGHT1_DB_47_6_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_48_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_48_0_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_48_0_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_48_0_address0 = grp_FIRE3_fu_2067_WEIGHT1_48_0_address0.read();
        } else {
            WEIGHT1_DB_48_0_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_48_0_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_48_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_48_0_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_48_0_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_48_0_ce0 = grp_FIRE3_fu_2067_WEIGHT1_48_0_ce0.read();
        } else {
            WEIGHT1_DB_48_0_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_48_0_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_48_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_48_0_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_48_0_we0.read();
    } else {
        WEIGHT1_DB_48_0_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_48_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_48_1_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_48_1_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_48_1_address0 = grp_FIRE3_fu_2067_WEIGHT1_48_1_address0.read();
        } else {
            WEIGHT1_DB_48_1_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_48_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_48_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_48_1_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_48_1_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_48_1_ce0 = grp_FIRE3_fu_2067_WEIGHT1_48_1_ce0.read();
        } else {
            WEIGHT1_DB_48_1_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_48_1_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_48_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_48_1_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_48_1_we0.read();
    } else {
        WEIGHT1_DB_48_1_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_48_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_48_2_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_48_2_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_48_2_address0 = grp_FIRE3_fu_2067_WEIGHT1_48_2_address0.read();
        } else {
            WEIGHT1_DB_48_2_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_48_2_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_48_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_48_2_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_48_2_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_48_2_ce0 = grp_FIRE3_fu_2067_WEIGHT1_48_2_ce0.read();
        } else {
            WEIGHT1_DB_48_2_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_48_2_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_48_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_48_2_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_48_2_we0.read();
    } else {
        WEIGHT1_DB_48_2_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_48_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_48_3_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_48_3_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_48_3_address0 = grp_FIRE3_fu_2067_WEIGHT1_48_3_address0.read();
        } else {
            WEIGHT1_DB_48_3_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_48_3_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_48_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_48_3_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_48_3_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_48_3_ce0 = grp_FIRE3_fu_2067_WEIGHT1_48_3_ce0.read();
        } else {
            WEIGHT1_DB_48_3_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_48_3_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_48_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_48_3_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_48_3_we0.read();
    } else {
        WEIGHT1_DB_48_3_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_48_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_48_4_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_48_4_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_48_4_address0 = grp_FIRE3_fu_2067_WEIGHT1_48_4_address0.read();
        } else {
            WEIGHT1_DB_48_4_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_48_4_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_48_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_48_4_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_48_4_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_48_4_ce0 = grp_FIRE3_fu_2067_WEIGHT1_48_4_ce0.read();
        } else {
            WEIGHT1_DB_48_4_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_48_4_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_48_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_48_4_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_48_4_we0.read();
    } else {
        WEIGHT1_DB_48_4_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_48_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_48_5_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_48_5_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_48_5_address0 = grp_FIRE3_fu_2067_WEIGHT1_48_5_address0.read();
        } else {
            WEIGHT1_DB_48_5_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_48_5_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_48_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_48_5_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_48_5_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_48_5_ce0 = grp_FIRE3_fu_2067_WEIGHT1_48_5_ce0.read();
        } else {
            WEIGHT1_DB_48_5_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_48_5_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_48_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_48_5_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_48_5_we0.read();
    } else {
        WEIGHT1_DB_48_5_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_48_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_48_6_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_48_6_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_48_6_address0 = grp_FIRE3_fu_2067_WEIGHT1_48_6_address0.read();
        } else {
            WEIGHT1_DB_48_6_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_48_6_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_48_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_48_6_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_48_6_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_48_6_ce0 = grp_FIRE3_fu_2067_WEIGHT1_48_6_ce0.read();
        } else {
            WEIGHT1_DB_48_6_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_48_6_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_48_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_48_6_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_48_6_we0.read();
    } else {
        WEIGHT1_DB_48_6_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_49_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_49_0_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_49_0_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_49_0_address0 = grp_FIRE3_fu_2067_WEIGHT1_49_0_address0.read();
        } else {
            WEIGHT1_DB_49_0_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_49_0_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_49_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_49_0_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_49_0_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_49_0_ce0 = grp_FIRE3_fu_2067_WEIGHT1_49_0_ce0.read();
        } else {
            WEIGHT1_DB_49_0_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_49_0_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_49_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_49_0_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_49_0_we0.read();
    } else {
        WEIGHT1_DB_49_0_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_49_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_49_1_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_49_1_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_49_1_address0 = grp_FIRE3_fu_2067_WEIGHT1_49_1_address0.read();
        } else {
            WEIGHT1_DB_49_1_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_49_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_49_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_49_1_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_49_1_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_49_1_ce0 = grp_FIRE3_fu_2067_WEIGHT1_49_1_ce0.read();
        } else {
            WEIGHT1_DB_49_1_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_49_1_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_49_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_49_1_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_49_1_we0.read();
    } else {
        WEIGHT1_DB_49_1_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_49_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_49_2_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_49_2_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_49_2_address0 = grp_FIRE3_fu_2067_WEIGHT1_49_2_address0.read();
        } else {
            WEIGHT1_DB_49_2_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_49_2_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_49_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_49_2_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_49_2_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_49_2_ce0 = grp_FIRE3_fu_2067_WEIGHT1_49_2_ce0.read();
        } else {
            WEIGHT1_DB_49_2_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_49_2_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_49_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_49_2_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_49_2_we0.read();
    } else {
        WEIGHT1_DB_49_2_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_49_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_49_3_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_49_3_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_49_3_address0 = grp_FIRE3_fu_2067_WEIGHT1_49_3_address0.read();
        } else {
            WEIGHT1_DB_49_3_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_49_3_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_49_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_49_3_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_49_3_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_49_3_ce0 = grp_FIRE3_fu_2067_WEIGHT1_49_3_ce0.read();
        } else {
            WEIGHT1_DB_49_3_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_49_3_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_49_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_49_3_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_49_3_we0.read();
    } else {
        WEIGHT1_DB_49_3_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_49_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_49_4_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_49_4_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_49_4_address0 = grp_FIRE3_fu_2067_WEIGHT1_49_4_address0.read();
        } else {
            WEIGHT1_DB_49_4_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_49_4_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_49_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_49_4_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_49_4_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_49_4_ce0 = grp_FIRE3_fu_2067_WEIGHT1_49_4_ce0.read();
        } else {
            WEIGHT1_DB_49_4_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_49_4_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_49_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_49_4_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_49_4_we0.read();
    } else {
        WEIGHT1_DB_49_4_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_49_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_49_5_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_49_5_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_49_5_address0 = grp_FIRE3_fu_2067_WEIGHT1_49_5_address0.read();
        } else {
            WEIGHT1_DB_49_5_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_49_5_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_49_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_49_5_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_49_5_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_49_5_ce0 = grp_FIRE3_fu_2067_WEIGHT1_49_5_ce0.read();
        } else {
            WEIGHT1_DB_49_5_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_49_5_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_49_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_49_5_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_49_5_we0.read();
    } else {
        WEIGHT1_DB_49_5_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_49_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_49_6_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_49_6_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_49_6_address0 = grp_FIRE3_fu_2067_WEIGHT1_49_6_address0.read();
        } else {
            WEIGHT1_DB_49_6_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_49_6_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_49_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_49_6_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_49_6_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_49_6_ce0 = grp_FIRE3_fu_2067_WEIGHT1_49_6_ce0.read();
        } else {
            WEIGHT1_DB_49_6_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_49_6_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_49_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_49_6_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_49_6_we0.read();
    } else {
        WEIGHT1_DB_49_6_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_4_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_4_0_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_4_0_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_4_0_address0 = grp_FIRE3_fu_2067_WEIGHT1_4_0_address0.read();
        } else {
            WEIGHT1_DB_4_0_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_4_0_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_4_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_4_0_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_4_0_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_4_0_ce0 = grp_FIRE3_fu_2067_WEIGHT1_4_0_ce0.read();
        } else {
            WEIGHT1_DB_4_0_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_4_0_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_4_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_4_0_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_4_0_we0.read();
    } else {
        WEIGHT1_DB_4_0_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_4_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_4_1_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_4_1_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_4_1_address0 = grp_FIRE3_fu_2067_WEIGHT1_4_1_address0.read();
        } else {
            WEIGHT1_DB_4_1_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_4_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_4_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_4_1_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_4_1_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_4_1_ce0 = grp_FIRE3_fu_2067_WEIGHT1_4_1_ce0.read();
        } else {
            WEIGHT1_DB_4_1_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_4_1_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_4_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_4_1_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_4_1_we0.read();
    } else {
        WEIGHT1_DB_4_1_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_4_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_4_2_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_4_2_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_4_2_address0 = grp_FIRE3_fu_2067_WEIGHT1_4_2_address0.read();
        } else {
            WEIGHT1_DB_4_2_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_4_2_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_4_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_4_2_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_4_2_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_4_2_ce0 = grp_FIRE3_fu_2067_WEIGHT1_4_2_ce0.read();
        } else {
            WEIGHT1_DB_4_2_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_4_2_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_4_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_4_2_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_4_2_we0.read();
    } else {
        WEIGHT1_DB_4_2_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_4_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_4_3_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_4_3_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_4_3_address0 = grp_FIRE3_fu_2067_WEIGHT1_4_3_address0.read();
        } else {
            WEIGHT1_DB_4_3_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_4_3_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_4_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_4_3_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_4_3_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_4_3_ce0 = grp_FIRE3_fu_2067_WEIGHT1_4_3_ce0.read();
        } else {
            WEIGHT1_DB_4_3_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_4_3_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_4_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_4_3_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_4_3_we0.read();
    } else {
        WEIGHT1_DB_4_3_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_4_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_4_4_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_4_4_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_4_4_address0 = grp_FIRE3_fu_2067_WEIGHT1_4_4_address0.read();
        } else {
            WEIGHT1_DB_4_4_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_4_4_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_4_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_4_4_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_4_4_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_4_4_ce0 = grp_FIRE3_fu_2067_WEIGHT1_4_4_ce0.read();
        } else {
            WEIGHT1_DB_4_4_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_4_4_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_4_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_4_4_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_4_4_we0.read();
    } else {
        WEIGHT1_DB_4_4_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_4_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_4_5_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_4_5_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_4_5_address0 = grp_FIRE3_fu_2067_WEIGHT1_4_5_address0.read();
        } else {
            WEIGHT1_DB_4_5_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_4_5_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_4_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_4_5_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_4_5_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_4_5_ce0 = grp_FIRE3_fu_2067_WEIGHT1_4_5_ce0.read();
        } else {
            WEIGHT1_DB_4_5_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_4_5_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_4_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_4_5_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_4_5_we0.read();
    } else {
        WEIGHT1_DB_4_5_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_4_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_4_6_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_4_6_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_4_6_address0 = grp_FIRE3_fu_2067_WEIGHT1_4_6_address0.read();
        } else {
            WEIGHT1_DB_4_6_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_4_6_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_4_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_4_6_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_4_6_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_4_6_ce0 = grp_FIRE3_fu_2067_WEIGHT1_4_6_ce0.read();
        } else {
            WEIGHT1_DB_4_6_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_4_6_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_4_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_4_6_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_4_6_we0.read();
    } else {
        WEIGHT1_DB_4_6_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_50_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_50_0_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_50_0_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_50_0_address0 = grp_FIRE3_fu_2067_WEIGHT1_50_0_address0.read();
        } else {
            WEIGHT1_DB_50_0_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_50_0_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_50_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_50_0_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_50_0_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_50_0_ce0 = grp_FIRE3_fu_2067_WEIGHT1_50_0_ce0.read();
        } else {
            WEIGHT1_DB_50_0_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_50_0_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_50_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_50_0_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_50_0_we0.read();
    } else {
        WEIGHT1_DB_50_0_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_50_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_50_1_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_50_1_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_50_1_address0 = grp_FIRE3_fu_2067_WEIGHT1_50_1_address0.read();
        } else {
            WEIGHT1_DB_50_1_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_50_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_50_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_50_1_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_50_1_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_50_1_ce0 = grp_FIRE3_fu_2067_WEIGHT1_50_1_ce0.read();
        } else {
            WEIGHT1_DB_50_1_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_50_1_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_50_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_50_1_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_50_1_we0.read();
    } else {
        WEIGHT1_DB_50_1_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_50_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_50_2_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_50_2_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_50_2_address0 = grp_FIRE3_fu_2067_WEIGHT1_50_2_address0.read();
        } else {
            WEIGHT1_DB_50_2_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_50_2_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_50_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_50_2_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_50_2_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_50_2_ce0 = grp_FIRE3_fu_2067_WEIGHT1_50_2_ce0.read();
        } else {
            WEIGHT1_DB_50_2_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_50_2_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_50_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_50_2_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_50_2_we0.read();
    } else {
        WEIGHT1_DB_50_2_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_50_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_50_3_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_50_3_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_50_3_address0 = grp_FIRE3_fu_2067_WEIGHT1_50_3_address0.read();
        } else {
            WEIGHT1_DB_50_3_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_50_3_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_50_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_50_3_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_50_3_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_50_3_ce0 = grp_FIRE3_fu_2067_WEIGHT1_50_3_ce0.read();
        } else {
            WEIGHT1_DB_50_3_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_50_3_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_50_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_50_3_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_50_3_we0.read();
    } else {
        WEIGHT1_DB_50_3_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_50_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_50_4_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_50_4_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_50_4_address0 = grp_FIRE3_fu_2067_WEIGHT1_50_4_address0.read();
        } else {
            WEIGHT1_DB_50_4_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_50_4_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_50_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_50_4_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_50_4_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_50_4_ce0 = grp_FIRE3_fu_2067_WEIGHT1_50_4_ce0.read();
        } else {
            WEIGHT1_DB_50_4_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_50_4_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_50_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_50_4_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_50_4_we0.read();
    } else {
        WEIGHT1_DB_50_4_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_50_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_50_5_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_50_5_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_50_5_address0 = grp_FIRE3_fu_2067_WEIGHT1_50_5_address0.read();
        } else {
            WEIGHT1_DB_50_5_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_50_5_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_50_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_50_5_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_50_5_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_50_5_ce0 = grp_FIRE3_fu_2067_WEIGHT1_50_5_ce0.read();
        } else {
            WEIGHT1_DB_50_5_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_50_5_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_50_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_50_5_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_50_5_we0.read();
    } else {
        WEIGHT1_DB_50_5_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_50_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_50_6_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_50_6_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_50_6_address0 = grp_FIRE3_fu_2067_WEIGHT1_50_6_address0.read();
        } else {
            WEIGHT1_DB_50_6_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_50_6_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_50_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_50_6_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_50_6_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_50_6_ce0 = grp_FIRE3_fu_2067_WEIGHT1_50_6_ce0.read();
        } else {
            WEIGHT1_DB_50_6_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_50_6_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_50_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_50_6_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_50_6_we0.read();
    } else {
        WEIGHT1_DB_50_6_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_51_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_51_0_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_51_0_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_51_0_address0 = grp_FIRE3_fu_2067_WEIGHT1_51_0_address0.read();
        } else {
            WEIGHT1_DB_51_0_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_51_0_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_51_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_51_0_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_51_0_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_51_0_ce0 = grp_FIRE3_fu_2067_WEIGHT1_51_0_ce0.read();
        } else {
            WEIGHT1_DB_51_0_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_51_0_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_51_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_51_0_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_51_0_we0.read();
    } else {
        WEIGHT1_DB_51_0_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_51_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_51_1_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_51_1_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_51_1_address0 = grp_FIRE3_fu_2067_WEIGHT1_51_1_address0.read();
        } else {
            WEIGHT1_DB_51_1_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_51_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_51_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_51_1_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_51_1_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_51_1_ce0 = grp_FIRE3_fu_2067_WEIGHT1_51_1_ce0.read();
        } else {
            WEIGHT1_DB_51_1_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_51_1_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_51_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_51_1_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_51_1_we0.read();
    } else {
        WEIGHT1_DB_51_1_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_51_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_51_2_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_51_2_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_51_2_address0 = grp_FIRE3_fu_2067_WEIGHT1_51_2_address0.read();
        } else {
            WEIGHT1_DB_51_2_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_51_2_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_51_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_51_2_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_51_2_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_51_2_ce0 = grp_FIRE3_fu_2067_WEIGHT1_51_2_ce0.read();
        } else {
            WEIGHT1_DB_51_2_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_51_2_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_51_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_51_2_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_51_2_we0.read();
    } else {
        WEIGHT1_DB_51_2_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_51_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_51_3_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_51_3_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_51_3_address0 = grp_FIRE3_fu_2067_WEIGHT1_51_3_address0.read();
        } else {
            WEIGHT1_DB_51_3_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_51_3_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_51_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_51_3_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_51_3_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_51_3_ce0 = grp_FIRE3_fu_2067_WEIGHT1_51_3_ce0.read();
        } else {
            WEIGHT1_DB_51_3_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_51_3_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_51_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_51_3_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_51_3_we0.read();
    } else {
        WEIGHT1_DB_51_3_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_51_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_51_4_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_51_4_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_51_4_address0 = grp_FIRE3_fu_2067_WEIGHT1_51_4_address0.read();
        } else {
            WEIGHT1_DB_51_4_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_51_4_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_51_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_51_4_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_51_4_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_51_4_ce0 = grp_FIRE3_fu_2067_WEIGHT1_51_4_ce0.read();
        } else {
            WEIGHT1_DB_51_4_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_51_4_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_51_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_51_4_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_51_4_we0.read();
    } else {
        WEIGHT1_DB_51_4_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_51_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_51_5_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_51_5_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_51_5_address0 = grp_FIRE3_fu_2067_WEIGHT1_51_5_address0.read();
        } else {
            WEIGHT1_DB_51_5_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_51_5_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_51_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_51_5_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_51_5_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_51_5_ce0 = grp_FIRE3_fu_2067_WEIGHT1_51_5_ce0.read();
        } else {
            WEIGHT1_DB_51_5_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_51_5_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_51_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_51_5_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_51_5_we0.read();
    } else {
        WEIGHT1_DB_51_5_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_51_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_51_6_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_51_6_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_51_6_address0 = grp_FIRE3_fu_2067_WEIGHT1_51_6_address0.read();
        } else {
            WEIGHT1_DB_51_6_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_51_6_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_51_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_51_6_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_51_6_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_51_6_ce0 = grp_FIRE3_fu_2067_WEIGHT1_51_6_ce0.read();
        } else {
            WEIGHT1_DB_51_6_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_51_6_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_51_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_51_6_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_51_6_we0.read();
    } else {
        WEIGHT1_DB_51_6_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_52_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_52_0_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_52_0_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_52_0_address0 = grp_FIRE3_fu_2067_WEIGHT1_52_0_address0.read();
        } else {
            WEIGHT1_DB_52_0_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_52_0_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_52_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_52_0_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_52_0_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_52_0_ce0 = grp_FIRE3_fu_2067_WEIGHT1_52_0_ce0.read();
        } else {
            WEIGHT1_DB_52_0_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_52_0_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_52_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_52_0_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_52_0_we0.read();
    } else {
        WEIGHT1_DB_52_0_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_52_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_52_1_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_52_1_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_52_1_address0 = grp_FIRE3_fu_2067_WEIGHT1_52_1_address0.read();
        } else {
            WEIGHT1_DB_52_1_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_52_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_52_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_52_1_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_52_1_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_52_1_ce0 = grp_FIRE3_fu_2067_WEIGHT1_52_1_ce0.read();
        } else {
            WEIGHT1_DB_52_1_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_52_1_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_52_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_52_1_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_52_1_we0.read();
    } else {
        WEIGHT1_DB_52_1_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_52_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_52_2_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_52_2_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_52_2_address0 = grp_FIRE3_fu_2067_WEIGHT1_52_2_address0.read();
        } else {
            WEIGHT1_DB_52_2_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_52_2_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_52_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_52_2_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_52_2_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_52_2_ce0 = grp_FIRE3_fu_2067_WEIGHT1_52_2_ce0.read();
        } else {
            WEIGHT1_DB_52_2_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_52_2_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_52_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_52_2_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_52_2_we0.read();
    } else {
        WEIGHT1_DB_52_2_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_52_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_52_3_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_52_3_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_52_3_address0 = grp_FIRE3_fu_2067_WEIGHT1_52_3_address0.read();
        } else {
            WEIGHT1_DB_52_3_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_52_3_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_52_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_52_3_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_52_3_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_52_3_ce0 = grp_FIRE3_fu_2067_WEIGHT1_52_3_ce0.read();
        } else {
            WEIGHT1_DB_52_3_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_52_3_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_52_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_52_3_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_52_3_we0.read();
    } else {
        WEIGHT1_DB_52_3_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_52_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_52_4_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_52_4_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_52_4_address0 = grp_FIRE3_fu_2067_WEIGHT1_52_4_address0.read();
        } else {
            WEIGHT1_DB_52_4_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_52_4_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_52_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_52_4_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_52_4_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_52_4_ce0 = grp_FIRE3_fu_2067_WEIGHT1_52_4_ce0.read();
        } else {
            WEIGHT1_DB_52_4_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_52_4_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_52_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_52_4_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_52_4_we0.read();
    } else {
        WEIGHT1_DB_52_4_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_52_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_52_5_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_52_5_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_52_5_address0 = grp_FIRE3_fu_2067_WEIGHT1_52_5_address0.read();
        } else {
            WEIGHT1_DB_52_5_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_52_5_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_52_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_52_5_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_52_5_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_52_5_ce0 = grp_FIRE3_fu_2067_WEIGHT1_52_5_ce0.read();
        } else {
            WEIGHT1_DB_52_5_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_52_5_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_52_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_52_5_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_52_5_we0.read();
    } else {
        WEIGHT1_DB_52_5_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_52_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_52_6_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_52_6_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_52_6_address0 = grp_FIRE3_fu_2067_WEIGHT1_52_6_address0.read();
        } else {
            WEIGHT1_DB_52_6_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_52_6_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_52_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_52_6_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_52_6_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_52_6_ce0 = grp_FIRE3_fu_2067_WEIGHT1_52_6_ce0.read();
        } else {
            WEIGHT1_DB_52_6_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_52_6_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_52_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_52_6_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_52_6_we0.read();
    } else {
        WEIGHT1_DB_52_6_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_53_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_53_0_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_53_0_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_53_0_address0 = grp_FIRE3_fu_2067_WEIGHT1_53_0_address0.read();
        } else {
            WEIGHT1_DB_53_0_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_53_0_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_53_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_53_0_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_53_0_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_53_0_ce0 = grp_FIRE3_fu_2067_WEIGHT1_53_0_ce0.read();
        } else {
            WEIGHT1_DB_53_0_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_53_0_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_53_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_53_0_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_53_0_we0.read();
    } else {
        WEIGHT1_DB_53_0_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_53_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_53_1_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_53_1_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_53_1_address0 = grp_FIRE3_fu_2067_WEIGHT1_53_1_address0.read();
        } else {
            WEIGHT1_DB_53_1_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_53_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_53_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_53_1_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_53_1_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_53_1_ce0 = grp_FIRE3_fu_2067_WEIGHT1_53_1_ce0.read();
        } else {
            WEIGHT1_DB_53_1_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_53_1_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_53_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_53_1_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_53_1_we0.read();
    } else {
        WEIGHT1_DB_53_1_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_53_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_53_2_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_53_2_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_53_2_address0 = grp_FIRE3_fu_2067_WEIGHT1_53_2_address0.read();
        } else {
            WEIGHT1_DB_53_2_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_53_2_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_53_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_53_2_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_53_2_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_53_2_ce0 = grp_FIRE3_fu_2067_WEIGHT1_53_2_ce0.read();
        } else {
            WEIGHT1_DB_53_2_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_53_2_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_53_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_53_2_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_53_2_we0.read();
    } else {
        WEIGHT1_DB_53_2_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_53_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_53_3_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_53_3_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_53_3_address0 = grp_FIRE3_fu_2067_WEIGHT1_53_3_address0.read();
        } else {
            WEIGHT1_DB_53_3_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_53_3_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_53_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_53_3_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_53_3_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_53_3_ce0 = grp_FIRE3_fu_2067_WEIGHT1_53_3_ce0.read();
        } else {
            WEIGHT1_DB_53_3_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_53_3_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_53_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_53_3_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_53_3_we0.read();
    } else {
        WEIGHT1_DB_53_3_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_53_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_53_4_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_53_4_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_53_4_address0 = grp_FIRE3_fu_2067_WEIGHT1_53_4_address0.read();
        } else {
            WEIGHT1_DB_53_4_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_53_4_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_53_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_53_4_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_53_4_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_53_4_ce0 = grp_FIRE3_fu_2067_WEIGHT1_53_4_ce0.read();
        } else {
            WEIGHT1_DB_53_4_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_53_4_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_53_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_53_4_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_53_4_we0.read();
    } else {
        WEIGHT1_DB_53_4_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_53_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_53_5_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_53_5_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_53_5_address0 = grp_FIRE3_fu_2067_WEIGHT1_53_5_address0.read();
        } else {
            WEIGHT1_DB_53_5_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_53_5_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_53_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_53_5_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_53_5_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_53_5_ce0 = grp_FIRE3_fu_2067_WEIGHT1_53_5_ce0.read();
        } else {
            WEIGHT1_DB_53_5_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_53_5_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_53_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_53_5_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_53_5_we0.read();
    } else {
        WEIGHT1_DB_53_5_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_53_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_53_6_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_53_6_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_53_6_address0 = grp_FIRE3_fu_2067_WEIGHT1_53_6_address0.read();
        } else {
            WEIGHT1_DB_53_6_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_53_6_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_53_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_53_6_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_53_6_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_53_6_ce0 = grp_FIRE3_fu_2067_WEIGHT1_53_6_ce0.read();
        } else {
            WEIGHT1_DB_53_6_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_53_6_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_53_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_53_6_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_53_6_we0.read();
    } else {
        WEIGHT1_DB_53_6_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_54_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_54_0_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_54_0_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_54_0_address0 = grp_FIRE3_fu_2067_WEIGHT1_54_0_address0.read();
        } else {
            WEIGHT1_DB_54_0_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_54_0_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_54_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_54_0_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_54_0_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_54_0_ce0 = grp_FIRE3_fu_2067_WEIGHT1_54_0_ce0.read();
        } else {
            WEIGHT1_DB_54_0_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_54_0_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_54_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_54_0_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_54_0_we0.read();
    } else {
        WEIGHT1_DB_54_0_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_54_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_54_1_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_54_1_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_54_1_address0 = grp_FIRE3_fu_2067_WEIGHT1_54_1_address0.read();
        } else {
            WEIGHT1_DB_54_1_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_54_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_54_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_54_1_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_54_1_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_54_1_ce0 = grp_FIRE3_fu_2067_WEIGHT1_54_1_ce0.read();
        } else {
            WEIGHT1_DB_54_1_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_54_1_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_54_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_54_1_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_54_1_we0.read();
    } else {
        WEIGHT1_DB_54_1_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_54_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_54_2_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_54_2_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_54_2_address0 = grp_FIRE3_fu_2067_WEIGHT1_54_2_address0.read();
        } else {
            WEIGHT1_DB_54_2_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_54_2_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_54_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_54_2_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_54_2_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_54_2_ce0 = grp_FIRE3_fu_2067_WEIGHT1_54_2_ce0.read();
        } else {
            WEIGHT1_DB_54_2_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_54_2_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_54_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_54_2_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_54_2_we0.read();
    } else {
        WEIGHT1_DB_54_2_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_54_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_54_3_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_54_3_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_54_3_address0 = grp_FIRE3_fu_2067_WEIGHT1_54_3_address0.read();
        } else {
            WEIGHT1_DB_54_3_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_54_3_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_54_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_54_3_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_54_3_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_54_3_ce0 = grp_FIRE3_fu_2067_WEIGHT1_54_3_ce0.read();
        } else {
            WEIGHT1_DB_54_3_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_54_3_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_54_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_54_3_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_54_3_we0.read();
    } else {
        WEIGHT1_DB_54_3_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_54_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_54_4_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_54_4_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_54_4_address0 = grp_FIRE3_fu_2067_WEIGHT1_54_4_address0.read();
        } else {
            WEIGHT1_DB_54_4_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_54_4_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_54_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_54_4_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_54_4_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_54_4_ce0 = grp_FIRE3_fu_2067_WEIGHT1_54_4_ce0.read();
        } else {
            WEIGHT1_DB_54_4_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_54_4_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_54_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_54_4_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_54_4_we0.read();
    } else {
        WEIGHT1_DB_54_4_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_54_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_54_5_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_54_5_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_54_5_address0 = grp_FIRE3_fu_2067_WEIGHT1_54_5_address0.read();
        } else {
            WEIGHT1_DB_54_5_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_54_5_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_54_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_54_5_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_54_5_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_54_5_ce0 = grp_FIRE3_fu_2067_WEIGHT1_54_5_ce0.read();
        } else {
            WEIGHT1_DB_54_5_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_54_5_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_54_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_54_5_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_54_5_we0.read();
    } else {
        WEIGHT1_DB_54_5_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_54_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_54_6_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_54_6_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_54_6_address0 = grp_FIRE3_fu_2067_WEIGHT1_54_6_address0.read();
        } else {
            WEIGHT1_DB_54_6_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_54_6_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_54_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_54_6_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_54_6_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_54_6_ce0 = grp_FIRE3_fu_2067_WEIGHT1_54_6_ce0.read();
        } else {
            WEIGHT1_DB_54_6_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_54_6_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_54_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_54_6_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_54_6_we0.read();
    } else {
        WEIGHT1_DB_54_6_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_55_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_55_0_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_55_0_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_55_0_address0 = grp_FIRE3_fu_2067_WEIGHT1_55_0_address0.read();
        } else {
            WEIGHT1_DB_55_0_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_55_0_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_55_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_55_0_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_55_0_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_55_0_ce0 = grp_FIRE3_fu_2067_WEIGHT1_55_0_ce0.read();
        } else {
            WEIGHT1_DB_55_0_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_55_0_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_55_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_55_0_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_55_0_we0.read();
    } else {
        WEIGHT1_DB_55_0_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_55_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_55_1_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_55_1_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_55_1_address0 = grp_FIRE3_fu_2067_WEIGHT1_55_1_address0.read();
        } else {
            WEIGHT1_DB_55_1_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_55_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_55_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_55_1_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_55_1_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_55_1_ce0 = grp_FIRE3_fu_2067_WEIGHT1_55_1_ce0.read();
        } else {
            WEIGHT1_DB_55_1_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_55_1_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_55_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_55_1_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_55_1_we0.read();
    } else {
        WEIGHT1_DB_55_1_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_55_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_55_2_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_55_2_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_55_2_address0 = grp_FIRE3_fu_2067_WEIGHT1_55_2_address0.read();
        } else {
            WEIGHT1_DB_55_2_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_55_2_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_55_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_55_2_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_55_2_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_55_2_ce0 = grp_FIRE3_fu_2067_WEIGHT1_55_2_ce0.read();
        } else {
            WEIGHT1_DB_55_2_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_55_2_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_55_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_55_2_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_55_2_we0.read();
    } else {
        WEIGHT1_DB_55_2_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_55_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_55_3_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_55_3_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_55_3_address0 = grp_FIRE3_fu_2067_WEIGHT1_55_3_address0.read();
        } else {
            WEIGHT1_DB_55_3_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_55_3_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_55_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_55_3_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_55_3_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_55_3_ce0 = grp_FIRE3_fu_2067_WEIGHT1_55_3_ce0.read();
        } else {
            WEIGHT1_DB_55_3_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_55_3_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_55_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_55_3_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_55_3_we0.read();
    } else {
        WEIGHT1_DB_55_3_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_55_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_55_4_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_55_4_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_55_4_address0 = grp_FIRE3_fu_2067_WEIGHT1_55_4_address0.read();
        } else {
            WEIGHT1_DB_55_4_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_55_4_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_55_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_55_4_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_55_4_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_55_4_ce0 = grp_FIRE3_fu_2067_WEIGHT1_55_4_ce0.read();
        } else {
            WEIGHT1_DB_55_4_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_55_4_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_55_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_55_4_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_55_4_we0.read();
    } else {
        WEIGHT1_DB_55_4_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_55_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_55_5_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_55_5_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_55_5_address0 = grp_FIRE3_fu_2067_WEIGHT1_55_5_address0.read();
        } else {
            WEIGHT1_DB_55_5_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_55_5_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_55_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_55_5_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_55_5_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_55_5_ce0 = grp_FIRE3_fu_2067_WEIGHT1_55_5_ce0.read();
        } else {
            WEIGHT1_DB_55_5_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_55_5_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_55_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_55_5_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_55_5_we0.read();
    } else {
        WEIGHT1_DB_55_5_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_55_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_55_6_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_55_6_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_55_6_address0 = grp_FIRE3_fu_2067_WEIGHT1_55_6_address0.read();
        } else {
            WEIGHT1_DB_55_6_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_55_6_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_55_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_55_6_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_55_6_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_55_6_ce0 = grp_FIRE3_fu_2067_WEIGHT1_55_6_ce0.read();
        } else {
            WEIGHT1_DB_55_6_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_55_6_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_55_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_55_6_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_55_6_we0.read();
    } else {
        WEIGHT1_DB_55_6_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_56_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_56_0_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_56_0_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_56_0_address0 = grp_FIRE3_fu_2067_WEIGHT1_56_0_address0.read();
        } else {
            WEIGHT1_DB_56_0_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_56_0_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_56_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_56_0_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_56_0_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_56_0_ce0 = grp_FIRE3_fu_2067_WEIGHT1_56_0_ce0.read();
        } else {
            WEIGHT1_DB_56_0_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_56_0_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_56_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_56_0_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_56_0_we0.read();
    } else {
        WEIGHT1_DB_56_0_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_56_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_56_1_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_56_1_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_56_1_address0 = grp_FIRE3_fu_2067_WEIGHT1_56_1_address0.read();
        } else {
            WEIGHT1_DB_56_1_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_56_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_56_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_56_1_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_56_1_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_56_1_ce0 = grp_FIRE3_fu_2067_WEIGHT1_56_1_ce0.read();
        } else {
            WEIGHT1_DB_56_1_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_56_1_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_56_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_56_1_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_56_1_we0.read();
    } else {
        WEIGHT1_DB_56_1_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_56_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_56_2_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_56_2_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_56_2_address0 = grp_FIRE3_fu_2067_WEIGHT1_56_2_address0.read();
        } else {
            WEIGHT1_DB_56_2_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_56_2_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_56_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_56_2_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_56_2_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_56_2_ce0 = grp_FIRE3_fu_2067_WEIGHT1_56_2_ce0.read();
        } else {
            WEIGHT1_DB_56_2_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_56_2_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_56_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_56_2_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_56_2_we0.read();
    } else {
        WEIGHT1_DB_56_2_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_56_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_56_3_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_56_3_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_56_3_address0 = grp_FIRE3_fu_2067_WEIGHT1_56_3_address0.read();
        } else {
            WEIGHT1_DB_56_3_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_56_3_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_56_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_56_3_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_56_3_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_56_3_ce0 = grp_FIRE3_fu_2067_WEIGHT1_56_3_ce0.read();
        } else {
            WEIGHT1_DB_56_3_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_56_3_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_56_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_56_3_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_56_3_we0.read();
    } else {
        WEIGHT1_DB_56_3_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_56_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_56_4_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_56_4_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_56_4_address0 = grp_FIRE3_fu_2067_WEIGHT1_56_4_address0.read();
        } else {
            WEIGHT1_DB_56_4_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_56_4_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_56_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_56_4_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_56_4_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_56_4_ce0 = grp_FIRE3_fu_2067_WEIGHT1_56_4_ce0.read();
        } else {
            WEIGHT1_DB_56_4_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_56_4_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_56_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_56_4_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_56_4_we0.read();
    } else {
        WEIGHT1_DB_56_4_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_56_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_56_5_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_56_5_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_56_5_address0 = grp_FIRE3_fu_2067_WEIGHT1_56_5_address0.read();
        } else {
            WEIGHT1_DB_56_5_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_56_5_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_56_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_56_5_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_56_5_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_56_5_ce0 = grp_FIRE3_fu_2067_WEIGHT1_56_5_ce0.read();
        } else {
            WEIGHT1_DB_56_5_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_56_5_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_56_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_56_5_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_56_5_we0.read();
    } else {
        WEIGHT1_DB_56_5_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_56_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_56_6_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_56_6_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_56_6_address0 = grp_FIRE3_fu_2067_WEIGHT1_56_6_address0.read();
        } else {
            WEIGHT1_DB_56_6_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_56_6_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_56_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_56_6_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_56_6_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_56_6_ce0 = grp_FIRE3_fu_2067_WEIGHT1_56_6_ce0.read();
        } else {
            WEIGHT1_DB_56_6_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_56_6_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_56_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_56_6_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_56_6_we0.read();
    } else {
        WEIGHT1_DB_56_6_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_57_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_57_0_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_57_0_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_57_0_address0 = grp_FIRE3_fu_2067_WEIGHT1_57_0_address0.read();
        } else {
            WEIGHT1_DB_57_0_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_57_0_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_57_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_57_0_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_57_0_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_57_0_ce0 = grp_FIRE3_fu_2067_WEIGHT1_57_0_ce0.read();
        } else {
            WEIGHT1_DB_57_0_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_57_0_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_57_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_57_0_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_57_0_we0.read();
    } else {
        WEIGHT1_DB_57_0_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_57_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_57_1_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_57_1_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_57_1_address0 = grp_FIRE3_fu_2067_WEIGHT1_57_1_address0.read();
        } else {
            WEIGHT1_DB_57_1_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_57_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_57_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_57_1_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_57_1_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_57_1_ce0 = grp_FIRE3_fu_2067_WEIGHT1_57_1_ce0.read();
        } else {
            WEIGHT1_DB_57_1_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_57_1_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_57_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_57_1_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_57_1_we0.read();
    } else {
        WEIGHT1_DB_57_1_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_57_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_57_2_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_57_2_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_57_2_address0 = grp_FIRE3_fu_2067_WEIGHT1_57_2_address0.read();
        } else {
            WEIGHT1_DB_57_2_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_57_2_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_57_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_57_2_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_57_2_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_57_2_ce0 = grp_FIRE3_fu_2067_WEIGHT1_57_2_ce0.read();
        } else {
            WEIGHT1_DB_57_2_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_57_2_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_57_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_57_2_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_57_2_we0.read();
    } else {
        WEIGHT1_DB_57_2_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_57_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_57_3_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_57_3_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_57_3_address0 = grp_FIRE3_fu_2067_WEIGHT1_57_3_address0.read();
        } else {
            WEIGHT1_DB_57_3_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_57_3_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_57_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_57_3_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_57_3_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_57_3_ce0 = grp_FIRE3_fu_2067_WEIGHT1_57_3_ce0.read();
        } else {
            WEIGHT1_DB_57_3_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_57_3_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_57_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_57_3_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_57_3_we0.read();
    } else {
        WEIGHT1_DB_57_3_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_57_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_57_4_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_57_4_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_57_4_address0 = grp_FIRE3_fu_2067_WEIGHT1_57_4_address0.read();
        } else {
            WEIGHT1_DB_57_4_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_57_4_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_57_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_57_4_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_57_4_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_57_4_ce0 = grp_FIRE3_fu_2067_WEIGHT1_57_4_ce0.read();
        } else {
            WEIGHT1_DB_57_4_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_57_4_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_57_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_57_4_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_57_4_we0.read();
    } else {
        WEIGHT1_DB_57_4_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_57_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_57_5_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_57_5_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_57_5_address0 = grp_FIRE3_fu_2067_WEIGHT1_57_5_address0.read();
        } else {
            WEIGHT1_DB_57_5_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_57_5_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_57_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_57_5_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_57_5_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_57_5_ce0 = grp_FIRE3_fu_2067_WEIGHT1_57_5_ce0.read();
        } else {
            WEIGHT1_DB_57_5_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_57_5_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_57_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_57_5_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_57_5_we0.read();
    } else {
        WEIGHT1_DB_57_5_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_57_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_57_6_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_57_6_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_57_6_address0 = grp_FIRE3_fu_2067_WEIGHT1_57_6_address0.read();
        } else {
            WEIGHT1_DB_57_6_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_57_6_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_57_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_57_6_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_57_6_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_57_6_ce0 = grp_FIRE3_fu_2067_WEIGHT1_57_6_ce0.read();
        } else {
            WEIGHT1_DB_57_6_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_57_6_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_57_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_57_6_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_57_6_we0.read();
    } else {
        WEIGHT1_DB_57_6_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_58_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_58_0_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_58_0_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_58_0_address0 = grp_FIRE3_fu_2067_WEIGHT1_58_0_address0.read();
        } else {
            WEIGHT1_DB_58_0_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_58_0_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_58_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_58_0_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_58_0_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_58_0_ce0 = grp_FIRE3_fu_2067_WEIGHT1_58_0_ce0.read();
        } else {
            WEIGHT1_DB_58_0_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_58_0_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_58_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_58_0_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_58_0_we0.read();
    } else {
        WEIGHT1_DB_58_0_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_58_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_58_1_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_58_1_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_58_1_address0 = grp_FIRE3_fu_2067_WEIGHT1_58_1_address0.read();
        } else {
            WEIGHT1_DB_58_1_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_58_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_58_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_58_1_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_58_1_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_58_1_ce0 = grp_FIRE3_fu_2067_WEIGHT1_58_1_ce0.read();
        } else {
            WEIGHT1_DB_58_1_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_58_1_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_58_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_58_1_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_58_1_we0.read();
    } else {
        WEIGHT1_DB_58_1_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_58_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_58_2_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_58_2_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_58_2_address0 = grp_FIRE3_fu_2067_WEIGHT1_58_2_address0.read();
        } else {
            WEIGHT1_DB_58_2_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_58_2_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_58_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_58_2_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_58_2_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_58_2_ce0 = grp_FIRE3_fu_2067_WEIGHT1_58_2_ce0.read();
        } else {
            WEIGHT1_DB_58_2_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_58_2_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_58_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_58_2_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_58_2_we0.read();
    } else {
        WEIGHT1_DB_58_2_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_58_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_58_3_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_58_3_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_58_3_address0 = grp_FIRE3_fu_2067_WEIGHT1_58_3_address0.read();
        } else {
            WEIGHT1_DB_58_3_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_58_3_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_58_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_58_3_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_58_3_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_58_3_ce0 = grp_FIRE3_fu_2067_WEIGHT1_58_3_ce0.read();
        } else {
            WEIGHT1_DB_58_3_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_58_3_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_58_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_58_3_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_58_3_we0.read();
    } else {
        WEIGHT1_DB_58_3_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_58_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_58_4_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_58_4_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_58_4_address0 = grp_FIRE3_fu_2067_WEIGHT1_58_4_address0.read();
        } else {
            WEIGHT1_DB_58_4_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_58_4_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_58_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_58_4_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_58_4_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_58_4_ce0 = grp_FIRE3_fu_2067_WEIGHT1_58_4_ce0.read();
        } else {
            WEIGHT1_DB_58_4_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_58_4_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_58_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_58_4_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_58_4_we0.read();
    } else {
        WEIGHT1_DB_58_4_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_58_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_58_5_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_58_5_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_58_5_address0 = grp_FIRE3_fu_2067_WEIGHT1_58_5_address0.read();
        } else {
            WEIGHT1_DB_58_5_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_58_5_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_58_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_58_5_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_58_5_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_58_5_ce0 = grp_FIRE3_fu_2067_WEIGHT1_58_5_ce0.read();
        } else {
            WEIGHT1_DB_58_5_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_58_5_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_58_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_58_5_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_58_5_we0.read();
    } else {
        WEIGHT1_DB_58_5_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_58_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_58_6_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_58_6_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_58_6_address0 = grp_FIRE3_fu_2067_WEIGHT1_58_6_address0.read();
        } else {
            WEIGHT1_DB_58_6_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_58_6_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_58_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_58_6_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_58_6_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_58_6_ce0 = grp_FIRE3_fu_2067_WEIGHT1_58_6_ce0.read();
        } else {
            WEIGHT1_DB_58_6_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_58_6_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_58_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_58_6_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_58_6_we0.read();
    } else {
        WEIGHT1_DB_58_6_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_59_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_59_0_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_59_0_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_59_0_address0 = grp_FIRE3_fu_2067_WEIGHT1_59_0_address0.read();
        } else {
            WEIGHT1_DB_59_0_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_59_0_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_59_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_59_0_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_59_0_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_59_0_ce0 = grp_FIRE3_fu_2067_WEIGHT1_59_0_ce0.read();
        } else {
            WEIGHT1_DB_59_0_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_59_0_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_59_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_59_0_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_59_0_we0.read();
    } else {
        WEIGHT1_DB_59_0_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_59_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_59_1_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_59_1_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_59_1_address0 = grp_FIRE3_fu_2067_WEIGHT1_59_1_address0.read();
        } else {
            WEIGHT1_DB_59_1_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_59_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_59_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_59_1_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_59_1_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_59_1_ce0 = grp_FIRE3_fu_2067_WEIGHT1_59_1_ce0.read();
        } else {
            WEIGHT1_DB_59_1_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_59_1_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_59_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_59_1_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_59_1_we0.read();
    } else {
        WEIGHT1_DB_59_1_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_59_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_59_2_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_59_2_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_59_2_address0 = grp_FIRE3_fu_2067_WEIGHT1_59_2_address0.read();
        } else {
            WEIGHT1_DB_59_2_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_59_2_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_59_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_59_2_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_59_2_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_59_2_ce0 = grp_FIRE3_fu_2067_WEIGHT1_59_2_ce0.read();
        } else {
            WEIGHT1_DB_59_2_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_59_2_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_59_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_59_2_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_59_2_we0.read();
    } else {
        WEIGHT1_DB_59_2_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_59_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_59_3_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_59_3_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_59_3_address0 = grp_FIRE3_fu_2067_WEIGHT1_59_3_address0.read();
        } else {
            WEIGHT1_DB_59_3_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_59_3_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_59_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_59_3_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_59_3_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_59_3_ce0 = grp_FIRE3_fu_2067_WEIGHT1_59_3_ce0.read();
        } else {
            WEIGHT1_DB_59_3_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_59_3_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_59_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_59_3_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_59_3_we0.read();
    } else {
        WEIGHT1_DB_59_3_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_59_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_59_4_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_59_4_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_59_4_address0 = grp_FIRE3_fu_2067_WEIGHT1_59_4_address0.read();
        } else {
            WEIGHT1_DB_59_4_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_59_4_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_59_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_59_4_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_59_4_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_59_4_ce0 = grp_FIRE3_fu_2067_WEIGHT1_59_4_ce0.read();
        } else {
            WEIGHT1_DB_59_4_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_59_4_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_59_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_59_4_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_59_4_we0.read();
    } else {
        WEIGHT1_DB_59_4_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_59_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_59_5_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_59_5_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_59_5_address0 = grp_FIRE3_fu_2067_WEIGHT1_59_5_address0.read();
        } else {
            WEIGHT1_DB_59_5_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_59_5_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_59_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_59_5_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_59_5_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_59_5_ce0 = grp_FIRE3_fu_2067_WEIGHT1_59_5_ce0.read();
        } else {
            WEIGHT1_DB_59_5_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_59_5_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_59_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_59_5_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_59_5_we0.read();
    } else {
        WEIGHT1_DB_59_5_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_59_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_59_6_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_59_6_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_59_6_address0 = grp_FIRE3_fu_2067_WEIGHT1_59_6_address0.read();
        } else {
            WEIGHT1_DB_59_6_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_59_6_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_59_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_59_6_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_59_6_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_59_6_ce0 = grp_FIRE3_fu_2067_WEIGHT1_59_6_ce0.read();
        } else {
            WEIGHT1_DB_59_6_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_59_6_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_59_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_59_6_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_59_6_we0.read();
    } else {
        WEIGHT1_DB_59_6_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_5_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_5_0_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_5_0_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_5_0_address0 = grp_FIRE3_fu_2067_WEIGHT1_5_0_address0.read();
        } else {
            WEIGHT1_DB_5_0_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_5_0_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_5_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_5_0_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_5_0_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_5_0_ce0 = grp_FIRE3_fu_2067_WEIGHT1_5_0_ce0.read();
        } else {
            WEIGHT1_DB_5_0_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_5_0_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_5_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_5_0_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_5_0_we0.read();
    } else {
        WEIGHT1_DB_5_0_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_5_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_5_1_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_5_1_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_5_1_address0 = grp_FIRE3_fu_2067_WEIGHT1_5_1_address0.read();
        } else {
            WEIGHT1_DB_5_1_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_5_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_5_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_5_1_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_5_1_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_5_1_ce0 = grp_FIRE3_fu_2067_WEIGHT1_5_1_ce0.read();
        } else {
            WEIGHT1_DB_5_1_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_5_1_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_5_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_5_1_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_5_1_we0.read();
    } else {
        WEIGHT1_DB_5_1_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_5_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_5_2_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_5_2_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_5_2_address0 = grp_FIRE3_fu_2067_WEIGHT1_5_2_address0.read();
        } else {
            WEIGHT1_DB_5_2_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_5_2_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_5_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_5_2_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_5_2_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_5_2_ce0 = grp_FIRE3_fu_2067_WEIGHT1_5_2_ce0.read();
        } else {
            WEIGHT1_DB_5_2_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_5_2_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_5_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_5_2_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_5_2_we0.read();
    } else {
        WEIGHT1_DB_5_2_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_5_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_5_3_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_5_3_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_5_3_address0 = grp_FIRE3_fu_2067_WEIGHT1_5_3_address0.read();
        } else {
            WEIGHT1_DB_5_3_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_5_3_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_5_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_5_3_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_5_3_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_5_3_ce0 = grp_FIRE3_fu_2067_WEIGHT1_5_3_ce0.read();
        } else {
            WEIGHT1_DB_5_3_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_5_3_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_5_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_5_3_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_5_3_we0.read();
    } else {
        WEIGHT1_DB_5_3_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_5_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_5_4_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_5_4_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_5_4_address0 = grp_FIRE3_fu_2067_WEIGHT1_5_4_address0.read();
        } else {
            WEIGHT1_DB_5_4_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_5_4_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_5_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_5_4_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_5_4_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_5_4_ce0 = grp_FIRE3_fu_2067_WEIGHT1_5_4_ce0.read();
        } else {
            WEIGHT1_DB_5_4_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_5_4_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_5_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_5_4_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_5_4_we0.read();
    } else {
        WEIGHT1_DB_5_4_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_5_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_5_5_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_5_5_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_5_5_address0 = grp_FIRE3_fu_2067_WEIGHT1_5_5_address0.read();
        } else {
            WEIGHT1_DB_5_5_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_5_5_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_5_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_5_5_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_5_5_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_5_5_ce0 = grp_FIRE3_fu_2067_WEIGHT1_5_5_ce0.read();
        } else {
            WEIGHT1_DB_5_5_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_5_5_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_5_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_5_5_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_5_5_we0.read();
    } else {
        WEIGHT1_DB_5_5_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_5_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_5_6_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_5_6_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_5_6_address0 = grp_FIRE3_fu_2067_WEIGHT1_5_6_address0.read();
        } else {
            WEIGHT1_DB_5_6_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_5_6_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_5_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_5_6_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_5_6_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_5_6_ce0 = grp_FIRE3_fu_2067_WEIGHT1_5_6_ce0.read();
        } else {
            WEIGHT1_DB_5_6_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_5_6_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_5_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_5_6_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_5_6_we0.read();
    } else {
        WEIGHT1_DB_5_6_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_60_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_60_0_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_60_0_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_60_0_address0 = grp_FIRE3_fu_2067_WEIGHT1_60_0_address0.read();
        } else {
            WEIGHT1_DB_60_0_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_60_0_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_60_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_60_0_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_60_0_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_60_0_ce0 = grp_FIRE3_fu_2067_WEIGHT1_60_0_ce0.read();
        } else {
            WEIGHT1_DB_60_0_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_60_0_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_60_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_60_0_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_60_0_we0.read();
    } else {
        WEIGHT1_DB_60_0_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_60_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_60_1_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_60_1_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_60_1_address0 = grp_FIRE3_fu_2067_WEIGHT1_60_1_address0.read();
        } else {
            WEIGHT1_DB_60_1_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_60_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_60_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_60_1_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_60_1_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_60_1_ce0 = grp_FIRE3_fu_2067_WEIGHT1_60_1_ce0.read();
        } else {
            WEIGHT1_DB_60_1_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_60_1_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_60_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_60_1_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_60_1_we0.read();
    } else {
        WEIGHT1_DB_60_1_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_60_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_60_2_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_60_2_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_60_2_address0 = grp_FIRE3_fu_2067_WEIGHT1_60_2_address0.read();
        } else {
            WEIGHT1_DB_60_2_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_60_2_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_60_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_60_2_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_60_2_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_60_2_ce0 = grp_FIRE3_fu_2067_WEIGHT1_60_2_ce0.read();
        } else {
            WEIGHT1_DB_60_2_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_60_2_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_60_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_60_2_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_60_2_we0.read();
    } else {
        WEIGHT1_DB_60_2_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_60_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_60_3_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_60_3_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_60_3_address0 = grp_FIRE3_fu_2067_WEIGHT1_60_3_address0.read();
        } else {
            WEIGHT1_DB_60_3_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_60_3_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_60_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_60_3_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_60_3_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_60_3_ce0 = grp_FIRE3_fu_2067_WEIGHT1_60_3_ce0.read();
        } else {
            WEIGHT1_DB_60_3_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_60_3_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_60_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_60_3_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_60_3_we0.read();
    } else {
        WEIGHT1_DB_60_3_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_60_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_60_4_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_60_4_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_60_4_address0 = grp_FIRE3_fu_2067_WEIGHT1_60_4_address0.read();
        } else {
            WEIGHT1_DB_60_4_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_60_4_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_60_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_60_4_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_60_4_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_60_4_ce0 = grp_FIRE3_fu_2067_WEIGHT1_60_4_ce0.read();
        } else {
            WEIGHT1_DB_60_4_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_60_4_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_60_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_60_4_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_60_4_we0.read();
    } else {
        WEIGHT1_DB_60_4_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_60_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_60_5_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_60_5_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_60_5_address0 = grp_FIRE3_fu_2067_WEIGHT1_60_5_address0.read();
        } else {
            WEIGHT1_DB_60_5_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_60_5_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_60_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_60_5_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_60_5_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_60_5_ce0 = grp_FIRE3_fu_2067_WEIGHT1_60_5_ce0.read();
        } else {
            WEIGHT1_DB_60_5_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_60_5_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_60_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_60_5_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_60_5_we0.read();
    } else {
        WEIGHT1_DB_60_5_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_60_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_60_6_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_60_6_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_60_6_address0 = grp_FIRE3_fu_2067_WEIGHT1_60_6_address0.read();
        } else {
            WEIGHT1_DB_60_6_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_60_6_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_60_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_60_6_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_60_6_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_60_6_ce0 = grp_FIRE3_fu_2067_WEIGHT1_60_6_ce0.read();
        } else {
            WEIGHT1_DB_60_6_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_60_6_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_60_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_60_6_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_60_6_we0.read();
    } else {
        WEIGHT1_DB_60_6_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_61_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_61_0_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_61_0_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_61_0_address0 = grp_FIRE3_fu_2067_WEIGHT1_61_0_address0.read();
        } else {
            WEIGHT1_DB_61_0_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_61_0_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_61_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_61_0_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_61_0_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_61_0_ce0 = grp_FIRE3_fu_2067_WEIGHT1_61_0_ce0.read();
        } else {
            WEIGHT1_DB_61_0_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_61_0_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_61_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_61_0_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_61_0_we0.read();
    } else {
        WEIGHT1_DB_61_0_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_61_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_61_1_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_61_1_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_61_1_address0 = grp_FIRE3_fu_2067_WEIGHT1_61_1_address0.read();
        } else {
            WEIGHT1_DB_61_1_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_61_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_61_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_61_1_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_61_1_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_61_1_ce0 = grp_FIRE3_fu_2067_WEIGHT1_61_1_ce0.read();
        } else {
            WEIGHT1_DB_61_1_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_61_1_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_61_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_61_1_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_61_1_we0.read();
    } else {
        WEIGHT1_DB_61_1_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_61_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_61_2_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_61_2_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_61_2_address0 = grp_FIRE3_fu_2067_WEIGHT1_61_2_address0.read();
        } else {
            WEIGHT1_DB_61_2_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_61_2_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_61_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_61_2_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_61_2_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_61_2_ce0 = grp_FIRE3_fu_2067_WEIGHT1_61_2_ce0.read();
        } else {
            WEIGHT1_DB_61_2_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_61_2_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_61_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_61_2_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_61_2_we0.read();
    } else {
        WEIGHT1_DB_61_2_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_61_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_61_3_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_61_3_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_61_3_address0 = grp_FIRE3_fu_2067_WEIGHT1_61_3_address0.read();
        } else {
            WEIGHT1_DB_61_3_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_61_3_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_61_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_61_3_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_61_3_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_61_3_ce0 = grp_FIRE3_fu_2067_WEIGHT1_61_3_ce0.read();
        } else {
            WEIGHT1_DB_61_3_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_61_3_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_61_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_61_3_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_61_3_we0.read();
    } else {
        WEIGHT1_DB_61_3_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_61_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_61_4_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_61_4_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_61_4_address0 = grp_FIRE3_fu_2067_WEIGHT1_61_4_address0.read();
        } else {
            WEIGHT1_DB_61_4_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_61_4_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_61_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_61_4_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_61_4_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_61_4_ce0 = grp_FIRE3_fu_2067_WEIGHT1_61_4_ce0.read();
        } else {
            WEIGHT1_DB_61_4_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_61_4_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_61_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_61_4_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_61_4_we0.read();
    } else {
        WEIGHT1_DB_61_4_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_61_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_61_5_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_61_5_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_61_5_address0 = grp_FIRE3_fu_2067_WEIGHT1_61_5_address0.read();
        } else {
            WEIGHT1_DB_61_5_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_61_5_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_DB_61_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_61_5_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_61_5_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_61_5_ce0 = grp_FIRE3_fu_2067_WEIGHT1_61_5_ce0.read();
        } else {
            WEIGHT1_DB_61_5_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_DB_61_5_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_61_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        WEIGHT1_DB_61_5_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_61_5_we0.read();
    } else {
        WEIGHT1_DB_61_5_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_DB_61_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_DB_61_6_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_61_6_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_DB_61_6_address0 = grp_FIRE3_fu_2067_WEIGHT1_61_6_address0.read();
        } else {
            WEIGHT1_DB_61_6_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_DB_61_6_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

}

