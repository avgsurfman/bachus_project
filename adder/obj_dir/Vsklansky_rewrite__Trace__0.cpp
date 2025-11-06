// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsklansky_rewrite__Syms.h"


void Vsklansky_rewrite___024root__trace_chg_0_sub_0(Vsklansky_rewrite___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vsklansky_rewrite___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsklansky_rewrite___024root__trace_chg_0\n"); );
    // Init
    Vsklansky_rewrite___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsklansky_rewrite___024root*>(voidSelf);
    Vsklansky_rewrite__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vsklansky_rewrite___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vsklansky_rewrite___024root__trace_chg_0_sub_0(Vsklansky_rewrite___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsklansky_rewrite___024root__trace_chg_0_sub_0\n"); );
    Vsklansky_rewrite__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        bufp->chgQData(oldp+0,(vlSelfRef.sklansky_adder__DOT__propagates[0]),33);
        bufp->chgQData(oldp+2,(vlSelfRef.sklansky_adder__DOT__propagates[1]),33);
        bufp->chgQData(oldp+4,(vlSelfRef.sklansky_adder__DOT__propagates[2]),33);
        bufp->chgQData(oldp+6,(vlSelfRef.sklansky_adder__DOT__propagates[3]),33);
        bufp->chgQData(oldp+8,(vlSelfRef.sklansky_adder__DOT__propagates[4]),33);
        bufp->chgQData(oldp+10,(vlSelfRef.sklansky_adder__DOT__propagates[5]),33);
    }
    bufp->chgIData(oldp+12,(vlSelfRef.a),32);
    bufp->chgIData(oldp+13,(vlSelfRef.b),32);
    bufp->chgBit(oldp+14,(vlSelfRef.cin));
    bufp->chgBit(oldp+15,(vlSelfRef.cout));
    bufp->chgIData(oldp+16,(vlSelfRef.y),32);
    bufp->chgQData(oldp+17,(vlSelfRef.sklansky_adder__DOT__generates[0]),33);
    bufp->chgQData(oldp+19,(vlSelfRef.sklansky_adder__DOT__generates[1]),33);
    bufp->chgQData(oldp+21,(vlSelfRef.sklansky_adder__DOT__generates[2]),33);
    bufp->chgQData(oldp+23,(vlSelfRef.sklansky_adder__DOT__generates[3]),33);
    bufp->chgQData(oldp+25,(vlSelfRef.sklansky_adder__DOT__generates[4]),33);
    bufp->chgQData(oldp+27,(vlSelfRef.sklansky_adder__DOT__generates[5]),33);
}

void Vsklansky_rewrite___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsklansky_rewrite___024root__trace_cleanup\n"); );
    // Init
    Vsklansky_rewrite___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsklansky_rewrite___024root*>(voidSelf);
    Vsklansky_rewrite__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
