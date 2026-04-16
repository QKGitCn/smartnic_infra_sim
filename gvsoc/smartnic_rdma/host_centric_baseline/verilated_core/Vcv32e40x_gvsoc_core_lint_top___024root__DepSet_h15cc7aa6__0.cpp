// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcv32e40x_gvsoc_core_lint_top.h for the primary calling header

#include "Vcv32e40x_gvsoc_core_lint_top__pch.h"
#include "Vcv32e40x_gvsoc_core_lint_top___024root.h"

void Vcv32e40x_gvsoc_core_lint_top___024root___ico_sequent__TOP__0(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf);
void Vcv32e40x_gvsoc_core_lint_top___024root___ico_comb__TOP__0(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf);
void Vcv32e40x_gvsoc_core_lint_top___024root___ico_comb__TOP__1(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf);
void Vcv32e40x_gvsoc_core_lint_top___024root___ico_comb__TOP__2(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf);
void Vcv32e40x_gvsoc_core_lint_top___024root___ico_comb__TOP__3(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf);
void Vcv32e40x_gvsoc_core_lint_top___024root___ico_comb__TOP__4(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf);
void Vcv32e40x_gvsoc_core_lint_top___024root___ico_comb__TOP__5(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf);
void Vcv32e40x_gvsoc_core_lint_top___024root___ico_comb__TOP__6(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf);
void Vcv32e40x_gvsoc_core_lint_top___024root___ico_comb__TOP__7(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf);
void Vcv32e40x_gvsoc_core_lint_top___024root___ico_comb__TOP__8(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf);

void Vcv32e40x_gvsoc_core_lint_top___024root___eval_ico(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcv32e40x_gvsoc_core_lint_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_gvsoc_core_lint_top___024root___eval_ico\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vcv32e40x_gvsoc_core_lint_top___024root___ico_sequent__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vcv32e40x_gvsoc_core_lint_top___024root___ico_comb__TOP__0(vlSelf);
    }
    if ((5ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vcv32e40x_gvsoc_core_lint_top___024root___ico_comb__TOP__1(vlSelf);
    }
    if ((0x41ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vcv32e40x_gvsoc_core_lint_top___024root___ico_comb__TOP__2(vlSelf);
    }
    if ((0x3fff1ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vcv32e40x_gvsoc_core_lint_top___024root___ico_comb__TOP__3(vlSelf);
    }
    if ((0xdULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vcv32e40x_gvsoc_core_lint_top___024root___ico_comb__TOP__4(vlSelf);
    }
    if ((0x1dULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vcv32e40x_gvsoc_core_lint_top___024root___ico_comb__TOP__5(vlSelf);
    }
    if ((0x3fff3ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vcv32e40x_gvsoc_core_lint_top___024root___ico_comb__TOP__6(vlSelf);
    }
    if ((0x3fff7ULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vcv32e40x_gvsoc_core_lint_top___024root___ico_comb__TOP__7(vlSelf);
    }
    if ((0x3ffffULL & vlSelfRef.__VicoTriggered.word(0U))) {
        Vcv32e40x_gvsoc_core_lint_top___024root___ico_comb__TOP__8(vlSelf);
    }
}

VL_INLINE_OPT void Vcv32e40x_gvsoc_core_lint_top___024root___ico_comb__TOP__0(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcv32e40x_gvsoc_core_lint_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_gvsoc_core_lint_top___024root___ico_comb__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U] 
        = ((0x9fffffffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U]) 
           | (0xe0000000U & (((((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__bus_trans_valid) 
                                & (IData)(vlSelfRef.data_gnt_i)) 
                               & (~ (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__bus_trans[1U] 
                                     >> 0xaU))) << 0x1eU) 
                             | (0xe0000000U & ((((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__bus_trans_valid) 
                                                 & (IData)(vlSelfRef.data_gnt_i)) 
                                                << 0x1dU) 
                                               & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__bus_trans[1U] 
                                                  << 0x13U))))));
}

VL_INLINE_OPT void Vcv32e40x_gvsoc_core_lint_top___024root___ico_comb__TOP__2(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcv32e40x_gvsoc_core_lint_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_gvsoc_core_lint_top___024root___ico_comb__TOP__2\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[3U] 
        = ((0xffffc1ffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[3U]) 
           | (0xfffffe00U & ((0x2000U & (((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_q) 
                                          << 0xdU) 
                                         | (0xffffe000U 
                                            & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__dcsr 
                                               << 0xbU)))) 
                             | ((0x1000U & ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_fsm_cs) 
                                            << 0xcU)) 
                                | ((0x800U & ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_fsm_cs) 
                                              << 0xaU)) 
                                   | ((0x400U & ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_fsm_cs) 
                                                 << 8U)) 
                                      | (((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__irq_wu_ctrl) 
                                          | ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__nmi_pending_q) 
                                             | (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_async_debug))) 
                                         << 9U)))))));
}

extern const VlUnpacked<CData/*2:0*/, 64> Vcv32e40x_gvsoc_core_lint_top__ConstPool__TABLE_h5aab22ee_0;

VL_INLINE_OPT void Vcv32e40x_gvsoc_core_lint_top___024root___ico_comb__TOP__3(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcv32e40x_gvsoc_core_lint_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_gvsoc_core_lint_top___024root___ico_comb__TOP__3\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*5:0*/ __Vtableidx8;
    __Vtableidx8 = 0;
    // Body
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_ns 
        = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs;
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[6U] 
        = (0x180U | vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[6U]);
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[6U] 
        = (0x1f0U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[6U]);
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[6U] 
        = (0x1bfU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[6U]);
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[4U] 
        = (0x1fffffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[4U]);
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[5U] 
        = (0xfffff000U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[5U]);
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U] 
        = ((0xffdfffffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U]) 
           | ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__single_step_halt_if_q) 
              << 0x15U));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U] 
        = ((0xffefffffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U]) 
           | (0x100000U & ((((IData)((0U != (0x1d80U 
                                             & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_byp))) 
                             | (((((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__irq_req_ctrl) 
                                   | (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__nmi_pending_q)) 
                                  | (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_nmi_early)) 
                                 & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_interruptible)) 
                                & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__id_stage_haltable))) 
                            | (((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_async_debug) 
                                | (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_sync_debug)) 
                               & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__id_stage_haltable))) 
                           << 0x14U)));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U] 
        = ((0xfff7ffffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U]) 
           | ((IData)((0U != (0x267U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_byp))) 
              << 0x13U));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U] 
        = (0xfff81fffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U]);
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[1U] 
        = (0x3fU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[1U]);
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[2U] 
        = (0xfffffe00U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[2U]);
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[3U] 
        = (0x3fffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[3U]);
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[4U] 
        = (0xffff0000U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[4U]);
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__single_step_halt_if_n 
        = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__single_step_halt_if_q;
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[6U] 
        = (0x1cfU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[6U]);
    if ((2U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs))) {
        if ((1U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs))) {
            vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[4U] 
                = (0x200000U | vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[4U]);
            vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__single_step_halt_if_n = 0U;
            vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_ns = 1U;
            vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[6U] 
                = (0x40U | vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[6U]);
            vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[6U] 
                = (0xaU | (0x1f0U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[6U]));
            vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[1U] 
                = ((0xffffffbfU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[1U]) 
                   | (0x40U & ((~ ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__ebreak_in_wb) 
                                   & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_q))) 
                               << 6U)));
            vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[4U] 
                = (0x8000U | vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[4U]);
            if ((2U == (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_cause_q))) {
                vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[3U] 
                    = ((0x3fffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[3U]) 
                       | ((IData)((1ULL | ((QData)((IData)(
                                                           (((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[4U] 
                                                              << 2U) 
                                                             | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[3U] 
                                                                >> 0x1eU)) 
                                                            | vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__wpt_match_wb))) 
                                           << 1U))) 
                          << 0xeU));
                vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[4U] 
                    = ((0xffff8000U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[4U]) 
                       | (((IData)((1ULL | ((QData)((IData)(
                                                            (((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[4U] 
                                                               << 2U) 
                                                              | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[3U] 
                                                                 >> 0x1eU)) 
                                                             | vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__wpt_match_wb))) 
                                            << 1U))) 
                           >> 0x12U) | ((IData)(((1ULL 
                                                  | ((QData)((IData)(
                                                                     (((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[4U] 
                                                                        << 2U) 
                                                                       | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[3U] 
                                                                          >> 0x1eU)) 
                                                                      | vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__wpt_match_wb))) 
                                                     << 1U)) 
                                                 >> 0x20U)) 
                                        << 0xeU)));
            }
            if ((4U != (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_cause_q))) {
                vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U] 
                    = (0x1c000U | vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U]);
                vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U] 
                    = ((0xffffdfffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U]) 
                       | (0x2000U & ((~ ((1U == (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_cause_q)) 
                                         | (2U == (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_cause_q)))) 
                                     << 0xdU)));
            } else {
                vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U] 
                    = (0x10000U | (0xfffe1fffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U]));
            }
        } else {
            vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[6U] 
                = (0x7fU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[6U]);
            vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U] 
                = (0x20000U | vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U]);
            if ((0x200U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[3U])) {
                vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_ns = 1U;
                vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[6U] 
                    = (0x100U | vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[6U]);
                vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U] 
                    = (0x100000U | vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U]);
                vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U] 
                    = (0xfffdffffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U]);
            }
        }
    } else if ((1U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs))) {
        if (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_ha7292f8a__0) {
            vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U] 
                = (0x1e000U | vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U]);
            vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[6U] 
                = (0x40U | vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[6U]);
            vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[6U] 
                = (0xcU | (0x1f0U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[6U]));
            vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[1U] 
                = (0x40U | vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[1U]);
            vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[2U] 
                = (0x100U | vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[2U]);
            vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[1U] 
                = ((0xfff001ffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[1U]) 
                   | (((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__nmi_is_store_q)
                        ? 0x401U : 0x400U) << 9U));
            vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[2U] 
                = (0xffffff7fU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[2U]);
        } else if (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_ha9ecc2ef__0) {
            vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U] 
                = (0x3c0000U | vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U]);
            vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_ns = 3U;
        } else if (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_h225c6b2f__0) {
            vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U] 
                = (0x1e000U | vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U]);
            vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[6U] 
                = (0x40U | vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[6U]);
            vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[5U] 
                = ((0xfffff001U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[5U]) 
                   | (0xfffffffeU & (0x800U | ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT____Vcellout__gen_basic_interrupt__DOT__int_controller_i__irq_id_ctrl_o) 
                                               << 1U))));
            vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[1U] 
                = (0x40U | vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[1U]);
            vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[2U] 
                = (0x100U | (0xfffffe7fU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[2U]));
            vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[6U] 
                = (9U | (0x1f0U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[6U]));
            vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[1U] 
                = ((0xfff001ffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[1U]) 
                   | ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT____Vcellout__gen_basic_interrupt__DOT__int_controller_i__irq_id_ctrl_o) 
                      << 9U));
        } else if (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_h7c88e781__0) {
            vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U] 
                = (0x3c0000U | vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U]);
            vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_ns = 3U;
        } else {
            if (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__exception_in_wb) {
                vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U] 
                    = (0x1c000U | (0xfffe1fffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U]));
                vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[6U] 
                    = (0x40U | vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[6U]);
                vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[6U] 
                    = ((0x1f0U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[6U]) 
                       | ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_q)
                           ? 0xbU : 8U));
                vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[1U] 
                    = ((0xffffffbfU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[1U]) 
                       | (0x40U & ((~ (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_q)) 
                                   << 6U)));
                vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[1U] 
                    = ((0xfff001ffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[1U]) 
                       | ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__exception_cause_wb) 
                          << 9U));
                vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[2U] 
                    = ((0xffffff7fU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[2U]) 
                       | (((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[1U] 
                            >> 0x15U) & (0U != (0x3000000U 
                                                & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[1U]))) 
                          << 7U));
            } else if (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_h7e4cdf56__0) {
                vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U] 
                    = (0x40000U | vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U]);
                vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_ns = 2U;
                vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[6U] 
                    = (0x17fU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[6U]);
            } else if (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_hebfcbc4a__0) {
                vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U] 
                    = (0x3c0000U | vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U]);
                if (((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__fencei_in_wb)
                      ? (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__fencei_req_and_ack_q)
                      : (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__fence_req_q))) {
                    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U] 
                        = (0x1c000U | vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U]);
                    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U] 
                        = (0xfffbffffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U]);
                    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[6U] 
                        = (0x40U | vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[6U]);
                    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[6U] 
                        = (6U | (0x1f0U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[6U]));
                }
            } else if (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__dret_in_wb) {
                vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U] 
                    = (0x1c000U | vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U]);
                vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__single_step_halt_if_n = 0U;
                vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[6U] 
                    = (2U | (0x1f0U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[6U]));
                vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[6U] 
                    = (0x40U | vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[6U]);
                vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[1U] 
                    = (0x80U | vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[1U]);
            } else if (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__csr_wr_in_wb_flush) {
                vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U] 
                    = (0x380000U | vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U]);
            } else if (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__csr_flush_ack_q) {
                vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U] 
                    = (0x1c000U | vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U]);
                vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[6U] 
                    = (0x40U | vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[6U]);
                vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[6U] 
                    = (6U | (0x1f0U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[6U]));
            } else if (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__branch_taken_ex) {
                vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U] 
                    = (0x18000U | vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U]);
                vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[6U] 
                    = (5U | (0x1f0U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[6U]));
                vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[6U] 
                    = (0x40U | vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[6U]);
            } else if (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__jump_taken_id) {
                vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U] 
                    = (0x10000U | vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U]);
                if (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__sys_mret_id) {
                    if ((0x40000000U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__rdata_q)) {
                        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[6U] 
                            = (0x60U | vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[6U]);
                        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__single_step_halt_if_n = 0U;
                        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[6U] 
                            = (1U | (0x1f0U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[6U]));
                    } else {
                        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[6U] 
                            = (1U | (0x1f0U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[6U]));
                        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[6U] 
                            = (0x40U | vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[6U]);
                    }
                } else {
                    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[6U] 
                        = ((0x1f0U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[6U]) 
                           | ((1U & ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[4U] 
                                      >> 0x17U) & (~ 
                                                   (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[0U] 
                                                    >> 1U))))
                               ? 0xfU : ((1U & ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[4U] 
                                                 >> 0x17U) 
                                                & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[0U] 
                                                   >> 1U)))
                                          ? 0xeU : 4U)));
                    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[6U] 
                        = (0x40U | vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[6U]);
                    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[6U] 
                        = ((0x1efU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[6U]) 
                           | (0x10U & ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[4U] 
                                        >> 0x13U) & 
                                       ((~ (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[0U] 
                                            >> 1U)) 
                                        << 4U))));
                }
            } else if (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_h161e6967__0) {
                if ((1U & (~ (IData)((0U != (0x38000000U 
                                             & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[4U])))))) {
                    if ((1U & (~ (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__branch_taken_q)))) {
                        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[6U] 
                            = (0x40U | vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[6U]);
                        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[6U] 
                            = (0xeU | (0x1f0U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[6U]));
                        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U] 
                            = (0x10000U | vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U]);
                    }
                }
            }
            if (((((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_1_6) 
                   & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[0U] 
                      >> 3U)) & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[1U] 
                                 >> 0x15U)) & (0U == 
                                               (0x42000U 
                                                & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U])))) {
                vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[1U] 
                    = ((0xfffffeffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[1U]) 
                       | (0x100U & ((~ (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_q)) 
                                    << 8U)));
            }
        }
        if (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_h9c43ac38__0) {
            vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_ns = 3U;
        }
    } else {
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[6U] 
            = (0x17fU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[6U]);
        if (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__sleep_unit_i__DOT__fetch_enable_q) {
            vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[6U] 
                = (0x80U | vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[6U]);
            vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_ns = 1U;
            vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[6U] 
                = (0x1f0U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[6U]);
            vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[6U] 
                = (0x40U | vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[6U]);
        }
    }
    if (((((~ (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[4U] 
               >> 0x13U)) & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__dcsr 
                             >> 2U)) & (~ (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__single_step_halt_if_q))) 
         & (((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_valid) 
             & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ready)) 
            & ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__last_op_if) 
               | (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__abort_op_if))))) {
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__single_step_halt_if_n = 1U;
    }
    __Vtableidx8 = (((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_ns) 
                     << 4U) | (((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_n) 
                                << 3U) | (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_fsm_cs)));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_fsm_ns 
        = Vcv32e40x_gvsoc_core_lint_top__ConstPool__TABLE_h5aab22ee_0
        [__Vtableidx8];
}

VL_INLINE_OPT void Vcv32e40x_gvsoc_core_lint_top___024root___ico_comb__TOP__4(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcv32e40x_gvsoc_core_lint_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_gvsoc_core_lint_top___024root___ico_comb__TOP__4\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode 
        = ((0x1fffe001ffffULL & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode) 
           | ((QData)((IData)((0xfffU & ((IData)((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode 
                                                  >> 0x21U)) 
                                         + VL_SHIFTL_III(12,12,32, 
                                                         (3U 
                                                          & (IData)(
                                                                    (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                                     >> 5U))), 4U))))) 
              << 0x11U));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode 
        = ((0x1ffffffe001fULL & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode) 
           | ((QData)((IData)(((8U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_instr))
                                ? 0U : (0xfffU & ((4U 
                                                   & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_instr))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_instr))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_instr))
                                                     ? 0U
                                                     : 
                                                    ((IData)(
                                                             (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode 
                                                              >> 0x11U)) 
                                                     - 
                                                     VL_SHIFTL_III(12,12,32, 
                                                                   (0x1fU 
                                                                    & ((IData)(1U) 
                                                                       + (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__instr_cnt_q))), 2U))))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_instr))
                                                    ? 
                                                   ((IData)(
                                                            (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode 
                                                             >> 0x11U)) 
                                                    - 
                                                    VL_SHIFTL_III(12,12,32, 
                                                                  (0x1fU 
                                                                   & ((IData)(1U) 
                                                                      + (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__instr_cnt_q))), 2U))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_instr))
                                                     ? 
                                                    (- 
                                                     VL_SHIFTL_III(12,12,32, 
                                                                   ((IData)(1U) 
                                                                    + (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__instr_cnt_q)), 2U))
                                                     : 0U))))))) 
              << 5U));
}

VL_INLINE_OPT void Vcv32e40x_gvsoc_core_lint_top___024root___ico_comb__TOP__5(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcv32e40x_gvsoc_core_lint_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_gvsoc_core_lint_top___024root___ico_comb__TOP__5\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_last_fsm;
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_last_fsm = 0;
    // Body
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__seq_instr 
        = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr;
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_n 
        = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_q;
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_last_fsm = 0U;
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_first_fsm = 1U;
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__ready_fsm = 0U;
    if ((8U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_q))) {
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__ready_fsm = 1U;
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_n = 0U;
    } else if ((4U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_q))) {
        if ((2U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_q))) {
            if ((1U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_q))) {
                vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_first_fsm = 0U;
                vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__seq_instr 
                    = (0x40338ULL | (7ULL & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__seq_instr));
                vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_n = 0U;
                vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__ready_fsm 
                    = ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ready) 
                       & (~ (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U] 
                             >> 0x15U)));
                cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_last_fsm = 1U;
            } else {
                vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_first_fsm = 0U;
                vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__seq_instr 
                    = (0x2898ULL | (7ULL & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__seq_instr));
                vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_n = 7U;
            }
        } else if ((1U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_q))) {
            vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_first_fsm = 0U;
            vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__seq_instr 
                = ((7ULL & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__seq_instr) 
                   | ((QData)((IData)(((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_load)
                                        ? (0x10113U 
                                           | ((IData)(
                                                      (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode 
                                                       >> 0x11U)) 
                                              << 0x14U))
                                        : (0x10113U 
                                           | ((- (IData)(
                                                         (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode 
                                                          >> 0x11U))) 
                                              << 0x14U))))) 
                      << 3U));
            if ((4U == (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_instr))) {
                vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_n = 6U;
            } else if ((3U == (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_instr))) {
                vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_n = 7U;
            } else {
                vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_n = 0U;
                vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__ready_fsm 
                    = ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ready) 
                       & (~ (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U] 
                             >> 0x15U)));
                cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_last_fsm = 1U;
            }
        } else {
            vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_first_fsm = 0U;
            vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__seq_instr 
                = ((7ULL & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__seq_instr) 
                   | ((QData)((IData)(((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_load)
                                        ? (0x12083U 
                                           | ((IData)(
                                                      (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode 
                                                       >> 5U)) 
                                              << 0x14U))
                                        : (0x112023U 
                                           | (((IData)(
                                                       (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode 
                                                        >> 0xaU)) 
                                               << 0x19U) 
                                              | (0xf80U 
                                                 & ((IData)(
                                                            (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode 
                                                             >> 5U)) 
                                                    << 7U))))))) 
                      << 3U));
            vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_n = 5U;
        }
    } else if ((2U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_q))) {
        if ((1U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_q))) {
            vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_first_fsm = 0U;
            vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__seq_instr 
                = ((7ULL & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__seq_instr) 
                   | ((QData)((IData)(((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_move_a2s)
                                        ? vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT____VdfgExtracted_h9cad3cb4__0
                                        : vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT____VdfgExtracted_h8eb8e2d3__0))) 
                      << 3U));
            vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_n = 0U;
            vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__ready_fsm 
                = ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ready) 
                   & (~ (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U] 
                         >> 0x15U)));
            cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_last_fsm = 1U;
        } else {
            vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_first_fsm = 0U;
            VL_ASSIGNSEL_QI(35,32,3U, vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__seq_instr, 
                            (0x12003U | (((IData)((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode 
                                                   >> 5U)) 
                                          << 0x14U) 
                                         | (([&]() {
                                    vlSelfRef.__Vfunc_sn_to_regnum__2__snum 
                                        = (0x1fU & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode));
                                    vlSelfRef.__Vfunc_sn_to_regnum__2__Vfuncout 
                                        = (((0U == (IData)(vlSelfRef.__Vfunc_sn_to_regnum__2__snum)) 
                                            || (1U 
                                                == (IData)(vlSelfRef.__Vfunc_sn_to_regnum__2__snum)))
                                            ? (8U | 
                                               (((0U 
                                                  != 
                                                  (7U 
                                                   & ((IData)(vlSelfRef.__Vfunc_sn_to_regnum__2__snum) 
                                                      >> 1U))) 
                                                 << 4U) 
                                                | (7U 
                                                   & (IData)(vlSelfRef.__Vfunc_sn_to_regnum__2__snum))))
                                            : (((0U 
                                                 != 
                                                 (7U 
                                                  & ((IData)(vlSelfRef.__Vfunc_sn_to_regnum__2__snum) 
                                                     >> 1U))) 
                                                << 4U) 
                                               | (0xfU 
                                                  & (IData)(vlSelfRef.__Vfunc_sn_to_regnum__2__snum))));
                                }(), (IData)(vlSelfRef.__Vfunc_sn_to_regnum__2__Vfuncout)) 
                                            << 7U))));
            if (((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__instr_cnt_q) 
                 == ((0xfU & (IData)((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode 
                                      >> 0x1dU))) - (IData)(1U)))) {
                vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_n = 4U;
            }
        }
    } else if ((1U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_q))) {
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_first_fsm = 0U;
        VL_ASSIGNSEL_QI(35,32,3U, vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__seq_instr, 
                        (0x12023U | (((IData)((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode 
                                               >> 0xaU)) 
                                      << 0x19U) | (
                                                   (([&]() {
                                    vlSelfRef.__Vfunc_sn_to_regnum__3__snum 
                                        = (0x1fU & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode));
                                    vlSelfRef.__Vfunc_sn_to_regnum__3__Vfuncout 
                                        = (((0U == (IData)(vlSelfRef.__Vfunc_sn_to_regnum__3__snum)) 
                                            || (1U 
                                                == (IData)(vlSelfRef.__Vfunc_sn_to_regnum__3__snum)))
                                            ? (8U | 
                                               (((0U 
                                                  != 
                                                  (7U 
                                                   & ((IData)(vlSelfRef.__Vfunc_sn_to_regnum__3__snum) 
                                                      >> 1U))) 
                                                 << 4U) 
                                                | (7U 
                                                   & (IData)(vlSelfRef.__Vfunc_sn_to_regnum__3__snum))))
                                            : (((0U 
                                                 != 
                                                 (7U 
                                                  & ((IData)(vlSelfRef.__Vfunc_sn_to_regnum__3__snum) 
                                                     >> 1U))) 
                                                << 4U) 
                                               | (0xfU 
                                                  & (IData)(vlSelfRef.__Vfunc_sn_to_regnum__3__snum))));
                                }(), (IData)(vlSelfRef.__Vfunc_sn_to_regnum__3__Vfuncout)) 
                                                    << 0x14U) 
                                                   | (0xf80U 
                                                      & ((IData)(
                                                                 (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode 
                                                                  >> 5U)) 
                                                         << 7U))))));
        if (((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__instr_cnt_q) 
             == ((0xfU & (IData)((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode 
                                  >> 0x1dU))) - (IData)(1U)))) {
            vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_n = 4U;
        }
    } else if (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_load) {
        if ((1U == (0xfU & (IData)((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode 
                                    >> 0x1dU))))) {
            VL_ASSIGNSEL_QI(35,32,3U, vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__seq_instr, 
                            (0x12003U | (((IData)((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode 
                                                   >> 5U)) 
                                          << 0x14U) 
                                         | (([&]() {
                                    vlSelfRef.__Vfunc_sn_to_regnum__4__snum 
                                        = (0x1fU & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode));
                                    vlSelfRef.__Vfunc_sn_to_regnum__4__Vfuncout 
                                        = (((0U == (IData)(vlSelfRef.__Vfunc_sn_to_regnum__4__snum)) 
                                            || (1U 
                                                == (IData)(vlSelfRef.__Vfunc_sn_to_regnum__4__snum)))
                                            ? (8U | 
                                               (((0U 
                                                  != 
                                                  (7U 
                                                   & ((IData)(vlSelfRef.__Vfunc_sn_to_regnum__4__snum) 
                                                      >> 1U))) 
                                                 << 4U) 
                                                | (7U 
                                                   & (IData)(vlSelfRef.__Vfunc_sn_to_regnum__4__snum))))
                                            : (((0U 
                                                 != 
                                                 (7U 
                                                  & ((IData)(vlSelfRef.__Vfunc_sn_to_regnum__4__snum) 
                                                     >> 1U))) 
                                                << 4U) 
                                               | (0xfU 
                                                  & (IData)(vlSelfRef.__Vfunc_sn_to_regnum__4__snum))));
                                }(), (IData)(vlSelfRef.__Vfunc_sn_to_regnum__4__Vfuncout)) 
                                            << 7U))));
            vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_n = 4U;
        } else if ((1U < (0xfU & (IData)((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode 
                                          >> 0x1dU))))) {
            VL_ASSIGNSEL_QI(35,32,3U, vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__seq_instr, 
                            (0x12003U | (((IData)((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode 
                                                   >> 5U)) 
                                          << 0x14U) 
                                         | (([&]() {
                                    vlSelfRef.__Vfunc_sn_to_regnum__5__snum 
                                        = (0x1fU & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode));
                                    vlSelfRef.__Vfunc_sn_to_regnum__5__Vfuncout 
                                        = (((0U == (IData)(vlSelfRef.__Vfunc_sn_to_regnum__5__snum)) 
                                            || (1U 
                                                == (IData)(vlSelfRef.__Vfunc_sn_to_regnum__5__snum)))
                                            ? (8U | 
                                               (((0U 
                                                  != 
                                                  (7U 
                                                   & ((IData)(vlSelfRef.__Vfunc_sn_to_regnum__5__snum) 
                                                      >> 1U))) 
                                                 << 4U) 
                                                | (7U 
                                                   & (IData)(vlSelfRef.__Vfunc_sn_to_regnum__5__snum))))
                                            : (((0U 
                                                 != 
                                                 (7U 
                                                  & ((IData)(vlSelfRef.__Vfunc_sn_to_regnum__5__snum) 
                                                     >> 1U))) 
                                                << 4U) 
                                               | (0xfU 
                                                  & (IData)(vlSelfRef.__Vfunc_sn_to_regnum__5__snum))));
                                }(), (IData)(vlSelfRef.__Vfunc_sn_to_regnum__5__Vfuncout)) 
                                            << 7U))));
            vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_n = 2U;
        } else {
            vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__seq_instr 
                = ((7ULL & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__seq_instr) 
                   | ((QData)((IData)((0x12083U | ((IData)(
                                                           (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode 
                                                            >> 5U)) 
                                                   << 0x14U)))) 
                      << 3U));
            vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_n = 5U;
        }
    } else if (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_store) {
        if ((1U == (0xfU & (IData)((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode 
                                    >> 0x1dU))))) {
            VL_ASSIGNSEL_QI(35,32,3U, vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__seq_instr, 
                            (0xfe012e23U | (([&]() {
                                vlSelfRef.__Vfunc_sn_to_regnum__6__snum 
                                    = (0x1fU & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode));
                                vlSelfRef.__Vfunc_sn_to_regnum__6__Vfuncout 
                                    = (((0U == (IData)(vlSelfRef.__Vfunc_sn_to_regnum__6__snum)) 
                                        || (1U == (IData)(vlSelfRef.__Vfunc_sn_to_regnum__6__snum)))
                                        ? (8U | (((0U 
                                                   != 
                                                   (7U 
                                                    & ((IData)(vlSelfRef.__Vfunc_sn_to_regnum__6__snum) 
                                                       >> 1U))) 
                                                  << 4U) 
                                                 | (7U 
                                                    & (IData)(vlSelfRef.__Vfunc_sn_to_regnum__6__snum))))
                                        : (((0U != 
                                             (7U & 
                                              ((IData)(vlSelfRef.__Vfunc_sn_to_regnum__6__snum) 
                                               >> 1U))) 
                                            << 4U) 
                                           | (0xfU 
                                              & (IData)(vlSelfRef.__Vfunc_sn_to_regnum__6__snum))));
                            }(), (IData)(vlSelfRef.__Vfunc_sn_to_regnum__6__Vfuncout)) 
                                            << 0x14U)));
            vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_n = 4U;
        } else if ((1U < (0xfU & (IData)((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode 
                                          >> 0x1dU))))) {
            VL_ASSIGNSEL_QI(35,32,3U, vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__seq_instr, 
                            (0xfe012e23U | (([&]() {
                                vlSelfRef.__Vfunc_sn_to_regnum__7__snum 
                                    = (0x1fU & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode));
                                vlSelfRef.__Vfunc_sn_to_regnum__7__Vfuncout 
                                    = (((0U == (IData)(vlSelfRef.__Vfunc_sn_to_regnum__7__snum)) 
                                        || (1U == (IData)(vlSelfRef.__Vfunc_sn_to_regnum__7__snum)))
                                        ? (8U | (((0U 
                                                   != 
                                                   (7U 
                                                    & ((IData)(vlSelfRef.__Vfunc_sn_to_regnum__7__snum) 
                                                       >> 1U))) 
                                                  << 4U) 
                                                 | (7U 
                                                    & (IData)(vlSelfRef.__Vfunc_sn_to_regnum__7__snum))))
                                        : (((0U != 
                                             (7U & 
                                              ((IData)(vlSelfRef.__Vfunc_sn_to_regnum__7__snum) 
                                               >> 1U))) 
                                            << 4U) 
                                           | (0xfU 
                                              & (IData)(vlSelfRef.__Vfunc_sn_to_regnum__7__snum))));
                            }(), (IData)(vlSelfRef.__Vfunc_sn_to_regnum__7__Vfuncout)) 
                                            << 0x14U)));
            vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_n = 1U;
        } else {
            vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__seq_instr 
                = (0x7f0897118ULL | (7ULL & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__seq_instr));
            vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_n = 5U;
        }
    } else if (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_move_a2s) {
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__seq_instr 
            = ((7ULL & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__seq_instr) 
               | ((QData)((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT____VdfgExtracted_ha5d9f9b3__0)) 
                  << 3U));
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_n = 3U;
    } else if (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__seq_tbljmp) {
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__seq_instr 
            = ((7ULL & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__seq_instr) 
               | ((QData)((IData)(((0U == (7U & (IData)(
                                                        (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                         >> 0xaU))))
                                    ? (0x6fU | (0x1f000U 
                                                & ((IData)(
                                                           (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                            >> 5U)) 
                                                   << 0xcU)))
                                    : (0xefU | (0xff000U 
                                                & ((IData)(
                                                           (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_instr 
                                                            >> 5U)) 
                                                   << 0xcU)))))) 
                  << 3U));
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__ready_fsm 
            = ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ready) 
               & (~ (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U] 
                     >> 0x15U)));
    } else if (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_move_s2a) {
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__seq_instr 
            = ((7ULL & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__seq_instr) 
               | ((QData)((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT____VdfgExtracted_h61fde1fa__0)) 
                  << 3U));
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_state_n = 3U;
    }
    if ((1U & (((~ (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__seq_valid)) 
                & (~ (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U] 
                      >> 0x15U))) | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U] 
                                     >> 0x10U)))) {
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__ready_fsm = 1U;
    }
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__seq_last 
        = ((IData)(cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__seq_last_fsm) 
           | (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__is_tbljmp_ptr_q));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__last_op_if 
        = (1U & ((~ (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__seq_valid)) 
                 | (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__seq_last)));
}

