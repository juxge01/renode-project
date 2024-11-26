// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vaxi_pim.h for the primary calling header

#ifndef VERILATED_VAXI_PIM___024ROOT_H_
#define VERILATED_VAXI_PIM___024ROOT_H_  // guard

#include "verilated.h"

class Vaxi_pim__Syms;

class Vaxi_pim___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst,0,0);
        VL_IN8(s_axi_awid,7,0);
        VL_IN8(s_axi_awlen,7,0);
        VL_IN8(s_axi_awsize,2,0);
        VL_IN8(s_axi_awburst,1,0);
        VL_IN8(s_axi_awlock,0,0);
        VL_IN8(s_axi_awcache,3,0);
        VL_IN8(s_axi_awprot,2,0);
        VL_IN8(s_axi_awvalid,0,0);
        VL_OUT8(s_axi_awready,0,0);
        VL_IN8(s_axi_wstrb,3,0);
        VL_IN8(s_axi_wlast,0,0);
        VL_IN8(s_axi_wvalid,0,0);
        VL_OUT8(s_axi_wready,0,0);
        VL_OUT8(s_axi_bid,7,0);
        VL_OUT8(s_axi_bresp,1,0);
        VL_OUT8(s_axi_bvalid,0,0);
        VL_IN8(s_axi_bready,0,0);
        VL_IN8(s_axi_arid,7,0);
        VL_IN8(s_axi_arlen,7,0);
        VL_IN8(s_axi_arsize,2,0);
        VL_IN8(s_axi_arburst,1,0);
        VL_IN8(s_axi_arlock,0,0);
        VL_IN8(s_axi_arcache,3,0);
        VL_IN8(s_axi_arprot,2,0);
        VL_IN8(s_axi_arvalid,0,0);
        VL_OUT8(s_axi_arready,0,0);
        VL_OUT8(s_axi_rid,7,0);
        VL_OUT8(s_axi_rresp,1,0);
        VL_OUT8(s_axi_rlast,0,0);
        VL_OUT8(s_axi_rvalid,0,0);
        VL_IN8(s_axi_rready,0,0);
        CData/*4:0*/ axi_pim__DOT__shift_cnt;
        CData/*0:0*/ axi_pim__DOT__read_state_reg;
        CData/*0:0*/ axi_pim__DOT__read_state_next;
        CData/*1:0*/ axi_pim__DOT__write_state_reg;
        CData/*1:0*/ axi_pim__DOT__write_state_next;
        CData/*0:0*/ axi_pim__DOT__mem_wr_en;
        CData/*7:0*/ axi_pim__DOT__read_id_reg;
        CData/*7:0*/ axi_pim__DOT__read_id_next;
        CData/*7:0*/ axi_pim__DOT__read_count_reg;
        CData/*7:0*/ axi_pim__DOT__read_count_next;
        CData/*2:0*/ axi_pim__DOT__read_size_reg;
        CData/*2:0*/ axi_pim__DOT__read_size_next;
        CData/*1:0*/ axi_pim__DOT__read_burst_reg;
        CData/*1:0*/ axi_pim__DOT__read_burst_next;
        CData/*7:0*/ axi_pim__DOT__write_id_reg;
        CData/*7:0*/ axi_pim__DOT__write_id_next;
        CData/*7:0*/ axi_pim__DOT__write_count_reg;
        CData/*7:0*/ axi_pim__DOT__write_count_next;
        CData/*2:0*/ axi_pim__DOT__write_size_reg;
        CData/*2:0*/ axi_pim__DOT__write_size_next;
        CData/*1:0*/ axi_pim__DOT__write_burst_reg;
        CData/*1:0*/ axi_pim__DOT__write_burst_next;
        CData/*0:0*/ axi_pim__DOT__s_axi_awready_reg;
        CData/*0:0*/ axi_pim__DOT__s_axi_awready_next;
        CData/*0:0*/ axi_pim__DOT__s_axi_wready_reg;
        CData/*0:0*/ axi_pim__DOT__s_axi_wready_next;
        CData/*7:0*/ axi_pim__DOT__s_axi_bid_reg;
        CData/*7:0*/ axi_pim__DOT__s_axi_bid_next;
        CData/*0:0*/ axi_pim__DOT__s_axi_bvalid_reg;
        CData/*0:0*/ axi_pim__DOT__s_axi_bvalid_next;
        CData/*0:0*/ axi_pim__DOT__s_axi_arready_reg;
    };
    struct {
        CData/*0:0*/ axi_pim__DOT__s_axi_arready_next;
        CData/*7:0*/ axi_pim__DOT__s_axi_rid_reg;
        CData/*7:0*/ axi_pim__DOT__s_axi_rid_next;
        CData/*0:0*/ axi_pim__DOT__s_axi_rlast_reg;
        CData/*0:0*/ axi_pim__DOT__s_axi_rlast_next;
        CData/*0:0*/ axi_pim__DOT__s_axi_rvalid_reg;
        CData/*0:0*/ axi_pim__DOT__s_axi_rvalid_next;
        CData/*0:0*/ axi_pim__DOT__p_en;
        CData/*7:0*/ axi_pim__DOT__s_axi_awid_reg;
        CData/*7:0*/ axi_pim__DOT__s_axi_arid_reg;
        CData/*0:0*/ __Vclklast__TOP__clk;
        CData/*0:0*/ __Vclklast__TOP__rst;
        VL_IN16(s_axi_awaddr,15,0);
        VL_IN16(s_axi_araddr,15,0);
        SData/*15:0*/ axi_pim__DOT__read_addr_reg;
        SData/*15:0*/ axi_pim__DOT__read_addr_next;
        SData/*15:0*/ axi_pim__DOT__write_addr_reg;
        SData/*15:0*/ axi_pim__DOT__write_addr_next;
        VL_IN(s_axi_wdata,31,0);
        VL_OUT(s_axi_rdata,31,0);
        IData/*31:0*/ axi_pim__DOT__sum_acc_result;
        IData/*31:0*/ axi_pim__DOT__mac_out_reg;
        IData/*31:0*/ axi_pim__DOT__temp_sum_acc_result;
        VlWide<512>/*16383:0*/ axi_pim__DOT__rwl;
        IData/*31:0*/ axi_pim__DOT__s_axi_rdata_reg;
        IData/*31:0*/ axi_pim__DOT__i;
        IData/*31:0*/ axi_pim__DOT__j;
        IData/*31:0*/ axi_pim__DOT__count;
        VlUnpacked<IData/*31:0*/, 32> axi_pim__DOT__adc_out;
        VlUnpacked<IData/*31:0*/, 32> axi_pim__DOT__acc_result;
        VlUnpacked<IData/*31:0*/, 16384> axi_pim__DOT__mem1;
        VlUnpacked<IData/*31:0*/, 16384> axi_pim__DOT__mem2;
    };

    // INTERNAL VARIABLES
    Vaxi_pim__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vaxi_pim___024root(Vaxi_pim__Syms* symsp, const char* name);
    ~Vaxi_pim___024root();
    VL_UNCOPYABLE(Vaxi_pim___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
