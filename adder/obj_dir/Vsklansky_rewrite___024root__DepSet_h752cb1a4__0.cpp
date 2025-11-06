// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsklansky_rewrite.h for the primary calling header

#include "Vsklansky_rewrite__pch.h"
#include "Vsklansky_rewrite___024root.h"

void Vsklansky_rewrite___024root___ico_sequent__TOP__0(Vsklansky_rewrite___024root* vlSelf);

void Vsklansky_rewrite___024root___eval_ico(Vsklansky_rewrite___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsklansky_rewrite___024root___eval_ico\n"); );
    Vsklansky_rewrite__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vsklansky_rewrite___024root___ico_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

VL_INLINE_OPT void Vsklansky_rewrite___024root___ico_sequent__TOP__0(Vsklansky_rewrite___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsklansky_rewrite___024root___ico_sequent__TOP__0\n"); );
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
    vlSelfRef.cout = (1U & ((IData)((vlSelfRef.sklansky_adder__DOT__generates
                                     [5U] >> 0x20U)) 
                            | ((IData)((vlSelfRef.sklansky_adder__DOT__generates
                                        [5U] >> 0x1fU)) 
                               & (IData)((vlSelfRef.sklansky_adder__DOT__propagates
                                          [5U] >> 0x1fU)))));
    vlSelfRef.y = ((IData)(vlSelfRef.sklansky_adder__DOT__generates
                           [5U]) ^ (vlSelfRef.a ^ vlSelfRef.b));
}

void Vsklansky_rewrite___024root___eval_triggers__ico(Vsklansky_rewrite___024root* vlSelf);

bool Vsklansky_rewrite___024root___eval_phase__ico(Vsklansky_rewrite___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsklansky_rewrite___024root___eval_phase__ico\n"); );
    Vsklansky_rewrite__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vsklansky_rewrite___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vsklansky_rewrite___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vsklansky_rewrite___024root___act_sequent__TOP__0(Vsklansky_rewrite___024root* vlSelf);
void Vsklansky_rewrite___024root___act_sequent__TOP__1(Vsklansky_rewrite___024root* vlSelf);
void Vsklansky_rewrite___024root___act_sequent__TOP__2(Vsklansky_rewrite___024root* vlSelf);
void Vsklansky_rewrite___024root___act_comb__TOP__0(Vsklansky_rewrite___024root* vlSelf);

void Vsklansky_rewrite___024root___eval_act(Vsklansky_rewrite___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsklansky_rewrite___024root___eval_act\n"); );
    Vsklansky_rewrite__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vsklansky_rewrite___024root___act_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vsklansky_rewrite___024root___act_sequent__TOP__1(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vsklansky_rewrite___024root___act_sequent__TOP__2(vlSelf);
        Vsklansky_rewrite___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vsklansky_rewrite___024root___act_sequent__TOP__0(Vsklansky_rewrite___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsklansky_rewrite___024root___act_sequent__TOP__0\n"); );
    Vsklansky_rewrite__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.sklansky_adder__DOT__propagates[1U] = 
        ((0x1fffffffeULL & vlSelfRef.sklansky_adder__DOT__propagates
          [1U]) | (IData)((IData)((1U & (IData)(vlSelfRef.sklansky_adder__DOT__propagates
                                                [0U])))));
    vlSelfRef.sklansky_adder__DOT__propagates[1U] = 
        ((0x1fffffffdULL & vlSelfRef.sklansky_adder__DOT__propagates
          [1U]) | ((QData)((IData)((1U & ((IData)((
                                                   vlSelfRef.sklansky_adder__DOT__propagates
                                                   [0U] 
                                                   >> 1U)) 
                                          & (IData)(
                                                    vlSelfRef.sklansky_adder__DOT__propagates
                                                    [0U]))))) 
                   << 1U));
    vlSelfRef.sklansky_adder__DOT__propagates[1U] = 
        ((0x1fffffffbULL & vlSelfRef.sklansky_adder__DOT__propagates
          [1U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__propagates
                                                  [0U] 
                                                  >> 2U))))) 
                   << 2U));
    vlSelfRef.sklansky_adder__DOT__propagates[1U] = 
        ((0x1fffffff7ULL & vlSelfRef.sklansky_adder__DOT__propagates
          [1U]) | ((QData)((IData)((1U & ((IData)((
                                                   vlSelfRef.sklansky_adder__DOT__propagates
                                                   [0U] 
                                                   >> 3U)) 
                                          & (IData)(
                                                    (vlSelfRef.sklansky_adder__DOT__propagates
                                                     [0U] 
                                                     >> 2U)))))) 
                   << 3U));
    vlSelfRef.sklansky_adder__DOT__propagates[1U] = 
        ((0x1ffffffefULL & vlSelfRef.sklansky_adder__DOT__propagates
          [1U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__propagates
                                                  [0U] 
                                                  >> 4U))))) 
                   << 4U));
    vlSelfRef.sklansky_adder__DOT__propagates[1U] = 
        ((0x1ffffffdfULL & vlSelfRef.sklansky_adder__DOT__propagates
          [1U]) | ((QData)((IData)((1U & ((IData)((
                                                   vlSelfRef.sklansky_adder__DOT__propagates
                                                   [0U] 
                                                   >> 5U)) 
                                          & (IData)(
                                                    (vlSelfRef.sklansky_adder__DOT__propagates
                                                     [0U] 
                                                     >> 4U)))))) 
                   << 5U));
    vlSelfRef.sklansky_adder__DOT__propagates[1U] = 
        ((0x1ffffffbfULL & vlSelfRef.sklansky_adder__DOT__propagates
          [1U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__propagates
                                                  [0U] 
                                                  >> 6U))))) 
                   << 6U));
    vlSelfRef.sklansky_adder__DOT__propagates[1U] = 
        ((0x1ffffff7fULL & vlSelfRef.sklansky_adder__DOT__propagates
          [1U]) | ((QData)((IData)((1U & ((IData)((
                                                   vlSelfRef.sklansky_adder__DOT__propagates
                                                   [0U] 
                                                   >> 7U)) 
                                          & (IData)(
                                                    (vlSelfRef.sklansky_adder__DOT__propagates
                                                     [0U] 
                                                     >> 6U)))))) 
                   << 7U));
    vlSelfRef.sklansky_adder__DOT__propagates[1U] = 
        ((0x1fffffeffULL & vlSelfRef.sklansky_adder__DOT__propagates
          [1U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__propagates
                                                  [0U] 
                                                  >> 8U))))) 
                   << 8U));
    vlSelfRef.sklansky_adder__DOT__propagates[1U] = 
        ((0x1fffffdffULL & vlSelfRef.sklansky_adder__DOT__propagates
          [1U]) | ((QData)((IData)((1U & ((IData)((
                                                   vlSelfRef.sklansky_adder__DOT__propagates
                                                   [0U] 
                                                   >> 9U)) 
                                          & (IData)(
                                                    (vlSelfRef.sklansky_adder__DOT__propagates
                                                     [0U] 
                                                     >> 8U)))))) 
                   << 9U));
    vlSelfRef.sklansky_adder__DOT__propagates[1U] = 
        ((0x1fffffbffULL & vlSelfRef.sklansky_adder__DOT__propagates
          [1U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__propagates
                                                  [0U] 
                                                  >> 0xaU))))) 
                   << 0xaU));
    vlSelfRef.sklansky_adder__DOT__propagates[1U] = 
        ((0x1fffff7ffULL & vlSelfRef.sklansky_adder__DOT__propagates
          [1U]) | ((QData)((IData)((1U & ((IData)((
                                                   vlSelfRef.sklansky_adder__DOT__propagates
                                                   [0U] 
                                                   >> 0xbU)) 
                                          & (IData)(
                                                    (vlSelfRef.sklansky_adder__DOT__propagates
                                                     [0U] 
                                                     >> 0xaU)))))) 
                   << 0xbU));
    vlSelfRef.sklansky_adder__DOT__propagates[1U] = 
        ((0x1ffffefffULL & vlSelfRef.sklansky_adder__DOT__propagates
          [1U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__propagates
                                                  [0U] 
                                                  >> 0xcU))))) 
                   << 0xcU));
    vlSelfRef.sklansky_adder__DOT__propagates[1U] = 
        ((0x1ffffdfffULL & vlSelfRef.sklansky_adder__DOT__propagates
          [1U]) | ((QData)((IData)((1U & ((IData)((
                                                   vlSelfRef.sklansky_adder__DOT__propagates
                                                   [0U] 
                                                   >> 0xdU)) 
                                          & (IData)(
                                                    (vlSelfRef.sklansky_adder__DOT__propagates
                                                     [0U] 
                                                     >> 0xcU)))))) 
                   << 0xdU));
    vlSelfRef.sklansky_adder__DOT__propagates[1U] = 
        ((0x1ffffbfffULL & vlSelfRef.sklansky_adder__DOT__propagates
          [1U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__propagates
                                                  [0U] 
                                                  >> 0xeU))))) 
                   << 0xeU));
    vlSelfRef.sklansky_adder__DOT__propagates[1U] = 
        ((0x1ffff7fffULL & vlSelfRef.sklansky_adder__DOT__propagates
          [1U]) | ((QData)((IData)((1U & ((IData)((
                                                   vlSelfRef.sklansky_adder__DOT__propagates
                                                   [0U] 
                                                   >> 0xfU)) 
                                          & (IData)(
                                                    (vlSelfRef.sklansky_adder__DOT__propagates
                                                     [0U] 
                                                     >> 0xeU)))))) 
                   << 0xfU));
    vlSelfRef.sklansky_adder__DOT__propagates[1U] = 
        ((0x1fffeffffULL & vlSelfRef.sklansky_adder__DOT__propagates
          [1U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__propagates
                                                  [0U] 
                                                  >> 0x10U))))) 
                   << 0x10U));
    vlSelfRef.sklansky_adder__DOT__propagates[1U] = 
        ((0x1fffdffffULL & vlSelfRef.sklansky_adder__DOT__propagates
          [1U]) | ((QData)((IData)((1U & ((IData)((
                                                   vlSelfRef.sklansky_adder__DOT__propagates
                                                   [0U] 
                                                   >> 0x11U)) 
                                          & (IData)(
                                                    (vlSelfRef.sklansky_adder__DOT__propagates
                                                     [0U] 
                                                     >> 0x10U)))))) 
                   << 0x11U));
    vlSelfRef.sklansky_adder__DOT__propagates[1U] = 
        ((0x1fffbffffULL & vlSelfRef.sklansky_adder__DOT__propagates
          [1U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__propagates
                                                  [0U] 
                                                  >> 0x12U))))) 
                   << 0x12U));
    vlSelfRef.sklansky_adder__DOT__propagates[1U] = 
        ((0x1fff7ffffULL & vlSelfRef.sklansky_adder__DOT__propagates
          [1U]) | ((QData)((IData)((1U & ((IData)((
                                                   vlSelfRef.sklansky_adder__DOT__propagates
                                                   [0U] 
                                                   >> 0x13U)) 
                                          & (IData)(
                                                    (vlSelfRef.sklansky_adder__DOT__propagates
                                                     [0U] 
                                                     >> 0x12U)))))) 
                   << 0x13U));
    vlSelfRef.sklansky_adder__DOT__propagates[1U] = 
        ((0x1ffefffffULL & vlSelfRef.sklansky_adder__DOT__propagates
          [1U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__propagates
                                                  [0U] 
                                                  >> 0x14U))))) 
                   << 0x14U));
    vlSelfRef.sklansky_adder__DOT__propagates[1U] = 
        ((0x1ffdfffffULL & vlSelfRef.sklansky_adder__DOT__propagates
          [1U]) | ((QData)((IData)((1U & ((IData)((
                                                   vlSelfRef.sklansky_adder__DOT__propagates
                                                   [0U] 
                                                   >> 0x15U)) 
                                          & (IData)(
                                                    (vlSelfRef.sklansky_adder__DOT__propagates
                                                     [0U] 
                                                     >> 0x14U)))))) 
                   << 0x15U));
    vlSelfRef.sklansky_adder__DOT__propagates[1U] = 
        ((0x1ffbfffffULL & vlSelfRef.sklansky_adder__DOT__propagates
          [1U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__propagates
                                                  [0U] 
                                                  >> 0x16U))))) 
                   << 0x16U));
    vlSelfRef.sklansky_adder__DOT__propagates[1U] = 
        ((0x1ff7fffffULL & vlSelfRef.sklansky_adder__DOT__propagates
          [1U]) | ((QData)((IData)((1U & ((IData)((
                                                   vlSelfRef.sklansky_adder__DOT__propagates
                                                   [0U] 
                                                   >> 0x17U)) 
                                          & (IData)(
                                                    (vlSelfRef.sklansky_adder__DOT__propagates
                                                     [0U] 
                                                     >> 0x16U)))))) 
                   << 0x17U));
    vlSelfRef.sklansky_adder__DOT__propagates[1U] = 
        ((0x1feffffffULL & vlSelfRef.sklansky_adder__DOT__propagates
          [1U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__propagates
                                                  [0U] 
                                                  >> 0x18U))))) 
                   << 0x18U));
    vlSelfRef.sklansky_adder__DOT__propagates[1U] = 
        ((0x1fdffffffULL & vlSelfRef.sklansky_adder__DOT__propagates
          [1U]) | ((QData)((IData)((1U & ((IData)((
                                                   vlSelfRef.sklansky_adder__DOT__propagates
                                                   [0U] 
                                                   >> 0x19U)) 
                                          & (IData)(
                                                    (vlSelfRef.sklansky_adder__DOT__propagates
                                                     [0U] 
                                                     >> 0x18U)))))) 
                   << 0x19U));
    vlSelfRef.sklansky_adder__DOT__propagates[1U] = 
        ((0x1fbffffffULL & vlSelfRef.sklansky_adder__DOT__propagates
          [1U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__propagates
                                                  [0U] 
                                                  >> 0x1aU))))) 
                   << 0x1aU));
    vlSelfRef.sklansky_adder__DOT__propagates[1U] = 
        ((0x1f7ffffffULL & vlSelfRef.sklansky_adder__DOT__propagates
          [1U]) | ((QData)((IData)((1U & ((IData)((
                                                   vlSelfRef.sklansky_adder__DOT__propagates
                                                   [0U] 
                                                   >> 0x1bU)) 
                                          & (IData)(
                                                    (vlSelfRef.sklansky_adder__DOT__propagates
                                                     [0U] 
                                                     >> 0x1aU)))))) 
                   << 0x1bU));
    vlSelfRef.sklansky_adder__DOT__propagates[1U] = 
        ((0x1efffffffULL & vlSelfRef.sklansky_adder__DOT__propagates
          [1U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__propagates
                                                  [0U] 
                                                  >> 0x1cU))))) 
                   << 0x1cU));
    vlSelfRef.sklansky_adder__DOT__propagates[1U] = 
        ((0x1dfffffffULL & vlSelfRef.sklansky_adder__DOT__propagates
          [1U]) | ((QData)((IData)((1U & ((IData)((
                                                   vlSelfRef.sklansky_adder__DOT__propagates
                                                   [0U] 
                                                   >> 0x1dU)) 
                                          & (IData)(
                                                    (vlSelfRef.sklansky_adder__DOT__propagates
                                                     [0U] 
                                                     >> 0x1cU)))))) 
                   << 0x1dU));
    vlSelfRef.sklansky_adder__DOT__propagates[1U] = 
        ((0x1bfffffffULL & vlSelfRef.sklansky_adder__DOT__propagates
          [1U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__propagates
                                                  [0U] 
                                                  >> 0x1eU))))) 
                   << 0x1eU));
    vlSelfRef.sklansky_adder__DOT__propagates[1U] = 
        ((0x17fffffffULL & vlSelfRef.sklansky_adder__DOT__propagates
          [1U]) | ((QData)((IData)((1U & ((IData)((
                                                   vlSelfRef.sklansky_adder__DOT__propagates
                                                   [0U] 
                                                   >> 0x1fU)) 
                                          & (IData)(
                                                    (vlSelfRef.sklansky_adder__DOT__propagates
                                                     [0U] 
                                                     >> 0x1eU)))))) 
                   << 0x1fU));
    vlSelfRef.sklansky_adder__DOT__propagates[1U] = 
        ((0xffffffffULL & vlSelfRef.sklansky_adder__DOT__propagates
          [1U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__propagates
                                                  [0U] 
                                                  >> 0x20U))))) 
                   << 0x20U));
    vlSelfRef.sklansky_adder__DOT__propagates[2U] = 
        ((0x1fffffffeULL & vlSelfRef.sklansky_adder__DOT__propagates
          [2U]) | (IData)((IData)((1U & (IData)(vlSelfRef.sklansky_adder__DOT__propagates
                                                [1U])))));
    vlSelfRef.sklansky_adder__DOT__propagates[2U] = 
        ((0x1fffffffdULL & vlSelfRef.sklansky_adder__DOT__propagates
          [2U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__propagates
                                                  [1U] 
                                                  >> 1U))))) 
                   << 1U));
    vlSelfRef.sklansky_adder__DOT__propagates[2U] = 
        ((0x1fffffff7ULL & vlSelfRef.sklansky_adder__DOT__propagates
          [2U]) | ((QData)((IData)((1U & ((IData)((
                                                   vlSelfRef.sklansky_adder__DOT__propagates
                                                   [1U] 
                                                   >> 3U)) 
                                          & (IData)(
                                                    (vlSelfRef.sklansky_adder__DOT__propagates
                                                     [1U] 
                                                     >> 2U)))))) 
                   << 3U));
    vlSelfRef.sklansky_adder__DOT__propagates[2U] = 
        ((0x1ffffffefULL & vlSelfRef.sklansky_adder__DOT__propagates
          [2U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__propagates
                                                  [1U] 
                                                  >> 4U))))) 
                   << 4U));
    vlSelfRef.sklansky_adder__DOT__propagates[2U] = 
        ((0x1ffffffdfULL & vlSelfRef.sklansky_adder__DOT__propagates
          [2U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__propagates
                                                  [1U] 
                                                  >> 5U))))) 
                   << 5U));
    vlSelfRef.sklansky_adder__DOT__propagates[2U] = 
        ((0x1ffffffbfULL & vlSelfRef.sklansky_adder__DOT__propagates
          [2U]) | ((QData)((IData)((1U & ((IData)((
                                                   vlSelfRef.sklansky_adder__DOT__propagates
                                                   [1U] 
                                                   >> 6U)) 
                                          & (IData)(
                                                    (vlSelfRef.sklansky_adder__DOT__propagates
                                                     [1U] 
                                                     >> 5U)))))) 
                   << 6U));
    vlSelfRef.sklansky_adder__DOT__propagates[2U] = 
        ((0x1ffffff7fULL & vlSelfRef.sklansky_adder__DOT__propagates
          [2U]) | ((QData)((IData)((1U & ((IData)((
                                                   vlSelfRef.sklansky_adder__DOT__propagates
                                                   [1U] 
                                                   >> 7U)) 
                                          & (IData)(
                                                    (vlSelfRef.sklansky_adder__DOT__propagates
                                                     [1U] 
                                                     >> 6U)))))) 
                   << 7U));
    vlSelfRef.sklansky_adder__DOT__propagates[2U] = 
        ((0x1fffffeffULL & vlSelfRef.sklansky_adder__DOT__propagates
          [2U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__propagates
                                                  [1U] 
                                                  >> 8U))))) 
                   << 8U));
    vlSelfRef.sklansky_adder__DOT__propagates[2U] = 
        ((0x1fffffdffULL & vlSelfRef.sklansky_adder__DOT__propagates
          [2U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__propagates
                                                  [1U] 
                                                  >> 9U))))) 
                   << 9U));
    vlSelfRef.sklansky_adder__DOT__propagates[2U] = 
        ((0x1fffffbffULL & vlSelfRef.sklansky_adder__DOT__propagates
          [2U]) | ((QData)((IData)((1U & ((IData)((
                                                   vlSelfRef.sklansky_adder__DOT__propagates
                                                   [1U] 
                                                   >> 0xaU)) 
                                          & (IData)(
                                                    (vlSelfRef.sklansky_adder__DOT__propagates
                                                     [1U] 
                                                     >> 9U)))))) 
                   << 0xaU));
    vlSelfRef.sklansky_adder__DOT__propagates[2U] = 
        ((0x1fffff7ffULL & vlSelfRef.sklansky_adder__DOT__propagates
          [2U]) | ((QData)((IData)((1U & ((IData)((
                                                   vlSelfRef.sklansky_adder__DOT__propagates
                                                   [1U] 
                                                   >> 0xbU)) 
                                          & (IData)(
                                                    (vlSelfRef.sklansky_adder__DOT__propagates
                                                     [1U] 
                                                     >> 0xaU)))))) 
                   << 0xbU));
    vlSelfRef.sklansky_adder__DOT__propagates[2U] = 
        ((0x1ffffefffULL & vlSelfRef.sklansky_adder__DOT__propagates
          [2U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__propagates
                                                  [1U] 
                                                  >> 0xcU))))) 
                   << 0xcU));
    vlSelfRef.sklansky_adder__DOT__propagates[2U] = 
        ((0x1ffffdfffULL & vlSelfRef.sklansky_adder__DOT__propagates
          [2U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__propagates
                                                  [1U] 
                                                  >> 0xdU))))) 
                   << 0xdU));
    vlSelfRef.sklansky_adder__DOT__propagates[2U] = 
        ((0x1ffffbfffULL & vlSelfRef.sklansky_adder__DOT__propagates
          [2U]) | ((QData)((IData)((1U & ((IData)((
                                                   vlSelfRef.sklansky_adder__DOT__propagates
                                                   [1U] 
                                                   >> 0xeU)) 
                                          & (IData)(
                                                    (vlSelfRef.sklansky_adder__DOT__propagates
                                                     [1U] 
                                                     >> 0xdU)))))) 
                   << 0xeU));
    vlSelfRef.sklansky_adder__DOT__propagates[2U] = 
        ((0x1ffff7fffULL & vlSelfRef.sklansky_adder__DOT__propagates
          [2U]) | ((QData)((IData)((1U & ((IData)((
                                                   vlSelfRef.sklansky_adder__DOT__propagates
                                                   [1U] 
                                                   >> 0xfU)) 
                                          & (IData)(
                                                    (vlSelfRef.sklansky_adder__DOT__propagates
                                                     [1U] 
                                                     >> 0xeU)))))) 
                   << 0xfU));
    vlSelfRef.sklansky_adder__DOT__propagates[2U] = 
        ((0x1fffeffffULL & vlSelfRef.sklansky_adder__DOT__propagates
          [2U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__propagates
                                                  [1U] 
                                                  >> 0x10U))))) 
                   << 0x10U));
    vlSelfRef.sklansky_adder__DOT__propagates[2U] = 
        ((0x1fffdffffULL & vlSelfRef.sklansky_adder__DOT__propagates
          [2U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__propagates
                                                  [1U] 
                                                  >> 0x11U))))) 
                   << 0x11U));
    vlSelfRef.sklansky_adder__DOT__propagates[2U] = 
        ((0x1fffbffffULL & vlSelfRef.sklansky_adder__DOT__propagates
          [2U]) | ((QData)((IData)((1U & ((IData)((
                                                   vlSelfRef.sklansky_adder__DOT__propagates
                                                   [1U] 
                                                   >> 0x12U)) 
                                          & (IData)(
                                                    (vlSelfRef.sklansky_adder__DOT__propagates
                                                     [1U] 
                                                     >> 0x11U)))))) 
                   << 0x12U));
    vlSelfRef.sklansky_adder__DOT__propagates[2U] = 
        ((0x1fff7ffffULL & vlSelfRef.sklansky_adder__DOT__propagates
          [2U]) | ((QData)((IData)((1U & ((IData)((
                                                   vlSelfRef.sklansky_adder__DOT__propagates
                                                   [1U] 
                                                   >> 0x13U)) 
                                          & (IData)(
                                                    (vlSelfRef.sklansky_adder__DOT__propagates
                                                     [1U] 
                                                     >> 0x12U)))))) 
                   << 0x13U));
    vlSelfRef.sklansky_adder__DOT__propagates[2U] = 
        ((0x1ffefffffULL & vlSelfRef.sklansky_adder__DOT__propagates
          [2U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__propagates
                                                  [1U] 
                                                  >> 0x14U))))) 
                   << 0x14U));
    vlSelfRef.sklansky_adder__DOT__propagates[2U] = 
        ((0x1ffdfffffULL & vlSelfRef.sklansky_adder__DOT__propagates
          [2U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__propagates
                                                  [1U] 
                                                  >> 0x15U))))) 
                   << 0x15U));
    vlSelfRef.sklansky_adder__DOT__propagates[2U] = 
        ((0x1ffbfffffULL & vlSelfRef.sklansky_adder__DOT__propagates
          [2U]) | ((QData)((IData)((1U & ((IData)((
                                                   vlSelfRef.sklansky_adder__DOT__propagates
                                                   [1U] 
                                                   >> 0x16U)) 
                                          & (IData)(
                                                    (vlSelfRef.sklansky_adder__DOT__propagates
                                                     [1U] 
                                                     >> 0x15U)))))) 
                   << 0x16U));
    vlSelfRef.sklansky_adder__DOT__propagates[2U] = 
        ((0x1ff7fffffULL & vlSelfRef.sklansky_adder__DOT__propagates
          [2U]) | ((QData)((IData)((1U & ((IData)((
                                                   vlSelfRef.sklansky_adder__DOT__propagates
                                                   [1U] 
                                                   >> 0x17U)) 
                                          & (IData)(
                                                    (vlSelfRef.sklansky_adder__DOT__propagates
                                                     [1U] 
                                                     >> 0x16U)))))) 
                   << 0x17U));
    vlSelfRef.sklansky_adder__DOT__propagates[2U] = 
        ((0x1feffffffULL & vlSelfRef.sklansky_adder__DOT__propagates
          [2U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__propagates
                                                  [1U] 
                                                  >> 0x18U))))) 
                   << 0x18U));
    vlSelfRef.sklansky_adder__DOT__propagates[2U] = 
        ((0x1fdffffffULL & vlSelfRef.sklansky_adder__DOT__propagates
          [2U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__propagates
                                                  [1U] 
                                                  >> 0x19U))))) 
                   << 0x19U));
    vlSelfRef.sklansky_adder__DOT__propagates[2U] = 
        ((0x1fbffffffULL & vlSelfRef.sklansky_adder__DOT__propagates
          [2U]) | ((QData)((IData)((1U & ((IData)((
                                                   vlSelfRef.sklansky_adder__DOT__propagates
                                                   [1U] 
                                                   >> 0x1aU)) 
                                          & (IData)(
                                                    (vlSelfRef.sklansky_adder__DOT__propagates
                                                     [1U] 
                                                     >> 0x19U)))))) 
                   << 0x1aU));
    vlSelfRef.sklansky_adder__DOT__propagates[2U] = 
        ((0x1f7ffffffULL & vlSelfRef.sklansky_adder__DOT__propagates
          [2U]) | ((QData)((IData)((1U & ((IData)((
                                                   vlSelfRef.sklansky_adder__DOT__propagates
                                                   [1U] 
                                                   >> 0x1bU)) 
                                          & (IData)(
                                                    (vlSelfRef.sklansky_adder__DOT__propagates
                                                     [1U] 
                                                     >> 0x1aU)))))) 
                   << 0x1bU));
    vlSelfRef.sklansky_adder__DOT__propagates[2U] = 
        ((0x1efffffffULL & vlSelfRef.sklansky_adder__DOT__propagates
          [2U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__propagates
                                                  [1U] 
                                                  >> 0x1cU))))) 
                   << 0x1cU));
    vlSelfRef.sklansky_adder__DOT__propagates[2U] = 
        ((0x1dfffffffULL & vlSelfRef.sklansky_adder__DOT__propagates
          [2U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__propagates
                                                  [1U] 
                                                  >> 0x1dU))))) 
                   << 0x1dU));
    vlSelfRef.sklansky_adder__DOT__propagates[2U] = 
        ((0x1bfffffffULL & vlSelfRef.sklansky_adder__DOT__propagates
          [2U]) | ((QData)((IData)((1U & ((IData)((
                                                   vlSelfRef.sklansky_adder__DOT__propagates
                                                   [1U] 
                                                   >> 0x1eU)) 
                                          & (IData)(
                                                    (vlSelfRef.sklansky_adder__DOT__propagates
                                                     [1U] 
                                                     >> 0x1dU)))))) 
                   << 0x1eU));
    vlSelfRef.sklansky_adder__DOT__propagates[2U] = 
        ((0x17fffffffULL & vlSelfRef.sklansky_adder__DOT__propagates
          [2U]) | ((QData)((IData)((1U & ((IData)((
                                                   vlSelfRef.sklansky_adder__DOT__propagates
                                                   [1U] 
                                                   >> 0x1fU)) 
                                          & (IData)(
                                                    (vlSelfRef.sklansky_adder__DOT__propagates
                                                     [1U] 
                                                     >> 0x1eU)))))) 
                   << 0x1fU));
    vlSelfRef.sklansky_adder__DOT__propagates[2U] = 
        ((0xffffffffULL & vlSelfRef.sklansky_adder__DOT__propagates
          [2U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__propagates
                                                  [1U] 
                                                  >> 0x20U))))) 
                   << 0x20U));
    vlSelfRef.sklansky_adder__DOT__propagates[3U] = 
        ((0x1fffffffeULL & vlSelfRef.sklansky_adder__DOT__propagates
          [3U]) | (IData)((IData)((1U & (IData)(vlSelfRef.sklansky_adder__DOT__propagates
                                                [2U])))));
    vlSelfRef.sklansky_adder__DOT__propagates[3U] = 
        ((0x1fffffffdULL & vlSelfRef.sklansky_adder__DOT__propagates
          [3U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__propagates
                                                  [2U] 
                                                  >> 1U))))) 
                   << 1U));
    vlSelfRef.sklansky_adder__DOT__propagates[3U] = 
        ((0x1fffffffbULL & vlSelfRef.sklansky_adder__DOT__propagates
          [3U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__propagates
                                                  [2U] 
                                                  >> 2U))))) 
                   << 2U));
    vlSelfRef.sklansky_adder__DOT__propagates[3U] = 
        ((0x1fffffff7ULL & vlSelfRef.sklansky_adder__DOT__propagates
          [3U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__propagates
                                                  [2U] 
                                                  >> 3U))))) 
                   << 3U));
    vlSelfRef.sklansky_adder__DOT__propagates[3U] = 
        ((0x1ffffff7fULL & vlSelfRef.sklansky_adder__DOT__propagates
          [3U]) | ((QData)((IData)((1U & ((IData)((
                                                   vlSelfRef.sklansky_adder__DOT__propagates
                                                   [2U] 
                                                   >> 7U)) 
                                          & (IData)(
                                                    (vlSelfRef.sklansky_adder__DOT__propagates
                                                     [2U] 
                                                     >> 6U)))))) 
                   << 7U));
    vlSelfRef.sklansky_adder__DOT__propagates[3U] = 
        ((0x1fffffeffULL & vlSelfRef.sklansky_adder__DOT__propagates
          [3U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__propagates
                                                  [2U] 
                                                  >> 8U))))) 
                   << 8U));
    vlSelfRef.sklansky_adder__DOT__propagates[3U] = 
        ((0x1fffffdffULL & vlSelfRef.sklansky_adder__DOT__propagates
          [3U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__propagates
                                                  [2U] 
                                                  >> 9U))))) 
                   << 9U));
    vlSelfRef.sklansky_adder__DOT__propagates[3U] = 
        ((0x1fffffbffULL & vlSelfRef.sklansky_adder__DOT__propagates
          [3U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__propagates
                                                  [2U] 
                                                  >> 0xaU))))) 
                   << 0xaU));
    vlSelfRef.sklansky_adder__DOT__propagates[3U] = 
        ((0x1fffff7ffULL & vlSelfRef.sklansky_adder__DOT__propagates
          [3U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__propagates
                                                  [2U] 
                                                  >> 0xbU))))) 
                   << 0xbU));
    vlSelfRef.sklansky_adder__DOT__propagates[3U] = 
        ((0x1ffffefffULL & vlSelfRef.sklansky_adder__DOT__propagates
          [3U]) | ((QData)((IData)((1U & ((IData)((
                                                   vlSelfRef.sklansky_adder__DOT__propagates
                                                   [2U] 
                                                   >> 0xcU)) 
                                          & (IData)(
                                                    (vlSelfRef.sklansky_adder__DOT__propagates
                                                     [2U] 
                                                     >> 0xbU)))))) 
                   << 0xcU));
    vlSelfRef.sklansky_adder__DOT__propagates[3U] = 
        ((0x1ffffdfffULL & vlSelfRef.sklansky_adder__DOT__propagates
          [3U]) | ((QData)((IData)((1U & ((IData)((
                                                   vlSelfRef.sklansky_adder__DOT__propagates
                                                   [2U] 
                                                   >> 0xdU)) 
                                          & (IData)(
                                                    (vlSelfRef.sklansky_adder__DOT__propagates
                                                     [2U] 
                                                     >> 0xcU)))))) 
                   << 0xdU));
    vlSelfRef.sklansky_adder__DOT__propagates[3U] = 
        ((0x1ffffbfffULL & vlSelfRef.sklansky_adder__DOT__propagates
          [3U]) | ((QData)((IData)((1U & ((IData)((
                                                   vlSelfRef.sklansky_adder__DOT__propagates
                                                   [2U] 
                                                   >> 0xeU)) 
                                          & (IData)(
                                                    (vlSelfRef.sklansky_adder__DOT__propagates
                                                     [2U] 
                                                     >> 0xdU)))))) 
                   << 0xeU));
    vlSelfRef.sklansky_adder__DOT__propagates[3U] = 
        ((0x1ffff7fffULL & vlSelfRef.sklansky_adder__DOT__propagates
          [3U]) | ((QData)((IData)((1U & ((IData)((
                                                   vlSelfRef.sklansky_adder__DOT__propagates
                                                   [2U] 
                                                   >> 0xfU)) 
                                          & (IData)(
                                                    (vlSelfRef.sklansky_adder__DOT__propagates
                                                     [2U] 
                                                     >> 0xeU)))))) 
                   << 0xfU));
    vlSelfRef.sklansky_adder__DOT__propagates[3U] = 
        ((0x1fffeffffULL & vlSelfRef.sklansky_adder__DOT__propagates
          [3U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__propagates
                                                  [2U] 
                                                  >> 0x10U))))) 
                   << 0x10U));
    vlSelfRef.sklansky_adder__DOT__propagates[3U] = 
        ((0x1fffdffffULL & vlSelfRef.sklansky_adder__DOT__propagates
          [3U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__propagates
                                                  [2U] 
                                                  >> 0x11U))))) 
                   << 0x11U));
    vlSelfRef.sklansky_adder__DOT__propagates[3U] = 
        ((0x1fffbffffULL & vlSelfRef.sklansky_adder__DOT__propagates
          [3U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__propagates
                                                  [2U] 
                                                  >> 0x12U))))) 
                   << 0x12U));
    vlSelfRef.sklansky_adder__DOT__propagates[3U] = 
        ((0x1fff7ffffULL & vlSelfRef.sklansky_adder__DOT__propagates
          [3U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__propagates
                                                  [2U] 
                                                  >> 0x13U))))) 
                   << 0x13U));
    vlSelfRef.sklansky_adder__DOT__propagates[3U] = 
        ((0x1ffefffffULL & vlSelfRef.sklansky_adder__DOT__propagates
          [3U]) | ((QData)((IData)((1U & ((IData)((
                                                   vlSelfRef.sklansky_adder__DOT__propagates
                                                   [2U] 
                                                   >> 0x14U)) 
                                          & (IData)(
                                                    (vlSelfRef.sklansky_adder__DOT__propagates
                                                     [2U] 
                                                     >> 0x13U)))))) 
                   << 0x14U));
    vlSelfRef.sklansky_adder__DOT__propagates[3U] = 
        ((0x1ffdfffffULL & vlSelfRef.sklansky_adder__DOT__propagates
          [3U]) | ((QData)((IData)((1U & ((IData)((
                                                   vlSelfRef.sklansky_adder__DOT__propagates
                                                   [2U] 
                                                   >> 0x15U)) 
                                          & (IData)(
                                                    (vlSelfRef.sklansky_adder__DOT__propagates
                                                     [2U] 
                                                     >> 0x14U)))))) 
                   << 0x15U));
    vlSelfRef.sklansky_adder__DOT__propagates[3U] = 
        ((0x1ffbfffffULL & vlSelfRef.sklansky_adder__DOT__propagates
          [3U]) | ((QData)((IData)((1U & ((IData)((
                                                   vlSelfRef.sklansky_adder__DOT__propagates
                                                   [2U] 
                                                   >> 0x16U)) 
                                          & (IData)(
                                                    (vlSelfRef.sklansky_adder__DOT__propagates
                                                     [2U] 
                                                     >> 0x15U)))))) 
                   << 0x16U));
    vlSelfRef.sklansky_adder__DOT__propagates[3U] = 
        ((0x1ff7fffffULL & vlSelfRef.sklansky_adder__DOT__propagates
          [3U]) | ((QData)((IData)((1U & ((IData)((
                                                   vlSelfRef.sklansky_adder__DOT__propagates
                                                   [2U] 
                                                   >> 0x17U)) 
                                          & (IData)(
                                                    (vlSelfRef.sklansky_adder__DOT__propagates
                                                     [2U] 
                                                     >> 0x16U)))))) 
                   << 0x17U));
    vlSelfRef.sklansky_adder__DOT__propagates[3U] = 
        ((0x1feffffffULL & vlSelfRef.sklansky_adder__DOT__propagates
          [3U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__propagates
                                                  [2U] 
                                                  >> 0x18U))))) 
                   << 0x18U));
    vlSelfRef.sklansky_adder__DOT__propagates[3U] = 
        ((0x1fdffffffULL & vlSelfRef.sklansky_adder__DOT__propagates
          [3U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__propagates
                                                  [2U] 
                                                  >> 0x19U))))) 
                   << 0x19U));
    vlSelfRef.sklansky_adder__DOT__propagates[3U] = 
        ((0x1fbffffffULL & vlSelfRef.sklansky_adder__DOT__propagates
          [3U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__propagates
                                                  [2U] 
                                                  >> 0x1aU))))) 
                   << 0x1aU));
    vlSelfRef.sklansky_adder__DOT__propagates[3U] = 
        ((0x1f7ffffffULL & vlSelfRef.sklansky_adder__DOT__propagates
          [3U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__propagates
                                                  [2U] 
                                                  >> 0x1bU))))) 
                   << 0x1bU));
    vlSelfRef.sklansky_adder__DOT__propagates[3U] = 
        ((0x1efffffffULL & vlSelfRef.sklansky_adder__DOT__propagates
          [3U]) | ((QData)((IData)((1U & ((IData)((
                                                   vlSelfRef.sklansky_adder__DOT__propagates
                                                   [2U] 
                                                   >> 0x1cU)) 
                                          & (IData)(
                                                    (vlSelfRef.sklansky_adder__DOT__propagates
                                                     [2U] 
                                                     >> 0x1bU)))))) 
                   << 0x1cU));
    vlSelfRef.sklansky_adder__DOT__propagates[3U] = 
        ((0x1dfffffffULL & vlSelfRef.sklansky_adder__DOT__propagates
          [3U]) | ((QData)((IData)((1U & ((IData)((
                                                   vlSelfRef.sklansky_adder__DOT__propagates
                                                   [2U] 
                                                   >> 0x1dU)) 
                                          & (IData)(
                                                    (vlSelfRef.sklansky_adder__DOT__propagates
                                                     [2U] 
                                                     >> 0x1cU)))))) 
                   << 0x1dU));
    vlSelfRef.sklansky_adder__DOT__propagates[3U] = 
        ((0x1bfffffffULL & vlSelfRef.sklansky_adder__DOT__propagates
          [3U]) | ((QData)((IData)((1U & ((IData)((
                                                   vlSelfRef.sklansky_adder__DOT__propagates
                                                   [2U] 
                                                   >> 0x1eU)) 
                                          & (IData)(
                                                    (vlSelfRef.sklansky_adder__DOT__propagates
                                                     [2U] 
                                                     >> 0x1dU)))))) 
                   << 0x1eU));
    vlSelfRef.sklansky_adder__DOT__propagates[3U] = 
        ((0x17fffffffULL & vlSelfRef.sklansky_adder__DOT__propagates
          [3U]) | ((QData)((IData)((1U & ((IData)((
                                                   vlSelfRef.sklansky_adder__DOT__propagates
                                                   [2U] 
                                                   >> 0x1fU)) 
                                          & (IData)(
                                                    (vlSelfRef.sklansky_adder__DOT__propagates
                                                     [2U] 
                                                     >> 0x1eU)))))) 
                   << 0x1fU));
    vlSelfRef.sklansky_adder__DOT__propagates[3U] = 
        ((0xffffffffULL & vlSelfRef.sklansky_adder__DOT__propagates
          [3U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__propagates
                                                  [2U] 
                                                  >> 0x20U))))) 
                   << 0x20U));
    vlSelfRef.sklansky_adder__DOT__propagates[4U] = 
        ((0x1fffffffeULL & vlSelfRef.sklansky_adder__DOT__propagates
          [4U]) | (IData)((IData)((1U & (IData)(vlSelfRef.sklansky_adder__DOT__propagates
                                                [3U])))));
    vlSelfRef.sklansky_adder__DOT__propagates[4U] = 
        ((0x1fffffffdULL & vlSelfRef.sklansky_adder__DOT__propagates
          [4U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__propagates
                                                  [3U] 
                                                  >> 1U))))) 
                   << 1U));
    vlSelfRef.sklansky_adder__DOT__propagates[4U] = 
        ((0x1fffffffbULL & vlSelfRef.sklansky_adder__DOT__propagates
          [4U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__propagates
                                                  [3U] 
                                                  >> 2U))))) 
                   << 2U));
    vlSelfRef.sklansky_adder__DOT__propagates[4U] = 
        ((0x1fffffff7ULL & vlSelfRef.sklansky_adder__DOT__propagates
          [4U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__propagates
                                                  [3U] 
                                                  >> 3U))))) 
                   << 3U));
    vlSelfRef.sklansky_adder__DOT__propagates[4U] = 
        ((0x1ffffffefULL & vlSelfRef.sklansky_adder__DOT__propagates
          [4U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__propagates
                                                  [3U] 
                                                  >> 4U))))) 
                   << 4U));
    vlSelfRef.sklansky_adder__DOT__propagates[4U] = 
        ((0x1ffffffdfULL & vlSelfRef.sklansky_adder__DOT__propagates
          [4U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__propagates
                                                  [3U] 
                                                  >> 5U))))) 
                   << 5U));
    vlSelfRef.sklansky_adder__DOT__propagates[4U] = 
        ((0x1ffffffbfULL & vlSelfRef.sklansky_adder__DOT__propagates
          [4U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__propagates
                                                  [3U] 
                                                  >> 6U))))) 
                   << 6U));
    vlSelfRef.sklansky_adder__DOT__propagates[4U] = 
        ((0x1ffffff7fULL & vlSelfRef.sklansky_adder__DOT__propagates
          [4U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__propagates
                                                  [3U] 
                                                  >> 7U))))) 
                   << 7U));
    vlSelfRef.sklansky_adder__DOT__propagates[4U] = 
        ((0x1ffff7fffULL & vlSelfRef.sklansky_adder__DOT__propagates
          [4U]) | ((QData)((IData)((1U & ((IData)((
                                                   vlSelfRef.sklansky_adder__DOT__propagates
                                                   [3U] 
                                                   >> 0xfU)) 
                                          & (IData)(
                                                    (vlSelfRef.sklansky_adder__DOT__propagates
                                                     [3U] 
                                                     >> 0xeU)))))) 
                   << 0xfU));
    vlSelfRef.sklansky_adder__DOT__propagates[4U] = 
        ((0x1fffeffffULL & vlSelfRef.sklansky_adder__DOT__propagates
          [4U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__propagates
                                                  [3U] 
                                                  >> 0x10U))))) 
                   << 0x10U));
    vlSelfRef.sklansky_adder__DOT__propagates[4U] = 
        ((0x1fffdffffULL & vlSelfRef.sklansky_adder__DOT__propagates
          [4U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__propagates
                                                  [3U] 
                                                  >> 0x11U))))) 
                   << 0x11U));
    vlSelfRef.sklansky_adder__DOT__propagates[4U] = 
        ((0x1fffbffffULL & vlSelfRef.sklansky_adder__DOT__propagates
          [4U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__propagates
                                                  [3U] 
                                                  >> 0x12U))))) 
                   << 0x12U));
    vlSelfRef.sklansky_adder__DOT__propagates[4U] = 
        ((0x1fff7ffffULL & vlSelfRef.sklansky_adder__DOT__propagates
          [4U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__propagates
                                                  [3U] 
                                                  >> 0x13U))))) 
                   << 0x13U));
    vlSelfRef.sklansky_adder__DOT__propagates[4U] = 
        ((0x1ffefffffULL & vlSelfRef.sklansky_adder__DOT__propagates
          [4U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__propagates
                                                  [3U] 
                                                  >> 0x14U))))) 
                   << 0x14U));
    vlSelfRef.sklansky_adder__DOT__propagates[4U] = 
        ((0x1ffdfffffULL & vlSelfRef.sklansky_adder__DOT__propagates
          [4U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__propagates
                                                  [3U] 
                                                  >> 0x15U))))) 
                   << 0x15U));
    vlSelfRef.sklansky_adder__DOT__propagates[4U] = 
        ((0x1ffbfffffULL & vlSelfRef.sklansky_adder__DOT__propagates
          [4U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__propagates
                                                  [3U] 
                                                  >> 0x16U))))) 
                   << 0x16U));
    vlSelfRef.sklansky_adder__DOT__propagates[4U] = 
        ((0x1ff7fffffULL & vlSelfRef.sklansky_adder__DOT__propagates
          [4U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__propagates
                                                  [3U] 
                                                  >> 0x17U))))) 
                   << 0x17U));
    vlSelfRef.sklansky_adder__DOT__propagates[4U] = 
        ((0x1feffffffULL & vlSelfRef.sklansky_adder__DOT__propagates
          [4U]) | ((QData)((IData)((1U & ((IData)((
                                                   vlSelfRef.sklansky_adder__DOT__propagates
                                                   [3U] 
                                                   >> 0x18U)) 
                                          & (IData)(
                                                    (vlSelfRef.sklansky_adder__DOT__propagates
                                                     [3U] 
                                                     >> 0x17U)))))) 
                   << 0x18U));
    vlSelfRef.sklansky_adder__DOT__propagates[4U] = 
        ((0x1fdffffffULL & vlSelfRef.sklansky_adder__DOT__propagates
          [4U]) | ((QData)((IData)((1U & ((IData)((
                                                   vlSelfRef.sklansky_adder__DOT__propagates
                                                   [3U] 
                                                   >> 0x19U)) 
                                          & (IData)(
                                                    (vlSelfRef.sklansky_adder__DOT__propagates
                                                     [3U] 
                                                     >> 0x18U)))))) 
                   << 0x19U));
    vlSelfRef.sklansky_adder__DOT__propagates[4U] = 
        ((0x1fbffffffULL & vlSelfRef.sklansky_adder__DOT__propagates
          [4U]) | ((QData)((IData)((1U & ((IData)((
                                                   vlSelfRef.sklansky_adder__DOT__propagates
                                                   [3U] 
                                                   >> 0x1aU)) 
                                          & (IData)(
                                                    (vlSelfRef.sklansky_adder__DOT__propagates
                                                     [3U] 
                                                     >> 0x19U)))))) 
                   << 0x1aU));
    vlSelfRef.sklansky_adder__DOT__propagates[4U] = 
        ((0x1f7ffffffULL & vlSelfRef.sklansky_adder__DOT__propagates
          [4U]) | ((QData)((IData)((1U & ((IData)((
                                                   vlSelfRef.sklansky_adder__DOT__propagates
                                                   [3U] 
                                                   >> 0x1bU)) 
                                          & (IData)(
                                                    (vlSelfRef.sklansky_adder__DOT__propagates
                                                     [3U] 
                                                     >> 0x1aU)))))) 
                   << 0x1bU));
    vlSelfRef.sklansky_adder__DOT__propagates[4U] = 
        ((0x1efffffffULL & vlSelfRef.sklansky_adder__DOT__propagates
          [4U]) | ((QData)((IData)((1U & ((IData)((
                                                   vlSelfRef.sklansky_adder__DOT__propagates
                                                   [3U] 
                                                   >> 0x1cU)) 
                                          & (IData)(
                                                    (vlSelfRef.sklansky_adder__DOT__propagates
                                                     [3U] 
                                                     >> 0x1bU)))))) 
                   << 0x1cU));
    vlSelfRef.sklansky_adder__DOT__propagates[4U] = 
        ((0x1dfffffffULL & vlSelfRef.sklansky_adder__DOT__propagates
          [4U]) | ((QData)((IData)((1U & ((IData)((
                                                   vlSelfRef.sklansky_adder__DOT__propagates
                                                   [3U] 
                                                   >> 0x1dU)) 
                                          & (IData)(
                                                    (vlSelfRef.sklansky_adder__DOT__propagates
                                                     [3U] 
                                                     >> 0x1cU)))))) 
                   << 0x1dU));
    vlSelfRef.sklansky_adder__DOT__propagates[4U] = 
        ((0x1bfffffffULL & vlSelfRef.sklansky_adder__DOT__propagates
          [4U]) | ((QData)((IData)((1U & ((IData)((
                                                   vlSelfRef.sklansky_adder__DOT__propagates
                                                   [3U] 
                                                   >> 0x1eU)) 
                                          & (IData)(
                                                    (vlSelfRef.sklansky_adder__DOT__propagates
                                                     [3U] 
                                                     >> 0x1dU)))))) 
                   << 0x1eU));
    vlSelfRef.sklansky_adder__DOT__propagates[4U] = 
        ((0x17fffffffULL & vlSelfRef.sklansky_adder__DOT__propagates
          [4U]) | ((QData)((IData)((1U & ((IData)((
                                                   vlSelfRef.sklansky_adder__DOT__propagates
                                                   [3U] 
                                                   >> 0x1fU)) 
                                          & (IData)(
                                                    (vlSelfRef.sklansky_adder__DOT__propagates
                                                     [3U] 
                                                     >> 0x1eU)))))) 
                   << 0x1fU));
    vlSelfRef.sklansky_adder__DOT__propagates[4U] = 
        ((0xffffffffULL & vlSelfRef.sklansky_adder__DOT__propagates
          [4U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__propagates
                                                  [3U] 
                                                  >> 0x20U))))) 
                   << 0x20U));
    vlSelfRef.sklansky_adder__DOT__propagates[5U] = 
        ((0x1fffffffeULL & vlSelfRef.sklansky_adder__DOT__propagates
          [5U]) | (IData)((IData)((1U & (IData)(vlSelfRef.sklansky_adder__DOT__propagates
                                                [4U])))));
    vlSelfRef.sklansky_adder__DOT__propagates[5U] = 
        ((0x1fffffffdULL & vlSelfRef.sklansky_adder__DOT__propagates
          [5U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__propagates
                                                  [4U] 
                                                  >> 1U))))) 
                   << 1U));
    vlSelfRef.sklansky_adder__DOT__propagates[5U] = 
        ((0x1fffffffbULL & vlSelfRef.sklansky_adder__DOT__propagates
          [5U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__propagates
                                                  [4U] 
                                                  >> 2U))))) 
                   << 2U));
    vlSelfRef.sklansky_adder__DOT__propagates[5U] = 
        ((0x1fffffff7ULL & vlSelfRef.sklansky_adder__DOT__propagates
          [5U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__propagates
                                                  [4U] 
                                                  >> 3U))))) 
                   << 3U));
    vlSelfRef.sklansky_adder__DOT__propagates[5U] = 
        ((0x1ffffffefULL & vlSelfRef.sklansky_adder__DOT__propagates
          [5U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__propagates
                                                  [4U] 
                                                  >> 4U))))) 
                   << 4U));
    vlSelfRef.sklansky_adder__DOT__propagates[5U] = 
        ((0x1ffffffdfULL & vlSelfRef.sklansky_adder__DOT__propagates
          [5U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__propagates
                                                  [4U] 
                                                  >> 5U))))) 
                   << 5U));
    vlSelfRef.sklansky_adder__DOT__propagates[5U] = 
        ((0x1ffffffbfULL & vlSelfRef.sklansky_adder__DOT__propagates
          [5U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__propagates
                                                  [4U] 
                                                  >> 6U))))) 
                   << 6U));
    vlSelfRef.sklansky_adder__DOT__propagates[5U] = 
        ((0x1ffffff7fULL & vlSelfRef.sklansky_adder__DOT__propagates
          [5U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__propagates
                                                  [4U] 
                                                  >> 7U))))) 
                   << 7U));
    vlSelfRef.sklansky_adder__DOT__propagates[5U] = 
        ((0x1fffffeffULL & vlSelfRef.sklansky_adder__DOT__propagates
          [5U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__propagates
                                                  [4U] 
                                                  >> 8U))))) 
                   << 8U));
    vlSelfRef.sklansky_adder__DOT__propagates[5U] = 
        ((0x1fffffdffULL & vlSelfRef.sklansky_adder__DOT__propagates
          [5U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__propagates
                                                  [4U] 
                                                  >> 9U))))) 
                   << 9U));
    vlSelfRef.sklansky_adder__DOT__propagates[5U] = 
        ((0x1fffffbffULL & vlSelfRef.sklansky_adder__DOT__propagates
          [5U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__propagates
                                                  [4U] 
                                                  >> 0xaU))))) 
                   << 0xaU));
    vlSelfRef.sklansky_adder__DOT__propagates[5U] = 
        ((0x1fffff7ffULL & vlSelfRef.sklansky_adder__DOT__propagates
          [5U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__propagates
                                                  [4U] 
                                                  >> 0xbU))))) 
                   << 0xbU));
    vlSelfRef.sklansky_adder__DOT__propagates[5U] = 
        ((0x1ffffefffULL & vlSelfRef.sklansky_adder__DOT__propagates
          [5U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__propagates
                                                  [4U] 
                                                  >> 0xcU))))) 
                   << 0xcU));
    vlSelfRef.sklansky_adder__DOT__propagates[5U] = 
        ((0x1ffffdfffULL & vlSelfRef.sklansky_adder__DOT__propagates
          [5U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__propagates
                                                  [4U] 
                                                  >> 0xdU))))) 
                   << 0xdU));
    vlSelfRef.sklansky_adder__DOT__propagates[5U] = 
        ((0x1ffffbfffULL & vlSelfRef.sklansky_adder__DOT__propagates
          [5U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__propagates
                                                  [4U] 
                                                  >> 0xeU))))) 
                   << 0xeU));
    vlSelfRef.sklansky_adder__DOT__propagates[5U] = 
        ((0x1ffff7fffULL & vlSelfRef.sklansky_adder__DOT__propagates
          [5U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__propagates
                                                  [4U] 
                                                  >> 0xfU))))) 
                   << 0xfU));
    vlSelfRef.sklansky_adder__DOT__propagates[5U] = 
        ((0x17fffffffULL & vlSelfRef.sklansky_adder__DOT__propagates
          [5U]) | ((QData)((IData)((1U & ((IData)((
                                                   vlSelfRef.sklansky_adder__DOT__propagates
                                                   [4U] 
                                                   >> 0x1fU)) 
                                          & (IData)(
                                                    (vlSelfRef.sklansky_adder__DOT__propagates
                                                     [4U] 
                                                     >> 0x1eU)))))) 
                   << 0x1fU));
    vlSelfRef.sklansky_adder__DOT__propagates[5U] = 
        ((0xffffffffULL & vlSelfRef.sklansky_adder__DOT__propagates
          [5U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__propagates
                                                  [4U] 
                                                  >> 0x20U))))) 
                   << 0x20U));
}

