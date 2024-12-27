// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VAXI_SA_32X32_H_
#define VERILATED_VAXI_SA_32X32_H_  // guard

#include "verilated.h"

class Vaxi_sa_32x32__Syms;
class Vaxi_sa_32x32___024root;

// This class is the main interface to the Verilated model
class Vaxi_sa_32x32 VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vaxi_sa_32x32__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clock,0,0);
    VL_IN8(&reset,0,0);
    VL_IN8(&s_axi_awid,7,0);
    VL_IN8(&s_axi_awlen,7,0);
    VL_IN8(&s_axi_awsize,2,0);
    VL_IN8(&s_axi_awburst,1,0);
    VL_IN8(&s_axi_awlock,0,0);
    VL_IN8(&s_axi_awcache,3,0);
    VL_IN8(&s_axi_awprot,2,0);
    VL_IN8(&s_axi_awvalid,0,0);
    VL_OUT8(&s_axi_awready,0,0);
    VL_IN8(&s_axi_wstrb,3,0);
    VL_IN8(&s_axi_wlast,0,0);
    VL_IN8(&s_axi_wvalid,0,0);
    VL_OUT8(&s_axi_wready,0,0);
    VL_OUT8(&s_axi_bid,7,0);
    VL_OUT8(&s_axi_bresp,1,0);
    VL_OUT8(&s_axi_bvalid,0,0);
    VL_IN8(&s_axi_bready,0,0);
    VL_IN8(&s_axi_arid,7,0);
    VL_IN8(&s_axi_arlen,7,0);
    VL_IN8(&s_axi_arsize,2,0);
    VL_IN8(&s_axi_arburst,1,0);
    VL_IN8(&s_axi_arlock,0,0);
    VL_IN8(&s_axi_arcache,3,0);
    VL_IN8(&s_axi_arprot,2,0);
    VL_IN8(&s_axi_arvalid,0,0);
    VL_OUT8(&s_axi_arready,0,0);
    VL_OUT8(&s_axi_rid,7,0);
    VL_OUT8(&s_axi_rresp,1,0);
    VL_OUT8(&s_axi_rlast,0,0);
    VL_OUT8(&s_axi_rvalid,0,0);
    VL_IN8(&s_axi_rready,0,0);
    VL_IN(&s_axi_awaddr,19,0);
    VL_IN(&s_axi_wdata,31,0);
    VL_IN(&s_axi_araddr,19,0);
    VL_OUT(&s_axi_rdata,31,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vaxi_sa_32x32___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vaxi_sa_32x32(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vaxi_sa_32x32(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vaxi_sa_32x32();
  private:
    VL_UNCOPYABLE(Vaxi_sa_32x32);  ///< Copying not allowed

  public:
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
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