VL_INLINE_OPT void Vcv32e40x_gvsoc_core_lint_top___024root___ico_comb__TOP__6(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcv32e40x_gvsoc_core_lint_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_gvsoc_core_lint_top___024root___ico_comb__TOP__6\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__csr_mtvec_init_if;
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__csr_mtvec_init_if = 0;
    CData/*0:0*/ cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__sleep_unit_i__DOT__clock_en;
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__sleep_unit_i__DOT__clock_en = 0;
    CData/*0:0*/ cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_ptr_access;
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_ptr_access = 0;
    CData/*0:0*/ cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_shift;
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_shift = 0;
    IData/*16:0*/ cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_a;
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_a = 0;
    IData/*16:0*/ cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_b;
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_b = 0;
    QData/*32:0*/ cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_acc_res;
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_acc_res = 0;
    CData/*0:0*/ cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read;
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 0;
    CData/*0:0*/ cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__tdata1_we;
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__tdata1_we = 0;
    CData/*0:0*/ cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__tdata2_we;
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__tdata2_we = 0;
    IData/*31:0*/ cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_increment;
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_increment = 0;
    CData/*0:0*/ cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_8;
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_8 = 0;
    CData/*5:0*/ cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_73;
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_73 = 0;
    CData/*0:0*/ cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_we_hit;
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_we_hit = 0;
    IData/*31:0*/ __Vfunc_csr_next_value__14__Vfuncout;
    __Vfunc_csr_next_value__14__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_csr_next_value__14__wdata;
    __Vfunc_csr_next_value__14__wdata = 0;
    IData/*31:0*/ __Vfunc_csr_next_value__15__Vfuncout;
    __Vfunc_csr_next_value__15__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_csr_next_value__15__wdata;
    __Vfunc_csr_next_value__15__wdata = 0;
    IData/*31:0*/ __Vfunc_csr_next_value__16__Vfuncout;
    __Vfunc_csr_next_value__16__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_csr_next_value__16__wdata;
    __Vfunc_csr_next_value__16__wdata = 0;
    IData/*31:0*/ __Vfunc_csr_next_value__21__Vfuncout;
    __Vfunc_csr_next_value__21__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_csr_next_value__21__wdata;
    __Vfunc_csr_next_value__21__wdata = 0;
    IData/*31:0*/ __Vfunc_csr_next_value__24__Vfuncout;
    __Vfunc_csr_next_value__24__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_csr_next_value__24__wdata;
    __Vfunc_csr_next_value__24__wdata = 0;
    IData/*31:0*/ __Vfunc_csr_next_value__27__Vfuncout;
    __Vfunc_csr_next_value__27__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_csr_next_value__27__wdata;
    __Vfunc_csr_next_value__27__wdata = 0;
    CData/*1:0*/ __Vfunc_mcontrol6_hit_resolve__28__Vfuncout;
    __Vfunc_mcontrol6_hit_resolve__28__Vfuncout = 0;
    CData/*1:0*/ __Vfunc_mcontrol6_hit_resolve__28__current_value;
    __Vfunc_mcontrol6_hit_resolve__28__current_value = 0;
    CData/*1:0*/ __Vfunc_mcontrol6_hit_resolve__28__next_value;
    __Vfunc_mcontrol6_hit_resolve__28__next_value = 0;
    // Body
    vlSelfRef.debug_havereset_o = (1U & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[3U] 
                                         >> 0xcU));
    vlSelfRef.debug_running_o = (1U & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[3U] 
                                       >> 0xbU));
    vlSelfRef.debug_halted_o = (1U & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[3U] 
                                      >> 0xaU));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_we = 0U;
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_we = 0U;
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__dpc_we = 0U;
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mcause_we = 0U;
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state_next 
        = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state;
    if ((2U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state))) {
        if ((1U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state))) {
            if (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__wb_ready) {
                vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state_next = 0U;
            }
        } else {
            vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state_next = 3U;
        }
    } else if ((1U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state))) {
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state_next = 2U;
    } else if ((0x400000U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[7U])) {
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state_next = 1U;
    }
    __Vfunc_csr_next_value__27__wdata = (0x800007ffU 
                                         & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int);
    __Vfunc_csr_next_value__27__Vfuncout = (0x800007ffU 
                                            & __Vfunc_csr_next_value__27__wdata);
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mcause_n 
        = __Vfunc_csr_next_value__27__Vfuncout;
    __Vfunc_csr_next_value__14__wdata = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int;
    __Vfunc_csr_next_value__14__Vfuncout = (0xfffffffeU 
                                            & __Vfunc_csr_next_value__14__wdata);
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_n 
        = __Vfunc_csr_next_value__14__Vfuncout;
    __Vfunc_csr_next_value__15__wdata = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int;
    __Vfunc_csr_next_value__15__Vfuncout = (0xfffffffeU 
                                            & __Vfunc_csr_next_value__15__wdata);
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__dpc_n 
        = __Vfunc_csr_next_value__15__Vfuncout;
    __Vfunc_csr_next_value__16__wdata = (3U | ((0xf0000000U 
                                                & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__dcsr) 
                                               | ((0x8000U 
                                                   & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int) 
                                                  | ((0x800U 
                                                      & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int) 
                                                     | ((0x400U 
                                                         & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int) 
                                                        | ((0x1c0U 
                                                            & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__dcsr) 
                                                           | ((0x10U 
                                                               & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__dcsr) 
                                                              | (4U 
                                                                 & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int))))))));
    __Vfunc_csr_next_value__16__Vfuncout = (0x40000013U 
                                            | (0x8dc4U 
                                               & __Vfunc_csr_next_value__16__wdata));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_n 
        = __Vfunc_csr_next_value__16__Vfuncout;
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_we_hit = 0U;
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_ptr_access 
        = (IData)(((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[6U] 
                    >> 6U) & (0U != (0x30U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[6U]))));
    __Vfunc_csr_next_value__21__wdata = (0x1800U | 
                                         (0x88U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int));
    __Vfunc_csr_next_value__21__Vfuncout = (0x1800U 
                                            | (0x88U 
                                               & __Vfunc_csr_next_value__21__wdata));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_n 
        = __Vfunc_csr_next_value__21__Vfuncout;
    if (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) {
        if ((1U & (~ (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U] 
                      >> 0xbU)))) {
            if ((0x400U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U])) {
                if ((0x200U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U])) {
                    if ((0x100U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U])) {
                        if ((0x80U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U])) {
                            if ((1U & (~ (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                          >> 6U)))) {
                                if ((0x20U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U])) {
                                    if ((0x10U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U])) {
                                        if ((1U & (~ 
                                                   (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                                    >> 3U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                                     >> 2U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U]))) {
                                                        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_we = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((0x40U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[1U])) {
        if ((0x8000U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[4U])) {
            vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_we = 1U;
        }
    }
    if (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) {
        if ((1U & (~ (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U] 
                      >> 0xbU)))) {
            if ((1U & (~ (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U] 
                          >> 0xaU)))) {
                if ((0x200U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U])) {
                    if ((0x100U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U])) {
                        if ((1U & (~ (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                      >> 7U)))) {
                            if ((0x40U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U])) {
                                if ((1U & (~ (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                              >> 5U)))) {
                                    if ((1U & (~ (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                                  >> 4U)))) {
                                        if ((1U & (~ 
                                                   (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                                    >> 3U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                                     >> 2U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U])) {
                                                        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_we = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((0x40U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[1U])) {
        if ((1U & (~ (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[4U] 
                      >> 0xfU)))) {
            vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_we = 1U;
        }
    }
    if (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) {
        if ((1U & (~ (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U] 
                      >> 0xbU)))) {
            if ((0x400U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U])) {
                if ((0x200U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U])) {
                    if ((0x100U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U])) {
                        if ((0x80U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U])) {
                            if ((1U & (~ (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                          >> 6U)))) {
                                if ((0x20U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U])) {
                                    if ((0x10U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U])) {
                                        if ((1U & (~ 
                                                   (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                                    >> 3U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                                     >> 2U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U])) {
                                                        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__dpc_we = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((0x40U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[1U])) {
        if ((0x8000U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[4U])) {
            vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__dpc_we = 1U;
        }
    }
    if (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) {
        if ((1U & (~ (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U] 
                      >> 0xbU)))) {
            if ((1U & (~ (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U] 
                          >> 0xaU)))) {
                if ((0x200U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U])) {
                    if ((0x100U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U])) {
                        if ((1U & (~ (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                      >> 7U)))) {
                            if ((0x40U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U])) {
                                if ((1U & (~ (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                              >> 5U)))) {
                                    if ((1U & (~ (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                                  >> 4U)))) {
                                        if ((1U & (~ 
                                                   (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                                    >> 3U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                                     >> 2U)))) {
                                                if (
                                                    (2U 
                                                     & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U])) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U]))) {
                                                        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mcause_we = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((0x40U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[1U])) {
        if ((1U & (~ (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[4U] 
                      >> 0xfU)))) {
            vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mcause_we = 1U;
            vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mcause_n 
                = ((0x7fffffffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mcause_n) 
                   | (0x80000000U & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[2U] 
                                     << 0x17U)));
            vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mcause_n 
                = ((0xfffff800U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mcause_n) 
                   | (0x7ffU & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[1U] 
                                >> 9U)));
            vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mcause_n 
                = (0xff00ffffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mcause_n);
            vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_n 
                = ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[3U] 
                    << 0x17U) | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[2U] 
                                 >> 9U));
            vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_n 
                = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT__rdata_q;
            vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_n 
                = (0xfffffff7U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_n);
            vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_n 
                = ((0xffffff7fU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_n) 
                   | (0x80U & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT__rdata_q 
                               << 4U)));
            vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_n 
                = (0x1800U | vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_n);
        }
        if ((0x8000U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[4U])) {
            vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__dpc_n 
                = ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[3U] 
                    << 0x17U) | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[2U] 
                                 >> 9U));
            vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__dcsr_n 
                = (3U | ((0xf0000000U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__dcsr) 
                         | ((0x8000U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__dcsr) 
                            | ((0x1000U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__dcsr) 
                               | ((0x800U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__dcsr) 
                                  | ((0x400U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__dcsr) 
                                     | ((0x1c0U & (
                                                   vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[4U] 
                                                   >> 0xaU)) 
                                        | (0x14U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__dcsr))))))));
        }
    } else if ((0x100U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[1U])) {
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_n 
            = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT__rdata_q;
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_n 
            = ((0xfffffff7U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_n) 
               | (8U & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT__rdata_q 
                        >> 4U)));
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_n 
            = (0x80U | vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_n);
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_n 
            = (0x1800U | vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_n);
    } else if ((0x80U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[1U])) {
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_n 
            = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT__rdata_q;
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_n 
            = ((0xfffdffffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_n) 
               | (0xfffe0000U & (((3U == (3U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT__rdata_q)) 
                                  << 0x11U) & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT__rdata_q)));
    }
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__tdata2_we = 0U;
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__sleep_unit_i__DOT__clock_en 
        = ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__sleep_unit_i__DOT__fetch_enable_q) 
           & ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[3U] 
               >> 9U) | (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__sleep_unit_i__DOT__core_busy_q)));
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_shift = 0U;
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__csr_mtvec_init_if 
        = (IData)((0x40U == (0x4fU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[6U])));
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 0U;
    if ((0x800U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
        if ((0x400U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
            if ((0x200U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                if ((0x100U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                    if ((0x80U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                        cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                    } else if ((0x40U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                        cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                    } else if ((0x20U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                        cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                    } else if ((0x10U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                        if ((8U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                            cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                        } else if ((4U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                            if ((2U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                            }
                        } else if ((1U & (~ ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr) 
                                             >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)))) {
                                cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                            }
                        }
                    } else {
                        cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                    }
                } else {
                    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                }
            } else if ((0x100U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
            } else if ((0x80U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                if ((0x40U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                } else if ((0x20U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                }
            } else if ((0x40U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
            } else if ((0x20U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
            }
        } else if ((0x200U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
            if ((0x100U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                if ((0x80U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                    if ((0x40U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                        cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                    } else if ((0x20U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                        cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                    } else if ((1U & (~ ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr) 
                                         >> 4U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr) 
                                      >> 3U)))) {
                            if ((1U & (~ ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr) 
                                          >> 2U)))) {
                                if ((1U & (~ ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr) 
                                              >> 1U)))) {
                                    if ((1U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                        cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                                    }
                                }
                            }
                        }
                    }
                } else if ((0x40U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                } else if ((0x20U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                } else if ((1U & (~ ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr) 
                                     >> 4U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr) 
                                  >> 3U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr) 
                                      >> 2U)))) {
                            if ((1U & (~ ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                                }
                            }
                        }
                    }
                }
            } else {
                cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
            }
        } else {
            cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
        }
    } else if ((0x400U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
        if ((0x200U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
            if ((0x100U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                if ((0x80U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                    if ((0x40U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                        cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                    } else if ((0x20U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                        if ((0x10U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                            cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read 
                                = ((1U & ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr) 
                                          >> 3U)) || 
                                   ((1U & ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr) 
                                           >> 2U)) 
                                    || (1U & ((2U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                               ? ((1U 
                                                   & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                   ? 
                                                  (~ 
                                                   (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[4U] 
                                                    >> 0x13U))
                                                   : 
                                                  (~ 
                                                   (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[4U] 
                                                    >> 0x13U)))
                                               : ((1U 
                                                   & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                   ? 
                                                  (~ 
                                                   (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[4U] 
                                                    >> 0x13U))
                                                   : 
                                                  (~ 
                                                   (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[4U] 
                                                    >> 0x13U)))))));
                        } else if ((8U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                            cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                        } else if ((4U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                            if ((2U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                            } else if ((1U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                            }
                        } else if ((2U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                            if ((1U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                            }
                        }
                    } else {
                        cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                    }
                } else {
                    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                }
            } else {
                cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
            }
        } else {
            cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
        }
    } else if ((0x200U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
        if ((0x100U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
            if ((0x80U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
            } else if ((0x40U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                if ((0x20U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                } else if ((0x10U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                } else if ((8U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                } else if ((4U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                    if ((2U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                        cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                    } else if ((1U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                        cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                    }
                }
            } else if ((0x20U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                if ((1U & (~ ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr) 
                              >> 4U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr) 
                                  >> 3U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                if ((1U & (~ (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)))) {
                                    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                                }
                            } else if ((1U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                            }
                        }
                    }
                }
            } else if ((0x10U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                if ((8U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                } else if ((4U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                } else if ((2U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                } else if ((1U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                }
            } else if ((8U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
            } else if ((4U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                if ((2U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                }
            } else if ((2U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
            }
        } else {
            cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
        }
    } else if ((0x100U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
        cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
    } else if ((0x80U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
        cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
    } else if ((0x40U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
        cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
    } else if ((0x20U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
        cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
    } else if ((0x10U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
        if ((8U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
            cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
        } else if ((4U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
            if ((2U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                if ((1U & (~ (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)))) {
                    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
                }
            } else {
                cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
            }
        } else {
            cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
        }
    } else {
        cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read = 1U;
    }
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__tdata1_we = 0U;
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_b 
        = (0xffffU & ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[6U] 
                       << 0xfU) | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[5U] 
                                   >> 0x11U)));
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_a 
        = (0xffffU & ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[7U] 
                       << 0xfU) | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[6U] 
                                   >> 0x11U)));
    if ((2U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state))) {
        if ((1U & (~ (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state)))) {
            cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_shift = 1U;
        }
    } else if ((1U & (~ (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state)))) {
        if ((0x400000U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[7U])) {
            cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_shift = 1U;
        }
    }
    if ((1U & ((~ (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__mul_en)) 
               | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U] 
                  >> 0xeU)))) {
        cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_shift = 0U;
    } else if ((0x80000U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U])) {
        cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_shift = 0U;
    }
    if ((2U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state))) {
        cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_b 
            = ((1U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state))
                ? vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_bh
                : (0xffffU & ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[6U] 
                               << 0xfU) | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[5U] 
                                           >> 0x11U))));
    } else if ((1U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state))) {
        cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_b 
            = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_bh;
    }
    if ((1U & ((~ (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__mul_en)) 
               | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U] 
                  >> 0xeU)))) {
        cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_b 
            = (0xffffU & ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[6U] 
                           << 0xfU) | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[5U] 
                                       >> 0x11U)));
    } else if ((0x80000U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U])) {
        cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_b 
            = (0xffffU & ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[6U] 
                           << 0xfU) | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[5U] 
                                       >> 0x11U)));
    }
    if ((2U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state))) {
        cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_a 
            = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_ah;
    } else if ((1U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state))) {
        cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_a 
            = (0xffffU & ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[7U] 
                           << 0xfU) | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[6U] 
                                       >> 0x11U)));
    }
    if ((1U & ((~ (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__mul_en)) 
               | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U] 
                  >> 0xeU)))) {
        cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_a 
            = (0xffffU & ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[7U] 
                           << 0xfU) | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[6U] 
                                       >> 0x11U)));
    } else if ((0x80000U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U])) {
        cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_a 
            = (0xffffU & ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[7U] 
                           << 0xfU) | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[6U] 
                                       >> 0x11U)));
    }
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_8 
        = (1U & (~ ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT__rdata_q 
                     >> 0xaU) & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[4U] 
                                 >> 0x13U))));
    vlSelfRef.debug_pc_valid_o = (1U & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[1U] 
                                        >> 4U));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_ptr_resp 
        = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__trans_ptr_access_q;
    if (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__state_q) {
        if (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__state_q) {
            vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_ptr_resp 
                = ((0x40U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[6U])
                    ? (IData)(cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_ptr_access)
                    : (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__trans_ptr_access_q));
        }
    } else {
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_ptr_resp 
            = ((1U & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[6U] 
                      >> 6U)) && (IData)(cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_ptr_access));
    }
    if (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) {
        if ((1U & (~ (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U] 
                      >> 0xbU)))) {
            if ((0x400U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U])) {
                if ((0x200U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U])) {
                    if ((0x100U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U])) {
                        if ((0x80U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U])) {
                            if ((1U & (~ (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                          >> 6U)))) {
                                if ((0x20U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U])) {
                                    if ((1U & (~ (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                                  >> 4U)))) {
                                        if ((1U & (~ 
                                                   (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                                    >> 3U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                                     >> 2U)))) {
                                                if (
                                                    (2U 
                                                     & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U])) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U]))) {
                                                        if (
                                                            (0x80000U 
                                                             & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[4U])) {
                                                            cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__tdata2_we = 1U;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__tdata2_we) {
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_we_int 
            = (0U == vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q);
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tdata2_n 
            = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__tdata2_rdata;
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tdata2_n 
            = ((((0xfU == (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__tdata1_rdata 
                           >> 0x1cU)) | (2U == (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__tdata1_rdata 
                                                >> 0x1cU))) 
                | (6U == (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__tdata1_rdata 
                          >> 0x1cU))) ? vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int
                : (0x10008aeU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int));
    } else {
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_we_int = 0U;
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tdata2_n 
            = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__tdata2_rdata;
    }
    vlSelfRef.core_sleep_o = ((~ (IData)(cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__sleep_unit_i__DOT__clock_en)) 
                              & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__sleep_unit_i__DOT__fetch_enable_q));
    if ((1U & (~ (IData)(vlSelfRef.clk_i)))) {
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__sleep_unit_i__DOT__core_clock_gate_i__DOT__en_latch 
            = cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__sleep_unit_i__DOT__clock_en;
    }
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mtvec_we 
        = cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__csr_mtvec_init_if;
    if (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) {
        if ((1U & (~ (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U] 
                      >> 0xbU)))) {
            if ((0x400U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U])) {
                if ((0x200U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U])) {
                    if ((0x100U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U])) {
                        if ((0x80U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U])) {
                            if ((1U & (~ (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                          >> 6U)))) {
                                if ((0x20U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U])) {
                                    if ((1U & (~ (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                                  >> 4U)))) {
                                        if ((1U & (~ 
                                                   (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                                    >> 3U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                                     >> 2U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U])) {
                                                        if (
                                                            (0x80000U 
                                                             & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[4U])) {
                                                            cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__tdata1_we = 1U;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            if ((1U & (~ (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U] 
                          >> 0xaU)))) {
                if ((0x200U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U])) {
                    if ((0x100U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U])) {
                        if ((1U & (~ (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                      >> 7U)))) {
                            if ((1U & (~ (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                          >> 6U)))) {
                                if ((1U & (~ (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                              >> 5U)))) {
                                    if ((1U & (~ (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                                  >> 4U)))) {
                                        if ((1U & (~ 
                                                   (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                                    >> 3U)))) {
                                            if ((4U 
                                                 & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U])) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U])) {
                                                        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mtvec_we = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((0x4000U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[3U])) {
        if ((6U == (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_rdata
                    [0U] >> 0x1cU))) {
            if ((0x8000U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[3U])) {
                cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_we_hit = 1U;
            }
        }
    }
    if ((0x4000U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U])) {
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state_next = 0U;
    }
    __Vfunc_csr_next_value__24__wdata = ((((IData)(cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__csr_mtvec_init_if)
                                            ? 0U : 
                                           (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                            >> 7U)) 
                                          << 7U) | 
                                         ((0x40U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q) 
                                          | ((0x3cU 
                                              & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q) 
                                             | (3U 
                                                & ((IData)(cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__csr_mtvec_init_if)
                                                    ? vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q
                                                    : 
                                                   ([&]() {
                                vlSelfRef.__Vfunc_mtvec_mode_clint_resolve__25__next_value 
                                    = (3U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int);
                                vlSelfRef.__Vfunc_mtvec_mode_clint_resolve__25__current_value 
                                    = (3U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q);
                                vlSelfRef.__Vfunc_mtvec_mode_clint_resolve__25__Vfuncout 
                                    = (((0U != (IData)(vlSelfRef.__Vfunc_mtvec_mode_clint_resolve__25__next_value)) 
                                        & (1U != (IData)(vlSelfRef.__Vfunc_mtvec_mode_clint_resolve__25__next_value)))
                                        ? (IData)(vlSelfRef.__Vfunc_mtvec_mode_clint_resolve__25__current_value)
                                        : (IData)(vlSelfRef.__Vfunc_mtvec_mode_clint_resolve__25__next_value));
                            }(), (IData)(vlSelfRef.__Vfunc_mtvec_mode_clint_resolve__25__Vfuncout)))))));
    __Vfunc_csr_next_value__24__Vfuncout = (0xffffff81U 
                                            & __Vfunc_csr_next_value__24__wdata);
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mtvec_n 
        = __Vfunc_csr_next_value__24__Vfuncout;
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__csr_illegal 
        = ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[1U] 
            >> 0xaU) & ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[5U] 
                         >> 0x10U) & (((0U != (3U & 
                                               (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[5U] 
                                                >> 0xeU))) 
                                       & ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[5U] 
                                           >> 0x10U) 
                                          & (3U == 
                                             ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_3)
                                               ? (3U 
                                                  & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[9U] 
                                                     >> 2U))
                                               : 0U)))) 
                                      | (IData)(cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__illegal_csr_read))));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_we_int 
        = (((IData)(cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__tdata1_we) 
            & (0U == vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q)) 
           | (IData)(cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_we_hit));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_n[0U] 
        = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_rdata
        [0U];
    __Vfunc_mcontrol6_hit_resolve__28__next_value = 
        ((2U & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                >> 0x18U)) | (1U & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                    >> 0x16U)));
    __Vfunc_mcontrol6_hit_resolve__28__current_value 
        = ((2U & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_rdata
                  [0U] >> 0x18U)) | (1U & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_rdata
                                           [0U] >> 0x16U)));
    __Vfunc_mcontrol6_hit_resolve__28__Vfuncout = (
                                                   ((0U 
                                                     != (IData)(__Vfunc_mcontrol6_hit_resolve__28__next_value)) 
                                                    & (1U 
                                                       != (IData)(__Vfunc_mcontrol6_hit_resolve__28__next_value)))
                                                    ? (IData)(__Vfunc_mcontrol6_hit_resolve__28__current_value)
                                                    : (IData)(__Vfunc_mcontrol6_hit_resolve__28__next_value));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__mcontrol6_hit_resolved[0U] 
        = __Vfunc_mcontrol6_hit_resolve__28__Vfuncout;
    if (((IData)(cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__tdata1_we) 
         & (0U == vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q))) {
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_n[0U] 
            = ((2U == (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                       >> 0x1cU)) ? (0x28001000U | 
                                     ((([&]() {
                                vlSelfRef.__Vfunc_mcontrol2_6_match_resolve__29__next_value 
                                    = (0xfU & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                               >> 7U));
                                vlSelfRef.__Vfunc_mcontrol2_6_match_resolve__29__Vfuncout 
                                    = ((((0U != (IData)(vlSelfRef.__Vfunc_mcontrol2_6_match_resolve__29__next_value)) 
                                         & (2U != (IData)(vlSelfRef.__Vfunc_mcontrol2_6_match_resolve__29__next_value))) 
                                        & (3U != (IData)(vlSelfRef.__Vfunc_mcontrol2_6_match_resolve__29__next_value)))
                                        ? 0U : (IData)(vlSelfRef.__Vfunc_mcontrol2_6_match_resolve__29__next_value));
                            }(), (IData)(vlSelfRef.__Vfunc_mcontrol2_6_match_resolve__29__Vfuncout)) 
                                       << 7U) | (0x47U 
                                                 & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)))
                : ((6U == (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                           >> 0x1cU)) ? (0x68000000U 
                                         | VL_EXTEND_II(27,26, 
                                                        ((0x2000000U 
                                                          & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__mcontrol6_hit_resolved
                                                             [0U] 
                                                             << 0x18U)) 
                                                         | VL_EXTEND_II(25,23, 
                                                                        ((0x400000U 
                                                                          & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__mcontrol6_hit_resolved
                                                                             [0U] 
                                                                             << 0x16U)) 
                                                                         | VL_EXTEND_II(22,16, 
                                                                                (0x1000U 
                                                                                | VL_EXTEND_II(12,11, 
                                                                                ((([&]() {
                                                                vlSelfRef.__Vfunc_mcontrol2_6_match_resolve__32__next_value 
                                                                    = 
                                                                    (0xfU 
                                                                     & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                                                                        >> 7U));
                                                                vlSelfRef.__Vfunc_mcontrol2_6_match_resolve__32__Vfuncout 
                                                                    = 
                                                                    ((((0U 
                                                                        != (IData)(vlSelfRef.__Vfunc_mcontrol2_6_match_resolve__32__next_value)) 
                                                                       & (2U 
                                                                          != (IData)(vlSelfRef.__Vfunc_mcontrol2_6_match_resolve__32__next_value))) 
                                                                      & (3U 
                                                                         != (IData)(vlSelfRef.__Vfunc_mcontrol2_6_match_resolve__32__next_value)))
                                                                      ? 0U
                                                                      : (IData)(vlSelfRef.__Vfunc_mcontrol2_6_match_resolve__32__next_value));
                                                            }(), (IData)(vlSelfRef.__Vfunc_mcontrol2_6_match_resolve__32__Vfuncout)) 
                                                                                << 7U) 
                                                                                | (0x47U 
                                                                                & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int))))))))))
                    : ((5U == (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
                               >> 0x1cU)) ? ((0U != 
                                              (0xfefff751U 
                                               & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__tdata2_rdata))
                                              ? 0xf8000000U
                                              : (0x58000001U 
                                                 | (0x200U 
                                                    & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)))
                        : 0xf8000000U)));
    }
    if ((0x4000U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[3U])) {
        if ((6U == (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_rdata
                    [0U] >> 0x1cU))) {
            if ((0x8000U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[3U])) {
                vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_n[0U] 
                    = (0xfdffffffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_n
                       [0U]);
                vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_n[0U] 
                    = (0x400000U | vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_n
                       [0U]);
            }
        }
    }
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__result 
        = (0x3ffffffffULL & (VL_MULS_QQQ(34, (0x3ffffffffULL 
                                              & VL_EXTENDS_QI(34,32, 
                                                              ((0x400000U 
                                                                & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[7U])
                                                                ? 
                                                               (((- (IData)(
                                                                            (1U 
                                                                             & (cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_a 
                                                                                >> 0x10U)))) 
                                                                 << 0x10U) 
                                                                | (0xffffU 
                                                                   & cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_a))
                                                                : 
                                                               ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[7U] 
                                                                 << 0xfU) 
                                                                | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[6U] 
                                                                   >> 0x11U))))), 
                                         (0x3ffffffffULL 
                                          & VL_EXTENDS_QI(34,32, 
                                                          ((0x400000U 
                                                            & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[7U])
                                                            ? 
                                                           (((- (IData)(
                                                                        (1U 
                                                                         & (cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_b 
                                                                            >> 0x10U)))) 
                                                             << 0x10U) 
                                                            | (0xffffU 
                                                               & cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_b))
                                                            : 
                                                           ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[6U] 
                                                             << 0xfU) 
                                                            | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[5U] 
                                                               >> 0x11U)))))) 
                             + VL_EXTENDS_QQ(34,33, vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_acc)));
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_73 
        = (1U | ((0x20U & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[1U] 
                           << 5U)) | ((0x10U & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[1U] 
                                                << 3U)) 
                                      | ((8U & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[1U] 
                                                << 1U)) 
                                         | ((4U & (
                                                   vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[1U] 
                                                   >> 1U)) 
                                            | ((IData)(vlSelfRef.debug_pc_valid_o) 
                                               << 1U))))));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__clk 
        = ((IData)(vlSelfRef.clk_i) & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__sleep_unit_i__DOT__core_clock_gate_i__DOT__en_latch));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__xif_csr_error_ex 
        = ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__instr_valid) 
           & ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT____VdfgRegularize_h221eb34c_0_6) 
              & ((~ (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__csr_illegal)) 
                 & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[5U] 
                    >> 0x10U))));
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_acc_res 
        = (0x1ffffffffULL & ((IData)(cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_shift)
                              ? (0x3ffffffffULL & VL_SHIFTRS_QQI(34,34,32, vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__result, 0x10U))
                              : vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__result));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__rf_wdata_ex 
        = ((1U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[0xbU])
            ? vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_result
            : ((0x800000U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[7U])
                ? (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__result)
                : ((0x80000U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[7U])
                    ? ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__res_inv_q)
                        ? (- vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__res_mux)
                        : vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__res_mux)
                    : ((0x10000U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[5U])
                        ? vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int
                        : vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_result))));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__hpm_events_raw 
        = ((0x8000U & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U] 
                       >> 7U)) | ((0x4000U & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U] 
                                              >> 9U)) 
                                  | ((0x2000U & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U] 
                                                 >> 0xbU)) 
                                     | ((0x1000U & 
                                         (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U] 
                                          >> 0xdU)) 
                                        | ((0x800U 
                                            & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U] 
                                               >> 0xfU)) 
                                           | ((0x400U 
                                               & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U] 
                                                  >> 0x11U)) 
                                              | ((0x200U 
                                                  & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U] 
                                                     >> 0x13U)) 
                                                 | ((0x100U 
                                                     & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U] 
                                                        >> 0x15U)) 
                                                    | ((0x80U 
                                                        & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U] 
                                                           >> 0x17U)) 
                                                       | ((0x40U 
                                                           & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U] 
                                                              >> 0x19U)) 
                                                          | (IData)(cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_73)))))))))));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__hpm_events 
        = ((0xffc0U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__hpm_events)) 
           | (IData)(cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_73));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__csr_is_illegal 
        = ((((~ (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT____VdfgRegularize_h221eb34c_0_6)) 
             & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__csr_illegal)) 
            | (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__xif_csr_error_ex)) 
           & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__instr_valid));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_acc_next 
        = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_acc;
    if ((2U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state))) {
        if ((1U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state))) {
            if (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__wb_ready) {
                vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_acc_next = 0ULL;
            }
        } else {
            vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_acc_next 
                = cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_acc_res;
        }
    } else if ((1U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state))) {
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_acc_next 
            = cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_acc_res;
    } else if ((0x400000U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[7U])) {
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_acc_next 
            = cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_acc_res;
    }
    if ((0x4000U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U])) {
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_acc_next = 0ULL;
    }
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__operand_a_fw 
        = ((1U == (3U & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_byp 
                         >> 0x10U))) ? vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__rf_wdata_ex
            : ((2U == (3U & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_byp 
                             >> 0x10U))) ? vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__rf_wdata_wb
                : ((0U == (3U & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_byp 
                                 >> 0x10U))) ? vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__rf_rdata_id
                   [0U] : vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__rf_rdata_id
                   [0U])));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__operand_b_fw 
        = ((1U == (3U & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_byp 
                         >> 0xeU))) ? vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__rf_wdata_ex
            : ((2U == (3U & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_byp 
                             >> 0xeU))) ? vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__rf_wdata_wb
                : ((0U == (3U & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_byp 
                                 >> 0xeU))) ? vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__rf_rdata_id
                   [1U] : vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__rf_rdata_id
                   [1U])));
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_increment 
        = ((((~ (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_12)) 
             & ((~ (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_74)) 
                & ((~ (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_q 
                       >> 3U)) & ((IData)(cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_8) 
                                  & (0U != ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__hpm_events) 
                                            & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[3U])))))) 
            << 3U) | ((0xfffffffcU & (((~ (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_10)) 
                                       << 2U) & (((~ (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_75)) 
                                                  << 2U) 
                                                 & (((~ 
                                                      (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_q 
                                                       >> 2U)) 
                                                     << 2U) 
                                                    & (((IData)(cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_8) 
                                                        << 2U) 
                                                       & ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__hpm_events) 
                                                          << 1U)))))) 
                      | ((~ (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_6)) 
                         & ((~ (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_76)) 
                            & ((~ vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                               & (IData)(cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_8))))));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
        = (0xfffffffffffffffcULL & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_we);
    if ((1U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower)) {
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
            = (1ULL | vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_we);
    } else if ((1U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_upper)) {
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
            = (2ULL | vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_we);
    } else if ((1U & cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_increment)) {
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
            = (3ULL | vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_we);
    }
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
        = (0xffffffffffffffcfULL & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_we);
    if ((4U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower)) {
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
            = (0x10ULL | vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_we);
    } else if ((4U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_upper)) {
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
            = (0x20ULL | vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_we);
    } else if ((4U & cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_increment)) {
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
            = (0x30ULL | vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_we);
    }
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
        = (0xffffffffffffff3fULL & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_we);
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_n[0U] 
        = (IData)((((QData)((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0U]))));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_n[1U] 
        = (IData)(((((QData)((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[1U])) 
                     << 0x20U) | (QData)((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0U]))) 
                   >> 0x20U));
    if ((1U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower)) {
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_n[0U] 
            = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int;
    } else if ((1U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_upper)) {
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_n[1U] 
            = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int;
    } else if ((1U & cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_increment)) {
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_n[0U] 
            = (IData)((((QData)((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0U]))));
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_n[1U] 
            = (IData)(((((QData)((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[1U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0U]))) 
                       >> 0x20U));
    }
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_n[4U] 
        = (IData)((((QData)((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[5U])) 
                    << 0x20U) | (QData)((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[4U]))));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_n[5U] 
        = (IData)(((((QData)((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[5U])) 
                     << 0x20U) | (QData)((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[4U]))) 
                   >> 0x20U));
    if ((4U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower)) {
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_n[4U] 
            = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int;
    } else if ((4U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_upper)) {
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_n[5U] 
            = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int;
    } else if ((4U & cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_increment)) {
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_n[4U] 
            = (IData)((((QData)((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[5U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[4U]))));
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_n[5U] 
            = (IData)(((((QData)((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[5U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[4U]))) 
                       >> 0x20U));
    }
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_n[6U] 
        = (IData)((((QData)((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[7U])) 
                    << 0x20U) | (QData)((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[6U]))));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_n[7U] 
        = (IData)(((((QData)((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[7U])) 
                     << 0x20U) | (QData)((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[6U]))) 
                   >> 0x20U));
    if ((8U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower)) {
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
            = (0x40ULL | vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_we);
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_n[6U] 
            = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int;
    } else if ((8U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_upper)) {
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
            = (0x80ULL | vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_we);
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_n[7U] 
            = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int;
    } else if ((8U & cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_increment)) {
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_we 
            = (0xc0ULL | vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_we);
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_n[6U] 
            = (IData)((((QData)((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[7U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[6U]))));
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_n[7U] 
            = (IData)(((((QData)((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[7U])) 
                         << 0x20U) | (QData)((IData)(
                                                     vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[6U]))) 
                       >> 0x20U));
    }
}

VL_INLINE_OPT void Vcv32e40x_gvsoc_core_lint_top___024root___ico_comb__TOP__8(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcv32e40x_gvsoc_core_lint_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_gvsoc_core_lint_top___024root___ico_comb__TOP__8\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_ready 
        = (1U & ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U] 
                  >> 0x10U) | (((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__is_tbljmp_ptr_q)
                                 ? (((~ (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U] 
                                         >> 0x15U)) 
                                     & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ready)) 
                                    | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U] 
                                       >> 0x10U)) : (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__ready_fsm)) 
                               & ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ready) 
                                  & (~ (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U] 
                                        >> 0x15U))))));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_n 
        = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_int;
    if (((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_valid) 
         & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_ready))) {
        if ((1U & ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_q 
                    >> 1U) | ((~ (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_q 
                                  >> 1U)) & (~ (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__aligned_is_compressed)))))) {
            vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____Vlvbound_h29d26df9__0 = 0U;
            if ((2U >= (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))) {
                vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_n 
                    = (((~ ((IData)(1U) << (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))) 
                        & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_n)) 
                       | (7U & ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____Vlvbound_h29d26df9__0) 
                                << (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))));
            }
        }
    }
}

