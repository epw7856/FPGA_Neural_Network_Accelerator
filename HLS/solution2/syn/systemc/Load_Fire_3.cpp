#include "Load_Fire.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void Load_Fire::thread_IFM_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            IFM_0_address0 = grp_LOAD_IFM_fu_4922_IFM_0_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            IFM_0_address0 = grp_FIRE3_fu_2067_IFM_0_address0.read();
        } else {
            IFM_0_address0 = "XXXXXXXX";
        }
    } else {
        IFM_0_address0 = "XXXXXXXX";
    }
}

void Load_Fire::thread_IFM_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            IFM_0_ce0 = grp_LOAD_IFM_fu_4922_IFM_0_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            IFM_0_ce0 = grp_FIRE3_fu_2067_IFM_0_ce0.read();
        } else {
            IFM_0_ce0 = ap_const_logic_0;
        }
    } else {
        IFM_0_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_IFM_0_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        IFM_0_ce1 = grp_FIRE3_fu_2067_IFM_0_ce1.read();
    } else {
        IFM_0_ce1 = ap_const_logic_0;
    }
}

void Load_Fire::thread_IFM_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        IFM_0_we0 = grp_LOAD_IFM_fu_4922_IFM_0_we0.read();
    } else {
        IFM_0_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_IFM_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            IFM_1_address0 = grp_LOAD_IFM_fu_4922_IFM_1_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            IFM_1_address0 = grp_FIRE3_fu_2067_IFM_1_address0.read();
        } else {
            IFM_1_address0 = "XXXXXXXX";
        }
    } else {
        IFM_1_address0 = "XXXXXXXX";
    }
}

void Load_Fire::thread_IFM_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            IFM_1_ce0 = grp_LOAD_IFM_fu_4922_IFM_1_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            IFM_1_ce0 = grp_FIRE3_fu_2067_IFM_1_ce0.read();
        } else {
            IFM_1_ce0 = ap_const_logic_0;
        }
    } else {
        IFM_1_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_IFM_1_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        IFM_1_ce1 = grp_FIRE3_fu_2067_IFM_1_ce1.read();
    } else {
        IFM_1_ce1 = ap_const_logic_0;
    }
}

void Load_Fire::thread_IFM_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        IFM_1_we0 = grp_LOAD_IFM_fu_4922_IFM_1_we0.read();
    } else {
        IFM_1_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_IFM_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            IFM_2_address0 = grp_LOAD_IFM_fu_4922_IFM_2_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            IFM_2_address0 = grp_FIRE3_fu_2067_IFM_2_address0.read();
        } else {
            IFM_2_address0 = "XXXXXXXX";
        }
    } else {
        IFM_2_address0 = "XXXXXXXX";
    }
}

void Load_Fire::thread_IFM_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            IFM_2_ce0 = grp_LOAD_IFM_fu_4922_IFM_2_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            IFM_2_ce0 = grp_FIRE3_fu_2067_IFM_2_ce0.read();
        } else {
            IFM_2_ce0 = ap_const_logic_0;
        }
    } else {
        IFM_2_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_IFM_2_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        IFM_2_ce1 = grp_FIRE3_fu_2067_IFM_2_ce1.read();
    } else {
        IFM_2_ce1 = ap_const_logic_0;
    }
}

void Load_Fire::thread_IFM_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        IFM_2_we0 = grp_LOAD_IFM_fu_4922_IFM_2_we0.read();
    } else {
        IFM_2_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_IFM_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            IFM_3_address0 = grp_LOAD_IFM_fu_4922_IFM_3_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            IFM_3_address0 = grp_FIRE3_fu_2067_IFM_3_address0.read();
        } else {
            IFM_3_address0 = "XXXXXXXX";
        }
    } else {
        IFM_3_address0 = "XXXXXXXX";
    }
}

void Load_Fire::thread_IFM_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            IFM_3_ce0 = grp_LOAD_IFM_fu_4922_IFM_3_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            IFM_3_ce0 = grp_FIRE3_fu_2067_IFM_3_ce0.read();
        } else {
            IFM_3_ce0 = ap_const_logic_0;
        }
    } else {
        IFM_3_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_IFM_3_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        IFM_3_ce1 = grp_FIRE3_fu_2067_IFM_3_ce1.read();
    } else {
        IFM_3_ce1 = ap_const_logic_0;
    }
}

void Load_Fire::thread_IFM_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        IFM_3_we0 = grp_LOAD_IFM_fu_4922_IFM_3_we0.read();
    } else {
        IFM_3_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_IFM_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            IFM_4_address0 = grp_LOAD_IFM_fu_4922_IFM_4_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            IFM_4_address0 = grp_FIRE3_fu_2067_IFM_4_address0.read();
        } else {
            IFM_4_address0 = "XXXXXXXX";
        }
    } else {
        IFM_4_address0 = "XXXXXXXX";
    }
}

void Load_Fire::thread_IFM_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            IFM_4_ce0 = grp_LOAD_IFM_fu_4922_IFM_4_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            IFM_4_ce0 = grp_FIRE3_fu_2067_IFM_4_ce0.read();
        } else {
            IFM_4_ce0 = ap_const_logic_0;
        }
    } else {
        IFM_4_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_IFM_4_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        IFM_4_ce1 = grp_FIRE3_fu_2067_IFM_4_ce1.read();
    } else {
        IFM_4_ce1 = ap_const_logic_0;
    }
}

void Load_Fire::thread_IFM_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        IFM_4_we0 = grp_LOAD_IFM_fu_4922_IFM_4_we0.read();
    } else {
        IFM_4_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_IFM_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            IFM_5_address0 = grp_LOAD_IFM_fu_4922_IFM_5_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            IFM_5_address0 = grp_FIRE3_fu_2067_IFM_5_address0.read();
        } else {
            IFM_5_address0 = "XXXXXXXX";
        }
    } else {
        IFM_5_address0 = "XXXXXXXX";
    }
}

void Load_Fire::thread_IFM_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            IFM_5_ce0 = grp_LOAD_IFM_fu_4922_IFM_5_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            IFM_5_ce0 = grp_FIRE3_fu_2067_IFM_5_ce0.read();
        } else {
            IFM_5_ce0 = ap_const_logic_0;
        }
    } else {
        IFM_5_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_IFM_5_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        IFM_5_ce1 = grp_FIRE3_fu_2067_IFM_5_ce1.read();
    } else {
        IFM_5_ce1 = ap_const_logic_0;
    }
}

void Load_Fire::thread_IFM_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        IFM_5_we0 = grp_LOAD_IFM_fu_4922_IFM_5_we0.read();
    } else {
        IFM_5_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_IFM_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            IFM_6_address0 = grp_LOAD_IFM_fu_4922_IFM_6_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            IFM_6_address0 = grp_FIRE3_fu_2067_IFM_6_address0.read();
        } else {
            IFM_6_address0 = "XXXXXXXX";
        }
    } else {
        IFM_6_address0 = "XXXXXXXX";
    }
}

void Load_Fire::thread_IFM_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            IFM_6_ce0 = grp_LOAD_IFM_fu_4922_IFM_6_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            IFM_6_ce0 = grp_FIRE3_fu_2067_IFM_6_ce0.read();
        } else {
            IFM_6_ce0 = ap_const_logic_0;
        }
    } else {
        IFM_6_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_IFM_6_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        IFM_6_ce1 = grp_FIRE3_fu_2067_IFM_6_ce1.read();
    } else {
        IFM_6_ce1 = ap_const_logic_0;
    }
}

void Load_Fire::thread_IFM_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        IFM_6_we0 = grp_LOAD_IFM_fu_4922_IFM_6_we0.read();
    } else {
        IFM_6_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_IFM_DB_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            IFM_DB_0_address0 = grp_LOAD_IFM_fu_4922_IFM_0_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            IFM_DB_0_address0 = grp_FIRE3_fu_2067_IFM_0_address0.read();
        } else {
            IFM_DB_0_address0 = "XXXXXXXX";
        }
    } else {
        IFM_DB_0_address0 = "XXXXXXXX";
    }
}

void Load_Fire::thread_IFM_DB_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            IFM_DB_0_ce0 = grp_LOAD_IFM_fu_4922_IFM_0_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            IFM_DB_0_ce0 = grp_FIRE3_fu_2067_IFM_0_ce0.read();
        } else {
            IFM_DB_0_ce0 = ap_const_logic_0;
        }
    } else {
        IFM_DB_0_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_IFM_DB_0_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        IFM_DB_0_ce1 = grp_FIRE3_fu_2067_IFM_0_ce1.read();
    } else {
        IFM_DB_0_ce1 = ap_const_logic_0;
    }
}

void Load_Fire::thread_IFM_DB_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        IFM_DB_0_we0 = grp_LOAD_IFM_fu_4922_IFM_0_we0.read();
    } else {
        IFM_DB_0_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_IFM_DB_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            IFM_DB_1_address0 = grp_LOAD_IFM_fu_4922_IFM_1_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            IFM_DB_1_address0 = grp_FIRE3_fu_2067_IFM_1_address0.read();
        } else {
            IFM_DB_1_address0 = "XXXXXXXX";
        }
    } else {
        IFM_DB_1_address0 = "XXXXXXXX";
    }
}

void Load_Fire::thread_IFM_DB_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            IFM_DB_1_ce0 = grp_LOAD_IFM_fu_4922_IFM_1_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            IFM_DB_1_ce0 = grp_FIRE3_fu_2067_IFM_1_ce0.read();
        } else {
            IFM_DB_1_ce0 = ap_const_logic_0;
        }
    } else {
        IFM_DB_1_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_IFM_DB_1_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        IFM_DB_1_ce1 = grp_FIRE3_fu_2067_IFM_1_ce1.read();
    } else {
        IFM_DB_1_ce1 = ap_const_logic_0;
    }
}

void Load_Fire::thread_IFM_DB_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        IFM_DB_1_we0 = grp_LOAD_IFM_fu_4922_IFM_1_we0.read();
    } else {
        IFM_DB_1_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_IFM_DB_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            IFM_DB_2_address0 = grp_LOAD_IFM_fu_4922_IFM_2_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            IFM_DB_2_address0 = grp_FIRE3_fu_2067_IFM_2_address0.read();
        } else {
            IFM_DB_2_address0 = "XXXXXXXX";
        }
    } else {
        IFM_DB_2_address0 = "XXXXXXXX";
    }
}

void Load_Fire::thread_IFM_DB_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            IFM_DB_2_ce0 = grp_LOAD_IFM_fu_4922_IFM_2_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            IFM_DB_2_ce0 = grp_FIRE3_fu_2067_IFM_2_ce0.read();
        } else {
            IFM_DB_2_ce0 = ap_const_logic_0;
        }
    } else {
        IFM_DB_2_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_IFM_DB_2_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        IFM_DB_2_ce1 = grp_FIRE3_fu_2067_IFM_2_ce1.read();
    } else {
        IFM_DB_2_ce1 = ap_const_logic_0;
    }
}

void Load_Fire::thread_IFM_DB_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        IFM_DB_2_we0 = grp_LOAD_IFM_fu_4922_IFM_2_we0.read();
    } else {
        IFM_DB_2_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_IFM_DB_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            IFM_DB_3_address0 = grp_LOAD_IFM_fu_4922_IFM_3_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            IFM_DB_3_address0 = grp_FIRE3_fu_2067_IFM_3_address0.read();
        } else {
            IFM_DB_3_address0 = "XXXXXXXX";
        }
    } else {
        IFM_DB_3_address0 = "XXXXXXXX";
    }
}

void Load_Fire::thread_IFM_DB_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            IFM_DB_3_ce0 = grp_LOAD_IFM_fu_4922_IFM_3_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            IFM_DB_3_ce0 = grp_FIRE3_fu_2067_IFM_3_ce0.read();
        } else {
            IFM_DB_3_ce0 = ap_const_logic_0;
        }
    } else {
        IFM_DB_3_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_IFM_DB_3_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        IFM_DB_3_ce1 = grp_FIRE3_fu_2067_IFM_3_ce1.read();
    } else {
        IFM_DB_3_ce1 = ap_const_logic_0;
    }
}

void Load_Fire::thread_IFM_DB_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        IFM_DB_3_we0 = grp_LOAD_IFM_fu_4922_IFM_3_we0.read();
    } else {
        IFM_DB_3_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_IFM_DB_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            IFM_DB_4_address0 = grp_LOAD_IFM_fu_4922_IFM_4_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            IFM_DB_4_address0 = grp_FIRE3_fu_2067_IFM_4_address0.read();
        } else {
            IFM_DB_4_address0 = "XXXXXXXX";
        }
    } else {
        IFM_DB_4_address0 = "XXXXXXXX";
    }
}

void Load_Fire::thread_IFM_DB_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            IFM_DB_4_ce0 = grp_LOAD_IFM_fu_4922_IFM_4_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            IFM_DB_4_ce0 = grp_FIRE3_fu_2067_IFM_4_ce0.read();
        } else {
            IFM_DB_4_ce0 = ap_const_logic_0;
        }
    } else {
        IFM_DB_4_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_IFM_DB_4_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        IFM_DB_4_ce1 = grp_FIRE3_fu_2067_IFM_4_ce1.read();
    } else {
        IFM_DB_4_ce1 = ap_const_logic_0;
    }
}

void Load_Fire::thread_IFM_DB_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        IFM_DB_4_we0 = grp_LOAD_IFM_fu_4922_IFM_4_we0.read();
    } else {
        IFM_DB_4_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_IFM_DB_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            IFM_DB_5_address0 = grp_LOAD_IFM_fu_4922_IFM_5_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            IFM_DB_5_address0 = grp_FIRE3_fu_2067_IFM_5_address0.read();
        } else {
            IFM_DB_5_address0 = "XXXXXXXX";
        }
    } else {
        IFM_DB_5_address0 = "XXXXXXXX";
    }
}

void Load_Fire::thread_IFM_DB_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            IFM_DB_5_ce0 = grp_LOAD_IFM_fu_4922_IFM_5_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            IFM_DB_5_ce0 = grp_FIRE3_fu_2067_IFM_5_ce0.read();
        } else {
            IFM_DB_5_ce0 = ap_const_logic_0;
        }
    } else {
        IFM_DB_5_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_IFM_DB_5_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        IFM_DB_5_ce1 = grp_FIRE3_fu_2067_IFM_5_ce1.read();
    } else {
        IFM_DB_5_ce1 = ap_const_logic_0;
    }
}

void Load_Fire::thread_IFM_DB_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        IFM_DB_5_we0 = grp_LOAD_IFM_fu_4922_IFM_5_we0.read();
    } else {
        IFM_DB_5_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_IFM_DB_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            IFM_DB_6_address0 = grp_LOAD_IFM_fu_4922_IFM_6_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            IFM_DB_6_address0 = grp_FIRE3_fu_2067_IFM_6_address0.read();
        } else {
            IFM_DB_6_address0 = "XXXXXXXX";
        }
    } else {
        IFM_DB_6_address0 = "XXXXXXXX";
    }
}

void Load_Fire::thread_IFM_DB_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            IFM_DB_6_ce0 = grp_LOAD_IFM_fu_4922_IFM_6_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            IFM_DB_6_ce0 = grp_FIRE3_fu_2067_IFM_6_ce0.read();
        } else {
            IFM_DB_6_ce0 = ap_const_logic_0;
        }
    } else {
        IFM_DB_6_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_IFM_DB_6_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        IFM_DB_6_ce1 = grp_FIRE3_fu_2067_IFM_6_ce1.read();
    } else {
        IFM_DB_6_ce1 = ap_const_logic_0;
    }
}

