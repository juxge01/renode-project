// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VAXI_SA_32X32__SYMS_H_
#define VERILATED_VAXI_SA_32X32__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vaxi_sa_32x32.h"

// INCLUDE MODULE CLASSES
#include "Vaxi_sa_32x32___024root.h"

// SYMS CLASS (contains all model state)
class Vaxi_sa_32x32__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vaxi_sa_32x32* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vaxi_sa_32x32___024root        TOP;

    // CONSTRUCTORS
    Vaxi_sa_32x32__Syms(VerilatedContext* contextp, const char* namep, Vaxi_sa_32x32* modelp);
    ~Vaxi_sa_32x32__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