void Vcv32e40x_gvsoc_core_lint_top___024root___eval_triggers__ico(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf);

bool Vcv32e40x_gvsoc_core_lint_top___024root___eval_phase__ico(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcv32e40x_gvsoc_core_lint_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_gvsoc_core_lint_top___024root___eval_phase__ico\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vcv32e40x_gvsoc_core_lint_top___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelfRef.__VicoTriggered.any();
    if (__VicoExecute) {
        Vcv32e40x_gvsoc_core_lint_top___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vcv32e40x_gvsoc_core_lint_top___024root___act_sequent__TOP__0(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf);
void Vcv32e40x_gvsoc_core_lint_top___024root___act_sequent__TOP__1(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf);
void Vcv32e40x_gvsoc_core_lint_top___024root___act_sequent__TOP__2(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf);
void Vcv32e40x_gvsoc_core_lint_top___024root___act_sequent__TOP__3(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf);
void Vcv32e40x_gvsoc_core_lint_top___024root___act_sequent__TOP__4(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf);
void Vcv32e40x_gvsoc_core_lint_top___024root___act_sequent__TOP__5(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf);
void Vcv32e40x_gvsoc_core_lint_top___024root___act_sequent__TOP__6(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf);
void Vcv32e40x_gvsoc_core_lint_top___024root___act_sequent__TOP__7(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf);
void Vcv32e40x_gvsoc_core_lint_top___024root___act_sequent__TOP__8(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf);
void Vcv32e40x_gvsoc_core_lint_top___024root___act_sequent__TOP__9(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf);
void Vcv32e40x_gvsoc_core_lint_top___024root___act_sequent__TOP__10(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf);
void Vcv32e40x_gvsoc_core_lint_top___024root___act_sequent__TOP__11(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf);
void Vcv32e40x_gvsoc_core_lint_top___024root___act_sequent__TOP__12(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf);
void Vcv32e40x_gvsoc_core_lint_top___024root___act_sequent__TOP__13(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf);
void Vcv32e40x_gvsoc_core_lint_top___024root___act_sequent__TOP__14(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf);
void Vcv32e40x_gvsoc_core_lint_top___024root___act_sequent__TOP__15(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf);
void Vcv32e40x_gvsoc_core_lint_top___024root___act_sequent__TOP__16(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf);
void Vcv32e40x_gvsoc_core_lint_top___024root___act_sequent__TOP__17(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf);
void Vcv32e40x_gvsoc_core_lint_top___024root___act_sequent__TOP__18(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf);
void Vcv32e40x_gvsoc_core_lint_top___024root___act_sequent__TOP__19(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf);
void Vcv32e40x_gvsoc_core_lint_top___024root___act_sequent__TOP__20(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf);
void Vcv32e40x_gvsoc_core_lint_top___024root___act_sequent__TOP__21(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf);
void Vcv32e40x_gvsoc_core_lint_top___024root___act_sequent__TOP__22(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf);
void Vcv32e40x_gvsoc_core_lint_top___024root___act_sequent__TOP__23(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf);
void Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__0(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf);
void Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__1(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf);
void Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__2(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf);
void Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__3(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf);
void Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__4(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf);
void Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__5(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf);
void Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__6(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf);
void Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__7(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf);
void Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__8(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf);
void Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__10(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf);
void Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__12(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf);
void Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__13(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf);
void Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__14(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf);
void Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__15(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf);
void Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__16(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf);
void Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__17(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf);
void Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__18(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf);
void Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__19(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf);
void Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__20(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf);
void Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__21(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf);
void Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__22(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf);
void Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__23(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf);
void Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__26(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf);
void Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__27(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf);
void Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__28(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf);
void Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__29(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf);
void Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__30(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf);
void Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__31(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf);
void Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__33(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf);
void Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__34(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf);
void Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__35(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf);

void Vcv32e40x_gvsoc_core_lint_top___024root___eval_act(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcv32e40x_gvsoc_core_lint_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_gvsoc_core_lint_top___024root___eval_act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vcv32e40x_gvsoc_core_lint_top___024root___act_sequent__TOP__0(vlSelf);
    }
    if ((0x10000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vcv32e40x_gvsoc_core_lint_top___024root___act_sequent__TOP__1(vlSelf);
    }
    if ((0x20ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vcv32e40x_gvsoc_core_lint_top___024root___act_sequent__TOP__2(vlSelf);
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vcv32e40x_gvsoc_core_lint_top___024root___act_sequent__TOP__3(vlSelf);
    }
    if ((0x2000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vcv32e40x_gvsoc_core_lint_top___024root___act_sequent__TOP__4(vlSelf);
    }
    if ((0x800ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vcv32e40x_gvsoc_core_lint_top___024root___act_sequent__TOP__5(vlSelf);
    }
    if ((0x40000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vcv32e40x_gvsoc_core_lint_top___024root___act_sequent__TOP__6(vlSelf);
    }
    if ((0x200ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vcv32e40x_gvsoc_core_lint_top___024root___act_sequent__TOP__7(vlSelf);
    }
    if ((0x40000080ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vcv32e40x_gvsoc_core_lint_top___024root___act_sequent__TOP__8(vlSelf);
    }
    if ((0x1010800ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vcv32e40x_gvsoc_core_lint_top___024root___act_sequent__TOP__9(vlSelf);
    }
    if ((0x20000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vcv32e40x_gvsoc_core_lint_top___024root___act_sequent__TOP__10(vlSelf);
    }
    if ((0x180000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vcv32e40x_gvsoc_core_lint_top___024root___act_sequent__TOP__11(vlSelf);
    }
    if ((0x30000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vcv32e40x_gvsoc_core_lint_top___024root___act_sequent__TOP__12(vlSelf);
    }
    if ((0xc000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vcv32e40x_gvsoc_core_lint_top___024root___act_sequent__TOP__13(vlSelf);
    }
    if ((0x380000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vcv32e40x_gvsoc_core_lint_top___024root___act_sequent__TOP__14(vlSelf);
    }
    if ((0x12ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vcv32e40x_gvsoc_core_lint_top___024root___act_sequent__TOP__15(vlSelf);
    }
    if ((0x8000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vcv32e40x_gvsoc_core_lint_top___024root___act_sequent__TOP__16(vlSelf);
    }
    if ((0x80ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vcv32e40x_gvsoc_core_lint_top___024root___act_sequent__TOP__17(vlSelf);
    }
    if ((0x4000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vcv32e40x_gvsoc_core_lint_top___024root___act_sequent__TOP__18(vlSelf);
    }
    if ((0x102ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vcv32e40x_gvsoc_core_lint_top___024root___act_sequent__TOP__19(vlSelf);
    }
    if ((0x1040ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vcv32e40x_gvsoc_core_lint_top___024root___act_sequent__TOP__20(vlSelf);
    }
    if ((0x3140ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vcv32e40x_gvsoc_core_lint_top___024root___act_sequent__TOP__21(vlSelf);
    }
    if ((0xc00000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vcv32e40x_gvsoc_core_lint_top___024root___act_sequent__TOP__22(vlSelf);
    }
    if ((0x400000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vcv32e40x_gvsoc_core_lint_top___024root___act_sequent__TOP__23(vlSelf);
    }
    if ((0x82ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__0(vlSelf);
    }
    if ((0x802ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__1(vlSelf);
    }
    if ((0x602ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__2(vlSelf);
    }
    if ((0x10000002ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__3(vlSelf);
    }
    if ((0xc000012ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__4(vlSelf);
    }
    if ((0x40000012ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__5(vlSelf);
    }
    if ((0x202ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__6(vlSelf);
    }
    if ((0x180000002ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__7(vlSelf);
    }
    if ((0x30000002ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__8(vlSelf);
    }
    if ((0x30000001ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vcv32e40x_gvsoc_core_lint_top___024root___ico_comb__TOP__0(vlSelf);
    }
    if ((0x380000100ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__10(vlSelf);
    }
    if ((0x3811ff968ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vcv32e40x_gvsoc_core_lint_top___024root___ico_comb__TOP__3(vlSelf);
    }
    if ((0x200080ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__12(vlSelf);
    }
    if ((0x38000c000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__13(vlSelf);
    }
    if ((0x102ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__14(vlSelf);
    }
    if ((0xc00000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__15(vlSelf);
    }
    if ((0xe02ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__16(vlSelf);
    }
    if ((0xc000812ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__17(vlSelf);
    }
    if ((0x50000012ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__18(vlSelf);
    }
    if ((0x70000082ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__19(vlSelf);
    }
    if ((0x200082ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__20(vlSelf);
    }
    if ((0xe40898ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__21(vlSelf);
    }
    if ((0xc00000012ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__22(vlSelf);
    }
    if ((0xc02000000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__23(vlSelf);
    }
    if ((0xe06ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vcv32e40x_gvsoc_core_lint_top___024root___ico_comb__TOP__4(vlSelf);
    }
    if ((0xe0eULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vcv32e40x_gvsoc_core_lint_top___024root___ico_comb__TOP__5(vlSelf);
    }
    if ((0x5000c012ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__26(vlSelf);
    }
    if ((0x3d101ca12ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__27(vlSelf);
    }
    if ((0x3f000c082ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__28(vlSelf);
    }
    if ((0x1802000e2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__29(vlSelf);
    }
    if ((0x3b1fff9fbULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__30(vlSelf);
    }
    if ((0x3b1fffffbULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__31(vlSelf);
    }
    if ((0x3f1ffffffULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vcv32e40x_gvsoc_core_lint_top___024root___ico_comb__TOP__8(vlSelf);
    }
    if ((0x18020c0e2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__33(vlSelf);
    }
    if ((0xfb3fff9fbULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__34(vlSelf);
    }
    if ((0xfbffff9fbULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__35(vlSelf);
    }
}

VL_INLINE_OPT void Vcv32e40x_gvsoc_core_lint_top___024root___act_sequent__TOP__0(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcv32e40x_gvsoc_core_lint_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_gvsoc_core_lint_top___024root___act_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    QData/*54:0*/ cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl;
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl = 0;
    CData/*0:0*/ cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_en_gated;
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_en_gated = 0;
    CData/*0:0*/ cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_we;
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_we = 0;
    CData/*0:0*/ cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_9;
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_9 = 0;
    CData/*0:0*/ cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_14;
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_14 = 0;
    CData/*0:0*/ cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_15;
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_15 = 0;
    CData/*0:0*/ cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_16;
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_16 = 0;
    CData/*0:0*/ cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_17;
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_17 = 0;
    CData/*0:0*/ cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_18;
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_18 = 0;
    CData/*0:0*/ cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_19;
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_19 = 0;
    CData/*0:0*/ cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_20;
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_20 = 0;
    CData/*0:0*/ cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_21;
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_21 = 0;
    CData/*0:0*/ cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_22;
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_22 = 0;
    CData/*0:0*/ cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_23;
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_23 = 0;
    CData/*0:0*/ cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_24;
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_24 = 0;
    CData/*0:0*/ cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_25;
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_25 = 0;
    CData/*0:0*/ cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_26;
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_26 = 0;
    CData/*0:0*/ cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_27;
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_27 = 0;
    CData/*0:0*/ cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_28;
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_28 = 0;
    CData/*0:0*/ cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_29;
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_29 = 0;
    CData/*0:0*/ cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_30;
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_30 = 0;
    CData/*0:0*/ cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_31;
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_31 = 0;
    CData/*0:0*/ cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_32;
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_32 = 0;
    CData/*0:0*/ cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_33;
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_33 = 0;
    CData/*0:0*/ cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_34;
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_34 = 0;
    CData/*0:0*/ cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_35;
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_35 = 0;
    CData/*0:0*/ cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_36;
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_36 = 0;
    CData/*0:0*/ cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_37;
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_37 = 0;
    CData/*0:0*/ cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_38;
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_38 = 0;
    CData/*0:0*/ cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_39;
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_39 = 0;
    CData/*0:0*/ cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_40;
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_40 = 0;
    CData/*0:0*/ cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_41;
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_41 = 0;
    CData/*0:0*/ cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT____VdfgRegularize_h300e3022_0_8;
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT____VdfgRegularize_h300e3022_0_8 = 0;
    IData/*31:0*/ __Vfunc_csr_next_value__12__Vfuncout;
    __Vfunc_csr_next_value__12__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_csr_next_value__12__wdata;
    __Vfunc_csr_next_value__12__wdata = 0;
    IData/*31:0*/ __Vfunc_csr_next_value__13__Vfuncout;
    __Vfunc_csr_next_value__13__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_csr_next_value__13__wdata;
    __Vfunc_csr_next_value__13__wdata = 0;
    IData/*31:0*/ __Vfunc_csr_next_value__19__Vfuncout;
    __Vfunc_csr_next_value__19__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_csr_next_value__19__wdata;
    __Vfunc_csr_next_value__19__wdata = 0;
    IData/*31:0*/ __Vfunc_csr_next_value__20__Vfuncout;
    __Vfunc_csr_next_value__20__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_csr_next_value__20__wdata;
    __Vfunc_csr_next_value__20__wdata = 0;
    IData/*31:0*/ __Vfunc_csr_next_value__26__Vfuncout;
    __Vfunc_csr_next_value__26__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_csr_next_value__26__wdata;
    __Vfunc_csr_next_value__26__wdata = 0;
    // Body
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[1U] 
        = ((0x1fffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[1U]) 
           | (((0x100U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[5U])
                ? ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                    << 8U) | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[9U] 
                              >> 0x18U)) : (((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                              << 8U) 
                                             | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[9U] 
                                                >> 0x18U)) 
                                            + ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[9U] 
                                                << 8U) 
                                               | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[8U] 
                                                  >> 0x18U)))) 
              << 0xdU));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[2U] 
        = (((0x100U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[5U])
             ? ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                 << 8U) | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[9U] 
                           >> 0x18U)) : (((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                           << 8U) | 
                                          (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[9U] 
                                           >> 0x18U)) 
                                         + ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[9U] 
                                             << 8U) 
                                            | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[8U] 
                                               >> 0x18U)))) 
           >> 0x13U);
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[1U] 
        = ((0xffffffefU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[1U]) 
           | (0x10U & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[5U] 
                       >> 8U)));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[1U] 
        = ((0xffffe7ffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[1U]) 
           | (0x1800U & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[5U] 
                         << 1U)));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[0U] 
        = (IData)((((QData)((IData)(((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[8U] 
                                      << 8U) | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[7U] 
                                                >> 0x18U)))) 
                    << 3U) | (QData)((IData)((6U | 
                                              (1U & 
                                               (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[4U] 
                                                >> 0x13U)))))));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[1U] 
        = ((0xfffffff8U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[1U]) 
           | (IData)(((((QData)((IData)(((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[8U] 
                                          << 8U) | 
                                         (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[7U] 
                                          >> 0x18U)))) 
                        << 3U) | (QData)((IData)((6U 
                                                  | (1U 
                                                     & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[4U] 
                                                        >> 0x13U)))))) 
                      >> 0x20U)));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[1U] 
        = ((0xfffff81fU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[1U]) 
           | (0x7e0U & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[5U] 
                        << 2U)));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[1U] 
        = ((0xfffffff7U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[1U]) 
           | (8U & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[5U] 
                    >> 6U)));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_valid 
        = (IData)(((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U] 
                    >> 0x1eU) & (0U == (0x108000U & 
                                        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U]))));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_priv_lvl_resp 
        = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__trans_priv_lvl_q;
    if (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__state_q) {
        if (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__state_q) {
            vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_priv_lvl_resp 
                = ((0x40U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[6U])
                    ? (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr_priv_lvl_q)
                    : (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__trans_priv_lvl_q));
        }
    } else {
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_priv_lvl_resp 
            = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr_priv_lvl_q;
    }
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__dcsr 
        = ((0xfffffff0U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT__rdata_q) 
           | ((8U & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[1U] 
                     >> 2U)) | (7U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT__rdata_q)));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__priv_lvl_we = 0U;
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__wb_stage_i__DOT____VdfgRegularize_h5fe00629_0_5 
        = (IData)((0U == (0x60000U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U])));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__instr_valid 
        = ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[1U] 
            >> 0xaU) & (0U == (0x84000U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U])));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x27d4400000100ULL;
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
        = (0x7ffffffffffeffULL & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
    if ((0x10U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U])) {
        if ((8U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U])) {
            if ((4U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U])) {
                if ((2U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U])) {
                    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x27d4400000100ULL;
                } else if ((1U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U])) {
                    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x27d4400000100ULL;
                } else if ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[4U] 
                            >> 0x1fU)) {
                    if ((0x40000000U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[4U])) {
                        if ((0U == (7U & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                          >> 0xaU)))) {
                            if ((0U == ((0x3e0U & (
                                                   vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                                   >> 8U)) 
                                        | (0x1fU & 
                                           (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                            >> 5U))))) {
                                vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                    = (0x200ULL | vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                                vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                    = ((0U == (0xfffU 
                                               & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                                  >> 0x12U)))
                                        ? (0x20ULL 
                                           | vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int)
                                        : ((1U == (0xfffU 
                                                   & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                                      >> 0x12U)))
                                            ? (0x40ULL 
                                               | vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int)
                                            : ((0x302U 
                                                == 
                                                (0xfffU 
                                                 & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                                    >> 0x12U)))
                                                ? (
                                                   (0x80000U 
                                                    & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[4U])
                                                    ? 0x27d4400000100ULL
                                                    : 
                                                   (4ULL 
                                                    | vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int))
                                                : (
                                                   (0x7b2U 
                                                    == 
                                                    (0xfffU 
                                                     & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                                        >> 0x12U)))
                                                    ? 
                                                   ((0x80000U 
                                                     & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[4U])
                                                     ? 
                                                    (0x80ULL 
                                                     | vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int)
                                                     : 0x27d4400000100ULL)
                                                    : 
                                                   ((0x105U 
                                                     == 
                                                     (0xfffU 
                                                      & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                                         >> 0x12U)))
                                                     ? 
                                                    ((0x7ffffffffffffdULL 
                                                      & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int) 
                                                     | ((QData)((IData)(
                                                                        (1U 
                                                                         & (~ 
                                                                            (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[3U] 
                                                                             >> 0xdU))))) 
                                                        << 1U))
                                                     : 
                                                    ((0x8c0U 
                                                      == 
                                                      (0xfffU 
                                                       & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                                          >> 0x12U)))
                                                      ? 
                                                     ((0x7ffffffffffffeULL 
                                                       & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int) 
                                                      | (IData)((IData)(
                                                                        (1U 
                                                                         & (~ 
                                                                            (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[3U] 
                                                                             >> 0xdU))))))
                                                      : 0x27d4400000100ULL))))));
                            } else {
                                vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x27d4400000100ULL;
                            }
                        } else {
                            vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                = (0x1800000ULL | vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                            if ((0x1000U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U])) {
                                vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                    = (0x100000000000ULL 
                                       | (0x7fe7ffffffffffULL 
                                          & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int));
                            } else {
                                vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                    = (0x2000000ULL 
                                       | vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                                vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                    = (0x7fe7ffffffffffULL 
                                       & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                            }
                            vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                = (0x20000000000ULL 
                                   | (0x7ff9ffffffffffULL 
                                      & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int));
                            vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                = (0x7fff8fffffffffULL 
                                   & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                            vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                = ((1U == (3U & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                                 >> 0xaU)))
                                    ? (0x200000ULL 
                                       | (0x7fffffff9fffffULL 
                                          & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int))
                                    : ((2U == (3U & 
                                               (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                                >> 0xaU)))
                                        ? ((0x7fffffff9fffffULL 
                                            & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int) 
                                           | ((QData)((IData)(
                                                              ((0U 
                                                                == 
                                                                (0x1fU 
                                                                 & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                                                    >> 0xdU)))
                                                                ? 0U
                                                                : 2U))) 
                                              << 0x15U))
                                        : ((3U == (3U 
                                                   & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                                      >> 0xaU)))
                                            ? ((0x7fffffff9fffffULL 
                                                & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int) 
                                               | ((QData)((IData)(
                                                                  ((0U 
                                                                    == 
                                                                    (0x1fU 
                                                                     & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                                                        >> 0xdU)))
                                                                    ? 0U
                                                                    : 3U))) 
                                                  << 0x15U))
                                            : 0x27d4400000100ULL)));
                        }
                    } else {
                        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x27d4400000100ULL;
                    }
                } else {
                    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x27d4400000100ULL;
                }
            } else if ((2U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U])) {
                if ((1U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U])) {
                    if ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[4U] 
                         >> 0x1fU)) {
                        if ((0x40000000U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[4U])) {
                            vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                = (0x40000000000000ULL 
                                   | vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                            vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                = (0x10000000000000ULL 
                                   | (0x67ffffffffffffULL 
                                      & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int));
                            vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                = (0xa0000000000ULL 
                                   | (0x7fe1ffffffffffULL 
                                      & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int));
                            vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                = (0x3000000000ULL 
                                   | vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                            vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                = (0x781fffffffffffULL 
                                   & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                            vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                = (0x1000000ULL | (0x7ffffff8ffffffULL 
                                                   & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int));
                            vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                = ((0x7ffff3ffffffffULL 
                                    & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int) 
                                   | ((QData)((IData)(
                                                      ((0x800000U 
                                                        & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[4U])
                                                        ? 0U
                                                        : 1U))) 
                                      << 0x22U));
                        } else {
                            vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x27d4400000100ULL;
                        }
                    } else {
                        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x27d4400000100ULL;
                    }
                } else {
                    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x27d4400000100ULL;
                }
            } else if ((1U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U])) {
                if ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[4U] 
                     >> 0x1fU)) {
                    if ((0x40000000U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[4U])) {
                        if ((0U != (7U & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                          >> 0xaU)))) {
                            vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x27d4400000100ULL;
                        } else {
                            vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                = (0x40000000000000ULL 
                                   | vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                            vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                = (0x18000000000000ULL 
                                   | vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                            vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                = (0xa0000000000ULL 
                                   | (0x7fe1ffffffffffULL 
                                      & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int));
                            vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                = (0x3000000000ULL 
                                   | vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                            vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                = (0x781fffffffffffULL 
                                   & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                            vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                = (0x3000000ULL | (0x7ffffff8ffffffULL 
                                                   & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int));
                            vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                = (0x800000000ULL | 
                                   (0x7ffff3ffffffffULL 
                                    & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int));
                        }
                    } else {
                        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x27d4400000100ULL;
                    }
                } else {
                    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x27d4400000100ULL;
                }
            } else if ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[4U] 
                        >> 0x1fU)) {
                if ((0x40000000U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[4U])) {
                    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                        = (0x60000000000000ULL | vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                        = (0x8000000000ULL | (0x7fe07fffffffffULL 
                                              & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int));
                    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                        = (0x6000000ULL | (0x7ffffff8ffffffULL 
                                           & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int));
                    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                        = (0xc00000000ULL | vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                        = ((0x1000U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U])
                            ? ((0x781fffffffffffULL 
                                & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int) 
                               | ((QData)((IData)((
                                                   (0x800U 
                                                    & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U])
                                                    ? 
                                                   ((0x400U 
                                                     & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U])
                                                     ? 0x17U
                                                     : 0x16U)
                                                    : 
                                                   ((0x400U 
                                                     & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U])
                                                     ? 0x1dU
                                                     : 0x1cU)))) 
                                  << 0x2dU)) : ((0x800U 
                                                 & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U])
                                                 ? 0x27d4400000100ULL
                                                 : 
                                                ((0x781fffffffffffULL 
                                                  & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int) 
                                                 | ((QData)((IData)(
                                                                    ((0x400U 
                                                                      & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U])
                                                                      ? 0x11U
                                                                      : 0x10U))) 
                                                    << 0x2dU))));
                } else {
                    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x27d4400000100ULL;
                }
            } else {
                vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x27d4400000100ULL;
            }
        } else {
            vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x27d4400000100ULL;
        }
    } else if ((8U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U])) {
        if ((4U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U])) {
            if ((2U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U])) {
                vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x27d4400000100ULL;
            } else if ((1U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U])) {
                if ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[4U] 
                     >> 0x1fU)) {
                    if ((0x40000000U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[4U])) {
                        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                            = (0x40000000000000ULL 
                               | vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                            = (0x120000000000ULL | 
                               (0x7fe1ffffffffffULL 
                                & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int));
                        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                            = (0x6000000000ULL | (0x7fff8fffffffffULL 
                                                  & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int));
                        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                            = (0x781fffffffffffULL 
                               & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                            = (0x1000000ULL | vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                    } else {
                        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x27d4400000100ULL;
                    }
                } else {
                    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x27d4400000100ULL;
                }
            } else if ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[4U] 
                        >> 0x1fU)) {
                if ((0x40000000U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[4U])) {
                    if (((3U == (3U & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                       >> 0x1cU))) 
                         | (2U == (3U & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                         >> 0x1cU))))) {
                        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x27d4400000100ULL;
                    } else {
                        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                            = (0x40000000000000ULL 
                               | vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                            = (0x7fe1ffffffffffULL 
                               & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                            = (0x3000000ULL | vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                        if ((1U & (~ (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                      >> 0x1aU)))) {
                            vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                = (0x4000000ULL | vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                        }
                        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                            = (((((((((0U == ((0x1f8U 
                                               & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                                  >> 0x14U)) 
                                              | (7U 
                                                 & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                                    >> 0xaU)))) 
                                      | (0x100U == 
                                         ((0x1f8U & 
                                           (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                            >> 0x14U)) 
                                          | (7U & (
                                                   vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                                   >> 0xaU))))) 
                                     | (2U == ((0x1f8U 
                                                & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                                   >> 0x14U)) 
                                               | (7U 
                                                  & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                                     >> 0xaU))))) 
                                    | (3U == ((0x1f8U 
                                               & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                                  >> 0x14U)) 
                                              | (7U 
                                                 & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                                    >> 0xaU))))) 
                                   | (4U == ((0x1f8U 
                                              & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                                 >> 0x14U)) 
                                             | (7U 
                                                & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                                   >> 0xaU))))) 
                                  | (6U == ((0x1f8U 
                                             & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                                >> 0x14U)) 
                                            | (7U & 
                                               (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                                >> 0xaU))))) 
                                 | (7U == ((0x1f8U 
                                            & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                               >> 0x14U)) 
                                           | (7U & 
                                              (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                               >> 0xaU))))) 
                                | (1U == ((0x1f8U & 
                                           (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                            >> 0x14U)) 
                                          | (7U & (
                                                   vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                                   >> 0xaU)))))
                                ? ((0x781fffffffffffULL 
                                    & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int) 
                                   | ((QData)((IData)(
                                                      ((0U 
                                                        == 
                                                        ((0x1f8U 
                                                          & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                                             >> 0x14U)) 
                                                         | (7U 
                                                            & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                                               >> 0xaU))))
                                                        ? 0U
                                                        : 
                                                       ((0x100U 
                                                         == 
                                                         ((0x1f8U 
                                                           & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                                              >> 0x14U)) 
                                                          | (7U 
                                                             & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                                                >> 0xaU))))
                                                         ? 8U
                                                         : 
                                                        ((2U 
                                                          == 
                                                          ((0x1f8U 
                                                            & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                                               >> 0x14U)) 
                                                           | (7U 
                                                              & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                                                 >> 0xaU))))
                                                          ? 0x1aU
                                                          : 
                                                         ((3U 
                                                           == 
                                                           ((0x1f8U 
                                                             & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                                                >> 0x14U)) 
                                                            | (7U 
                                                               & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                                                  >> 0xaU))))
                                                           ? 0x13U
                                                           : 
                                                          ((4U 
                                                            == 
                                                            ((0x1f8U 
                                                              & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                                                 >> 0x14U)) 
                                                             | (7U 
                                                                & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                                                   >> 0xaU))))
                                                            ? 4U
                                                            : 
                                                           ((6U 
                                                             == 
                                                             ((0x1f8U 
                                                               & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                                                  >> 0x14U)) 
                                                              | (7U 
                                                                 & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                                                    >> 0xaU))))
                                                             ? 6U
                                                             : 
                                                            ((7U 
                                                              == 
                                                              ((0x1f8U 
                                                                & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                                                   >> 0x14U)) 
                                                               | (7U 
                                                                  & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                                                     >> 0xaU))))
                                                              ? 7U
                                                              : 1U))))))))) 
                                      << 0x2dU)) : 
                               ((5U == ((0x1f8U & (
                                                   vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                                   >> 0x14U)) 
                                        | (7U & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                                 >> 0xaU))))
                                 ? (0xa00000000000ULL 
                                    | (0x781fffffffffffULL 
                                       & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int))
                                 : ((0x105U == ((0x1f8U 
                                                 & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                                    >> 0x14U)) 
                                                | (7U 
                                                   & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                                      >> 0xaU))))
                                     ? (0x1a00000000000ULL 
                                        | (0x781fffffffffffULL 
                                           & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int))
                                     : 0x27d4400000100ULL)));
                    }
                } else {
                    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x27d4400000100ULL;
                }
            } else {
                vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x27d4400000100ULL;
            }
        } else if ((2U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U])) {
            vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x27d4400000100ULL;
        } else if ((1U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U])) {
            vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x27d4400000100ULL;
        } else if ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[4U] 
                    >> 0x1fU)) {
            if ((0x40000000U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[4U])) {
                vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                    = (0x180000ULL | vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                    = (0x6000000ULL | vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                    = (0x20000000000ULL | (0x7fe07fffffffffULL 
                                           & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int));
                vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                    = (0x1000000000ULL | (0x7fffcfffffffffULL 
                                          & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int));
                vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                    = ((0x7ffffffff9ffffULL & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int) 
                       | ((QData)((IData)((3U & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                                 >> 0xaU)))) 
                          << 0x11U));
                if ((1U & ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U] 
                            >> 0xcU) | (3U == (3U & 
                                               (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                                >> 0xaU)))))) {
                    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x27d4400000100ULL;
                }
            } else {
                vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x27d4400000100ULL;
            }
        } else {
            vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x27d4400000100ULL;
        }
    } else if ((4U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U])) {
        if ((2U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U])) {
            vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x27d4400000100ULL;
        } else if ((1U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U])) {
            if ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[4U] 
                 >> 0x1fU)) {
                if ((0x40000000U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[4U])) {
                    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                        = (0x40000000000000ULL | vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                        = (0xa0000000000ULL | (0x7fe1ffffffffffULL 
                                               & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int));
                    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                        = (0x2000000000ULL | (0x7fffcfffffffffULL 
                                              & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int));
                    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                        = (0x781fffffffffffULL & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                        = (0x1000000ULL | vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                } else {
                    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x27d4400000100ULL;
                }
            } else {
                vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x27d4400000100ULL;
            }
        } else if ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[4U] 
                    >> 0x1fU)) {
            if ((0x40000000U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[4U])) {
                vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                    = (0x40000000000000ULL | vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                    = (0x20000000000ULL | (0x7fe1ffffffffffULL 
                                           & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int));
                vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                    = (0x7fffcfffffffffULL & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                    = (0x3000000ULL | vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                if ((0x1000U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U])) {
                    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                        = ((0x800U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U])
                            ? ((0x781fffffffffffULL 
                                & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int) 
                               | ((QData)((IData)((
                                                   (0x400U 
                                                    & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U])
                                                    ? 7U
                                                    : 6U))) 
                                  << 0x2dU)) : ((0x400U 
                                                 & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U])
                                                 ? 
                                                ((0U 
                                                  == 
                                                  (0x7fU 
                                                   & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                                      >> 0x17U)))
                                                  ? 
                                                 (0xa00000000000ULL 
                                                  | (0x781fffffffffffULL 
                                                     & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int))
                                                  : 
                                                 ((0x20U 
                                                   == 
                                                   (0x7fU 
                                                    & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                                       >> 0x17U)))
                                                   ? 
                                                  (0x1a00000000000ULL 
                                                   | (0x781fffffffffffULL 
                                                      & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int))
                                                   : 0x27d4400000100ULL))
                                                 : 
                                                (0x800000000000ULL 
                                                 | (0x781fffffffffffULL 
                                                    & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int))));
                } else if ((0x800U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U])) {
                    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                        = ((0x781fffffffffffULL & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int) 
                           | ((QData)((IData)(((0x400U 
                                                & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U])
                                                ? 0x13U
                                                : 0x1aU))) 
                              << 0x2dU));
                } else if ((0x400U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U])) {
                    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                        = (0x200000000000ULL | (0x781fffffffffffULL 
                                                & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int));
                    if ((0U != (0x7fU & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                         >> 0x17U)))) {
                        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x27d4400000100ULL;
                    }
                } else {
                    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                        = (0x781fffffffffffULL & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                }
            } else {
                vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x27d4400000100ULL;
            }
        } else {
            vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x27d4400000100ULL;
        }
    } else if ((2U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U])) {
        if ((1U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U])) {
            if ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[4U] 
                 >> 0x1fU)) {
                if ((0x40000000U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[4U])) {
                    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                        = (0x200ULL | vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
                    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                        = ((0U == (7U & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                         >> 0xaU)))
                            ? (0x10ULL | vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int)
                            : ((1U == (7U & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                             >> 0xaU)))
                                ? (8ULL | vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int)
                                : 0x27d4400000100ULL));
                } else {
                    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x27d4400000100ULL;
                }
            } else {
                vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x27d4400000100ULL;
            }
        } else {
            vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x27d4400000100ULL;
        }
    } else if ((1U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U])) {
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x27d4400000100ULL;
    } else if ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[4U] 
                >> 0x1fU)) {
        if ((0x40000000U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[4U])) {
            vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                = (0x100000ULL | vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
            vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                = (0x3000000ULL | vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
            vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                = (0x30000000000ULL | (0x7fe07fffffffffULL 
                                       & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int));
            vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                = (0x7fffcfffffffffULL & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int);
            vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                = ((0x7ffffffff8ffffULL & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int) 
                   | ((QData)((IData)(((6U & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                              >> 9U)) 
                                       | (1U & (~ (
                                                   vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                                   >> 0xcU)))))) 
                      << 0x10U));
            if ((((7U == (7U & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                >> 0xaU))) | (6U == 
                                              (7U & 
                                               (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                                >> 0xaU)))) 
                 | (3U == (7U & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                 >> 0xaU))))) {
                vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x27d4400000100ULL;
            }
        } else {
            vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x27d4400000100ULL;
        }
    } else {
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int = 0x27d4400000100ULL;
    }
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_en_gated 
        = (1U & ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U] 
                  >> 0xeU) & ((~ (IData)((0U != (0x42000U 
                                                 & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U])))) 
                              & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[1U] 
                                 >> 0x15U))));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__mul_valid = 0U;
    if ((2U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state))) {
        if ((1U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state))) {
            vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__mul_valid = 1U;
        }
    } else if ((1U & (~ (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state)))) {
        if ((1U & (~ (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[7U] 
                      >> 0x16U)))) {
            vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__mul_valid = 1U;
        }
    }
    if ((1U & ((~ (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__mul_en)) 
               | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U] 
                  >> 0xeU)))) {
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__mul_valid = 0U;
    } else if ((0x80000U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U])) {
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__mul_valid = 0U;
    }
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match[0U] = 0U;
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match[0U] 
        = ((0xfffffffeU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match
            [0U]) | (IData)(((0x800U == (0xfffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U])) 
                             & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                             [0U])));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match[0U] 
        = ((0xfffffffdU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match
            [0U]) | ((IData)(((0x801U == (0xfffU & 
                                          vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U])) 
                              & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                 [0U] >> 1U))) << 1U));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match[0U] 
        = ((0xfffffffbU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match
            [0U]) | ((IData)(((0x802U == (0xfffU & 
                                          vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U])) 
                              & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                 [0U] >> 2U))) << 2U));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match[0U] 
        = ((0xfffffff7U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match
            [0U]) | ((IData)(((0x803U == (0xfffU & 
                                          vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U])) 
                              & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                 [0U] >> 3U))) << 3U));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match[0U] 
        = ((0xffffffefU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match
            [0U]) | ((IData)(((0x804U == (0xfffU & 
                                          vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U])) 
                              & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                 [0U] >> 4U))) << 4U));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match[0U] 
        = ((0xffffffdfU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match
            [0U]) | ((IData)(((0x805U == (0xfffU & 
                                          vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U])) 
                              & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                 [0U] >> 5U))) << 5U));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match[0U] 
        = ((0xffffffbfU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match
            [0U]) | ((IData)(((0x806U == (0xfffU & 
                                          vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U])) 
                              & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                 [0U] >> 6U))) << 6U));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match[0U] 
        = ((0xffffff7fU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match
            [0U]) | ((IData)(((0x807U == (0xfffU & 
                                          vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U])) 
                              & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                 [0U] >> 7U))) << 7U));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match[0U] 
        = ((0xfffffeffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match
            [0U]) | ((IData)(((0x808U == (0xfffU & 
                                          vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U])) 
                              & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                 [0U] >> 8U))) << 8U));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match[0U] 
        = ((0xfffffdffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match
            [0U]) | ((IData)(((0x809U == (0xfffU & 
                                          vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U])) 
                              & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                 [0U] >> 9U))) << 9U));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match[0U] 
        = ((0xfffffbffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match
            [0U]) | ((IData)(((0x80aU == (0xfffU & 
                                          vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U])) 
                              & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                 [0U] >> 0xaU))) << 0xaU));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match[0U] 
        = ((0xfffff7ffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match
            [0U]) | ((IData)(((0x80bU == (0xfffU & 
                                          vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U])) 
                              & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                 [0U] >> 0xbU))) << 0xbU));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match[0U] 
        = ((0xffffefffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match
            [0U]) | ((IData)(((0x80cU == (0xfffU & 
                                          vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U])) 
                              & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                 [0U] >> 0xcU))) << 0xcU));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match[0U] 
        = ((0xffffdfffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match
            [0U]) | ((IData)(((0x80dU == (0xfffU & 
                                          vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U])) 
                              & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                 [0U] >> 0xdU))) << 0xdU));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match[0U] 
        = ((0xffffbfffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match
            [0U]) | ((IData)(((0x80eU == (0xfffU & 
                                          vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U])) 
                              & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                 [0U] >> 0xeU))) << 0xeU));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match[0U] 
        = ((0xffff7fffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match
            [0U]) | ((IData)(((0x80fU == (0xfffU & 
                                          vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U])) 
                              & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                 [0U] >> 0xfU))) << 0xfU));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match[0U] 
        = ((0xfffeffffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match
            [0U]) | ((IData)(((0x810U == (0xfffU & 
                                          vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U])) 
                              & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                 [0U] >> 0x10U))) << 0x10U));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match[0U] 
        = ((0xfffdffffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match
            [0U]) | ((IData)(((0x811U == (0xfffU & 
                                          vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U])) 
                              & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                 [0U] >> 0x11U))) << 0x11U));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match[0U] 
        = ((0xfffbffffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match
            [0U]) | ((IData)(((0x812U == (0xfffU & 
                                          vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U])) 
                              & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                 [0U] >> 0x12U))) << 0x12U));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match[0U] 
        = ((0xfff7ffffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match
            [0U]) | ((IData)(((0x813U == (0xfffU & 
                                          vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U])) 
                              & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                 [0U] >> 0x13U))) << 0x13U));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match[0U] 
        = ((0xffefffffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match
            [0U]) | ((IData)(((0x814U == (0xfffU & 
                                          vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U])) 
                              & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                 [0U] >> 0x14U))) << 0x14U));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match[0U] 
        = ((0xffdfffffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match
            [0U]) | ((IData)(((0x815U == (0xfffU & 
                                          vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U])) 
                              & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                 [0U] >> 0x15U))) << 0x15U));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match[0U] 
        = ((0xffbfffffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match
            [0U]) | ((IData)(((0x816U == (0xfffU & 
                                          vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U])) 
                              & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                 [0U] >> 0x16U))) << 0x16U));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match[0U] 
        = ((0xff7fffffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match
            [0U]) | ((IData)(((0x817U == (0xfffU & 
                                          vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U])) 
                              & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                 [0U] >> 0x17U))) << 0x17U));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match[0U] 
        = ((0xfeffffffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match
            [0U]) | ((IData)(((0x818U == (0xfffU & 
                                          vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U])) 
                              & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                 [0U] >> 0x18U))) << 0x18U));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match[0U] 
        = ((0xfdffffffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match
            [0U]) | ((IData)(((0x819U == (0xfffU & 
                                          vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U])) 
                              & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                 [0U] >> 0x19U))) << 0x19U));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match[0U] 
        = ((0xfbffffffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match
            [0U]) | ((IData)(((0x81aU == (0xfffU & 
                                          vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U])) 
                              & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                 [0U] >> 0x1aU))) << 0x1aU));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match[0U] 
        = ((0xf7ffffffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match
            [0U]) | ((IData)(((0x81bU == (0xfffU & 
                                          vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U])) 
                              & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                 [0U] >> 0x1bU))) << 0x1bU));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match[0U] 
        = ((0xefffffffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match
            [0U]) | ((IData)(((0x81cU == (0xfffU & 
                                          vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U])) 
                              & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                 [0U] >> 0x1cU))) << 0x1cU));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match[0U] 
        = ((0xdfffffffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match
            [0U]) | ((IData)(((0x81dU == (0xfffU & 
                                          vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U])) 
                              & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                 [0U] >> 0x1dU))) << 0x1dU));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match[0U] 
        = ((0xbfffffffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match
            [0U]) | ((IData)(((0x81eU == (0xfffU & 
                                          vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U])) 
                              & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                 [0U] >> 0x1eU))) << 0x1eU));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match[0U] 
        = ((0x7fffffffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match
            [0U]) | ((IData)(((0x81fU == (0xfffU & 
                                          vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U])) 
                              & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                 [0U] >> 0x1fU))) << 0x1fU));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_trans_valid 
        = ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[6U] 
            >> 7U) & ((2U > (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__outstanding_cnt_q)) 
                      & ((~ ((~ (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[6U] 
                                 >> 6U)) & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__ptr_fetch_accepted_q))) 
                         & ((0U == vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____VdfgRegularize_h16c80b4c_0_0) 
                            | (((1U == vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____VdfgRegularize_h16c80b4c_0_0) 
                                & (0U == (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__outstanding_cnt_q))) 
                               | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[6U] 
                                  >> 6U))))));
    vlSelfRef.__VdfgRegularize_hd87f99a1_1_9 = ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT____VdfgRegularize_h1be56877_2_7) 
                                                & ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
                                                    >> 2U) 
                                                   & ((~ 
                                                       (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[4U] 
                                                        >> 0x13U)) 
                                                      & ((((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
                                                            >> 6U) 
                                                           & (3U 
                                                              == (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_priv_lvl_resp))) 
                                                          | ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
                                                              >> 3U) 
                                                             & (0U 
                                                                == (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_priv_lvl_resp)))) 
                                                         & ((~ (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____VdfgExtracted_ha053764d__0)) 
                                                            & ((0U 
                                                                == 
                                                                (0xfU 
                                                                 & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
                                                                    >> 7U)))
                                                                ? 
                                                               (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
                                                                == vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_q)
                                                                : 
                                                               ((2U 
                                                                 == 
                                                                 (0xfU 
                                                                  & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
                                                                     >> 7U)))
                                                                 ? 
                                                                (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_q 
                                                                 >= vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q)
                                                                 : 
                                                                (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_q 
                                                                 < vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q))))))));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_rdata_int 
        = ((0x800U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
            ? ((0x400U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                ? ((0x200U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                    ? ((0x100U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                        ? ((0x80U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                            ? 0U : ((0x40U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                     ? 0U : ((0x20U 
                                              & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                              ? 0U : 
                                             ((0x10U 
                                               & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                               ? ((8U 
                                                   & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                   ? 0U
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                    ? 0U
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                      ? 0U
                                                      : 0x14U)
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                      ? 0x602U
                                                      : 0U))))
                                               : 0U))))
                        : 0U) : ((0x100U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                  ? 0U : ((0x80U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                           ? ((0x40U 
                                               & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                               ? 0U
                                               : ((0x20U 
                                                   & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                   ? 0U
                                                   : 
                                                  ((0x10U 
                                                    & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                    ? 
                                                   (((0U 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(0x20U) 
                                                          + 
                                                          VL_SHIFTL_III(11,32,32, 
                                                                        (0x1fU 
                                                                         & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))
                                                      ? 0U
                                                      : 
                                                     (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                      (((IData)(0x1fU) 
                                                        + 
                                                        (0x7ffU 
                                                         & ((IData)(0x20U) 
                                                            + 
                                                            VL_SHIFTL_III(11,32,32, 
                                                                          (0x1fU 
                                                                           & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))) 
                                                       >> 5U)] 
                                                      << 
                                                      ((IData)(0x20U) 
                                                       - 
                                                       (0x1fU 
                                                        & ((IData)(0x20U) 
                                                           + 
                                                           VL_SHIFTL_III(11,32,32, 
                                                                         (0x1fU 
                                                                          & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))))) 
                                                    | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                       (0x3fU 
                                                        & (((IData)(0x20U) 
                                                            + 
                                                            VL_SHIFTL_III(11,32,32, 
                                                                          (0x1fU 
                                                                           & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)) 
                                                           >> 5U))] 
                                                       >> 
                                                       (0x1fU 
                                                        & ((IData)(0x20U) 
                                                           + 
                                                           VL_SHIFTL_III(11,32,32, 
                                                                         (0x1fU 
                                                                          & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))))
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                     ? 
                                                    (((0U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(0x20U) 
                                                           + 
                                                           VL_SHIFTL_III(11,32,32, 
                                                                         (0x1fU 
                                                                          & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))
                                                       ? 0U
                                                       : 
                                                      (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                       (((IData)(0x1fU) 
                                                         + 
                                                         (0x7ffU 
                                                          & ((IData)(0x20U) 
                                                             + 
                                                             VL_SHIFTL_III(11,32,32, 
                                                                           (0x1fU 
                                                                            & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))) 
                                                        >> 5U)] 
                                                       << 
                                                       ((IData)(0x20U) 
                                                        - 
                                                        (0x1fU 
                                                         & ((IData)(0x20U) 
                                                            + 
                                                            VL_SHIFTL_III(11,32,32, 
                                                                          (0x1fU 
                                                                           & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))))) 
                                                     | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                        (0x3fU 
                                                         & (((IData)(0x20U) 
                                                             + 
                                                             VL_SHIFTL_III(11,32,32, 
                                                                           (0x1fU 
                                                                            & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)) 
                                                            >> 5U))] 
                                                        >> 
                                                        (0x1fU 
                                                         & ((IData)(0x20U) 
                                                            + 
                                                            VL_SHIFTL_III(11,32,32, 
                                                                          (0x1fU 
                                                                           & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))))
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                      ? 
                                                     (((0U 
                                                        == 
                                                        (0x1fU 
                                                         & ((IData)(0x20U) 
                                                            + 
                                                            VL_SHIFTL_III(11,32,32, 
                                                                          (0x1fU 
                                                                           & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))
                                                        ? 0U
                                                        : 
                                                       (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                        (((IData)(0x1fU) 
                                                          + 
                                                          (0x7ffU 
                                                           & ((IData)(0x20U) 
                                                              + 
                                                              VL_SHIFTL_III(11,32,32, 
                                                                            (0x1fU 
                                                                             & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))) 
                                                         >> 5U)] 
                                                        << 
                                                        ((IData)(0x20U) 
                                                         - 
                                                         (0x1fU 
                                                          & ((IData)(0x20U) 
                                                             + 
                                                             VL_SHIFTL_III(11,32,32, 
                                                                           (0x1fU 
                                                                            & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))))) 
                                                      | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                         (0x3fU 
                                                          & (((IData)(0x20U) 
                                                              + 
                                                              VL_SHIFTL_III(11,32,32, 
                                                                            (0x1fU 
                                                                             & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)) 
                                                             >> 5U))] 
                                                         >> 
                                                         (0x1fU 
                                                          & ((IData)(0x20U) 
                                                             + 
                                                             VL_SHIFTL_III(11,32,32, 
                                                                           (0x1fU 
                                                                            & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))))
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                        ? 
                                                       (((0U 
                                                          == 
                                                          (0x1fU 
                                                           & ((IData)(0x20U) 
                                                              + 
                                                              VL_SHIFTL_III(11,32,32, 
                                                                            (0x1fU 
                                                                             & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))
                                                          ? 0U
                                                          : 
                                                         (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                          (((IData)(0x1fU) 
                                                            + 
                                                            (0x7ffU 
                                                             & ((IData)(0x20U) 
                                                                + 
                                                                VL_SHIFTL_III(11,32,32, 
                                                                              (0x1fU 
                                                                               & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))) 
                                                           >> 5U)] 
                                                          << 
                                                          ((IData)(0x20U) 
                                                           - 
                                                           (0x1fU 
                                                            & ((IData)(0x20U) 
                                                               + 
                                                               VL_SHIFTL_III(11,32,32, 
                                                                             (0x1fU 
                                                                              & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))))) 
                                                        | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                           (0x3fU 
                                                            & (((IData)(0x20U) 
                                                                + 
                                                                VL_SHIFTL_III(11,32,32, 
                                                                              (0x1fU 
                                                                               & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)) 
                                                               >> 5U))] 
                                                           >> 
                                                           (0x1fU 
                                                            & ((IData)(0x20U) 
                                                               + 
                                                               VL_SHIFTL_III(11,32,32, 
                                                                             (0x1fU 
                                                                              & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))))
                                                        : 
                                                       (((0U 
                                                          == 
                                                          (0x1fU 
                                                           & ((IData)(0x20U) 
                                                              + 
                                                              VL_SHIFTL_III(11,32,32, 
                                                                            (0x1fU 
                                                                             & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))
                                                          ? 0U
                                                          : 
                                                         (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                          (((IData)(0x1fU) 
                                                            + 
                                                            (0x7ffU 
                                                             & ((IData)(0x20U) 
                                                                + 
                                                                VL_SHIFTL_III(11,32,32, 
                                                                              (0x1fU 
                                                                               & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))) 
                                                           >> 5U)] 
                                                          << 
                                                          ((IData)(0x20U) 
                                                           - 
                                                           (0x1fU 
                                                            & ((IData)(0x20U) 
                                                               + 
                                                               VL_SHIFTL_III(11,32,32, 
                                                                             (0x1fU 
                                                                              & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))))) 
                                                        | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                           (0x3fU 
                                                            & (((IData)(0x20U) 
                                                                + 
                                                                VL_SHIFTL_III(11,32,32, 
                                                                              (0x1fU 
                                                                               & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)) 
                                                               >> 5U))] 
                                                           >> 
                                                           (0x1fU 
                                                            & ((IData)(0x20U) 
                                                               + 
                                                               VL_SHIFTL_III(11,32,32, 
                                                                             (0x1fU 
                                                                              & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))))
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                        ? (IData)(
                                                                  (vlSelfRef.time_i 
                                                                   >> 0x20U))
                                                        : 
                                                       (((0U 
                                                          == 
                                                          (0x1fU 
                                                           & ((IData)(0x20U) 
                                                              + 
                                                              VL_SHIFTL_III(11,32,32, 
                                                                            (0x1fU 
                                                                             & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))
                                                          ? 0U
                                                          : 
                                                         (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                          (((IData)(0x1fU) 
                                                            + 
                                                            (0x7ffU 
                                                             & ((IData)(0x20U) 
                                                                + 
                                                                VL_SHIFTL_III(11,32,32, 
                                                                              (0x1fU 
                                                                               & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))) 
                                                           >> 5U)] 
                                                          << 
                                                          ((IData)(0x20U) 
                                                           - 
                                                           (0x1fU 
                                                            & ((IData)(0x20U) 
                                                               + 
                                                               VL_SHIFTL_III(11,32,32, 
                                                                             (0x1fU 
                                                                              & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))))) 
                                                        | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                           (0x3fU 
                                                            & (((IData)(0x20U) 
                                                                + 
                                                                VL_SHIFTL_III(11,32,32, 
                                                                              (0x1fU 
                                                                               & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)) 
                                                               >> 5U))] 
                                                           >> 
                                                           (0x1fU 
                                                            & ((IData)(0x20U) 
                                                               + 
                                                               VL_SHIFTL_III(11,32,32, 
                                                                             (0x1fU 
                                                                              & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))))))))))
                                           : ((0x40U 
                                               & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                               ? 0U
                                               : ((0x20U 
                                                   & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                   ? 0U
                                                   : 
                                                  ((0x10U 
                                                    & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                    ? 
                                                   (((0U 
                                                      == 
                                                      (0x1fU 
                                                       & VL_SHIFTL_III(11,32,32, 
                                                                       (0x1fU 
                                                                        & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))
                                                      ? 0U
                                                      : 
                                                     (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                      (((IData)(0x1fU) 
                                                        + 
                                                        (0x7ffU 
                                                         & VL_SHIFTL_III(11,32,32, 
                                                                         (0x1fU 
                                                                          & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))) 
                                                       >> 5U)] 
                                                      << 
                                                      ((IData)(0x20U) 
                                                       - 
                                                       (0x1fU 
                                                        & VL_SHIFTL_III(11,32,32, 
                                                                        (0x1fU 
                                                                         & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))) 
                                                    | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                       (0x3fU 
                                                        & (VL_SHIFTL_III(11,32,32, 
                                                                         (0x1fU 
                                                                          & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U) 
                                                           >> 5U))] 
                                                       >> 
                                                       (0x1fU 
                                                        & VL_SHIFTL_III(11,32,32, 
                                                                        (0x1fU 
                                                                         & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                     ? 
                                                    (((0U 
                                                       == 
                                                       (0x1fU 
                                                        & VL_SHIFTL_III(11,32,32, 
                                                                        (0x1fU 
                                                                         & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))
                                                       ? 0U
                                                       : 
                                                      (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                       (((IData)(0x1fU) 
                                                         + 
                                                         (0x7ffU 
                                                          & VL_SHIFTL_III(11,32,32, 
                                                                          (0x1fU 
                                                                           & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))) 
                                                        >> 5U)] 
                                                       << 
                                                       ((IData)(0x20U) 
                                                        - 
                                                        (0x1fU 
                                                         & VL_SHIFTL_III(11,32,32, 
                                                                         (0x1fU 
                                                                          & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))) 
                                                     | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                        (0x3fU 
                                                         & (VL_SHIFTL_III(11,32,32, 
                                                                          (0x1fU 
                                                                           & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U) 
                                                            >> 5U))] 
                                                        >> 
                                                        (0x1fU 
                                                         & VL_SHIFTL_III(11,32,32, 
                                                                         (0x1fU 
                                                                          & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                      ? 
                                                     (((0U 
                                                        == 
                                                        (0x1fU 
                                                         & VL_SHIFTL_III(11,32,32, 
                                                                         (0x1fU 
                                                                          & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))
                                                        ? 0U
                                                        : 
                                                       (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                        (((IData)(0x1fU) 
                                                          + 
                                                          (0x7ffU 
                                                           & VL_SHIFTL_III(11,32,32, 
                                                                           (0x1fU 
                                                                            & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))) 
                                                         >> 5U)] 
                                                        << 
                                                        ((IData)(0x20U) 
                                                         - 
                                                         (0x1fU 
                                                          & VL_SHIFTL_III(11,32,32, 
                                                                          (0x1fU 
                                                                           & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))) 
                                                      | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                         (0x3fU 
                                                          & (VL_SHIFTL_III(11,32,32, 
                                                                           (0x1fU 
                                                                            & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U) 
                                                             >> 5U))] 
                                                         >> 
                                                         (0x1fU 
                                                          & VL_SHIFTL_III(11,32,32, 
                                                                          (0x1fU 
                                                                           & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                       ? 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                        ? 
                                                       (((0U 
                                                          == 
                                                          (0x1fU 
                                                           & VL_SHIFTL_III(11,32,32, 
                                                                           (0x1fU 
                                                                            & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))
                                                          ? 0U
                                                          : 
                                                         (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                          (((IData)(0x1fU) 
                                                            + 
                                                            (0x7ffU 
                                                             & VL_SHIFTL_III(11,32,32, 
                                                                             (0x1fU 
                                                                              & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))) 
                                                           >> 5U)] 
                                                          << 
                                                          ((IData)(0x20U) 
                                                           - 
                                                           (0x1fU 
                                                            & VL_SHIFTL_III(11,32,32, 
                                                                            (0x1fU 
                                                                             & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))) 
                                                        | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                           (0x3fU 
                                                            & (VL_SHIFTL_III(11,32,32, 
                                                                             (0x1fU 
                                                                              & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U) 
                                                               >> 5U))] 
                                                           >> 
                                                           (0x1fU 
                                                            & VL_SHIFTL_III(11,32,32, 
                                                                            (0x1fU 
                                                                             & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))
                                                        : 
                                                       (((0U 
                                                          == 
                                                          (0x1fU 
                                                           & VL_SHIFTL_III(11,32,32, 
                                                                           (0x1fU 
                                                                            & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))
                                                          ? 0U
                                                          : 
                                                         (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                          (((IData)(0x1fU) 
                                                            + 
                                                            (0x7ffU 
                                                             & VL_SHIFTL_III(11,32,32, 
                                                                             (0x1fU 
                                                                              & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))) 
                                                           >> 5U)] 
                                                          << 
                                                          ((IData)(0x20U) 
                                                           - 
                                                           (0x1fU 
                                                            & VL_SHIFTL_III(11,32,32, 
                                                                            (0x1fU 
                                                                             & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))) 
                                                        | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                           (0x3fU 
                                                            & (VL_SHIFTL_III(11,32,32, 
                                                                             (0x1fU 
                                                                              & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U) 
                                                               >> 5U))] 
                                                           >> 
                                                           (0x1fU 
                                                            & VL_SHIFTL_III(11,32,32, 
                                                                            (0x1fU 
                                                                             & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))))
                                                       : 
                                                      ((1U 
                                                        & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                        ? (IData)(vlSelfRef.time_i)
                                                        : 
                                                       (((0U 
                                                          == 
                                                          (0x1fU 
                                                           & VL_SHIFTL_III(11,32,32, 
                                                                           (0x1fU 
                                                                            & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))
                                                          ? 0U
                                                          : 
                                                         (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                          (((IData)(0x1fU) 
                                                            + 
                                                            (0x7ffU 
                                                             & VL_SHIFTL_III(11,32,32, 
                                                                             (0x1fU 
                                                                              & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))) 
                                                           >> 5U)] 
                                                          << 
                                                          ((IData)(0x20U) 
                                                           - 
                                                           (0x1fU 
                                                            & VL_SHIFTL_III(11,32,32, 
                                                                            (0x1fU 
                                                                             & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))) 
                                                        | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                           (0x3fU 
                                                            & (VL_SHIFTL_III(11,32,32, 
                                                                             (0x1fU 
                                                                              & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U) 
                                                               >> 5U))] 
                                                           >> 
                                                           (0x1fU 
                                                            & VL_SHIFTL_III(11,32,32, 
                                                                            (0x1fU 
                                                                             & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))))))))))))
                : ((0x200U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                    ? ((0x100U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                        ? ((0x80U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                            ? ((0x40U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                ? 0U : ((0x20U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                         ? 0U : ((0x10U 
                                                  & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                  ? 
                                                 (((0U 
                                                    == 
                                                    (0x1fU 
                                                     & ((IData)(0x20U) 
                                                        + 
                                                        VL_SHIFTL_III(11,32,32, 
                                                                      (0x1fU 
                                                                       & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))
                                                    ? 0U
                                                    : 
                                                   (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                    (((IData)(0x1fU) 
                                                      + 
                                                      (0x7ffU 
                                                       & ((IData)(0x20U) 
                                                          + 
                                                          VL_SHIFTL_III(11,32,32, 
                                                                        (0x1fU 
                                                                         & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))) 
                                                     >> 5U)] 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & ((IData)(0x20U) 
                                                         + 
                                                         VL_SHIFTL_III(11,32,32, 
                                                                       (0x1fU 
                                                                        & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))))) 
                                                  | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                     (0x3fU 
                                                      & (((IData)(0x20U) 
                                                          + 
                                                          VL_SHIFTL_III(11,32,32, 
                                                                        (0x1fU 
                                                                         & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)) 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x1fU 
                                                      & ((IData)(0x20U) 
                                                         + 
                                                         VL_SHIFTL_III(11,32,32, 
                                                                       (0x1fU 
                                                                        & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))))
                                                  : 
                                                 ((8U 
                                                   & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                   ? 
                                                  (((0U 
                                                     == 
                                                     (0x1fU 
                                                      & ((IData)(0x20U) 
                                                         + 
                                                         VL_SHIFTL_III(11,32,32, 
                                                                       (0x1fU 
                                                                        & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))
                                                     ? 0U
                                                     : 
                                                    (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                     (((IData)(0x1fU) 
                                                       + 
                                                       (0x7ffU 
                                                        & ((IData)(0x20U) 
                                                           + 
                                                           VL_SHIFTL_III(11,32,32, 
                                                                         (0x1fU 
                                                                          & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))) 
                                                      >> 5U)] 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & ((IData)(0x20U) 
                                                          + 
                                                          VL_SHIFTL_III(11,32,32, 
                                                                        (0x1fU 
                                                                         & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))))) 
                                                   | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                      (0x3fU 
                                                       & (((IData)(0x20U) 
                                                           + 
                                                           VL_SHIFTL_III(11,32,32, 
                                                                         (0x1fU 
                                                                          & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)) 
                                                          >> 5U))] 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(0x20U) 
                                                          + 
                                                          VL_SHIFTL_III(11,32,32, 
                                                                        (0x1fU 
                                                                         & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                    ? 
                                                   (((0U 
                                                      == 
                                                      (0x1fU 
                                                       & ((IData)(0x20U) 
                                                          + 
                                                          VL_SHIFTL_III(11,32,32, 
                                                                        (0x1fU 
                                                                         & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))
                                                      ? 0U
                                                      : 
                                                     (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                      (((IData)(0x1fU) 
                                                        + 
                                                        (0x7ffU 
                                                         & ((IData)(0x20U) 
                                                            + 
                                                            VL_SHIFTL_III(11,32,32, 
                                                                          (0x1fU 
                                                                           & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))) 
                                                       >> 5U)] 
                                                      << 
                                                      ((IData)(0x20U) 
                                                       - 
                                                       (0x1fU 
                                                        & ((IData)(0x20U) 
                                                           + 
                                                           VL_SHIFTL_III(11,32,32, 
                                                                         (0x1fU 
                                                                          & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))))) 
                                                    | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                       (0x3fU 
                                                        & (((IData)(0x20U) 
                                                            + 
                                                            VL_SHIFTL_III(11,32,32, 
                                                                          (0x1fU 
                                                                           & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)) 
                                                           >> 5U))] 
                                                       >> 
                                                       (0x1fU 
                                                        & ((IData)(0x20U) 
                                                           + 
                                                           VL_SHIFTL_III(11,32,32, 
                                                                         (0x1fU 
                                                                          & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                     ? 
                                                    (((0U 
                                                       == 
                                                       (0x1fU 
                                                        & ((IData)(0x20U) 
                                                           + 
                                                           VL_SHIFTL_III(11,32,32, 
                                                                         (0x1fU 
                                                                          & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))
                                                       ? 0U
                                                       : 
                                                      (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                       (((IData)(0x1fU) 
                                                         + 
                                                         (0x7ffU 
                                                          & ((IData)(0x20U) 
                                                             + 
                                                             VL_SHIFTL_III(11,32,32, 
                                                                           (0x1fU 
                                                                            & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))) 
                                                        >> 5U)] 
                                                       << 
                                                       ((IData)(0x20U) 
                                                        - 
                                                        (0x1fU 
                                                         & ((IData)(0x20U) 
                                                            + 
                                                            VL_SHIFTL_III(11,32,32, 
                                                                          (0x1fU 
                                                                           & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))))) 
                                                     | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                        (0x3fU 
                                                         & (((IData)(0x20U) 
                                                             + 
                                                             VL_SHIFTL_III(11,32,32, 
                                                                           (0x1fU 
                                                                            & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)) 
                                                            >> 5U))] 
                                                        >> 
                                                        (0x1fU 
                                                         & ((IData)(0x20U) 
                                                            + 
                                                            VL_SHIFTL_III(11,32,32, 
                                                                          (0x1fU 
                                                                           & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                      ? 0U
                                                      : 
                                                     (((0U 
                                                        == 
                                                        (0x1fU 
                                                         & ((IData)(0x20U) 
                                                            + 
                                                            VL_SHIFTL_III(11,32,32, 
                                                                          (0x1fU 
                                                                           & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))
                                                        ? 0U
                                                        : 
                                                       (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                        (((IData)(0x1fU) 
                                                          + 
                                                          (0x7ffU 
                                                           & ((IData)(0x20U) 
                                                              + 
                                                              VL_SHIFTL_III(11,32,32, 
                                                                            (0x1fU 
                                                                             & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))) 
                                                         >> 5U)] 
                                                        << 
                                                        ((IData)(0x20U) 
                                                         - 
                                                         (0x1fU 
                                                          & ((IData)(0x20U) 
                                                             + 
                                                             VL_SHIFTL_III(11,32,32, 
                                                                           (0x1fU 
                                                                            & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))))) 
                                                      | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                         (0x3fU 
                                                          & (((IData)(0x20U) 
                                                              + 
                                                              VL_SHIFTL_III(11,32,32, 
                                                                            (0x1fU 
                                                                             & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)) 
                                                             >> 5U))] 
                                                         >> 
                                                         (0x1fU 
                                                          & ((IData)(0x20U) 
                                                             + 
                                                             VL_SHIFTL_III(11,32,32, 
                                                                           (0x1fU 
                                                                            & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))))))))))
                            : ((0x40U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                ? 0U : ((0x20U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                         ? 0U : ((0x10U 
                                                  & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                  ? 
                                                 (((0U 
                                                    == 
                                                    (0x1fU 
                                                     & VL_SHIFTL_III(11,32,32, 
                                                                     (0x1fU 
                                                                      & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))
                                                    ? 0U
                                                    : 
                                                   (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                    (((IData)(0x1fU) 
                                                      + 
                                                      (0x7ffU 
                                                       & VL_SHIFTL_III(11,32,32, 
                                                                       (0x1fU 
                                                                        & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))) 
                                                     >> 5U)] 
                                                    << 
                                                    ((IData)(0x20U) 
                                                     - 
                                                     (0x1fU 
                                                      & VL_SHIFTL_III(11,32,32, 
                                                                      (0x1fU 
                                                                       & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))) 
                                                  | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                     (0x3fU 
                                                      & (VL_SHIFTL_III(11,32,32, 
                                                                       (0x1fU 
                                                                        & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U) 
                                                         >> 5U))] 
                                                     >> 
                                                     (0x1fU 
                                                      & VL_SHIFTL_III(11,32,32, 
                                                                      (0x1fU 
                                                                       & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))
                                                  : 
                                                 ((8U 
                                                   & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                   ? 
                                                  (((0U 
                                                     == 
                                                     (0x1fU 
                                                      & VL_SHIFTL_III(11,32,32, 
                                                                      (0x1fU 
                                                                       & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))
                                                     ? 0U
                                                     : 
                                                    (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                     (((IData)(0x1fU) 
                                                       + 
                                                       (0x7ffU 
                                                        & VL_SHIFTL_III(11,32,32, 
                                                                        (0x1fU 
                                                                         & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))) 
                                                      >> 5U)] 
                                                     << 
                                                     ((IData)(0x20U) 
                                                      - 
                                                      (0x1fU 
                                                       & VL_SHIFTL_III(11,32,32, 
                                                                       (0x1fU 
                                                                        & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))) 
                                                   | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                      (0x3fU 
                                                       & (VL_SHIFTL_III(11,32,32, 
                                                                        (0x1fU 
                                                                         & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U) 
                                                          >> 5U))] 
                                                      >> 
                                                      (0x1fU 
                                                       & VL_SHIFTL_III(11,32,32, 
                                                                       (0x1fU 
                                                                        & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                    ? 
                                                   (((0U 
                                                      == 
                                                      (0x1fU 
                                                       & VL_SHIFTL_III(11,32,32, 
                                                                       (0x1fU 
                                                                        & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))
                                                      ? 0U
                                                      : 
                                                     (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                      (((IData)(0x1fU) 
                                                        + 
                                                        (0x7ffU 
                                                         & VL_SHIFTL_III(11,32,32, 
                                                                         (0x1fU 
                                                                          & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))) 
                                                       >> 5U)] 
                                                      << 
                                                      ((IData)(0x20U) 
                                                       - 
                                                       (0x1fU 
                                                        & VL_SHIFTL_III(11,32,32, 
                                                                        (0x1fU 
                                                                         & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))) 
                                                    | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                       (0x3fU 
                                                        & (VL_SHIFTL_III(11,32,32, 
                                                                         (0x1fU 
                                                                          & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U) 
                                                           >> 5U))] 
                                                       >> 
                                                       (0x1fU 
                                                        & VL_SHIFTL_III(11,32,32, 
                                                                        (0x1fU 
                                                                         & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                     ? 
                                                    (((0U 
                                                       == 
                                                       (0x1fU 
                                                        & VL_SHIFTL_III(11,32,32, 
                                                                        (0x1fU 
                                                                         & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))
                                                       ? 0U
                                                       : 
                                                      (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                       (((IData)(0x1fU) 
                                                         + 
                                                         (0x7ffU 
                                                          & VL_SHIFTL_III(11,32,32, 
                                                                          (0x1fU 
                                                                           & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))) 
                                                        >> 5U)] 
                                                       << 
                                                       ((IData)(0x20U) 
                                                        - 
                                                        (0x1fU 
                                                         & VL_SHIFTL_III(11,32,32, 
                                                                         (0x1fU 
                                                                          & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))) 
                                                     | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                        (0x3fU 
                                                         & (VL_SHIFTL_III(11,32,32, 
                                                                          (0x1fU 
                                                                           & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U) 
                                                            >> 5U))] 
                                                        >> 
                                                        (0x1fU 
                                                         & VL_SHIFTL_III(11,32,32, 
                                                                         (0x1fU 
                                                                          & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                      ? 0U
                                                      : 
                                                     (((0U 
                                                        == 
                                                        (0x1fU 
                                                         & VL_SHIFTL_III(11,32,32, 
                                                                         (0x1fU 
                                                                          & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U)))
                                                        ? 0U
                                                        : 
                                                       (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                        (((IData)(0x1fU) 
                                                          + 
                                                          (0x7ffU 
                                                           & VL_SHIFTL_III(11,32,32, 
                                                                           (0x1fU 
                                                                            & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))) 
                                                         >> 5U)] 
                                                        << 
                                                        ((IData)(0x20U) 
                                                         - 
                                                         (0x1fU 
                                                          & VL_SHIFTL_III(11,32,32, 
                                                                          (0x1fU 
                                                                           & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))) 
                                                      | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[
                                                         (0x3fU 
                                                          & (VL_SHIFTL_III(11,32,32, 
                                                                           (0x1fU 
                                                                            & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U) 
                                                             >> 5U))] 
                                                         >> 
                                                         (0x1fU 
                                                          & VL_SHIFTL_III(11,32,32, 
                                                                          (0x1fU 
                                                                           & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 6U))))))))))))
                        : 0U) : 0U)) : ((0x400U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                         ? ((0x200U 
                                             & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                             ? ((0x100U 
                                                 & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                 ? 
                                                ((0x80U 
                                                  & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                  ? 
                                                 ((0x40U 
                                                   & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                   ? 0U
                                                   : 
                                                  ((0x20U 
                                                    & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                    ? 
                                                   ((0x10U 
                                                     & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                     ? 
                                                    ((8U 
                                                      & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                      ? 0U
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                       ? 0U
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                         ? vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch1_csr_i__DOT__rdata_q
                                                         : vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dscratch0_csr_i__DOT__rdata_q)
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                         ? vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q
                                                         : vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__dcsr))))
                                                     : 
                                                    ((8U 
                                                      & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                      ? 0U
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                        ? 0U
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                         ? 0U
                                                         : 0x1008064U))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                         ? 0U
                                                         : vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__tdata2_rdata)
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                         ? vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__tdata1_rdata
                                                         : vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q)))))
                                                    : 0U))
                                                  : 0U)
                                                 : 0U)
                                             : 0U) : 
                                        ((0x200U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                          ? ((0x100U 
                                              & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                              ? ((0x80U 
                                                  & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                  ? 0U
                                                  : 
                                                 ((0x40U 
                                                   & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                   ? 
                                                  ((0x20U 
                                                    & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                    ? 0U
                                                    : 
                                                   ((0x10U 
                                                     & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                     ? 0U
                                                     : 
                                                    ((8U 
                                                      & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                      ? 0U
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                        ? 0U
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                         ? 0U
                                                         : vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__gen_basic_interrupt__DOT__int_controller_i__DOT__irq_q))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                         ? 0U
                                                         : vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__rdata_q)
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                         ? vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q
                                                         : vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_csr_i__DOT__rdata_q))))))
                                                   : 
                                                  ((0x20U 
                                                    & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                    ? 
                                                   ((0x10U 
                                                     & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                     ? 
                                                    (((0U 
                                                       == 
                                                       (0x1fU 
                                                        & VL_SHIFTL_III(10,32,32, 
                                                                        (0x1fU 
                                                                         & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 5U)))
                                                       ? 0U
                                                       : 
                                                      (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[
                                                       (((IData)(0x1fU) 
                                                         + 
                                                         (0x3ffU 
                                                          & VL_SHIFTL_III(10,32,32, 
                                                                          (0x1fU 
                                                                           & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 5U))) 
                                                        >> 5U)] 
                                                       << 
                                                       ((IData)(0x20U) 
                                                        - 
                                                        (0x1fU 
                                                         & VL_SHIFTL_III(10,32,32, 
                                                                         (0x1fU 
                                                                          & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 5U))))) 
                                                     | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[
                                                        (0x1fU 
                                                         & (VL_SHIFTL_III(10,32,32, 
                                                                          (0x1fU 
                                                                           & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 5U) 
                                                            >> 5U))] 
                                                        >> 
                                                        (0x1fU 
                                                         & VL_SHIFTL_III(10,32,32, 
                                                                         (0x1fU 
                                                                          & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 5U))))
                                                     : 
                                                    ((8U 
                                                      & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                      ? 
                                                     (((0U 
                                                        == 
                                                        (0x1fU 
                                                         & VL_SHIFTL_III(10,32,32, 
                                                                         (0x1fU 
                                                                          & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 5U)))
                                                        ? 0U
                                                        : 
                                                       (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[
                                                        (((IData)(0x1fU) 
                                                          + 
                                                          (0x3ffU 
                                                           & VL_SHIFTL_III(10,32,32, 
                                                                           (0x1fU 
                                                                            & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 5U))) 
                                                         >> 5U)] 
                                                        << 
                                                        ((IData)(0x20U) 
                                                         - 
                                                         (0x1fU 
                                                          & VL_SHIFTL_III(10,32,32, 
                                                                          (0x1fU 
                                                                           & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 5U))))) 
                                                      | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[
                                                         (0x1fU 
                                                          & (VL_SHIFTL_III(10,32,32, 
                                                                           (0x1fU 
                                                                            & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 5U) 
                                                             >> 5U))] 
                                                         >> 
                                                         (0x1fU 
                                                          & VL_SHIFTL_III(10,32,32, 
                                                                          (0x1fU 
                                                                           & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 5U))))
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                       ? 
                                                      (((0U 
                                                         == 
                                                         (0x1fU 
                                                          & VL_SHIFTL_III(10,32,32, 
                                                                          (0x1fU 
                                                                           & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 5U)))
                                                         ? 0U
                                                         : 
                                                        (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[
                                                         (((IData)(0x1fU) 
                                                           + 
                                                           (0x3ffU 
                                                            & VL_SHIFTL_III(10,32,32, 
                                                                            (0x1fU 
                                                                             & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 5U))) 
                                                          >> 5U)] 
                                                         << 
                                                         ((IData)(0x20U) 
                                                          - 
                                                          (0x1fU 
                                                           & VL_SHIFTL_III(10,32,32, 
                                                                           (0x1fU 
                                                                            & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 5U))))) 
                                                       | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[
                                                          (0x1fU 
                                                           & (VL_SHIFTL_III(10,32,32, 
                                                                            (0x1fU 
                                                                             & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 5U) 
                                                              >> 5U))] 
                                                          >> 
                                                          (0x1fU 
                                                           & VL_SHIFTL_III(10,32,32, 
                                                                           (0x1fU 
                                                                            & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 5U))))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                         ? 
                                                        (((0U 
                                                           == 
                                                           (0x1fU 
                                                            & VL_SHIFTL_III(10,32,32, 
                                                                            (0x1fU 
                                                                             & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 5U)))
                                                           ? 0U
                                                           : 
                                                          (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[
                                                           (((IData)(0x1fU) 
                                                             + 
                                                             (0x3ffU 
                                                              & VL_SHIFTL_III(10,32,32, 
                                                                              (0x1fU 
                                                                               & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 5U))) 
                                                            >> 5U)] 
                                                           << 
                                                           ((IData)(0x20U) 
                                                            - 
                                                            (0x1fU 
                                                             & VL_SHIFTL_III(10,32,32, 
                                                                             (0x1fU 
                                                                              & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 5U))))) 
                                                         | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[
                                                            (0x1fU 
                                                             & (VL_SHIFTL_III(10,32,32, 
                                                                              (0x1fU 
                                                                               & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 5U) 
                                                                >> 5U))] 
                                                            >> 
                                                            (0x1fU 
                                                             & VL_SHIFTL_III(10,32,32, 
                                                                             (0x1fU 
                                                                              & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)), 5U))))
                                                         : 0U)
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                         ? 0U
                                                         : vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_q)))))
                                                    : 
                                                   ((0x10U 
                                                     & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                     ? 0U
                                                     : 
                                                    ((8U 
                                                      & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                      ? 0U
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                        ? 0U
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                         ? vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q
                                                         : vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                        ? 0U
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                         ? 0x40801104U
                                                         : vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT__rdata_q))))))))
                                              : 0U)
                                          : ((0x100U 
                                              & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                              ? 0U : 
                                             ((0x80U 
                                               & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                               ? 0U
                                               : ((0x40U 
                                                   & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                   ? 0U
                                                   : 
                                                  ((0x20U 
                                                    & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                    ? 0U
                                                    : 
                                                   ((0x10U 
                                                     & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                     ? 
                                                    ((8U 
                                                      & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                      ? 0U
                                                      : 
                                                     ((4U 
                                                       & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))
                                                         ? vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q
                                                         : 0U)
                                                        : 0U)
                                                       : 0U))
                                                     : 0U))))))));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__wb_stage_i__DOT__instr_valid 
        = ((~ (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U] 
               >> 0xdU)) & ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[1U] 
                             >> 0x15U) & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__wb_stage_i__DOT____VdfgRegularize_h5fe00629_0_5)));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__lsu_valid_ex 
        = ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[5U] 
            >> 0xdU) & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__instr_valid));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__alu_jmp_id 
        = (1U & ((~ (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[3U] 
                     >> 5U)) & (IData)((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                        >> 0x34U))));
    if ((0x20U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[3U])) {
        cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl = 0x27d4400000100ULL;
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__bch_jmp_mux_sel = 1U;
    } else {
        cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
            = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int;
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__bch_jmp_mux_sel 
            = (3U & (IData)((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                             >> 0x22U)));
    }
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__sys_mret_insn_id 
        = (1U & ((~ (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[3U] 
                     >> 5U)) & (IData)((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                        >> 2U))));
    if (cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_en_gated) {
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
            = ((0x2000U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U])
                ? ((0x1000U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U])
                    ? ((~ vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[5U]) 
                       & ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[7U] 
                           << 0xeU) | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                       >> 0x12U))) : 
                   (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[5U] 
                    | ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[7U] 
                        << 0xeU) | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                    >> 0x12U)))) : 
               ((0x1000U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U])
                 ? vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[5U]
                 : vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[5U]));
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int = 1U;
        if ((1U & (~ (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U] 
                      >> 0xdU)))) {
            if ((1U & (~ (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U] 
                          >> 0xcU)))) {
                vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int = 0U;
            }
        }
    } else {
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int 
            = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[5U];
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int = 0U;
    }
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans_valid 
        = ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__lsu_valid_ex) 
           & (2U > (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__cnt_q)));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
        = ((1U & (IData)((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl 
                          >> 8U))) ? ((1U & (IData)(
                                                    (cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl 
                                                     >> 8U)))
                                       ? 0x27d4400000100ULL
                                       : cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl)
            : vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl);
    vlSelfRef.__VdfgRegularize_hd87f99a1_1_5 = ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__sys_mret_insn_id) 
                                                & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                                   >> 0x1eU));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__tselect_n 
        = ((1U > vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int)
            ? vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int
            : vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q);
    __Vfunc_csr_next_value__26__wdata = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int;
    __Vfunc_csr_next_value__26__Vfuncout = (0xffff0888U 
                                            & __Vfunc_csr_next_value__26__wdata);
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mie_n 
        = __Vfunc_csr_next_value__26__Vfuncout;
    __Vfunc_csr_next_value__12__wdata = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int;
    __Vfunc_csr_next_value__12__Vfuncout = (0xffffffc0U 
                                            & __Vfunc_csr_next_value__12__wdata);
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_n 
        = __Vfunc_csr_next_value__12__Vfuncout;
    __Vfunc_csr_next_value__19__wdata = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int;
    __Vfunc_csr_next_value__19__Vfuncout = __Vfunc_csr_next_value__19__wdata;
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__dscratch0_n 
        = __Vfunc_csr_next_value__19__Vfuncout;
    __Vfunc_csr_next_value__13__wdata = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int;
    __Vfunc_csr_next_value__13__Vfuncout = __Vfunc_csr_next_value__13__wdata;
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_n 
        = __Vfunc_csr_next_value__13__Vfuncout;
    __Vfunc_csr_next_value__20__wdata = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int;
    __Vfunc_csr_next_value__20__Vfuncout = __Vfunc_csr_next_value__20__wdata;
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__dscratch1_n 
        = __Vfunc_csr_next_value__20__Vfuncout;
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__tselect_we = 0U;
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__dscratch1_we = 0U;
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__dscratch0_we = 0U;
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_we = 0U;
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_we = 0U;
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_n 
        = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_q;
    if (((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
         & (0x320U == (0xfffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U])))) {
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mcountinhibit_n 
            = (0xdU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int);
    }
    if (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) {
        cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_we 
            = ((0x323U == (0xfffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U])) 
               | ((0x324U == (0xfffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U])) 
                  | ((0x325U == (0xfffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U])) 
                     | ((0x326U == (0xfffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U])) 
                        | ((0x327U == (0xfffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U])) 
                           | ((0x328U == (0xfffU & 
                                          vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U])) 
                              | ((0x329U == (0xfffU 
                                             & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U])) 
                                 | ((0x32aU == (0xfffU 
                                                & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U])) 
                                    | ((0x32bU == (0xfffU 
                                                   & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U])) 
                                       | ((0x32cU == 
                                           (0xfffU 
                                            & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U])) 
                                          | ((0x32dU 
                                              == (0xfffU 
                                                  & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U])) 
                                             | ((0x32eU 
                                                 == 
                                                 (0xfffU 
                                                  & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U])) 
                                                | ((0x32fU 
                                                    == 
                                                    (0xfffU 
                                                     & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U])) 
                                                   | ((0x330U 
                                                       == 
                                                       (0xfffU 
                                                        & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U])) 
                                                      | ((0x331U 
                                                          == 
                                                          (0xfffU 
                                                           & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U])) 
                                                         | ((0x332U 
                                                             == 
                                                             (0xfffU 
                                                              & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U])) 
                                                            | ((0x333U 
                                                                == 
                                                                (0xfffU 
                                                                 & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U])) 
                                                               | ((0x334U 
                                                                   == 
                                                                   (0xfffU 
                                                                    & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U])) 
                                                                  | ((0x335U 
                                                                      == 
                                                                      (0xfffU 
                                                                       & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U])) 
                                                                     | ((0x336U 
                                                                         == 
                                                                         (0xfffU 
                                                                          & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U])) 
                                                                        | ((0x337U 
                                                                            == 
                                                                            (0xfffU 
                                                                             & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U])) 
                                                                           | ((0x338U 
                                                                               == 
                                                                               (0xfffU 
                                                                                & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U])) 
                                                                              | ((0x339U 
                                                                                == 
                                                                                (0xfffU 
                                                                                & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U])) 
                                                                                | ((0x33aU 
                                                                                == 
                                                                                (0xfffU 
                                                                                & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U])) 
                                                                                | ((0x33bU 
                                                                                == 
                                                                                (0xfffU 
                                                                                & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U])) 
                                                                                | ((0x33cU 
                                                                                == 
                                                                                (0xfffU 
                                                                                & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U])) 
                                                                                | ((0x33dU 
                                                                                == 
                                                                                (0xfffU 
                                                                                & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U])) 
                                                                                | ((0x33eU 
                                                                                == 
                                                                                (0xfffU 
                                                                                & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U])) 
                                                                                | (0x33fU 
                                                                                == 
                                                                                (0xfffU 
                                                                                & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U]))))))))))))))))))))))))))))));
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mie_we = 0U;
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_we = 0U;
        if ((1U & (~ (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U] 
                      >> 0xbU)))) {
            if ((0x400U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U])) {
                if ((0x200U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U])) {
                    if ((0x100U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U])) {
                        if ((0x80U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U])) {
                            if ((1U & (~ (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                          >> 6U)))) {
                                if ((0x20U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U])) {
                                    if ((1U & (~ (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                                  >> 4U)))) {
                                        if ((1U & (~ 
                                                   (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                                    >> 3U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                                     >> 2U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U]))) {
                                                        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__tselect_we = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                    if ((0x10U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U])) {
                                        if ((1U & (~ 
                                                   (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                                    >> 3U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                                     >> 2U)))) {
                                                if (
                                                    (2U 
                                                     & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U])) {
                                                    if (
                                                        (1U 
                                                         & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U])) {
                                                        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__dscratch1_we = 1U;
                                                    }
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U]))) {
                                                        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__dscratch0_we = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            if ((1U & (~ (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U] 
                          >> 0xaU)))) {
                if ((1U & (~ (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U] 
                              >> 9U)))) {
                    if ((1U & (~ (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                  >> 8U)))) {
                        if ((1U & (~ (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                      >> 7U)))) {
                            if ((1U & (~ (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                          >> 6U)))) {
                                if ((1U & (~ (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                              >> 5U)))) {
                                    if ((0x10U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U])) {
                                        if ((1U & (~ 
                                                   (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                                    >> 3U)))) {
                                            if ((4U 
                                                 & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U])) {
                                                if (
                                                    (2U 
                                                     & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U])) {
                                                    if (
                                                        (1U 
                                                         & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U])) {
                                                        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_we = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                if ((0x200U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U])) {
                    if ((0x100U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U])) {
                        if ((1U & (~ (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                      >> 7U)))) {
                            if ((0x40U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U])) {
                                if ((1U & (~ (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                              >> 5U)))) {
                                    if ((1U & (~ (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                                  >> 4U)))) {
                                        if ((1U & (~ 
                                                   (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                                    >> 3U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                                     >> 2U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U]))) {
                                                        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mscratch_we = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                            if ((1U & (~ (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                          >> 6U)))) {
                                if ((1U & (~ (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                              >> 5U)))) {
                                    if ((1U & (~ (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                                  >> 4U)))) {
                                        if ((1U & (~ 
                                                   (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                                    >> 3U)))) {
                                            if ((4U 
                                                 & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U])) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U]))) {
                                                        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mie_we = 1U;
                                                    }
                                                }
                                            }
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                                     >> 2U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                                         >> 1U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U]))) {
                                                        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_we = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_we = 0U;
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mie_we = 0U;
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_we = 0U;
    }
    if ((0x40U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[1U])) {
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__priv_lvl_we = 1U;
        if ((1U & (~ (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[4U] 
                      >> 0xfU)))) {
            vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_we = 1U;
        }
    } else if ((0x100U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[1U])) {
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__priv_lvl_we = 1U;
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_we = 1U;
    } else if ((0x80U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[1U])) {
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__priv_lvl_we = 1U;
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_we = 1U;
    }
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_41 
        = ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
           & (0xb1fU == (0xfffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U])));
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_40 
        = ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
           & (0xb1eU == (0xfffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U])));
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_39 
        = ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
           & (0xb1dU == (0xfffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U])));
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_38 
        = ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
           & (0xb1cU == (0xfffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U])));
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_37 
        = ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
           & (0xb1bU == (0xfffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U])));
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_36 
        = ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
           & (0xb1aU == (0xfffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U])));
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_35 
        = ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
           & (0xb19U == (0xfffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U])));
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_34 
        = ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
           & (0xb18U == (0xfffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U])));
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_33 
        = ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
           & (0xb17U == (0xfffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U])));
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_32 
        = ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
           & (0xb16U == (0xfffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U])));
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_31 
        = ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
           & (0xb15U == (0xfffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U])));
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_30 
        = ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
           & (0xb14U == (0xfffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U])));
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_29 
        = ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
           & (0xb13U == (0xfffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U])));
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_28 
        = ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
           & (0xb12U == (0xfffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U])));
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_27 
        = ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
           & (0xb11U == (0xfffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U])));
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_26 
        = ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
           & (0xb10U == (0xfffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U])));
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_25 
        = ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
           & (0xb0fU == (0xfffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U])));
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_24 
        = ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
           & (0xb0eU == (0xfffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U])));
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_23 
        = ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
           & (0xb0dU == (0xfffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U])));
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_22 
        = ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
           & (0xb0cU == (0xfffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U])));
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_21 
        = ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
           & (0xb0bU == (0xfffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U])));
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_20 
        = ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
           & (0xb0aU == (0xfffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U])));
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_19 
        = ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
           & (0xb09U == (0xfffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U])));
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_18 
        = ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
           & (0xb08U == (0xfffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U])));
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_17 
        = ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
           & (0xb07U == (0xfffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U])));
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_16 
        = ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
           & (0xb06U == (0xfffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U])));
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_15 
        = ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
           & (0xb05U == (0xfffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U])));
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_14 
        = ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
           & (0xb04U == (0xfffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U])));
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_9 
        = ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
           & (0xb01U == (0xfffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U])));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_12 
        = ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
           & (0xb03U == (0xfffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U])));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_10 
        = ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
           & (0xb02U == (0xfffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U])));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_6 
        = ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
           & (0xb00U == (0xfffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U])));
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT____VdfgRegularize_h300e3022_0_8 
        = ((0U != (0x1fU & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U] 
                            >> 0x12U))) & (IData)((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                                   >> 0x1aU)));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_n[0U] 
        = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[0U];
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_n[1U] 
        = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[1U];
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_n[2U] 
        = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[2U];
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_n[3U] 
        = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[3U];
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_n[4U] 
        = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[4U];
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_n[5U] 
        = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[5U];
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_n[6U] 
        = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[6U];
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_n[7U] 
        = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[7U];
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_n[8U] 
        = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[8U];
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_n[9U] 
        = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[9U];
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_n[0xaU] 
        = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[0xaU];
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_n[0xbU] 
        = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[0xbU];
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_n[0xcU] 
        = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[0xcU];
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_n[0xdU] 
        = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[0xdU];
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_n[0xeU] 
        = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[0xeU];
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_n[0xfU] 
        = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[0xfU];
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_n[0x10U] 
        = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[0x10U];
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_n[0x11U] 
        = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[0x11U];
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_n[0x12U] 
        = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[0x12U];
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_n[0x13U] 
        = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[0x13U];
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_n[0x14U] 
        = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[0x14U];
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_n[0x15U] 
        = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[0x15U];
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_n[0x16U] 
        = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[0x16U];
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_n[0x17U] 
        = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[0x17U];
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_n[0x18U] 
        = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[0x18U];
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_n[0x19U] 
        = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[0x19U];
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_n[0x1aU] 
        = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[0x1aU];
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_n[0x1bU] 
        = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[0x1bU];
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_n[0x1cU] 
        = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[0x1cU];
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_n[0x1dU] 
        = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[0x1dU];
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_n[0x1eU] 
        = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[0x1eU];
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_n[0x1fU] 
        = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_q[0x1fU];
    if (cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_we) {
        VL_ASSIGNSEL_WI(1024,32,(0x3ffU & VL_SHIFTL_III(10,32,32, 
                                                        (0x1fU 
                                                         & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U]), 5U)), vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmevent_n, vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_wdata_int);
    }
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_74 
        = ((~ (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_12)) 
           & ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
              & (0xb83U == (0xfffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U]))));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_75 
        = ((~ (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_10)) 
           & ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
              & (0xb82U == (0xfffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U]))));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_lower 
        = (((IData)(cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_41) 
            << 0x1fU) | (((IData)(cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_40) 
                          << 0x1eU) | (((IData)(cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_39) 
                                        << 0x1dU) | 
                                       (((IData)(cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_38) 
                                         << 0x1cU) 
                                        | (((IData)(cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_37) 
                                            << 0x1bU) 
                                           | (((IData)(cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_36) 
                                               << 0x1aU) 
                                              | (((IData)(cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_35) 
                                                  << 0x19U) 
                                                 | (((IData)(cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_34) 
                                                     << 0x18U) 
                                                    | (((IData)(cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_33) 
                                                        << 0x17U) 
                                                       | (((IData)(cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_32) 
                                                           << 0x16U) 
                                                          | (((IData)(cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_31) 
                                                              << 0x15U) 
                                                             | (((IData)(cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_30) 
                                                                 << 0x14U) 
                                                                | (((IData)(cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_29) 
                                                                    << 0x13U) 
                                                                   | (((IData)(cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_28) 
                                                                       << 0x12U) 
                                                                      | (((IData)(cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_27) 
                                                                          << 0x11U) 
                                                                         | (((IData)(cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_26) 
                                                                             << 0x10U) 
                                                                            | (((IData)(cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_25) 
                                                                                << 0xfU) 
                                                                               | (((IData)(cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_24) 
                                                                                << 0xeU) 
                                                                                | (((IData)(cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_23) 
                                                                                << 0xdU) 
                                                                                | (((IData)(cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_22) 
                                                                                << 0xcU) 
                                                                                | (((IData)(cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_21) 
                                                                                << 0xbU) 
                                                                                | (((IData)(cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_20) 
                                                                                << 0xaU) 
                                                                                | (((IData)(cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_19) 
                                                                                << 9U) 
                                                                                | (((IData)(cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_18) 
                                                                                << 8U) 
                                                                                | (((IData)(cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_17) 
                                                                                << 7U) 
                                                                                | (((IData)(cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_16) 
                                                                                << 6U) 
                                                                                | (((IData)(cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_15) 
                                                                                << 5U) 
                                                                                | (((IData)(cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_14) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_12) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_10) 
                                                                                << 2U) 
                                                                                | (((IData)(cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_9) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_6))))))))))))))))))))))))))))))));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_76 
        = ((~ (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_6)) 
           & ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
              & (0xb80U == (0xfffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U]))));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_ex_match 
        = (((((0x1fU & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[3U] 
                        >> 0x13U)) == (0x1fU & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                                >> 0x12U))) 
             & (IData)(cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT____VdfgRegularize_h300e3022_0_8)) 
            << 1U) | ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_ex_jalr_match) 
                      & (IData)((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                 >> 0x19U))));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_wb_match 
        = (((((0x1fU & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[7U] 
                        >> 0x12U)) == (0x1fU & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                                >> 0x12U))) 
             & (IData)(cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT____VdfgRegularize_h300e3022_0_8)) 
            << 1U) | ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_wb_jalr_match) 
                      & (IData)((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                 >> 0x19U))));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_write_upper 
        = ((((~ (IData)(cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_41)) 
             & ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                & (0xb9fU == (0xfffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U])))) 
            << 0x1fU) | ((((~ (IData)(cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_40)) 
                           & ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                              & (0xb9eU == (0xfffU 
                                            & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U])))) 
                          << 0x1eU) | ((((~ (IData)(cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_39)) 
                                         & ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                            & (0xb9dU 
                                               == (0xfffU 
                                                   & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U])))) 
                                        << 0x1dU) | 
                                       ((((~ (IData)(cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_38)) 
                                          & ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                             & (0xb9cU 
                                                == 
                                                (0xfffU 
                                                 & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U])))) 
                                         << 0x1cU) 
                                        | ((((~ (IData)(cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_37)) 
                                             & ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                & (0xb9bU 
                                                   == 
                                                   (0xfffU 
                                                    & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U])))) 
                                            << 0x1bU) 
                                           | ((((~ (IData)(cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_36)) 
                                                & ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                   & (0xb9aU 
                                                      == 
                                                      (0xfffU 
                                                       & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U])))) 
                                               << 0x1aU) 
                                              | ((((~ (IData)(cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_35)) 
                                                   & ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                      & (0xb99U 
                                                         == 
                                                         (0xfffU 
                                                          & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U])))) 
                                                  << 0x19U) 
                                                 | ((((~ (IData)(cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_34)) 
                                                      & ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                         & (0xb98U 
                                                            == 
                                                            (0xfffU 
                                                             & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U])))) 
                                                     << 0x18U) 
                                                    | ((((~ (IData)(cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_33)) 
                                                         & ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                            & (0xb97U 
                                                               == 
                                                               (0xfffU 
                                                                & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U])))) 
                                                        << 0x17U) 
                                                       | ((((~ (IData)(cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_32)) 
                                                            & ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                               & (0xb96U 
                                                                  == 
                                                                  (0xfffU 
                                                                   & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U])))) 
                                                           << 0x16U) 
                                                          | ((((~ (IData)(cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_31)) 
                                                               & ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                                  & (0xb95U 
                                                                     == 
                                                                     (0xfffU 
                                                                      & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U])))) 
                                                              << 0x15U) 
                                                             | ((((~ (IData)(cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_30)) 
                                                                  & ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                                     & (0xb94U 
                                                                        == 
                                                                        (0xfffU 
                                                                         & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U])))) 
                                                                 << 0x14U) 
                                                                | ((((~ (IData)(cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_29)) 
                                                                     & ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                                        & (0xb93U 
                                                                           == 
                                                                           (0xfffU 
                                                                            & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U])))) 
                                                                    << 0x13U) 
                                                                   | ((((~ (IData)(cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_28)) 
                                                                        & ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                                           & (0xb92U 
                                                                              == 
                                                                              (0xfffU 
                                                                               & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U])))) 
                                                                       << 0x12U) 
                                                                      | ((((~ (IData)(cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_27)) 
                                                                           & ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                                              & (0xb91U 
                                                                                == 
                                                                                (0xfffU 
                                                                                & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U])))) 
                                                                          << 0x11U) 
                                                                         | ((((~ (IData)(cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_26)) 
                                                                              & ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                                                & (0xb90U 
                                                                                == 
                                                                                (0xfffU 
                                                                                & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U])))) 
                                                                             << 0x10U) 
                                                                            | ((((~ (IData)(cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_25)) 
                                                                                & ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                                                & (0xb8fU 
                                                                                == 
                                                                                (0xfffU 
                                                                                & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U])))) 
                                                                                << 0xfU) 
                                                                               | ((((~ (IData)(cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_24)) 
                                                                                & ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                                                & (0xb8eU 
                                                                                == 
                                                                                (0xfffU 
                                                                                & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U])))) 
                                                                                << 0xeU) 
                                                                                | ((((~ (IData)(cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_23)) 
                                                                                & ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                                                & (0xb8dU 
                                                                                == 
                                                                                (0xfffU 
                                                                                & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U])))) 
                                                                                << 0xdU) 
                                                                                | ((((~ (IData)(cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_22)) 
                                                                                & ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                                                & (0xb8cU 
                                                                                == 
                                                                                (0xfffU 
                                                                                & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U])))) 
                                                                                << 0xcU) 
                                                                                | ((((~ (IData)(cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_21)) 
                                                                                & ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                                                & (0xb8bU 
                                                                                == 
                                                                                (0xfffU 
                                                                                & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U])))) 
                                                                                << 0xbU) 
                                                                                | ((((~ (IData)(cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_20)) 
                                                                                & ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                                                & (0xb8aU 
                                                                                == 
                                                                                (0xfffU 
                                                                                & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U])))) 
                                                                                << 0xaU) 
                                                                                | ((((~ (IData)(cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_19)) 
                                                                                & ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                                                & (0xb89U 
                                                                                == 
                                                                                (0xfffU 
                                                                                & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U])))) 
                                                                                << 9U) 
                                                                                | ((((~ (IData)(cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_18)) 
                                                                                & ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                                                & (0xb88U 
                                                                                == 
                                                                                (0xfffU 
                                                                                & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U])))) 
                                                                                << 8U) 
                                                                                | ((((~ (IData)(cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_17)) 
                                                                                & ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                                                & (0xb87U 
                                                                                == 
                                                                                (0xfffU 
                                                                                & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U])))) 
                                                                                << 7U) 
                                                                                | ((((~ (IData)(cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_16)) 
                                                                                & ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                                                & (0xb86U 
                                                                                == 
                                                                                (0xfffU 
                                                                                & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U])))) 
                                                                                << 6U) 
                                                                                | ((((~ (IData)(cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_15)) 
                                                                                & ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                                                & (0xb85U 
                                                                                == 
                                                                                (0xfffU 
                                                                                & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U])))) 
                                                                                << 5U) 
                                                                                | ((((~ (IData)(cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_14)) 
                                                                                & ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                                                & (0xb84U 
                                                                                == 
                                                                                (0xfffU 
                                                                                & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U])))) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_74) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_75) 
                                                                                << 2U) 
                                                                                | ((((~ (IData)(cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_9)) 
                                                                                & ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_we_int) 
                                                                                & (0xb81U 
                                                                                == 
                                                                                (0xfffU 
                                                                                & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U])))) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_76))))))))))))))))))))))))))))))));
}