void Load_Fire::thread_IFM_DB_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1))) {
        IFM_DB_6_we0 = grp_LOAD_IFM_fu_4922_IFM_6_we0.read();
    } else {
        IFM_DB_6_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_0_address0() {
    OFM_0_address0 = grp_FIRE3_fu_2067_OFM_0_address0.read();
}

void Load_Fire::thread_OFM_0_address1() {
    OFM_0_address1 = grp_FIRE3_fu_2067_OFM_0_address1.read();
}

void Load_Fire::thread_OFM_0_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_0_ce0 = grp_FIRE3_fu_2067_OFM_0_ce0.read();
    } else {
        OFM_0_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_0_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_0_ce1 = grp_FIRE3_fu_2067_OFM_0_ce1.read();
    } else {
        OFM_0_ce1 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_0_d1() {
    OFM_0_d1 = grp_FIRE3_fu_2067_OFM_0_d1.read();
}

void Load_Fire::thread_OFM_0_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_0_we1 = grp_FIRE3_fu_2067_OFM_0_we1.read();
    } else {
        OFM_0_we1 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_10_address0() {
    OFM_10_address0 = grp_FIRE3_fu_2067_OFM_10_address0.read();
}

void Load_Fire::thread_OFM_10_address1() {
    OFM_10_address1 = grp_FIRE3_fu_2067_OFM_10_address1.read();
}

void Load_Fire::thread_OFM_10_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_10_ce0 = grp_FIRE3_fu_2067_OFM_10_ce0.read();
    } else {
        OFM_10_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_10_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_10_ce1 = grp_FIRE3_fu_2067_OFM_10_ce1.read();
    } else {
        OFM_10_ce1 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_10_d1() {
    OFM_10_d1 = grp_FIRE3_fu_2067_OFM_10_d1.read();
}

void Load_Fire::thread_OFM_10_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_10_we1 = grp_FIRE3_fu_2067_OFM_10_we1.read();
    } else {
        OFM_10_we1 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_11_address0() {
    OFM_11_address0 = grp_FIRE3_fu_2067_OFM_11_address0.read();
}

void Load_Fire::thread_OFM_11_address1() {
    OFM_11_address1 = grp_FIRE3_fu_2067_OFM_11_address1.read();
}

void Load_Fire::thread_OFM_11_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_11_ce0 = grp_FIRE3_fu_2067_OFM_11_ce0.read();
    } else {
        OFM_11_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_11_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_11_ce1 = grp_FIRE3_fu_2067_OFM_11_ce1.read();
    } else {
        OFM_11_ce1 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_11_d1() {
    OFM_11_d1 = grp_FIRE3_fu_2067_OFM_11_d1.read();
}

void Load_Fire::thread_OFM_11_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_11_we1 = grp_FIRE3_fu_2067_OFM_11_we1.read();
    } else {
        OFM_11_we1 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_12_address0() {
    OFM_12_address0 = grp_FIRE3_fu_2067_OFM_12_address0.read();
}

void Load_Fire::thread_OFM_12_address1() {
    OFM_12_address1 = grp_FIRE3_fu_2067_OFM_12_address1.read();
}

void Load_Fire::thread_OFM_12_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_12_ce0 = grp_FIRE3_fu_2067_OFM_12_ce0.read();
    } else {
        OFM_12_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_12_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_12_ce1 = grp_FIRE3_fu_2067_OFM_12_ce1.read();
    } else {
        OFM_12_ce1 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_12_d1() {
    OFM_12_d1 = grp_FIRE3_fu_2067_OFM_12_d1.read();
}

void Load_Fire::thread_OFM_12_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_12_we1 = grp_FIRE3_fu_2067_OFM_12_we1.read();
    } else {
        OFM_12_we1 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_13_address0() {
    OFM_13_address0 = grp_FIRE3_fu_2067_OFM_13_address0.read();
}

void Load_Fire::thread_OFM_13_address1() {
    OFM_13_address1 = grp_FIRE3_fu_2067_OFM_13_address1.read();
}

void Load_Fire::thread_OFM_13_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_13_ce0 = grp_FIRE3_fu_2067_OFM_13_ce0.read();
    } else {
        OFM_13_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_13_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_13_ce1 = grp_FIRE3_fu_2067_OFM_13_ce1.read();
    } else {
        OFM_13_ce1 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_13_d1() {
    OFM_13_d1 = grp_FIRE3_fu_2067_OFM_13_d1.read();
}

void Load_Fire::thread_OFM_13_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_13_we1 = grp_FIRE3_fu_2067_OFM_13_we1.read();
    } else {
        OFM_13_we1 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_14_address0() {
    OFM_14_address0 = grp_FIRE3_fu_2067_OFM_14_address0.read();
}

void Load_Fire::thread_OFM_14_address1() {
    OFM_14_address1 = grp_FIRE3_fu_2067_OFM_14_address1.read();
}

void Load_Fire::thread_OFM_14_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_14_ce0 = grp_FIRE3_fu_2067_OFM_14_ce0.read();
    } else {
        OFM_14_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_14_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_14_ce1 = grp_FIRE3_fu_2067_OFM_14_ce1.read();
    } else {
        OFM_14_ce1 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_14_d1() {
    OFM_14_d1 = grp_FIRE3_fu_2067_OFM_14_d1.read();
}

void Load_Fire::thread_OFM_14_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_14_we1 = grp_FIRE3_fu_2067_OFM_14_we1.read();
    } else {
        OFM_14_we1 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_15_address0() {
    OFM_15_address0 = grp_FIRE3_fu_2067_OFM_15_address0.read();
}

void Load_Fire::thread_OFM_15_address1() {
    OFM_15_address1 = grp_FIRE3_fu_2067_OFM_15_address1.read();
}

void Load_Fire::thread_OFM_15_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_15_ce0 = grp_FIRE3_fu_2067_OFM_15_ce0.read();
    } else {
        OFM_15_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_15_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_15_ce1 = grp_FIRE3_fu_2067_OFM_15_ce1.read();
    } else {
        OFM_15_ce1 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_15_d1() {
    OFM_15_d1 = grp_FIRE3_fu_2067_OFM_15_d1.read();
}

void Load_Fire::thread_OFM_15_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_15_we1 = grp_FIRE3_fu_2067_OFM_15_we1.read();
    } else {
        OFM_15_we1 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_16_address0() {
    OFM_16_address0 = grp_FIRE3_fu_2067_OFM_16_address0.read();
}

void Load_Fire::thread_OFM_16_address1() {
    OFM_16_address1 = grp_FIRE3_fu_2067_OFM_16_address1.read();
}

void Load_Fire::thread_OFM_16_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_16_ce0 = grp_FIRE3_fu_2067_OFM_16_ce0.read();
    } else {
        OFM_16_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_16_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_16_ce1 = grp_FIRE3_fu_2067_OFM_16_ce1.read();
    } else {
        OFM_16_ce1 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_16_d1() {
    OFM_16_d1 = grp_FIRE3_fu_2067_OFM_16_d1.read();
}

void Load_Fire::thread_OFM_16_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_16_we1 = grp_FIRE3_fu_2067_OFM_16_we1.read();
    } else {
        OFM_16_we1 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_17_address0() {
    OFM_17_address0 = grp_FIRE3_fu_2067_OFM_17_address0.read();
}

void Load_Fire::thread_OFM_17_address1() {
    OFM_17_address1 = grp_FIRE3_fu_2067_OFM_17_address1.read();
}

void Load_Fire::thread_OFM_17_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_17_ce0 = grp_FIRE3_fu_2067_OFM_17_ce0.read();
    } else {
        OFM_17_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_17_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_17_ce1 = grp_FIRE3_fu_2067_OFM_17_ce1.read();
    } else {
        OFM_17_ce1 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_17_d1() {
    OFM_17_d1 = grp_FIRE3_fu_2067_OFM_17_d1.read();
}

void Load_Fire::thread_OFM_17_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_17_we1 = grp_FIRE3_fu_2067_OFM_17_we1.read();
    } else {
        OFM_17_we1 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_18_address0() {
    OFM_18_address0 = grp_FIRE3_fu_2067_OFM_18_address0.read();
}

void Load_Fire::thread_OFM_18_address1() {
    OFM_18_address1 = grp_FIRE3_fu_2067_OFM_18_address1.read();
}

void Load_Fire::thread_OFM_18_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_18_ce0 = grp_FIRE3_fu_2067_OFM_18_ce0.read();
    } else {
        OFM_18_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_18_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_18_ce1 = grp_FIRE3_fu_2067_OFM_18_ce1.read();
    } else {
        OFM_18_ce1 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_18_d1() {
    OFM_18_d1 = grp_FIRE3_fu_2067_OFM_18_d1.read();
}

void Load_Fire::thread_OFM_18_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_18_we1 = grp_FIRE3_fu_2067_OFM_18_we1.read();
    } else {
        OFM_18_we1 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_19_address0() {
    OFM_19_address0 = grp_FIRE3_fu_2067_OFM_19_address0.read();
}

void Load_Fire::thread_OFM_19_address1() {
    OFM_19_address1 = grp_FIRE3_fu_2067_OFM_19_address1.read();
}

void Load_Fire::thread_OFM_19_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_19_ce0 = grp_FIRE3_fu_2067_OFM_19_ce0.read();
    } else {
        OFM_19_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_19_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_19_ce1 = grp_FIRE3_fu_2067_OFM_19_ce1.read();
    } else {
        OFM_19_ce1 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_19_d1() {
    OFM_19_d1 = grp_FIRE3_fu_2067_OFM_19_d1.read();
}

void Load_Fire::thread_OFM_19_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_19_we1 = grp_FIRE3_fu_2067_OFM_19_we1.read();
    } else {
        OFM_19_we1 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_1_address0() {
    OFM_1_address0 = grp_FIRE3_fu_2067_OFM_1_address0.read();
}

void Load_Fire::thread_OFM_1_address1() {
    OFM_1_address1 = grp_FIRE3_fu_2067_OFM_1_address1.read();
}

void Load_Fire::thread_OFM_1_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_1_ce0 = grp_FIRE3_fu_2067_OFM_1_ce0.read();
    } else {
        OFM_1_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_1_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_1_ce1 = grp_FIRE3_fu_2067_OFM_1_ce1.read();
    } else {
        OFM_1_ce1 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_1_d1() {
    OFM_1_d1 = grp_FIRE3_fu_2067_OFM_1_d1.read();
}

void Load_Fire::thread_OFM_1_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_1_we1 = grp_FIRE3_fu_2067_OFM_1_we1.read();
    } else {
        OFM_1_we1 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_20_address0() {
    OFM_20_address0 = grp_FIRE3_fu_2067_OFM_20_address0.read();
}

void Load_Fire::thread_OFM_20_address1() {
    OFM_20_address1 = grp_FIRE3_fu_2067_OFM_20_address1.read();
}

void Load_Fire::thread_OFM_20_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_20_ce0 = grp_FIRE3_fu_2067_OFM_20_ce0.read();
    } else {
        OFM_20_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_20_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_20_ce1 = grp_FIRE3_fu_2067_OFM_20_ce1.read();
    } else {
        OFM_20_ce1 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_20_d1() {
    OFM_20_d1 = grp_FIRE3_fu_2067_OFM_20_d1.read();
}

void Load_Fire::thread_OFM_20_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_20_we1 = grp_FIRE3_fu_2067_OFM_20_we1.read();
    } else {
        OFM_20_we1 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_21_address0() {
    OFM_21_address0 = grp_FIRE3_fu_2067_OFM_21_address0.read();
}

void Load_Fire::thread_OFM_21_address1() {
    OFM_21_address1 = grp_FIRE3_fu_2067_OFM_21_address1.read();
}

void Load_Fire::thread_OFM_21_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_21_ce0 = grp_FIRE3_fu_2067_OFM_21_ce0.read();
    } else {
        OFM_21_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_21_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_21_ce1 = grp_FIRE3_fu_2067_OFM_21_ce1.read();
    } else {
        OFM_21_ce1 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_21_d1() {
    OFM_21_d1 = grp_FIRE3_fu_2067_OFM_21_d1.read();
}

void Load_Fire::thread_OFM_21_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_21_we1 = grp_FIRE3_fu_2067_OFM_21_we1.read();
    } else {
        OFM_21_we1 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_22_address0() {
    OFM_22_address0 = grp_FIRE3_fu_2067_OFM_22_address0.read();
}

void Load_Fire::thread_OFM_22_address1() {
    OFM_22_address1 = grp_FIRE3_fu_2067_OFM_22_address1.read();
}

void Load_Fire::thread_OFM_22_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_22_ce0 = grp_FIRE3_fu_2067_OFM_22_ce0.read();
    } else {
        OFM_22_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_22_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_22_ce1 = grp_FIRE3_fu_2067_OFM_22_ce1.read();
    } else {
        OFM_22_ce1 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_22_d1() {
    OFM_22_d1 = grp_FIRE3_fu_2067_OFM_22_d1.read();
}

void Load_Fire::thread_OFM_22_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_22_we1 = grp_FIRE3_fu_2067_OFM_22_we1.read();
    } else {
        OFM_22_we1 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_23_address0() {
    OFM_23_address0 = grp_FIRE3_fu_2067_OFM_23_address0.read();
}

void Load_Fire::thread_OFM_23_address1() {
    OFM_23_address1 = grp_FIRE3_fu_2067_OFM_23_address1.read();
}

void Load_Fire::thread_OFM_23_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_23_ce0 = grp_FIRE3_fu_2067_OFM_23_ce0.read();
    } else {
        OFM_23_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_23_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_23_ce1 = grp_FIRE3_fu_2067_OFM_23_ce1.read();
    } else {
        OFM_23_ce1 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_23_d1() {
    OFM_23_d1 = grp_FIRE3_fu_2067_OFM_23_d1.read();
}

void Load_Fire::thread_OFM_23_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_23_we1 = grp_FIRE3_fu_2067_OFM_23_we1.read();
    } else {
        OFM_23_we1 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_24_address0() {
    OFM_24_address0 = grp_FIRE3_fu_2067_OFM_24_address0.read();
}

void Load_Fire::thread_OFM_24_address1() {
    OFM_24_address1 = grp_FIRE3_fu_2067_OFM_24_address1.read();
}

void Load_Fire::thread_OFM_24_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_24_ce0 = grp_FIRE3_fu_2067_OFM_24_ce0.read();
    } else {
        OFM_24_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_24_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_24_ce1 = grp_FIRE3_fu_2067_OFM_24_ce1.read();
    } else {
        OFM_24_ce1 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_24_d1() {
    OFM_24_d1 = grp_FIRE3_fu_2067_OFM_24_d1.read();
}

void Load_Fire::thread_OFM_24_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_24_we1 = grp_FIRE3_fu_2067_OFM_24_we1.read();
    } else {
        OFM_24_we1 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_25_address0() {
    OFM_25_address0 = grp_FIRE3_fu_2067_OFM_25_address0.read();
}

void Load_Fire::thread_OFM_25_address1() {
    OFM_25_address1 = grp_FIRE3_fu_2067_OFM_25_address1.read();
}

void Load_Fire::thread_OFM_25_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_25_ce0 = grp_FIRE3_fu_2067_OFM_25_ce0.read();
    } else {
        OFM_25_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_25_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_25_ce1 = grp_FIRE3_fu_2067_OFM_25_ce1.read();
    } else {
        OFM_25_ce1 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_25_d1() {
    OFM_25_d1 = grp_FIRE3_fu_2067_OFM_25_d1.read();
}

void Load_Fire::thread_OFM_25_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_25_we1 = grp_FIRE3_fu_2067_OFM_25_we1.read();
    } else {
        OFM_25_we1 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_26_address0() {
    OFM_26_address0 = grp_FIRE3_fu_2067_OFM_26_address0.read();
}

void Load_Fire::thread_OFM_26_address1() {
    OFM_26_address1 = grp_FIRE3_fu_2067_OFM_26_address1.read();
}

void Load_Fire::thread_OFM_26_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_26_ce0 = grp_FIRE3_fu_2067_OFM_26_ce0.read();
    } else {
        OFM_26_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_26_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_26_ce1 = grp_FIRE3_fu_2067_OFM_26_ce1.read();
    } else {
        OFM_26_ce1 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_26_d1() {
    OFM_26_d1 = grp_FIRE3_fu_2067_OFM_26_d1.read();
}

void Load_Fire::thread_OFM_26_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_26_we1 = grp_FIRE3_fu_2067_OFM_26_we1.read();
    } else {
        OFM_26_we1 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_27_address0() {
    OFM_27_address0 = grp_FIRE3_fu_2067_OFM_27_address0.read();
}

void Load_Fire::thread_OFM_27_address1() {
    OFM_27_address1 = grp_FIRE3_fu_2067_OFM_27_address1.read();
}

void Load_Fire::thread_OFM_27_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_27_ce0 = grp_FIRE3_fu_2067_OFM_27_ce0.read();
    } else {
        OFM_27_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_27_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_27_ce1 = grp_FIRE3_fu_2067_OFM_27_ce1.read();
    } else {
        OFM_27_ce1 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_27_d1() {
    OFM_27_d1 = grp_FIRE3_fu_2067_OFM_27_d1.read();
}

void Load_Fire::thread_OFM_27_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_27_we1 = grp_FIRE3_fu_2067_OFM_27_we1.read();
    } else {
        OFM_27_we1 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_28_address0() {
    OFM_28_address0 = grp_FIRE3_fu_2067_OFM_28_address0.read();
}

void Load_Fire::thread_OFM_28_address1() {
    OFM_28_address1 = grp_FIRE3_fu_2067_OFM_28_address1.read();
}

void Load_Fire::thread_OFM_28_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_28_ce0 = grp_FIRE3_fu_2067_OFM_28_ce0.read();
    } else {
        OFM_28_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_28_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_28_ce1 = grp_FIRE3_fu_2067_OFM_28_ce1.read();
    } else {
        OFM_28_ce1 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_28_d1() {
    OFM_28_d1 = grp_FIRE3_fu_2067_OFM_28_d1.read();
}

void Load_Fire::thread_OFM_28_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_28_we1 = grp_FIRE3_fu_2067_OFM_28_we1.read();
    } else {
        OFM_28_we1 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_29_address0() {
    OFM_29_address0 = grp_FIRE3_fu_2067_OFM_29_address0.read();
}

void Load_Fire::thread_OFM_29_address1() {
    OFM_29_address1 = grp_FIRE3_fu_2067_OFM_29_address1.read();
}

void Load_Fire::thread_OFM_29_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_29_ce0 = grp_FIRE3_fu_2067_OFM_29_ce0.read();
    } else {
        OFM_29_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_29_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_29_ce1 = grp_FIRE3_fu_2067_OFM_29_ce1.read();
    } else {
        OFM_29_ce1 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_29_d1() {
    OFM_29_d1 = grp_FIRE3_fu_2067_OFM_29_d1.read();
}

void Load_Fire::thread_OFM_29_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_29_we1 = grp_FIRE3_fu_2067_OFM_29_we1.read();
    } else {
        OFM_29_we1 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_2_address0() {
    OFM_2_address0 = grp_FIRE3_fu_2067_OFM_2_address0.read();
}

void Load_Fire::thread_OFM_2_address1() {
    OFM_2_address1 = grp_FIRE3_fu_2067_OFM_2_address1.read();
}

void Load_Fire::thread_OFM_2_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_2_ce0 = grp_FIRE3_fu_2067_OFM_2_ce0.read();
    } else {
        OFM_2_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_2_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_2_ce1 = grp_FIRE3_fu_2067_OFM_2_ce1.read();
    } else {
        OFM_2_ce1 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_2_d1() {
    OFM_2_d1 = grp_FIRE3_fu_2067_OFM_2_d1.read();
}

void Load_Fire::thread_OFM_2_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_2_we1 = grp_FIRE3_fu_2067_OFM_2_we1.read();
    } else {
        OFM_2_we1 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_30_address0() {
    OFM_30_address0 = grp_FIRE3_fu_2067_OFM_30_address0.read();
}

void Load_Fire::thread_OFM_30_address1() {
    OFM_30_address1 = grp_FIRE3_fu_2067_OFM_30_address1.read();
}

void Load_Fire::thread_OFM_30_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_30_ce0 = grp_FIRE3_fu_2067_OFM_30_ce0.read();
    } else {
        OFM_30_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_30_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_30_ce1 = grp_FIRE3_fu_2067_OFM_30_ce1.read();
    } else {
        OFM_30_ce1 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_30_d1() {
    OFM_30_d1 = grp_FIRE3_fu_2067_OFM_30_d1.read();
}

void Load_Fire::thread_OFM_30_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_30_we1 = grp_FIRE3_fu_2067_OFM_30_we1.read();
    } else {
        OFM_30_we1 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_31_address0() {
    OFM_31_address0 = grp_FIRE3_fu_2067_OFM_31_address0.read();
}

void Load_Fire::thread_OFM_31_address1() {
    OFM_31_address1 = grp_FIRE3_fu_2067_OFM_31_address1.read();
}

void Load_Fire::thread_OFM_31_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_31_ce0 = grp_FIRE3_fu_2067_OFM_31_ce0.read();
    } else {
        OFM_31_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_31_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_31_ce1 = grp_FIRE3_fu_2067_OFM_31_ce1.read();
    } else {
        OFM_31_ce1 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_31_d1() {
    OFM_31_d1 = grp_FIRE3_fu_2067_OFM_31_d1.read();
}

void Load_Fire::thread_OFM_31_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_31_we1 = grp_FIRE3_fu_2067_OFM_31_we1.read();
    } else {
        OFM_31_we1 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_32_address0() {
    OFM_32_address0 = grp_FIRE3_fu_2067_OFM_32_address0.read();
}

void Load_Fire::thread_OFM_32_address1() {
    OFM_32_address1 = grp_FIRE3_fu_2067_OFM_32_address1.read();
}

void Load_Fire::thread_OFM_32_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_32_ce0 = grp_FIRE3_fu_2067_OFM_32_ce0.read();
    } else {
        OFM_32_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_32_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_32_ce1 = grp_FIRE3_fu_2067_OFM_32_ce1.read();
    } else {
        OFM_32_ce1 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_32_d1() {
    OFM_32_d1 = grp_FIRE3_fu_2067_OFM_32_d1.read();
}

void Load_Fire::thread_OFM_32_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_32_we1 = grp_FIRE3_fu_2067_OFM_32_we1.read();
    } else {
        OFM_32_we1 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_33_address0() {
    OFM_33_address0 = grp_FIRE3_fu_2067_OFM_33_address0.read();
}

void Load_Fire::thread_OFM_33_address1() {
    OFM_33_address1 = grp_FIRE3_fu_2067_OFM_33_address1.read();
}

void Load_Fire::thread_OFM_33_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_33_ce0 = grp_FIRE3_fu_2067_OFM_33_ce0.read();
    } else {
        OFM_33_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_33_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_33_ce1 = grp_FIRE3_fu_2067_OFM_33_ce1.read();
    } else {
        OFM_33_ce1 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_33_d1() {
    OFM_33_d1 = grp_FIRE3_fu_2067_OFM_33_d1.read();
}

void Load_Fire::thread_OFM_33_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_33_we1 = grp_FIRE3_fu_2067_OFM_33_we1.read();
    } else {
        OFM_33_we1 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_34_address0() {
    OFM_34_address0 = grp_FIRE3_fu_2067_OFM_34_address0.read();
}

void Load_Fire::thread_OFM_34_address1() {
    OFM_34_address1 = grp_FIRE3_fu_2067_OFM_34_address1.read();
}

void Load_Fire::thread_OFM_34_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_34_ce0 = grp_FIRE3_fu_2067_OFM_34_ce0.read();
    } else {
        OFM_34_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_34_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_34_ce1 = grp_FIRE3_fu_2067_OFM_34_ce1.read();
    } else {
        OFM_34_ce1 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_34_d1() {
    OFM_34_d1 = grp_FIRE3_fu_2067_OFM_34_d1.read();
}

void Load_Fire::thread_OFM_34_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_34_we1 = grp_FIRE3_fu_2067_OFM_34_we1.read();
    } else {
        OFM_34_we1 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_35_address0() {
    OFM_35_address0 = grp_FIRE3_fu_2067_OFM_35_address0.read();
}

void Load_Fire::thread_OFM_35_address1() {
    OFM_35_address1 = grp_FIRE3_fu_2067_OFM_35_address1.read();
}

void Load_Fire::thread_OFM_35_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_35_ce0 = grp_FIRE3_fu_2067_OFM_35_ce0.read();
    } else {
        OFM_35_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_35_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_35_ce1 = grp_FIRE3_fu_2067_OFM_35_ce1.read();
    } else {
        OFM_35_ce1 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_35_d1() {
    OFM_35_d1 = grp_FIRE3_fu_2067_OFM_35_d1.read();
}

void Load_Fire::thread_OFM_35_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_35_we1 = grp_FIRE3_fu_2067_OFM_35_we1.read();
    } else {
        OFM_35_we1 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_36_address0() {
    OFM_36_address0 = grp_FIRE3_fu_2067_OFM_36_address0.read();
}

void Load_Fire::thread_OFM_36_address1() {
    OFM_36_address1 = grp_FIRE3_fu_2067_OFM_36_address1.read();
}

void Load_Fire::thread_OFM_36_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_36_ce0 = grp_FIRE3_fu_2067_OFM_36_ce0.read();
    } else {
        OFM_36_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_36_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_36_ce1 = grp_FIRE3_fu_2067_OFM_36_ce1.read();
    } else {
        OFM_36_ce1 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_36_d1() {
    OFM_36_d1 = grp_FIRE3_fu_2067_OFM_36_d1.read();
}

void Load_Fire::thread_OFM_36_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_36_we1 = grp_FIRE3_fu_2067_OFM_36_we1.read();
    } else {
        OFM_36_we1 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_37_address0() {
    OFM_37_address0 = grp_FIRE3_fu_2067_OFM_37_address0.read();
}

void Load_Fire::thread_OFM_37_address1() {
    OFM_37_address1 = grp_FIRE3_fu_2067_OFM_37_address1.read();
}

void Load_Fire::thread_OFM_37_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_37_ce0 = grp_FIRE3_fu_2067_OFM_37_ce0.read();
    } else {
        OFM_37_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_37_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_37_ce1 = grp_FIRE3_fu_2067_OFM_37_ce1.read();
    } else {
        OFM_37_ce1 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_37_d1() {
    OFM_37_d1 = grp_FIRE3_fu_2067_OFM_37_d1.read();
}

void Load_Fire::thread_OFM_37_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_37_we1 = grp_FIRE3_fu_2067_OFM_37_we1.read();
    } else {
        OFM_37_we1 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_38_address0() {
    OFM_38_address0 = grp_FIRE3_fu_2067_OFM_38_address0.read();
}

void Load_Fire::thread_OFM_38_address1() {
    OFM_38_address1 = grp_FIRE3_fu_2067_OFM_38_address1.read();
}

void Load_Fire::thread_OFM_38_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_38_ce0 = grp_FIRE3_fu_2067_OFM_38_ce0.read();
    } else {
        OFM_38_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_38_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_38_ce1 = grp_FIRE3_fu_2067_OFM_38_ce1.read();
    } else {
        OFM_38_ce1 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_38_d1() {
    OFM_38_d1 = grp_FIRE3_fu_2067_OFM_38_d1.read();
}

void Load_Fire::thread_OFM_38_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_38_we1 = grp_FIRE3_fu_2067_OFM_38_we1.read();
    } else {
        OFM_38_we1 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_39_address0() {
    OFM_39_address0 = grp_FIRE3_fu_2067_OFM_39_address0.read();
}

void Load_Fire::thread_OFM_39_address1() {
    OFM_39_address1 = grp_FIRE3_fu_2067_OFM_39_address1.read();
}

void Load_Fire::thread_OFM_39_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_39_ce0 = grp_FIRE3_fu_2067_OFM_39_ce0.read();
    } else {
        OFM_39_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_39_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_39_ce1 = grp_FIRE3_fu_2067_OFM_39_ce1.read();
    } else {
        OFM_39_ce1 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_39_d1() {
    OFM_39_d1 = grp_FIRE3_fu_2067_OFM_39_d1.read();
}

void Load_Fire::thread_OFM_39_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_39_we1 = grp_FIRE3_fu_2067_OFM_39_we1.read();
    } else {
        OFM_39_we1 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_3_address0() {
    OFM_3_address0 = grp_FIRE3_fu_2067_OFM_3_address0.read();
}

void Load_Fire::thread_OFM_3_address1() {
    OFM_3_address1 = grp_FIRE3_fu_2067_OFM_3_address1.read();
}

void Load_Fire::thread_OFM_3_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_3_ce0 = grp_FIRE3_fu_2067_OFM_3_ce0.read();
    } else {
        OFM_3_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_3_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_3_ce1 = grp_FIRE3_fu_2067_OFM_3_ce1.read();
    } else {
        OFM_3_ce1 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_3_d1() {
    OFM_3_d1 = grp_FIRE3_fu_2067_OFM_3_d1.read();
}

void Load_Fire::thread_OFM_3_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_3_we1 = grp_FIRE3_fu_2067_OFM_3_we1.read();
    } else {
        OFM_3_we1 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_40_address0() {
    OFM_40_address0 = grp_FIRE3_fu_2067_OFM_40_address0.read();
}

void Load_Fire::thread_OFM_40_address1() {
    OFM_40_address1 = grp_FIRE3_fu_2067_OFM_40_address1.read();
}

void Load_Fire::thread_OFM_40_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_40_ce0 = grp_FIRE3_fu_2067_OFM_40_ce0.read();
    } else {
        OFM_40_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_40_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_40_ce1 = grp_FIRE3_fu_2067_OFM_40_ce1.read();
    } else {
        OFM_40_ce1 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_40_d1() {
    OFM_40_d1 = grp_FIRE3_fu_2067_OFM_40_d1.read();
}

void Load_Fire::thread_OFM_40_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_40_we1 = grp_FIRE3_fu_2067_OFM_40_we1.read();
    } else {
        OFM_40_we1 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_41_address0() {
    OFM_41_address0 = grp_FIRE3_fu_2067_OFM_41_address0.read();
}

void Load_Fire::thread_OFM_41_address1() {
    OFM_41_address1 = grp_FIRE3_fu_2067_OFM_41_address1.read();
}

void Load_Fire::thread_OFM_41_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_41_ce0 = grp_FIRE3_fu_2067_OFM_41_ce0.read();
    } else {
        OFM_41_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_41_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_41_ce1 = grp_FIRE3_fu_2067_OFM_41_ce1.read();
    } else {
        OFM_41_ce1 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_41_d1() {
    OFM_41_d1 = grp_FIRE3_fu_2067_OFM_41_d1.read();
}

void Load_Fire::thread_OFM_41_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_41_we1 = grp_FIRE3_fu_2067_OFM_41_we1.read();
    } else {
        OFM_41_we1 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_42_address0() {
    OFM_42_address0 = grp_FIRE3_fu_2067_OFM_42_address0.read();
}

void Load_Fire::thread_OFM_42_address1() {
    OFM_42_address1 = grp_FIRE3_fu_2067_OFM_42_address1.read();
}

void Load_Fire::thread_OFM_42_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_42_ce0 = grp_FIRE3_fu_2067_OFM_42_ce0.read();
    } else {
        OFM_42_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_42_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_42_ce1 = grp_FIRE3_fu_2067_OFM_42_ce1.read();
    } else {
        OFM_42_ce1 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_42_d1() {
    OFM_42_d1 = grp_FIRE3_fu_2067_OFM_42_d1.read();
}

void Load_Fire::thread_OFM_42_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_42_we1 = grp_FIRE3_fu_2067_OFM_42_we1.read();
    } else {
        OFM_42_we1 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_43_address0() {
    OFM_43_address0 = grp_FIRE3_fu_2067_OFM_43_address0.read();
}

void Load_Fire::thread_OFM_43_address1() {
    OFM_43_address1 = grp_FIRE3_fu_2067_OFM_43_address1.read();
}

void Load_Fire::thread_OFM_43_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_43_ce0 = grp_FIRE3_fu_2067_OFM_43_ce0.read();
    } else {
        OFM_43_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_43_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_43_ce1 = grp_FIRE3_fu_2067_OFM_43_ce1.read();
    } else {
        OFM_43_ce1 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_43_d1() {
    OFM_43_d1 = grp_FIRE3_fu_2067_OFM_43_d1.read();
}

void Load_Fire::thread_OFM_43_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_43_we1 = grp_FIRE3_fu_2067_OFM_43_we1.read();
    } else {
        OFM_43_we1 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_44_address0() {
    OFM_44_address0 = grp_FIRE3_fu_2067_OFM_44_address0.read();
}

void Load_Fire::thread_OFM_44_address1() {
    OFM_44_address1 = grp_FIRE3_fu_2067_OFM_44_address1.read();
}

void Load_Fire::thread_OFM_44_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_44_ce0 = grp_FIRE3_fu_2067_OFM_44_ce0.read();
    } else {
        OFM_44_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_44_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_44_ce1 = grp_FIRE3_fu_2067_OFM_44_ce1.read();
    } else {
        OFM_44_ce1 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_44_d1() {
    OFM_44_d1 = grp_FIRE3_fu_2067_OFM_44_d1.read();
}

void Load_Fire::thread_OFM_44_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_44_we1 = grp_FIRE3_fu_2067_OFM_44_we1.read();
    } else {
        OFM_44_we1 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_45_address0() {
    OFM_45_address0 = grp_FIRE3_fu_2067_OFM_45_address0.read();
}

void Load_Fire::thread_OFM_45_address1() {
    OFM_45_address1 = grp_FIRE3_fu_2067_OFM_45_address1.read();
}

void Load_Fire::thread_OFM_45_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_45_ce0 = grp_FIRE3_fu_2067_OFM_45_ce0.read();
    } else {
        OFM_45_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_45_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_45_ce1 = grp_FIRE3_fu_2067_OFM_45_ce1.read();
    } else {
        OFM_45_ce1 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_45_d1() {
    OFM_45_d1 = grp_FIRE3_fu_2067_OFM_45_d1.read();
}

void Load_Fire::thread_OFM_45_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_45_we1 = grp_FIRE3_fu_2067_OFM_45_we1.read();
    } else {
        OFM_45_we1 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_46_address0() {
    OFM_46_address0 = grp_FIRE3_fu_2067_OFM_46_address0.read();
}

void Load_Fire::thread_OFM_46_address1() {
    OFM_46_address1 = grp_FIRE3_fu_2067_OFM_46_address1.read();
}

void Load_Fire::thread_OFM_46_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_46_ce0 = grp_FIRE3_fu_2067_OFM_46_ce0.read();
    } else {
        OFM_46_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_46_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_46_ce1 = grp_FIRE3_fu_2067_OFM_46_ce1.read();
    } else {
        OFM_46_ce1 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_46_d1() {
    OFM_46_d1 = grp_FIRE3_fu_2067_OFM_46_d1.read();
}

void Load_Fire::thread_OFM_46_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_46_we1 = grp_FIRE3_fu_2067_OFM_46_we1.read();
    } else {
        OFM_46_we1 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_47_address0() {
    OFM_47_address0 = grp_FIRE3_fu_2067_OFM_47_address0.read();
}

void Load_Fire::thread_OFM_47_address1() {
    OFM_47_address1 = grp_FIRE3_fu_2067_OFM_47_address1.read();
}

void Load_Fire::thread_OFM_47_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_47_ce0 = grp_FIRE3_fu_2067_OFM_47_ce0.read();
    } else {
        OFM_47_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_47_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_47_ce1 = grp_FIRE3_fu_2067_OFM_47_ce1.read();
    } else {
        OFM_47_ce1 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_47_d1() {
    OFM_47_d1 = grp_FIRE3_fu_2067_OFM_47_d1.read();
}

void Load_Fire::thread_OFM_47_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_47_we1 = grp_FIRE3_fu_2067_OFM_47_we1.read();
    } else {
        OFM_47_we1 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_48_address0() {
    OFM_48_address0 = grp_FIRE3_fu_2067_OFM_48_address0.read();
}

void Load_Fire::thread_OFM_48_address1() {
    OFM_48_address1 = grp_FIRE3_fu_2067_OFM_48_address1.read();
}

void Load_Fire::thread_OFM_48_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_48_ce0 = grp_FIRE3_fu_2067_OFM_48_ce0.read();
    } else {
        OFM_48_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_48_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_48_ce1 = grp_FIRE3_fu_2067_OFM_48_ce1.read();
    } else {
        OFM_48_ce1 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_48_d1() {
    OFM_48_d1 = grp_FIRE3_fu_2067_OFM_48_d1.read();
}

void Load_Fire::thread_OFM_48_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_48_we1 = grp_FIRE3_fu_2067_OFM_48_we1.read();
    } else {
        OFM_48_we1 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_49_address0() {
    OFM_49_address0 = grp_FIRE3_fu_2067_OFM_49_address0.read();
}

void Load_Fire::thread_OFM_49_address1() {
    OFM_49_address1 = grp_FIRE3_fu_2067_OFM_49_address1.read();
}

void Load_Fire::thread_OFM_49_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_49_ce0 = grp_FIRE3_fu_2067_OFM_49_ce0.read();
    } else {
        OFM_49_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_49_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_49_ce1 = grp_FIRE3_fu_2067_OFM_49_ce1.read();
    } else {
        OFM_49_ce1 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_49_d1() {
    OFM_49_d1 = grp_FIRE3_fu_2067_OFM_49_d1.read();
}

void Load_Fire::thread_OFM_49_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_49_we1 = grp_FIRE3_fu_2067_OFM_49_we1.read();
    } else {
        OFM_49_we1 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_4_address0() {
    OFM_4_address0 = grp_FIRE3_fu_2067_OFM_4_address0.read();
}

void Load_Fire::thread_OFM_4_address1() {
    OFM_4_address1 = grp_FIRE3_fu_2067_OFM_4_address1.read();
}

void Load_Fire::thread_OFM_4_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_4_ce0 = grp_FIRE3_fu_2067_OFM_4_ce0.read();
    } else {
        OFM_4_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_4_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_4_ce1 = grp_FIRE3_fu_2067_OFM_4_ce1.read();
    } else {
        OFM_4_ce1 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_4_d1() {
    OFM_4_d1 = grp_FIRE3_fu_2067_OFM_4_d1.read();
}

void Load_Fire::thread_OFM_4_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_4_we1 = grp_FIRE3_fu_2067_OFM_4_we1.read();
    } else {
        OFM_4_we1 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_50_address0() {
    OFM_50_address0 = grp_FIRE3_fu_2067_OFM_50_address0.read();
}

void Load_Fire::thread_OFM_50_address1() {
    OFM_50_address1 = grp_FIRE3_fu_2067_OFM_50_address1.read();
}

void Load_Fire::thread_OFM_50_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_50_ce0 = grp_FIRE3_fu_2067_OFM_50_ce0.read();
    } else {
        OFM_50_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_50_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_50_ce1 = grp_FIRE3_fu_2067_OFM_50_ce1.read();
    } else {
        OFM_50_ce1 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_50_d1() {
    OFM_50_d1 = grp_FIRE3_fu_2067_OFM_50_d1.read();
}

void Load_Fire::thread_OFM_50_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_50_we1 = grp_FIRE3_fu_2067_OFM_50_we1.read();
    } else {
        OFM_50_we1 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_51_address0() {
    OFM_51_address0 = grp_FIRE3_fu_2067_OFM_51_address0.read();
}

void Load_Fire::thread_OFM_51_address1() {
    OFM_51_address1 = grp_FIRE3_fu_2067_OFM_51_address1.read();
}

void Load_Fire::thread_OFM_51_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_51_ce0 = grp_FIRE3_fu_2067_OFM_51_ce0.read();
    } else {
        OFM_51_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_51_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_51_ce1 = grp_FIRE3_fu_2067_OFM_51_ce1.read();
    } else {
        OFM_51_ce1 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_51_d1() {
    OFM_51_d1 = grp_FIRE3_fu_2067_OFM_51_d1.read();
}

void Load_Fire::thread_OFM_51_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_51_we1 = grp_FIRE3_fu_2067_OFM_51_we1.read();
    } else {
        OFM_51_we1 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_52_address0() {
    OFM_52_address0 = grp_FIRE3_fu_2067_OFM_52_address0.read();
}

void Load_Fire::thread_OFM_52_address1() {
    OFM_52_address1 = grp_FIRE3_fu_2067_OFM_52_address1.read();
}

void Load_Fire::thread_OFM_52_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_52_ce0 = grp_FIRE3_fu_2067_OFM_52_ce0.read();
    } else {
        OFM_52_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_52_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_52_ce1 = grp_FIRE3_fu_2067_OFM_52_ce1.read();
    } else {
        OFM_52_ce1 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_52_d1() {
    OFM_52_d1 = grp_FIRE3_fu_2067_OFM_52_d1.read();
}

void Load_Fire::thread_OFM_52_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_52_we1 = grp_FIRE3_fu_2067_OFM_52_we1.read();
    } else {
        OFM_52_we1 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_53_address0() {
    OFM_53_address0 = grp_FIRE3_fu_2067_OFM_53_address0.read();
}

void Load_Fire::thread_OFM_53_address1() {
    OFM_53_address1 = grp_FIRE3_fu_2067_OFM_53_address1.read();
}

void Load_Fire::thread_OFM_53_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_53_ce0 = grp_FIRE3_fu_2067_OFM_53_ce0.read();
    } else {
        OFM_53_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_53_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_53_ce1 = grp_FIRE3_fu_2067_OFM_53_ce1.read();
    } else {
        OFM_53_ce1 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_53_d1() {
    OFM_53_d1 = grp_FIRE3_fu_2067_OFM_53_d1.read();
}

void Load_Fire::thread_OFM_53_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_53_we1 = grp_FIRE3_fu_2067_OFM_53_we1.read();
    } else {
        OFM_53_we1 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_54_address0() {
    OFM_54_address0 = grp_FIRE3_fu_2067_OFM_54_address0.read();
}

void Load_Fire::thread_OFM_54_address1() {
    OFM_54_address1 = grp_FIRE3_fu_2067_OFM_54_address1.read();
}

void Load_Fire::thread_OFM_54_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_54_ce0 = grp_FIRE3_fu_2067_OFM_54_ce0.read();
    } else {
        OFM_54_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_54_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_54_ce1 = grp_FIRE3_fu_2067_OFM_54_ce1.read();
    } else {
        OFM_54_ce1 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_54_d1() {
    OFM_54_d1 = grp_FIRE3_fu_2067_OFM_54_d1.read();
}

void Load_Fire::thread_OFM_54_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_54_we1 = grp_FIRE3_fu_2067_OFM_54_we1.read();
    } else {
        OFM_54_we1 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_55_address0() {
    OFM_55_address0 = grp_FIRE3_fu_2067_OFM_55_address0.read();
}

void Load_Fire::thread_OFM_55_address1() {
    OFM_55_address1 = grp_FIRE3_fu_2067_OFM_55_address1.read();
}

void Load_Fire::thread_OFM_55_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_55_ce0 = grp_FIRE3_fu_2067_OFM_55_ce0.read();
    } else {
        OFM_55_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_55_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_55_ce1 = grp_FIRE3_fu_2067_OFM_55_ce1.read();
    } else {
        OFM_55_ce1 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_55_d1() {
    OFM_55_d1 = grp_FIRE3_fu_2067_OFM_55_d1.read();
}

void Load_Fire::thread_OFM_55_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_55_we1 = grp_FIRE3_fu_2067_OFM_55_we1.read();
    } else {
        OFM_55_we1 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_56_address0() {
    OFM_56_address0 = grp_FIRE3_fu_2067_OFM_56_address0.read();
}

void Load_Fire::thread_OFM_56_address1() {
    OFM_56_address1 = grp_FIRE3_fu_2067_OFM_56_address1.read();
}

void Load_Fire::thread_OFM_56_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_56_ce0 = grp_FIRE3_fu_2067_OFM_56_ce0.read();
    } else {
        OFM_56_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_56_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_56_ce1 = grp_FIRE3_fu_2067_OFM_56_ce1.read();
    } else {
        OFM_56_ce1 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_56_d1() {
    OFM_56_d1 = grp_FIRE3_fu_2067_OFM_56_d1.read();
}

void Load_Fire::thread_OFM_56_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_56_we1 = grp_FIRE3_fu_2067_OFM_56_we1.read();
    } else {
        OFM_56_we1 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_57_address0() {
    OFM_57_address0 = grp_FIRE3_fu_2067_OFM_57_address0.read();
}

void Load_Fire::thread_OFM_57_address1() {
    OFM_57_address1 = grp_FIRE3_fu_2067_OFM_57_address1.read();
}

void Load_Fire::thread_OFM_57_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_57_ce0 = grp_FIRE3_fu_2067_OFM_57_ce0.read();
    } else {
        OFM_57_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_57_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_57_ce1 = grp_FIRE3_fu_2067_OFM_57_ce1.read();
    } else {
        OFM_57_ce1 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_57_d1() {
    OFM_57_d1 = grp_FIRE3_fu_2067_OFM_57_d1.read();
}

void Load_Fire::thread_OFM_57_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_57_we1 = grp_FIRE3_fu_2067_OFM_57_we1.read();
    } else {
        OFM_57_we1 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_58_address0() {
    OFM_58_address0 = grp_FIRE3_fu_2067_OFM_58_address0.read();
}

void Load_Fire::thread_OFM_58_address1() {
    OFM_58_address1 = grp_FIRE3_fu_2067_OFM_58_address1.read();
}

void Load_Fire::thread_OFM_58_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_58_ce0 = grp_FIRE3_fu_2067_OFM_58_ce0.read();
    } else {
        OFM_58_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_58_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_58_ce1 = grp_FIRE3_fu_2067_OFM_58_ce1.read();
    } else {
        OFM_58_ce1 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_58_d1() {
    OFM_58_d1 = grp_FIRE3_fu_2067_OFM_58_d1.read();
}

void Load_Fire::thread_OFM_58_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_58_we1 = grp_FIRE3_fu_2067_OFM_58_we1.read();
    } else {
        OFM_58_we1 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_59_address0() {
    OFM_59_address0 = grp_FIRE3_fu_2067_OFM_59_address0.read();
}

void Load_Fire::thread_OFM_59_address1() {
    OFM_59_address1 = grp_FIRE3_fu_2067_OFM_59_address1.read();
}

void Load_Fire::thread_OFM_59_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_59_ce0 = grp_FIRE3_fu_2067_OFM_59_ce0.read();
    } else {
        OFM_59_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_59_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_59_ce1 = grp_FIRE3_fu_2067_OFM_59_ce1.read();
    } else {
        OFM_59_ce1 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_59_d1() {
    OFM_59_d1 = grp_FIRE3_fu_2067_OFM_59_d1.read();
}

void Load_Fire::thread_OFM_59_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_59_we1 = grp_FIRE3_fu_2067_OFM_59_we1.read();
    } else {
        OFM_59_we1 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_5_address0() {
    OFM_5_address0 = grp_FIRE3_fu_2067_OFM_5_address0.read();
}

void Load_Fire::thread_OFM_5_address1() {
    OFM_5_address1 = grp_FIRE3_fu_2067_OFM_5_address1.read();
}

void Load_Fire::thread_OFM_5_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_5_ce0 = grp_FIRE3_fu_2067_OFM_5_ce0.read();
    } else {
        OFM_5_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_5_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_5_ce1 = grp_FIRE3_fu_2067_OFM_5_ce1.read();
    } else {
        OFM_5_ce1 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_5_d1() {
    OFM_5_d1 = grp_FIRE3_fu_2067_OFM_5_d1.read();
}

void Load_Fire::thread_OFM_5_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_5_we1 = grp_FIRE3_fu_2067_OFM_5_we1.read();
    } else {
        OFM_5_we1 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_60_address0() {
    OFM_60_address0 = grp_FIRE3_fu_2067_OFM_60_address0.read();
}

void Load_Fire::thread_OFM_60_address1() {
    OFM_60_address1 = grp_FIRE3_fu_2067_OFM_60_address1.read();
}

void Load_Fire::thread_OFM_60_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_60_ce0 = grp_FIRE3_fu_2067_OFM_60_ce0.read();
    } else {
        OFM_60_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_60_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_60_ce1 = grp_FIRE3_fu_2067_OFM_60_ce1.read();
    } else {
        OFM_60_ce1 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_60_d1() {
    OFM_60_d1 = grp_FIRE3_fu_2067_OFM_60_d1.read();
}

void Load_Fire::thread_OFM_60_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_60_we1 = grp_FIRE3_fu_2067_OFM_60_we1.read();
    } else {
        OFM_60_we1 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_61_address0() {
    OFM_61_address0 = grp_FIRE3_fu_2067_OFM_61_address0.read();
}

void Load_Fire::thread_OFM_61_address1() {
    OFM_61_address1 = grp_FIRE3_fu_2067_OFM_61_address1.read();
}

void Load_Fire::thread_OFM_61_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_61_ce0 = grp_FIRE3_fu_2067_OFM_61_ce0.read();
    } else {
        OFM_61_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_61_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_61_ce1 = grp_FIRE3_fu_2067_OFM_61_ce1.read();
    } else {
        OFM_61_ce1 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_61_d1() {
    OFM_61_d1 = grp_FIRE3_fu_2067_OFM_61_d1.read();
}

void Load_Fire::thread_OFM_61_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_61_we1 = grp_FIRE3_fu_2067_OFM_61_we1.read();
    } else {
        OFM_61_we1 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_62_address0() {
    OFM_62_address0 = grp_FIRE3_fu_2067_OFM_62_address0.read();
}

void Load_Fire::thread_OFM_62_address1() {
    OFM_62_address1 = grp_FIRE3_fu_2067_OFM_62_address1.read();
}

void Load_Fire::thread_OFM_62_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_62_ce0 = grp_FIRE3_fu_2067_OFM_62_ce0.read();
    } else {
        OFM_62_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_62_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_62_ce1 = grp_FIRE3_fu_2067_OFM_62_ce1.read();
    } else {
        OFM_62_ce1 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_62_d1() {
    OFM_62_d1 = grp_FIRE3_fu_2067_OFM_62_d1.read();
}

void Load_Fire::thread_OFM_62_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_62_we1 = grp_FIRE3_fu_2067_OFM_62_we1.read();
    } else {
        OFM_62_we1 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_63_address0() {
    OFM_63_address0 = grp_FIRE3_fu_2067_OFM_63_address0.read();
}

void Load_Fire::thread_OFM_63_address1() {
    OFM_63_address1 = grp_FIRE3_fu_2067_OFM_63_address1.read();
}

void Load_Fire::thread_OFM_63_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_63_ce0 = grp_FIRE3_fu_2067_OFM_63_ce0.read();
    } else {
        OFM_63_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_63_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_63_ce1 = grp_FIRE3_fu_2067_OFM_63_ce1.read();
    } else {
        OFM_63_ce1 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_63_d1() {
    OFM_63_d1 = grp_FIRE3_fu_2067_OFM_63_d1.read();
}

void Load_Fire::thread_OFM_63_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_63_we1 = grp_FIRE3_fu_2067_OFM_63_we1.read();
    } else {
        OFM_63_we1 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_6_address0() {
    OFM_6_address0 = grp_FIRE3_fu_2067_OFM_6_address0.read();
}

void Load_Fire::thread_OFM_6_address1() {
    OFM_6_address1 = grp_FIRE3_fu_2067_OFM_6_address1.read();
}

void Load_Fire::thread_OFM_6_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_6_ce0 = grp_FIRE3_fu_2067_OFM_6_ce0.read();
    } else {
        OFM_6_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_6_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_6_ce1 = grp_FIRE3_fu_2067_OFM_6_ce1.read();
    } else {
        OFM_6_ce1 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_6_d1() {
    OFM_6_d1 = grp_FIRE3_fu_2067_OFM_6_d1.read();
}

void Load_Fire::thread_OFM_6_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_6_we1 = grp_FIRE3_fu_2067_OFM_6_we1.read();
    } else {
        OFM_6_we1 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_7_address0() {
    OFM_7_address0 = grp_FIRE3_fu_2067_OFM_7_address0.read();
}

void Load_Fire::thread_OFM_7_address1() {
    OFM_7_address1 = grp_FIRE3_fu_2067_OFM_7_address1.read();
}

void Load_Fire::thread_OFM_7_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_7_ce0 = grp_FIRE3_fu_2067_OFM_7_ce0.read();
    } else {
        OFM_7_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_7_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_7_ce1 = grp_FIRE3_fu_2067_OFM_7_ce1.read();
    } else {
        OFM_7_ce1 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_7_d1() {
    OFM_7_d1 = grp_FIRE3_fu_2067_OFM_7_d1.read();
}

void Load_Fire::thread_OFM_7_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_7_we1 = grp_FIRE3_fu_2067_OFM_7_we1.read();
    } else {
        OFM_7_we1 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_8_address0() {
    OFM_8_address0 = grp_FIRE3_fu_2067_OFM_8_address0.read();
}

void Load_Fire::thread_OFM_8_address1() {
    OFM_8_address1 = grp_FIRE3_fu_2067_OFM_8_address1.read();
}

void Load_Fire::thread_OFM_8_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_8_ce0 = grp_FIRE3_fu_2067_OFM_8_ce0.read();
    } else {
        OFM_8_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_8_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_8_ce1 = grp_FIRE3_fu_2067_OFM_8_ce1.read();
    } else {
        OFM_8_ce1 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_8_d1() {
    OFM_8_d1 = grp_FIRE3_fu_2067_OFM_8_d1.read();
}

void Load_Fire::thread_OFM_8_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_8_we1 = grp_FIRE3_fu_2067_OFM_8_we1.read();
    } else {
        OFM_8_we1 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_9_address0() {
    OFM_9_address0 = grp_FIRE3_fu_2067_OFM_9_address0.read();
}

void Load_Fire::thread_OFM_9_address1() {
    OFM_9_address1 = grp_FIRE3_fu_2067_OFM_9_address1.read();
}

void Load_Fire::thread_OFM_9_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_9_ce0 = grp_FIRE3_fu_2067_OFM_9_ce0.read();
    } else {
        OFM_9_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_9_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_9_ce1 = grp_FIRE3_fu_2067_OFM_9_ce1.read();
    } else {
        OFM_9_ce1 = ap_const_logic_0;
    }
}

