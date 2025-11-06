// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsklansky_rewrite.h for the primary calling header

#include "Vsklansky_rewrite__pch.h"
#include "Vsklansky_rewrite___024root.h"

VL_ATTR_COLD void Vsklansky_rewrite___024root___eval_static(Vsklansky_rewrite___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsklansky_rewrite___024root___eval_static\n"); );
    Vsklansky_rewrite__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__sklansky_adder__DOT__generates__0 
        = vlSelfRef.sklansky_adder__DOT__generates;
    vlSelfRef.__Vtrigprevexpr___TOP__sklansky_adder__DOT__propagates__0 
        = vlSelfRef.sklansky_adder__DOT__propagates;
    vlSelfRef.__Vtrigprevexpr___TOP__sklansky_adder__DOT__generates__1 
        = vlSelfRef.sklansky_adder__DOT__generates;
    vlSelfRef.__Vtrigprevexpr___TOP__sklansky_adder__DOT__propagates__1 
        = vlSelfRef.sklansky_adder__DOT__propagates;
}

VL_ATTR_COLD void Vsklansky_rewrite___024root___eval_initial__TOP(Vsklansky_rewrite___024root* vlSelf);
VL_ATTR_COLD void Vsklansky_rewrite___024root____Vm_traceActivitySetAll(Vsklansky_rewrite___024root* vlSelf);

VL_ATTR_COLD void Vsklansky_rewrite___024root___eval_initial(Vsklansky_rewrite___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsklansky_rewrite___024root___eval_initial\n"); );
    Vsklansky_rewrite__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vsklansky_rewrite___024root___eval_initial__TOP(vlSelf);
    Vsklansky_rewrite___024root____Vm_traceActivitySetAll(vlSelf);
}

VL_ATTR_COLD void Vsklansky_rewrite___024root___eval_initial__TOP(Vsklansky_rewrite___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsklansky_rewrite___024root___eval_initial__TOP\n"); );
    Vsklansky_rewrite__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.sklansky_adder__DOT__propagates[0U] = 
        (0x1fffffffeULL & vlSelfRef.sklansky_adder__DOT__propagates
         [0U]);
}

