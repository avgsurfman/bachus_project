// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vsklansky_rewrite__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vsklansky_rewrite::Vsklansky_rewrite(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vsklansky_rewrite__Syms(contextp(), _vcname__, this)}
    , cin{vlSymsp->TOP.cin}
    , cout{vlSymsp->TOP.cout}
    , a{vlSymsp->TOP.a}
    , b{vlSymsp->TOP.b}
    , y{vlSymsp->TOP.y}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vsklansky_rewrite::Vsklansky_rewrite(const char* _vcname__)
    : Vsklansky_rewrite(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vsklansky_rewrite::~Vsklansky_rewrite() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vsklansky_rewrite___024root___eval_debug_assertions(Vsklansky_rewrite___024root* vlSelf);
#endif  // VL_DEBUG
void Vsklansky_rewrite___024root___eval_static(Vsklansky_rewrite___024root* vlSelf);
void Vsklansky_rewrite___024root___eval_initial(Vsklansky_rewrite___024root* vlSelf);
void Vsklansky_rewrite___024root___eval_settle(Vsklansky_rewrite___024root* vlSelf);
void Vsklansky_rewrite___024root___eval(Vsklansky_rewrite___024root* vlSelf);

void Vsklansky_rewrite::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vsklansky_rewrite::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vsklansky_rewrite___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vsklansky_rewrite___024root___eval_static(&(vlSymsp->TOP));
        Vsklansky_rewrite___024root___eval_initial(&(vlSymsp->TOP));
        Vsklansky_rewrite___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vsklansky_rewrite___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vsklansky_rewrite::eventsPending() { return false; }

uint64_t Vsklansky_rewrite::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vsklansky_rewrite::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vsklansky_rewrite___024root___eval_final(Vsklansky_rewrite___024root* vlSelf);

VL_ATTR_COLD void Vsklansky_rewrite::final() {
    Vsklansky_rewrite___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vsklansky_rewrite::hierName() const { return vlSymsp->name(); }
const char* Vsklansky_rewrite::modelName() const { return "Vsklansky_rewrite"; }
unsigned Vsklansky_rewrite::threads() const { return 1; }
void Vsklansky_rewrite::prepareClone() const { contextp()->prepareClone(); }
void Vsklansky_rewrite::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vsklansky_rewrite::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vsklansky_rewrite___024root__trace_decl_types(VerilatedVcd* tracep);

void Vsklansky_rewrite___024root__trace_init_top(Vsklansky_rewrite___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vsklansky_rewrite___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsklansky_rewrite___024root*>(voidSelf);
    Vsklansky_rewrite__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vsklansky_rewrite___024root__trace_decl_types(tracep);
    Vsklansky_rewrite___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vsklansky_rewrite___024root__trace_register(Vsklansky_rewrite___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vsklansky_rewrite::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vsklansky_rewrite::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vsklansky_rewrite___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
