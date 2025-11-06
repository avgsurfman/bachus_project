// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsklansky_rewrite__Syms.h"


VL_ATTR_COLD void Vsklansky_rewrite___024root__trace_init_sub__TOP__0(Vsklansky_rewrite___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsklansky_rewrite___024root__trace_init_sub__TOP__0\n"); );
    Vsklansky_rewrite__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("$rootio", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+13,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+14,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+15,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("sklansky_adder", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+30,0,"SIZE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+13,0,"a",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+14,0,"b",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+15,0,"cin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+16,0,"cout",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+17,0,"y",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+31,0,"num_steps",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("generates", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 6; ++i) {
        tracep->declQuad(c+18+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 32,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("propagates", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 6; ++i) {
        tracep->declQuad(c+1+i*2,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 32,0);
    }
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vsklansky_rewrite___024root__trace_init_top(Vsklansky_rewrite___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsklansky_rewrite___024root__trace_init_top\n"); );
    Vsklansky_rewrite__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vsklansky_rewrite___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vsklansky_rewrite___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vsklansky_rewrite___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vsklansky_rewrite___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vsklansky_rewrite___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vsklansky_rewrite___024root__trace_register(Vsklansky_rewrite___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsklansky_rewrite___024root__trace_register\n"); );
    Vsklansky_rewrite__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vsklansky_rewrite___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vsklansky_rewrite___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vsklansky_rewrite___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vsklansky_rewrite___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vsklansky_rewrite___024root__trace_const_0_sub_0(Vsklansky_rewrite___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vsklansky_rewrite___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsklansky_rewrite___024root__trace_const_0\n"); );
    // Init
    Vsklansky_rewrite___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsklansky_rewrite___024root*>(voidSelf);
    Vsklansky_rewrite__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vsklansky_rewrite___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vsklansky_rewrite___024root__trace_const_0_sub_0(Vsklansky_rewrite___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsklansky_rewrite___024root__trace_const_0_sub_0\n"); );
    Vsklansky_rewrite__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+30,(0x20U),32);
    bufp->fullIData(oldp+31,(5U),32);
}

VL_ATTR_COLD void Vsklansky_rewrite___024root__trace_full_0_sub_0(Vsklansky_rewrite___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vsklansky_rewrite___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsklansky_rewrite___024root__trace_full_0\n"); );
    // Init
    Vsklansky_rewrite___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsklansky_rewrite___024root*>(voidSelf);
    Vsklansky_rewrite__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vsklansky_rewrite___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vsklansky_rewrite___024root__trace_full_0_sub_0(Vsklansky_rewrite___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsklansky_rewrite___024root__trace_full_0_sub_0\n"); );
    Vsklansky_rewrite__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullQData(oldp+1,(vlSelfRef.sklansky_adder__DOT__propagates[0]),33);
    bufp->fullQData(oldp+3,(vlSelfRef.sklansky_adder__DOT__propagates[1]),33);
    bufp->fullQData(oldp+5,(vlSelfRef.sklansky_adder__DOT__propagates[2]),33);
    bufp->fullQData(oldp+7,(vlSelfRef.sklansky_adder__DOT__propagates[3]),33);
    bufp->fullQData(oldp+9,(vlSelfRef.sklansky_adder__DOT__propagates[4]),33);
    bufp->fullQData(oldp+11,(vlSelfRef.sklansky_adder__DOT__propagates[5]),33);
    bufp->fullIData(oldp+13,(vlSelfRef.a),32);
    bufp->fullIData(oldp+14,(vlSelfRef.b),32);
    bufp->fullBit(oldp+15,(vlSelfRef.cin));
    bufp->fullBit(oldp+16,(vlSelfRef.cout));
    bufp->fullIData(oldp+17,(vlSelfRef.y),32);
    bufp->fullQData(oldp+18,(vlSelfRef.sklansky_adder__DOT__generates[0]),33);
    bufp->fullQData(oldp+20,(vlSelfRef.sklansky_adder__DOT__generates[1]),33);
    bufp->fullQData(oldp+22,(vlSelfRef.sklansky_adder__DOT__generates[2]),33);
    bufp->fullQData(oldp+24,(vlSelfRef.sklansky_adder__DOT__generates[3]),33);
    bufp->fullQData(oldp+26,(vlSelfRef.sklansky_adder__DOT__generates[4]),33);
    bufp->fullQData(oldp+28,(vlSelfRef.sklansky_adder__DOT__generates[5]),33);
}
