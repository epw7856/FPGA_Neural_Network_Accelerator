#include "top.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void top::thread_ap_clk_no_reset_() {
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        grp_Load_Fire_fu_2190_ap_start_reg = ap_const_logic_0;
    } else {
        if (((esl_seteq<1,1,1>(tmp_fu_4437_p1.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
              esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1)) || 
             (esl_seteq<1,1,1>(tmp_fu_4437_p1.read(), ap_const_lv1_1) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
              esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1)))) {
            grp_Load_Fire_fu_2190_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_Load_Fire_fu_2190_ap_ready.read())) {
            grp_Load_Fire_fu_2190_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        grp_OFM_STORE_fu_4226_ap_start_reg = ap_const_logic_0;
    } else {
        if (((esl_seteq<1,1,1>(tmp_fu_4437_p1.read(), ap_const_lv1_0) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
              esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1)) || 
             (esl_seteq<1,1,1>(tmp_fu_4437_p1.read(), ap_const_lv1_1) && 
              esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
              esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1)))) {
            grp_OFM_STORE_fu_4226_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_OFM_STORE_fu_4226_ap_ready.read())) {
            grp_OFM_STORE_fu_4226_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        input_dma_B_V_data_0_sel_rd = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, input_dma_B_V_data_0_ack_out.read()) && 
             esl_seteq<1,1,1>(ap_const_logic_1, input_dma_B_V_data_0_vld_out.read()))) {
            input_dma_B_V_data_0_sel_rd =  (sc_logic) (~input_dma_B_V_data_0_sel_rd.read());
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        input_dma_B_V_data_0_sel_wr = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, input_dma_B_V_data_0_vld_in.read()) && 
             esl_seteq<1,1,1>(ap_const_logic_1, input_dma_B_V_data_0_ack_in.read()))) {
            input_dma_B_V_data_0_sel_wr =  (sc_logic) (~input_dma_B_V_data_0_sel_wr.read());
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        input_dma_B_V_data_0_state = ap_const_lv2_0;
    } else {
        if (((esl_seteq<1,1,1>(ap_const_logic_0, input_dma_B_V_data_0_vld_in.read()) && 
              esl_seteq<1,1,1>(ap_const_logic_1, input_dma_B_V_data_0_ack_out.read()) && 
              esl_seteq<1,2,2>(ap_const_lv2_3, input_dma_B_V_data_0_state.read())) || 
             (esl_seteq<1,1,1>(ap_const_logic_0, input_dma_B_V_data_0_vld_in.read()) && 
              esl_seteq<1,2,2>(ap_const_lv2_2, input_dma_B_V_data_0_state.read())))) {
            input_dma_B_V_data_0_state = ap_const_lv2_2;
        } else if (((esl_seteq<1,1,1>(ap_const_logic_1, input_dma_B_V_data_0_vld_in.read()) && 
                     esl_seteq<1,1,1>(ap_const_logic_0, input_dma_B_V_data_0_ack_out.read()) && 
                     esl_seteq<1,2,2>(ap_const_lv2_3, input_dma_B_V_data_0_state.read())) || 
                    (esl_seteq<1,1,1>(ap_const_logic_0, input_dma_B_V_data_0_ack_out.read()) && 
                     esl_seteq<1,2,2>(ap_const_lv2_1, input_dma_B_V_data_0_state.read())))) {
            input_dma_B_V_data_0_state = ap_const_lv2_1;
        } else if (((esl_seteq<1,1,1>(ap_const_logic_1, input_dma_B_V_data_0_vld_in.read()) && 
                     esl_seteq<1,2,2>(ap_const_lv2_2, input_dma_B_V_data_0_state.read())) || 
                    (esl_seteq<1,1,1>(ap_const_logic_1, input_dma_B_V_data_0_ack_out.read()) && 
                     esl_seteq<1,2,2>(ap_const_lv2_1, input_dma_B_V_data_0_state.read())) || 
                    (esl_seteq<1,2,2>(ap_const_lv2_3, input_dma_B_V_data_0_state.read()) && 
                     !(esl_seteq<1,1,1>(ap_const_logic_1, input_dma_B_V_data_0_vld_in.read()) && esl_seteq<1,1,1>(ap_const_logic_0, input_dma_B_V_data_0_ack_out.read())) && 
                     !(esl_seteq<1,1,1>(ap_const_logic_0, input_dma_B_V_data_0_vld_in.read()) && esl_seteq<1,1,1>(ap_const_logic_1, input_dma_B_V_data_0_ack_out.read()))))) {
            input_dma_B_V_data_0_state = ap_const_lv2_3;
        } else {
            input_dma_B_V_data_0_state = ap_const_lv2_2;
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        input_dma_B_V_last_0_sel_rd = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, input_dma_B_V_last_0_ack_out.read()) && 
             esl_seteq<1,1,1>(ap_const_logic_1, input_dma_B_V_last_0_vld_out.read()))) {
            input_dma_B_V_last_0_sel_rd =  (sc_logic) (~input_dma_B_V_last_0_sel_rd.read());
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        input_dma_B_V_last_0_sel_wr = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, input_dma_B_V_last_0_vld_in.read()) && 
             esl_seteq<1,1,1>(ap_const_logic_1, input_dma_B_V_last_0_ack_in.read()))) {
            input_dma_B_V_last_0_sel_wr =  (sc_logic) (~input_dma_B_V_last_0_sel_wr.read());
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        input_dma_B_V_last_0_state = ap_const_lv2_0;
    } else {
        if (((esl_seteq<1,1,1>(ap_const_logic_0, input_dma_B_V_last_0_vld_in.read()) && 
              esl_seteq<1,1,1>(ap_const_logic_1, input_dma_B_V_last_0_ack_out.read()) && 
              esl_seteq<1,2,2>(ap_const_lv2_3, input_dma_B_V_last_0_state.read())) || 
             (esl_seteq<1,1,1>(ap_const_logic_0, input_dma_B_V_last_0_vld_in.read()) && 
              esl_seteq<1,2,2>(ap_const_lv2_2, input_dma_B_V_last_0_state.read())))) {
            input_dma_B_V_last_0_state = ap_const_lv2_2;
        } else if (((esl_seteq<1,1,1>(ap_const_logic_1, input_dma_B_V_last_0_vld_in.read()) && 
                     esl_seteq<1,1,1>(ap_const_logic_0, input_dma_B_V_last_0_ack_out.read()) && 
                     esl_seteq<1,2,2>(ap_const_lv2_3, input_dma_B_V_last_0_state.read())) || 
                    (esl_seteq<1,1,1>(ap_const_logic_0, input_dma_B_V_last_0_ack_out.read()) && 
                     esl_seteq<1,2,2>(ap_const_lv2_1, input_dma_B_V_last_0_state.read())))) {
            input_dma_B_V_last_0_state = ap_const_lv2_1;
        } else if (((esl_seteq<1,1,1>(ap_const_logic_1, input_dma_B_V_last_0_vld_in.read()) && 
                     esl_seteq<1,2,2>(ap_const_lv2_2, input_dma_B_V_last_0_state.read())) || 
                    (esl_seteq<1,1,1>(ap_const_logic_1, input_dma_B_V_last_0_ack_out.read()) && 
                     esl_seteq<1,2,2>(ap_const_lv2_1, input_dma_B_V_last_0_state.read())) || 
                    (esl_seteq<1,2,2>(ap_const_lv2_3, input_dma_B_V_last_0_state.read()) && 
                     !(esl_seteq<1,1,1>(ap_const_logic_1, input_dma_B_V_last_0_vld_in.read()) && esl_seteq<1,1,1>(ap_const_logic_0, input_dma_B_V_last_0_ack_out.read())) && 
                     !(esl_seteq<1,1,1>(ap_const_logic_0, input_dma_B_V_last_0_vld_in.read()) && esl_seteq<1,1,1>(ap_const_logic_1, input_dma_B_V_last_0_ack_out.read()))))) {
            input_dma_B_V_last_0_state = ap_const_lv2_3;
        } else {
            input_dma_B_V_last_0_state = ap_const_lv2_2;
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        input_dma_I_V_data_0_sel_rd = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, input_dma_I_V_data_0_ack_out.read()) && 
             esl_seteq<1,1,1>(ap_const_logic_1, input_dma_I_V_data_0_vld_out.read()))) {
            input_dma_I_V_data_0_sel_rd =  (sc_logic) (~input_dma_I_V_data_0_sel_rd.read());
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        input_dma_I_V_data_0_sel_wr = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, input_dma_I_V_data_0_vld_in.read()) && 
             esl_seteq<1,1,1>(ap_const_logic_1, input_dma_I_V_data_0_ack_in.read()))) {
            input_dma_I_V_data_0_sel_wr =  (sc_logic) (~input_dma_I_V_data_0_sel_wr.read());
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        input_dma_I_V_data_0_state = ap_const_lv2_0;
    } else {
        if (((esl_seteq<1,1,1>(ap_const_logic_0, input_dma_I_V_data_0_vld_in.read()) && 
              esl_seteq<1,1,1>(ap_const_logic_1, input_dma_I_V_data_0_ack_out.read()) && 
              esl_seteq<1,2,2>(ap_const_lv2_3, input_dma_I_V_data_0_state.read())) || 
             (esl_seteq<1,1,1>(ap_const_logic_0, input_dma_I_V_data_0_vld_in.read()) && 
              esl_seteq<1,2,2>(ap_const_lv2_2, input_dma_I_V_data_0_state.read())))) {
            input_dma_I_V_data_0_state = ap_const_lv2_2;
        } else if (((esl_seteq<1,1,1>(ap_const_logic_1, input_dma_I_V_data_0_vld_in.read()) && 
                     esl_seteq<1,1,1>(ap_const_logic_0, input_dma_I_V_data_0_ack_out.read()) && 
                     esl_seteq<1,2,2>(ap_const_lv2_3, input_dma_I_V_data_0_state.read())) || 
                    (esl_seteq<1,1,1>(ap_const_logic_0, input_dma_I_V_data_0_ack_out.read()) && 
                     esl_seteq<1,2,2>(ap_const_lv2_1, input_dma_I_V_data_0_state.read())))) {
            input_dma_I_V_data_0_state = ap_const_lv2_1;
        } else if (((esl_seteq<1,1,1>(ap_const_logic_1, input_dma_I_V_data_0_vld_in.read()) && 
                     esl_seteq<1,2,2>(ap_const_lv2_2, input_dma_I_V_data_0_state.read())) || 
                    (esl_seteq<1,1,1>(ap_const_logic_1, input_dma_I_V_data_0_ack_out.read()) && 
                     esl_seteq<1,2,2>(ap_const_lv2_1, input_dma_I_V_data_0_state.read())) || 
                    (esl_seteq<1,2,2>(ap_const_lv2_3, input_dma_I_V_data_0_state.read()) && 
                     !(esl_seteq<1,1,1>(ap_const_logic_1, input_dma_I_V_data_0_vld_in.read()) && esl_seteq<1,1,1>(ap_const_logic_0, input_dma_I_V_data_0_ack_out.read())) && 
                     !(esl_seteq<1,1,1>(ap_const_logic_0, input_dma_I_V_data_0_vld_in.read()) && esl_seteq<1,1,1>(ap_const_logic_1, input_dma_I_V_data_0_ack_out.read()))))) {
            input_dma_I_V_data_0_state = ap_const_lv2_3;
        } else {
            input_dma_I_V_data_0_state = ap_const_lv2_2;
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        input_dma_I_V_last_0_sel_rd = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, input_dma_I_V_last_0_ack_out.read()) && 
             esl_seteq<1,1,1>(ap_const_logic_1, input_dma_I_V_last_0_vld_out.read()))) {
            input_dma_I_V_last_0_sel_rd =  (sc_logic) (~input_dma_I_V_last_0_sel_rd.read());
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        input_dma_I_V_last_0_sel_wr = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, input_dma_I_V_last_0_vld_in.read()) && 
             esl_seteq<1,1,1>(ap_const_logic_1, input_dma_I_V_last_0_ack_in.read()))) {
            input_dma_I_V_last_0_sel_wr =  (sc_logic) (~input_dma_I_V_last_0_sel_wr.read());
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        input_dma_I_V_last_0_state = ap_const_lv2_0;
    } else {
        if (((esl_seteq<1,1,1>(ap_const_logic_0, input_dma_I_V_last_0_vld_in.read()) && 
              esl_seteq<1,1,1>(ap_const_logic_1, input_dma_I_V_last_0_ack_out.read()) && 
              esl_seteq<1,2,2>(ap_const_lv2_3, input_dma_I_V_last_0_state.read())) || 
             (esl_seteq<1,1,1>(ap_const_logic_0, input_dma_I_V_last_0_vld_in.read()) && 
              esl_seteq<1,2,2>(ap_const_lv2_2, input_dma_I_V_last_0_state.read())))) {
            input_dma_I_V_last_0_state = ap_const_lv2_2;
        } else if (((esl_seteq<1,1,1>(ap_const_logic_1, input_dma_I_V_last_0_vld_in.read()) && 
                     esl_seteq<1,1,1>(ap_const_logic_0, input_dma_I_V_last_0_ack_out.read()) && 
                     esl_seteq<1,2,2>(ap_const_lv2_3, input_dma_I_V_last_0_state.read())) || 
                    (esl_seteq<1,1,1>(ap_const_logic_0, input_dma_I_V_last_0_ack_out.read()) && 
                     esl_seteq<1,2,2>(ap_const_lv2_1, input_dma_I_V_last_0_state.read())))) {
            input_dma_I_V_last_0_state = ap_const_lv2_1;
        } else if (((esl_seteq<1,1,1>(ap_const_logic_1, input_dma_I_V_last_0_vld_in.read()) && 
                     esl_seteq<1,2,2>(ap_const_lv2_2, input_dma_I_V_last_0_state.read())) || 
                    (esl_seteq<1,1,1>(ap_const_logic_1, input_dma_I_V_last_0_ack_out.read()) && 
                     esl_seteq<1,2,2>(ap_const_lv2_1, input_dma_I_V_last_0_state.read())) || 
                    (esl_seteq<1,2,2>(ap_const_lv2_3, input_dma_I_V_last_0_state.read()) && 
                     !(esl_seteq<1,1,1>(ap_const_logic_1, input_dma_I_V_last_0_vld_in.read()) && esl_seteq<1,1,1>(ap_const_logic_0, input_dma_I_V_last_0_ack_out.read())) && 
                     !(esl_seteq<1,1,1>(ap_const_logic_0, input_dma_I_V_last_0_vld_in.read()) && esl_seteq<1,1,1>(ap_const_logic_1, input_dma_I_V_last_0_ack_out.read()))))) {
            input_dma_I_V_last_0_state = ap_const_lv2_3;
        } else {
            input_dma_I_V_last_0_state = ap_const_lv2_2;
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        input_dma_W_V_data_0_sel_rd = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, input_dma_W_V_data_0_ack_out.read()) && 
             esl_seteq<1,1,1>(ap_const_logic_1, input_dma_W_V_data_0_vld_out.read()))) {
            input_dma_W_V_data_0_sel_rd =  (sc_logic) (~input_dma_W_V_data_0_sel_rd.read());
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        input_dma_W_V_data_0_sel_wr = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, input_dma_W_V_data_0_vld_in.read()) && 
             esl_seteq<1,1,1>(ap_const_logic_1, input_dma_W_V_data_0_ack_in.read()))) {
            input_dma_W_V_data_0_sel_wr =  (sc_logic) (~input_dma_W_V_data_0_sel_wr.read());
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        input_dma_W_V_data_0_state = ap_const_lv2_0;
    } else {
        if (((esl_seteq<1,1,1>(ap_const_logic_0, input_dma_W_V_data_0_vld_in.read()) && 
              esl_seteq<1,1,1>(ap_const_logic_1, input_dma_W_V_data_0_ack_out.read()) && 
              esl_seteq<1,2,2>(input_dma_W_V_data_0_state.read(), ap_const_lv2_3)) || 
             (esl_seteq<1,1,1>(ap_const_logic_0, input_dma_W_V_data_0_vld_in.read()) && 
              esl_seteq<1,2,2>(input_dma_W_V_data_0_state.read(), ap_const_lv2_2)))) {
            input_dma_W_V_data_0_state = ap_const_lv2_2;
        } else if (((esl_seteq<1,1,1>(ap_const_logic_1, input_dma_W_V_data_0_vld_in.read()) && 
                     esl_seteq<1,1,1>(ap_const_logic_0, input_dma_W_V_data_0_ack_out.read()) && 
                     esl_seteq<1,2,2>(input_dma_W_V_data_0_state.read(), ap_const_lv2_3)) || 
                    (esl_seteq<1,1,1>(ap_const_logic_0, input_dma_W_V_data_0_ack_out.read()) && 
                     esl_seteq<1,2,2>(input_dma_W_V_data_0_state.read(), ap_const_lv2_1)))) {
            input_dma_W_V_data_0_state = ap_const_lv2_1;
        } else if (((esl_seteq<1,1,1>(ap_const_logic_1, input_dma_W_V_data_0_vld_in.read()) && 
                     esl_seteq<1,2,2>(input_dma_W_V_data_0_state.read(), ap_const_lv2_2)) || 
                    (esl_seteq<1,1,1>(ap_const_logic_1, input_dma_W_V_data_0_ack_out.read()) && 
                     esl_seteq<1,2,2>(input_dma_W_V_data_0_state.read(), ap_const_lv2_1)) || 
                    (esl_seteq<1,2,2>(input_dma_W_V_data_0_state.read(), ap_const_lv2_3) && 
                     !(esl_seteq<1,1,1>(ap_const_logic_1, input_dma_W_V_data_0_vld_in.read()) && esl_seteq<1,1,1>(ap_const_logic_0, input_dma_W_V_data_0_ack_out.read())) && 
                     !(esl_seteq<1,1,1>(ap_const_logic_0, input_dma_W_V_data_0_vld_in.read()) && esl_seteq<1,1,1>(ap_const_logic_1, input_dma_W_V_data_0_ack_out.read()))))) {
            input_dma_W_V_data_0_state = ap_const_lv2_3;
        } else {
            input_dma_W_V_data_0_state = ap_const_lv2_2;
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        input_dma_W_V_last_0_sel_rd = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, input_dma_W_V_last_0_ack_out.read()) && 
             esl_seteq<1,1,1>(ap_const_logic_1, input_dma_W_V_last_0_vld_out.read()))) {
            input_dma_W_V_last_0_sel_rd =  (sc_logic) (~input_dma_W_V_last_0_sel_rd.read());
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        input_dma_W_V_last_0_sel_wr = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, input_dma_W_V_last_0_vld_in.read()) && 
             esl_seteq<1,1,1>(ap_const_logic_1, input_dma_W_V_last_0_ack_in.read()))) {
            input_dma_W_V_last_0_sel_wr =  (sc_logic) (~input_dma_W_V_last_0_sel_wr.read());
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        input_dma_W_V_last_0_state = ap_const_lv2_0;
    } else {
        if (((esl_seteq<1,1,1>(ap_const_logic_0, input_dma_W_V_last_0_vld_in.read()) && 
              esl_seteq<1,1,1>(ap_const_logic_1, input_dma_W_V_last_0_ack_out.read()) && 
              esl_seteq<1,2,2>(ap_const_lv2_3, input_dma_W_V_last_0_state.read())) || 
             (esl_seteq<1,1,1>(ap_const_logic_0, input_dma_W_V_last_0_vld_in.read()) && 
              esl_seteq<1,2,2>(ap_const_lv2_2, input_dma_W_V_last_0_state.read())))) {
            input_dma_W_V_last_0_state = ap_const_lv2_2;
        } else if (((esl_seteq<1,1,1>(ap_const_logic_1, input_dma_W_V_last_0_vld_in.read()) && 
                     esl_seteq<1,1,1>(ap_const_logic_0, input_dma_W_V_last_0_ack_out.read()) && 
                     esl_seteq<1,2,2>(ap_const_lv2_3, input_dma_W_V_last_0_state.read())) || 
                    (esl_seteq<1,1,1>(ap_const_logic_0, input_dma_W_V_last_0_ack_out.read()) && 
                     esl_seteq<1,2,2>(ap_const_lv2_1, input_dma_W_V_last_0_state.read())))) {
            input_dma_W_V_last_0_state = ap_const_lv2_1;
        } else if (((esl_seteq<1,1,1>(ap_const_logic_1, input_dma_W_V_last_0_vld_in.read()) && 
                     esl_seteq<1,2,2>(ap_const_lv2_2, input_dma_W_V_last_0_state.read())) || 
                    (esl_seteq<1,1,1>(ap_const_logic_1, input_dma_W_V_last_0_ack_out.read()) && 
                     esl_seteq<1,2,2>(ap_const_lv2_1, input_dma_W_V_last_0_state.read())) || 
                    (esl_seteq<1,2,2>(ap_const_lv2_3, input_dma_W_V_last_0_state.read()) && 
                     !(esl_seteq<1,1,1>(ap_const_logic_1, input_dma_W_V_last_0_vld_in.read()) && esl_seteq<1,1,1>(ap_const_logic_0, input_dma_W_V_last_0_ack_out.read())) && 
                     !(esl_seteq<1,1,1>(ap_const_logic_0, input_dma_W_V_last_0_vld_in.read()) && esl_seteq<1,1,1>(ap_const_logic_1, input_dma_W_V_last_0_ack_out.read()))))) {
            input_dma_W_V_last_0_state = ap_const_lv2_3;
        } else {
            input_dma_W_V_last_0_state = ap_const_lv2_2;
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        output_dma_O_V_data_1_sel_rd = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, output_dma_O_V_data_1_ack_out.read()) && 
             esl_seteq<1,1,1>(ap_const_logic_1, output_dma_O_V_data_1_vld_out.read()))) {
            output_dma_O_V_data_1_sel_rd =  (sc_logic) (~output_dma_O_V_data_1_sel_rd.read());
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        output_dma_O_V_data_1_sel_wr = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, output_dma_O_V_data_1_vld_in.read()) && 
             esl_seteq<1,1,1>(ap_const_logic_1, output_dma_O_V_data_1_ack_in.read()))) {
            output_dma_O_V_data_1_sel_wr =  (sc_logic) (~output_dma_O_V_data_1_sel_wr.read());
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        output_dma_O_V_data_1_state = ap_const_lv2_0;
    } else {
        if (((esl_seteq<1,1,1>(ap_const_logic_0, output_dma_O_V_data_1_vld_in.read()) && 
              esl_seteq<1,1,1>(ap_const_logic_1, output_dma_O_V_data_1_ack_out.read()) && 
              esl_seteq<1,2,2>(ap_const_lv2_3, output_dma_O_V_data_1_state.read())) || 
             (esl_seteq<1,1,1>(ap_const_logic_0, output_dma_O_V_data_1_vld_in.read()) && 
              esl_seteq<1,2,2>(ap_const_lv2_2, output_dma_O_V_data_1_state.read())))) {
            output_dma_O_V_data_1_state = ap_const_lv2_2;
        } else if (((esl_seteq<1,1,1>(ap_const_logic_1, output_dma_O_V_data_1_vld_in.read()) && 
                     esl_seteq<1,1,1>(ap_const_logic_0, output_dma_O_V_data_1_ack_out.read()) && 
                     esl_seteq<1,2,2>(ap_const_lv2_3, output_dma_O_V_data_1_state.read())) || 
                    (esl_seteq<1,1,1>(ap_const_logic_0, output_dma_O_V_data_1_ack_out.read()) && 
                     esl_seteq<1,2,2>(ap_const_lv2_1, output_dma_O_V_data_1_state.read())))) {
            output_dma_O_V_data_1_state = ap_const_lv2_1;
        } else if (((esl_seteq<1,1,1>(ap_const_logic_1, output_dma_O_V_data_1_vld_in.read()) && 
                     esl_seteq<1,2,2>(ap_const_lv2_2, output_dma_O_V_data_1_state.read())) || 
                    (esl_seteq<1,1,1>(ap_const_logic_1, output_dma_O_V_data_1_ack_out.read()) && 
                     esl_seteq<1,2,2>(ap_const_lv2_1, output_dma_O_V_data_1_state.read())) || 
                    (esl_seteq<1,2,2>(ap_const_lv2_3, output_dma_O_V_data_1_state.read()) && 
                     !(esl_seteq<1,1,1>(ap_const_logic_1, output_dma_O_V_data_1_vld_in.read()) && esl_seteq<1,1,1>(ap_const_logic_0, output_dma_O_V_data_1_ack_out.read())) && 
                     !(esl_seteq<1,1,1>(ap_const_logic_0, output_dma_O_V_data_1_vld_in.read()) && esl_seteq<1,1,1>(ap_const_logic_1, output_dma_O_V_data_1_ack_out.read()))))) {
            output_dma_O_V_data_1_state = ap_const_lv2_3;
        } else {
            output_dma_O_V_data_1_state = ap_const_lv2_2;
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        output_dma_O_V_last_1_sel_rd = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, output_dma_O_V_last_1_ack_out.read()) && 
             esl_seteq<1,1,1>(ap_const_logic_1, output_dma_O_V_last_1_vld_out.read()))) {
            output_dma_O_V_last_1_sel_rd =  (sc_logic) (~output_dma_O_V_last_1_sel_rd.read());
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        output_dma_O_V_last_1_sel_wr = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, output_dma_O_V_last_1_vld_in.read()) && 
             esl_seteq<1,1,1>(ap_const_logic_1, output_dma_O_V_last_1_ack_in.read()))) {
            output_dma_O_V_last_1_sel_wr =  (sc_logic) (~output_dma_O_V_last_1_sel_wr.read());
        }
    }
    if ( ap_rst_n_inv.read() == ap_const_logic_1) {
        output_dma_O_V_last_1_state = ap_const_lv2_0;
    } else {
        if (((esl_seteq<1,1,1>(ap_const_logic_0, output_dma_O_V_last_1_vld_in.read()) && 
              esl_seteq<1,1,1>(ap_const_logic_1, output_dma_O_V_last_1_ack_out.read()) && 
              esl_seteq<1,2,2>(ap_const_lv2_3, output_dma_O_V_last_1_state.read())) || 
             (esl_seteq<1,1,1>(ap_const_logic_0, output_dma_O_V_last_1_vld_in.read()) && 
              esl_seteq<1,2,2>(ap_const_lv2_2, output_dma_O_V_last_1_state.read())))) {
            output_dma_O_V_last_1_state = ap_const_lv2_2;
        } else if (((esl_seteq<1,1,1>(ap_const_logic_1, output_dma_O_V_last_1_vld_in.read()) && 
                     esl_seteq<1,1,1>(ap_const_logic_0, output_dma_O_V_last_1_ack_out.read()) && 
                     esl_seteq<1,2,2>(ap_const_lv2_3, output_dma_O_V_last_1_state.read())) || 
                    (esl_seteq<1,1,1>(ap_const_logic_0, output_dma_O_V_last_1_ack_out.read()) && 
                     esl_seteq<1,2,2>(ap_const_lv2_1, output_dma_O_V_last_1_state.read())))) {
            output_dma_O_V_last_1_state = ap_const_lv2_1;
        } else if (((esl_seteq<1,1,1>(ap_const_logic_1, output_dma_O_V_last_1_vld_in.read()) && 
                     esl_seteq<1,2,2>(ap_const_lv2_2, output_dma_O_V_last_1_state.read())) || 
                    (esl_seteq<1,1,1>(ap_const_logic_1, output_dma_O_V_last_1_ack_out.read()) && 
                     esl_seteq<1,2,2>(ap_const_lv2_1, output_dma_O_V_last_1_state.read())) || 
                    (esl_seteq<1,2,2>(ap_const_lv2_3, output_dma_O_V_last_1_state.read()) && 
                     !(esl_seteq<1,1,1>(ap_const_logic_1, output_dma_O_V_last_1_vld_in.read()) && esl_seteq<1,1,1>(ap_const_logic_0, output_dma_O_V_last_1_ack_out.read())) && 
                     !(esl_seteq<1,1,1>(ap_const_logic_0, output_dma_O_V_last_1_vld_in.read()) && esl_seteq<1,1,1>(ap_const_logic_1, output_dma_O_V_last_1_ack_out.read()))))) {
            output_dma_O_V_last_1_state = ap_const_lv2_3;
        } else {
            output_dma_O_V_last_1_state = ap_const_lv2_2;
        }
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        N_read_reg_4458 = N.read();
        col_read_reg_4463 = col.read();
        custom_Tc_read_reg_4441 = custom_Tc.read();
        custom_Tr_read_reg_4447 = custom_Tr.read();
        custom_k_read_reg_4453 = custom_k.read();
        row_read_reg_4468 = row.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, input_dma_B_V_data_0_load_A.read())) {
        input_dma_B_V_data_0_payload_A = input_dma_B_TDATA.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, input_dma_B_V_data_0_load_B.read())) {
        input_dma_B_V_data_0_payload_B = input_dma_B_TDATA.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, input_dma_B_V_last_0_load_A.read())) {
        input_dma_B_V_last_0_payload_A = input_dma_B_TLAST.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, input_dma_B_V_last_0_load_B.read())) {
        input_dma_B_V_last_0_payload_B = input_dma_B_TLAST.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, input_dma_I_V_data_0_load_A.read())) {
        input_dma_I_V_data_0_payload_A = input_dma_I_TDATA.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, input_dma_I_V_data_0_load_B.read())) {
        input_dma_I_V_data_0_payload_B = input_dma_I_TDATA.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, input_dma_I_V_last_0_load_A.read())) {
        input_dma_I_V_last_0_payload_A = input_dma_I_TLAST.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, input_dma_I_V_last_0_load_B.read())) {
        input_dma_I_V_last_0_payload_B = input_dma_I_TLAST.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, input_dma_W_V_data_0_load_A.read())) {
        input_dma_W_V_data_0_payload_A = input_dma_W_TDATA.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, input_dma_W_V_data_0_load_B.read())) {
        input_dma_W_V_data_0_payload_B = input_dma_W_TDATA.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, input_dma_W_V_last_0_load_A.read())) {
        input_dma_W_V_last_0_payload_A = input_dma_W_TLAST.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, input_dma_W_V_last_0_load_B.read())) {
        input_dma_W_V_last_0_payload_B = input_dma_W_TLAST.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, output_dma_O_V_data_1_load_A.read())) {
        output_dma_O_V_data_1_payload_A = grp_OFM_STORE_fu_4226_output_dma_O_TDATA.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, output_dma_O_V_data_1_load_B.read())) {
        output_dma_O_V_data_1_payload_B = grp_OFM_STORE_fu_4226_output_dma_O_TDATA.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, output_dma_O_V_last_1_load_A.read())) {
        output_dma_O_V_last_1_payload_A = grp_OFM_STORE_fu_4226_output_dma_O_TLAST.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, output_dma_O_V_last_1_load_B.read())) {
        output_dma_O_V_last_1_payload_B = grp_OFM_STORE_fu_4226_output_dma_O_TLAST.read();
    }
}

void top::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(tmp_fu_4437_p1.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state3;
            } else if ((esl_seteq<1,1,1>(tmp_fu_4437_p1.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_state2_on_subcall_done.read()))) {
                ap_NS_fsm = ap_ST_fsm_state4;
            } else {
                ap_NS_fsm = ap_ST_fsm_state2;
            }
            break;
        case 4 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_state3_on_subcall_done.read()))) {
                ap_NS_fsm = ap_ST_fsm_state4;
            } else {
                ap_NS_fsm = ap_ST_fsm_state3;
            }
            break;
        case 8 : 
            if ((!(esl_seteq<1,1,1>(output_dma_O_V_last_1_ack_in.read(), ap_const_logic_0) || esl_seteq<1,1,1>(output_dma_O_V_data_1_ack_in.read(), ap_const_logic_0)) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()))) {
                ap_NS_fsm = ap_ST_fsm_state1;
            } else {
                ap_NS_fsm = ap_ST_fsm_state4;
            }
            break;
        default : 
            ap_NS_fsm =  (sc_lv<4>) ("XXXX");
            break;
    }
}

}

