// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VCFU_H_
#define _VCFU_H_  // guard

#include "verilated_heavy.h"

//==========

class Vcfu__Syms;

//----------

VL_MODULE(Vcfu) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(cmd_payload_function_id,7,0);
    VL_IN8(w_en,0,0);
    VL_IN8(p_en,0,0);
    VL_IN8(cmd_valid,0,0);
    VL_OUT8(cmd_ready,0,0);
    VL_OUT8(rsp_valid,0,0);
    VL_IN8(rsp_ready,0,0);
    VL_OUT8(rsp_payload_response_ok,0,0);
    VL_OUT(q,31,0);
    VL_OUT(mac_out,31,0);
    VL_OUT(rsp_payload_outputs_0,31,0);
    VL_IN(cmd_payload_inputs_0,31,0);
    VL_INW(rwl,255,0,8);
    VL_IN(cmd_payload_inputs_1,31,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    CData/*4:0*/ Cfu__DOT__shift_cnt;
    IData/*31:0*/ Cfu__DOT__sum_acc_result;
    IData/*31:0*/ Cfu__DOT__mac_out_reg;
    IData/*31:0*/ Cfu__DOT__q_reg;
    IData/*31:0*/ Cfu__DOT__i;
    IData/*31:0*/ Cfu__DOT__j;
    IData/*31:0*/ Cfu__DOT__temp_sum_acc_result;
    IData/*31:0*/ Cfu__DOT__rsp_payload_outputs_0_reg;
    IData/*31:0*/ Cfu__DOT__mem[256];
    IData/*31:0*/ Cfu__DOT__adc_out[32];
    IData/*31:0*/ Cfu__DOT__acc_result[32];
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__reset;
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vcfu__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vcfu);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    Vcfu(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vcfu();
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(Vcfu__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vcfu__Syms* symsp, bool first);
  private:
    static QData _change_request(Vcfu__Syms* __restrict vlSymsp);
    static QData _change_request_1(Vcfu__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__3(Vcfu__Syms* __restrict vlSymsp);
    static void _combo__TOP__5(Vcfu__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(Vcfu__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(Vcfu__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(Vcfu__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _initial__TOP__1(Vcfu__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__4(Vcfu__Syms* __restrict vlSymsp);
    static void _settle__TOP__2(Vcfu__Syms* __restrict vlSymsp) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
