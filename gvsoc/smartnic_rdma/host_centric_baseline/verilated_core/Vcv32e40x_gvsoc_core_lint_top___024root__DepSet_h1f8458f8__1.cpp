// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcv32e40x_gvsoc_core_lint_top.h for the primary calling header

#include "Vcv32e40x_gvsoc_core_lint_top__pch.h"
#include "Vcv32e40x_gvsoc_core_lint_top__Syms.h"
#include "Vcv32e40x_gvsoc_core_lint_top___024root.h"

VL_INLINE_OPT void Vcv32e40x_gvsoc_core_lint_top___024root___nba_comb__TOP__48(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcv32e40x_gvsoc_core_lint_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_gvsoc_core_lint_top___024root___nba_comb__TOP__48\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__csr_mtvec_init_if;
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__csr_mtvec_init_if = 0;
    CData/*0:0*/ cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__sleep_unit_i__DOT__clock_en;
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__sleep_unit_i__DOT__clock_en = 0;
    QData/*37:0*/ cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__bus_trans;
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__bus_trans = 0;
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
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__bus_trans 
        = (((QData)((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_trans_addr)) 
            << 6U) | (QData)((IData)((((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_priv_lvl_resp) 
                                       << 2U) | (1U 
                                                 & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[4U] 
                                                    >> 0x14U))))));
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__bus_trans 
        = ((0x3fffffffcfULL & cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__bus_trans) 
           | ((QData)((IData)((2U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__mpu_i__DOT__pma_i__DOT__pma_cfg[0U]))) 
              << 4U));
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
    vlSymsp->TOP__cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__m_c_obi_instr_if.req_payload 
        = ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__instruction_obi_i__DOT__state_q)
            ? vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__instruction_obi_i__DOT__obi_a_req_q
            : cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__bus_trans);
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
    vlSelfRef.instr_addr_o = ((IData)((vlSymsp->TOP__cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__m_c_obi_instr_if.req_payload 
                                       >> 8U)) << 2U);
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
