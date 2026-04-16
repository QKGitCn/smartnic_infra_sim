// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vcv32e40x_gvsoc_core_lint_top__pch.h"

//============================================================
// Constructors

Vcv32e40x_gvsoc_core_lint_top::Vcv32e40x_gvsoc_core_lint_top(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vcv32e40x_gvsoc_core_lint_top__Syms(contextp(), _vcname__, this)}
    , clk_i{vlSymsp->TOP.clk_i}
    , rst_ni{vlSymsp->TOP.rst_ni}
    , instr_req_o{vlSymsp->TOP.instr_req_o}
    , instr_gnt_i{vlSymsp->TOP.instr_gnt_i}
    , instr_rvalid_i{vlSymsp->TOP.instr_rvalid_i}
    , instr_err_i{vlSymsp->TOP.instr_err_i}
    , data_req_o{vlSymsp->TOP.data_req_o}
    , data_gnt_i{vlSymsp->TOP.data_gnt_i}
    , data_rvalid_i{vlSymsp->TOP.data_rvalid_i}
    , data_be_o{vlSymsp->TOP.data_be_o}
    , data_we_o{vlSymsp->TOP.data_we_o}
    , data_err_i{vlSymsp->TOP.data_err_i}
    , data_exokay_i{vlSymsp->TOP.data_exokay_i}
    , fetch_enable_i{vlSymsp->TOP.fetch_enable_i}
    , core_sleep_o{vlSymsp->TOP.core_sleep_o}
    , fencei_flush_req_o{vlSymsp->TOP.fencei_flush_req_o}
    , fencei_flush_ack_i{vlSymsp->TOP.fencei_flush_ack_i}
    , debug_havereset_o{vlSymsp->TOP.debug_havereset_o}
    , debug_running_o{vlSymsp->TOP.debug_running_o}
    , debug_halted_o{vlSymsp->TOP.debug_halted_o}
    , debug_pc_valid_o{vlSymsp->TOP.debug_pc_valid_o}
    , boot_addr_i{vlSymsp->TOP.boot_addr_i}
    , instr_addr_o{vlSymsp->TOP.instr_addr_o}
    , instr_rdata_i{vlSymsp->TOP.instr_rdata_i}
    , data_addr_o{vlSymsp->TOP.data_addr_o}
    , data_wdata_o{vlSymsp->TOP.data_wdata_o}
    , data_rdata_i{vlSymsp->TOP.data_rdata_i}
    , irq_i{vlSymsp->TOP.irq_i}
    , debug_pc_o{vlSymsp->TOP.debug_pc_o}
    , mcycle_o{vlSymsp->TOP.mcycle_o}
    , time_i{vlSymsp->TOP.time_i}
    , __PVT__cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__m_c_obi_instr_if{vlSymsp->TOP.__PVT__cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__m_c_obi_instr_if}
    , __PVT__cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__m_c_obi_data_if{vlSymsp->TOP.__PVT__cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__m_c_obi_data_if}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vcv32e40x_gvsoc_core_lint_top::Vcv32e40x_gvsoc_core_lint_top(const char* _vcname__)
    : Vcv32e40x_gvsoc_core_lint_top(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vcv32e40x_gvsoc_core_lint_top::~Vcv32e40x_gvsoc_core_lint_top() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vcv32e40x_gvsoc_core_lint_top___024root___eval_debug_assertions(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf);
#endif  // VL_DEBUG
void Vcv32e40x_gvsoc_core_lint_top___024root___eval_static(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf);
void Vcv32e40x_gvsoc_core_lint_top___024root___eval_initial(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf);
void Vcv32e40x_gvsoc_core_lint_top___024root___eval_settle(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf);
void Vcv32e40x_gvsoc_core_lint_top___024root___eval(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf);

void Vcv32e40x_gvsoc_core_lint_top::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vcv32e40x_gvsoc_core_lint_top::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vcv32e40x_gvsoc_core_lint_top___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vcv32e40x_gvsoc_core_lint_top___024root___eval_static(&(vlSymsp->TOP));
        Vcv32e40x_gvsoc_core_lint_top___024root___eval_initial(&(vlSymsp->TOP));
        Vcv32e40x_gvsoc_core_lint_top___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vcv32e40x_gvsoc_core_lint_top___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vcv32e40x_gvsoc_core_lint_top::eventsPending() { return false; }

uint64_t Vcv32e40x_gvsoc_core_lint_top::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vcv32e40x_gvsoc_core_lint_top::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vcv32e40x_gvsoc_core_lint_top___024root___eval_final(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf);

VL_ATTR_COLD void Vcv32e40x_gvsoc_core_lint_top::final() {
    Vcv32e40x_gvsoc_core_lint_top___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vcv32e40x_gvsoc_core_lint_top::hierName() const { return vlSymsp->name(); }
const char* Vcv32e40x_gvsoc_core_lint_top::modelName() const { return "Vcv32e40x_gvsoc_core_lint_top"; }
unsigned Vcv32e40x_gvsoc_core_lint_top::threads() const { return 1; }
void Vcv32e40x_gvsoc_core_lint_top::prepareClone() const { contextp()->prepareClone(); }
void Vcv32e40x_gvsoc_core_lint_top::atClone() const {
    contextp()->threadPoolpOnClone();
}