VL_INLINE_OPT void Vsklansky_rewrite___024root___act_sequent__TOP__1(Vsklansky_rewrite___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsklansky_rewrite___024root___act_sequent__TOP__1\n"); );
    Vsklansky_rewrite__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.sklansky_adder__DOT__generates[1U] = 
        ((0x1fffffffeULL & vlSelfRef.sklansky_adder__DOT__generates
          [1U]) | (IData)((IData)((1U & (IData)(vlSelfRef.sklansky_adder__DOT__generates
                                                [0U])))));
    vlSelfRef.sklansky_adder__DOT__generates[1U] = 
        ((0x1fffffffbULL & vlSelfRef.sklansky_adder__DOT__generates
          [1U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__generates
                                                  [0U] 
                                                  >> 2U))))) 
                   << 2U));
    vlSelfRef.sklansky_adder__DOT__generates[1U] = 
        ((0x1ffffffefULL & vlSelfRef.sklansky_adder__DOT__generates
          [1U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__generates
                                                  [0U] 
                                                  >> 4U))))) 
                   << 4U));
    vlSelfRef.sklansky_adder__DOT__generates[1U] = 
        ((0x1ffffffbfULL & vlSelfRef.sklansky_adder__DOT__generates
          [1U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__generates
                                                  [0U] 
                                                  >> 6U))))) 
                   << 6U));
    vlSelfRef.sklansky_adder__DOT__generates[1U] = 
        ((0x1fffffeffULL & vlSelfRef.sklansky_adder__DOT__generates
          [1U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__generates
                                                  [0U] 
                                                  >> 8U))))) 
                   << 8U));
    vlSelfRef.sklansky_adder__DOT__generates[1U] = 
        ((0x1fffffbffULL & vlSelfRef.sklansky_adder__DOT__generates
          [1U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__generates
                                                  [0U] 
                                                  >> 0xaU))))) 
                   << 0xaU));
    vlSelfRef.sklansky_adder__DOT__generates[1U] = 
        ((0x1ffffefffULL & vlSelfRef.sklansky_adder__DOT__generates
          [1U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__generates
                                                  [0U] 
                                                  >> 0xcU))))) 
                   << 0xcU));
    vlSelfRef.sklansky_adder__DOT__generates[1U] = 
        ((0x1ffffbfffULL & vlSelfRef.sklansky_adder__DOT__generates
          [1U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__generates
                                                  [0U] 
                                                  >> 0xeU))))) 
                   << 0xeU));
    vlSelfRef.sklansky_adder__DOT__generates[1U] = 
        ((0x1fffeffffULL & vlSelfRef.sklansky_adder__DOT__generates
          [1U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__generates
                                                  [0U] 
                                                  >> 0x10U))))) 
                   << 0x10U));
    vlSelfRef.sklansky_adder__DOT__generates[1U] = 
        ((0x1fffbffffULL & vlSelfRef.sklansky_adder__DOT__generates
          [1U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__generates
                                                  [0U] 
                                                  >> 0x12U))))) 
                   << 0x12U));
    vlSelfRef.sklansky_adder__DOT__generates[1U] = 
        ((0x1ffefffffULL & vlSelfRef.sklansky_adder__DOT__generates
          [1U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__generates
                                                  [0U] 
                                                  >> 0x14U))))) 
                   << 0x14U));
    vlSelfRef.sklansky_adder__DOT__generates[1U] = 
        ((0x1ffbfffffULL & vlSelfRef.sklansky_adder__DOT__generates
          [1U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__generates
                                                  [0U] 
                                                  >> 0x16U))))) 
                   << 0x16U));
    vlSelfRef.sklansky_adder__DOT__generates[1U] = 
        ((0x1feffffffULL & vlSelfRef.sklansky_adder__DOT__generates
          [1U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__generates
                                                  [0U] 
                                                  >> 0x18U))))) 
                   << 0x18U));
    vlSelfRef.sklansky_adder__DOT__generates[1U] = 
        ((0x1fbffffffULL & vlSelfRef.sklansky_adder__DOT__generates
          [1U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__generates
                                                  [0U] 
                                                  >> 0x1aU))))) 
                   << 0x1aU));
    vlSelfRef.sklansky_adder__DOT__generates[1U] = 
        ((0x1efffffffULL & vlSelfRef.sklansky_adder__DOT__generates
          [1U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__generates
                                                  [0U] 
                                                  >> 0x1cU))))) 
                   << 0x1cU));
    vlSelfRef.sklansky_adder__DOT__generates[1U] = 
        ((0x1bfffffffULL & vlSelfRef.sklansky_adder__DOT__generates
          [1U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__generates
                                                  [0U] 
                                                  >> 0x1eU))))) 
                   << 0x1eU));
    vlSelfRef.sklansky_adder__DOT__generates[1U] = 
        ((0xffffffffULL & vlSelfRef.sklansky_adder__DOT__generates
          [1U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__generates
                                                  [0U] 
                                                  >> 0x20U))))) 
                   << 0x20U));
    vlSelfRef.sklansky_adder__DOT__generates[2U] = 
        ((0x1fffffffeULL & vlSelfRef.sklansky_adder__DOT__generates
          [2U]) | (IData)((IData)((1U & (IData)(vlSelfRef.sklansky_adder__DOT__generates
                                                [1U])))));
    vlSelfRef.sklansky_adder__DOT__generates[2U] = 
        ((0x1fffffffdULL & vlSelfRef.sklansky_adder__DOT__generates
          [2U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__generates
                                                  [1U] 
                                                  >> 1U))))) 
                   << 1U));
    vlSelfRef.sklansky_adder__DOT__generates[2U] = 
        ((0x1ffffffefULL & vlSelfRef.sklansky_adder__DOT__generates
          [2U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__generates
                                                  [1U] 
                                                  >> 4U))))) 
                   << 4U));
    vlSelfRef.sklansky_adder__DOT__generates[2U] = 
        ((0x1ffffffdfULL & vlSelfRef.sklansky_adder__DOT__generates
          [2U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__generates
                                                  [1U] 
                                                  >> 5U))))) 
                   << 5U));
    vlSelfRef.sklansky_adder__DOT__generates[2U] = 
        ((0x1fffffeffULL & vlSelfRef.sklansky_adder__DOT__generates
          [2U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__generates
                                                  [1U] 
                                                  >> 8U))))) 
                   << 8U));
    vlSelfRef.sklansky_adder__DOT__generates[2U] = 
        ((0x1fffffdffULL & vlSelfRef.sklansky_adder__DOT__generates
          [2U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__generates
                                                  [1U] 
                                                  >> 9U))))) 
                   << 9U));
    vlSelfRef.sklansky_adder__DOT__generates[2U] = 
        ((0x1ffffefffULL & vlSelfRef.sklansky_adder__DOT__generates
          [2U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__generates
                                                  [1U] 
                                                  >> 0xcU))))) 
                   << 0xcU));
    vlSelfRef.sklansky_adder__DOT__generates[2U] = 
        ((0x1ffffdfffULL & vlSelfRef.sklansky_adder__DOT__generates
          [2U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__generates
                                                  [1U] 
                                                  >> 0xdU))))) 
                   << 0xdU));
    vlSelfRef.sklansky_adder__DOT__generates[2U] = 
        ((0x1fffeffffULL & vlSelfRef.sklansky_adder__DOT__generates
          [2U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__generates
                                                  [1U] 
                                                  >> 0x10U))))) 
                   << 0x10U));
    vlSelfRef.sklansky_adder__DOT__generates[2U] = 
        ((0x1fffdffffULL & vlSelfRef.sklansky_adder__DOT__generates
          [2U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__generates
                                                  [1U] 
                                                  >> 0x11U))))) 
                   << 0x11U));
    vlSelfRef.sklansky_adder__DOT__generates[2U] = 
        ((0x1ffefffffULL & vlSelfRef.sklansky_adder__DOT__generates
          [2U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__generates
                                                  [1U] 
                                                  >> 0x14U))))) 
                   << 0x14U));
    vlSelfRef.sklansky_adder__DOT__generates[2U] = 
        ((0x1ffdfffffULL & vlSelfRef.sklansky_adder__DOT__generates
          [2U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__generates
                                                  [1U] 
                                                  >> 0x15U))))) 
                   << 0x15U));
    vlSelfRef.sklansky_adder__DOT__generates[2U] = 
        ((0x1feffffffULL & vlSelfRef.sklansky_adder__DOT__generates
          [2U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__generates
                                                  [1U] 
                                                  >> 0x18U))))) 
                   << 0x18U));
    vlSelfRef.sklansky_adder__DOT__generates[2U] = 
        ((0x1fdffffffULL & vlSelfRef.sklansky_adder__DOT__generates
          [2U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__generates
                                                  [1U] 
                                                  >> 0x19U))))) 
                   << 0x19U));
    vlSelfRef.sklansky_adder__DOT__generates[2U] = 
        ((0x1efffffffULL & vlSelfRef.sklansky_adder__DOT__generates
          [2U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__generates
                                                  [1U] 
                                                  >> 0x1cU))))) 
                   << 0x1cU));
    vlSelfRef.sklansky_adder__DOT__generates[2U] = 
        ((0x1dfffffffULL & vlSelfRef.sklansky_adder__DOT__generates
          [2U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__generates
                                                  [1U] 
                                                  >> 0x1dU))))) 
                   << 0x1dU));
    vlSelfRef.sklansky_adder__DOT__generates[2U] = 
        ((0xffffffffULL & vlSelfRef.sklansky_adder__DOT__generates
          [2U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__generates
                                                  [1U] 
                                                  >> 0x20U))))) 
                   << 0x20U));
    vlSelfRef.sklansky_adder__DOT__generates[3U] = 
        ((0x1fffffffeULL & vlSelfRef.sklansky_adder__DOT__generates
          [3U]) | (IData)((IData)((1U & (IData)(vlSelfRef.sklansky_adder__DOT__generates
                                                [2U])))));
    vlSelfRef.sklansky_adder__DOT__generates[3U] = 
        ((0x1fffffffdULL & vlSelfRef.sklansky_adder__DOT__generates
          [3U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__generates
                                                  [2U] 
                                                  >> 1U))))) 
                   << 1U));
    vlSelfRef.sklansky_adder__DOT__generates[3U] = 
        ((0x1fffffffbULL & vlSelfRef.sklansky_adder__DOT__generates
          [3U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__generates
                                                  [2U] 
                                                  >> 2U))))) 
                   << 2U));
    vlSelfRef.sklansky_adder__DOT__generates[3U] = 
        ((0x1fffffff7ULL & vlSelfRef.sklansky_adder__DOT__generates
          [3U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__generates
                                                  [2U] 
                                                  >> 3U))))) 
                   << 3U));
    vlSelfRef.sklansky_adder__DOT__generates[3U] = 
        ((0x1fffffeffULL & vlSelfRef.sklansky_adder__DOT__generates
          [3U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__generates
                                                  [2U] 
                                                  >> 8U))))) 
                   << 8U));
    vlSelfRef.sklansky_adder__DOT__generates[3U] = 
        ((0x1fffffdffULL & vlSelfRef.sklansky_adder__DOT__generates
          [3U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__generates
                                                  [2U] 
                                                  >> 9U))))) 
                   << 9U));
    vlSelfRef.sklansky_adder__DOT__generates[3U] = 
        ((0x1fffffbffULL & vlSelfRef.sklansky_adder__DOT__generates
          [3U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__generates
                                                  [2U] 
                                                  >> 0xaU))))) 
                   << 0xaU));
    vlSelfRef.sklansky_adder__DOT__generates[3U] = 
        ((0x1fffff7ffULL & vlSelfRef.sklansky_adder__DOT__generates
          [3U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__generates
                                                  [2U] 
                                                  >> 0xbU))))) 
                   << 0xbU));
    vlSelfRef.sklansky_adder__DOT__generates[3U] = 
        ((0x1fffeffffULL & vlSelfRef.sklansky_adder__DOT__generates
          [3U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__generates
                                                  [2U] 
                                                  >> 0x10U))))) 
                   << 0x10U));
    vlSelfRef.sklansky_adder__DOT__generates[3U] = 
        ((0x1fffdffffULL & vlSelfRef.sklansky_adder__DOT__generates
          [3U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__generates
                                                  [2U] 
                                                  >> 0x11U))))) 
                   << 0x11U));
    vlSelfRef.sklansky_adder__DOT__generates[3U] = 
        ((0x1fffbffffULL & vlSelfRef.sklansky_adder__DOT__generates
          [3U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__generates
                                                  [2U] 
                                                  >> 0x12U))))) 
                   << 0x12U));
    vlSelfRef.sklansky_adder__DOT__generates[3U] = 
        ((0x1fff7ffffULL & vlSelfRef.sklansky_adder__DOT__generates
          [3U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__generates
                                                  [2U] 
                                                  >> 0x13U))))) 
                   << 0x13U));
    vlSelfRef.sklansky_adder__DOT__generates[3U] = 
        ((0x1feffffffULL & vlSelfRef.sklansky_adder__DOT__generates
          [3U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__generates
                                                  [2U] 
                                                  >> 0x18U))))) 
                   << 0x18U));
    vlSelfRef.sklansky_adder__DOT__generates[3U] = 
        ((0x1fdffffffULL & vlSelfRef.sklansky_adder__DOT__generates
          [3U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__generates
                                                  [2U] 
                                                  >> 0x19U))))) 
                   << 0x19U));
    vlSelfRef.sklansky_adder__DOT__generates[3U] = 
        ((0x1fbffffffULL & vlSelfRef.sklansky_adder__DOT__generates
          [3U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__generates
                                                  [2U] 
                                                  >> 0x1aU))))) 
                   << 0x1aU));
    vlSelfRef.sklansky_adder__DOT__generates[3U] = 
        ((0x1f7ffffffULL & vlSelfRef.sklansky_adder__DOT__generates
          [3U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__generates
                                                  [2U] 
                                                  >> 0x1bU))))) 
                   << 0x1bU));
    vlSelfRef.sklansky_adder__DOT__generates[3U] = 
        ((0xffffffffULL & vlSelfRef.sklansky_adder__DOT__generates
          [3U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__generates
                                                  [2U] 
                                                  >> 0x20U))))) 
                   << 0x20U));
    vlSelfRef.sklansky_adder__DOT__generates[4U] = 
        ((0x1fffffffeULL & vlSelfRef.sklansky_adder__DOT__generates
          [4U]) | (IData)((IData)((1U & (IData)(vlSelfRef.sklansky_adder__DOT__generates
                                                [3U])))));
    vlSelfRef.sklansky_adder__DOT__generates[4U] = 
        ((0x1fffffffdULL & vlSelfRef.sklansky_adder__DOT__generates
          [4U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__generates
                                                  [3U] 
                                                  >> 1U))))) 
                   << 1U));
    vlSelfRef.sklansky_adder__DOT__generates[4U] = 
        ((0x1fffffffbULL & vlSelfRef.sklansky_adder__DOT__generates
          [4U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__generates
                                                  [3U] 
                                                  >> 2U))))) 
                   << 2U));
    vlSelfRef.sklansky_adder__DOT__generates[4U] = 
        ((0x1fffffff7ULL & vlSelfRef.sklansky_adder__DOT__generates
          [4U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__generates
                                                  [3U] 
                                                  >> 3U))))) 
                   << 3U));
    vlSelfRef.sklansky_adder__DOT__generates[4U] = 
        ((0x1ffffffefULL & vlSelfRef.sklansky_adder__DOT__generates
          [4U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__generates
                                                  [3U] 
                                                  >> 4U))))) 
                   << 4U));
    vlSelfRef.sklansky_adder__DOT__generates[4U] = 
        ((0x1ffffffdfULL & vlSelfRef.sklansky_adder__DOT__generates
          [4U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__generates
                                                  [3U] 
                                                  >> 5U))))) 
                   << 5U));
    vlSelfRef.sklansky_adder__DOT__generates[4U] = 
        ((0x1ffffffbfULL & vlSelfRef.sklansky_adder__DOT__generates
          [4U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__generates
                                                  [3U] 
                                                  >> 6U))))) 
                   << 6U));
    vlSelfRef.sklansky_adder__DOT__generates[4U] = 
        ((0x1ffffff7fULL & vlSelfRef.sklansky_adder__DOT__generates
          [4U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__generates
                                                  [3U] 
                                                  >> 7U))))) 
                   << 7U));
    vlSelfRef.sklansky_adder__DOT__generates[4U] = 
        ((0x1fffeffffULL & vlSelfRef.sklansky_adder__DOT__generates
          [4U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__generates
                                                  [3U] 
                                                  >> 0x10U))))) 
                   << 0x10U));
    vlSelfRef.sklansky_adder__DOT__generates[4U] = 
        ((0x1fffdffffULL & vlSelfRef.sklansky_adder__DOT__generates
          [4U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__generates
                                                  [3U] 
                                                  >> 0x11U))))) 
                   << 0x11U));
    vlSelfRef.sklansky_adder__DOT__generates[4U] = 
        ((0x1fffbffffULL & vlSelfRef.sklansky_adder__DOT__generates
          [4U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__generates
                                                  [3U] 
                                                  >> 0x12U))))) 
                   << 0x12U));
    vlSelfRef.sklansky_adder__DOT__generates[4U] = 
        ((0x1fff7ffffULL & vlSelfRef.sklansky_adder__DOT__generates
          [4U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__generates
                                                  [3U] 
                                                  >> 0x13U))))) 
                   << 0x13U));
    vlSelfRef.sklansky_adder__DOT__generates[4U] = 
        ((0x1ffefffffULL & vlSelfRef.sklansky_adder__DOT__generates
          [4U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__generates
                                                  [3U] 
                                                  >> 0x14U))))) 
                   << 0x14U));
    vlSelfRef.sklansky_adder__DOT__generates[4U] = 
        ((0x1ffdfffffULL & vlSelfRef.sklansky_adder__DOT__generates
          [4U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__generates
                                                  [3U] 
                                                  >> 0x15U))))) 
                   << 0x15U));
    vlSelfRef.sklansky_adder__DOT__generates[4U] = 
        ((0x1ffbfffffULL & vlSelfRef.sklansky_adder__DOT__generates
          [4U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__generates
                                                  [3U] 
                                                  >> 0x16U))))) 
                   << 0x16U));
    vlSelfRef.sklansky_adder__DOT__generates[4U] = 
        ((0x1ff7fffffULL & vlSelfRef.sklansky_adder__DOT__generates
          [4U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__generates
                                                  [3U] 
                                                  >> 0x17U))))) 
                   << 0x17U));
    vlSelfRef.sklansky_adder__DOT__generates[4U] = 
        ((0xffffffffULL & vlSelfRef.sklansky_adder__DOT__generates
          [4U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__generates
                                                  [3U] 
                                                  >> 0x20U))))) 
                   << 0x20U));
    vlSelfRef.sklansky_adder__DOT__generates[5U] = 
        ((0x1fffffffeULL & vlSelfRef.sklansky_adder__DOT__generates
          [5U]) | (IData)((IData)((1U & (IData)(vlSelfRef.sklansky_adder__DOT__generates
                                                [4U])))));
    vlSelfRef.sklansky_adder__DOT__generates[5U] = 
        ((0x1fffffffdULL & vlSelfRef.sklansky_adder__DOT__generates
          [5U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__generates
                                                  [4U] 
                                                  >> 1U))))) 
                   << 1U));
    vlSelfRef.sklansky_adder__DOT__generates[5U] = 
        ((0x1fffffffbULL & vlSelfRef.sklansky_adder__DOT__generates
          [5U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__generates
                                                  [4U] 
                                                  >> 2U))))) 
                   << 2U));
    vlSelfRef.sklansky_adder__DOT__generates[5U] = 
        ((0x1fffffff7ULL & vlSelfRef.sklansky_adder__DOT__generates
          [5U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__generates
                                                  [4U] 
                                                  >> 3U))))) 
                   << 3U));
    vlSelfRef.sklansky_adder__DOT__generates[5U] = 
        ((0x1ffffffefULL & vlSelfRef.sklansky_adder__DOT__generates
          [5U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__generates
                                                  [4U] 
                                                  >> 4U))))) 
                   << 4U));
    vlSelfRef.sklansky_adder__DOT__generates[5U] = 
        ((0x1ffffffdfULL & vlSelfRef.sklansky_adder__DOT__generates
          [5U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__generates
                                                  [4U] 
                                                  >> 5U))))) 
                   << 5U));
    vlSelfRef.sklansky_adder__DOT__generates[5U] = 
        ((0x1ffffffbfULL & vlSelfRef.sklansky_adder__DOT__generates
          [5U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__generates
                                                  [4U] 
                                                  >> 6U))))) 
                   << 6U));
    vlSelfRef.sklansky_adder__DOT__generates[5U] = 
        ((0x1ffffff7fULL & vlSelfRef.sklansky_adder__DOT__generates
          [5U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__generates
                                                  [4U] 
                                                  >> 7U))))) 
                   << 7U));
    vlSelfRef.sklansky_adder__DOT__generates[5U] = 
        ((0x1fffffeffULL & vlSelfRef.sklansky_adder__DOT__generates
          [5U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__generates
                                                  [4U] 
                                                  >> 8U))))) 
                   << 8U));
    vlSelfRef.sklansky_adder__DOT__generates[5U] = 
        ((0x1fffffdffULL & vlSelfRef.sklansky_adder__DOT__generates
          [5U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__generates
                                                  [4U] 
                                                  >> 9U))))) 
                   << 9U));
    vlSelfRef.sklansky_adder__DOT__generates[5U] = 
        ((0x1fffffbffULL & vlSelfRef.sklansky_adder__DOT__generates
          [5U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__generates
                                                  [4U] 
                                                  >> 0xaU))))) 
                   << 0xaU));
    vlSelfRef.sklansky_adder__DOT__generates[5U] = 
        ((0x1fffff7ffULL & vlSelfRef.sklansky_adder__DOT__generates
          [5U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__generates
                                                  [4U] 
                                                  >> 0xbU))))) 
                   << 0xbU));
    vlSelfRef.sklansky_adder__DOT__generates[5U] = 
        ((0x1ffffefffULL & vlSelfRef.sklansky_adder__DOT__generates
          [5U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__generates
                                                  [4U] 
                                                  >> 0xcU))))) 
                   << 0xcU));
    vlSelfRef.sklansky_adder__DOT__generates[5U] = 
        ((0x1ffffdfffULL & vlSelfRef.sklansky_adder__DOT__generates
          [5U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__generates
                                                  [4U] 
                                                  >> 0xdU))))) 
                   << 0xdU));
    vlSelfRef.sklansky_adder__DOT__generates[5U] = 
        ((0x1ffffbfffULL & vlSelfRef.sklansky_adder__DOT__generates
          [5U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__generates
                                                  [4U] 
                                                  >> 0xeU))))) 
                   << 0xeU));
    vlSelfRef.sklansky_adder__DOT__generates[5U] = 
        ((0x1ffff7fffULL & vlSelfRef.sklansky_adder__DOT__generates
          [5U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__generates
                                                  [4U] 
                                                  >> 0xfU))))) 
                   << 0xfU));
    vlSelfRef.sklansky_adder__DOT__generates[5U] = 
        ((0xffffffffULL & vlSelfRef.sklansky_adder__DOT__generates
          [5U]) | ((QData)((IData)((1U & (IData)((vlSelfRef.sklansky_adder__DOT__generates
                                                  [4U] 
                                                  >> 0x20U))))) 
                   << 0x20U));
}