VL_INLINE_OPT void Vcv32e40x_gvsoc_core_lint_top___024root___act_sequent__TOP__1(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcv32e40x_gvsoc_core_lint_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_gvsoc_core_lint_top___024root___act_sequent__TOP__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__be 
        = ((0U == (3U & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[1U] 
                         >> 0xbU))) ? ((0x4000U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[1U])
                                        ? ((0x2000U 
                                            & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[1U])
                                            ? 8U : 4U)
                                        : ((0x2000U 
                                            & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[1U])
                                            ? 2U : 1U))
            : ((1U == (3U & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[1U] 
                             >> 0xbU))) ? ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__split_q)
                                            ? 1U : 
                                           ((0x4000U 
                                             & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[1U])
                                             ? ((0x2000U 
                                                 & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[1U])
                                                 ? 8U
                                                 : 0xcU)
                                             : ((0x2000U 
                                                 & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[1U])
                                                 ? 6U
                                                 : 3U)))
                : ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__split_q)
                    ? ((0x4000U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[1U])
                        ? ((0x2000U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[1U])
                            ? 7U : 3U) : ((0x2000U 
                                           & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[1U])
                                           ? 1U : 0U))
                    : ((0x4000U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[1U])
                        ? ((0x2000U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[1U])
                            ? 8U : 0xcU) : ((0x2000U 
                                             & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[1U])
                                             ? 0xeU
                                             : 0xfU)))));
}

