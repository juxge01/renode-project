// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vaxi_sa_32x32.h"
#include "Vaxi_sa_32x32__Syms.h"

//============================================================
// Constructors

Vaxi_sa_32x32::Vaxi_sa_32x32(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vaxi_sa_32x32__Syms(contextp(), _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , s_axi_awid{vlSymsp->TOP.s_axi_awid}
    , s_axi_awlen{vlSymsp->TOP.s_axi_awlen}
    , s_axi_awsize{vlSymsp->TOP.s_axi_awsize}
    , s_axi_awburst{vlSymsp->TOP.s_axi_awburst}
    , s_axi_awlock{vlSymsp->TOP.s_axi_awlock}
    , s_axi_awcache{vlSymsp->TOP.s_axi_awcache}
    , s_axi_awprot{vlSymsp->TOP.s_axi_awprot}
    , s_axi_awvalid{vlSymsp->TOP.s_axi_awvalid}
    , s_axi_awready{vlSymsp->TOP.s_axi_awready}
    , s_axi_wstrb{vlSymsp->TOP.s_axi_wstrb}
    , s_axi_wlast{vlSymsp->TOP.s_axi_wlast}
    , s_axi_wvalid{vlSymsp->TOP.s_axi_wvalid}
    , s_axi_wready{vlSymsp->TOP.s_axi_wready}
    , s_axi_bid{vlSymsp->TOP.s_axi_bid}
    , s_axi_bresp{vlSymsp->TOP.s_axi_bresp}
    , s_axi_bvalid{vlSymsp->TOP.s_axi_bvalid}
    , s_axi_bready{vlSymsp->TOP.s_axi_bready}
    , s_axi_arid{vlSymsp->TOP.s_axi_arid}
    , s_axi_arlen{vlSymsp->TOP.s_axi_arlen}
    , s_axi_arsize{vlSymsp->TOP.s_axi_arsize}
    , s_axi_arburst{vlSymsp->TOP.s_axi_arburst}
    , s_axi_arlock{vlSymsp->TOP.s_axi_arlock}
    , s_axi_arcache{vlSymsp->TOP.s_axi_arcache}
    , s_axi_arprot{vlSymsp->TOP.s_axi_arprot}
    , s_axi_arvalid{vlSymsp->TOP.s_axi_arvalid}
    , s_axi_arready{vlSymsp->TOP.s_axi_arready}
    , s_axi_rid{vlSymsp->TOP.s_axi_rid}
    , s_axi_rresp{vlSymsp->TOP.s_axi_rresp}
    , s_axi_rlast{vlSymsp->TOP.s_axi_rlast}
    , s_axi_rvalid{vlSymsp->TOP.s_axi_rvalid}
    , s_axi_rready{vlSymsp->TOP.s_axi_rready}
    , s_axi_awaddr{vlSymsp->TOP.s_axi_awaddr}
    , s_axi_wdata{vlSymsp->TOP.s_axi_wdata}
    , s_axi_araddr{vlSymsp->TOP.s_axi_araddr}
    , s_axi_rdata{vlSymsp->TOP.s_axi_rdata}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vaxi_sa_32x32::Vaxi_sa_32x32(const char* _vcname__)
    : Vaxi_sa_32x32(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vaxi_sa_32x32::~Vaxi_sa_32x32() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vaxi_sa_32x32___024root___eval_initial(Vaxi_sa_32x32___024root* vlSelf);
void Vaxi_sa_32x32___024root___eval_settle(Vaxi_sa_32x32___024root* vlSelf);
void Vaxi_sa_32x32___024root___eval(Vaxi_sa_32x32___024root* vlSelf);
#ifdef VL_DEBUG
void Vaxi_sa_32x32___024root___eval_debug_assertions(Vaxi_sa_32x32___024root* vlSelf);
#endif  // VL_DEBUG
void Vaxi_sa_32x32___024root___final(Vaxi_sa_32x32___024root* vlSelf);

static void _eval_initial_loop(Vaxi_sa_32x32__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vaxi_sa_32x32___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vaxi_sa_32x32___024root___eval_settle(&(vlSymsp->TOP));
        Vaxi_sa_32x32___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void Vaxi_sa_32x32::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vaxi_sa_32x32::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vaxi_sa_32x32___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vaxi_sa_32x32___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

const char* Vaxi_sa_32x32::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vaxi_sa_32x32::final() {
    Vaxi_sa_32x32___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vaxi_sa_32x32::hierName() const { return vlSymsp->name(); }
const char* Vaxi_sa_32x32::modelName() const { return "Vaxi_sa_32x32"; }
unsigned Vaxi_sa_32x32::threads() const { return 1; }