VL_INLINE_OPT void Vsklansky_rewrite___024root___act_sequent__TOP__2(Vsklansky_rewrite___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsklansky_rewrite___024root___act_sequent__TOP__2\n"); );
    Vsklansky_rewrite__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.sklansky_adder__DOT__generates[1U] = 
        ((0x1fffffffdULL & vlSelfRef.sklansky_adder__DOT__generates
          [1U]) | ((QData)((IData)((1U & ((IData)((
                                                   vlSelfRef.sklansky_adder__DOT__generates
                                                   [0U] 
                                                   >> 1U)) 
                                          | ((IData)(
                                                     (vlSelfRef.sklansky_adder__DOT__propagates
                                                      [0U] 
                                                      >> 1U)) 
                                             & (IData)(
                                                       vlSelfRef.sklansky_adder__DOT__generates
                                                       [0U])))))) 
                   << 1U));
    vlSelfRef.sklansky_adder__DOT__generates[1U] = 
        ((0x1fffffff7ULL & vlSelfRef.sklansky_adder__DOT__generates
          [1U]) | ((QData)((IData)((1U & ((IData)((
                                                   vlSelfRef.sklansky_adder__DOT__generates
                                                   [0U] 
                                                   >> 3U)) 
                                          | ((IData)(
                                                     (vlSelfRef.sklansky_adder__DOT__propagates
                                                      [0U] 
                                                      >> 3U)) 
                                             & (IData)(
                                                       (vlSelfRef.sklansky_adder__DOT__generates
                                                        [0U] 
                                                        >> 2U))))))) 
                   << 3U));
    vlSelfRef.sklansky_adder__DOT__generates[1U] = 
        ((0x1ffffffdfULL & vlSelfRef.sklansky_adder__DOT__generates
          [1U]) | ((QData)((IData)((1U & ((IData)((
                                                   vlSelfRef.sklansky_adder__DOT__generates
                                                   [0U] 
                                                   >> 5U)) 
                                          | ((IData)(
                                                     (vlSelfRef.sklansky_adder__DOT__propagates
                                                      [0U] 
                                                      >> 5U)) 
                                             & (IData)(
                                                       (vlSelfRef.sklansky_adder__DOT__generates
                                                        [0U] 
                                                        >> 4U))))))) 
                   << 5U));
    vlSelfRef.sklansky_adder__DOT__generates[1U] = 
        ((0x1ffffff7fULL & vlSelfRef.sklansky_adder__DOT__generates
          [1U]) | ((QData)((IData)((1U & ((IData)((
                                                   vlSelfRef.sklansky_adder__DOT__generates
                                                   [0U] 
                                                   >> 7U)) 
                                          | ((IData)(
                                                     (vlSelfRef.sklansky_adder__DOT__propagates
                                                      [0U] 
                                                      >> 7U)) 
                                             & (IData)(
                                                       (vlSelfRef.sklansky_adder__DOT__generates
                                                        [0U] 
                                                        >> 6U))))))) 
                   << 7U));
    vlSelfRef.sklansky_adder__DOT__generates[1U] = 
        ((0x1fffffdffULL & vlSelfRef.sklansky_adder__DOT__generates
          [1U]) | ((QData)((IData)((1U & ((IData)((
                                                   vlSelfRef.sklansky_adder__DOT__generates
                                                   [0U] 
                                                   >> 9U)) 
                                          | ((IData)(
                                                     (vlSelfRef.sklansky_adder__DOT__propagates
                                                      [0U] 
                                                      >> 9U)) 
                                             & (IData)(
                                                       (vlSelfRef.sklansky_adder__DOT__generates
                                                        [0U] 
                                                        >> 8U))))))) 
                   << 9U));
    vlSelfRef.sklansky_adder__DOT__generates[1U] = 
        ((0x1fffff7ffULL & vlSelfRef.sklansky_adder__DOT__generates
          [1U]) | ((QData)((IData)((1U & ((IData)((
                                                   vlSelfRef.sklansky_adder__DOT__generates
                                                   [0U] 
                                                   >> 0xbU)) 
                                          | ((IData)(
                                                     (vlSelfRef.sklansky_adder__DOT__propagates
                                                      [0U] 
                                                      >> 0xbU)) 
                                             & (IData)(
                                                       (vlSelfRef.sklansky_adder__DOT__generates
                                                        [0U] 
                                                        >> 0xaU))))))) 
                   << 0xbU));
    vlSelfRef.sklansky_adder__DOT__generates[1U] = 
        ((0x1ffffdfffULL & vlSelfRef.sklansky_adder__DOT__generates
          [1U]) | ((QData)((IData)((1U & ((IData)((
                                                   vlSelfRef.sklansky_adder__DOT__generates
                                                   [0U] 
                                                   >> 0xdU)) 
                                          | ((IData)(
                                                     (vlSelfRef.sklansky_adder__DOT__propagates
                                                      [0U] 
                                                      >> 0xdU)) 
                                             & (IData)(
                                                       (vlSelfRef.sklansky_adder__DOT__generates
                                                        [0U] 
                                                        >> 0xcU))))))) 
                   << 0xdU));
    vlSelfRef.sklansky_adder__DOT__generates[1U] = 
        ((0x1ffff7fffULL & vlSelfRef.sklansky_adder__DOT__generates
          [1U]) | ((QData)((IData)((1U & ((IData)((
                                                   vlSelfRef.sklansky_adder__DOT__generates
                                                   [0U] 
                                                   >> 0xfU)) 
                                          | ((IData)(
                                                     (vlSelfRef.sklansky_adder__DOT__propagates
                                                      [0U] 
                                                      >> 0xfU)) 
                                             & (IData)(
                                                       (vlSelfRef.sklansky_adder__DOT__generates
                                                        [0U] 
                                                        >> 0xeU))))))) 
                   << 0xfU));
    vlSelfRef.sklansky_adder__DOT__generates[1U] = 
        ((0x1fffdffffULL & vlSelfRef.sklansky_adder__DOT__generates
          [1U]) | ((QData)((IData)((1U & ((IData)((
                                                   vlSelfRef.sklansky_adder__DOT__generates
                                                   [0U] 
                                                   >> 0x11U)) 
                                          | ((IData)(
                                                     (vlSelfRef.sklansky_adder__DOT__propagates
                                                      [0U] 
                                                      >> 0x11U)) 
                                             & (IData)(
                                                       (vlSelfRef.sklansky_adder__DOT__generates
                                                        [0U] 
                                                        >> 0x10U))))))) 
                   << 0x11U));
    vlSelfRef.sklansky_adder__DOT__generates[1U] = 
        ((0x1fff7ffffULL & vlSelfRef.sklansky_adder__DOT__generates
          [1U]) | ((QData)((IData)((1U & ((IData)((
                                                   vlSelfRef.sklansky_adder__DOT__generates
                                                   [0U] 
                                                   >> 0x13U)) 
                                          | ((IData)(
                                                     (vlSelfRef.sklansky_adder__DOT__propagates
                                                      [0U] 
                                                      >> 0x13U)) 
                                             & (IData)(
                                                       (vlSelfRef.sklansky_adder__DOT__generates
                                                        [0U] 
                                                        >> 0x12U))))))) 
                   << 0x13U));
    vlSelfRef.sklansky_adder__DOT__generates[1U] = 
        ((0x1ffdfffffULL & vlSelfRef.sklansky_adder__DOT__generates
          [1U]) | ((QData)((IData)((1U & ((IData)((
                                                   vlSelfRef.sklansky_adder__DOT__generates
                                                   [0U] 
                                                   >> 0x15U)) 
                                          | ((IData)(
                                                     (vlSelfRef.sklansky_adder__DOT__propagates
                                                      [0U] 
                                                      >> 0x15U)) 
                                             & (IData)(
                                                       (vlSelfRef.sklansky_adder__DOT__generates
                                                        [0U] 
                                                        >> 0x14U))))))) 
                   << 0x15U));
    vlSelfRef.sklansky_adder__DOT__generates[1U] = 
        ((0x1ff7fffffULL & vlSelfRef.sklansky_adder__DOT__generates
          [1U]) | ((QData)((IData)((1U & ((IData)((
                                                   vlSelfRef.sklansky_adder__DOT__generates
                                                   [0U] 
                                                   >> 0x17U)) 
                                          | ((IData)(
                                                     (vlSelfRef.sklansky_adder__DOT__propagates
                                                      [0U] 
                                                      >> 0x17U)) 
                                             & (IData)(
                                                       (vlSelfRef.sklansky_adder__DOT__generates
                                                        [0U] 
                                                        >> 0x16U))))))) 
                   << 0x17U));
    vlSelfRef.sklansky_adder__DOT__generates[1U] = 
        ((0x1fdffffffULL & vlSelfRef.sklansky_adder__DOT__generates
          [1U]) | ((QData)((IData)((1U & ((IData)((
                                                   vlSelfRef.sklansky_adder__DOT__generates
                                                   [0U] 
                                                   >> 0x19U)) 
                                          | ((IData)(
                                                     (vlSelfRef.sklansky_adder__DOT__propagates
                                                      [0U] 
                                                      >> 0x19U)) 
                                             & (IData)(
                                                       (vlSelfRef.sklansky_adder__DOT__generates
                                                        [0U] 
                                                        >> 0x18U))))))) 
                   << 0x19U));
    vlSelfRef.sklansky_adder__DOT__generates[1U] = 
        ((0x1f7ffffffULL & vlSelfRef.sklansky_adder__DOT__generates
          [1U]) | ((QData)((IData)((1U & ((IData)((
                                                   vlSelfRef.sklansky_adder__DOT__generates
                                                   [0U] 
                                                   >> 0x1bU)) 
                                          | ((IData)(
                                                     (vlSelfRef.sklansky_adder__DOT__propagates
                                                      [0U] 
                                                      >> 0x1bU)) 
                                             & (IData)(
                                                       (vlSelfRef.sklansky_adder__DOT__generates
                                                        [0U] 
                                                        >> 0x1aU))))))) 
                   << 0x1bU));
    vlSelfRef.sklansky_adder__DOT__generates[1U] = 
        ((0x1dfffffffULL & vlSelfRef.sklansky_adder__DOT__generates
          [1U]) | ((QData)((IData)((1U & ((IData)((
                                                   vlSelfRef.sklansky_adder__DOT__generates
                                                   [0U] 
                                                   >> 0x1dU)) 
                                          | ((IData)(
                                                     (vlSelfRef.sklansky_adder__DOT__propagates
                                                      [0U] 
                                                      >> 0x1dU)) 
                                             & (IData)(
                                                       (vlSelfRef.sklansky_adder__DOT__generates
                                                        [0U] 
                                                        >> 0x1cU))))))) 
                   << 0x1dU));
    vlSelfRef.sklansky_adder__DOT__generates[1U] = 
        ((0x17fffffffULL & vlSelfRef.sklansky_adder__DOT__generates
          [1U]) | ((QData)((IData)((1U & ((IData)((
                                                   vlSelfRef.sklansky_adder__DOT__generates
                                                   [0U] 
                                                   >> 0x1fU)) 
                                          | ((IData)(
                                                     (vlSelfRef.sklansky_adder__DOT__propagates
                                                      [0U] 
                                                      >> 0x1fU)) 
                                             & (IData)(
                                                       (vlSelfRef.sklansky_adder__DOT__generates
                                                        [0U] 
                                                        >> 0x1eU))))))) 
                   << 0x1fU));
    vlSelfRef.sklansky_adder__DOT__generates[2U] = 
        ((0x1fffffffbULL & vlSelfRef.sklansky_adder__DOT__generates
          [2U]) | ((QData)((IData)((1U & ((IData)((
                                                   vlSelfRef.sklansky_adder__DOT__generates
                                                   [1U] 
                                                   >> 2U)) 
                                          | ((IData)(
                                                     (vlSelfRef.sklansky_adder__DOT__propagates
                                                      [1U] 
                                                      >> 2U)) 
                                             & (IData)(
                                                       (vlSelfRef.sklansky_adder__DOT__generates
                                                        [1U] 
                                                        >> 1U))))))) 
                   << 2U));
    vlSelfRef.sklansky_adder__DOT__generates[2U] = 
        ((0x1fffffff7ULL & vlSelfRef.sklansky_adder__DOT__generates
          [2U]) | ((QData)((IData)((1U & ((IData)((
                                                   vlSelfRef.sklansky_adder__DOT__generates
                                                   [1U] 
                                                   >> 3U)) 
                                          | ((IData)(
                                                     (vlSelfRef.sklansky_adder__DOT__propagates
                                                      [1U] 
                                                      >> 3U)) 
                                             & (IData)(
                                                       (vlSelfRef.sklansky_adder__DOT__generates
                                                        [1U] 
                                                        >> 2U))))))) 
                   << 3U));
    vlSelfRef.sklansky_adder__DOT__generates[2U] = 
        ((0x1ffffffbfULL & vlSelfRef.sklansky_adder__DOT__generates
          [2U]) | ((QData)((IData)((1U & ((IData)((
                                                   vlSelfRef.sklansky_adder__DOT__generates
                                                   [1U] 
                                                   >> 6U)) 
                                          | ((IData)(
                                                     (vlSelfRef.sklansky_adder__DOT__propagates
                                                      [1U] 
                                                      >> 6U)) 
                                             & (IData)(
                                                       (vlSelfRef.sklansky_adder__DOT__generates
                                                        [1U] 
                                                        >> 5U))))))) 
                   << 6U));
    vlSelfRef.sklansky_adder__DOT__generates[2U] = 
        ((0x1ffffff7fULL & vlSelfRef.sklansky_adder__DOT__generates
          [2U]) | ((QData)((IData)((1U & ((IData)((
                                                   vlSelfRef.sklansky_adder__DOT__generates
                                                   [1U] 
                                                   >> 7U)) 
                                          | ((IData)(
                                                     (vlSelfRef.sklansky_adder__DOT__propagates
                                                      [1U] 
                                                      >> 7U)) 
                                             & (IData)(
                                                       (vlSelfRef.sklansky_adder__DOT__generates
                                                        [1U] 
                                                        >> 6U))))))) 
                   << 7U));
    vlSelfRef.sklansky_adder__DOT__generates[2U] = 
        ((0x1fffffbffULL & vlSelfRef.sklansky_adder__DOT__generates
          [2U]) | ((QData)((IData)((1U & ((IData)((
                                                   vlSelfRef.sklansky_adder__DOT__generates
                                                   [1U] 
                                                   >> 0xaU)) 
                                          | ((IData)(
                                                     (vlSelfRef.sklansky_adder__DOT__propagates
                                                      [1U] 
                                                      >> 0xaU)) 
                                             & (IData)(
                                                       (vlSelfRef.sklansky_adder__DOT__generates
                                                        [1U] 
                                                        >> 9U))))))) 
                   << 0xaU));
    vlSelfRef.sklansky_adder__DOT__generates[2U] = 
        ((0x1fffff7ffULL & vlSelfRef.sklansky_adder__DOT__generates
          [2U]) | ((QData)((IData)((1U & ((IData)((
                                                   vlSelfRef.sklansky_adder__DOT__generates
                                                   [1U] 
                                                   >> 0xbU)) 
                                          | ((IData)(
                                                     (vlSelfRef.sklansky_adder__DOT__propagates
                                                      [1U] 
                                                      >> 0xbU)) 
                                             & (IData)(
                                                       (vlSelfRef.sklansky_adder__DOT__generates
                                                        [1U] 
                                                        >> 0xaU))))))) 
                   << 0xbU));
    vlSelfRef.sklansky_adder__DOT__generates[2U] = 
        ((0x1ffffbfffULL & vlSelfRef.sklansky_adder__DOT__generates
          [2U]) | ((QData)((IData)((1U & ((IData)((
                                                   vlSelfRef.sklansky_adder__DOT__generates
                                                   [1U] 
                                                   >> 0xeU)) 
                                          | ((IData)(
                                                     (vlSelfRef.sklansky_adder__DOT__propagates
                                                      [1U] 
                                                      >> 0xeU)) 
                                             & (IData)(
                                                       (vlSelfRef.sklansky_adder__DOT__generates
                                                        [1U] 
                                                        >> 0xdU))))))) 
                   << 0xeU));
    vlSelfRef.sklansky_adder__DOT__generates[2U] = 
        ((0x1ffff7fffULL & vlSelfRef.sklansky_adder__DOT__generates
          [2U]) | ((QData)((IData)((1U & ((IData)((
                                                   vlSelfRef.sklansky_adder__DOT__generates
                                                   [1U] 
                                                   >> 0xfU)) 
                                          | ((IData)(
                                                     (vlSelfRef.sklansky_adder__DOT__propagates
                                                      [1U] 
                                                      >> 0xfU)) 
                                             & (IData)(
                                                       (vlSelfRef.sklansky_adder__DOT__generates
                                                        [1U] 
                                                        >> 0xeU))))))) 
                   << 0xfU));
    vlSelfRef.sklansky_adder__DOT__generates[2U] = 
        ((0x1fffbffffULL & vlSelfRef.sklansky_adder__DOT__generates
          [2U]) | ((QData)((IData)((1U & ((IData)((
                                                   vlSelfRef.sklansky_adder__DOT__generates
                                                   [1U] 
                                                   >> 0x12U)) 
                                          | ((IData)(
                                                     (vlSelfRef.sklansky_adder__DOT__propagates
                                                      [1U] 
                                                      >> 0x12U)) 
                                             & (IData)(
                                                       (vlSelfRef.sklansky_adder__DOT__generates
                                                        [1U] 
                                                        >> 0x11U))))))) 
                   << 0x12U));
    vlSelfRef.sklansky_adder__DOT__generates[2U] = 
        ((0x1fff7ffffULL & vlSelfRef.sklansky_adder__DOT__generates
          [2U]) | ((QData)((IData)((1U & ((IData)((
                                                   vlSelfRef.sklansky_adder__DOT__generates
                                                   [1U] 
                                                   >> 0x13U)) 
                                          | ((IData)(
                                                     (vlSelfRef.sklansky_adder__DOT__propagates
                                                      [1U] 
                                                      >> 0x13U)) 
                                             & (IData)(
                                                       (vlSelfRef.sklansky_adder__DOT__generates
                                                        [1U] 
                                                        >> 0x12U))))))) 
                   << 0x13U));
    vlSelfRef.sklansky_adder__DOT__generates[2U] = 
        ((0x1ffbfffffULL & vlSelfRef.sklansky_adder__DOT__generates
          [2U]) | ((QData)((IData)((1U & ((IData)((
                                                   vlSelfRef.sklansky_adder__DOT__generates
                                                   [1U] 
                                                   >> 0x16U)) 
                                          | ((IData)(
                                                     (vlSelfRef.sklansky_adder__DOT__propagates
                                                      [1U] 
                                                      >> 0x16U)) 
                                             & (IData)(
                                                       (vlSelfRef.sklansky_adder__DOT__generates
                                                        [1U] 
                                                        >> 0x15U))))))) 
                   << 0x16U));
    vlSelfRef.sklansky_adder__DOT__generates[2U] = 
        ((0x1ff7fffffULL & vlSelfRef.sklansky_adder__DOT__generates
          [2U]) | ((QData)((IData)((1U & ((IData)((
                                                   vlSelfRef.sklansky_adder__DOT__generates
                                                   [1U] 
                                                   >> 0x17U)) 
                                          | ((IData)(
                                                     (vlSelfRef.sklansky_adder__DOT__propagates
                                                      [1U] 
                                                      >> 0x17U)) 
                                             & (IData)(
                                                       (vlSelfRef.sklansky_adder__DOT__generates
                                                        [1U] 
                                                        >> 0x16U))))))) 
                   << 0x17U));
    vlSelfRef.sklansky_adder__DOT__generates[2U] = 
        ((0x1fbffffffULL & vlSelfRef.sklansky_adder__DOT__generates
          [2U]) | ((QData)((IData)((1U & ((IData)((
                                                   vlSelfRef.sklansky_adder__DOT__generates
                                                   [1U] 
                                                   >> 0x1aU)) 
                                          | ((IData)(
                                                     (vlSelfRef.sklansky_adder__DOT__propagates
                                                      [1U] 
                                                      >> 0x1aU)) 
                                             & (IData)(
                                                       (vlSelfRef.sklansky_adder__DOT__generates
                                                        [1U] 
                                                        >> 0x19U))))))) 
                   << 0x1aU));
    vlSelfRef.sklansky_adder__DOT__generates[2U] = 
        ((0x1f7ffffffULL & vlSelfRef.sklansky_adder__DOT__generates
          [2U]) | ((QData)((IData)((1U & ((IData)((
                                                   vlSelfRef.sklansky_adder__DOT__generates
                                                   [1U] 
                                                   >> 0x1bU)) 
                                          | ((IData)(
                                                     (vlSelfRef.sklansky_adder__DOT__propagates
                                                      [1U] 
                                                      >> 0x1bU)) 
                                             & (IData)(
                                                       (vlSelfRef.sklansky_adder__DOT__generates
                                                        [1U] 
                                                        >> 0x1aU))))))) 
                   << 0x1bU));
    vlSelfRef.sklansky_adder__DOT__generates[2U] = 
        ((0x1bfffffffULL & vlSelfRef.sklansky_adder__DOT__generates
          [2U]) | ((QData)((IData)((1U & ((IData)((
                                                   vlSelfRef.sklansky_adder__DOT__generates
                                                   [1U] 
                                                   >> 0x1eU)) 
                                          | ((IData)(
                                                     (vlSelfRef.sklansky_adder__DOT__propagates
                                                      [1U] 
                                                      >> 0x1eU)) 
                                             & (IData)(
                                                       (vlSelfRef.sklansky_adder__DOT__generates
                                                        [1U] 
                                                        >> 0x1dU))))))) 
                   << 0x1eU));
    vlSelfRef.sklansky_adder__DOT__generates[2U] = 
        ((0x17fffffffULL & vlSelfRef.sklansky_adder__DOT__generates
          [2U]) | ((QData)((IData)((1U & ((IData)((
                                                   vlSelfRef.sklansky_adder__DOT__generates
                                                   [1U] 
                                                   >> 0x1fU)) 
                                          | ((IData)(
                                                     (vlSelfRef.sklansky_adder__DOT__propagates
                                                      [1U] 
                                                      >> 0x1fU)) 
                                             & (IData)(
                                                       (vlSelfRef.sklansky_adder__DOT__generates
                                                        [1U] 
                                                        >> 0x1eU))))))) 
                   << 0x1fU));
    vlSelfRef.sklansky_adder__DOT__generates[3U] = 
        ((0x1ffffffefULL & vlSelfRef.sklansky_adder__DOT__generates
          [3U]) | ((QData)((IData)((1U & ((IData)((
                                                   vlSelfRef.sklansky_adder__DOT__generates
                                                   [2U] 
                                                   >> 4U)) 
                                          | ((IData)(
                                                     (vlSelfRef.sklansky_adder__DOT__propagates
                                                      [2U] 
                                                      >> 4U)) 
                                             & (IData)(
                                                       (vlSelfRef.sklansky_adder__DOT__generates
                                                        [2U] 
                                                        >> 3U))))))) 
                   << 4U));
    vlSelfRef.sklansky_adder__DOT__generates[3U] = 
        ((0x1ffffffdfULL & vlSelfRef.sklansky_adder__DOT__generates
          [3U]) | ((QData)((IData)((1U & ((IData)((
                                                   vlSelfRef.sklansky_adder__DOT__generates
                                                   [2U] 
                                                   >> 5U)) 
                                          | ((IData)(
                                                     (vlSelfRef.sklansky_adder__DOT__propagates
                                                      [2U] 
                                                      >> 5U)) 
                                             & (IData)(
                                                       (vlSelfRef.sklansky_adder__DOT__generates
                                                        [2U] 
                                                        >> 4U))))))) 
                   << 5U));
    vlSelfRef.sklansky_adder__DOT__generates[3U] = 
        ((0x1ffffffbfULL & vlSelfRef.sklansky_adder__DOT__generates
          [3U]) | ((QData)((IData)((1U & ((IData)((
                                                   vlSelfRef.sklansky_adder__DOT__generates
                                                   [2U] 
                                                   >> 6U)) 
                                          | ((IData)(
                                                     (vlSelfRef.sklansky_adder__DOT__propagates
                                                      [2U] 
                                                      >> 6U)) 
                                             & (IData)(
                                                       (vlSelfRef.sklansky_adder__DOT__generates
                                                        [2U] 
                                                        >> 5U))))))) 
                   << 6U));
    vlSelfRef.sklansky_adder__DOT__generates[3U] = 
        ((0x1ffffff7fULL & vlSelfRef.sklansky_adder__DOT__generates
          [3U]) | ((QData)((IData)((1U & ((IData)((
                                                   vlSelfRef.sklansky_adder__DOT__generates
                                                   [2U] 
                                                   >> 7U)) 
                                          | ((IData)(
                                                     (vlSelfRef.sklansky_adder__DOT__propagates
                                                      [2U] 
                                                      >> 7U)) 
                                             & (IData)(
                                                       (vlSelfRef.sklansky_adder__DOT__generates
                                                        [2U] 
                                                        >> 6U))))))) 
                   << 7U));
    vlSelfRef.sklansky_adder__DOT__generates[3U] = 
        ((0x1ffffefffULL & vlSelfRef.sklansky_adder__DOT__generates
          [3U]) | ((QData)((IData)((1U & ((IData)((
                                                   vlSelfRef.sklansky_adder__DOT__generates
                                                   [2U] 
                                                   >> 0xcU)) 
                                          | ((IData)(
                                                     (vlSelfRef.sklansky_adder__DOT__propagates
                                                      [2U] 
                                                      >> 0xcU)) 
                                             & (IData)(
                                                       (vlSelfRef.sklansky_adder__DOT__generates
                                                        [2U] 
                                                        >> 0xbU))))))) 
                   << 0xcU));
    vlSelfRef.sklansky_adder__DOT__generates[3U] = 
        ((0x1ffffdfffULL & vlSelfRef.sklansky_adder__DOT__generates
          [3U]) | ((QData)((IData)((1U & ((IData)((
                                                   vlSelfRef.sklansky_adder__DOT__generates
                                                   [2U] 
                                                   >> 0xdU)) 
                                          | ((IData)(
                                                     (vlSelfRef.sklansky_adder__DOT__propagates
                                                      [2U] 
                                                      >> 0xdU)) 
                                             & (IData)(
                                                       (vlSelfRef.sklansky_adder__DOT__generates
                                                        [2U] 
                                                        >> 0xcU))))))) 
                   << 0xdU));
    vlSelfRef.sklansky_adder__DOT__generates[3U] = 
        ((0x1ffffbfffULL & vlSelfRef.sklansky_adder__DOT__generates
          [3U]) | ((QData)((IData)((1U & ((IData)((
                                                   vlSelfRef.sklansky_adder__DOT__generates
                                                   [2U] 
                                                   >> 0xeU)) 
                                          | ((IData)(
                                                     (vlSelfRef.sklansky_adder__DOT__propagates
                                                      [2U] 
                                                      >> 0xeU)) 
                                             & (IData)(
                                                       (vlSelfRef.sklansky_adder__DOT__generates
                                                        [2U] 
                                                        >> 0xdU))))))) 
                   << 0xeU));
    vlSelfRef.sklansky_adder__DOT__generates[3U] = 
        ((0x1ffff7fffULL & vlSelfRef.sklansky_adder__DOT__generates
          [3U]) | ((QData)((IData)((1U & ((IData)((
                                                   vlSelfRef.sklansky_adder__DOT__generates
                                                   [2U] 
                                                   >> 0xfU)) 
                                          | ((IData)(
                                                     (vlSelfRef.sklansky_adder__DOT__propagates
                                                      [2U] 
                                                      >> 0xfU)) 
                                             & (IData)(
                                                       (vlSelfRef.sklansky_adder__DOT__generates
                                                        [2U] 
                                                        >> 0xeU))))))) 
                   << 0xfU));
    vlSelfRef.sklansky_adder__DOT__generates[3U] = 
        ((0x1ffefffffULL & vlSelfRef.sklansky_adder__DOT__generates
          [3U]) | ((QData)((IData)((1U & ((IData)((
                                                   vlSelfRef.sklansky_adder__DOT__generates
                                                   [2U] 
                                                   >> 0x14U)) 
                                          | ((IData)(
                                                     (vlSelfRef.sklansky_adder__DOT__propagates
                                                      [2U] 
                                                      >> 0x14U)) 
                                             & (IData)(
                                                       (vlSelfRef.sklansky_adder__DOT__generates
                                                        [2U] 
                                                        >> 0x13U))))))) 
                   << 0x14U));
    vlSelfRef.sklansky_adder__DOT__generates[3U] = 
        ((0x1ffdfffffULL & vlSelfRef.sklansky_adder__DOT__generates
          [3U]) | ((QData)((IData)((1U & ((IData)((
                                                   vlSelfRef.sklansky_adder__DOT__generates
                                                   [2U] 
                                                   >> 0x15U)) 
                                          | ((IData)(
                                                     (vlSelfRef.sklansky_adder__DOT__propagates
                                                      [2U] 
                                                      >> 0x15U)) 
                                             & (IData)(
                                                       (vlSelfRef.sklansky_adder__DOT__generates
                                                        [2U] 
                                                        >> 0x14U))))))) 
                   << 0x15U));
    vlSelfRef.sklansky_adder__DOT__generates[3U] = 
        ((0x1ffbfffffULL & vlSelfRef.sklansky_adder__DOT__generates
          [3U]) | ((QData)((IData)((1U & ((IData)((
                                                   vlSelfRef.sklansky_adder__DOT__generates
                                                   [2U] 
                                                   >> 0x16U)) 
                                          | ((IData)(
                                                     (vlSelfRef.sklansky_adder__DOT__propagates
                                                      [2U] 
                                                      >> 0x16U)) 
                                             & (IData)(
                                                       (vlSelfRef.sklansky_adder__DOT__generates
                                                        [2U] 
                                                        >> 0x15U))))))) 
                   << 0x16U));
    vlSelfRef.sklansky_adder__DOT__generates[3U] = 
        ((0x1ff7fffffULL & vlSelfRef.sklansky_adder__DOT__generates
          [3U]) | ((QData)((IData)((1U & ((IData)((
                                                   vlSelfRef.sklansky_adder__DOT__generates
                                                   [2U] 
                                                   >> 0x17U)) 
                                          | ((IData)(
                                                     (vlSelfRef.sklansky_adder__DOT__propagates
                                                      [2U] 
                                                      >> 0x17U)) 
                                             & (IData)(
                                                       (vlSelfRef.sklansky_adder__DOT__generates
                                                        [2U] 
                                                        >> 0x16U))))))) 
                   << 0x17U));
    vlSelfRef.sklansky_adder__DOT__generates[3U] = 
        ((0x1efffffffULL & vlSelfRef.sklansky_adder__DOT__generates
          [3U]) | ((QData)((IData)((1U & ((IData)((
                                                   vlSelfRef.sklansky_adder__DOT__generates
                                                   [2U] 
                                                   >> 0x1cU)) 
                                          | ((IData)(
                                                     (vlSelfRef.sklansky_adder__DOT__propagates
                                                      [2U] 
                                                      >> 0x1cU)) 
                                             & (IData)(
                                                       (vlSelfRef.sklansky_adder__DOT__generates
                                                        [2U] 
                                                        >> 0x1bU))))))) 
                   << 0x1cU));
    vlSelfRef.sklansky_adder__DOT__generates[3U] = 
        ((0x1dfffffffULL & vlSelfRef.sklansky_adder__DOT__generates
          [3U]) | ((QData)((IData)((1U & ((IData)((
                                                   vlSelfRef.sklansky_adder__DOT__generates
                                                   [2U] 
                                                   >> 0x1dU)) 
                                          | ((IData)(
                                                     (vlSelfRef.sklansky_adder__DOT__propagates
                                                      [2U] 
                                                      >> 0x1dU)) 
                                             & (IData)(
                                                       (vlSelfRef.sklansky_adder__DOT__generates
                                                        [2U] 
                                                        >> 0x1cU))))))) 
                   << 0x1dU));
    vlSelfRef.sklansky_adder__DOT__generates[3U] = 
        ((0x1bfffffffULL & vlSelfRef.sklansky_adder__DOT__generates
          [3U]) | ((QData)((IData)((1U & ((IData)((
                                                   vlSelfRef.sklansky_adder__DOT__generates
                                                   [2U] 
                                                   >> 0x1eU)) 
                                          | ((IData)(
                                                     (vlSelfRef.sklansky_adder__DOT__propagates
                                                      [2U] 
                                                      >> 0x1eU)) 
                                             & (IData)(
                                                       (vlSelfRef.sklansky_adder__DOT__generates
                                                        [2U] 
                                                        >> 0x1dU))))))) 
                   << 0x1eU));
    vlSelfRef.sklansky_adder__DOT__generates[3U] = 
        ((0x17fffffffULL & vlSelfRef.sklansky_adder__DOT__generates
          [3U]) | ((QData)((IData)((1U & ((IData)((
                                                   vlSelfRef.sklansky_adder__DOT__generates
                                                   [2U] 
                                                   >> 0x1fU)) 
                                          | ((IData)(
                                                     (vlSelfRef.sklansky_adder__DOT__propagates
                                                      [2U] 
                                                      >> 0x1fU)) 
                                             & (IData)(
                                                       (vlSelfRef.sklansky_adder__DOT__generates
                                                        [2U] 
                                                        >> 0x1eU))))))) 
                   << 0x1fU));
    vlSelfRef.sklansky_adder__DOT__generates[4U] = 
        ((0x1fffffeffULL & vlSelfRef.sklansky_adder__DOT__generates
          [4U]) | ((QData)((IData)((1U & ((IData)((
                                                   vlSelfRef.sklansky_adder__DOT__generates
                                                   [3U] 
                                                   >> 8U)) 
                                          | ((IData)(
                                                     (vlSelfRef.sklansky_adder__DOT__propagates
                                                      [3U] 
                                                      >> 8U)) 
                                             & (IData)(
                                                       (vlSelfRef.sklansky_adder__DOT__generates
                                                        [3U] 
                                                        >> 7U))))))) 
                   << 8U));
    vlSelfRef.sklansky_adder__DOT__generates[4U] = 
        ((0x1fffffdffULL & vlSelfRef.sklansky_adder__DOT__generates
          [4U]) | ((QData)((IData)((1U & ((IData)((
                                                   vlSelfRef.sklansky_adder__DOT__generates
                                                   [3U] 
                                                   >> 9U)) 
                                          | ((IData)(
                                                     (vlSelfRef.sklansky_adder__DOT__propagates
                                                      [3U] 
                                                      >> 9U)) 
                                             & (IData)(
                                                       (vlSelfRef.sklansky_adder__DOT__generates
                                                        [3U] 
                                                        >> 8U))))))) 
                   << 9U));
    vlSelfRef.sklansky_adder__DOT__generates[4U] = 
        ((0x1fffffbffULL & vlSelfRef.sklansky_adder__DOT__generates
          [4U]) | ((QData)((IData)((1U & ((IData)((
                                                   vlSelfRef.sklansky_adder__DOT__generates
                                                   [3U] 
                                                   >> 0xaU)) 
                                          | ((IData)(
                                                     (vlSelfRef.sklansky_adder__DOT__propagates
                                                      [3U] 
                                                      >> 0xaU)) 
                                             & (IData)(
                                                       (vlSelfRef.sklansky_adder__DOT__generates
                                                        [3U] 
                                                        >> 9U))))))) 
                   << 0xaU));
    vlSelfRef.sklansky_adder__DOT__generates[4U] = 
        ((0x1fffff7ffULL & vlSelfRef.sklansky_adder__DOT__generates
          [4U]) | ((QData)((IData)((1U & ((IData)((
                                                   vlSelfRef.sklansky_adder__DOT__generates
                                                   [3U] 
                                                   >> 0xbU)) 
                                          | ((IData)(
                                                     (vlSelfRef.sklansky_adder__DOT__propagates
                                                      [3U] 
                                                      >> 0xbU)) 
                                             & (IData)(
                                                       (vlSelfRef.sklansky_adder__DOT__generates
                                                        [3U] 
                                                        >> 0xaU))))))) 
                   << 0xbU));
    vlSelfRef.sklansky_adder__DOT__generates[4U] = 
        ((0x1ffffefffULL & vlSelfRef.sklansky_adder__DOT__generates
          [4U]) | ((QData)((IData)((1U & ((IData)((
                                                   vlSelfRef.sklansky_adder__DOT__generates
                                                   [3U] 
                                                   >> 0xcU)) 
                                          | ((IData)(
                                                     (vlSelfRef.sklansky_adder__DOT__propagates
                                                      [3U] 
                                                      >> 0xcU)) 
                                             & (IData)(
                                                       (vlSelfRef.sklansky_adder__DOT__generates
                                                        [3U] 
                                                        >> 0xbU))))))) 
                   << 0xcU));
    vlSelfRef.sklansky_adder__DOT__generates[4U] = 
        ((0x1ffffdfffULL & vlSelfRef.sklansky_adder__DOT__generates
          [4U]) | ((QData)((IData)((1U & ((IData)((
                                                   vlSelfRef.sklansky_adder__DOT__generates
                                                   [3U] 
                                                   >> 0xdU)) 
                                          | ((IData)(
                                                     (vlSelfRef.sklansky_adder__DOT__propagates
                                                      [3U] 
                                                      >> 0xdU)) 
                                             & (IData)(
                                                       (vlSelfRef.sklansky_adder__DOT__generates
                                                        [3U] 
                                                        >> 0xcU))))))) 
                   << 0xdU));
    vlSelfRef.sklansky_adder__DOT__generates[4U] = 
        ((0x1ffffbfffULL & vlSelfRef.sklansky_adder__DOT__generates
          [4U]) | ((QData)((IData)((1U & ((IData)((
                                                   vlSelfRef.sklansky_adder__DOT__generates
                                                   [3U] 
                                                   >> 0xeU)) 
                                          | ((IData)(
                                                     (vlSelfRef.sklansky_adder__DOT__propagates
                                                      [3U] 
                                                      >> 0xeU)) 
                                             & (IData)(
                                                       (vlSelfRef.sklansky_adder__DOT__generates
                                                        [3U] 
                                                        >> 0xdU))))))) 
                   << 0xeU));
    vlSelfRef.sklansky_adder__DOT__generates[4U] = 
        ((0x1ffff7fffULL & vlSelfRef.sklansky_adder__DOT__generates
          [4U]) | ((QData)((IData)((1U & ((IData)((
                                                   vlSelfRef.sklansky_adder__DOT__generates
                                                   [3U] 
                                                   >> 0xfU)) 
                                          | ((IData)(
                                                     (vlSelfRef.sklansky_adder__DOT__propagates
                                                      [3U] 
                                                      >> 0xfU)) 
                                             & (IData)(
                                                       (vlSelfRef.sklansky_adder__DOT__generates
                                                        [3U] 
                                                        >> 0xeU))))))) 
                   << 0xfU));
    vlSelfRef.sklansky_adder__DOT__generates[4U] = 
        ((0x1feffffffULL & vlSelfRef.sklansky_adder__DOT__generates
          [4U]) | ((QData)((IData)((1U & ((IData)((
                                                   vlSelfRef.sklansky_adder__DOT__generates
                                                   [3U] 
                                                   >> 0x18U)) 
                                          | ((IData)(
                                                     (vlSelfRef.sklansky_adder__DOT__propagates
                                                      [3U] 
                                                      >> 0x18U)) 
                                             & (IData)(
                                                       (vlSelfRef.sklansky_adder__DOT__generates
                                                        [3U] 
                                                        >> 0x17U))))))) 
                   << 0x18U));
    vlSelfRef.sklansky_adder__DOT__generates[4U] = 
        ((0x1fdffffffULL & vlSelfRef.sklansky_adder__DOT__generates
          [4U]) | ((QData)((IData)((1U & ((IData)((
                                                   vlSelfRef.sklansky_adder__DOT__generates
                                                   [3U] 
                                                   >> 0x19U)) 
                                          | ((IData)(
                                                     (vlSelfRef.sklansky_adder__DOT__propagates
                                                      [3U] 
                                                      >> 0x19U)) 
                                             & (IData)(
                                                       (vlSelfRef.sklansky_adder__DOT__generates
                                                        [3U] 
                                                        >> 0x18U))))))) 
                   << 0x19U));
    vlSelfRef.sklansky_adder__DOT__generates[4U] = 
        ((0x1fbffffffULL & vlSelfRef.sklansky_adder__DOT__generates
          [4U]) | ((QData)((IData)((1U & ((IData)((
                                                   vlSelfRef.sklansky_adder__DOT__generates
                                                   [3U] 
                                                   >> 0x1aU)) 
                                          | ((IData)(
                                                     (vlSelfRef.sklansky_adder__DOT__propagates
                                                      [3U] 
                                                      >> 0x1aU)) 
                                             & (IData)(
                                                       (vlSelfRef.sklansky_adder__DOT__generates
                                                        [3U] 
                                                        >> 0x19U))))))) 
                   << 0x1aU));
    vlSelfRef.sklansky_adder__DOT__generates[4U] = 
        ((0x1f7ffffffULL & vlSelfRef.sklansky_adder__DOT__generates
          [4U]) | ((QData)((IData)((1U & ((IData)((
                                                   vlSelfRef.sklansky_adder__DOT__generates
                                                   [3U] 
                                                   >> 0x1bU)) 
                                          | ((IData)(
                                                     (vlSelfRef.sklansky_adder__DOT__propagates
                                                      [3U] 
                                                      >> 0x1bU)) 
                                             & (IData)(
                                                       (vlSelfRef.sklansky_adder__DOT__generates
                                                        [3U] 
                                                        >> 0x1aU))))))) 
                   << 0x1bU));
    vlSelfRef.sklansky_adder__DOT__generates[4U] = 
        ((0x1efffffffULL & vlSelfRef.sklansky_adder__DOT__generates
          [4U]) | ((QData)((IData)((1U & ((IData)((
                                                   vlSelfRef.sklansky_adder__DOT__generates
                                                   [3U] 
                                                   >> 0x1cU)) 
                                          | ((IData)(
                                                     (vlSelfRef.sklansky_adder__DOT__propagates
                                                      [3U] 
                                                      >> 0x1cU)) 
                                             & (IData)(
                                                       (vlSelfRef.sklansky_adder__DOT__generates
                                                        [3U] 
                                                        >> 0x1bU))))))) 
                   << 0x1cU));
    vlSelfRef.sklansky_adder__DOT__generates[4U] = 
        ((0x1dfffffffULL & vlSelfRef.sklansky_adder__DOT__generates
          [4U]) | ((QData)((IData)((1U & ((IData)((
                                                   vlSelfRef.sklansky_adder__DOT__generates
                                                   [3U] 
                                                   >> 0x1dU)) 
                                          | ((IData)(
                                                     (vlSelfRef.sklansky_adder__DOT__propagates
                                                      [3U] 
                                                      >> 0x1dU)) 
                                             & (IData)(
                                                       (vlSelfRef.sklansky_adder__DOT__generates
                                                        [3U] 
                                                        >> 0x1cU))))))) 
                   << 0x1dU));
    vlSelfRef.sklansky_adder__DOT__generates[4U] = 
        ((0x1bfffffffULL & vlSelfRef.sklansky_adder__DOT__generates
          [4U]) | ((QData)((IData)((1U & ((IData)((
                                                   vlSelfRef.sklansky_adder__DOT__generates
                                                   [3U] 
                                                   >> 0x1eU)) 
                                          | ((IData)(
                                                     (vlSelfRef.sklansky_adder__DOT__propagates
                                                      [3U] 
                                                      >> 0x1eU)) 
                                             & (IData)(
                                                       (vlSelfRef.sklansky_adder__DOT__generates
                                                        [3U] 
                                                        >> 0x1dU))))))) 
                   << 0x1eU));
    vlSelfRef.sklansky_adder__DOT__generates[4U] = 
        ((0x17fffffffULL & vlSelfRef.sklansky_adder__DOT__generates
          [4U]) | ((QData)((IData)((1U & ((IData)((
                                                   vlSelfRef.sklansky_adder__DOT__generates
                                                   [3U] 
                                                   >> 0x1fU)) 
                                          | ((IData)(
                                                     (vlSelfRef.sklansky_adder__DOT__propagates
                                                      [3U] 
                                                      >> 0x1fU)) 
                                             & (IData)(
                                                       (vlSelfRef.sklansky_adder__DOT__generates
                                                        [3U] 
                                                        >> 0x1eU))))))) 
                   << 0x1fU));
    vlSelfRef.sklansky_adder__DOT__generates[5U] = 
        ((0x1fffeffffULL & vlSelfRef.sklansky_adder__DOT__generates
          [5U]) | ((QData)((IData)((1U & ((IData)((
                                                   vlSelfRef.sklansky_adder__DOT__generates
                                                   [4U] 
                                                   >> 0x10U)) 
                                          | ((IData)(
                                                     (vlSelfRef.sklansky_adder__DOT__propagates
                                                      [4U] 
                                                      >> 0x10U)) 
                                             & (IData)(
                                                       (vlSelfRef.sklansky_adder__DOT__generates
                                                        [4U] 
                                                        >> 0xfU))))))) 
                   << 0x10U));
    vlSelfRef.sklansky_adder__DOT__generates[5U] = 
        ((0x1fffdffffULL & vlSelfRef.sklansky_adder__DOT__generates
          [5U]) | ((QData)((IData)((1U & ((IData)((
                                                   vlSelfRef.sklansky_adder__DOT__generates
                                                   [4U] 
                                                   >> 0x11U)) 
                                          | ((IData)(
                                                     (vlSelfRef.sklansky_adder__DOT__propagates
                                                      [4U] 
                                                      >> 0x11U)) 
                                             & (IData)(
                                                       (vlSelfRef.sklansky_adder__DOT__generates
                                                        [4U] 
                                                        >> 0x10U))))))) 
                   << 0x11U));
    vlSelfRef.sklansky_adder__DOT__generates[5U] = 
        ((0x1fffbffffULL & vlSelfRef.sklansky_adder__DOT__generates
          [5U]) | ((QData)((IData)((1U & ((IData)((
                                                   vlSelfRef.sklansky_adder__DOT__generates
                                                   [4U] 
                                                   >> 0x12U)) 
                                          | ((IData)(
                                                     (vlSelfRef.sklansky_adder__DOT__propagates
                                                      [4U] 
                                                      >> 0x12U)) 
                                             & (IData)(
                                                       (vlSelfRef.sklansky_adder__DOT__generates
                                                        [4U] 
                                                        >> 0x11U))))))) 
                   << 0x12U));
    vlSelfRef.sklansky_adder__DOT__generates[5U] = 
        ((0x1fff7ffffULL & vlSelfRef.sklansky_adder__DOT__generates
          [5U]) | ((QData)((IData)((1U & ((IData)((
                                                   vlSelfRef.sklansky_adder__DOT__generates
                                                   [4U] 
                                                   >> 0x13U)) 
                                          | ((IData)(
                                                     (vlSelfRef.sklansky_adder__DOT__propagates
                                                      [4U] 
                                                      >> 0x13U)) 
                                             & (IData)(
                                                       (vlSelfRef.sklansky_adder__DOT__generates
                                                        [4U] 
                                                        >> 0x12U))))))) 
                   << 0x13U));
    vlSelfRef.sklansky_adder__DOT__generates[5U] = 
        ((0x1ffefffffULL & vlSelfRef.sklansky_adder__DOT__generates
          [5U]) | ((QData)((IData)((1U & ((IData)((
                                                   vlSelfRef.sklansky_adder__DOT__generates
                                                   [4U] 
                                                   >> 0x14U)) 
                                          | ((IData)(
                                                     (vlSelfRef.sklansky_adder__DOT__propagates
                                                      [4U] 
                                                      >> 0x14U)) 
                                             & (IData)(
                                                       (vlSelfRef.sklansky_adder__DOT__generates
                                                        [4U] 
                                                        >> 0x13U))))))) 
                   << 0x14U));
    vlSelfRef.sklansky_adder__DOT__generates[5U] = 
        ((0x1ffdfffffULL & vlSelfRef.sklansky_adder__DOT__generates
          [5U]) | ((QData)((IData)((1U & ((IData)((
                                                   vlSelfRef.sklansky_adder__DOT__generates
                                                   [4U] 
                                                   >> 0x15U)) 
                                          | ((IData)(
                                                     (vlSelfRef.sklansky_adder__DOT__propagates
                                                      [4U] 
                                                      >> 0x15U)) 
                                             & (IData)(
                                                       (vlSelfRef.sklansky_adder__DOT__generates
                                                        [4U] 
                                                        >> 0x14U))))))) 
                   << 0x15U));
    vlSelfRef.sklansky_adder__DOT__generates[5U] = 
        ((0x1ffbfffffULL & vlSelfRef.sklansky_adder__DOT__generates
          [5U]) | ((QData)((IData)((1U & ((IData)((
                                                   vlSelfRef.sklansky_adder__DOT__generates
                                                   [4U] 
                                                   >> 0x16U)) 
                                          | ((IData)(
                                                     (vlSelfRef.sklansky_adder__DOT__propagates
                                                      [4U] 
                                                      >> 0x16U)) 
                                             & (IData)(
                                                       (vlSelfRef.sklansky_adder__DOT__generates
                                                        [4U] 
                                                        >> 0x15U))))))) 
                   << 0x16U));
    vlSelfRef.sklansky_adder__DOT__generates[5U] = 
        ((0x1ff7fffffULL & vlSelfRef.sklansky_adder__DOT__generates
          [5U]) | ((QData)((IData)((1U & ((IData)((
                                                   vlSelfRef.sklansky_adder__DOT__generates
                                                   [4U] 
                                                   >> 0x17U)) 
                                          | ((IData)(
                                                     (vlSelfRef.sklansky_adder__DOT__propagates
                                                      [4U] 
                                                      >> 0x17U)) 
                                             & (IData)(
                                                       (vlSelfRef.sklansky_adder__DOT__generates
                                                        [4U] 
                                                        >> 0x16U))))))) 
                   << 0x17U));
    vlSelfRef.sklansky_adder__DOT__generates[5U] = 
        ((0x1feffffffULL & vlSelfRef.sklansky_adder__DOT__generates
          [5U]) | ((QData)((IData)((1U & ((IData)((
                                                   vlSelfRef.sklansky_adder__DOT__generates
                                                   [4U] 
                                                   >> 0x18U)) 
                                          | ((IData)(
                                                     (vlSelfRef.sklansky_adder__DOT__propagates
                                                      [4U] 
                                                      >> 0x18U)) 
                                             & (IData)(
                                                       (vlSelfRef.sklansky_adder__DOT__generates
                                                        [4U] 
                                                        >> 0x17U))))))) 
                   << 0x18U));
    vlSelfRef.sklansky_adder__DOT__generates[5U] = 
        ((0x1fdffffffULL & vlSelfRef.sklansky_adder__DOT__generates
          [5U]) | ((QData)((IData)((1U & ((IData)((
                                                   vlSelfRef.sklansky_adder__DOT__generates
                                                   [4U] 
                                                   >> 0x19U)) 
                                          | ((IData)(
                                                     (vlSelfRef.sklansky_adder__DOT__propagates
                                                      [4U] 
                                                      >> 0x19U)) 
                                             & (IData)(
                                                       (vlSelfRef.sklansky_adder__DOT__generates
                                                        [4U] 
                                                        >> 0x18U))))))) 
                   << 0x19U));
    vlSelfRef.sklansky_adder__DOT__generates[5U] = 
        ((0x1fbffffffULL & vlSelfRef.sklansky_adder__DOT__generates
          [5U]) | ((QData)((IData)((1U & ((IData)((
                                                   vlSelfRef.sklansky_adder__DOT__generates
                                                   [4U] 
                                                   >> 0x1aU)) 
                                          | ((IData)(
                                                     (vlSelfRef.sklansky_adder__DOT__propagates
                                                      [4U] 
                                                      >> 0x1aU)) 
                                             & (IData)(
                                                       (vlSelfRef.sklansky_adder__DOT__generates
                                                        [4U] 
                                                        >> 0x19U))))))) 
                   << 0x1aU));
    vlSelfRef.sklansky_adder__DOT__generates[5U] = 
        ((0x1f7ffffffULL & vlSelfRef.sklansky_adder__DOT__generates
          [5U]) | ((QData)((IData)((1U & ((IData)((
                                                   vlSelfRef.sklansky_adder__DOT__generates
                                                   [4U] 
                                                   >> 0x1bU)) 
                                          | ((IData)(
                                                     (vlSelfRef.sklansky_adder__DOT__propagates
                                                      [4U] 
                                                      >> 0x1bU)) 
                                             & (IData)(
                                                       (vlSelfRef.sklansky_adder__DOT__generates
                                                        [4U] 
                                                        >> 0x1aU))))))) 
                   << 0x1bU));
    vlSelfRef.sklansky_adder__DOT__generates[5U] = 
        ((0x1efffffffULL & vlSelfRef.sklansky_adder__DOT__generates
          [5U]) | ((QData)((IData)((1U & ((IData)((
                                                   vlSelfRef.sklansky_adder__DOT__generates
                                                   [4U] 
                                                   >> 0x1cU)) 
                                          | ((IData)(
                                                     (vlSelfRef.sklansky_adder__DOT__propagates
                                                      [4U] 
                                                      >> 0x1cU)) 
                                             & (IData)(
                                                       (vlSelfRef.sklansky_adder__DOT__generates
                                                        [4U] 
                                                        >> 0x1bU))))))) 
                   << 0x1cU));
    vlSelfRef.sklansky_adder__DOT__generates[5U] = 
        ((0x1dfffffffULL & vlSelfRef.sklansky_adder__DOT__generates
          [5U]) | ((QData)((IData)((1U & ((IData)((
                                                   vlSelfRef.sklansky_adder__DOT__generates
                                                   [4U] 
                                                   >> 0x1dU)) 
                                          | ((IData)(
                                                     (vlSelfRef.sklansky_adder__DOT__propagates
                                                      [4U] 
                                                      >> 0x1dU)) 
                                             & (IData)(
                                                       (vlSelfRef.sklansky_adder__DOT__generates
                                                        [4U] 
                                                        >> 0x1cU))))))) 
                   << 0x1dU));
    vlSelfRef.sklansky_adder__DOT__generates[5U] = 
        ((0x1bfffffffULL & vlSelfRef.sklansky_adder__DOT__generates
          [5U]) | ((QData)((IData)((1U & ((IData)((
                                                   vlSelfRef.sklansky_adder__DOT__generates
                                                   [4U] 
                                                   >> 0x1eU)) 
                                          | ((IData)(
                                                     (vlSelfRef.sklansky_adder__DOT__propagates
                                                      [4U] 
                                                      >> 0x1eU)) 
                                             & (IData)(
                                                       (vlSelfRef.sklansky_adder__DOT__generates
                                                        [4U] 
                                                        >> 0x1dU))))))) 
                   << 0x1eU));
    vlSelfRef.sklansky_adder__DOT__generates[5U] = 
        ((0x17fffffffULL & vlSelfRef.sklansky_adder__DOT__generates
          [5U]) | ((QData)((IData)((1U & ((IData)((
                                                   vlSelfRef.sklansky_adder__DOT__generates
                                                   [4U] 
                                                   >> 0x1fU)) 
                                          | ((IData)(
                                                     (vlSelfRef.sklansky_adder__DOT__propagates
                                                      [4U] 
                                                      >> 0x1fU)) 
                                             & (IData)(
                                                       (vlSelfRef.sklansky_adder__DOT__generates
                                                        [4U] 
                                                        >> 0x1eU))))))) 
                   << 0x1fU));
}

