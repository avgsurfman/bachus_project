// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsklansky_rewrite.h for the primary calling header

#include "Vsklansky_rewrite__pch.h"
#include "Vsklansky_rewrite__Syms.h"
#include "Vsklansky_rewrite___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsklansky_rewrite___024root___dump_triggers__stl(Vsklansky_rewrite___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vsklansky_rewrite___024root___eval_triggers__stl(Vsklansky_rewrite___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsklansky_rewrite___024root___eval_triggers__stl\n"); );
    Vsklansky_rewrite__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.setBit(0U, (IData)(vlSelfRef.__VstlFirstIteration));
    vlSelfRef.__VstlTriggered.setBit(1U, vlSelfRef.__Vtrigprevexpr___TOP__sklansky_adder__DOT__generates__0.neq(vlSelfRef.sklansky_adder__DOT__generates));
    vlSelfRef.__VstlTriggered.setBit(2U, vlSelfRef.__Vtrigprevexpr___TOP__sklansky_adder__DOT__propagates__0.neq(vlSelfRef.sklansky_adder__DOT__propagates));
    vlSelfRef.__Vtrigprevexpr___TOP__sklansky_adder__DOT__generates__0.assign(vlSelfRef.sklansky_adder__DOT__generates);
    vlSelfRef.__Vtrigprevexpr___TOP__sklansky_adder__DOT__propagates__0.assign(vlSelfRef.sklansky_adder__DOT__propagates);
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VstlDidInit)))))) {
        vlSelfRef.__VstlDidInit = 1U;
        vlSelfRef.__VstlTriggered.setBit(1U, 1U);
        vlSelfRef.__VstlTriggered.setBit(2U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vsklansky_rewrite___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
