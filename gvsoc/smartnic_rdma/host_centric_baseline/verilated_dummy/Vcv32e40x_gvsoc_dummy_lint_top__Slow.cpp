// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcv32e40x_gvsoc_dummy_lint_top.h for the primary calling header

#include "Vcv32e40x_gvsoc_dummy_lint_top.h"
#include "Vcv32e40x_gvsoc_dummy_lint_top__Syms.h"

//==========

VL_CTOR_IMP(Vcv32e40x_gvsoc_dummy_lint_top) {
    Vcv32e40x_gvsoc_dummy_lint_top__Syms* __restrict vlSymsp = __VlSymsp = new Vcv32e40x_gvsoc_dummy_lint_top__Syms(this, name());
    Vcv32e40x_gvsoc_dummy_lint_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vcv32e40x_gvsoc_dummy_lint_top::__Vconfigure(Vcv32e40x_gvsoc_dummy_lint_top__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vcv32e40x_gvsoc_dummy_lint_top::~Vcv32e40x_gvsoc_dummy_lint_top() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vcv32e40x_gvsoc_dummy_lint_top::_initial__TOP__1(Vcv32e40x_gvsoc_dummy_lint_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_gvsoc_dummy_lint_top::_initial__TOP__1\n"); );
    Vcv32e40x_gvsoc_dummy_lint_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->data_we_o = 1U;
    vlTOPp->data_wdata_o = 0xdeadbeefU;
    vlTOPp->data_be_o = 0xfU;
    vlTOPp->core_sleep_o = 0U;
    vlTOPp->fencei_flush_req_o = 0U;
}

void Vcv32e40x_gvsoc_dummy_lint_top::_settle__TOP__3(Vcv32e40x_gvsoc_dummy_lint_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_gvsoc_dummy_lint_top::_settle__TOP__3\n"); );
    Vcv32e40x_gvsoc_dummy_lint_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->data_addr_o = ((IData)(0x100U) + vlTOPp->boot_addr_i);
    vlTOPp->debug_havereset_o = (1U & (~ (IData)(vlTOPp->rst_ni)));
    vlTOPp->debug_halted_o = (1U & (~ (IData)(vlTOPp->fetch_enable_i)));
    vlTOPp->debug_running_o = vlTOPp->fetch_enable_i;
    vlTOPp->debug_pc_valid_o = vlTOPp->fetch_enable_i;
    vlTOPp->instr_addr_o = vlTOPp->cv32e40x_gvsoc_dummy_lint_top__DOT__u_dummy__DOT__pc_q;
    vlTOPp->data_req_o = (3U == (IData)(vlTOPp->cv32e40x_gvsoc_dummy_lint_top__DOT__u_dummy__DOT__state_q));
    vlTOPp->mcycle_o = vlTOPp->cv32e40x_gvsoc_dummy_lint_top__DOT__u_dummy__DOT__cycle_count_q;
    vlTOPp->debug_pc_o = vlTOPp->cv32e40x_gvsoc_dummy_lint_top__DOT__u_dummy__DOT__pc_q;
    vlTOPp->instr_req_o = ((1U == (IData)(vlTOPp->cv32e40x_gvsoc_dummy_lint_top__DOT__u_dummy__DOT__state_q)) 
                           & (IData)(vlTOPp->fetch_enable_i));
}

void Vcv32e40x_gvsoc_dummy_lint_top::_eval_initial(Vcv32e40x_gvsoc_dummy_lint_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_gvsoc_dummy_lint_top::_eval_initial\n"); );
    Vcv32e40x_gvsoc_dummy_lint_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
    vlTOPp->__Vclklast__TOP__clk_i = vlTOPp->clk_i;
    vlTOPp->__Vclklast__TOP__rst_ni = vlTOPp->rst_ni;
}

void Vcv32e40x_gvsoc_dummy_lint_top::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_gvsoc_dummy_lint_top::final\n"); );
    // Variables
    Vcv32e40x_gvsoc_dummy_lint_top__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vcv32e40x_gvsoc_dummy_lint_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vcv32e40x_gvsoc_dummy_lint_top::_eval_settle(Vcv32e40x_gvsoc_dummy_lint_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_gvsoc_dummy_lint_top::_eval_settle\n"); );
    Vcv32e40x_gvsoc_dummy_lint_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__3(vlSymsp);
}

void Vcv32e40x_gvsoc_dummy_lint_top::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_gvsoc_dummy_lint_top::_ctor_var_reset\n"); );
    // Body
    clk_i = VL_RAND_RESET_I(1);
    rst_ni = VL_RAND_RESET_I(1);
    boot_addr_i = VL_RAND_RESET_I(32);
    instr_req_o = VL_RAND_RESET_I(1);
    instr_gnt_i = VL_RAND_RESET_I(1);
    instr_rvalid_i = VL_RAND_RESET_I(1);
    instr_addr_o = VL_RAND_RESET_I(32);
    instr_rdata_i = VL_RAND_RESET_I(32);
    instr_err_i = VL_RAND_RESET_I(1);
    data_req_o = VL_RAND_RESET_I(1);
    data_gnt_i = VL_RAND_RESET_I(1);
    data_rvalid_i = VL_RAND_RESET_I(1);
    data_addr_o = VL_RAND_RESET_I(32);
    data_be_o = VL_RAND_RESET_I(4);
    data_we_o = VL_RAND_RESET_I(1);
    data_wdata_o = VL_RAND_RESET_I(32);
    data_rdata_i = VL_RAND_RESET_I(32);
    data_err_i = VL_RAND_RESET_I(1);
    data_exokay_i = VL_RAND_RESET_I(1);
    irq_i = VL_RAND_RESET_I(32);
    fetch_enable_i = VL_RAND_RESET_I(1);
    core_sleep_o = VL_RAND_RESET_I(1);
    fencei_flush_req_o = VL_RAND_RESET_I(1);
    fencei_flush_ack_i = VL_RAND_RESET_I(1);
    mcycle_o = VL_RAND_RESET_Q(64);
    time_i = VL_RAND_RESET_Q(64);
    debug_havereset_o = VL_RAND_RESET_I(1);
    debug_running_o = VL_RAND_RESET_I(1);
    debug_halted_o = VL_RAND_RESET_I(1);
    debug_pc_valid_o = VL_RAND_RESET_I(1);
    debug_pc_o = VL_RAND_RESET_I(32);
    cv32e40x_gvsoc_dummy_lint_top__DOT__u_dummy__DOT__state_q = VL_RAND_RESET_I(3);
    cv32e40x_gvsoc_dummy_lint_top__DOT__u_dummy__DOT__pc_q = VL_RAND_RESET_I(32);
    cv32e40x_gvsoc_dummy_lint_top__DOT__u_dummy__DOT__fetch_count_q = VL_RAND_RESET_I(16);
    cv32e40x_gvsoc_dummy_lint_top__DOT__u_dummy__DOT__data_done_q = VL_RAND_RESET_I(1);
    cv32e40x_gvsoc_dummy_lint_top__DOT__u_dummy__DOT__cycle_count_q = VL_RAND_RESET_Q(64);
}