VL_INLINE_OPT void Vsklansky_rewrite___024root___act_comb__TOP__0(Vsklansky_rewrite___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsklansky_rewrite___024root___act_comb__TOP__0\n"); );
    Vsklansky_rewrite__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cout = (1U & ((IData)((vlSelfRef.sklansky_adder__DOT__generates
                                     [5U] >> 0x20U)) 
                            | ((IData)((vlSelfRef.sklansky_adder__DOT__generates
                                        [5U] >> 0x1fU)) 
                               & (IData)((vlSelfRef.sklansky_adder__DOT__propagates
                                          [5U] >> 0x1fU)))));
    vlSelfRef.y = ((IData)(vlSelfRef.sklansky_adder__DOT__generates
                           [5U]) ^ (vlSelfRef.a ^ vlSelfRef.b));
}

void Vsklansky_rewrite___024root___eval_nba(Vsklansky_rewrite___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsklansky_rewrite___024root___eval_nba\n"); );
    Vsklansky_rewrite__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vsklansky_rewrite___024root___eval_triggers__act(Vsklansky_rewrite___024root* vlSelf);

bool Vsklansky_rewrite___024root___eval_phase__act(Vsklansky_rewrite___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsklansky_rewrite___024root___eval_phase__act\n"); );
    Vsklansky_rewrite__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vsklansky_rewrite___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vsklansky_rewrite___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vsklansky_rewrite___024root___eval_phase__nba(Vsklansky_rewrite___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsklansky_rewrite___024root___eval_phase__nba\n"); );
    Vsklansky_rewrite__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vsklansky_rewrite___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsklansky_rewrite___024root___dump_triggers__ico(Vsklansky_rewrite___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vsklansky_rewrite___024root___dump_triggers__nba(Vsklansky_rewrite___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vsklansky_rewrite___024root___dump_triggers__act(Vsklansky_rewrite___024root* vlSelf);
#endif  // VL_DEBUG

void Vsklansky_rewrite___024root___eval(Vsklansky_rewrite___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsklansky_rewrite___024root___eval\n"); );
    Vsklansky_rewrite__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY(((0x64U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vsklansky_rewrite___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("sklansky_rewrite.sv", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vsklansky_rewrite___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vsklansky_rewrite___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("sklansky_rewrite.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vsklansky_rewrite___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("sklansky_rewrite.sv", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vsklansky_rewrite___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vsklansky_rewrite___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vsklansky_rewrite___024root___eval_debug_assertions(Vsklansky_rewrite___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsklansky_rewrite___024root___eval_debug_assertions\n"); );
    Vsklansky_rewrite__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.cin & 0xfeU)))) {
        Verilated::overWidthError("cin");}
}
#endif  // VL_DEBUG