VL_INLINE_OPT void Vcv32e40x_gvsoc_core_lint_top___024root___act_sequent__TOP__2(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcv32e40x_gvsoc_core_lint_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_gvsoc_core_lint_top___024root___act_sequent__TOP__2\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_interruptible 
        = (1U & (~ ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_q) 
                    | (IData)((4U == (0x804U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__dcsr))))));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgRegularize_ha32e4db6_0_26 
        = ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgRegularize_ha32e4db6_0_12) 
           & (IData)((((0xc0000U == (0xc0000U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[1U])) 
                       & (~ (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__dcsr 
                             >> 0xfU))) & (~ (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_q)))));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[3U] 
        = ((0xffffc1ffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[3U]) 
           | (0xfffffe00U & ((0x2000U & (((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_q) 
                                          << 0xdU) 
                                         | (0xffffe000U 
                                            & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__dcsr 
                                               << 0xbU)))) 
                             | ((0x1000U & ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_fsm_cs) 
                                            << 0xcU)) 
                                | ((0x800U & ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_fsm_cs) 
                                              << 0xaU)) 
                                   | ((0x400U & ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_fsm_cs) 
                                                 << 8U)) 
                                      | (((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__irq_wu_ctrl) 
                                          | ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__nmi_pending_q) 
                                             | (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_async_debug))) 
                                         << 9U)))))));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgRegularize_ha32e4db6_0_25 
        = ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__ebreak_in_wb) 
           & ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__dcsr 
               >> 0xfU) & ((~ (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_q)) 
                           & (0xc0000U == (0xc0000U 
                                           & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[1U])))));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_sync_debug 
        = ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__trigger_match_in_wb) 
           | ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgRegularize_ha32e4db6_0_25) 
              | (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgRegularize_ha32e4db6_0_21)));
}