void Load_Fire::thread_OFM_9_d1() {
    OFM_9_d1 = grp_FIRE3_fu_2067_OFM_9_d1.read();
}

void Load_Fire::thread_OFM_9_we1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
          esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)))) {
        OFM_9_we1 = grp_FIRE3_fu_2067_OFM_9_we1.read();
    } else {
        OFM_9_we1 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_0_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_0_0_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_0_0_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_0_0_address0 = grp_FIRE3_fu_2067_WEIGHT1_0_0_address0.read();
        } else {
            WEIGHT1_0_0_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_0_0_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_0_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_0_0_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_0_0_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_0_0_ce0 = grp_FIRE3_fu_2067_WEIGHT1_0_0_ce0.read();
        } else {
            WEIGHT1_0_0_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_0_0_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_0_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_0_0_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_0_0_we0.read();
    } else {
        WEIGHT1_0_0_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_0_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_0_1_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_0_1_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_0_1_address0 = grp_FIRE3_fu_2067_WEIGHT1_0_1_address0.read();
        } else {
            WEIGHT1_0_1_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_0_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_0_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_0_1_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_0_1_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_0_1_ce0 = grp_FIRE3_fu_2067_WEIGHT1_0_1_ce0.read();
        } else {
            WEIGHT1_0_1_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_0_1_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_0_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_0_1_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_0_1_we0.read();
    } else {
        WEIGHT1_0_1_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_0_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_0_2_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_0_2_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_0_2_address0 = grp_FIRE3_fu_2067_WEIGHT1_0_2_address0.read();
        } else {
            WEIGHT1_0_2_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_0_2_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_0_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_0_2_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_0_2_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_0_2_ce0 = grp_FIRE3_fu_2067_WEIGHT1_0_2_ce0.read();
        } else {
            WEIGHT1_0_2_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_0_2_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_0_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_0_2_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_0_2_we0.read();
    } else {
        WEIGHT1_0_2_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_0_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_0_3_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_0_3_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_0_3_address0 = grp_FIRE3_fu_2067_WEIGHT1_0_3_address0.read();
        } else {
            WEIGHT1_0_3_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_0_3_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_0_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_0_3_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_0_3_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_0_3_ce0 = grp_FIRE3_fu_2067_WEIGHT1_0_3_ce0.read();
        } else {
            WEIGHT1_0_3_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_0_3_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_0_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_0_3_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_0_3_we0.read();
    } else {
        WEIGHT1_0_3_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_0_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_0_4_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_0_4_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_0_4_address0 = grp_FIRE3_fu_2067_WEIGHT1_0_4_address0.read();
        } else {
            WEIGHT1_0_4_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_0_4_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_0_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_0_4_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_0_4_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_0_4_ce0 = grp_FIRE3_fu_2067_WEIGHT1_0_4_ce0.read();
        } else {
            WEIGHT1_0_4_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_0_4_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_0_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_0_4_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_0_4_we0.read();
    } else {
        WEIGHT1_0_4_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_0_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_0_5_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_0_5_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_0_5_address0 = grp_FIRE3_fu_2067_WEIGHT1_0_5_address0.read();
        } else {
            WEIGHT1_0_5_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_0_5_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_0_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_0_5_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_0_5_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_0_5_ce0 = grp_FIRE3_fu_2067_WEIGHT1_0_5_ce0.read();
        } else {
            WEIGHT1_0_5_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_0_5_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_0_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_0_5_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_0_5_we0.read();
    } else {
        WEIGHT1_0_5_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_0_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_0_6_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_0_6_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_0_6_address0 = grp_FIRE3_fu_2067_WEIGHT1_0_6_address0.read();
        } else {
            WEIGHT1_0_6_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_0_6_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_0_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_0_6_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_0_6_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_0_6_ce0 = grp_FIRE3_fu_2067_WEIGHT1_0_6_ce0.read();
        } else {
            WEIGHT1_0_6_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_0_6_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_0_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_0_6_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_0_6_we0.read();
    } else {
        WEIGHT1_0_6_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_10_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_10_0_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_10_0_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_10_0_address0 = grp_FIRE3_fu_2067_WEIGHT1_10_0_address0.read();
        } else {
            WEIGHT1_10_0_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_10_0_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_10_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_10_0_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_10_0_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_10_0_ce0 = grp_FIRE3_fu_2067_WEIGHT1_10_0_ce0.read();
        } else {
            WEIGHT1_10_0_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_10_0_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_10_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_10_0_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_10_0_we0.read();
    } else {
        WEIGHT1_10_0_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_10_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_10_1_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_10_1_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_10_1_address0 = grp_FIRE3_fu_2067_WEIGHT1_10_1_address0.read();
        } else {
            WEIGHT1_10_1_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_10_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_10_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_10_1_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_10_1_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_10_1_ce0 = grp_FIRE3_fu_2067_WEIGHT1_10_1_ce0.read();
        } else {
            WEIGHT1_10_1_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_10_1_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_10_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_10_1_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_10_1_we0.read();
    } else {
        WEIGHT1_10_1_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_10_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_10_2_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_10_2_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_10_2_address0 = grp_FIRE3_fu_2067_WEIGHT1_10_2_address0.read();
        } else {
            WEIGHT1_10_2_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_10_2_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_10_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_10_2_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_10_2_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_10_2_ce0 = grp_FIRE3_fu_2067_WEIGHT1_10_2_ce0.read();
        } else {
            WEIGHT1_10_2_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_10_2_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_10_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_10_2_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_10_2_we0.read();
    } else {
        WEIGHT1_10_2_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_10_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_10_3_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_10_3_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_10_3_address0 = grp_FIRE3_fu_2067_WEIGHT1_10_3_address0.read();
        } else {
            WEIGHT1_10_3_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_10_3_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_10_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_10_3_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_10_3_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_10_3_ce0 = grp_FIRE3_fu_2067_WEIGHT1_10_3_ce0.read();
        } else {
            WEIGHT1_10_3_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_10_3_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_10_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_10_3_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_10_3_we0.read();
    } else {
        WEIGHT1_10_3_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_10_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_10_4_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_10_4_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_10_4_address0 = grp_FIRE3_fu_2067_WEIGHT1_10_4_address0.read();
        } else {
            WEIGHT1_10_4_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_10_4_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_10_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_10_4_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_10_4_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_10_4_ce0 = grp_FIRE3_fu_2067_WEIGHT1_10_4_ce0.read();
        } else {
            WEIGHT1_10_4_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_10_4_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_10_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_10_4_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_10_4_we0.read();
    } else {
        WEIGHT1_10_4_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_10_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_10_5_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_10_5_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_10_5_address0 = grp_FIRE3_fu_2067_WEIGHT1_10_5_address0.read();
        } else {
            WEIGHT1_10_5_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_10_5_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_10_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_10_5_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_10_5_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_10_5_ce0 = grp_FIRE3_fu_2067_WEIGHT1_10_5_ce0.read();
        } else {
            WEIGHT1_10_5_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_10_5_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_10_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_10_5_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_10_5_we0.read();
    } else {
        WEIGHT1_10_5_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_10_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_10_6_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_10_6_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_10_6_address0 = grp_FIRE3_fu_2067_WEIGHT1_10_6_address0.read();
        } else {
            WEIGHT1_10_6_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_10_6_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_10_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_10_6_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_10_6_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_10_6_ce0 = grp_FIRE3_fu_2067_WEIGHT1_10_6_ce0.read();
        } else {
            WEIGHT1_10_6_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_10_6_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_10_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_10_6_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_10_6_we0.read();
    } else {
        WEIGHT1_10_6_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_11_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_11_0_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_11_0_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_11_0_address0 = grp_FIRE3_fu_2067_WEIGHT1_11_0_address0.read();
        } else {
            WEIGHT1_11_0_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_11_0_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_11_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_11_0_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_11_0_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_11_0_ce0 = grp_FIRE3_fu_2067_WEIGHT1_11_0_ce0.read();
        } else {
            WEIGHT1_11_0_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_11_0_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_11_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_11_0_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_11_0_we0.read();
    } else {
        WEIGHT1_11_0_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_11_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_11_1_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_11_1_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_11_1_address0 = grp_FIRE3_fu_2067_WEIGHT1_11_1_address0.read();
        } else {
            WEIGHT1_11_1_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_11_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_11_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_11_1_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_11_1_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_11_1_ce0 = grp_FIRE3_fu_2067_WEIGHT1_11_1_ce0.read();
        } else {
            WEIGHT1_11_1_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_11_1_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_11_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_11_1_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_11_1_we0.read();
    } else {
        WEIGHT1_11_1_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_11_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_11_2_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_11_2_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_11_2_address0 = grp_FIRE3_fu_2067_WEIGHT1_11_2_address0.read();
        } else {
            WEIGHT1_11_2_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_11_2_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_11_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_11_2_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_11_2_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_11_2_ce0 = grp_FIRE3_fu_2067_WEIGHT1_11_2_ce0.read();
        } else {
            WEIGHT1_11_2_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_11_2_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_11_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_11_2_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_11_2_we0.read();
    } else {
        WEIGHT1_11_2_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_11_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_11_3_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_11_3_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_11_3_address0 = grp_FIRE3_fu_2067_WEIGHT1_11_3_address0.read();
        } else {
            WEIGHT1_11_3_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_11_3_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_11_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_11_3_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_11_3_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_11_3_ce0 = grp_FIRE3_fu_2067_WEIGHT1_11_3_ce0.read();
        } else {
            WEIGHT1_11_3_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_11_3_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_11_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_11_3_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_11_3_we0.read();
    } else {
        WEIGHT1_11_3_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_11_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_11_4_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_11_4_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_11_4_address0 = grp_FIRE3_fu_2067_WEIGHT1_11_4_address0.read();
        } else {
            WEIGHT1_11_4_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_11_4_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_11_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_11_4_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_11_4_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_11_4_ce0 = grp_FIRE3_fu_2067_WEIGHT1_11_4_ce0.read();
        } else {
            WEIGHT1_11_4_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_11_4_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_11_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_11_4_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_11_4_we0.read();
    } else {
        WEIGHT1_11_4_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_11_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_11_5_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_11_5_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_11_5_address0 = grp_FIRE3_fu_2067_WEIGHT1_11_5_address0.read();
        } else {
            WEIGHT1_11_5_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_11_5_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_11_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_11_5_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_11_5_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_11_5_ce0 = grp_FIRE3_fu_2067_WEIGHT1_11_5_ce0.read();
        } else {
            WEIGHT1_11_5_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_11_5_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_11_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_11_5_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_11_5_we0.read();
    } else {
        WEIGHT1_11_5_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_11_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_11_6_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_11_6_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_11_6_address0 = grp_FIRE3_fu_2067_WEIGHT1_11_6_address0.read();
        } else {
            WEIGHT1_11_6_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_11_6_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_11_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_11_6_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_11_6_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_11_6_ce0 = grp_FIRE3_fu_2067_WEIGHT1_11_6_ce0.read();
        } else {
            WEIGHT1_11_6_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_11_6_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_11_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_11_6_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_11_6_we0.read();
    } else {
        WEIGHT1_11_6_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_12_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_12_0_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_12_0_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_12_0_address0 = grp_FIRE3_fu_2067_WEIGHT1_12_0_address0.read();
        } else {
            WEIGHT1_12_0_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_12_0_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_12_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_12_0_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_12_0_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_12_0_ce0 = grp_FIRE3_fu_2067_WEIGHT1_12_0_ce0.read();
        } else {
            WEIGHT1_12_0_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_12_0_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_12_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_12_0_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_12_0_we0.read();
    } else {
        WEIGHT1_12_0_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_12_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_12_1_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_12_1_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_12_1_address0 = grp_FIRE3_fu_2067_WEIGHT1_12_1_address0.read();
        } else {
            WEIGHT1_12_1_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_12_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_12_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_12_1_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_12_1_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_12_1_ce0 = grp_FIRE3_fu_2067_WEIGHT1_12_1_ce0.read();
        } else {
            WEIGHT1_12_1_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_12_1_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_12_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_12_1_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_12_1_we0.read();
    } else {
        WEIGHT1_12_1_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_12_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_12_2_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_12_2_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_12_2_address0 = grp_FIRE3_fu_2067_WEIGHT1_12_2_address0.read();
        } else {
            WEIGHT1_12_2_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_12_2_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_12_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_12_2_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_12_2_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_12_2_ce0 = grp_FIRE3_fu_2067_WEIGHT1_12_2_ce0.read();
        } else {
            WEIGHT1_12_2_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_12_2_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_12_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_12_2_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_12_2_we0.read();
    } else {
        WEIGHT1_12_2_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_12_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_12_3_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_12_3_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_12_3_address0 = grp_FIRE3_fu_2067_WEIGHT1_12_3_address0.read();
        } else {
            WEIGHT1_12_3_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_12_3_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_12_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_12_3_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_12_3_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_12_3_ce0 = grp_FIRE3_fu_2067_WEIGHT1_12_3_ce0.read();
        } else {
            WEIGHT1_12_3_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_12_3_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_12_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_12_3_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_12_3_we0.read();
    } else {
        WEIGHT1_12_3_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_12_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_12_4_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_12_4_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_12_4_address0 = grp_FIRE3_fu_2067_WEIGHT1_12_4_address0.read();
        } else {
            WEIGHT1_12_4_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_12_4_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_12_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_12_4_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_12_4_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_12_4_ce0 = grp_FIRE3_fu_2067_WEIGHT1_12_4_ce0.read();
        } else {
            WEIGHT1_12_4_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_12_4_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_12_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_12_4_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_12_4_we0.read();
    } else {
        WEIGHT1_12_4_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_12_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_12_5_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_12_5_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_12_5_address0 = grp_FIRE3_fu_2067_WEIGHT1_12_5_address0.read();
        } else {
            WEIGHT1_12_5_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_12_5_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_12_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_12_5_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_12_5_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_12_5_ce0 = grp_FIRE3_fu_2067_WEIGHT1_12_5_ce0.read();
        } else {
            WEIGHT1_12_5_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_12_5_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_12_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_12_5_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_12_5_we0.read();
    } else {
        WEIGHT1_12_5_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_12_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_12_6_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_12_6_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_12_6_address0 = grp_FIRE3_fu_2067_WEIGHT1_12_6_address0.read();
        } else {
            WEIGHT1_12_6_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_12_6_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_12_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_12_6_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_12_6_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_12_6_ce0 = grp_FIRE3_fu_2067_WEIGHT1_12_6_ce0.read();
        } else {
            WEIGHT1_12_6_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_12_6_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_12_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_12_6_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_12_6_we0.read();
    } else {
        WEIGHT1_12_6_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_13_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_13_0_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_13_0_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_13_0_address0 = grp_FIRE3_fu_2067_WEIGHT1_13_0_address0.read();
        } else {
            WEIGHT1_13_0_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_13_0_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_13_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_13_0_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_13_0_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_13_0_ce0 = grp_FIRE3_fu_2067_WEIGHT1_13_0_ce0.read();
        } else {
            WEIGHT1_13_0_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_13_0_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_13_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_13_0_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_13_0_we0.read();
    } else {
        WEIGHT1_13_0_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_13_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_13_1_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_13_1_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_13_1_address0 = grp_FIRE3_fu_2067_WEIGHT1_13_1_address0.read();
        } else {
            WEIGHT1_13_1_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_13_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_13_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_13_1_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_13_1_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_13_1_ce0 = grp_FIRE3_fu_2067_WEIGHT1_13_1_ce0.read();
        } else {
            WEIGHT1_13_1_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_13_1_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_13_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_13_1_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_13_1_we0.read();
    } else {
        WEIGHT1_13_1_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_13_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_13_2_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_13_2_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_13_2_address0 = grp_FIRE3_fu_2067_WEIGHT1_13_2_address0.read();
        } else {
            WEIGHT1_13_2_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_13_2_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_13_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_13_2_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_13_2_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_13_2_ce0 = grp_FIRE3_fu_2067_WEIGHT1_13_2_ce0.read();
        } else {
            WEIGHT1_13_2_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_13_2_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_13_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_13_2_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_13_2_we0.read();
    } else {
        WEIGHT1_13_2_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_13_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_13_3_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_13_3_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_13_3_address0 = grp_FIRE3_fu_2067_WEIGHT1_13_3_address0.read();
        } else {
            WEIGHT1_13_3_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_13_3_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_13_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_13_3_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_13_3_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_13_3_ce0 = grp_FIRE3_fu_2067_WEIGHT1_13_3_ce0.read();
        } else {
            WEIGHT1_13_3_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_13_3_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_13_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_13_3_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_13_3_we0.read();
    } else {
        WEIGHT1_13_3_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_13_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_13_4_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_13_4_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_13_4_address0 = grp_FIRE3_fu_2067_WEIGHT1_13_4_address0.read();
        } else {
            WEIGHT1_13_4_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_13_4_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_13_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_13_4_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_13_4_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_13_4_ce0 = grp_FIRE3_fu_2067_WEIGHT1_13_4_ce0.read();
        } else {
            WEIGHT1_13_4_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_13_4_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_13_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_13_4_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_13_4_we0.read();
    } else {
        WEIGHT1_13_4_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_13_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_13_5_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_13_5_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_13_5_address0 = grp_FIRE3_fu_2067_WEIGHT1_13_5_address0.read();
        } else {
            WEIGHT1_13_5_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_13_5_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_13_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_13_5_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_13_5_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_13_5_ce0 = grp_FIRE3_fu_2067_WEIGHT1_13_5_ce0.read();
        } else {
            WEIGHT1_13_5_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_13_5_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_13_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_13_5_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_13_5_we0.read();
    } else {
        WEIGHT1_13_5_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_13_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_13_6_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_13_6_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_13_6_address0 = grp_FIRE3_fu_2067_WEIGHT1_13_6_address0.read();
        } else {
            WEIGHT1_13_6_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_13_6_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_13_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_13_6_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_13_6_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_13_6_ce0 = grp_FIRE3_fu_2067_WEIGHT1_13_6_ce0.read();
        } else {
            WEIGHT1_13_6_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_13_6_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_13_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_13_6_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_13_6_we0.read();
    } else {
        WEIGHT1_13_6_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_14_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_14_0_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_14_0_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_14_0_address0 = grp_FIRE3_fu_2067_WEIGHT1_14_0_address0.read();
        } else {
            WEIGHT1_14_0_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_14_0_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_14_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_14_0_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_14_0_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_14_0_ce0 = grp_FIRE3_fu_2067_WEIGHT1_14_0_ce0.read();
        } else {
            WEIGHT1_14_0_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_14_0_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_14_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_14_0_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_14_0_we0.read();
    } else {
        WEIGHT1_14_0_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_14_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_14_1_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_14_1_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_14_1_address0 = grp_FIRE3_fu_2067_WEIGHT1_14_1_address0.read();
        } else {
            WEIGHT1_14_1_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_14_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_14_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_14_1_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_14_1_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_14_1_ce0 = grp_FIRE3_fu_2067_WEIGHT1_14_1_ce0.read();
        } else {
            WEIGHT1_14_1_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_14_1_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_14_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_14_1_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_14_1_we0.read();
    } else {
        WEIGHT1_14_1_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_14_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_14_2_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_14_2_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_14_2_address0 = grp_FIRE3_fu_2067_WEIGHT1_14_2_address0.read();
        } else {
            WEIGHT1_14_2_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_14_2_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_14_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_14_2_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_14_2_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_14_2_ce0 = grp_FIRE3_fu_2067_WEIGHT1_14_2_ce0.read();
        } else {
            WEIGHT1_14_2_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_14_2_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_14_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_14_2_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_14_2_we0.read();
    } else {
        WEIGHT1_14_2_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_14_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_14_3_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_14_3_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_14_3_address0 = grp_FIRE3_fu_2067_WEIGHT1_14_3_address0.read();
        } else {
            WEIGHT1_14_3_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_14_3_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_14_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_14_3_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_14_3_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_14_3_ce0 = grp_FIRE3_fu_2067_WEIGHT1_14_3_ce0.read();
        } else {
            WEIGHT1_14_3_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_14_3_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_14_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_14_3_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_14_3_we0.read();
    } else {
        WEIGHT1_14_3_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_14_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_14_4_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_14_4_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_14_4_address0 = grp_FIRE3_fu_2067_WEIGHT1_14_4_address0.read();
        } else {
            WEIGHT1_14_4_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_14_4_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_14_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_14_4_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_14_4_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_14_4_ce0 = grp_FIRE3_fu_2067_WEIGHT1_14_4_ce0.read();
        } else {
            WEIGHT1_14_4_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_14_4_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_14_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_14_4_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_14_4_we0.read();
    } else {
        WEIGHT1_14_4_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_14_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_14_5_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_14_5_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_14_5_address0 = grp_FIRE3_fu_2067_WEIGHT1_14_5_address0.read();
        } else {
            WEIGHT1_14_5_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_14_5_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_14_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_14_5_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_14_5_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_14_5_ce0 = grp_FIRE3_fu_2067_WEIGHT1_14_5_ce0.read();
        } else {
            WEIGHT1_14_5_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_14_5_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_14_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_14_5_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_14_5_we0.read();
    } else {
        WEIGHT1_14_5_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_14_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_14_6_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_14_6_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_14_6_address0 = grp_FIRE3_fu_2067_WEIGHT1_14_6_address0.read();
        } else {
            WEIGHT1_14_6_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_14_6_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_14_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_14_6_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_14_6_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_14_6_ce0 = grp_FIRE3_fu_2067_WEIGHT1_14_6_ce0.read();
        } else {
            WEIGHT1_14_6_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_14_6_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_14_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_14_6_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_14_6_we0.read();
    } else {
        WEIGHT1_14_6_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_15_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_15_0_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_15_0_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_15_0_address0 = grp_FIRE3_fu_2067_WEIGHT1_15_0_address0.read();
        } else {
            WEIGHT1_15_0_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_15_0_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_15_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_15_0_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_15_0_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_15_0_ce0 = grp_FIRE3_fu_2067_WEIGHT1_15_0_ce0.read();
        } else {
            WEIGHT1_15_0_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_15_0_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_15_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_15_0_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_15_0_we0.read();
    } else {
        WEIGHT1_15_0_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_15_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_15_1_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_15_1_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_15_1_address0 = grp_FIRE3_fu_2067_WEIGHT1_15_1_address0.read();
        } else {
            WEIGHT1_15_1_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_15_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_15_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_15_1_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_15_1_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_15_1_ce0 = grp_FIRE3_fu_2067_WEIGHT1_15_1_ce0.read();
        } else {
            WEIGHT1_15_1_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_15_1_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_15_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_15_1_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_15_1_we0.read();
    } else {
        WEIGHT1_15_1_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_15_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_15_2_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_15_2_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_15_2_address0 = grp_FIRE3_fu_2067_WEIGHT1_15_2_address0.read();
        } else {
            WEIGHT1_15_2_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_15_2_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_15_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_15_2_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_15_2_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_15_2_ce0 = grp_FIRE3_fu_2067_WEIGHT1_15_2_ce0.read();
        } else {
            WEIGHT1_15_2_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_15_2_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_15_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_15_2_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_15_2_we0.read();
    } else {
        WEIGHT1_15_2_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_15_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_15_3_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_15_3_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_15_3_address0 = grp_FIRE3_fu_2067_WEIGHT1_15_3_address0.read();
        } else {
            WEIGHT1_15_3_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_15_3_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_15_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_15_3_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_15_3_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_15_3_ce0 = grp_FIRE3_fu_2067_WEIGHT1_15_3_ce0.read();
        } else {
            WEIGHT1_15_3_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_15_3_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_15_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_15_3_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_15_3_we0.read();
    } else {
        WEIGHT1_15_3_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_15_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_15_4_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_15_4_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_15_4_address0 = grp_FIRE3_fu_2067_WEIGHT1_15_4_address0.read();
        } else {
            WEIGHT1_15_4_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_15_4_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_15_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_15_4_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_15_4_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_15_4_ce0 = grp_FIRE3_fu_2067_WEIGHT1_15_4_ce0.read();
        } else {
            WEIGHT1_15_4_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_15_4_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_15_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_15_4_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_15_4_we0.read();
    } else {
        WEIGHT1_15_4_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_15_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_15_5_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_15_5_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_15_5_address0 = grp_FIRE3_fu_2067_WEIGHT1_15_5_address0.read();
        } else {
            WEIGHT1_15_5_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_15_5_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_15_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_15_5_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_15_5_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_15_5_ce0 = grp_FIRE3_fu_2067_WEIGHT1_15_5_ce0.read();
        } else {
            WEIGHT1_15_5_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_15_5_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_15_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_15_5_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_15_5_we0.read();
    } else {
        WEIGHT1_15_5_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_15_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_15_6_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_15_6_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_15_6_address0 = grp_FIRE3_fu_2067_WEIGHT1_15_6_address0.read();
        } else {
            WEIGHT1_15_6_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_15_6_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_15_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_15_6_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_15_6_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_15_6_ce0 = grp_FIRE3_fu_2067_WEIGHT1_15_6_ce0.read();
        } else {
            WEIGHT1_15_6_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_15_6_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_15_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_15_6_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_15_6_we0.read();
    } else {
        WEIGHT1_15_6_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_16_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_16_0_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_16_0_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_16_0_address0 = grp_FIRE3_fu_2067_WEIGHT1_16_0_address0.read();
        } else {
            WEIGHT1_16_0_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_16_0_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_16_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_16_0_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_16_0_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_16_0_ce0 = grp_FIRE3_fu_2067_WEIGHT1_16_0_ce0.read();
        } else {
            WEIGHT1_16_0_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_16_0_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_16_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_16_0_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_16_0_we0.read();
    } else {
        WEIGHT1_16_0_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_16_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_16_1_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_16_1_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_16_1_address0 = grp_FIRE3_fu_2067_WEIGHT1_16_1_address0.read();
        } else {
            WEIGHT1_16_1_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_16_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_16_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_16_1_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_16_1_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_16_1_ce0 = grp_FIRE3_fu_2067_WEIGHT1_16_1_ce0.read();
        } else {
            WEIGHT1_16_1_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_16_1_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_16_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_16_1_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_16_1_we0.read();
    } else {
        WEIGHT1_16_1_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_16_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_16_2_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_16_2_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_16_2_address0 = grp_FIRE3_fu_2067_WEIGHT1_16_2_address0.read();
        } else {
            WEIGHT1_16_2_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_16_2_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_16_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_16_2_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_16_2_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_16_2_ce0 = grp_FIRE3_fu_2067_WEIGHT1_16_2_ce0.read();
        } else {
            WEIGHT1_16_2_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_16_2_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_16_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_16_2_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_16_2_we0.read();
    } else {
        WEIGHT1_16_2_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_16_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_16_3_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_16_3_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_16_3_address0 = grp_FIRE3_fu_2067_WEIGHT1_16_3_address0.read();
        } else {
            WEIGHT1_16_3_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_16_3_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_16_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_16_3_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_16_3_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_16_3_ce0 = grp_FIRE3_fu_2067_WEIGHT1_16_3_ce0.read();
        } else {
            WEIGHT1_16_3_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_16_3_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_16_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_16_3_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_16_3_we0.read();
    } else {
        WEIGHT1_16_3_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_16_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_16_4_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_16_4_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_16_4_address0 = grp_FIRE3_fu_2067_WEIGHT1_16_4_address0.read();
        } else {
            WEIGHT1_16_4_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_16_4_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_16_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_16_4_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_16_4_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_16_4_ce0 = grp_FIRE3_fu_2067_WEIGHT1_16_4_ce0.read();
        } else {
            WEIGHT1_16_4_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_16_4_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_16_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_16_4_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_16_4_we0.read();
    } else {
        WEIGHT1_16_4_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_16_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_16_5_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_16_5_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_16_5_address0 = grp_FIRE3_fu_2067_WEIGHT1_16_5_address0.read();
        } else {
            WEIGHT1_16_5_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_16_5_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_16_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_16_5_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_16_5_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_16_5_ce0 = grp_FIRE3_fu_2067_WEIGHT1_16_5_ce0.read();
        } else {
            WEIGHT1_16_5_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_16_5_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_16_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_16_5_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_16_5_we0.read();
    } else {
        WEIGHT1_16_5_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_16_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_16_6_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_16_6_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_16_6_address0 = grp_FIRE3_fu_2067_WEIGHT1_16_6_address0.read();
        } else {
            WEIGHT1_16_6_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_16_6_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_16_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_16_6_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_16_6_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_16_6_ce0 = grp_FIRE3_fu_2067_WEIGHT1_16_6_ce0.read();
        } else {
            WEIGHT1_16_6_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_16_6_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_16_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_16_6_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_16_6_we0.read();
    } else {
        WEIGHT1_16_6_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_17_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_17_0_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_17_0_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_17_0_address0 = grp_FIRE3_fu_2067_WEIGHT1_17_0_address0.read();
        } else {
            WEIGHT1_17_0_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_17_0_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_17_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_17_0_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_17_0_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_17_0_ce0 = grp_FIRE3_fu_2067_WEIGHT1_17_0_ce0.read();
        } else {
            WEIGHT1_17_0_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_17_0_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_17_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_17_0_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_17_0_we0.read();
    } else {
        WEIGHT1_17_0_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_17_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_17_1_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_17_1_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_17_1_address0 = grp_FIRE3_fu_2067_WEIGHT1_17_1_address0.read();
        } else {
            WEIGHT1_17_1_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_17_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_17_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_17_1_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_17_1_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_17_1_ce0 = grp_FIRE3_fu_2067_WEIGHT1_17_1_ce0.read();
        } else {
            WEIGHT1_17_1_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_17_1_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_17_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_17_1_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_17_1_we0.read();
    } else {
        WEIGHT1_17_1_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_17_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_17_2_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_17_2_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_17_2_address0 = grp_FIRE3_fu_2067_WEIGHT1_17_2_address0.read();
        } else {
            WEIGHT1_17_2_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_17_2_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_17_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_17_2_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_17_2_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_17_2_ce0 = grp_FIRE3_fu_2067_WEIGHT1_17_2_ce0.read();
        } else {
            WEIGHT1_17_2_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_17_2_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_17_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_17_2_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_17_2_we0.read();
    } else {
        WEIGHT1_17_2_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_17_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_17_3_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_17_3_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_17_3_address0 = grp_FIRE3_fu_2067_WEIGHT1_17_3_address0.read();
        } else {
            WEIGHT1_17_3_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_17_3_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_17_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_17_3_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_17_3_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_17_3_ce0 = grp_FIRE3_fu_2067_WEIGHT1_17_3_ce0.read();
        } else {
            WEIGHT1_17_3_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_17_3_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_17_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_17_3_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_17_3_we0.read();
    } else {
        WEIGHT1_17_3_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_17_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_17_4_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_17_4_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_17_4_address0 = grp_FIRE3_fu_2067_WEIGHT1_17_4_address0.read();
        } else {
            WEIGHT1_17_4_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_17_4_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_17_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_17_4_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_17_4_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_17_4_ce0 = grp_FIRE3_fu_2067_WEIGHT1_17_4_ce0.read();
        } else {
            WEIGHT1_17_4_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_17_4_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_17_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_17_4_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_17_4_we0.read();
    } else {
        WEIGHT1_17_4_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_17_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_17_5_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_17_5_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_17_5_address0 = grp_FIRE3_fu_2067_WEIGHT1_17_5_address0.read();
        } else {
            WEIGHT1_17_5_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_17_5_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_17_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_17_5_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_17_5_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_17_5_ce0 = grp_FIRE3_fu_2067_WEIGHT1_17_5_ce0.read();
        } else {
            WEIGHT1_17_5_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_17_5_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_17_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_17_5_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_17_5_we0.read();
    } else {
        WEIGHT1_17_5_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_17_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_17_6_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_17_6_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_17_6_address0 = grp_FIRE3_fu_2067_WEIGHT1_17_6_address0.read();
        } else {
            WEIGHT1_17_6_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_17_6_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_17_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_17_6_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_17_6_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_17_6_ce0 = grp_FIRE3_fu_2067_WEIGHT1_17_6_ce0.read();
        } else {
            WEIGHT1_17_6_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_17_6_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_17_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_17_6_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_17_6_we0.read();
    } else {
        WEIGHT1_17_6_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_18_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_18_0_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_18_0_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_18_0_address0 = grp_FIRE3_fu_2067_WEIGHT1_18_0_address0.read();
        } else {
            WEIGHT1_18_0_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_18_0_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_18_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_18_0_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_18_0_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_18_0_ce0 = grp_FIRE3_fu_2067_WEIGHT1_18_0_ce0.read();
        } else {
            WEIGHT1_18_0_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_18_0_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_18_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_18_0_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_18_0_we0.read();
    } else {
        WEIGHT1_18_0_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_18_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_18_1_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_18_1_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_18_1_address0 = grp_FIRE3_fu_2067_WEIGHT1_18_1_address0.read();
        } else {
            WEIGHT1_18_1_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_18_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_18_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_18_1_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_18_1_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_18_1_ce0 = grp_FIRE3_fu_2067_WEIGHT1_18_1_ce0.read();
        } else {
            WEIGHT1_18_1_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_18_1_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_18_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_18_1_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_18_1_we0.read();
    } else {
        WEIGHT1_18_1_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_18_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_18_2_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_18_2_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_18_2_address0 = grp_FIRE3_fu_2067_WEIGHT1_18_2_address0.read();
        } else {
            WEIGHT1_18_2_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_18_2_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_18_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_18_2_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_18_2_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_18_2_ce0 = grp_FIRE3_fu_2067_WEIGHT1_18_2_ce0.read();
        } else {
            WEIGHT1_18_2_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_18_2_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_18_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_18_2_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_18_2_we0.read();
    } else {
        WEIGHT1_18_2_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_18_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_18_3_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_18_3_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_18_3_address0 = grp_FIRE3_fu_2067_WEIGHT1_18_3_address0.read();
        } else {
            WEIGHT1_18_3_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_18_3_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_18_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_18_3_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_18_3_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_18_3_ce0 = grp_FIRE3_fu_2067_WEIGHT1_18_3_ce0.read();
        } else {
            WEIGHT1_18_3_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_18_3_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_18_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_18_3_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_18_3_we0.read();
    } else {
        WEIGHT1_18_3_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_18_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_18_4_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_18_4_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_18_4_address0 = grp_FIRE3_fu_2067_WEIGHT1_18_4_address0.read();
        } else {
            WEIGHT1_18_4_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_18_4_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_18_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_18_4_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_18_4_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_18_4_ce0 = grp_FIRE3_fu_2067_WEIGHT1_18_4_ce0.read();
        } else {
            WEIGHT1_18_4_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_18_4_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_18_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_18_4_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_18_4_we0.read();
    } else {
        WEIGHT1_18_4_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_18_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_18_5_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_18_5_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_18_5_address0 = grp_FIRE3_fu_2067_WEIGHT1_18_5_address0.read();
        } else {
            WEIGHT1_18_5_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_18_5_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_18_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_18_5_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_18_5_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_18_5_ce0 = grp_FIRE3_fu_2067_WEIGHT1_18_5_ce0.read();
        } else {
            WEIGHT1_18_5_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_18_5_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_18_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_18_5_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_18_5_we0.read();
    } else {
        WEIGHT1_18_5_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_18_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_18_6_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_18_6_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_18_6_address0 = grp_FIRE3_fu_2067_WEIGHT1_18_6_address0.read();
        } else {
            WEIGHT1_18_6_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_18_6_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_18_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_18_6_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_18_6_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_18_6_ce0 = grp_FIRE3_fu_2067_WEIGHT1_18_6_ce0.read();
        } else {
            WEIGHT1_18_6_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_18_6_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_18_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_18_6_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_18_6_we0.read();
    } else {
        WEIGHT1_18_6_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_19_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_19_0_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_19_0_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_19_0_address0 = grp_FIRE3_fu_2067_WEIGHT1_19_0_address0.read();
        } else {
            WEIGHT1_19_0_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_19_0_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_19_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_19_0_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_19_0_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_19_0_ce0 = grp_FIRE3_fu_2067_WEIGHT1_19_0_ce0.read();
        } else {
            WEIGHT1_19_0_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_19_0_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_19_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_19_0_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_19_0_we0.read();
    } else {
        WEIGHT1_19_0_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_19_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_19_1_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_19_1_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_19_1_address0 = grp_FIRE3_fu_2067_WEIGHT1_19_1_address0.read();
        } else {
            WEIGHT1_19_1_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_19_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_19_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_19_1_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_19_1_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_19_1_ce0 = grp_FIRE3_fu_2067_WEIGHT1_19_1_ce0.read();
        } else {
            WEIGHT1_19_1_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_19_1_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_19_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_19_1_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_19_1_we0.read();
    } else {
        WEIGHT1_19_1_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_19_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_19_2_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_19_2_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_19_2_address0 = grp_FIRE3_fu_2067_WEIGHT1_19_2_address0.read();
        } else {
            WEIGHT1_19_2_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_19_2_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_19_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_19_2_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_19_2_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_19_2_ce0 = grp_FIRE3_fu_2067_WEIGHT1_19_2_ce0.read();
        } else {
            WEIGHT1_19_2_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_19_2_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_19_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_19_2_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_19_2_we0.read();
    } else {
        WEIGHT1_19_2_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_19_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_19_3_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_19_3_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_19_3_address0 = grp_FIRE3_fu_2067_WEIGHT1_19_3_address0.read();
        } else {
            WEIGHT1_19_3_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_19_3_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_19_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_19_3_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_19_3_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_19_3_ce0 = grp_FIRE3_fu_2067_WEIGHT1_19_3_ce0.read();
        } else {
            WEIGHT1_19_3_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_19_3_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_19_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_19_3_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_19_3_we0.read();
    } else {
        WEIGHT1_19_3_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_19_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_19_4_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_19_4_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_19_4_address0 = grp_FIRE3_fu_2067_WEIGHT1_19_4_address0.read();
        } else {
            WEIGHT1_19_4_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_19_4_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_19_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_19_4_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_19_4_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_19_4_ce0 = grp_FIRE3_fu_2067_WEIGHT1_19_4_ce0.read();
        } else {
            WEIGHT1_19_4_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_19_4_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_19_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_19_4_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_19_4_we0.read();
    } else {
        WEIGHT1_19_4_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_19_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_19_5_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_19_5_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_19_5_address0 = grp_FIRE3_fu_2067_WEIGHT1_19_5_address0.read();
        } else {
            WEIGHT1_19_5_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_19_5_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_19_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_19_5_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_19_5_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_19_5_ce0 = grp_FIRE3_fu_2067_WEIGHT1_19_5_ce0.read();
        } else {
            WEIGHT1_19_5_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_19_5_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_19_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_19_5_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_19_5_we0.read();
    } else {
        WEIGHT1_19_5_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_19_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_19_6_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_19_6_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_19_6_address0 = grp_FIRE3_fu_2067_WEIGHT1_19_6_address0.read();
        } else {
            WEIGHT1_19_6_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_19_6_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_19_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_19_6_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_19_6_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_19_6_ce0 = grp_FIRE3_fu_2067_WEIGHT1_19_6_ce0.read();
        } else {
            WEIGHT1_19_6_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_19_6_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_19_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_19_6_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_19_6_we0.read();
    } else {
        WEIGHT1_19_6_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_1_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_1_0_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_1_0_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_1_0_address0 = grp_FIRE3_fu_2067_WEIGHT1_1_0_address0.read();
        } else {
            WEIGHT1_1_0_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_1_0_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_1_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_1_0_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_1_0_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_1_0_ce0 = grp_FIRE3_fu_2067_WEIGHT1_1_0_ce0.read();
        } else {
            WEIGHT1_1_0_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_1_0_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_1_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_1_0_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_1_0_we0.read();
    } else {
        WEIGHT1_1_0_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_1_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_1_1_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_1_1_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_1_1_address0 = grp_FIRE3_fu_2067_WEIGHT1_1_1_address0.read();
        } else {
            WEIGHT1_1_1_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_1_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_1_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_1_1_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_1_1_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_1_1_ce0 = grp_FIRE3_fu_2067_WEIGHT1_1_1_ce0.read();
        } else {
            WEIGHT1_1_1_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_1_1_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_1_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_1_1_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_1_1_we0.read();
    } else {
        WEIGHT1_1_1_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_1_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_1_2_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_1_2_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_1_2_address0 = grp_FIRE3_fu_2067_WEIGHT1_1_2_address0.read();
        } else {
            WEIGHT1_1_2_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_1_2_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_1_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_1_2_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_1_2_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_1_2_ce0 = grp_FIRE3_fu_2067_WEIGHT1_1_2_ce0.read();
        } else {
            WEIGHT1_1_2_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_1_2_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_1_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_1_2_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_1_2_we0.read();
    } else {
        WEIGHT1_1_2_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_1_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_1_3_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_1_3_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_1_3_address0 = grp_FIRE3_fu_2067_WEIGHT1_1_3_address0.read();
        } else {
            WEIGHT1_1_3_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_1_3_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_1_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_1_3_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_1_3_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_1_3_ce0 = grp_FIRE3_fu_2067_WEIGHT1_1_3_ce0.read();
        } else {
            WEIGHT1_1_3_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_1_3_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_1_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_1_3_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_1_3_we0.read();
    } else {
        WEIGHT1_1_3_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_1_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_1_4_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_1_4_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_1_4_address0 = grp_FIRE3_fu_2067_WEIGHT1_1_4_address0.read();
        } else {
            WEIGHT1_1_4_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_1_4_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_1_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_1_4_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_1_4_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_1_4_ce0 = grp_FIRE3_fu_2067_WEIGHT1_1_4_ce0.read();
        } else {
            WEIGHT1_1_4_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_1_4_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_1_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_1_4_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_1_4_we0.read();
    } else {
        WEIGHT1_1_4_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_1_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_1_5_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_1_5_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_1_5_address0 = grp_FIRE3_fu_2067_WEIGHT1_1_5_address0.read();
        } else {
            WEIGHT1_1_5_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_1_5_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_1_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_1_5_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_1_5_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_1_5_ce0 = grp_FIRE3_fu_2067_WEIGHT1_1_5_ce0.read();
        } else {
            WEIGHT1_1_5_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_1_5_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_1_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_1_5_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_1_5_we0.read();
    } else {
        WEIGHT1_1_5_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_1_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_1_6_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_1_6_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_1_6_address0 = grp_FIRE3_fu_2067_WEIGHT1_1_6_address0.read();
        } else {
            WEIGHT1_1_6_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_1_6_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_1_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_1_6_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_1_6_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_1_6_ce0 = grp_FIRE3_fu_2067_WEIGHT1_1_6_ce0.read();
        } else {
            WEIGHT1_1_6_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_1_6_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_1_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_1_6_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_1_6_we0.read();
    } else {
        WEIGHT1_1_6_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_20_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_20_0_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_20_0_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_20_0_address0 = grp_FIRE3_fu_2067_WEIGHT1_20_0_address0.read();
        } else {
            WEIGHT1_20_0_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_20_0_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_20_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_20_0_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_20_0_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_20_0_ce0 = grp_FIRE3_fu_2067_WEIGHT1_20_0_ce0.read();
        } else {
            WEIGHT1_20_0_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_20_0_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_20_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_20_0_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_20_0_we0.read();
    } else {
        WEIGHT1_20_0_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_20_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_20_1_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_20_1_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_20_1_address0 = grp_FIRE3_fu_2067_WEIGHT1_20_1_address0.read();
        } else {
            WEIGHT1_20_1_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_20_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_20_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_20_1_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_20_1_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_20_1_ce0 = grp_FIRE3_fu_2067_WEIGHT1_20_1_ce0.read();
        } else {
            WEIGHT1_20_1_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_20_1_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_20_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_20_1_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_20_1_we0.read();
    } else {
        WEIGHT1_20_1_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_20_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_20_2_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_20_2_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_20_2_address0 = grp_FIRE3_fu_2067_WEIGHT1_20_2_address0.read();
        } else {
            WEIGHT1_20_2_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_20_2_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_20_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_20_2_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_20_2_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_20_2_ce0 = grp_FIRE3_fu_2067_WEIGHT1_20_2_ce0.read();
        } else {
            WEIGHT1_20_2_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_20_2_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_20_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_20_2_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_20_2_we0.read();
    } else {
        WEIGHT1_20_2_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_20_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_20_3_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_20_3_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_20_3_address0 = grp_FIRE3_fu_2067_WEIGHT1_20_3_address0.read();
        } else {
            WEIGHT1_20_3_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_20_3_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_20_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_20_3_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_20_3_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_20_3_ce0 = grp_FIRE3_fu_2067_WEIGHT1_20_3_ce0.read();
        } else {
            WEIGHT1_20_3_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_20_3_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_20_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_20_3_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_20_3_we0.read();
    } else {
        WEIGHT1_20_3_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_20_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_20_4_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_20_4_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_20_4_address0 = grp_FIRE3_fu_2067_WEIGHT1_20_4_address0.read();
        } else {
            WEIGHT1_20_4_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_20_4_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_20_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_20_4_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_20_4_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_20_4_ce0 = grp_FIRE3_fu_2067_WEIGHT1_20_4_ce0.read();
        } else {
            WEIGHT1_20_4_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_20_4_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_20_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_20_4_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_20_4_we0.read();
    } else {
        WEIGHT1_20_4_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_20_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_20_5_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_20_5_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_20_5_address0 = grp_FIRE3_fu_2067_WEIGHT1_20_5_address0.read();
        } else {
            WEIGHT1_20_5_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_20_5_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_20_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_20_5_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_20_5_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_20_5_ce0 = grp_FIRE3_fu_2067_WEIGHT1_20_5_ce0.read();
        } else {
            WEIGHT1_20_5_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_20_5_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_20_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_20_5_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_20_5_we0.read();
    } else {
        WEIGHT1_20_5_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_20_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_20_6_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_20_6_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_20_6_address0 = grp_FIRE3_fu_2067_WEIGHT1_20_6_address0.read();
        } else {
            WEIGHT1_20_6_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_20_6_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_20_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_20_6_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_20_6_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_20_6_ce0 = grp_FIRE3_fu_2067_WEIGHT1_20_6_ce0.read();
        } else {
            WEIGHT1_20_6_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_20_6_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_20_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_20_6_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_20_6_we0.read();
    } else {
        WEIGHT1_20_6_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_21_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_21_0_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_21_0_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_21_0_address0 = grp_FIRE3_fu_2067_WEIGHT1_21_0_address0.read();
        } else {
            WEIGHT1_21_0_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_21_0_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_21_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_21_0_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_21_0_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_21_0_ce0 = grp_FIRE3_fu_2067_WEIGHT1_21_0_ce0.read();
        } else {
            WEIGHT1_21_0_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_21_0_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_21_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_21_0_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_21_0_we0.read();
    } else {
        WEIGHT1_21_0_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_21_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_21_1_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_21_1_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_21_1_address0 = grp_FIRE3_fu_2067_WEIGHT1_21_1_address0.read();
        } else {
            WEIGHT1_21_1_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_21_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_21_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_21_1_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_21_1_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_21_1_ce0 = grp_FIRE3_fu_2067_WEIGHT1_21_1_ce0.read();
        } else {
            WEIGHT1_21_1_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_21_1_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_21_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_21_1_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_21_1_we0.read();
    } else {
        WEIGHT1_21_1_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_21_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_21_2_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_21_2_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_21_2_address0 = grp_FIRE3_fu_2067_WEIGHT1_21_2_address0.read();
        } else {
            WEIGHT1_21_2_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_21_2_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_21_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_21_2_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_21_2_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_21_2_ce0 = grp_FIRE3_fu_2067_WEIGHT1_21_2_ce0.read();
        } else {
            WEIGHT1_21_2_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_21_2_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_21_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_21_2_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_21_2_we0.read();
    } else {
        WEIGHT1_21_2_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_21_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_21_3_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_21_3_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_21_3_address0 = grp_FIRE3_fu_2067_WEIGHT1_21_3_address0.read();
        } else {
            WEIGHT1_21_3_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_21_3_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_21_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_21_3_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_21_3_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_21_3_ce0 = grp_FIRE3_fu_2067_WEIGHT1_21_3_ce0.read();
        } else {
            WEIGHT1_21_3_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_21_3_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_21_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_21_3_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_21_3_we0.read();
    } else {
        WEIGHT1_21_3_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_21_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_21_4_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_21_4_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_21_4_address0 = grp_FIRE3_fu_2067_WEIGHT1_21_4_address0.read();
        } else {
            WEIGHT1_21_4_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_21_4_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_21_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_21_4_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_21_4_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_21_4_ce0 = grp_FIRE3_fu_2067_WEIGHT1_21_4_ce0.read();
        } else {
            WEIGHT1_21_4_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_21_4_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_21_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_21_4_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_21_4_we0.read();
    } else {
        WEIGHT1_21_4_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_21_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_21_5_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_21_5_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_21_5_address0 = grp_FIRE3_fu_2067_WEIGHT1_21_5_address0.read();
        } else {
            WEIGHT1_21_5_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_21_5_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_21_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_21_5_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_21_5_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_21_5_ce0 = grp_FIRE3_fu_2067_WEIGHT1_21_5_ce0.read();
        } else {
            WEIGHT1_21_5_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_21_5_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_21_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_21_5_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_21_5_we0.read();
    } else {
        WEIGHT1_21_5_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_21_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_21_6_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_21_6_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_21_6_address0 = grp_FIRE3_fu_2067_WEIGHT1_21_6_address0.read();
        } else {
            WEIGHT1_21_6_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_21_6_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_21_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_21_6_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_21_6_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_21_6_ce0 = grp_FIRE3_fu_2067_WEIGHT1_21_6_ce0.read();
        } else {
            WEIGHT1_21_6_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_21_6_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_21_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_21_6_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_21_6_we0.read();
    } else {
        WEIGHT1_21_6_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_22_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_22_0_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_22_0_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_22_0_address0 = grp_FIRE3_fu_2067_WEIGHT1_22_0_address0.read();
        } else {
            WEIGHT1_22_0_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_22_0_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_22_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_22_0_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_22_0_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_22_0_ce0 = grp_FIRE3_fu_2067_WEIGHT1_22_0_ce0.read();
        } else {
            WEIGHT1_22_0_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_22_0_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_22_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_22_0_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_22_0_we0.read();
    } else {
        WEIGHT1_22_0_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_22_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_22_1_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_22_1_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_22_1_address0 = grp_FIRE3_fu_2067_WEIGHT1_22_1_address0.read();
        } else {
            WEIGHT1_22_1_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_22_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_22_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_22_1_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_22_1_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_22_1_ce0 = grp_FIRE3_fu_2067_WEIGHT1_22_1_ce0.read();
        } else {
            WEIGHT1_22_1_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_22_1_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_22_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_22_1_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_22_1_we0.read();
    } else {
        WEIGHT1_22_1_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_22_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_22_2_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_22_2_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_22_2_address0 = grp_FIRE3_fu_2067_WEIGHT1_22_2_address0.read();
        } else {
            WEIGHT1_22_2_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_22_2_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_22_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_22_2_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_22_2_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_22_2_ce0 = grp_FIRE3_fu_2067_WEIGHT1_22_2_ce0.read();
        } else {
            WEIGHT1_22_2_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_22_2_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_22_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_22_2_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_22_2_we0.read();
    } else {
        WEIGHT1_22_2_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_22_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_22_3_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_22_3_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_22_3_address0 = grp_FIRE3_fu_2067_WEIGHT1_22_3_address0.read();
        } else {
            WEIGHT1_22_3_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_22_3_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_22_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_22_3_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_22_3_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_22_3_ce0 = grp_FIRE3_fu_2067_WEIGHT1_22_3_ce0.read();
        } else {
            WEIGHT1_22_3_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_22_3_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_22_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_22_3_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_22_3_we0.read();
    } else {
        WEIGHT1_22_3_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_22_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_22_4_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_22_4_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_22_4_address0 = grp_FIRE3_fu_2067_WEIGHT1_22_4_address0.read();
        } else {
            WEIGHT1_22_4_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_22_4_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_22_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_22_4_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_22_4_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_22_4_ce0 = grp_FIRE3_fu_2067_WEIGHT1_22_4_ce0.read();
        } else {
            WEIGHT1_22_4_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_22_4_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_22_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_22_4_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_22_4_we0.read();
    } else {
        WEIGHT1_22_4_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_22_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_22_5_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_22_5_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_22_5_address0 = grp_FIRE3_fu_2067_WEIGHT1_22_5_address0.read();
        } else {
            WEIGHT1_22_5_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_22_5_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_22_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_22_5_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_22_5_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_22_5_ce0 = grp_FIRE3_fu_2067_WEIGHT1_22_5_ce0.read();
        } else {
            WEIGHT1_22_5_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_22_5_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_22_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_22_5_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_22_5_we0.read();
    } else {
        WEIGHT1_22_5_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_22_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_22_6_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_22_6_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_22_6_address0 = grp_FIRE3_fu_2067_WEIGHT1_22_6_address0.read();
        } else {
            WEIGHT1_22_6_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_22_6_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_22_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_22_6_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_22_6_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_22_6_ce0 = grp_FIRE3_fu_2067_WEIGHT1_22_6_ce0.read();
        } else {
            WEIGHT1_22_6_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_22_6_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_22_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_22_6_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_22_6_we0.read();
    } else {
        WEIGHT1_22_6_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_23_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_23_0_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_23_0_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_23_0_address0 = grp_FIRE3_fu_2067_WEIGHT1_23_0_address0.read();
        } else {
            WEIGHT1_23_0_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_23_0_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_23_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_23_0_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_23_0_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_23_0_ce0 = grp_FIRE3_fu_2067_WEIGHT1_23_0_ce0.read();
        } else {
            WEIGHT1_23_0_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_23_0_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_23_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_23_0_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_23_0_we0.read();
    } else {
        WEIGHT1_23_0_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_23_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_23_1_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_23_1_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_23_1_address0 = grp_FIRE3_fu_2067_WEIGHT1_23_1_address0.read();
        } else {
            WEIGHT1_23_1_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_23_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_23_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_23_1_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_23_1_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_23_1_ce0 = grp_FIRE3_fu_2067_WEIGHT1_23_1_ce0.read();
        } else {
            WEIGHT1_23_1_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_23_1_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_23_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_23_1_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_23_1_we0.read();
    } else {
        WEIGHT1_23_1_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_23_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_23_2_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_23_2_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_23_2_address0 = grp_FIRE3_fu_2067_WEIGHT1_23_2_address0.read();
        } else {
            WEIGHT1_23_2_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_23_2_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_23_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_23_2_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_23_2_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_23_2_ce0 = grp_FIRE3_fu_2067_WEIGHT1_23_2_ce0.read();
        } else {
            WEIGHT1_23_2_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_23_2_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_23_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_23_2_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_23_2_we0.read();
    } else {
        WEIGHT1_23_2_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_23_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_23_3_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_23_3_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_23_3_address0 = grp_FIRE3_fu_2067_WEIGHT1_23_3_address0.read();
        } else {
            WEIGHT1_23_3_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_23_3_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_23_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_23_3_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_23_3_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_23_3_ce0 = grp_FIRE3_fu_2067_WEIGHT1_23_3_ce0.read();
        } else {
            WEIGHT1_23_3_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_23_3_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_23_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_23_3_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_23_3_we0.read();
    } else {
        WEIGHT1_23_3_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_23_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_23_4_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_23_4_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_23_4_address0 = grp_FIRE3_fu_2067_WEIGHT1_23_4_address0.read();
        } else {
            WEIGHT1_23_4_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_23_4_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_23_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_23_4_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_23_4_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_23_4_ce0 = grp_FIRE3_fu_2067_WEIGHT1_23_4_ce0.read();
        } else {
            WEIGHT1_23_4_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_23_4_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_23_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_23_4_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_23_4_we0.read();
    } else {
        WEIGHT1_23_4_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_23_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_23_5_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_23_5_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_23_5_address0 = grp_FIRE3_fu_2067_WEIGHT1_23_5_address0.read();
        } else {
            WEIGHT1_23_5_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_23_5_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_23_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_23_5_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_23_5_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_23_5_ce0 = grp_FIRE3_fu_2067_WEIGHT1_23_5_ce0.read();
        } else {
            WEIGHT1_23_5_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_23_5_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_23_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_23_5_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_23_5_we0.read();
    } else {
        WEIGHT1_23_5_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_23_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_23_6_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_23_6_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_23_6_address0 = grp_FIRE3_fu_2067_WEIGHT1_23_6_address0.read();
        } else {
            WEIGHT1_23_6_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_23_6_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_23_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_23_6_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_23_6_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_23_6_ce0 = grp_FIRE3_fu_2067_WEIGHT1_23_6_ce0.read();
        } else {
            WEIGHT1_23_6_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_23_6_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_23_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_23_6_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_23_6_we0.read();
    } else {
        WEIGHT1_23_6_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_24_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_24_0_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_24_0_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_24_0_address0 = grp_FIRE3_fu_2067_WEIGHT1_24_0_address0.read();
        } else {
            WEIGHT1_24_0_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_24_0_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_24_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_24_0_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_24_0_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_24_0_ce0 = grp_FIRE3_fu_2067_WEIGHT1_24_0_ce0.read();
        } else {
            WEIGHT1_24_0_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_24_0_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_24_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_24_0_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_24_0_we0.read();
    } else {
        WEIGHT1_24_0_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_24_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_24_1_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_24_1_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_24_1_address0 = grp_FIRE3_fu_2067_WEIGHT1_24_1_address0.read();
        } else {
            WEIGHT1_24_1_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_24_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_24_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_24_1_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_24_1_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_24_1_ce0 = grp_FIRE3_fu_2067_WEIGHT1_24_1_ce0.read();
        } else {
            WEIGHT1_24_1_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_24_1_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_24_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_24_1_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_24_1_we0.read();
    } else {
        WEIGHT1_24_1_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_24_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_24_2_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_24_2_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_24_2_address0 = grp_FIRE3_fu_2067_WEIGHT1_24_2_address0.read();
        } else {
            WEIGHT1_24_2_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_24_2_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_24_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_24_2_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_24_2_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_24_2_ce0 = grp_FIRE3_fu_2067_WEIGHT1_24_2_ce0.read();
        } else {
            WEIGHT1_24_2_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_24_2_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_24_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_24_2_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_24_2_we0.read();
    } else {
        WEIGHT1_24_2_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_24_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_24_3_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_24_3_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_24_3_address0 = grp_FIRE3_fu_2067_WEIGHT1_24_3_address0.read();
        } else {
            WEIGHT1_24_3_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_24_3_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_24_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_24_3_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_24_3_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_24_3_ce0 = grp_FIRE3_fu_2067_WEIGHT1_24_3_ce0.read();
        } else {
            WEIGHT1_24_3_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_24_3_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_24_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_24_3_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_24_3_we0.read();
    } else {
        WEIGHT1_24_3_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_24_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_24_4_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_24_4_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_24_4_address0 = grp_FIRE3_fu_2067_WEIGHT1_24_4_address0.read();
        } else {
            WEIGHT1_24_4_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_24_4_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_24_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_24_4_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_24_4_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_24_4_ce0 = grp_FIRE3_fu_2067_WEIGHT1_24_4_ce0.read();
        } else {
            WEIGHT1_24_4_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_24_4_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_24_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_24_4_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_24_4_we0.read();
    } else {
        WEIGHT1_24_4_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_24_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_24_5_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_24_5_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_24_5_address0 = grp_FIRE3_fu_2067_WEIGHT1_24_5_address0.read();
        } else {
            WEIGHT1_24_5_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_24_5_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_24_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_24_5_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_24_5_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_24_5_ce0 = grp_FIRE3_fu_2067_WEIGHT1_24_5_ce0.read();
        } else {
            WEIGHT1_24_5_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_24_5_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_24_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_24_5_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_24_5_we0.read();
    } else {
        WEIGHT1_24_5_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_24_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_24_6_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_24_6_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_24_6_address0 = grp_FIRE3_fu_2067_WEIGHT1_24_6_address0.read();
        } else {
            WEIGHT1_24_6_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_24_6_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_24_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_24_6_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_24_6_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_24_6_ce0 = grp_FIRE3_fu_2067_WEIGHT1_24_6_ce0.read();
        } else {
            WEIGHT1_24_6_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_24_6_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_24_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_24_6_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_24_6_we0.read();
    } else {
        WEIGHT1_24_6_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_25_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_25_0_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_25_0_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_25_0_address0 = grp_FIRE3_fu_2067_WEIGHT1_25_0_address0.read();
        } else {
            WEIGHT1_25_0_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_25_0_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_25_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_25_0_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_25_0_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_25_0_ce0 = grp_FIRE3_fu_2067_WEIGHT1_25_0_ce0.read();
        } else {
            WEIGHT1_25_0_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_25_0_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_25_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_25_0_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_25_0_we0.read();
    } else {
        WEIGHT1_25_0_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_25_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_25_1_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_25_1_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_25_1_address0 = grp_FIRE3_fu_2067_WEIGHT1_25_1_address0.read();
        } else {
            WEIGHT1_25_1_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_25_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_25_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_25_1_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_25_1_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_25_1_ce0 = grp_FIRE3_fu_2067_WEIGHT1_25_1_ce0.read();
        } else {
            WEIGHT1_25_1_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_25_1_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_25_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_25_1_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_25_1_we0.read();
    } else {
        WEIGHT1_25_1_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_25_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_25_2_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_25_2_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_25_2_address0 = grp_FIRE3_fu_2067_WEIGHT1_25_2_address0.read();
        } else {
            WEIGHT1_25_2_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_25_2_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_25_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_25_2_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_25_2_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_25_2_ce0 = grp_FIRE3_fu_2067_WEIGHT1_25_2_ce0.read();
        } else {
            WEIGHT1_25_2_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_25_2_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_25_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_25_2_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_25_2_we0.read();
    } else {
        WEIGHT1_25_2_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_25_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_25_3_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_25_3_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_25_3_address0 = grp_FIRE3_fu_2067_WEIGHT1_25_3_address0.read();
        } else {
            WEIGHT1_25_3_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_25_3_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_25_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_25_3_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_25_3_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_25_3_ce0 = grp_FIRE3_fu_2067_WEIGHT1_25_3_ce0.read();
        } else {
            WEIGHT1_25_3_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_25_3_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_25_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_25_3_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_25_3_we0.read();
    } else {
        WEIGHT1_25_3_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_25_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_25_4_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_25_4_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_25_4_address0 = grp_FIRE3_fu_2067_WEIGHT1_25_4_address0.read();
        } else {
            WEIGHT1_25_4_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_25_4_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_25_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_25_4_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_25_4_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_25_4_ce0 = grp_FIRE3_fu_2067_WEIGHT1_25_4_ce0.read();
        } else {
            WEIGHT1_25_4_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_25_4_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_25_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_25_4_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_25_4_we0.read();
    } else {
        WEIGHT1_25_4_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_25_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_25_5_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_25_5_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_25_5_address0 = grp_FIRE3_fu_2067_WEIGHT1_25_5_address0.read();
        } else {
            WEIGHT1_25_5_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_25_5_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_25_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_25_5_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_25_5_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_25_5_ce0 = grp_FIRE3_fu_2067_WEIGHT1_25_5_ce0.read();
        } else {
            WEIGHT1_25_5_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_25_5_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_25_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_25_5_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_25_5_we0.read();
    } else {
        WEIGHT1_25_5_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_25_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_25_6_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_25_6_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_25_6_address0 = grp_FIRE3_fu_2067_WEIGHT1_25_6_address0.read();
        } else {
            WEIGHT1_25_6_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_25_6_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_25_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_25_6_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_25_6_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_25_6_ce0 = grp_FIRE3_fu_2067_WEIGHT1_25_6_ce0.read();
        } else {
            WEIGHT1_25_6_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_25_6_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_25_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_25_6_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_25_6_we0.read();
    } else {
        WEIGHT1_25_6_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_26_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_26_0_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_26_0_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_26_0_address0 = grp_FIRE3_fu_2067_WEIGHT1_26_0_address0.read();
        } else {
            WEIGHT1_26_0_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_26_0_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_26_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_26_0_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_26_0_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_26_0_ce0 = grp_FIRE3_fu_2067_WEIGHT1_26_0_ce0.read();
        } else {
            WEIGHT1_26_0_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_26_0_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_26_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_26_0_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_26_0_we0.read();
    } else {
        WEIGHT1_26_0_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_26_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_26_1_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_26_1_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_26_1_address0 = grp_FIRE3_fu_2067_WEIGHT1_26_1_address0.read();
        } else {
            WEIGHT1_26_1_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_26_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_26_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_26_1_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_26_1_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_26_1_ce0 = grp_FIRE3_fu_2067_WEIGHT1_26_1_ce0.read();
        } else {
            WEIGHT1_26_1_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_26_1_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_26_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_26_1_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_26_1_we0.read();
    } else {
        WEIGHT1_26_1_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_26_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_26_2_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_26_2_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_26_2_address0 = grp_FIRE3_fu_2067_WEIGHT1_26_2_address0.read();
        } else {
            WEIGHT1_26_2_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_26_2_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_26_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_26_2_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_26_2_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_26_2_ce0 = grp_FIRE3_fu_2067_WEIGHT1_26_2_ce0.read();
        } else {
            WEIGHT1_26_2_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_26_2_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_26_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_26_2_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_26_2_we0.read();
    } else {
        WEIGHT1_26_2_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_26_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_26_3_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_26_3_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_26_3_address0 = grp_FIRE3_fu_2067_WEIGHT1_26_3_address0.read();
        } else {
            WEIGHT1_26_3_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_26_3_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_26_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_26_3_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_26_3_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_26_3_ce0 = grp_FIRE3_fu_2067_WEIGHT1_26_3_ce0.read();
        } else {
            WEIGHT1_26_3_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_26_3_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_26_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_26_3_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_26_3_we0.read();
    } else {
        WEIGHT1_26_3_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_26_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_26_4_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_26_4_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_26_4_address0 = grp_FIRE3_fu_2067_WEIGHT1_26_4_address0.read();
        } else {
            WEIGHT1_26_4_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_26_4_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_26_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_26_4_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_26_4_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_26_4_ce0 = grp_FIRE3_fu_2067_WEIGHT1_26_4_ce0.read();
        } else {
            WEIGHT1_26_4_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_26_4_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_26_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_26_4_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_26_4_we0.read();
    } else {
        WEIGHT1_26_4_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_26_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_26_5_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_26_5_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_26_5_address0 = grp_FIRE3_fu_2067_WEIGHT1_26_5_address0.read();
        } else {
            WEIGHT1_26_5_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_26_5_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_26_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_26_5_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_26_5_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_26_5_ce0 = grp_FIRE3_fu_2067_WEIGHT1_26_5_ce0.read();
        } else {
            WEIGHT1_26_5_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_26_5_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_26_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_26_5_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_26_5_we0.read();
    } else {
        WEIGHT1_26_5_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_26_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_26_6_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_26_6_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_26_6_address0 = grp_FIRE3_fu_2067_WEIGHT1_26_6_address0.read();
        } else {
            WEIGHT1_26_6_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_26_6_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_26_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_26_6_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_26_6_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_26_6_ce0 = grp_FIRE3_fu_2067_WEIGHT1_26_6_ce0.read();
        } else {
            WEIGHT1_26_6_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_26_6_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_26_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_26_6_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_26_6_we0.read();
    } else {
        WEIGHT1_26_6_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_27_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_27_0_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_27_0_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_27_0_address0 = grp_FIRE3_fu_2067_WEIGHT1_27_0_address0.read();
        } else {
            WEIGHT1_27_0_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_27_0_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_27_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_27_0_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_27_0_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_27_0_ce0 = grp_FIRE3_fu_2067_WEIGHT1_27_0_ce0.read();
        } else {
            WEIGHT1_27_0_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_27_0_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_27_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_27_0_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_27_0_we0.read();
    } else {
        WEIGHT1_27_0_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_27_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_27_1_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_27_1_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_27_1_address0 = grp_FIRE3_fu_2067_WEIGHT1_27_1_address0.read();
        } else {
            WEIGHT1_27_1_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_27_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_27_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_27_1_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_27_1_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_27_1_ce0 = grp_FIRE3_fu_2067_WEIGHT1_27_1_ce0.read();
        } else {
            WEIGHT1_27_1_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_27_1_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_27_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_27_1_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_27_1_we0.read();
    } else {
        WEIGHT1_27_1_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_27_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_27_2_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_27_2_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_27_2_address0 = grp_FIRE3_fu_2067_WEIGHT1_27_2_address0.read();
        } else {
            WEIGHT1_27_2_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_27_2_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_27_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_27_2_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_27_2_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_27_2_ce0 = grp_FIRE3_fu_2067_WEIGHT1_27_2_ce0.read();
        } else {
            WEIGHT1_27_2_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_27_2_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_27_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_27_2_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_27_2_we0.read();
    } else {
        WEIGHT1_27_2_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_27_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_27_3_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_27_3_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_27_3_address0 = grp_FIRE3_fu_2067_WEIGHT1_27_3_address0.read();
        } else {
            WEIGHT1_27_3_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_27_3_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_27_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_27_3_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_27_3_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_27_3_ce0 = grp_FIRE3_fu_2067_WEIGHT1_27_3_ce0.read();
        } else {
            WEIGHT1_27_3_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_27_3_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_27_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_27_3_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_27_3_we0.read();
    } else {
        WEIGHT1_27_3_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_27_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_27_4_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_27_4_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_27_4_address0 = grp_FIRE3_fu_2067_WEIGHT1_27_4_address0.read();
        } else {
            WEIGHT1_27_4_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_27_4_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_27_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_27_4_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_27_4_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_27_4_ce0 = grp_FIRE3_fu_2067_WEIGHT1_27_4_ce0.read();
        } else {
            WEIGHT1_27_4_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_27_4_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_27_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_27_4_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_27_4_we0.read();
    } else {
        WEIGHT1_27_4_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_27_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_27_5_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_27_5_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_27_5_address0 = grp_FIRE3_fu_2067_WEIGHT1_27_5_address0.read();
        } else {
            WEIGHT1_27_5_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_27_5_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_27_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_27_5_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_27_5_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_27_5_ce0 = grp_FIRE3_fu_2067_WEIGHT1_27_5_ce0.read();
        } else {
            WEIGHT1_27_5_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_27_5_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_27_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_27_5_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_27_5_we0.read();
    } else {
        WEIGHT1_27_5_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_27_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_27_6_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_27_6_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_27_6_address0 = grp_FIRE3_fu_2067_WEIGHT1_27_6_address0.read();
        } else {
            WEIGHT1_27_6_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_27_6_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_27_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_27_6_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_27_6_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_27_6_ce0 = grp_FIRE3_fu_2067_WEIGHT1_27_6_ce0.read();
        } else {
            WEIGHT1_27_6_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_27_6_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_27_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_27_6_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_27_6_we0.read();
    } else {
        WEIGHT1_27_6_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_28_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_28_0_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_28_0_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_28_0_address0 = grp_FIRE3_fu_2067_WEIGHT1_28_0_address0.read();
        } else {
            WEIGHT1_28_0_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_28_0_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_28_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_28_0_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_28_0_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_28_0_ce0 = grp_FIRE3_fu_2067_WEIGHT1_28_0_ce0.read();
        } else {
            WEIGHT1_28_0_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_28_0_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_28_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_28_0_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_28_0_we0.read();
    } else {
        WEIGHT1_28_0_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_28_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_28_1_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_28_1_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_28_1_address0 = grp_FIRE3_fu_2067_WEIGHT1_28_1_address0.read();
        } else {
            WEIGHT1_28_1_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_28_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_28_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_28_1_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_28_1_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_28_1_ce0 = grp_FIRE3_fu_2067_WEIGHT1_28_1_ce0.read();
        } else {
            WEIGHT1_28_1_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_28_1_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_28_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_28_1_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_28_1_we0.read();
    } else {
        WEIGHT1_28_1_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_28_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_28_2_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_28_2_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_28_2_address0 = grp_FIRE3_fu_2067_WEIGHT1_28_2_address0.read();
        } else {
            WEIGHT1_28_2_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_28_2_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_28_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_28_2_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_28_2_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_28_2_ce0 = grp_FIRE3_fu_2067_WEIGHT1_28_2_ce0.read();
        } else {
            WEIGHT1_28_2_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_28_2_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_28_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_28_2_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_28_2_we0.read();
    } else {
        WEIGHT1_28_2_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_28_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_28_3_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_28_3_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_28_3_address0 = grp_FIRE3_fu_2067_WEIGHT1_28_3_address0.read();
        } else {
            WEIGHT1_28_3_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_28_3_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_28_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_28_3_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_28_3_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_28_3_ce0 = grp_FIRE3_fu_2067_WEIGHT1_28_3_ce0.read();
        } else {
            WEIGHT1_28_3_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_28_3_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_28_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_28_3_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_28_3_we0.read();
    } else {
        WEIGHT1_28_3_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_28_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_28_4_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_28_4_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_28_4_address0 = grp_FIRE3_fu_2067_WEIGHT1_28_4_address0.read();
        } else {
            WEIGHT1_28_4_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_28_4_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_28_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_28_4_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_28_4_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_28_4_ce0 = grp_FIRE3_fu_2067_WEIGHT1_28_4_ce0.read();
        } else {
            WEIGHT1_28_4_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_28_4_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_28_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_28_4_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_28_4_we0.read();
    } else {
        WEIGHT1_28_4_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_28_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_28_5_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_28_5_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_28_5_address0 = grp_FIRE3_fu_2067_WEIGHT1_28_5_address0.read();
        } else {
            WEIGHT1_28_5_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_28_5_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_28_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_28_5_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_28_5_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_28_5_ce0 = grp_FIRE3_fu_2067_WEIGHT1_28_5_ce0.read();
        } else {
            WEIGHT1_28_5_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_28_5_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_28_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_28_5_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_28_5_we0.read();
    } else {
        WEIGHT1_28_5_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_28_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_28_6_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_28_6_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_28_6_address0 = grp_FIRE3_fu_2067_WEIGHT1_28_6_address0.read();
        } else {
            WEIGHT1_28_6_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_28_6_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_28_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_28_6_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_28_6_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_28_6_ce0 = grp_FIRE3_fu_2067_WEIGHT1_28_6_ce0.read();
        } else {
            WEIGHT1_28_6_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_28_6_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_28_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_28_6_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_28_6_we0.read();
    } else {
        WEIGHT1_28_6_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_29_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_29_0_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_29_0_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_29_0_address0 = grp_FIRE3_fu_2067_WEIGHT1_29_0_address0.read();
        } else {
            WEIGHT1_29_0_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_29_0_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_29_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_29_0_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_29_0_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_29_0_ce0 = grp_FIRE3_fu_2067_WEIGHT1_29_0_ce0.read();
        } else {
            WEIGHT1_29_0_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_29_0_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_29_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_29_0_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_29_0_we0.read();
    } else {
        WEIGHT1_29_0_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_29_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_29_1_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_29_1_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_29_1_address0 = grp_FIRE3_fu_2067_WEIGHT1_29_1_address0.read();
        } else {
            WEIGHT1_29_1_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_29_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_29_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_29_1_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_29_1_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_29_1_ce0 = grp_FIRE3_fu_2067_WEIGHT1_29_1_ce0.read();
        } else {
            WEIGHT1_29_1_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_29_1_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_29_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_29_1_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_29_1_we0.read();
    } else {
        WEIGHT1_29_1_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_29_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_29_2_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_29_2_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_29_2_address0 = grp_FIRE3_fu_2067_WEIGHT1_29_2_address0.read();
        } else {
            WEIGHT1_29_2_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_29_2_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_29_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_29_2_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_29_2_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_29_2_ce0 = grp_FIRE3_fu_2067_WEIGHT1_29_2_ce0.read();
        } else {
            WEIGHT1_29_2_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_29_2_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_29_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_29_2_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_29_2_we0.read();
    } else {
        WEIGHT1_29_2_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_29_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_29_3_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_29_3_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_29_3_address0 = grp_FIRE3_fu_2067_WEIGHT1_29_3_address0.read();
        } else {
            WEIGHT1_29_3_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_29_3_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_29_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_29_3_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_29_3_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_29_3_ce0 = grp_FIRE3_fu_2067_WEIGHT1_29_3_ce0.read();
        } else {
            WEIGHT1_29_3_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_29_3_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_29_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_29_3_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_29_3_we0.read();
    } else {
        WEIGHT1_29_3_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_29_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_29_4_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_29_4_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_29_4_address0 = grp_FIRE3_fu_2067_WEIGHT1_29_4_address0.read();
        } else {
            WEIGHT1_29_4_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_29_4_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_29_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_29_4_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_29_4_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_29_4_ce0 = grp_FIRE3_fu_2067_WEIGHT1_29_4_ce0.read();
        } else {
            WEIGHT1_29_4_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_29_4_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_29_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_29_4_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_29_4_we0.read();
    } else {
        WEIGHT1_29_4_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_29_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_29_5_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_29_5_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_29_5_address0 = grp_FIRE3_fu_2067_WEIGHT1_29_5_address0.read();
        } else {
            WEIGHT1_29_5_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_29_5_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_29_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_29_5_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_29_5_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_29_5_ce0 = grp_FIRE3_fu_2067_WEIGHT1_29_5_ce0.read();
        } else {
            WEIGHT1_29_5_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_29_5_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_29_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_29_5_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_29_5_we0.read();
    } else {
        WEIGHT1_29_5_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_29_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_29_6_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_29_6_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_29_6_address0 = grp_FIRE3_fu_2067_WEIGHT1_29_6_address0.read();
        } else {
            WEIGHT1_29_6_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_29_6_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_29_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_29_6_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_29_6_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_29_6_ce0 = grp_FIRE3_fu_2067_WEIGHT1_29_6_ce0.read();
        } else {
            WEIGHT1_29_6_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_29_6_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_29_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_29_6_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_29_6_we0.read();
    } else {
        WEIGHT1_29_6_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_2_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_2_0_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_2_0_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_2_0_address0 = grp_FIRE3_fu_2067_WEIGHT1_2_0_address0.read();
        } else {
            WEIGHT1_2_0_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_2_0_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_2_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_2_0_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_2_0_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_2_0_ce0 = grp_FIRE3_fu_2067_WEIGHT1_2_0_ce0.read();
        } else {
            WEIGHT1_2_0_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_2_0_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_2_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_2_0_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_2_0_we0.read();
    } else {
        WEIGHT1_2_0_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_2_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_2_1_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_2_1_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_2_1_address0 = grp_FIRE3_fu_2067_WEIGHT1_2_1_address0.read();
        } else {
            WEIGHT1_2_1_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_2_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_2_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_2_1_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_2_1_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_2_1_ce0 = grp_FIRE3_fu_2067_WEIGHT1_2_1_ce0.read();
        } else {
            WEIGHT1_2_1_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_2_1_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_2_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_2_1_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_2_1_we0.read();
    } else {
        WEIGHT1_2_1_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_2_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_2_2_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_2_2_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_2_2_address0 = grp_FIRE3_fu_2067_WEIGHT1_2_2_address0.read();
        } else {
            WEIGHT1_2_2_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_2_2_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_2_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_2_2_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_2_2_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_2_2_ce0 = grp_FIRE3_fu_2067_WEIGHT1_2_2_ce0.read();
        } else {
            WEIGHT1_2_2_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_2_2_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_2_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_2_2_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_2_2_we0.read();
    } else {
        WEIGHT1_2_2_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_2_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_2_3_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_2_3_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_2_3_address0 = grp_FIRE3_fu_2067_WEIGHT1_2_3_address0.read();
        } else {
            WEIGHT1_2_3_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_2_3_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_2_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_2_3_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_2_3_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_2_3_ce0 = grp_FIRE3_fu_2067_WEIGHT1_2_3_ce0.read();
        } else {
            WEIGHT1_2_3_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_2_3_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_2_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_2_3_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_2_3_we0.read();
    } else {
        WEIGHT1_2_3_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_2_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_2_4_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_2_4_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_2_4_address0 = grp_FIRE3_fu_2067_WEIGHT1_2_4_address0.read();
        } else {
            WEIGHT1_2_4_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_2_4_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_2_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_2_4_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_2_4_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_2_4_ce0 = grp_FIRE3_fu_2067_WEIGHT1_2_4_ce0.read();
        } else {
            WEIGHT1_2_4_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_2_4_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_2_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_2_4_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_2_4_we0.read();
    } else {
        WEIGHT1_2_4_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_2_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_2_5_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_2_5_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_2_5_address0 = grp_FIRE3_fu_2067_WEIGHT1_2_5_address0.read();
        } else {
            WEIGHT1_2_5_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_2_5_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_2_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_2_5_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_2_5_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_2_5_ce0 = grp_FIRE3_fu_2067_WEIGHT1_2_5_ce0.read();
        } else {
            WEIGHT1_2_5_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_2_5_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_2_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_2_5_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_2_5_we0.read();
    } else {
        WEIGHT1_2_5_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_2_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_2_6_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_2_6_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_2_6_address0 = grp_FIRE3_fu_2067_WEIGHT1_2_6_address0.read();
        } else {
            WEIGHT1_2_6_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_2_6_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_2_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_2_6_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_2_6_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_2_6_ce0 = grp_FIRE3_fu_2067_WEIGHT1_2_6_ce0.read();
        } else {
            WEIGHT1_2_6_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_2_6_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_2_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_2_6_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_2_6_we0.read();
    } else {
        WEIGHT1_2_6_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_30_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_30_0_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_30_0_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_30_0_address0 = grp_FIRE3_fu_2067_WEIGHT1_30_0_address0.read();
        } else {
            WEIGHT1_30_0_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_30_0_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_30_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_30_0_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_30_0_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_30_0_ce0 = grp_FIRE3_fu_2067_WEIGHT1_30_0_ce0.read();
        } else {
            WEIGHT1_30_0_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_30_0_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_30_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_30_0_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_30_0_we0.read();
    } else {
        WEIGHT1_30_0_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_30_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_30_1_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_30_1_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_30_1_address0 = grp_FIRE3_fu_2067_WEIGHT1_30_1_address0.read();
        } else {
            WEIGHT1_30_1_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_30_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_30_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_30_1_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_30_1_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_30_1_ce0 = grp_FIRE3_fu_2067_WEIGHT1_30_1_ce0.read();
        } else {
            WEIGHT1_30_1_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_30_1_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_30_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_30_1_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_30_1_we0.read();
    } else {
        WEIGHT1_30_1_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_30_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_30_2_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_30_2_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_30_2_address0 = grp_FIRE3_fu_2067_WEIGHT1_30_2_address0.read();
        } else {
            WEIGHT1_30_2_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_30_2_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_30_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_30_2_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_30_2_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_30_2_ce0 = grp_FIRE3_fu_2067_WEIGHT1_30_2_ce0.read();
        } else {
            WEIGHT1_30_2_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_30_2_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_30_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_30_2_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_30_2_we0.read();
    } else {
        WEIGHT1_30_2_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_30_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_30_3_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_30_3_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_30_3_address0 = grp_FIRE3_fu_2067_WEIGHT1_30_3_address0.read();
        } else {
            WEIGHT1_30_3_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_30_3_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_30_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_30_3_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_30_3_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_30_3_ce0 = grp_FIRE3_fu_2067_WEIGHT1_30_3_ce0.read();
        } else {
            WEIGHT1_30_3_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_30_3_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_30_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_30_3_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_30_3_we0.read();
    } else {
        WEIGHT1_30_3_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_30_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_30_4_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_30_4_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_30_4_address0 = grp_FIRE3_fu_2067_WEIGHT1_30_4_address0.read();
        } else {
            WEIGHT1_30_4_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_30_4_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_30_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_30_4_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_30_4_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_30_4_ce0 = grp_FIRE3_fu_2067_WEIGHT1_30_4_ce0.read();
        } else {
            WEIGHT1_30_4_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_30_4_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_30_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_30_4_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_30_4_we0.read();
    } else {
        WEIGHT1_30_4_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_30_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_30_5_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_30_5_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_30_5_address0 = grp_FIRE3_fu_2067_WEIGHT1_30_5_address0.read();
        } else {
            WEIGHT1_30_5_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_30_5_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_30_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_30_5_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_30_5_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_30_5_ce0 = grp_FIRE3_fu_2067_WEIGHT1_30_5_ce0.read();
        } else {
            WEIGHT1_30_5_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_30_5_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_30_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_30_5_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_30_5_we0.read();
    } else {
        WEIGHT1_30_5_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_30_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_30_6_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_30_6_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_30_6_address0 = grp_FIRE3_fu_2067_WEIGHT1_30_6_address0.read();
        } else {
            WEIGHT1_30_6_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_30_6_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_30_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_30_6_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_30_6_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_30_6_ce0 = grp_FIRE3_fu_2067_WEIGHT1_30_6_ce0.read();
        } else {
            WEIGHT1_30_6_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_30_6_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_30_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_30_6_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_30_6_we0.read();
    } else {
        WEIGHT1_30_6_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_31_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_31_0_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_31_0_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_31_0_address0 = grp_FIRE3_fu_2067_WEIGHT1_31_0_address0.read();
        } else {
            WEIGHT1_31_0_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_31_0_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_31_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_31_0_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_31_0_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_31_0_ce0 = grp_FIRE3_fu_2067_WEIGHT1_31_0_ce0.read();
        } else {
            WEIGHT1_31_0_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_31_0_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_31_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_31_0_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_31_0_we0.read();
    } else {
        WEIGHT1_31_0_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_31_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_31_1_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_31_1_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_31_1_address0 = grp_FIRE3_fu_2067_WEIGHT1_31_1_address0.read();
        } else {
            WEIGHT1_31_1_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_31_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_31_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_31_1_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_31_1_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_31_1_ce0 = grp_FIRE3_fu_2067_WEIGHT1_31_1_ce0.read();
        } else {
            WEIGHT1_31_1_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_31_1_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_31_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_31_1_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_31_1_we0.read();
    } else {
        WEIGHT1_31_1_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_31_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_31_2_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_31_2_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_31_2_address0 = grp_FIRE3_fu_2067_WEIGHT1_31_2_address0.read();
        } else {
            WEIGHT1_31_2_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_31_2_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_31_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_31_2_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_31_2_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_31_2_ce0 = grp_FIRE3_fu_2067_WEIGHT1_31_2_ce0.read();
        } else {
            WEIGHT1_31_2_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_31_2_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_31_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_31_2_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_31_2_we0.read();
    } else {
        WEIGHT1_31_2_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_31_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_31_3_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_31_3_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_31_3_address0 = grp_FIRE3_fu_2067_WEIGHT1_31_3_address0.read();
        } else {
            WEIGHT1_31_3_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_31_3_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_31_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_31_3_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_31_3_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_31_3_ce0 = grp_FIRE3_fu_2067_WEIGHT1_31_3_ce0.read();
        } else {
            WEIGHT1_31_3_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_31_3_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_31_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_31_3_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_31_3_we0.read();
    } else {
        WEIGHT1_31_3_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_31_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_31_4_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_31_4_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_31_4_address0 = grp_FIRE3_fu_2067_WEIGHT1_31_4_address0.read();
        } else {
            WEIGHT1_31_4_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_31_4_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_31_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_31_4_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_31_4_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_31_4_ce0 = grp_FIRE3_fu_2067_WEIGHT1_31_4_ce0.read();
        } else {
            WEIGHT1_31_4_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_31_4_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_31_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_31_4_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_31_4_we0.read();
    } else {
        WEIGHT1_31_4_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_31_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_31_5_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_31_5_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_31_5_address0 = grp_FIRE3_fu_2067_WEIGHT1_31_5_address0.read();
        } else {
            WEIGHT1_31_5_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_31_5_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_31_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_31_5_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_31_5_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_31_5_ce0 = grp_FIRE3_fu_2067_WEIGHT1_31_5_ce0.read();
        } else {
            WEIGHT1_31_5_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_31_5_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_31_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_31_5_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_31_5_we0.read();
    } else {
        WEIGHT1_31_5_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_31_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_31_6_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_31_6_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_31_6_address0 = grp_FIRE3_fu_2067_WEIGHT1_31_6_address0.read();
        } else {
            WEIGHT1_31_6_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_31_6_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_31_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_31_6_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_31_6_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_31_6_ce0 = grp_FIRE3_fu_2067_WEIGHT1_31_6_ce0.read();
        } else {
            WEIGHT1_31_6_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_31_6_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_31_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_31_6_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_31_6_we0.read();
    } else {
        WEIGHT1_31_6_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_32_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_32_0_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_32_0_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_32_0_address0 = grp_FIRE3_fu_2067_WEIGHT1_32_0_address0.read();
        } else {
            WEIGHT1_32_0_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_32_0_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_32_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_32_0_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_32_0_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_32_0_ce0 = grp_FIRE3_fu_2067_WEIGHT1_32_0_ce0.read();
        } else {
            WEIGHT1_32_0_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_32_0_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_32_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_32_0_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_32_0_we0.read();
    } else {
        WEIGHT1_32_0_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_32_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_32_1_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_32_1_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_32_1_address0 = grp_FIRE3_fu_2067_WEIGHT1_32_1_address0.read();
        } else {
            WEIGHT1_32_1_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_32_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_32_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_32_1_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_32_1_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_32_1_ce0 = grp_FIRE3_fu_2067_WEIGHT1_32_1_ce0.read();
        } else {
            WEIGHT1_32_1_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_32_1_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_32_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_32_1_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_32_1_we0.read();
    } else {
        WEIGHT1_32_1_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_32_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_32_2_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_32_2_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_32_2_address0 = grp_FIRE3_fu_2067_WEIGHT1_32_2_address0.read();
        } else {
            WEIGHT1_32_2_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_32_2_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_32_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_32_2_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_32_2_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_32_2_ce0 = grp_FIRE3_fu_2067_WEIGHT1_32_2_ce0.read();
        } else {
            WEIGHT1_32_2_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_32_2_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_32_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_32_2_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_32_2_we0.read();
    } else {
        WEIGHT1_32_2_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_32_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_32_3_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_32_3_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_32_3_address0 = grp_FIRE3_fu_2067_WEIGHT1_32_3_address0.read();
        } else {
            WEIGHT1_32_3_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_32_3_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_32_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_32_3_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_32_3_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_32_3_ce0 = grp_FIRE3_fu_2067_WEIGHT1_32_3_ce0.read();
        } else {
            WEIGHT1_32_3_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_32_3_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_32_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_32_3_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_32_3_we0.read();
    } else {
        WEIGHT1_32_3_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_32_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_32_4_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_32_4_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_32_4_address0 = grp_FIRE3_fu_2067_WEIGHT1_32_4_address0.read();
        } else {
            WEIGHT1_32_4_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_32_4_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_32_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_32_4_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_32_4_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_32_4_ce0 = grp_FIRE3_fu_2067_WEIGHT1_32_4_ce0.read();
        } else {
            WEIGHT1_32_4_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_32_4_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_32_4_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_32_4_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_32_4_we0.read();
    } else {
        WEIGHT1_32_4_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_32_5_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_32_5_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_32_5_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_32_5_address0 = grp_FIRE3_fu_2067_WEIGHT1_32_5_address0.read();
        } else {
            WEIGHT1_32_5_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_32_5_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_32_5_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_32_5_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_32_5_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_32_5_ce0 = grp_FIRE3_fu_2067_WEIGHT1_32_5_ce0.read();
        } else {
            WEIGHT1_32_5_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_32_5_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_32_5_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_32_5_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_32_5_we0.read();
    } else {
        WEIGHT1_32_5_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_32_6_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_32_6_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_32_6_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_32_6_address0 = grp_FIRE3_fu_2067_WEIGHT1_32_6_address0.read();
        } else {
            WEIGHT1_32_6_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_32_6_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_32_6_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_32_6_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_32_6_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_32_6_ce0 = grp_FIRE3_fu_2067_WEIGHT1_32_6_ce0.read();
        } else {
            WEIGHT1_32_6_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_32_6_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_32_6_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_32_6_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_32_6_we0.read();
    } else {
        WEIGHT1_32_6_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_33_0_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_33_0_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_33_0_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_33_0_address0 = grp_FIRE3_fu_2067_WEIGHT1_33_0_address0.read();
        } else {
            WEIGHT1_33_0_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_33_0_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_33_0_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_33_0_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_33_0_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_33_0_ce0 = grp_FIRE3_fu_2067_WEIGHT1_33_0_ce0.read();
        } else {
            WEIGHT1_33_0_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_33_0_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_33_0_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_33_0_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_33_0_we0.read();
    } else {
        WEIGHT1_33_0_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_33_1_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_33_1_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_33_1_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_33_1_address0 = grp_FIRE3_fu_2067_WEIGHT1_33_1_address0.read();
        } else {
            WEIGHT1_33_1_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_33_1_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_33_1_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_33_1_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_33_1_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_33_1_ce0 = grp_FIRE3_fu_2067_WEIGHT1_33_1_ce0.read();
        } else {
            WEIGHT1_33_1_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_33_1_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_33_1_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_33_1_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_33_1_we0.read();
    } else {
        WEIGHT1_33_1_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_33_2_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_33_2_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_33_2_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_33_2_address0 = grp_FIRE3_fu_2067_WEIGHT1_33_2_address0.read();
        } else {
            WEIGHT1_33_2_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_33_2_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_33_2_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_33_2_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_33_2_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_33_2_ce0 = grp_FIRE3_fu_2067_WEIGHT1_33_2_ce0.read();
        } else {
            WEIGHT1_33_2_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_33_2_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_33_2_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_33_2_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_33_2_we0.read();
    } else {
        WEIGHT1_33_2_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_33_3_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_33_3_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_33_3_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_33_3_address0 = grp_FIRE3_fu_2067_WEIGHT1_33_3_address0.read();
        } else {
            WEIGHT1_33_3_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_33_3_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_33_3_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_33_3_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_33_3_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_33_3_ce0 = grp_FIRE3_fu_2067_WEIGHT1_33_3_ce0.read();
        } else {
            WEIGHT1_33_3_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_33_3_ce0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_33_3_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0))) {
        WEIGHT1_33_3_we0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_33_3_we0.read();
    } else {
        WEIGHT1_33_3_we0 = ap_const_logic_0;
    }
}

void Load_Fire::thread_WEIGHT1_33_4_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_33_4_address0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_33_4_address0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_33_4_address0 = grp_FIRE3_fu_2067_WEIGHT1_33_4_address0.read();
        } else {
            WEIGHT1_33_4_address0 =  (sc_lv<7>) ("XXXXXXX");
        }
    } else {
        WEIGHT1_33_4_address0 =  (sc_lv<7>) ("XXXXXXX");
    }
}

void Load_Fire::thread_WEIGHT1_33_4_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_0)) {
            WEIGHT1_33_4_ce0 = grp_LOAD_WEIGHT_DMA_fu_3569_WEIGHT1_33_4_ce0.read();
        } else if (esl_seteq<1,1,1>(tmp_23_reg_5007.read(), ap_const_lv1_1)) {
            WEIGHT1_33_4_ce0 = grp_FIRE3_fu_2067_WEIGHT1_33_4_ce0.read();
        } else {
            WEIGHT1_33_4_ce0 = ap_const_logic_0;
        }
    } else {
        WEIGHT1_33_4_ce0 = ap_const_logic_0;
    }
}

}

