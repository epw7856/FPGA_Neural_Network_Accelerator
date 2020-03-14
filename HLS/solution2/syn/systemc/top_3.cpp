#include "top.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void top::thread_hdltv_gen() {
    const char* dump_tv = std::getenv("AP_WRITE_TV");
    if (!(dump_tv && string(dump_tv) == "on")) return;

    wait();

    mHdltvinHandle << "[ " << endl;
    mHdltvoutHandle << "[ " << endl;
    int ap_cycleNo = 0;
    while (1) {
        wait();
        const char* mComma = ap_cycleNo == 0 ? " " : ", " ;
        mHdltvinHandle << mComma << "{"  <<  " \"ap_rst_n\" :  \"" << ap_rst_n.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_dma_W_TDATA\" :  \"" << input_dma_W_TDATA.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_dma_W_TVALID\" :  \"" << input_dma_W_TVALID.read() << "\" ";
        mHdltvoutHandle << mComma << "{"  <<  " \"input_dma_W_TREADY\" :  \"" << input_dma_W_TREADY.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_dma_W_TLAST\" :  \"" << input_dma_W_TLAST.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_dma_I_TDATA\" :  \"" << input_dma_I_TDATA.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_dma_I_TVALID\" :  \"" << input_dma_I_TVALID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_dma_I_TREADY\" :  \"" << input_dma_I_TREADY.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_dma_I_TLAST\" :  \"" << input_dma_I_TLAST.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_dma_B_TDATA\" :  \"" << input_dma_B_TDATA.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_dma_B_TVALID\" :  \"" << input_dma_B_TVALID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"input_dma_B_TREADY\" :  \"" << input_dma_B_TREADY.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"input_dma_B_TLAST\" :  \"" << input_dma_B_TLAST.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"output_dma_O_TDATA\" :  \"" << output_dma_O_TDATA.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"output_dma_O_TVALID\" :  \"" << output_dma_O_TVALID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"output_dma_O_TREADY\" :  \"" << output_dma_O_TREADY.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"output_dma_O_TLAST\" :  \"" << output_dma_O_TLAST.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_CRTL_BUS_AWVALID\" :  \"" << s_axi_CRTL_BUS_AWVALID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_CRTL_BUS_AWREADY\" :  \"" << s_axi_CRTL_BUS_AWREADY.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_CRTL_BUS_AWADDR\" :  \"" << s_axi_CRTL_BUS_AWADDR.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_CRTL_BUS_WVALID\" :  \"" << s_axi_CRTL_BUS_WVALID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_CRTL_BUS_WREADY\" :  \"" << s_axi_CRTL_BUS_WREADY.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_CRTL_BUS_WDATA\" :  \"" << s_axi_CRTL_BUS_WDATA.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_CRTL_BUS_WSTRB\" :  \"" << s_axi_CRTL_BUS_WSTRB.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_CRTL_BUS_ARVALID\" :  \"" << s_axi_CRTL_BUS_ARVALID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_CRTL_BUS_ARREADY\" :  \"" << s_axi_CRTL_BUS_ARREADY.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_CRTL_BUS_ARADDR\" :  \"" << s_axi_CRTL_BUS_ARADDR.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_CRTL_BUS_RVALID\" :  \"" << s_axi_CRTL_BUS_RVALID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_CRTL_BUS_RREADY\" :  \"" << s_axi_CRTL_BUS_RREADY.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_CRTL_BUS_RDATA\" :  \"" << s_axi_CRTL_BUS_RDATA.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_CRTL_BUS_RRESP\" :  \"" << s_axi_CRTL_BUS_RRESP.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_CRTL_BUS_BVALID\" :  \"" << s_axi_CRTL_BUS_BVALID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_CRTL_BUS_BREADY\" :  \"" << s_axi_CRTL_BUS_BREADY.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_CRTL_BUS_BRESP\" :  \"" << s_axi_CRTL_BUS_BRESP.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"interrupt\" :  \"" << interrupt.read() << "\" ";
        mHdltvinHandle << "}" << std::endl;
        mHdltvoutHandle << "}" << std::endl;
        ap_cycleNo++;
    }
}

}