VL_ATTR_COLD void Vsklansky_rewrite___024root___eval_final(Vsklansky_rewrite___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsklansky_rewrite___024root___eval_final\n"); );
    Vsklansky_rewrite__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsklansky_rewrite___024root___dump_triggers__stl(Vsklansky_rewrite___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vsklansky_rewrite___024root___eval_phase__stl(Vsklansky_rewrite___024root* vlSelf);

VL_ATTR_COLD void Vsklansky_rewrite___024root___eval_settle(Vsklansky_rewrite___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsklansky_rewrite___024root___eval_settle\n"); );
    Vsklansky_rewrite__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vsklansky_rewrite___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("sklansky_rewrite.sv", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vsklansky_rewrite___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsklansky_rewrite___024root___dump_triggers__stl(Vsklansky_rewrite___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsklansky_rewrite___024root___dump_triggers__stl\n"); );
    Vsklansky_rewrite__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
    if ((2ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 1 is active: @([hybrid] sklansky_adder.generates)\n");
    }
    if ((4ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 2 is active: @([hybrid] sklansky_adder.propagates)\n");
    }
}
#endif  // VL_DEBUG

void Vsklansky_rewrite___024root___act_sequent__TOP__0(Vsklansky_rewrite___024root* vlSelf);
VL_ATTR_COLD void Vsklansky_rewrite___024root___stl_sequent__TOP__1(Vsklansky_rewrite___024root* vlSelf);
void Vsklansky_rewrite___024root___act_sequent__TOP__1(Vsklansky_rewrite___024root* vlSelf);
void Vsklansky_rewrite___024root___act_sequent__TOP__2(Vsklansky_rewrite___024root* vlSelf);
void Vsklansky_rewrite___024root___act_comb__TOP__0(Vsklansky_rewrite___024root* vlSelf);

VL_ATTR_COLD void Vsklansky_rewrite___024root___eval_stl(Vsklansky_rewrite___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsklansky_rewrite___024root___eval_stl\n"); );
    Vsklansky_rewrite__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vsklansky_rewrite___024root___act_sequent__TOP__0(vlSelf);
        Vsklansky_rewrite___024root____Vm_traceActivitySetAll(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vsklansky_rewrite___024root___stl_sequent__TOP__1(vlSelf);
        Vsklansky_rewrite___024root____Vm_traceActivitySetAll(vlSelf);
    }
    if ((2ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vsklansky_rewrite___024root___act_sequent__TOP__1(vlSelf);
    }
    if ((6ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vsklansky_rewrite___024root___act_sequent__TOP__2(vlSelf);
    }
    if ((7ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vsklansky_rewrite___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vsklansky_rewrite___024root___stl_sequent__TOP__1(Vsklansky_rewrite___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsklansky_rewrite___024root___stl_sequent__TOP__1\n"); );
    Vsklansky_rewrite__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.sklansky_adder__DOT__propagates[0U] = 
        ((0x1fffffffdULL & vlSelfRef.sklansky_adder__DOT__propagates
          [0U]) | ((QData)((IData)((1U & (vlSelfRef.a 
                                          | vlSelfRef.b)))) 
                   << 1U));
    vlSelfRef.sklansky_adder__DOT__propagates[0U] = 
        ((0x1fffffffbULL & vlSelfRef.sklansky_adder__DOT__propagates
          [0U]) | ((QData)((IData)((1U & ((vlSelfRef.a 
                                           | vlSelfRef.b) 
                                          >> 1U)))) 
                   << 2U));
    vlSelfRef.sklansky_adder__DOT__propagates[0U] = 
        ((0x1fffffff7ULL & vlSelfRef.sklansky_adder__DOT__propagates
          [0U]) | ((QData)((IData)((1U & ((vlSelfRef.a 
                                           | vlSelfRef.b) 
                                          >> 2U)))) 
                   << 3U));
    vlSelfRef.sklansky_adder__DOT__propagates[0U] = 
        ((0x1ffffffefULL & vlSelfRef.sklansky_adder__DOT__propagates
          [0U]) | ((QData)((IData)((1U & ((vlSelfRef.a 
                                           | vlSelfRef.b) 
                                          >> 3U)))) 
                   << 4U));
    vlSelfRef.sklansky_adder__DOT__propagates[0U] = 
        ((0x1ffffffdfULL & vlSelfRef.sklansky_adder__DOT__propagates
          [0U]) | ((QData)((IData)((1U & ((vlSelfRef.a 
                                           | vlSelfRef.b) 
                                          >> 4U)))) 
                   << 5U));
    vlSelfRef.sklansky_adder__DOT__propagates[0U] = 
        ((0x1ffffffbfULL & vlSelfRef.sklansky_adder__DOT__propagates
          [0U]) | ((QData)((IData)((1U & ((vlSelfRef.a 
                                           | vlSelfRef.b) 
                                          >> 5U)))) 
                   << 6U));
    vlSelfRef.sklansky_adder__DOT__propagates[0U] = 
        ((0x1ffffff7fULL & vlSelfRef.sklansky_adder__DOT__propagates
          [0U]) | ((QData)((IData)((1U & ((vlSelfRef.a 
                                           | vlSelfRef.b) 
                                          >> 6U)))) 
                   << 7U));
    vlSelfRef.sklansky_adder__DOT__propagates[0U] = 
        ((0x1fffffeffULL & vlSelfRef.sklansky_adder__DOT__propagates
          [0U]) | ((QData)((IData)((1U & ((vlSelfRef.a 
                                           | vlSelfRef.b) 
                                          >> 7U)))) 
                   << 8U));
    vlSelfRef.sklansky_adder__DOT__propagates[0U] = 
        ((0x1fffffdffULL & vlSelfRef.sklansky_adder__DOT__propagates
          [0U]) | ((QData)((IData)((1U & ((vlSelfRef.a 
                                           | vlSelfRef.b) 
                                          >> 8U)))) 
                   << 9U));
    vlSelfRef.sklansky_adder__DOT__propagates[0U] = 
        ((0x1fffffbffULL & vlSelfRef.sklansky_adder__DOT__propagates
          [0U]) | ((QData)((IData)((1U & ((vlSelfRef.a 
                                           | vlSelfRef.b) 
                                          >> 9U)))) 
                   << 0xaU));
    vlSelfRef.sklansky_adder__DOT__propagates[0U] = 
        ((0x1fffff7ffULL & vlSelfRef.sklansky_adder__DOT__propagates
          [0U]) | ((QData)((IData)((1U & ((vlSelfRef.a 
                                           | vlSelfRef.b) 
                                          >> 0xaU)))) 
                   << 0xbU));
    vlSelfRef.sklansky_adder__DOT__propagates[0U] = 
        ((0x1ffffefffULL & vlSelfRef.sklansky_adder__DOT__propagates
          [0U]) | ((QData)((IData)((1U & ((vlSelfRef.a 
                                           | vlSelfRef.b) 
                                          >> 0xbU)))) 
                   << 0xcU));
    vlSelfRef.sklansky_adder__DOT__propagates[0U] = 
        ((0x1ffffdfffULL & vlSelfRef.sklansky_adder__DOT__propagates
          [0U]) | ((QData)((IData)((1U & ((vlSelfRef.a 
                                           | vlSelfRef.b) 
                                          >> 0xcU)))) 
                   << 0xdU));
    vlSelfRef.sklansky_adder__DOT__propagates[0U] = 
        ((0x1ffffbfffULL & vlSelfRef.sklansky_adder__DOT__propagates
          [0U]) | ((QData)((IData)((1U & ((vlSelfRef.a 
                                           | vlSelfRef.b) 
                                          >> 0xdU)))) 
                   << 0xeU));
    vlSelfRef.sklansky_adder__DOT__propagates[0U] = 
        ((0x1ffff7fffULL & vlSelfRef.sklansky_adder__DOT__propagates
          [0U]) | ((QData)((IData)((1U & ((vlSelfRef.a 
                                           | vlSelfRef.b) 
                                          >> 0xeU)))) 
                   << 0xfU));
    vlSelfRef.sklansky_adder__DOT__propagates[0U] = 
        ((0x1fffeffffULL & vlSelfRef.sklansky_adder__DOT__propagates
          [0U]) | ((QData)((IData)((1U & ((vlSelfRef.a 
                                           | vlSelfRef.b) 
                                          >> 0xfU)))) 
                   << 0x10U));
    vlSelfRef.sklansky_adder__DOT__propagates[0U] = 
        ((0x1fffdffffULL & vlSelfRef.sklansky_adder__DOT__propagates
          [0U]) | ((QData)((IData)((1U & ((vlSelfRef.a 
                                           | vlSelfRef.b) 
                                          >> 0x10U)))) 
                   << 0x11U));
    vlSelfRef.sklansky_adder__DOT__propagates[0U] = 
        ((0x1fffbffffULL & vlSelfRef.sklansky_adder__DOT__propagates
          [0U]) | ((QData)((IData)((1U & ((vlSelfRef.a 
                                           | vlSelfRef.b) 
                                          >> 0x11U)))) 
                   << 0x12U));
    vlSelfRef.sklansky_adder__DOT__propagates[0U] = 
        ((0x1fff7ffffULL & vlSelfRef.sklansky_adder__DOT__propagates
          [0U]) | ((QData)((IData)((1U & ((vlSelfRef.a 
                                           | vlSelfRef.b) 
                                          >> 0x12U)))) 
                   << 0x13U));
    vlSelfRef.sklansky_adder__DOT__propagates[0U] = 
        ((0x1ffefffffULL & vlSelfRef.sklansky_adder__DOT__propagates
          [0U]) | ((QData)((IData)((1U & ((vlSelfRef.a 
                                           | vlSelfRef.b) 
                                          >> 0x13U)))) 
                   << 0x14U));
    vlSelfRef.sklansky_adder__DOT__propagates[0U] = 
        ((0x1ffdfffffULL & vlSelfRef.sklansky_adder__DOT__propagates
          [0U]) | ((QData)((IData)((1U & ((vlSelfRef.a 
                                           | vlSelfRef.b) 
                                          >> 0x14U)))) 
                   << 0x15U));
    vlSelfRef.sklansky_adder__DOT__propagates[0U] = 
        ((0x1ffbfffffULL & vlSelfRef.sklansky_adder__DOT__propagates
          [0U]) | ((QData)((IData)((1U & ((vlSelfRef.a 
                                           | vlSelfRef.b) 
                                          >> 0x15U)))) 
                   << 0x16U));
    vlSelfRef.sklansky_adder__DOT__propagates[0U] = 
        ((0x1ff7fffffULL & vlSelfRef.sklansky_adder__DOT__propagates
          [0U]) | ((QData)((IData)((1U & ((vlSelfRef.a 
                                           | vlSelfRef.b) 
                                          >> 0x16U)))) 
                   << 0x17U));
    vlSelfRef.sklansky_adder__DOT__propagates[0U] = 
        ((0x1feffffffULL & vlSelfRef.sklansky_adder__DOT__propagates
          [0U]) | ((QData)((IData)((1U & ((vlSelfRef.a 
                                           | vlSelfRef.b) 
                                          >> 0x17U)))) 
                   << 0x18U));
    vlSelfRef.sklansky_adder__DOT__propagates[0U] = 
        ((0x1fdffffffULL & vlSelfRef.sklansky_adder__DOT__propagates
          [0U]) | ((QData)((IData)((1U & ((vlSelfRef.a 
                                           | vlSelfRef.b) 
                                          >> 0x18U)))) 
                   << 0x19U));
    vlSelfRef.sklansky_adder__DOT__propagates[0U] = 
        ((0x1fbffffffULL & vlSelfRef.sklansky_adder__DOT__propagates
          [0U]) | ((QData)((IData)((1U & ((vlSelfRef.a 
                                           | vlSelfRef.b) 
                                          >> 0x19U)))) 
                   << 0x1aU));
    vlSelfRef.sklansky_adder__DOT__propagates[0U] = 
        ((0x1f7ffffffULL & vlSelfRef.sklansky_adder__DOT__propagates
          [0U]) | ((QData)((IData)((1U & ((vlSelfRef.a 
                                           | vlSelfRef.b) 
                                          >> 0x1aU)))) 
                   << 0x1bU));
    vlSelfRef.sklansky_adder__DOT__propagates[0U] = 
        ((0x1efffffffULL & vlSelfRef.sklansky_adder__DOT__propagates
          [0U]) | ((QData)((IData)((1U & ((vlSelfRef.a 
                                           | vlSelfRef.b) 
                                          >> 0x1bU)))) 
                   << 0x1cU));
    vlSelfRef.sklansky_adder__DOT__propagates[0U] = 
        ((0x1dfffffffULL & vlSelfRef.sklansky_adder__DOT__propagates
          [0U]) | ((QData)((IData)((1U & ((vlSelfRef.a 
                                           | vlSelfRef.b) 
                                          >> 0x1cU)))) 
                   << 0x1dU));
    vlSelfRef.sklansky_adder__DOT__propagates[0U] = 
        ((0x1bfffffffULL & vlSelfRef.sklansky_adder__DOT__propagates
          [0U]) | ((QData)((IData)((1U & ((vlSelfRef.a 
                                           | vlSelfRef.b) 
                                          >> 0x1dU)))) 
                   << 0x1eU));
    vlSelfRef.sklansky_adder__DOT__propagates[0U] = 
        ((0x17fffffffULL & vlSelfRef.sklansky_adder__DOT__propagates
          [0U]) | ((QData)((IData)((1U & ((vlSelfRef.a 
                                           | vlSelfRef.b) 
                                          >> 0x1eU)))) 
                   << 0x1fU));
    vlSelfRef.sklansky_adder__DOT__propagates[0U] = 
        ((0xffffffffULL & vlSelfRef.sklansky_adder__DOT__propagates
          [0U]) | ((QData)((IData)(((vlSelfRef.a | vlSelfRef.b) 
                                    >> 0x1fU))) << 0x20U));
    vlSelfRef.sklansky_adder__DOT__generates[0U] = 
        ((0x1fffffffeULL & vlSelfRef.sklansky_adder__DOT__generates
          [0U]) | (IData)((IData)(vlSelfRef.cin)));
    vlSelfRef.sklansky_adder__DOT__generates[0U] = 
        ((0x1fffffffdULL & vlSelfRef.sklansky_adder__DOT__generates
          [0U]) | ((QData)((IData)((1U & (vlSelfRef.a 
                                          & vlSelfRef.b)))) 
                   << 1U));
    vlSelfRef.sklansky_adder__DOT__generates[0U] = 
        ((0x1fffffffbULL & vlSelfRef.sklansky_adder__DOT__generates
          [0U]) | ((QData)((IData)((1U & ((vlSelfRef.a 
                                           & vlSelfRef.b) 
                                          >> 1U)))) 
                   << 2U));
    vlSelfRef.sklansky_adder__DOT__generates[0U] = 
        ((0x1fffffff7ULL & vlSelfRef.sklansky_adder__DOT__generates
          [0U]) | ((QData)((IData)((1U & ((vlSelfRef.a 
                                           & vlSelfRef.b) 
                                          >> 2U)))) 
                   << 3U));
    vlSelfRef.sklansky_adder__DOT__generates[0U] = 
        ((0x1ffffffefULL & vlSelfRef.sklansky_adder__DOT__generates
          [0U]) | ((QData)((IData)((1U & ((vlSelfRef.a 
                                           & vlSelfRef.b) 
                                          >> 3U)))) 
                   << 4U));
    vlSelfRef.sklansky_adder__DOT__generates[0U] = 
        ((0x1ffffffdfULL & vlSelfRef.sklansky_adder__DOT__generates
          [0U]) | ((QData)((IData)((1U & ((vlSelfRef.a 
                                           & vlSelfRef.b) 
                                          >> 4U)))) 
                   << 5U));
    vlSelfRef.sklansky_adder__DOT__generates[0U] = 
        ((0x1ffffffbfULL & vlSelfRef.sklansky_adder__DOT__generates
          [0U]) | ((QData)((IData)((1U & ((vlSelfRef.a 
                                           & vlSelfRef.b) 
                                          >> 5U)))) 
                   << 6U));
    vlSelfRef.sklansky_adder__DOT__generates[0U] = 
        ((0x1ffffff7fULL & vlSelfRef.sklansky_adder__DOT__generates
          [0U]) | ((QData)((IData)((1U & ((vlSelfRef.a 
                                           & vlSelfRef.b) 
                                          >> 6U)))) 
                   << 7U));
    vlSelfRef.sklansky_adder__DOT__generates[0U] = 
        ((0x1fffffeffULL & vlSelfRef.sklansky_adder__DOT__generates
          [0U]) | ((QData)((IData)((1U & ((vlSelfRef.a 
                                           & vlSelfRef.b) 
                                          >> 7U)))) 
                   << 8U));
    vlSelfRef.sklansky_adder__DOT__generates[0U] = 
        ((0x1fffffdffULL & vlSelfRef.sklansky_adder__DOT__generates
          [0U]) | ((QData)((IData)((1U & ((vlSelfRef.a 
                                           & vlSelfRef.b) 
                                          >> 8U)))) 
                   << 9U));
    vlSelfRef.sklansky_adder__DOT__generates[0U] = 
        ((0x1fffffbffULL & vlSelfRef.sklansky_adder__DOT__generates
          [0U]) | ((QData)((IData)((1U & ((vlSelfRef.a 
                                           & vlSelfRef.b) 
                                          >> 9U)))) 
                   << 0xaU));
    vlSelfRef.sklansky_adder__DOT__generates[0U] = 
        ((0x1fffff7ffULL & vlSelfRef.sklansky_adder__DOT__generates
          [0U]) | ((QData)((IData)((1U & ((vlSelfRef.a 
                                           & vlSelfRef.b) 
                                          >> 0xaU)))) 
                   << 0xbU));
    vlSelfRef.sklansky_adder__DOT__generates[0U] = 
        ((0x1ffffefffULL & vlSelfRef.sklansky_adder__DOT__generates
          [0U]) | ((QData)((IData)((1U & ((vlSelfRef.a 
                                           & vlSelfRef.b) 
                                          >> 0xbU)))) 
                   << 0xcU));
    vlSelfRef.sklansky_adder__DOT__generates[0U] = 
        ((0x1ffffdfffULL & vlSelfRef.sklansky_adder__DOT__generates
          [0U]) | ((QData)((IData)((1U & ((vlSelfRef.a 
                                           & vlSelfRef.b) 
                                          >> 0xcU)))) 
                   << 0xdU));
    vlSelfRef.sklansky_adder__DOT__generates[0U] = 
        ((0x1ffffbfffULL & vlSelfRef.sklansky_adder__DOT__generates
          [0U]) | ((QData)((IData)((1U & ((vlSelfRef.a 
                                           & vlSelfRef.b) 
                                          >> 0xdU)))) 
                   << 0xeU));
    vlSelfRef.sklansky_adder__DOT__generates[0U] = 
        ((0x1ffff7fffULL & vlSelfRef.sklansky_adder__DOT__generates
          [0U]) | ((QData)((IData)((1U & ((vlSelfRef.a 
                                           & vlSelfRef.b) 
                                          >> 0xeU)))) 
                   << 0xfU));
    vlSelfRef.sklansky_adder__DOT__generates[0U] = 
        ((0x1fffeffffULL & vlSelfRef.sklansky_adder__DOT__generates
          [0U]) | ((QData)((IData)((1U & ((vlSelfRef.a 
                                           & vlSelfRef.b) 
                                          >> 0xfU)))) 
                   << 0x10U));
    vlSelfRef.sklansky_adder__DOT__generates[0U] = 
        ((0x1fffdffffULL & vlSelfRef.sklansky_adder__DOT__generates
          [0U]) | ((QData)((IData)((1U & ((vlSelfRef.a 
                                           & vlSelfRef.b) 
                                          >> 0x10U)))) 
                   << 0x11U));
    vlSelfRef.sklansky_adder__DOT__generates[0U] = 
        ((0x1fffbffffULL & vlSelfRef.sklansky_adder__DOT__generates
          [0U]) | ((QData)((IData)((1U & ((vlSelfRef.a 
                                           & vlSelfRef.b) 
                                          >> 0x11U)))) 
                   << 0x12U));
    vlSelfRef.sklansky_adder__DOT__generates[0U] = 
        ((0x1fff7ffffULL & vlSelfRef.sklansky_adder__DOT__generates
          [0U]) | ((QData)((IData)((1U & ((vlSelfRef.a 
                                           & vlSelfRef.b) 
                                          >> 0x12U)))) 
                   << 0x13U));
    vlSelfRef.sklansky_adder__DOT__generates[0U] = 
        ((0x1ffefffffULL & vlSelfRef.sklansky_adder__DOT__generates
          [0U]) | ((QData)((IData)((1U & ((vlSelfRef.a 
                                           & vlSelfRef.b) 
                                          >> 0x13U)))) 
                   << 0x14U));
    vlSelfRef.sklansky_adder__DOT__generates[0U] = 
        ((0x1ffdfffffULL & vlSelfRef.sklansky_adder__DOT__generates
          [0U]) | ((QData)((IData)((1U & ((vlSelfRef.a 
                                           & vlSelfRef.b) 
                                          >> 0x14U)))) 
                   << 0x15U));
    vlSelfRef.sklansky_adder__DOT__generates[0U] = 
        ((0x1ffbfffffULL & vlSelfRef.sklansky_adder__DOT__generates
          [0U]) | ((QData)((IData)((1U & ((vlSelfRef.a 
                                           & vlSelfRef.b) 
                                          >> 0x15U)))) 
                   << 0x16U));
    vlSelfRef.sklansky_adder__DOT__generates[0U] = 
        ((0x1ff7fffffULL & vlSelfRef.sklansky_adder__DOT__generates
          [0U]) | ((QData)((IData)((1U & ((vlSelfRef.a 
                                           & vlSelfRef.b) 
                                          >> 0x16U)))) 
                   << 0x17U));
    vlSelfRef.sklansky_adder__DOT__generates[0U] = 
        ((0x1feffffffULL & vlSelfRef.sklansky_adder__DOT__generates
          [0U]) | ((QData)((IData)((1U & ((vlSelfRef.a 
                                           & vlSelfRef.b) 
                                          >> 0x17U)))) 
                   << 0x18U));
    vlSelfRef.sklansky_adder__DOT__generates[0U] = 
        ((0x1fdffffffULL & vlSelfRef.sklansky_adder__DOT__generates
          [0U]) | ((QData)((IData)((1U & ((vlSelfRef.a 
                                           & vlSelfRef.b) 
                                          >> 0x18U)))) 
                   << 0x19U));
    vlSelfRef.sklansky_adder__DOT__generates[0U] = 
        ((0x1fbffffffULL & vlSelfRef.sklansky_adder__DOT__generates
          [0U]) | ((QData)((IData)((1U & ((vlSelfRef.a 
                                           & vlSelfRef.b) 
                                          >> 0x19U)))) 
                   << 0x1aU));
    vlSelfRef.sklansky_adder__DOT__generates[0U] = 
        ((0x1f7ffffffULL & vlSelfRef.sklansky_adder__DOT__generates
          [0U]) | ((QData)((IData)((1U & ((vlSelfRef.a 
                                           & vlSelfRef.b) 
                                          >> 0x1aU)))) 
                   << 0x1bU));
    vlSelfRef.sklansky_adder__DOT__generates[0U] = 
        ((0x1efffffffULL & vlSelfRef.sklansky_adder__DOT__generates
          [0U]) | ((QData)((IData)((1U & ((vlSelfRef.a 
                                           & vlSelfRef.b) 
                                          >> 0x1bU)))) 
                   << 0x1cU));
    vlSelfRef.sklansky_adder__DOT__generates[0U] = 
        ((0x1dfffffffULL & vlSelfRef.sklansky_adder__DOT__generates
          [0U]) | ((QData)((IData)((1U & ((vlSelfRef.a 
                                           & vlSelfRef.b) 
                                          >> 0x1cU)))) 
                   << 0x1dU));
    vlSelfRef.sklansky_adder__DOT__generates[0U] = 
        ((0x1bfffffffULL & vlSelfRef.sklansky_adder__DOT__generates
          [0U]) | ((QData)((IData)((1U & ((vlSelfRef.a 
                                           & vlSelfRef.b) 
                                          >> 0x1dU)))) 
                   << 0x1eU));
    vlSelfRef.sklansky_adder__DOT__generates[0U] = 
        ((0x17fffffffULL & vlSelfRef.sklansky_adder__DOT__generates
          [0U]) | ((QData)((IData)((1U & ((vlSelfRef.a 
                                           & vlSelfRef.b) 
                                          >> 0x1eU)))) 
                   << 0x1fU));
    vlSelfRef.sklansky_adder__DOT__generates[0U] = 
        ((0xffffffffULL & vlSelfRef.sklansky_adder__DOT__generates
          [0U]) | ((QData)((IData)(((vlSelfRef.a & vlSelfRef.b) 
                                    >> 0x1fU))) << 0x20U));
}

VL_ATTR_COLD void Vsklansky_rewrite___024root___eval_triggers__stl(Vsklansky_rewrite___024root* vlSelf);

VL_ATTR_COLD bool Vsklansky_rewrite___024root___eval_phase__stl(Vsklansky_rewrite___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsklansky_rewrite___024root___eval_phase__stl\n"); );
    Vsklansky_rewrite__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vsklansky_rewrite___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vsklansky_rewrite___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsklansky_rewrite___024root___dump_triggers__ico(Vsklansky_rewrite___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsklansky_rewrite___024root___dump_triggers__ico\n"); );
    Vsklansky_rewrite__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VicoTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsklansky_rewrite___024root___dump_triggers__act(Vsklansky_rewrite___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsklansky_rewrite___024root___dump_triggers__act\n"); );
    Vsklansky_rewrite__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([hybrid] sklansky_adder.generates)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([hybrid] sklansky_adder.propagates)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsklansky_rewrite___024root___dump_triggers__nba(Vsklansky_rewrite___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsklansky_rewrite___024root___dump_triggers__nba\n"); );
    Vsklansky_rewrite__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([hybrid] sklansky_adder.generates)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([hybrid] sklansky_adder.propagates)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vsklansky_rewrite___024root____Vm_traceActivitySetAll(Vsklansky_rewrite___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsklansky_rewrite___024root____Vm_traceActivitySetAll\n"); );
    Vsklansky_rewrite__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

VL_ATTR_COLD void Vsklansky_rewrite___024root___ctor_var_reset(Vsklansky_rewrite___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsklansky_rewrite___024root___ctor_var_reset\n"); );
    Vsklansky_rewrite__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->a = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 510903276987443985ull);
    vlSelf->b = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16900879642891266615ull);
    vlSelf->cin = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8404852791380219477ull);
    vlSelf->cout = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3402043879796434022ull);
    vlSelf->y = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11123243248953317070ull);
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->sklansky_adder__DOT__generates[__Vi0] = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 4215267990395144710ull);
    }
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->sklansky_adder__DOT__propagates[__Vi0] = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 5059599037731805643ull);
    }
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->__Vtrigprevexpr___TOP__sklansky_adder__DOT__generates__0[__Vi0] = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 7910108609031902394ull);
    }
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->__Vtrigprevexpr___TOP__sklansky_adder__DOT__propagates__0[__Vi0] = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 8800250698628297532ull);
    }
    vlSelf->__VstlDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->__Vtrigprevexpr___TOP__sklansky_adder__DOT__generates__1[__Vi0] = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 15337585457443533509ull);
    }
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->__Vtrigprevexpr___TOP__sklansky_adder__DOT__propagates__1[__Vi0] = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 8713657091288242490ull);
    }
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
