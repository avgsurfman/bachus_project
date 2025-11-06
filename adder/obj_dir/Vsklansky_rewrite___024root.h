// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsklansky_rewrite.h for the primary calling header

#ifndef VERILATED_VSKLANSKY_REWRITE___024ROOT_H_
#define VERILATED_VSKLANSKY_REWRITE___024ROOT_H_  // guard

#include "verilated.h"


class Vsklansky_rewrite__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vsklansky_rewrite___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(cin,0,0);
    VL_OUT8(cout,0,0);
    CData/*0:0*/ __VstlDidInit;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    VL_IN(a,31,0);
    VL_IN(b,31,0);
    VL_OUT(y,31,0);
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<QData/*32:0*/, 6> sklansky_adder__DOT__generates;
    VlUnpacked<QData/*32:0*/, 6> sklansky_adder__DOT__propagates;
    VlUnpacked<QData/*32:0*/, 6> __Vtrigprevexpr___TOP__sklansky_adder__DOT__generates__0;
    VlUnpacked<QData/*32:0*/, 6> __Vtrigprevexpr___TOP__sklansky_adder__DOT__propagates__0;
    VlUnpacked<QData/*32:0*/, 6> __Vtrigprevexpr___TOP__sklansky_adder__DOT__generates__1;
    VlUnpacked<QData/*32:0*/, 6> __Vtrigprevexpr___TOP__sklansky_adder__DOT__propagates__1;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlTriggerVec<3> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vsklansky_rewrite__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vsklansky_rewrite___024root(Vsklansky_rewrite__Syms* symsp, const char* v__name);
    ~Vsklansky_rewrite___024root();
    VL_UNCOPYABLE(Vsklansky_rewrite___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