VL_INLINE_OPT void Vcv32e40x_gvsoc_core_lint_top___024root___act_sequent__TOP__3(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcv32e40x_gvsoc_core_lint_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_gvsoc_core_lint_top___024root___act_sequent__TOP__3\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode 
        = ((0x1fffffffffe0ULL & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode) 
           | (IData)((IData)((0x1fU & (((0xfU & (IData)(
                                                        (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode 
                                                         >> 0x1dU))) 
                                        - (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__instr_cnt_q)) 
                                       - (IData)(1U))))));
}

VL_INLINE_OPT void Vcv32e40x_gvsoc_core_lint_top___024root___act_sequent__TOP__4(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcv32e40x_gvsoc_core_lint_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_gvsoc_core_lint_top___024root___act_sequent__TOP__4\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<6>/*191:0*/ __Vtemp_1;
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<4>/*127:0*/ __Vtemp_11;
    VlWide<5>/*159:0*/ __Vtemp_16;
    VlWide<6>/*191:0*/ __Vtemp_21;
    // Body
    __Vtemp_2[0U] = (IData)((((QData)((IData)((0x3fU 
                                               & (((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
                                                    << 0x10U) 
                                                   | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
                                                      >> 0x10U)) 
                                                  + 
                                                  (1U 
                                                   & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                                      >> 1U)))))) 
                              << 0x36U) | (((QData)((IData)(
                                                            (0x3fU 
                                                             & (((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
                                                                  << 0x16U) 
                                                                 | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
                                                                    >> 0xaU)) 
                                                                + 
                                                                (1U 
                                                                 & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[0xaU]))))) 
                                            << 0x30U) 
                                           | (((QData)((IData)(
                                                               (0x3fU 
                                                                & (((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
                                                                     << 0x1cU) 
                                                                    | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
                                                                       >> 4U)) 
                                                                   + 
                                                                   (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[9U] 
                                                                    >> 0x1fU))))) 
                                               << 0x2aU) 
                                              | (((QData)((IData)(
                                                                  (0x3fU 
                                                                   & (((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
                                                                        << 2U) 
                                                                       | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U] 
                                                                          >> 0x1eU)) 
                                                                      + 
                                                                      (1U 
                                                                       & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[9U] 
                                                                          >> 0x1eU)))))) 
                                                  << 0x24U) 
                                                 | (((QData)((IData)(
                                                                     (0x3fU 
                                                                      & (((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U] 
                                                                           << 8U) 
                                                                          | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U] 
                                                                             >> 0x18U)) 
                                                                         + 
                                                                         (1U 
                                                                          & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[9U] 
                                                                             >> 0x1dU)))))) 
                                                     << 0x1eU) 
                                                    | (QData)((IData)(
                                                                      ((0x3f000000U 
                                                                        & ((((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U] 
                                                                              << 0xeU) 
                                                                             | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U] 
                                                                                >> 0x12U)) 
                                                                            + 
                                                                            (1U 
                                                                             & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[9U] 
                                                                                >> 0x1cU))) 
                                                                           << 0x18U)) 
                                                                       | ((0xfc0000U 
                                                                           & ((((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U] 
                                                                                << 0x14U) 
                                                                                | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U] 
                                                                                >> 0xcU)) 
                                                                               + 
                                                                               (1U 
                                                                                & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[9U] 
                                                                                >> 0x1bU))) 
                                                                              << 0x12U)) 
                                                                          | ((0x3f000U 
                                                                              & ((((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U] 
                                                                                << 0x1aU) 
                                                                                | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U] 
                                                                                >> 6U)) 
                                                                                + 
                                                                                (1U 
                                                                                & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[9U] 
                                                                                >> 0x1aU))) 
                                                                                << 0xcU)) 
                                                                             | ((0xfc0U 
                                                                                & ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U] 
                                                                                + 
                                                                                (1U 
                                                                                & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[9U] 
                                                                                >> 0x19U))) 
                                                                                << 6U)) 
                                                                                | (1U 
                                                                                & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[9U] 
                                                                                >> 0x18U))))))))))))));
    __Vtemp_2[1U] = (((((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
                         << 0xaU) | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
                                     >> 0x16U)) + (1U 
                                                   & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                                      >> 2U))) 
                      << 0x1cU) | (IData)(((((QData)((IData)(
                                                             (0x3fU 
                                                              & (((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
                                                                   << 0x10U) 
                                                                  | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
                                                                     >> 0x10U)) 
                                                                 + 
                                                                 (1U 
                                                                  & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                                                     >> 1U)))))) 
                                             << 0x36U) 
                                            | (((QData)((IData)(
                                                                (0x3fU 
                                                                 & (((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
                                                                      << 0x16U) 
                                                                     | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
                                                                        >> 0xaU)) 
                                                                    + 
                                                                    (1U 
                                                                     & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[0xaU]))))) 
                                                << 0x30U) 
                                               | (((QData)((IData)(
                                                                   (0x3fU 
                                                                    & (((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
                                                                         << 0x1cU) 
                                                                        | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
                                                                           >> 4U)) 
                                                                       + 
                                                                       (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[9U] 
                                                                        >> 0x1fU))))) 
                                                   << 0x2aU) 
                                                  | (((QData)((IData)(
                                                                      (0x3fU 
                                                                       & (((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
                                                                            << 2U) 
                                                                           | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U] 
                                                                              >> 0x1eU)) 
                                                                          + 
                                                                          (1U 
                                                                           & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[9U] 
                                                                              >> 0x1eU)))))) 
                                                      << 0x24U) 
                                                     | (((QData)((IData)(
                                                                         (0x3fU 
                                                                          & (((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U] 
                                                                               << 8U) 
                                                                              | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U] 
                                                                                >> 0x18U)) 
                                                                             + 
                                                                             (1U 
                                                                              & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[9U] 
                                                                                >> 0x1dU)))))) 
                                                         << 0x1eU) 
                                                        | (QData)((IData)(
                                                                          ((0x3f000000U 
                                                                            & ((((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U] 
                                                                                << 0xeU) 
                                                                                | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U] 
                                                                                >> 0x12U)) 
                                                                                + 
                                                                                (1U 
                                                                                & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[9U] 
                                                                                >> 0x1cU))) 
                                                                               << 0x18U)) 
                                                                           | ((0xfc0000U 
                                                                               & ((((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U] 
                                                                                << 0x14U) 
                                                                                | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U] 
                                                                                >> 0xcU)) 
                                                                                + 
                                                                                (1U 
                                                                                & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[9U] 
                                                                                >> 0x1bU))) 
                                                                                << 0x12U)) 
                                                                              | ((0x3f000U 
                                                                                & ((((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U] 
                                                                                << 0x1aU) 
                                                                                | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U] 
                                                                                >> 6U)) 
                                                                                + 
                                                                                (1U 
                                                                                & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[9U] 
                                                                                >> 0x1aU))) 
                                                                                << 0xcU)) 
                                                                                | ((0xfc0U 
                                                                                & ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U] 
                                                                                + 
                                                                                (1U 
                                                                                & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[9U] 
                                                                                >> 0x19U))) 
                                                                                << 6U)) 
                                                                                | (1U 
                                                                                & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[9U] 
                                                                                >> 0x18U))))))))))))) 
                                           >> 0x20U)));
    __Vtemp_5[2U] = ((0xfc000U & ((((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U] 
                                     << 0x18U) | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U] 
                                                  >> 8U)) 
                                   + (1U & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                            >> 5U))) 
                                  << 0xeU)) | ((0x3f00U 
                                                & ((((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U] 
                                                      << 0x1eU) 
                                                     | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U] 
                                                        >> 2U)) 
                                                    + 
                                                    (1U 
                                                     & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                                        >> 4U))) 
                                                   << 8U)) 
                                               | ((0xfcU 
                                                   & ((((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U] 
                                                         << 4U) 
                                                        | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
                                                           >> 0x1cU)) 
                                                       + 
                                                       (1U 
                                                        & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                                           >> 3U))) 
                                                      << 2U)) 
                                                  | (3U 
                                                     & ((((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
                                                           << 0xaU) 
                                                          | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
                                                             >> 0x16U)) 
                                                         + 
                                                         (1U 
                                                          & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                                             >> 2U))) 
                                                        >> 4U)))));
    __Vtemp_11[3U] = ((0xfc0000U & ((((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3U] 
                                       << 0x14U) | 
                                      (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3U] 
                                       >> 0xcU)) + 
                                     (1U & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                            >> 0xbU))) 
                                    << 0x12U)) | ((0x3f000U 
                                                   & ((((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3U] 
                                                         << 0x1aU) 
                                                        | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3U] 
                                                           >> 6U)) 
                                                       + 
                                                       (1U 
                                                        & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                                           >> 0xaU))) 
                                                      << 0xcU)) 
                                                  | ((0xfc0U 
                                                      & ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3U] 
                                                          + 
                                                          (1U 
                                                           & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                                              >> 9U))) 
                                                         << 6U)) 
                                                     | (0x3fU 
                                                        & (((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U] 
                                                             << 6U) 
                                                            | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U] 
                                                               >> 0x1aU)) 
                                                           + 
                                                           (1U 
                                                            & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                                               >> 8U)))))));
    __Vtemp_16[4U] = ((0x3f0000U & ((((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U] 
                                       << 0x16U) | 
                                      (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U] 
                                       >> 0xaU)) + 
                                     (1U & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                            >> 0x10U))) 
                                    << 0x10U)) | ((0xfc00U 
                                                   & ((((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U] 
                                                         << 0x1cU) 
                                                        | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U] 
                                                           >> 4U)) 
                                                       + 
                                                       (1U 
                                                        & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                                           >> 0xfU))) 
                                                      << 0xaU)) 
                                                  | ((0x3f0U 
                                                      & ((((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U] 
                                                            << 2U) 
                                                           | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3U] 
                                                              >> 0x1eU)) 
                                                          + 
                                                          (1U 
                                                           & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                                              >> 0xeU))) 
                                                         << 4U)) 
                                                     | (0xfU 
                                                        & ((((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3U] 
                                                              << 8U) 
                                                             | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3U] 
                                                                >> 0x18U)) 
                                                            + 
                                                            (1U 
                                                             & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                                                >> 0xdU))) 
                                                           >> 2U)))));
    __Vtemp_21[5U] = ((0xfc000U & ((((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U] 
                                      << 0x18U) | (
                                                   vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U] 
                                                   >> 8U)) 
                                    + (1U & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                             >> 0x15U))) 
                                   << 0xeU)) | ((0x3f00U 
                                                 & ((((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U] 
                                                       << 0x1eU) 
                                                      | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U] 
                                                         >> 2U)) 
                                                     + 
                                                     (1U 
                                                      & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                                         >> 0x14U))) 
                                                    << 8U)) 
                                                | ((0xfcU 
                                                    & ((((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U] 
                                                          << 4U) 
                                                         | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U] 
                                                            >> 0x1cU)) 
                                                        + 
                                                        (1U 
                                                         & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                                            >> 0x13U))) 
                                                       << 2U)) 
                                                   | (3U 
                                                      & ((((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U] 
                                                            << 0xaU) 
                                                           | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U] 
                                                              >> 0x16U)) 
                                                          + 
                                                          (1U 
                                                           & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                                              >> 0x12U))) 
                                                         >> 4U)))));
    __Vtemp_1[2U] = (((((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U] 
                         << 0xcU) | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U] 
                                     >> 0x14U)) + (1U 
                                                   & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                                      >> 7U))) 
                      << 0x1aU) | ((0x3f00000U & ((
                                                   ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U] 
                                                     << 0x12U) 
                                                    | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U] 
                                                       >> 0xeU)) 
                                                   + 
                                                   (1U 
                                                    & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                                       >> 6U))) 
                                                  << 0x14U)) 
                                   | __Vtemp_5[2U]));
    __Vtemp_1[3U] = (((((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3U] 
                         << 8U) | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3U] 
                                   >> 0x18U)) + (1U 
                                                 & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                                    >> 0xdU))) 
                      << 0x1eU) | ((0x3f000000U & (
                                                   (((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3U] 
                                                      << 0xeU) 
                                                     | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3U] 
                                                        >> 0x12U)) 
                                                    + 
                                                    (1U 
                                                     & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                                        >> 0xcU))) 
                                                   << 0x18U)) 
                                   | __Vtemp_11[3U]));
    __Vtemp_1[4U] = (((((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U] 
                         << 0xaU) | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U] 
                                     >> 0x16U)) + (1U 
                                                   & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                                      >> 0x12U))) 
                      << 0x1cU) | ((0xfc00000U & ((
                                                   ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U] 
                                                     << 0x10U) 
                                                    | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U] 
                                                       >> 0x10U)) 
                                                   + 
                                                   (1U 
                                                    & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                                       >> 0x11U))) 
                                                  << 0x16U)) 
                                   | __Vtemp_16[4U]));
    __Vtemp_1[5U] = (((((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U] 
                         << 0xcU) | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U] 
                                     >> 0x14U)) + (1U 
                                                   & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                                      >> 0x17U))) 
                      << 0x1aU) | ((0x3f00000U & ((
                                                   ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U] 
                                                     << 0x12U) 
                                                    | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U] 
                                                       >> 0xeU)) 
                                                   + 
                                                   (1U 
                                                    & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                                       >> 0x16U))) 
                                                  << 0x14U)) 
                                   | __Vtemp_21[5U]));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U] 
        = __Vtemp_2[0U];
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
        = __Vtemp_2[1U];
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U] 
        = __Vtemp_1[2U];
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3U] 
        = __Vtemp_1[3U];
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U] 
        = __Vtemp_1[4U];
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U] 
        = __Vtemp_1[5U];
}

