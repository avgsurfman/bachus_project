// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VSKLANSKY_REWRITE__SYMS_H_
#define VERILATED_VSKLANSKY_REWRITE__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vsklansky_rewrite.h"

// INCLUDE MODULE CLASSES
#include "Vsklansky_rewrite___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vsklansky_rewrite__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vsklansky_rewrite* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vsklansky_rewrite___024root    TOP;

    // CONSTRUCTORS
    Vsklansky_rewrite__Syms(VerilatedContext* contextp, const char* namep, Vsklansky_rewrite* modelp);
    ~Vsklansky_rewrite__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
