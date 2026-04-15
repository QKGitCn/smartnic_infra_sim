// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcv32e40x_gvsoc_dummy_lint_top.h for the primary calling header

#include "Vcv32e40x_gvsoc_dummy_lint_top.h"
#include "Vcv32e40x_gvsoc_dummy_lint_top__Syms.h"

//==========

void Vcv32e40x_gvsoc_dummy_lint_top::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vcv32e40x_gvsoc_dummy_lint_top::eval\n"); );
    Vcv32e40x_gvsoc_dummy_lint_top__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vcv32e40x_gvsoc_dummy_lint_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("smartnic_rdma/mcu/cv32e40x_dummy/cv32e40x_gvsoc_dummy_lint_top.sv", 25, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vcv32e40x_gvsoc_dummy_lint_top::_eval_initial_loop(Vcv32e40x_gvsoc_dummy_lint_top__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("smartnic_rdma/mcu/cv32e40x_dummy/cv32e40x_gvsoc_dummy_lint_top.sv", 25, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void Vcv32e40x_gvsoc_dummy_lint_top::_combo__TOP__2(Vcv32e40x_gvsoc_dummy_lint_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_gvsoc_dummy_lint_top::_combo__TOP__2\n"); );
    Vcv32e40x_gvsoc_dummy_lint_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->data_addr_o = ((IData)(0x100U) + vlTOPp->boot_addr_i);
    vlTOPp->debug_havereset_o = (1U & (~ (IData)(vlTOPp->rst_ni)));
    vlTOPp->debug_halted_o = (1U & (~ (IData)(vlTOPp->fetch_enable_i)));
    vlTOPp->debug_running_o = vlTOPp->fetch_enable_i;
    vlTOPp->debug_pc_valid_o = vlTOPp->fetch_enable_i;
}

VL_INLINE_OPT void Vcv32e40x_gvsoc_dummy_lint_top::_sequent__TOP__4(Vcv32e40x_gvsoc_dummy_lint_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_gvsoc_dummy_lint_top::_sequent__TOP__4\n"); );
    Vcv32e40x_gvsoc_dummy_lint_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*2:0*/ __Vdly__cv32e40x_gvsoc_dummy_lint_top__DOT__u_dummy__DOT__state_q;
    CData/*0:0*/ __Vdly__cv32e40x_gvsoc_dummy_lint_top__DOT__u_dummy__DOT__data_done_q;
    SData/*15:0*/ __Vdly__cv32e40x_gvsoc_dummy_lint_top__DOT__u_dummy__DOT__fetch_count_q;
    // Body
    __Vdly__cv32e40x_gvsoc_dummy_lint_top__DOT__u_dummy__DOT__fetch_count_q 
        = vlTOPp->cv32e40x_gvsoc_dummy_lint_top__DOT__u_dummy__DOT__fetch_count_q;
    __Vdly__cv32e40x_gvsoc_dummy_lint_top__DOT__u_dummy__DOT__data_done_q 
        = vlTOPp->cv32e40x_gvsoc_dummy_lint_top__DOT__u_dummy__DOT__data_done_q;
    __Vdly__cv32e40x_gvsoc_dummy_lint_top__DOT__u_dummy__DOT__state_q 
        = vlTOPp->cv32e40x_gvsoc_dummy_lint_top__DOT__u_dummy__DOT__state_q;
    vlTOPp->cv32e40x_gvsoc_dummy_lint_top__DOT__u_dummy__DOT__cycle_count_q 
        = ((IData)(vlTOPp->rst_ni) ? (1ULL + vlTOPp->cv32e40x_gvsoc_dummy_lint_top__DOT__u_dummy__DOT__cycle_count_q)
            : 0ULL);
    if (vlTOPp->rst_ni) {
        if ((4U & (IData)(vlTOPp->cv32e40x_gvsoc_dummy_lint_top__DOT__u_dummy__DOT__state_q))) {
            if ((2U & (IData)(vlTOPp->cv32e40x_gvsoc_dummy_lint_top__DOT__u_dummy__DOT__state_q))) {
                __Vdly__cv32e40x_gvsoc_dummy_lint_top__DOT__u_dummy__DOT__state_q = 0U;
            } else {
                if ((1U & (IData)(vlTOPp->cv32e40x_gvsoc_dummy_lint_top__DOT__u_dummy__DOT__state_q))) {
                    __Vdly__cv32e40x_gvsoc_dummy_lint_top__DOT__u_dummy__DOT__state_q = 0U;
                } else {
                    if (vlTOPp->data_rvalid_i) {
                        __Vdly__cv32e40x_gvsoc_dummy_lint_top__DOT__u_dummy__DOT__data_done_q = 1U;
                        __Vdly__cv32e40x_gvsoc_dummy_lint_top__DOT__u_dummy__DOT__state_q = 1U;
                    }
                }
            }
        } else {
            if ((2U & (IData)(vlTOPp->cv32e40x_gvsoc_dummy_lint_top__DOT__u_dummy__DOT__state_q))) {
                if ((1U & (IData)(vlTOPp->cv32e40x_gvsoc_dummy_lint_top__DOT__u_dummy__DOT__state_q))) {
                    if (vlTOPp->data_gnt_i) {
                        __Vdly__cv32e40x_gvsoc_dummy_lint_top__DOT__u_dummy__DOT__state_q = 4U;
                    }
                } else {
                    if (vlTOPp->fetch_enable_i) {
                        if (vlTOPp->instr_rvalid_i) {
                            __Vdly__cv32e40x_gvsoc_dummy_lint_top__DOT__u_dummy__DOT__fetch_count_q 
                                = (0xffffU & ((IData)(1U) 
                                              + (IData)(vlTOPp->cv32e40x_gvsoc_dummy_lint_top__DOT__u_dummy__DOT__fetch_count_q)));
                            vlTOPp->cv32e40x_gvsoc_dummy_lint_top__DOT__u_dummy__DOT__pc_q 
                                = ((IData)(4U) + vlTOPp->cv32e40x_gvsoc_dummy_lint_top__DOT__u_dummy__DOT__pc_q);
                            __Vdly__cv32e40x_gvsoc_dummy_lint_top__DOT__u_dummy__DOT__state_q 
                                = (((0xfU == (IData)(vlTOPp->cv32e40x_gvsoc_dummy_lint_top__DOT__u_dummy__DOT__fetch_count_q)) 
                                    & (~ (IData)(vlTOPp->cv32e40x_gvsoc_dummy_lint_top__DOT__u_dummy__DOT__data_done_q)))
                                    ? 3U : 1U);
                        }
                    } else {
                        __Vdly__cv32e40x_gvsoc_dummy_lint_top__DOT__u_dummy__DOT__state_q = 0U;
                    }
                }
            } else {
                if ((1U & (IData)(vlTOPp->cv32e40x_gvsoc_dummy_lint_top__DOT__u_dummy__DOT__state_q))) {
                    if (vlTOPp->fetch_enable_i) {
                        if (vlTOPp->instr_gnt_i) {
                            __Vdly__cv32e40x_gvsoc_dummy_lint_top__DOT__u_dummy__DOT__state_q = 2U;
                        }
                    } else {
                        __Vdly__cv32e40x_gvsoc_dummy_lint_top__DOT__u_dummy__DOT__state_q = 0U;
                    }
                } else {
                    if (vlTOPp->fetch_enable_i) {
                        vlTOPp->cv32e40x_gvsoc_dummy_lint_top__DOT__u_dummy__DOT__pc_q 
                            = vlTOPp->boot_addr_i;
                        __Vdly__cv32e40x_gvsoc_dummy_lint_top__DOT__u_dummy__DOT__state_q = 1U;
                    }
                }
            }
        }
    } else {
        vlTOPp->cv32e40x_gvsoc_dummy_lint_top__DOT__u_dummy__DOT__pc_q = 0U;
        __Vdly__cv32e40x_gvsoc_dummy_lint_top__DOT__u_dummy__DOT__state_q = 0U;
        __Vdly__cv32e40x_gvsoc_dummy_lint_top__DOT__u_dummy__DOT__fetch_count_q = 0U;
        __Vdly__cv32e40x_gvsoc_dummy_lint_top__DOT__u_dummy__DOT__data_done_q = 0U;
    }
    vlTOPp->cv32e40x_gvsoc_dummy_lint_top__DOT__u_dummy__DOT__data_done_q 
        = __Vdly__cv32e40x_gvsoc_dummy_lint_top__DOT__u_dummy__DOT__data_done_q;
    vlTOPp->cv32e40x_gvsoc_dummy_lint_top__DOT__u_dummy__DOT__fetch_count_q 
        = __Vdly__cv32e40x_gvsoc_dummy_lint_top__DOT__u_dummy__DOT__fetch_count_q;
    vlTOPp->cv32e40x_gvsoc_dummy_lint_top__DOT__u_dummy__DOT__state_q 
        = __Vdly__cv32e40x_gvsoc_dummy_lint_top__DOT__u_dummy__DOT__state_q;
    vlTOPp->mcycle_o = vlTOPp->cv32e40x_gvsoc_dummy_lint_top__DOT__u_dummy__DOT__cycle_count_q;
    vlTOPp->instr_addr_o = vlTOPp->cv32e40x_gvsoc_dummy_lint_top__DOT__u_dummy__DOT__pc_q;
    vlTOPp->debug_pc_o = vlTOPp->cv32e40x_gvsoc_dummy_lint_top__DOT__u_dummy__DOT__pc_q;
    vlTOPp->data_req_o = (3U == (IData)(vlTOPp->cv32e40x_gvsoc_dummy_lint_top__DOT__u_dummy__DOT__state_q));
}

VL_INLINE_OPT void Vcv32e40x_gvsoc_dummy_lint_top::_combo__TOP__5(Vcv32e40x_gvsoc_dummy_lint_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_gvsoc_dummy_lint_top::_combo__TOP__5\n"); );
    Vcv32e40x_gvsoc_dummy_lint_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->instr_req_o = ((1U == (IData)(vlTOPp->cv32e40x_gvsoc_dummy_lint_top__DOT__u_dummy__DOT__state_q)) 
                           & (IData)(vlTOPp->fetch_enable_i));
}

void Vcv32e40x_gvsoc_dummy_lint_top::_eval(Vcv32e40x_gvsoc_dummy_lint_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_gvsoc_dummy_lint_top::_eval\n"); );
    Vcv32e40x_gvsoc_dummy_lint_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__2(vlSymsp);
    if ((((IData)(vlTOPp->clk_i) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk_i))) 
         | ((~ (IData)(vlTOPp->rst_ni)) & (IData)(vlTOPp->__Vclklast__TOP__rst_ni)))) {
        vlTOPp->_sequent__TOP__4(vlSymsp);
    }
    vlTOPp->_combo__TOP__5(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__clk_i = vlTOPp->clk_i;
    vlTOPp->__Vclklast__TOP__rst_ni = vlTOPp->rst_ni;
}

VL_INLINE_OPT QData Vcv32e40x_gvsoc_dummy_lint_top::_change_request(Vcv32e40x_gvsoc_dummy_lint_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_gvsoc_dummy_lint_top::_change_request\n"); );
    Vcv32e40x_gvsoc_dummy_lint_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData Vcv32e40x_gvsoc_dummy_lint_top::_change_request_1(Vcv32e40x_gvsoc_dummy_lint_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_gvsoc_dummy_lint_top::_change_request_1\n"); );
    Vcv32e40x_gvsoc_dummy_lint_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vcv32e40x_gvsoc_dummy_lint_top::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_gvsoc_dummy_lint_top::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clk_i & 0xfeU))) {
        Verilated::overWidthError("clk_i");}
    if (VL_UNLIKELY((rst_ni & 0xfeU))) {
        Verilated::overWidthError("rst_ni");}
    if (VL_UNLIKELY((instr_gnt_i & 0xfeU))) {
        Verilated::overWidthError("instr_gnt_i");}
    if (VL_UNLIKELY((instr_rvalid_i & 0xfeU))) {
        Verilated::overWidthError("instr_rvalid_i");}
    if (VL_UNLIKELY((instr_err_i & 0xfeU))) {
        Verilated::overWidthError("instr_err_i");}
    if (VL_UNLIKELY((data_gnt_i & 0xfeU))) {
        Verilated::overWidthError("data_gnt_i");}
    if (VL_UNLIKELY((data_rvalid_i & 0xfeU))) {
        Verilated::overWidthError("data_rvalid_i");}
    if (VL_UNLIKELY((data_err_i & 0xfeU))) {
        Verilated::overWidthError("data_err_i");}
    if (VL_UNLIKELY((data_exokay_i & 0xfeU))) {
        Verilated::overWidthError("data_exokay_i");}
    if (VL_UNLIKELY((fetch_enable_i & 0xfeU))) {
        Verilated::overWidthError("fetch_enable_i");}
    if (VL_UNLIKELY((fencei_flush_ack_i & 0xfeU))) {
        Verilated::overWidthError("fencei_flush_ack_i");}
}
#endif  // VL_DEBUG