VL_INLINE_OPT void Vcv32e40x_gvsoc_core_lint_top___024root___act_sequent__TOP__5(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcv32e40x_gvsoc_core_lint_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_gvsoc_core_lint_top___024root___act_sequent__TOP__5\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_byp 
        = ((0x3fff3U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_byp) 
           | ((8U & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_byp 
                     >> 1U)) | ((IData)((0x200180U 
                                         == (0x200180U 
                                             & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[1U]))) 
                                << 2U)));
}

VL_INLINE_OPT void Vcv32e40x_gvsoc_core_lint_top___024root___act_sequent__TOP__6(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcv32e40x_gvsoc_core_lint_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_gvsoc_core_lint_top___024root___act_sequent__TOP__6\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT____VdfgRegularize_h39df9a1d_1_1 
        = ((0U == (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__cnt_q))
            ? (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__count_up)
            : ((1U != (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__cnt_q)) 
               | (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__count_up)));
}

VL_INLINE_OPT void Vcv32e40x_gvsoc_core_lint_top___024root___act_sequent__TOP__7(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcv32e40x_gvsoc_core_lint_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_gvsoc_core_lint_top___024root___act_sequent__TOP__7\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_valid_gated 
        = ((0U >= (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_flush_q)) 
           & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_resp_valid));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__wptr_n 
        = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__wptr;
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_int 
        = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_q;
    if (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_valid_gated) {
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__wptr_n 
            = ((2U > (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__wptr))
                ? (3U & ((IData)(1U) + (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__wptr)))
                : 0U);
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____Vlvbound_h0f2080d3__0 = 1U;
        if ((2U >= (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__wptr))) {
            vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_int 
                = (((~ ((IData)(1U) << (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__wptr))) 
                    & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_int)) 
                   | (7U & ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____Vlvbound_h0f2080d3__0) 
                            << (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__wptr))));
        }
    }
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid 
        = ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____VdfgRegularize_h16c80b4c_4_0) 
           | (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_valid_gated));
}

VL_INLINE_OPT void Vcv32e40x_gvsoc_core_lint_top___024root___act_sequent__TOP__8(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcv32e40x_gvsoc_core_lint_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_gvsoc_core_lint_top___024root___act_sequent__TOP__8\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__next_cnt 
        = (3U & ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__count_up)
                  ? ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__wpt_resp_valid)
                      ? (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__cnt_q)
                      : ((IData)(1U) + (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__cnt_q)))
                  : ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__wpt_resp_valid)
                      ? ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__cnt_q) 
                         - (IData)(1U)) : (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__cnt_q))));
}

VL_INLINE_OPT void Vcv32e40x_gvsoc_core_lint_top___024root___act_sequent__TOP__9(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcv32e40x_gvsoc_core_lint_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_gvsoc_core_lint_top___024root___act_sequent__TOP__9\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__jump_taken_id 
        = ((~ (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__branch_taken_q)) 
           & (((~ ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[4U] 
                    >> 0x17U) | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_byp 
                                 >> 0xcU))) & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__jmp_id)) 
              | (((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__jmp_id) 
                  & ((~ (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_byp 
                         >> 0xaU)) & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[4U] 
                                      >> 0x17U))) | 
                 ((~ (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_byp 
                      >> 0xaU)) & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__sys_mret_id)))));
}

extern const VlUnpacked<CData/*1:0*/, 16> Vcv32e40x_gvsoc_core_lint_top__ConstPool__TABLE_h3daa4583_0;
extern const VlUnpacked<CData/*1:0*/, 16> Vcv32e40x_gvsoc_core_lint_top__ConstPool__TABLE_h4b81ca1e_0;

VL_INLINE_OPT void Vcv32e40x_gvsoc_core_lint_top___024root___act_sequent__TOP__10(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcv32e40x_gvsoc_core_lint_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_gvsoc_core_lint_top___024root___act_sequent__TOP__10\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*3:0*/ __Vtableidx7;
    __Vtableidx7 = 0;
    // Body
    __Vtableidx7 = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__be;
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__lsu_addr_high_lsb 
        = Vcv32e40x_gvsoc_core_lint_top__ConstPool__TABLE_h3daa4583_0
        [__Vtableidx7];
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__lsu_addr_low_lsb 
        = Vcv32e40x_gvsoc_core_lint_top__ConstPool__TABLE_h4b81ca1e_0
        [__Vtableidx7];
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__lsu_byte_addr_match[0U] 
        = ((0xeU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__lsu_byte_addr_match
            [0U]) | ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__be) 
                     & (0U == (3U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                               [0U]))));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__lsu_byte_addr_match[0U] 
        = ((0xdU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__lsu_byte_addr_match
            [0U]) | (0xfffffffeU & ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__be) 
                                    & ((1U == (3U & 
                                               vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                               [0U])) 
                                       << 1U))));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__lsu_byte_addr_match[0U] 
        = ((0xbU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__lsu_byte_addr_match
            [0U]) | (0xfffffffcU & ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__be) 
                                    & ((2U == (3U & 
                                               vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                               [0U])) 
                                       << 2U))));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__lsu_byte_addr_match[0U] 
        = ((7U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__lsu_byte_addr_match
            [0U]) | (0xfffffff8U & ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__be) 
                                    & ((3U == (3U & 
                                               vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
                                               [0U])) 
                                       << 3U))));
}

VL_INLINE_OPT void Vcv32e40x_gvsoc_core_lint_top___024root___act_sequent__TOP__11(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcv32e40x_gvsoc_core_lint_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_gvsoc_core_lint_top___024root___act_sequent__TOP__11\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__wb_stage_i__DOT__lsu_exception 
        = ((0U != (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__mpu_status_wb)) 
           | (0U != (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__align_status_wb)));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__abort_op_wb 
        = (1U & ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[0U] 
                  >> 1U) | ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[4U] 
                             >> 0x1eU) & ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__wb_stage_i__DOT__lsu_exception) 
                                          | (0U != vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__wpt_match_wb)))));
}

VL_INLINE_OPT void Vcv32e40x_gvsoc_core_lint_top___024root___act_sequent__TOP__12(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcv32e40x_gvsoc_core_lint_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_gvsoc_core_lint_top___024root___act_sequent__TOP__12\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
        = ((0x1ffffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__wpt_trans[1U]) 
           | (((0x400U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[1U])
                ? ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[2U] 
                    << 0x13U) | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[1U] 
                                 >> 0xdU)) : ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__split_q)
                                               ? ((IData)(4U) 
                                                  + 
                                                  (0xfffffffcU 
                                                   & ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[2U] 
                                                       << 0x13U) 
                                                      | (0x7fffcU 
                                                         & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[1U] 
                                                            >> 0xdU)))))
                                               : ((
                                                   vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[2U] 
                                                   << 0x13U) 
                                                  | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[1U] 
                                                     >> 0xdU)))) 
              << 0x11U));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__wpt_trans[2U] 
        = (((0x400U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[1U])
             ? ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[2U] 
                 << 0x13U) | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[1U] 
                              >> 0xdU)) : ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__split_q)
                                            ? ((IData)(4U) 
                                               + (0xfffffffcU 
                                                  & ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[2U] 
                                                      << 0x13U) 
                                                     | (0x7fffcU 
                                                        & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[1U] 
                                                           >> 0xdU)))))
                                            : ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[2U] 
                                                << 0x13U) 
                                               | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[1U] 
                                                  >> 0xdU)))) 
           >> 0xfU);
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__wpt_trans[0U] 
        = ((0x3fU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__wpt_trans[0U]) 
           | ((IData)((((QData)((IData)((0x3fU & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[1U] 
                                                  >> 5U)))) 
                        << 0x25U) | (((QData)((IData)(
                                                      (1U 
                                                       & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[1U] 
                                                          >> 4U)))) 
                                      << 0x24U) | (
                                                   ((QData)((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__be)) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     ((0x4000U 
                                                                       & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[1U])
                                                                       ? 
                                                                      ((0x2000U 
                                                                        & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[1U])
                                                                        ? 
                                                                       ((0xff000000U 
                                                                         & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[0U] 
                                                                            << 0x15U)) 
                                                                        | (0xffffffU 
                                                                           & ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[1U] 
                                                                               << 0x15U) 
                                                                              | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[0U] 
                                                                                >> 0xbU))))
                                                                        : 
                                                                       ((0xffff0000U 
                                                                         & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[0U] 
                                                                            << 0xdU)) 
                                                                        | (0xffffU 
                                                                           & ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[1U] 
                                                                               << 0xdU) 
                                                                              | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[0U] 
                                                                                >> 0x13U)))))
                                                                       : 
                                                                      ((0x2000U 
                                                                        & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[1U])
                                                                        ? 
                                                                       ((0xffffff00U 
                                                                         & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[0U] 
                                                                            << 5U)) 
                                                                        | (0xffU 
                                                                           & ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[1U] 
                                                                               << 5U) 
                                                                              | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[0U] 
                                                                                >> 0x1bU))))
                                                                        : 
                                                                       ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[1U] 
                                                                         << 0x1dU) 
                                                                        | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[0U] 
                                                                           >> 3U)))))))))) 
              << 6U));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
        = ((0xfffe0000U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__wpt_trans[1U]) 
           | (((IData)((((QData)((IData)((0x3fU & (
                                                   vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[1U] 
                                                   >> 5U)))) 
                         << 0x25U) | (((QData)((IData)(
                                                       (1U 
                                                        & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[1U] 
                                                           >> 4U)))) 
                                       << 0x24U) | 
                                      (((QData)((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__be)) 
                                        << 0x20U) | (QData)((IData)(
                                                                    ((0x4000U 
                                                                      & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[1U])
                                                                      ? 
                                                                     ((0x2000U 
                                                                       & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[1U])
                                                                       ? 
                                                                      ((0xff000000U 
                                                                        & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[0U] 
                                                                           << 0x15U)) 
                                                                       | (0xffffffU 
                                                                          & ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[1U] 
                                                                              << 0x15U) 
                                                                             | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[0U] 
                                                                                >> 0xbU))))
                                                                       : 
                                                                      ((0xffff0000U 
                                                                        & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[0U] 
                                                                           << 0xdU)) 
                                                                       | (0xffffU 
                                                                          & ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[1U] 
                                                                              << 0xdU) 
                                                                             | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[0U] 
                                                                                >> 0x13U)))))
                                                                      : 
                                                                     ((0x2000U 
                                                                       & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[1U])
                                                                       ? 
                                                                      ((0xffffff00U 
                                                                        & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[0U] 
                                                                           << 5U)) 
                                                                       | (0xffU 
                                                                          & ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[1U] 
                                                                              << 5U) 
                                                                             | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[0U] 
                                                                                >> 0x1bU))))
                                                                       : 
                                                                      ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[1U] 
                                                                        << 0x1dU) 
                                                                       | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[0U] 
                                                                          >> 3U)))))))))) 
               >> 0x1aU) | ((IData)(((((QData)((IData)(
                                                       (0x3fU 
                                                        & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[1U] 
                                                           >> 5U)))) 
                                       << 0x25U) | 
                                      (((QData)((IData)(
                                                        (1U 
                                                         & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[1U] 
                                                            >> 4U)))) 
                                        << 0x24U) | 
                                       (((QData)((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__be)) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((0x4000U 
                                                            & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[1U])
                                                            ? 
                                                           ((0x2000U 
                                                             & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[1U])
                                                             ? 
                                                            ((0xff000000U 
                                                              & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[0U] 
                                                                 << 0x15U)) 
                                                             | (0xffffffU 
                                                                & ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[1U] 
                                                                    << 0x15U) 
                                                                   | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[0U] 
                                                                      >> 0xbU))))
                                                             : 
                                                            ((0xffff0000U 
                                                              & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[0U] 
                                                                 << 0xdU)) 
                                                             | (0xffffU 
                                                                & ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[1U] 
                                                                    << 0xdU) 
                                                                   | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[0U] 
                                                                      >> 0x13U)))))
                                                            : 
                                                           ((0x2000U 
                                                             & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[1U])
                                                             ? 
                                                            ((0xffffff00U 
                                                              & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[0U] 
                                                                 << 5U)) 
                                                             | (0xffU 
                                                                & ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[1U] 
                                                                    << 5U) 
                                                                   | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[0U] 
                                                                      >> 0x1bU))))
                                                             : 
                                                            ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[1U] 
                                                              << 0x1dU) 
                                                             | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[0U] 
                                                                >> 3U))))))))) 
                                     >> 0x20U)) << 6U)));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__wpt_trans[0U] 
        = (2U | ((0xfffffff0U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__wpt_trans[0U]) 
                 | ((0xcU & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[0U] 
                             << 1U)) | (1U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[0U]))));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__wpt_trans[0U] 
        = (0xffffffcfU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__wpt_trans[0U]);
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__mpu_i__DOT__pma_i__DOT__pma_cfg[0U] = 9U;
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__mpu_i__DOT__pma_i__DOT__pma_cfg[1U] = 0U;
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__mpu_i__DOT__pma_i__DOT__pma_cfg[2U] = 0U;
    if (((0xf0000000U <= ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__wpt_trans[2U] 
                           << 0xfU) | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                       >> 0x11U))) 
         & ((0xf0003fffU >= ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__wpt_trans[2U] 
                              << 0xfU) | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                          >> 0x11U))) 
            & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__wpt_trans[0U]))) {
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__mpu_i__DOT__pma_i__DOT__pma_cfg[0U] = 8U;
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__mpu_i__DOT__pma_i__DOT__pma_cfg[1U] = 0U;
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__mpu_i__DOT__pma_i__DOT__pma_cfg[2U] = 0U;
    }
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__alcheck_trans[0U] 
        = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__wpt_trans[0U];
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__alcheck_trans[1U] 
        = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__wpt_trans[1U];
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__alcheck_trans[2U] 
        = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__wpt_trans[2U];
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__alcheck_trans[0U] 
        = ((0xffffffcfU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__alcheck_trans[0U]) 
           | (0xfffffff0U & ((0x20U & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__mpu_i__DOT__pma_i__DOT__pma_cfg[0U] 
                                       << 4U)) | (0x10U 
                                                  & (((~ (IData)(
                                                                 (0x400U 
                                                                  != 
                                                                  (0x10400U 
                                                                   & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__wpt_trans[1U])))) 
                                                      << 4U) 
                                                     & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__mpu_i__DOT__pma_i__DOT__pma_cfg[0U] 
                                                        << 2U))))));
    if (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__state) {
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__buffer_trans_ready 
            = (1U & ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__alcheck_trans[0U] 
                      >> 4U) & (IData)(vlSelfRef.data_gnt_i)));
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__bus_trans[0U] 
            = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__trans_q[0U];
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__bus_trans[1U] 
            = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__trans_q[1U];
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__bus_trans[2U] 
            = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__trans_q[2U];
    } else {
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__buffer_trans_ready 
            = (1U & ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__alcheck_trans[0U] 
                      >> 4U) | (IData)(vlSelfRef.data_gnt_i)));
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__bus_trans[0U] 
            = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__alcheck_trans[0U];
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__bus_trans[1U] 
            = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__alcheck_trans[1U];
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__bus_trans[2U] 
            = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__alcheck_trans[2U];
    }
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__filter_trans_ready 
        = ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__buffer_trans_ready) 
           & (2U > (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__response_filter_i__DOT__bus_cnt_q)));
    vlSelfRef.data_we_o = (1U & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__bus_trans[1U] 
                                 >> 0xaU));
    vlSelfRef.data_be_o = (0xfU & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__bus_trans[1U] 
                                   >> 6U));
    vlSelfRef.data_addr_o = ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__bus_trans[2U] 
                              << 0xfU) | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__bus_trans[1U] 
                                          >> 0x11U));
    vlSelfRef.data_wdata_o = ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__bus_trans[1U] 
                               << 0x1aU) | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__bus_trans[0U] 
                                            >> 6U));
}

VL_INLINE_OPT void Vcv32e40x_gvsoc_core_lint_top___024root___act_sequent__TOP__13(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcv32e40x_gvsoc_core_lint_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_gvsoc_core_lint_top___024root___act_sequent__TOP__13\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_byp 
        = (0x1fffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_byp);
    if (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__rf_we_wb) {
        if ((1U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_wb_match))) {
            vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_byp 
                = (0x20000U | (0xffffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_byp));
        }
        if ((2U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_wb_match))) {
            vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_byp 
                = (0x8000U | (0x33fffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_byp));
        }
    }
    if (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__rf_we_ex) {
        if ((1U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_ex_match))) {
            vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_byp 
                = (0x10000U | (0xffffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_byp));
        }
        if ((2U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_ex_match))) {
            vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_byp 
                = (0x4000U | (0x33fffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_byp));
        }
    }
    if (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__rf_we_wb) {
        if (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_wb_jalr_match) {
            vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_byp 
                = (0x2000U | vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_byp);
        }
    }
}

VL_INLINE_OPT void Vcv32e40x_gvsoc_core_lint_top___024root___act_sequent__TOP__14(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcv32e40x_gvsoc_core_lint_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_gvsoc_core_lint_top___024root___act_sequent__TOP__14\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__exception_in_wb 
        = (1U & ((IData)((((((0U != (0x38100000U & 
                                     vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[1U])) 
                             | (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgRegularize_ha32e4db6_0_11)) 
                            | (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgRegularize_ha32e4db6_0_26)) 
                           | (0U != (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__mpu_status_wb))) 
                          | (0U != (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__align_status_wb)))) 
                 & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[1U] 
                    >> 0x15U)));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__exception_cause_wb 
        = ((0U != (3U & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[1U] 
                         >> 0x1bU))) ? 1U : ((0x20000000U 
                                              & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[1U])
                                              ? 0x18U
                                              : ((0x100000U 
                                                  & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[1U])
                                                  ? 2U
                                                  : 
                                                 ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgRegularize_ha32e4db6_0_11)
                                                   ? 0xbU
                                                   : 
                                                  ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgRegularize_ha32e4db6_0_26)
                                                    ? 3U
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__mpu_status_wb))
                                                     ? 7U
                                                     : 
                                                    ((1U 
                                                      == (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__mpu_status_wb))
                                                      ? 5U
                                                      : 
                                                     ((2U 
                                                       == (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__align_status_wb))
                                                       ? 7U
                                                       : 5U))))))));
}

extern const VlUnpacked<CData/*1:0*/, 256> Vcv32e40x_gvsoc_core_lint_top__ConstPool__TABLE_hb5408ef7_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vcv32e40x_gvsoc_core_lint_top__ConstPool__TABLE_h8a66caf0_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vcv32e40x_gvsoc_core_lint_top__ConstPool__TABLE_h298fc223_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vcv32e40x_gvsoc_core_lint_top__ConstPool__TABLE_h646aed27_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vcv32e40x_gvsoc_core_lint_top__ConstPool__TABLE_h91ddaed0_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vcv32e40x_gvsoc_core_lint_top__ConstPool__TABLE_hb911e8d4_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vcv32e40x_gvsoc_core_lint_top__ConstPool__TABLE_h0051eaea_0;
extern const VlUnpacked<CData/*0:0*/, 256> Vcv32e40x_gvsoc_core_lint_top__ConstPool__TABLE_ha16f6911_0;

VL_INLINE_OPT void Vcv32e40x_gvsoc_core_lint_top___024root___act_sequent__TOP__15(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcv32e40x_gvsoc_core_lint_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_gvsoc_core_lint_top___024root___act_sequent__TOP__15\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__add_a_mux;
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__add_a_mux = 0;
    IData/*31:0*/ cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__add_b_mux;
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__add_b_mux = 0;
    CData/*0:0*/ cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__remainder_en;
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__remainder_en = 0;
    CData/*0:0*/ cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__quotient_en;
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__quotient_en = 0;
    CData/*7:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    // Body
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__mul_ready = 0U;
    if ((2U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state))) {
        if ((1U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state))) {
            if (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__wb_ready) {
                vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__mul_ready = 1U;
            }
        }
    } else if ((1U & (~ (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_state)))) {
        if ((1U & (~ (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[7U] 
                      >> 0x16U)))) {
            if (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__wb_ready) {
                vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__mul_ready = 1U;
            }
        }
    }
    if ((1U & ((~ (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__mul_en)) 
               | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U] 
                  >> 0xeU)))) {
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__mul_ready = 1U;
    } else if ((0x80000U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U])) {
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__mul_ready = 0U;
    }
    __Vtableidx3 = ((0x80U & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U] 
                              >> 0xcU)) | ((0x40U & 
                                            (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U] 
                                             >> 8U)) 
                                           | (((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__div_en) 
                                               << 5U) 
                                              | (((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__comp_out) 
                                                  << 4U) 
                                                 | ((8U 
                                                     & ((~ (IData)(
                                                                   (0U 
                                                                    != (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__cnt_q)))) 
                                                        << 3U)) 
                                                    | (((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__wb_ready) 
                                                        << 2U) 
                                                       | (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__state)))))));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__next_state 
        = Vcv32e40x_gvsoc_core_lint_top__ConstPool__TABLE_hb5408ef7_0
        [__Vtableidx3];
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__div_valid 
        = Vcv32e40x_gvsoc_core_lint_top__ConstPool__TABLE_h8a66caf0_0
        [__Vtableidx3];
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__div_ready 
        = Vcv32e40x_gvsoc_core_lint_top__ConstPool__TABLE_h298fc223_0
        [__Vtableidx3];
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__init_en 
        = Vcv32e40x_gvsoc_core_lint_top__ConstPool__TABLE_h646aed27_0
        [__Vtableidx3];
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__init_dummy_cnt 
        = Vcv32e40x_gvsoc_core_lint_top__ConstPool__TABLE_h91ddaed0_0
        [__Vtableidx3];
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__remainder_en 
        = Vcv32e40x_gvsoc_core_lint_top__ConstPool__TABLE_hb911e8d4_0
        [__Vtableidx3];
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__divisor_en 
        = Vcv32e40x_gvsoc_core_lint_top__ConstPool__TABLE_h0051eaea_0
        [__Vtableidx3];
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__quotient_en 
        = Vcv32e40x_gvsoc_core_lint_top__ConstPool__TABLE_ha16f6911_0
        [__Vtableidx3];
    if (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__init_en) {
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__div_rem_d 
            = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__div_rem;
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__comp_inv_d 
            = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__op_b_is_neg;
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__quotient_d = 0U;
        cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__add_b_mux = 0U;
        cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__add_a_mux 
            = ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[7U] 
                << 0xfU) | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[6U] 
                            >> 0x11U));
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__res_inv_d 
            = (((0U != ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[6U] 
                         << 0xfU) | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[5U] 
                                     >> 0x11U))) | (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__div_rem)) 
               & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT____VdfgRegularize_h6404b41a_0_3));
    } else {
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__div_rem_d 
            = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__div_rem_q;
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__comp_inv_d 
            = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__comp_inv_q;
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__quotient_d 
            = ((IData)(cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__quotient_en)
                ? ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__quotient_q 
                    << 1U) | (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__comp_out))
                : vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__quotient_q);
        cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__add_b_mux 
            = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__remainder_q;
        cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__add_a_mux 
            = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__divisor_q;
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__res_inv_d 
            = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__res_inv_q;
    }
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__remainder_d 
        = ((IData)(cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__remainder_en)
            ? (((~ (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT____VdfgRegularize_h6404b41a_0_3)) 
                & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__init_en))
                ? (cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__add_b_mux 
                   + cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__add_a_mux)
                : (cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__add_b_mux 
                   - cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__add_a_mux))
            : vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__remainder_q);
}

VL_INLINE_OPT void Vcv32e40x_gvsoc_core_lint_top___024root___act_sequent__TOP__16(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcv32e40x_gvsoc_core_lint_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_gvsoc_core_lint_top___024root___act_sequent__TOP__16\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_h7c88e781__0 
        = ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_sync_debug) 
           & ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgRegularize_ha32e4db6_0_19) 
              & (2U != (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs))));
}

VL_INLINE_OPT void Vcv32e40x_gvsoc_core_lint_top___024root___act_sequent__TOP__17(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcv32e40x_gvsoc_core_lint_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_gvsoc_core_lint_top___024root___act_sequent__TOP__17\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__lsu_valid_1 
        = ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__lsu_en_wb) 
           & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__wpt_resp_valid));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__wb_stage_i__DOT__lsu_valid 
        = ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__wb_stage_i__DOT__lsu_valid_q)
            ? (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__wb_stage_i__DOT__lsu_valid_q)
            : (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__lsu_valid_1));
}

VL_INLINE_OPT void Vcv32e40x_gvsoc_core_lint_top___024root___act_sequent__TOP__18(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcv32e40x_gvsoc_core_lint_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_gvsoc_core_lint_top___024root___act_sequent__TOP__18\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgRegularize_ha32e4db6_0_24;
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgRegularize_ha32e4db6_0_24 = 0;
    // Body
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgRegularize_ha32e4db6_0_24 
        = ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__lsu_interruptible) 
           & ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_interruptible) 
              & ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgRegularize_ha32e4db6_0_18) 
                 & ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgRegularize_ha32e4db6_0_19) 
                    & ((~ (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__sequence_in_progress_wb)) 
                       & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgRegularize_ha32e4db6_0_23))))));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_h225c6b2f__0 
        = ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__irq_req_ctrl) 
           & ((~ (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__interrupt_blanking_q)) 
              & (IData)(cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgRegularize_ha32e4db6_0_24)));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_ha7292f8a__0 
        = ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__nmi_pending_q) 
           & ((~ ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__woke_to_debug_q) 
                  | (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__woke_to_interrupt_q))) 
              & (IData)(cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgRegularize_ha32e4db6_0_24)));
}

VL_INLINE_OPT void Vcv32e40x_gvsoc_core_lint_top___024root___act_sequent__TOP__19(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcv32e40x_gvsoc_core_lint_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_gvsoc_core_lint_top___024root___act_sequent__TOP__19\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__wb_counter_event_gated 
        = (((((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__wb_counter_event) 
              & (~ (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__exception_in_wb))) 
             & (~ (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__ebreak_in_wb))) 
            & (~ (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__trigger_match_in_wb))) 
           & (0U == (0x62000U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U])));
}

VL_INLINE_OPT void Vcv32e40x_gvsoc_core_lint_top___024root___act_sequent__TOP__20(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcv32e40x_gvsoc_core_lint_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_gvsoc_core_lint_top___024root___act_sequent__TOP__20\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    SData/*10:0*/ cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__exc_cause;
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__exc_cause = 0;
    // Body
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__exc_cause = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs) 
                  >> 1U)))) {
        if ((1U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs))) {
            if ((1U & (~ (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_ha7292f8a__0)))) {
                if ((1U & (~ (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_ha9ecc2ef__0)))) {
                    if (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_h225c6b2f__0) {
                        cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__exc_cause 
                            = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT____Vcellout__gen_basic_interrupt__DOT__int_controller_i__irq_id_ctrl_o;
                    }
                }
            }
        }
    }
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[5U] 
        = ((0xfffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[5U]) 
           | (0xfffff000U & (((((0U == (3U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q)) 
                                | (3U == (3U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q)))
                                ? 0U : (0x1fU & (IData)(cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__exc_cause))) 
                              << 0x1bU) | ((0x7fe0000U 
                                            & ((IData)(cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__exc_cause) 
                                               << 0x11U)) 
                                           | (((1U 
                                                == 
                                                (3U 
                                                 & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q))
                                                ? 0xfU
                                                : 0U) 
                                              << 0xcU)))));
}

VL_INLINE_OPT void Vcv32e40x_gvsoc_core_lint_top___024root___act_sequent__TOP__21(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcv32e40x_gvsoc_core_lint_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_gvsoc_core_lint_top___024root___act_sequent__TOP__21\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*1:0*/ cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__pipe_pc_mux_ctrl;
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__pipe_pc_mux_ctrl = 0;
    // Body
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_n 
        = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_q;
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__pipe_pc_mux_ctrl = 3U;
    if ((2U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs))) {
        if ((1U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs))) {
            vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_n = 1U;
            cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__pipe_pc_mux_ctrl 
                = ((4U != (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_cause_q))
                    ? ((0x200000U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[1U])
                        ? 3U : ((0x400U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[1U])
                                 ? 2U : ((0x40000000U 
                                          & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U])
                                          ? 1U : 0U)))
                    : 0U);
        }
    } else if ((1U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs))) {
        if ((1U & (~ (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_ha7292f8a__0)))) {
            if ((1U & (~ (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_ha9ecc2ef__0)))) {
                if ((1U & (~ (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_h225c6b2f__0)))) {
                    if ((1U & (~ (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_h7c88e781__0)))) {
                        if ((1U & (~ (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__exception_in_wb)))) {
                            if ((1U & (~ (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_h7e4cdf56__0)))) {
                                if ((1U & (~ (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_hebfcbc4a__0)))) {
                                    if (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__dret_in_wb) {
                                        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_n = 0U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        if (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_ha7292f8a__0) {
            cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__pipe_pc_mux_ctrl 
                = ((0x200000U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[1U])
                    ? 3U : ((0x400U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[1U])
                             ? 2U : ((0x40000000U & 
                                      vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U])
                                      ? 1U : 0U)));
        } else if ((1U & (~ (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_ha9ecc2ef__0)))) {
            if (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_h225c6b2f__0) {
                cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__pipe_pc_mux_ctrl 
                    = ((0x200000U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[1U])
                        ? 3U : ((0x400U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[1U])
                                 ? 2U : ((0x40000000U 
                                          & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U])
                                          ? 1U : 0U)));
            } else if ((1U & (~ (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_h7c88e781__0)))) {
                if (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__exception_in_wb) {
                    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__pipe_pc_mux_ctrl = 3U;
                } else if ((1U & (~ (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_h7e4cdf56__0)))) {
                    if (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_hebfcbc4a__0) {
                        if (((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__fencei_in_wb)
                              ? (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__fencei_req_and_ack_q)
                              : (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__fence_req_q))) {
                            cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__pipe_pc_mux_ctrl 
                                = ((0x400U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[1U])
                                    ? 2U : ((0x40000000U 
                                             & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U])
                                             ? 1U : 0U));
                        }
                    } else if ((1U & (~ (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__dret_in_wb)))) {
                        if ((1U & (~ (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__csr_wr_in_wb_flush)))) {
                            if (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__csr_flush_ack_q) {
                                cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__pipe_pc_mux_ctrl 
                                    = ((0x400U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[1U])
                                        ? 2U : ((0x40000000U 
                                                 & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U])
                                                 ? 1U
                                                 : 0U));
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[4U] 
        = ((0xffe0ffffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[4U]) 
           | (0xffff0000U & (((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_n) 
                              << 0x14U) | (((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_q) 
                                            << 0x13U) 
                                           | ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_cause_q) 
                                              << 0x10U)))));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[2U] 
        = ((0x1ffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[2U]) 
           | (0xfffffe00U & ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[3U] 
                              << 0xbU) | (0x600U & 
                                          (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[2U] 
                                           >> 0x15U)))));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[3U] 
        = ((0xfffffe00U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[3U]) 
           | (0x1ffU & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[3U] 
                        >> 0x15U)));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[2U] 
        = ((0x1ffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[2U]) 
           | (((2U & (IData)(cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__pipe_pc_mux_ctrl))
                ? ((1U & (IData)(cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__pipe_pc_mux_ctrl))
                    ? ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[3U] 
                        << 2U) | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[2U] 
                                  >> 0x1eU)) : ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[3U] 
                                                 << 0xdU) 
                                                | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[2U] 
                                                   >> 0x13U)))
                : ((1U & (IData)(cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__pipe_pc_mux_ctrl))
                    ? ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[4U] 
                        << 0xaU) | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[3U] 
                                    >> 0x16U)) : vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_q)) 
              << 9U));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[3U] 
        = ((0xfffffe00U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[3U]) 
           | (((2U & (IData)(cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__pipe_pc_mux_ctrl))
                ? ((1U & (IData)(cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__pipe_pc_mux_ctrl))
                    ? ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[3U] 
                        << 2U) | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[2U] 
                                  >> 0x1eU)) : ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[3U] 
                                                 << 0xdU) 
                                                | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[2U] 
                                                   >> 0x13U)))
                : ((1U & (IData)(cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__pipe_pc_mux_ctrl))
                    ? ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[4U] 
                        << 0xaU) | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[3U] 
                                    >> 0x16U)) : vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_q)) 
              >> 0x17U));
}

VL_INLINE_OPT void Vcv32e40x_gvsoc_core_lint_top___024root___act_sequent__TOP__22(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcv32e40x_gvsoc_core_lint_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_gvsoc_core_lint_top___024root___act_sequent__TOP__22\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_2;
    VlWide<3>/*95:0*/ __Vtemp_4;
    // Body
    __Vtemp_2[0U] = (IData)((((QData)((IData)((0x1fU 
                                               & ((0x800000U 
                                                   & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                   ? 
                                                  ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                    << 0xdU) 
                                                   | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                      >> 0x13U))
                                                   : 
                                                  ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                    << 8U) 
                                                   | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                      >> 0x18U)))))) 
                              << 0x37U) | (((QData)((IData)(
                                                            (0x1fU 
                                                             & ((0x200000U 
                                                                 & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                 ? 
                                                                ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                  << 0x17U) 
                                                                 | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                    >> 9U))
                                                                 : 
                                                                ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                  << 0x12U) 
                                                                 | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                    >> 0xeU)))))) 
                                            << 0x32U) 
                                           | (((QData)((IData)(
                                                               (0x1fU 
                                                                & ((0x80000U 
                                                                    & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                    ? 
                                                                   ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                     << 1U) 
                                                                    | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                       >> 0x1fU))
                                                                    : 
                                                                   ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                     << 0x1cU) 
                                                                    | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                       >> 4U)))))) 
                                               << 0x2dU) 
                                              | (((QData)((IData)(
                                                                  (0x1fU 
                                                                   & ((0x20000U 
                                                                       & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                       ? 
                                                                      ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                        << 0xbU) 
                                                                       | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                          >> 0x15U))
                                                                       : 
                                                                      ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                        << 6U) 
                                                                       | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                          >> 0x1aU)))))) 
                                                  << 0x28U) 
                                                 | (((QData)((IData)(
                                                                     (0x1fU 
                                                                      & ((0x8000U 
                                                                          & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                          ? 
                                                                         ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                           << 0x15U) 
                                                                          | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                             >> 0xbU))
                                                                          : 
                                                                         ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                           << 0x10U) 
                                                                          | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                             >> 0x10U)))))) 
                                                     << 0x23U) 
                                                    | (((QData)((IData)(
                                                                        (0x1fU 
                                                                         & ((0x2000U 
                                                                             & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                             ? 
                                                                            ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                              << 0x1fU) 
                                                                             | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                                >> 1U))
                                                                             : 
                                                                            ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                              << 0x1aU) 
                                                                             | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                                >> 6U)))))) 
                                                        << 0x1eU) 
                                                       | (QData)((IData)(
                                                                         ((0x3e000000U 
                                                                           & (((0x800U 
                                                                                & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                                ? 
                                                                               ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                                << 9U) 
                                                                                | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                                >> 0x17U))
                                                                                : 
                                                                               ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                                << 4U) 
                                                                                | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                                >> 0x1cU))) 
                                                                              << 0x19U)) 
                                                                          | ((0x1f00000U 
                                                                              & (((0x200U 
                                                                                & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                                << 0x13U) 
                                                                                | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                                >> 0xdU))
                                                                                 : 
                                                                                ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                                << 0xeU) 
                                                                                | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                                >> 0x12U))) 
                                                                                << 0x14U)) 
                                                                             | ((0xf8000U 
                                                                                & (((0x80U 
                                                                                & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                                << 0x1dU) 
                                                                                | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                                >> 3U))
                                                                                 : 
                                                                                ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                                << 0x18U) 
                                                                                | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                                >> 8U))) 
                                                                                << 0xfU)) 
                                                                                | ((0x7c00U 
                                                                                & (((0x20U 
                                                                                & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                                << 7U) 
                                                                                | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                                >> 0x19U))
                                                                                 : 
                                                                                ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                                << 2U) 
                                                                                | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                                >> 0x1eU))) 
                                                                                << 0xaU)) 
                                                                                | ((0x3e0U 
                                                                                & (((8U 
                                                                                & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                                << 0x11U) 
                                                                                | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                                >> 0xfU))
                                                                                 : 
                                                                                ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                                << 0xcU) 
                                                                                | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                                >> 0x14U))) 
                                                                                << 5U)) 
                                                                                | (0x1fU 
                                                                                & ((2U 
                                                                                & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                                << 0x1bU) 
                                                                                | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                                >> 5U))
                                                                                 : 
                                                                                ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                                << 0x16U) 
                                                                                | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                                >> 0xaU))))))))))))))))));
    __Vtemp_2[1U] = ((((0x2000000U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                        ? ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                            << 3U) | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                      >> 0x1dU)) : 
                       ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                         << 0x1eU) | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                      >> 2U))) << 0x1cU) 
                     | (IData)(((((QData)((IData)((0x1fU 
                                                   & ((0x800000U 
                                                       & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                       ? 
                                                      ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                        << 0xdU) 
                                                       | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                          >> 0x13U))
                                                       : 
                                                      ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                        << 8U) 
                                                       | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                          >> 0x18U)))))) 
                                  << 0x37U) | (((QData)((IData)(
                                                                (0x1fU 
                                                                 & ((0x200000U 
                                                                     & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                     ? 
                                                                    ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                      << 0x17U) 
                                                                     | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                        >> 9U))
                                                                     : 
                                                                    ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                      << 0x12U) 
                                                                     | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                        >> 0xeU)))))) 
                                                << 0x32U) 
                                               | (((QData)((IData)(
                                                                   (0x1fU 
                                                                    & ((0x80000U 
                                                                        & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                        ? 
                                                                       ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                         << 1U) 
                                                                        | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                           >> 0x1fU))
                                                                        : 
                                                                       ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                         << 0x1cU) 
                                                                        | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                                           >> 4U)))))) 
                                                   << 0x2dU) 
                                                  | (((QData)((IData)(
                                                                      (0x1fU 
                                                                       & ((0x20000U 
                                                                           & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                           ? 
                                                                          ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                            << 0xbU) 
                                                                           | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                              >> 0x15U))
                                                                           : 
                                                                          ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                            << 6U) 
                                                                           | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                              >> 0x1aU)))))) 
                                                      << 0x28U) 
                                                     | (((QData)((IData)(
                                                                         (0x1fU 
                                                                          & ((0x8000U 
                                                                              & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                              ? 
                                                                             ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                               << 0x15U) 
                                                                              | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                                >> 0xbU))
                                                                              : 
                                                                             ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                               << 0x10U) 
                                                                              | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                                >> 0x10U)))))) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(
                                                                            (0x1fU 
                                                                             & ((0x2000U 
                                                                                & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                                << 0x1fU) 
                                                                                | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                                >> 1U))
                                                                                 : 
                                                                                ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                                << 0x1aU) 
                                                                                | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                                >> 6U)))))) 
                                                            << 0x1eU) 
                                                           | (QData)((IData)(
                                                                             ((0x3e000000U 
                                                                               & (((0x800U 
                                                                                & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                                << 9U) 
                                                                                | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                                >> 0x17U))
                                                                                 : 
                                                                                ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                                                << 4U) 
                                                                                | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                                >> 0x1cU))) 
                                                                                << 0x19U)) 
                                                                              | ((0x1f00000U 
                                                                                & (((0x200U 
                                                                                & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                                << 0x13U) 
                                                                                | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                                >> 0xdU))
                                                                                 : 
                                                                                ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                                << 0xeU) 
                                                                                | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                                >> 0x12U))) 
                                                                                << 0x14U)) 
                                                                                | ((0xf8000U 
                                                                                & (((0x80U 
                                                                                & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                                << 0x1dU) 
                                                                                | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                                >> 3U))
                                                                                 : 
                                                                                ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                                << 0x18U) 
                                                                                | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                                >> 8U))) 
                                                                                << 0xfU)) 
                                                                                | ((0x7c00U 
                                                                                & (((0x20U 
                                                                                & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                                << 7U) 
                                                                                | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                                >> 0x19U))
                                                                                 : 
                                                                                ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                                                << 2U) 
                                                                                | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                                >> 0x1eU))) 
                                                                                << 0xaU)) 
                                                                                | ((0x3e0U 
                                                                                & (((8U 
                                                                                & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                                << 0x11U) 
                                                                                | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                                >> 0xfU))
                                                                                 : 
                                                                                ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                                << 0xcU) 
                                                                                | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                                >> 0x14U))) 
                                                                                << 5U)) 
                                                                                | (0x1fU 
                                                                                & ((2U 
                                                                                & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                                                 ? 
                                                                                ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                                << 0x1bU) 
                                                                                | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                                >> 5U))
                                                                                 : 
                                                                                ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                                << 0x16U) 
                                                                                | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                                                >> 0xaU))))))))))))))))) 
                                >> 0x20U)));
    __Vtemp_4[2U] = ((0x7c0U & (((0x20000000U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                  ? ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                      << 0xfU) | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                  >> 0x11U))
                                  : ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                      << 0xaU) | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                  >> 0x16U))) 
                                << 6U)) | ((0x3eU & 
                                            (((0x8000000U 
                                               & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                               ? ((
                                                   vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                   << 0x19U) 
                                                  | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                     >> 7U))
                                               : ((
                                                   vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                   << 0x14U) 
                                                  | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                     >> 0xcU))) 
                                             << 1U)) 
                                           | (1U & 
                                              (((0x2000000U 
                                                 & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
                                                 ? 
                                                ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                  << 3U) 
                                                 | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                    >> 0x1dU))
                                                 : 
                                                ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                  << 0x1eU) 
                                                 | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                    >> 2U))) 
                                               >> 4U))));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
        = __Vtemp_2[0U];
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
        = __Vtemp_2[1U];
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
        = ((((0x100U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)
              ? 8U : 9U) << 0x1fU) | ((((0x40U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)
                                         ? 6U : 7U) 
                                       << 0x1aU) | 
                                      ((((0x10U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)
                                          ? 4U : 5U) 
                                        << 0x15U) | 
                                       ((((4U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)
                                           ? 2U : 3U) 
                                         << 0x10U) 
                                        | ((((1U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)
                                              ? 0U : 1U) 
                                            << 0xbU) 
                                           | __Vtemp_4[2U])))));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
        = ((((0x100000U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)
              ? 0x14U : 0x15U) << 0x1dU) | ((((0x40000U 
                                               & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)
                                               ? 0x12U
                                               : 0x13U) 
                                             << 0x18U) 
                                            | ((((0x10000U 
                                                  & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)
                                                  ? 0x10U
                                                  : 0x11U) 
                                                << 0x13U) 
                                               | ((((0x4000U 
                                                     & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)
                                                     ? 0xeU
                                                     : 0xfU) 
                                                   << 0xeU) 
                                                  | ((((0x1000U 
                                                        & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)
                                                        ? 0xcU
                                                        : 0xdU) 
                                                      << 9U) 
                                                     | ((((0x400U 
                                                           & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)
                                                           ? 0xaU
                                                           : 0xbU) 
                                                         << 4U) 
                                                        | (((0x100U 
                                                             & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)
                                                             ? 8U
                                                             : 9U) 
                                                           >> 1U)))))));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
        = ((0xf8000000U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U]) 
           | ((((0x40000000U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)
                 ? 0x1eU : 0x1fU) << 0x16U) | ((((0x10000000U 
                                                  & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)
                                                  ? 0x1cU
                                                  : 0x1dU) 
                                                << 0x11U) 
                                               | ((((0x4000000U 
                                                     & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)
                                                     ? 0x1aU
                                                     : 0x1bU) 
                                                   << 0xcU) 
                                                  | ((((0x1000000U 
                                                        & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)
                                                        ? 0x18U
                                                        : 0x19U) 
                                                      << 7U) 
                                                     | ((((0x400000U 
                                                           & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)
                                                           ? 0x16U
                                                           : 0x17U) 
                                                         << 2U) 
                                                        | (((0x100000U 
                                                             & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in)
                                                             ? 0x14U
                                                             : 0x15U) 
                                                           >> 3U)))))));
}

VL_INLINE_OPT void Vcv32e40x_gvsoc_core_lint_top___024root___act_sequent__TOP__23(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcv32e40x_gvsoc_core_lint_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_gvsoc_core_lint_top___024root___act_sequent__TOP__23\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = (((IData)((0U != (0xc0000000U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in))) 
                  << 0x1eU) | (((IData)((0U != (0x30000000U 
                                                & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in))) 
                                << 0x1dU) | (((IData)(
                                                      (0U 
                                                       != 
                                                       (0xc000000U 
                                                        & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in))) 
                                              << 0x1cU) 
                                             | (((IData)(
                                                         (0U 
                                                          != 
                                                          (0x3000000U 
                                                           & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in))) 
                                                 << 0x1bU) 
                                                | (((IData)(
                                                            (0U 
                                                             != 
                                                             (0xc00000U 
                                                              & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in))) 
                                                    << 0x1aU) 
                                                   | (((IData)(
                                                               (0U 
                                                                != 
                                                                (0x300000U 
                                                                 & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in))) 
                                                       << 0x19U) 
                                                      | (((IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0xc0000U 
                                                                    & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in))) 
                                                          << 0x18U) 
                                                         | (((IData)(
                                                                     (0U 
                                                                      != 
                                                                      (0x30000U 
                                                                       & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in))) 
                                                             << 0x17U) 
                                                            | (((IData)(
                                                                        (0U 
                                                                         != 
                                                                         (0xc000U 
                                                                          & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in))) 
                                                                << 0x16U) 
                                                               | (((IData)(
                                                                           (0U 
                                                                            != 
                                                                            (0x3000U 
                                                                             & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in))) 
                                                                   << 0x15U) 
                                                                  | (((IData)(
                                                                              (0U 
                                                                               != 
                                                                               (0xc00U 
                                                                                & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in))) 
                                                                      << 0x14U) 
                                                                     | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x300U 
                                                                                & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in))) 
                                                                         << 0x13U) 
                                                                        | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xc0U 
                                                                                & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in))) 
                                                                            << 0x12U) 
                                                                           | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x30U 
                                                                                & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in))) 
                                                                               << 0x11U) 
                                                                              | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0xcU 
                                                                                & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in))) 
                                                                                << 0x10U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (3U 
                                                                                & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in))) 
                                                                                << 0xfU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60000000U 
                                                                                & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes))) 
                                                                                << 0xeU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18000000U 
                                                                                & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes))) 
                                                                                << 0xdU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x6000000U 
                                                                                & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes))) 
                                                                                << 0xcU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1800000U 
                                                                                & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes))) 
                                                                                << 0xbU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x600000U 
                                                                                & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes))) 
                                                                                << 0xaU) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x180000U 
                                                                                & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes))) 
                                                                                << 9U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60000U 
                                                                                & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes))) 
                                                                                << 8U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18000U 
                                                                                & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes))) 
                                                                                << 7U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x6000U 
                                                                                & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes))) 
                                                                                << 6U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x1800U 
                                                                                & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes))) 
                                                                                << 5U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x600U 
                                                                                & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes))) 
                                                                                << 4U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x180U 
                                                                                & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes))) 
                                                                                << 3U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x60U 
                                                                                & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes))) 
                                                                                << 2U) 
                                                                                | (((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x18U 
                                                                                & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes))) 
                                                                                << 1U) 
                                                                                | (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (6U 
                                                                                & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)))))))))))))))))))))))))))))))));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
        = __Vtemp_1;
}

VL_INLINE_OPT void Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__0(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcv32e40x_gvsoc_core_lint_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__wb_ready 
        = (1U & ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U] 
                  >> 0xdU) | ((~ (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__wb_stage_i__DOT__xif_waiting)) 
                              & (((0U == (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__cnt_q)) 
                                  | (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__wpt_resp_valid)) 
                                 & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__wb_stage_i__DOT____VdfgRegularize_h5fe00629_0_5)))));
}

VL_INLINE_OPT void Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__1(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcv32e40x_gvsoc_core_lint_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__sys_en_id 
        = (1U & ((~ (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_byp 
                     >> 4U)) & ((~ (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[3U] 
                                    >> 5U)) & (IData)(
                                                      (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                                       >> 9U)))));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__cv32e40x_pc_target_i__DOT__pc_target 
        = ((2U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__bch_jmp_mux_sel))
            ? ((1U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__bch_jmp_mux_sel))
                ? (((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[4U] 
                     << 0xaU) | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[3U] 
                                 >> 0x16U)) + (((- (IData)(
                                                           (1U 
                                                            & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                                               >> 0x1dU)))) 
                                                << 0xdU) 
                                               | ((0x1000U 
                                                   & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                                      >> 0x11U)) 
                                                  | ((0x800U 
                                                      & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                                         << 6U)) 
                                                     | ((0x7e0U 
                                                         & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                                            >> 0x12U)) 
                                                        | (0x1eU 
                                                           & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                                              >> 5U)))))))
                : (((0x2000U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_byp)
                     ? ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[7U] 
                         << 0xeU) | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                     >> 0x12U)) : (
                                                   (0x2000U 
                                                    & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_byp)
                                                    ? 
                                                   vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__rf_rdata_id
                                                   [0U]
                                                    : 
                                                   vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__rf_rdata_id
                                                   [0U])) 
                   + vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__imm_i_type))
            : ((1U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__bch_jmp_mux_sel))
                ? (((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[4U] 
                     << 0xaU) | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[3U] 
                                 >> 0x16U)) + (((- (IData)(
                                                           (1U 
                                                            & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                                               >> 0x1dU)))) 
                                                << 0x14U) 
                                               | ((0xff000U 
                                                   & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                                      << 2U)) 
                                                  | ((0x800U 
                                                      & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                                         >> 7U)) 
                                                     | (0x7feU 
                                                        & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                                           >> 0x12U))))))
                : ((0xffffffc0U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__jvt_csr_i__DOT__rdata_q) 
                   + (0x3fcU & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                >> 8U)))));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__alu_en_id 
        = (IData)(((~ (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_byp 
                       >> 4U)) & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                  >> 0x36U)));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__last_op_id 
        = (1U & ((~ ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__sys_en_id) 
                     & ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__sys_mret_insn_id) 
                        & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mcause_csr_i__DOT__rdata_q 
                           >> 0x1eU)))) & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[0U] 
                                           >> 1U)));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__sys_mret_id 
        = ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__sys_en_id) 
           & (IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_1_5));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__branch_addr_n 
        = (0xfffffffcU & vlSelfRef.boot_addr_i);
    if ((8U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[6U])) {
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__branch_addr_n 
            = ((4U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[6U])
                ? ((2U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[6U])
                    ? ((1U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[6U])
                        ? vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__cv32e40x_pc_target_i__DOT__pc_target
                        : ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[1U] 
                            << 0x1dU) | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[0U] 
                                         >> 3U))) : 
                   ((1U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[6U])
                     ? (0x7cU & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[5U] 
                                 >> 0xfU)) : ((0xffffff80U 
                                               & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q) 
                                              | (0x7cU 
                                                 & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[5U] 
                                                    >> 0xaU)))))
                : ((2U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[6U])
                    ? ((1U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[6U])
                        ? 0x1a110808U : 0x1a110800U)
                    : ((1U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[6U])
                        ? ((0xffffff80U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q) 
                           | (0x7cU & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[5U] 
                                       >> 0x19U))) : 
                       (0xffffff80U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mtvec_csr_i__DOT__rdata_q))));
    } else if ((4U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[6U])) {
        if ((2U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[6U])) {
            if ((1U & (~ vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[6U]))) {
                vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__branch_addr_n 
                    = ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[3U] 
                        << 0x17U) | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[2U] 
                                     >> 9U));
            }
        } else {
            vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__branch_addr_n 
                = ((1U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[6U])
                    ? ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[8U] 
                        << 8U) | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[7U] 
                                  >> 0x18U)) : vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__cv32e40x_pc_target_i__DOT__pc_target);
        }
    } else if ((2U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[6U])) {
        if ((1U & (~ vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[6U]))) {
            vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__branch_addr_n 
                = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dpc_csr_i__DOT__rdata_q;
        }
    } else {
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__branch_addr_n 
            = ((1U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[6U])
                ? ((0xfffffffcU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q) 
                   | ((2U & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q 
                             & ((~ (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[6U] 
                                    >> 5U)) << 1U))) 
                      | (1U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mepc_csr_i__DOT__rdata_q)))
                : (0xfffffffcU & vlSelfRef.boot_addr_i));
    }
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__jmp_id 
        = ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__alu_en_id) 
           & ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__alu_jmp_id) 
              & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U] 
                 >> 0x1eU)));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_trans_addr 
        = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__trans_addr_q;
    if (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__state_q) {
        if (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__state_q) {
            vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_trans_addr 
                = ((0x40U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[6U])
                    ? (0xfffffffeU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__branch_addr_n)
                    : vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__trans_addr_q);
        }
    } else {
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_trans_addr 
            = ((0x40U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[6U])
                ? (0xfffffffeU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__branch_addr_n)
                : ((IData)(4U) + (0xfffffffeU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__trans_addr_q)));
    }
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__mpu_i__DOT__pma_i__DOT__pma_cfg[0U] = 9U;
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__mpu_i__DOT__pma_i__DOT__pma_cfg[1U] = 0U;
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__mpu_i__DOT__pma_i__DOT__pma_cfg[2U] = 0U;
    if (((0xf0000000U <= vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_trans_addr) 
         & ((0xf0003fffU >= vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_trans_addr) 
            & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[4U] 
               >> 0x14U)))) {
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__mpu_i__DOT__pma_i__DOT__pma_cfg[0U] = 8U;
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__mpu_i__DOT__pma_i__DOT__pma_cfg[1U] = 0U;
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__mpu_i__DOT__pma_i__DOT__pma_cfg[2U] = 0U;
    }
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__mpu_i__DOT__pma_err = 0U;
    if ((1U & (~ (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__mpu_i__DOT__pma_i__DOT__pma_cfg[0U] 
                  >> 3U)))) {
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__mpu_i__DOT__pma_err = 1U;
    }
}

VL_INLINE_OPT void Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__2(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcv32e40x_gvsoc_core_lint_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__2\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__outstanding_cnt_n 
        = (3U & (((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_trans_valid) 
                  & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_ready))
                  ? ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_resp_valid)
                      ? (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__outstanding_cnt_q)
                      : ((IData)(1U) + (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__outstanding_cnt_q)))
                  : ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_resp_valid)
                      ? ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__outstanding_cnt_q) 
                         - (IData)(1U)) : (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__outstanding_cnt_q))));
}

VL_INLINE_OPT void Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__3(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcv32e40x_gvsoc_core_lint_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__3\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__nonsplit_misaligned_halfword;
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__nonsplit_misaligned_halfword = 0;
    // Body
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__nonsplit_misaligned_halfword = 0U;
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__lsu_split_ex = 0U;
    if (((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__lsu_valid_ex) 
         & (~ (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__split_q)))) {
        if ((2U != (3U & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[1U] 
                          >> 0xbU)))) {
            if ((1U == (3U & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[1U] 
                              >> 0xbU)))) {
                if ((0x2000U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[1U])) {
                    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__nonsplit_misaligned_halfword = 1U;
                }
            }
        }
        if ((2U == (3U & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[1U] 
                          >> 0xbU)))) {
            if ((0U != (3U & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[1U] 
                              >> 0xdU)))) {
                vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__lsu_split_ex = 1U;
            }
        } else if ((1U == (3U & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[1U] 
                                 >> 0xbU)))) {
            if ((3U == (3U & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[1U] 
                              >> 0xdU)))) {
                vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__lsu_split_ex = 1U;
            }
        }
    }
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__last_op_ex 
        = (1U & ((0x2000U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[5U])
                  ? ((~ (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__lsu_split_ex)) 
                     & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[0U] 
                        >> 1U)) : (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[0U] 
                                   >> 1U)));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__modified_access 
        = ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__split_q) 
           | (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__lsu_split_ex));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__misaligned_access 
        = ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__modified_access) 
           | (IData)(cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__nonsplit_misaligned_halfword));
}
