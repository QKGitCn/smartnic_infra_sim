// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcv32e40x_gvsoc_core_lint_top.h for the primary calling header

#include "Vcv32e40x_gvsoc_core_lint_top__pch.h"
#include "Vcv32e40x_gvsoc_core_lint_top__Syms.h"
#include "Vcv32e40x_gvsoc_core_lint_top___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcv32e40x_gvsoc_core_lint_top___024root___dump_triggers__stl(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vcv32e40x_gvsoc_core_lint_top___024root___eval_triggers__stl(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcv32e40x_gvsoc_core_lint_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_gvsoc_core_lint_top___024root___eval_triggers__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.set(0U, (IData)(vlSelfRef.__VstlFirstIteration));
    vlSelfRef.__VstlTriggered.set(1U, ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__bus_trans_valid) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__bus_trans_valid__0)));
    vlSelfRef.__VstlTriggered.set(2U, (0U != ((((((
                                                   (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U] 
                                                    ^ 
                                                    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm__0[0U]) 
                                                   | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[1U] 
                                                      ^ 
                                                      vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm__0[1U])) 
                                                  | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[2U] 
                                                     ^ 
                                                     vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm__0[2U])) 
                                                 | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[3U] 
                                                    ^ 
                                                    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm__0[3U])) 
                                                | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[4U] 
                                                   ^ 
                                                   vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm__0[4U])) 
                                               | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[5U] 
                                                  ^ 
                                                  vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm__0[5U])) 
                                              | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[6U] 
                                                 ^ 
                                                 vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm__0[6U]))));
    vlSelfRef.__VstlTriggered.set(3U, (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode 
                                       != vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode__0));
    vlSelfRef.__VstlTriggered.set(4U, ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ready) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ready__0)));
    vlSelfRef.__VstlTriggered.set(5U, ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__wb_ready) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__wb_ready__0)));
    vlSelfRef.__VstlTriggered.set(6U, (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__dcsr 
                                       != vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__dcsr__0));
    vlSelfRef.__VstlTriggered.set(7U, ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_ha7292f8a__0) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_ha7292f8a__0__0)));
    vlSelfRef.__VstlTriggered.set(8U, ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__wpt_resp_valid) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__wpt_resp_valid__0)));
    vlSelfRef.__VstlTriggered.set(9U, ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__exception_in_wb) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__exception_in_wb__0)));
    vlSelfRef.__VstlTriggered.set(0xaU, ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_resp_valid) 
                                         != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_resp_valid__0)));
    vlSelfRef.__VstlTriggered.set(0xbU, ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_ready) 
                                         != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_ready__0)));
    vlSelfRef.__VstlTriggered.set(0xcU, (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_byp 
                                         != vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_byp__0));
    vlSelfRef.__VstlTriggered.set(0xdU, ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_h225c6b2f__0) 
                                         != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_h225c6b2f__0__0)));
    vlSelfRef.__VstlTriggered.set(0xeU, ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_h7c88e781__0) 
                                         != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_h7c88e781__0__0)));
    vlSelfRef.__VstlTriggered.set(0xfU, ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_interruptible) 
                                         != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_interruptible__0)));
    vlSelfRef.__VstlTriggered.set(0x10U, ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_sync_debug) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_sync_debug__0)));
    vlSelfRef.__VstlTriggered.set(0x11U, ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__sys_mret_id) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__sys_mret_id__0)));
    vlSelfRef.__VstlTriggered.set(0x12U, ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_h9c43ac38__0) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_h9c43ac38__0__0)));
    vlSelfRef.__VstlTriggered.set(0x13U, ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_valid) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_valid__0)));
    vlSelfRef.__VstlTriggered.set(0x14U, ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__last_op_if) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__last_op_if__0)));
    vlSelfRef.__VstlTriggered.set(0x15U, ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__abort_op_if) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__abort_op_if__0)));
    vlSelfRef.__VstlTriggered.set(0x16U, ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__wb_stage_i__DOT__instr_valid) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__wb_stage_i__DOT__instr_valid__0)));
    vlSelfRef.__VstlTriggered.set(0x17U, ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgRegularize_ha32e4db6_0_22) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgRegularize_ha32e4db6_0_22__0)));
    vlSelfRef.__VstlTriggered.set(0x18U, ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_valid) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_valid__0)));
    vlSelfRef.__VstlTriggered.set(0x19U, ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__jmp_id) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__jmp_id__0)));
    vlSelfRef.__VstlTriggered.set(0x1aU, (0U != (((
                                                   (((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U] 
                                                      ^ 
                                                      vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum__0[0U]) 
                                                     | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U] 
                                                        ^ 
                                                        vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum__0[1U])) 
                                                    | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U] 
                                                       ^ 
                                                       vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum__0[2U])) 
                                                   | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3U] 
                                                      ^ 
                                                      vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum__0[3U])) 
                                                  | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U] 
                                                     ^ 
                                                     vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum__0[4U])) 
                                                 | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U] 
                                                    ^ 
                                                    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum__0[5U]))));
    vlSelfRef.__VstlTriggered.set(0x1bU, ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_ex_match) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_ex_match__0)));
    vlSelfRef.__VstlTriggered.set(0x1cU, ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_wb_match) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_wb_match__0)));
    vlSelfRef.__VstlTriggered.set(0x1dU, (0U != (((
                                                   vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[0U] 
                                                   ^ 
                                                   vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans__0[0U]) 
                                                  | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[1U] 
                                                     ^ 
                                                     vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans__0[1U])) 
                                                 | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[2U] 
                                                    ^ 
                                                    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans__0[2U]))));
    vlSelfRef.__VstlTriggered.set(0x1eU, ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__be) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__be__0)));
    vlSelfRef.__VstlTriggered.set(0x1fU, ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__count_up) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__count_up__0)));
    vlSelfRef.__VstlTriggered.set(0x20U, ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__mpu_status_wb) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__mpu_status_wb__0)));
    vlSelfRef.__VstlTriggered.set(0x21U, ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__align_status_wb) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__align_status_wb__0)));
    vlSelfRef.__VstlTriggered.set(0x22U, ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgRegularize_ha32e4db6_0_26) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgRegularize_ha32e4db6_0_26__0)));
    vlSelfRef.__VstlTriggered.set(0x23U, (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes 
                                          != vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes__0));
    vlSelfRef.__VstlTriggered.set(0x24U, (0U != (((
                                                   ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U] 
                                                     ^ 
                                                     vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes__0[0U]) 
                                                    | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U] 
                                                       ^ 
                                                       vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes__0[1U])) 
                                                   | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U] 
                                                      ^ 
                                                      vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes__0[2U])) 
                                                  | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U] 
                                                     ^ 
                                                     vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes__0[3U])) 
                                                 | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U] 
                                                    ^ 
                                                    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes__0[4U]))));
    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__bus_trans_valid__0 
        = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__bus_trans_valid;
    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm__0[0U] 
        = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U];
    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm__0[1U] 
        = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[1U];
    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm__0[2U] 
        = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[2U];
    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm__0[3U] 
        = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[3U];
    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm__0[4U] 
        = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[4U];
    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm__0[5U] 
        = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[5U];
    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm__0[6U] 
        = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[6U];
    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode__0 
        = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__gen_seq__DOT__sequencer_i__DOT__decode;
    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ready__0 
        = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ready;
    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__wb_ready__0 
        = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__wb_ready;
    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__dcsr__0 
        = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__dcsr;
    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_ha7292f8a__0__0 
        = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_ha7292f8a__0;
    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__wpt_resp_valid__0 
        = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__wpt_resp_valid;
    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__exception_in_wb__0 
        = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__exception_in_wb;
    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_resp_valid__0 
        = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_resp_valid;
    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_ready__0 
        = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__fetch_ready;
    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_byp__0 
        = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_byp;
    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_h225c6b2f__0__0 
        = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_h225c6b2f__0;
    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_h7c88e781__0__0 
        = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_h7c88e781__0;
    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_interruptible__0 
        = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_interruptible;
    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_sync_debug__0 
        = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_sync_debug;
    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__sys_mret_id__0 
        = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__sys_mret_id;
    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_h9c43ac38__0__0 
        = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_h9c43ac38__0;
    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_valid__0 
        = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_valid;
    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__last_op_if__0 
        = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__last_op_if;
    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__abort_op_if__0 
        = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__abort_op_if;
    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__wb_stage_i__DOT__instr_valid__0 
        = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__wb_stage_i__DOT__instr_valid;
    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgRegularize_ha32e4db6_0_22__0 
        = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgRegularize_ha32e4db6_0_22;
    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_valid__0 
        = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_valid;
    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__jmp_id__0 
        = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__jmp_id;
    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum__0[0U] 
        = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[0U];
    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum__0[1U] 
        = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[1U];
    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum__0[2U] 
        = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[2U];
    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum__0[3U] 
        = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[3U];
    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum__0[4U] 
        = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[4U];
    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum__0[5U] 
        = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U];
    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_ex_match__0 
        = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_ex_match;
    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_wb_match__0 
        = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_wb_match;
    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans__0[0U] 
        = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[0U];
    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans__0[1U] 
        = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[1U];
    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans__0[2U] 
        = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans[2U];
    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__be__0 
        = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__be;
    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__count_up__0 
        = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__count_up;
    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__mpu_status_wb__0 
        = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__mpu_status_wb;
    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__align_status_wb__0 
        = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__align_status_wb;
    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgRegularize_ha32e4db6_0_26__0 
        = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgRegularize_ha32e4db6_0_26;
    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes__0 
        = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes;
    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes__0[0U] 
        = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U];
    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes__0[1U] 
        = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[1U];
    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes__0[2U] 
        = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[2U];
    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes__0[3U] 
        = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[3U];
    vlSelfRef.__Vtrigprevexpr___TOP__cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes__0[4U] 
        = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[4U];
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.__VstlDidInit))))) {
        vlSelfRef.__VstlDidInit = 1U;
        vlSelfRef.__VstlTriggered.set(1U, 1U);
        vlSelfRef.__VstlTriggered.set(2U, 1U);
        vlSelfRef.__VstlTriggered.set(3U, 1U);
        vlSelfRef.__VstlTriggered.set(4U, 1U);
        vlSelfRef.__VstlTriggered.set(5U, 1U);
        vlSelfRef.__VstlTriggered.set(6U, 1U);
        vlSelfRef.__VstlTriggered.set(7U, 1U);
        vlSelfRef.__VstlTriggered.set(8U, 1U);
        vlSelfRef.__VstlTriggered.set(9U, 1U);
        vlSelfRef.__VstlTriggered.set(0xaU, 1U);
        vlSelfRef.__VstlTriggered.set(0xbU, 1U);
        vlSelfRef.__VstlTriggered.set(0xcU, 1U);
        vlSelfRef.__VstlTriggered.set(0xdU, 1U);
        vlSelfRef.__VstlTriggered.set(0xeU, 1U);
        vlSelfRef.__VstlTriggered.set(0xfU, 1U);
        vlSelfRef.__VstlTriggered.set(0x10U, 1U);
        vlSelfRef.__VstlTriggered.set(0x11U, 1U);
        vlSelfRef.__VstlTriggered.set(0x12U, 1U);
        vlSelfRef.__VstlTriggered.set(0x13U, 1U);
        vlSelfRef.__VstlTriggered.set(0x14U, 1U);
        vlSelfRef.__VstlTriggered.set(0x15U, 1U);
        vlSelfRef.__VstlTriggered.set(0x16U, 1U);
        vlSelfRef.__VstlTriggered.set(0x17U, 1U);
        vlSelfRef.__VstlTriggered.set(0x18U, 1U);
        vlSelfRef.__VstlTriggered.set(0x19U, 1U);
        vlSelfRef.__VstlTriggered.set(0x1aU, 1U);
        vlSelfRef.__VstlTriggered.set(0x1bU, 1U);
        vlSelfRef.__VstlTriggered.set(0x1cU, 1U);
        vlSelfRef.__VstlTriggered.set(0x1dU, 1U);
        vlSelfRef.__VstlTriggered.set(0x1eU, 1U);
        vlSelfRef.__VstlTriggered.set(0x1fU, 1U);
        vlSelfRef.__VstlTriggered.set(0x20U, 1U);
        vlSelfRef.__VstlTriggered.set(0x21U, 1U);
        vlSelfRef.__VstlTriggered.set(0x22U, 1U);
        vlSelfRef.__VstlTriggered.set(0x23U, 1U);
        vlSelfRef.__VstlTriggered.set(0x24U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vcv32e40x_gvsoc_core_lint_top___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

extern const VlUnpacked<CData/*0:0*/, 1024> Vcv32e40x_gvsoc_core_lint_top__ConstPool__TABLE_h6c26a863_0;

VL_ATTR_COLD void Vcv32e40x_gvsoc_core_lint_top___024root___stl_sequent__TOP__0(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcv32e40x_gvsoc_core_lint_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_gvsoc_core_lint_top___024root___stl_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__div_clz_data_rev;
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__div_clz_data_rev = 0;
    CData/*0:0*/ cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal;
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal = 0;
    CData/*0:0*/ cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater;
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater = 0;
    IData/*31:0*/ cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data;
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data = 0;
    CData/*0:0*/ cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__div_signed;
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__div_signed = 0;
    QData/*63:0*/ cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_aligned;
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_aligned = 0;
    IData/*31:0*/ cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__wpt_match;
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__wpt_match = 0;
    CData/*0:0*/ cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_5;
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_5 = 0;
    IData/*31:0*/ cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__gen_basic_interrupt__DOT__int_controller_i__DOT__irq_local_qual;
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__gen_basic_interrupt__DOT__int_controller_i__DOT__irq_local_qual = 0;
    SData/*9:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    vlSelfRef.debug_pc_o = ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[3U] 
                             << 2U) | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[2U] 
                                       >> 0x1eU));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__sleep_unit_i__DOT__fetch_enable_d 
        = ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__sleep_unit_i__DOT__fetch_enable_q) 
           | (IData)(vlSelfRef.fetch_enable_i));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__instr_meta_n = 0U;
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__instr_meta_n 
        = ((1U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__instr_meta_n)) 
           | ((0x10U & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[4U] 
                        >> 0x16U)) | (((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__is_clic_ptr_q) 
                                       << 3U) | (((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__is_mret_ptr_q) 
                                                  << 2U) 
                                                 | (2U 
                                                    & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[4U] 
                                                       >> 0x16U))))));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__instr_meta_n 
        = ((0x1eU & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__instr_meta_n)) 
           | (1U & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[4U] 
                    >> 0x16U)));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__wpt_trans_valid = 0U;
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__wpt_block_core = 0U;
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__div_rem 
        = ((3U == (3U & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[7U] 
                         >> 0x11U))) | (2U == (3U & 
                                               (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[7U] 
                                                >> 0x11U))));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__filter_resp_valid 
        = (((5U >= ((IData)(1U) + (7U & VL_SHIFTL_III(3,3,32, (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__response_filter_i__DOT__bus_cnt_q), 1U)))) 
            && (1U & ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__response_filter_i__DOT__outstanding_q) 
                      >> ((IData)(1U) + (7U & VL_SHIFTL_III(3,3,32, (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__response_filter_i__DOT__bus_cnt_q), 1U))))))
            ? ((5U >= ((IData)(1U) + (7U & VL_SHIFTL_III(3,3,32, (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__response_filter_i__DOT__core_cnt_q), 1U)))) 
               && (1U & ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__response_filter_i__DOT__outstanding_q) 
                         >> ((IData)(1U) + (7U & VL_SHIFTL_III(3,3,32, (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__response_filter_i__DOT__core_cnt_q), 1U))))))
            : (IData)(vlSelfRef.data_rvalid_i));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT____VdfgRegularize_h221eb34c_0_6 
        = (1U & ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[1U] 
                  >> 7U) & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[0U] 
                            >> 3U)));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__res_mux 
        = ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__div_rem_q)
            ? vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__remainder_q
            : vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__quotient_q);
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_result 
        = (IData)((0x1ffffffffULL & (((1ULL | ((QData)((IData)(
                                                               ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                                                 << 8U) 
                                                                | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[9U] 
                                                                   >> 0x18U)))) 
                                               << 1U)) 
                                      + (((QData)((IData)(
                                                          ((0x8000000U 
                                                            & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[0xaU])
                                                            ? 
                                                           (~ 
                                                            ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[9U] 
                                                              << 8U) 
                                                             | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[8U] 
                                                                >> 0x18U)))
                                                            : 
                                                           ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[9U] 
                                                             << 8U) 
                                                            | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[8U] 
                                                               >> 0x18U))))) 
                                          << 1U) | (QData)((IData)(
                                                                   (1U 
                                                                    & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                                                       >> 0x1bU)))))) 
                                     >> 1U)));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__result_shnadd 
        = (VL_SHIFTL_III(32,32,32, ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                     << 8U) | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[9U] 
                                               >> 0x18U)), 
                         ((0x22U == (0x3fU & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                              >> 0x18U)))
                           ? 1U : ((0x24U == (0x3fU 
                                              & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                                 >> 0x18U)))
                                    ? 2U : 3U))) + 
           ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[9U] 
             << 8U) | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[8U] 
                       >> 0x18U)));
    vlSelfRef.mcycle_o = (((QData)((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[1U])) 
                           << 0x20U) | (QData)((IData)(
                                                       vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0U])));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_byp 
        = ((0x3fe3fU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_byp) 
           | ((((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[1U] 
                 >> 0xaU) & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[5U] 
                             >> 2U)) & (0U != (0xc000000U 
                                               & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[4U]))) 
              << 8U));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_bb = 0U;
    if ((0x20000000U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[0xaU])) {
        if ((1U & (~ (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                      >> 0x1cU)))) {
            if ((1U & (~ (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                          >> 0x1bU)))) {
                if ((1U & (~ (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                              >> 0x19U)))) {
                    if ((0x1000000U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[0xaU])) {
                        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_bb 
                            = ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                << 8U) | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[9U] 
                                          >> 0x18U));
                    }
                }
            }
        }
    } else if ((1U & (~ (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                         >> 0x1cU)))) {
        if ((0x8000000U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[0xaU])) {
            if ((0x4000000U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[0xaU])) {
                if ((1U & (~ (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                              >> 0x19U)))) {
                    if ((0x1000000U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[0xaU])) {
                        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_bb 
                            = (- (IData)((1U & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                                >> 0x17U))));
                    }
                }
            }
        }
    }
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_bh 
        = ((0x10000U & ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[7U] 
                         >> 5U) & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[6U])) 
           | (0xffffU & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[6U] 
                         >> 1U)));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__mul__DOT__mult_i__DOT__mulh_ah 
        = (((IData)((0x110000U == (0x110000U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[7U]))) 
            << 0x10U) | (0xffffU & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[7U] 
                                    >> 1U)));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl_int = 0x27d4400000100ULL;
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl_int 
        = (0x7ffffffffffeffULL & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl_int);
    if ((0x33U == (0x7fU & ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U] 
                             << 2U) | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[4U] 
                                       >> 0x1eU))))) {
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl_int 
            = (0x7000000ULL | vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl_int);
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl_int 
            = (0x1d0000000000ULL | (0x7fe07fffffffffULL 
                                    & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl_int));
        if (((((((((8U == ((0x3f8U & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                      >> 0x14U)) | 
                           (7U & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                  >> 0xaU)))) | (9U 
                                                 == 
                                                 ((0x3f8U 
                                                   & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                                      >> 0x14U)) 
                                                  | (7U 
                                                     & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                                        >> 0xaU))))) 
                  | (0xaU == ((0x3f8U & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                         >> 0x14U)) 
                              | (7U & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                       >> 0xaU))))) 
                 | (0xbU == ((0x3f8U & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                        >> 0x14U)) 
                             | (7U & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                      >> 0xaU))))) 
                | (0xcU == ((0x3f8U & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                       >> 0x14U)) | 
                            (7U & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                   >> 0xaU))))) | (0xdU 
                                                   == 
                                                   ((0x3f8U 
                                                     & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                                        >> 0x14U)) 
                                                    | (7U 
                                                       & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                                          >> 0xaU))))) 
              | (0xeU == ((0x3f8U & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                     >> 0x14U)) | (7U 
                                                   & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                                      >> 0xaU))))) 
             | (0xfU == ((0x3f8U & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                    >> 0x14U)) | (7U 
                                                  & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                                     >> 0xaU)))))) {
            if ((8U == ((0x3f8U & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                   >> 0x14U)) | (7U 
                                                 & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                                    >> 0xaU))))) {
                vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl_int 
                    = (0x200000000ULL | (0x7ffffcffffffffULL 
                                         & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl_int));
            } else if ((9U == ((0x3f8U & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                          >> 0x14U)) 
                               | (7U & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                        >> 0xaU))))) {
                vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl_int 
                    = (0x3c0000000ULL | vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl_int);
            } else if ((0xaU == ((0x3f8U & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                            >> 0x14U)) 
                                 | (7U & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                          >> 0xaU))))) {
                vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl_int 
                    = (0x340000000ULL | (0x7ffffc3fffffffULL 
                                         & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl_int));
            } else if ((0xbU == ((0x3f8U & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                            >> 0x14U)) 
                                 | (7U & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                          >> 0xaU))))) {
                vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl_int 
                    = (0x300000000ULL | (0x7ffffc3fffffffULL 
                                         & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl_int));
            } else if ((0xcU == ((0x3f8U & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                            >> 0x14U)) 
                                 | (7U & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                          >> 0xaU))))) {
                vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl_int 
                    = (0x28000000ULL | (0x7fffffc7ffffffULL 
                                        & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl_int));
                vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl_int 
                    = (0x200000000000ULL | (0x781fffffffffffULL 
                                            & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl_int));
            } else if ((0xdU == ((0x3f8U & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                            >> 0x14U)) 
                                 | (7U & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                          >> 0xaU))))) {
                vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl_int 
                    = (0x20000000ULL | (0x7fffffc7ffffffULL 
                                        & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl_int));
                vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl_int 
                    = (0x200000000000ULL | (0x781fffffffffffULL 
                                            & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl_int));
            } else if ((0xeU == ((0x3f8U & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                            >> 0x14U)) 
                                 | (7U & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                          >> 0xaU))))) {
                vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl_int 
                    = (0x38000000ULL | vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl_int);
                vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl_int 
                    = (0x200000000000ULL | (0x781fffffffffffULL 
                                            & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl_int));
            } else {
                vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl_int 
                    = (0x30000000ULL | (0x7fffffc7ffffffULL 
                                        & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl_int));
                vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl_int 
                    = (0x200000000000ULL | (0x781fffffffffffULL 
                                            & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl_int));
            }
        } else {
            vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl_int = 0x27d4400000100ULL;
        }
    } else {
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl_int = 0x27d4400000100ULL;
    }
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_ex_jalr_match 
        = (((0x1fU & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[3U] 
                      >> 0x13U)) == (0x1fU & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                              >> 0xdU))) 
           & (0U != (0x1fU & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U] 
                              >> 0xdU))));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_rdata[0U] 
        = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q;
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__rf_we_ex 
        = (1U & ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[3U] 
                  >> 0x18U) & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[1U] 
                               >> 0xaU)));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__rf_we_wb 
        = ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[1U] 
            >> 0x15U) & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[7U] 
                         >> 0x17U));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_wb_jalr_match 
        = (((0x1fU & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[7U] 
                      >> 0x12U)) == (0x1fU & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                              >> 0xdU))) 
           & (0U != (0x1fU & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U] 
                              >> 0xdU))));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__mul_en 
        = (1U & ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[7U] 
                  >> 0x17U) & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[1U] 
                               >> 0xaU)));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__comp_out 
        = (((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__divisor_q 
             == vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__remainder_q) 
            | ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__remainder_q 
                > vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__divisor_q) 
               ^ (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__comp_inv_q))) 
           & ((~ (IData)((0U != ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[6U] 
                                  << 0xfU) | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[5U] 
                                              >> 0x11U))))) 
              | (0U != vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__remainder_q)));
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__div_signed 
        = ((1U == (3U & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[7U] 
                         >> 0x11U))) | (3U == (3U & 
                                               (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[7U] 
                                                >> 0x11U))));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_3 
        = (1U & ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[5U] 
                  >> 0x10U) & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[1U] 
                               >> 0xaU)));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__div_en 
        = (1U & ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[7U] 
                  >> 0x13U) & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[1U] 
                               >> 0xaU)));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT____VdfgRegularize_h1be56877_2_7 
        = ((2U == (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
                   >> 0x1cU)) | (6U == (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
                                        >> 0x1cU)));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata[0U] 
        = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q;
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__irq_wu_ctrl 
        = (0U != (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q 
                  & vlSelfRef.irq_i));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__id_stage_haltable 
        = (1U & (~ ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__clic_ptr_in_progress_id) 
                    | (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__sequence_in_progress_id))));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__clic_ptr_in_id 
        = ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[4U] 
            >> 0x19U) & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U] 
                         >> 0x1eU));
    vlSymsp->TOP__cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__m_c_obi_data_if.resp_payload 
        = (((QData)((IData)(vlSelfRef.data_rdata_i)) 
            << 3U) | (QData)((IData)((((IData)(vlSelfRef.data_err_i) 
                                       << 1U) | (IData)(vlSelfRef.data_exokay_i)))));
    vlSelfRef.__VdfgRegularize_hd87f99a1_1_6 = (IData)(
                                                       (0x20800U 
                                                        == 
                                                        (0x20800U 
                                                         & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[1U])));
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater 
        = VL_GTS_IQQ(33, (((QData)((IData)((0x8800000U 
                                            == (0x8800000U 
                                                & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[0xaU])))) 
                           << 0x20U) | (QData)((IData)(
                                                       ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                                         << 8U) 
                                                        | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[9U] 
                                                           >> 0x18U))))), 
                     (((QData)((IData)((1U & ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[9U] 
                                               >> 0x17U) 
                                              & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                                 >> 0x1bU))))) 
                       << 0x20U) | (QData)((IData)(
                                                   ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[9U] 
                                                     << 8U) 
                                                    | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[8U] 
                                                       >> 0x18U))))));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__rf_waddr[0U] 
        = (0x1fU & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[7U] 
                    >> 0x12U));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgRegularize_ha32e4db6_0_12 
        = (IData)((0x28000U == (0x28000U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[1U])));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgRegularize_ha32e4db6_0_11 
        = (IData)((0x24000U == (0x24000U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[1U])));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__lsu_en_wb 
        = (1U & ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[4U] 
                  >> 0x1eU) & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[1U] 
                               >> 0x15U)));
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_5 
        = (1U & ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U] 
                  >> 0xeU) & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[1U] 
                              >> 0x15U)));
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal 
        = (((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
             << 8U) | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[9U] 
                       >> 0x18U)) == ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[9U] 
                                       << 8U) | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[8U] 
                                                 >> 0x18U)));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__wb_stage_i__DOT__xif_waiting 
        = (IData)((0x200100U == (0x200100U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[1U])));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__dret_in_wb 
        = (IData)((0x230000U == (0x230000U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[1U])));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_h7e4cdf56__0 
        = (1U & ((IData)((0x220400U == (0x220400U & 
                                        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[1U]))) 
                 | (IData)((0x220200U == (0x220200U 
                                          & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[1U])))));
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__gen_basic_interrupt__DOT__int_controller_i__DOT__irq_local_qual 
        = (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__basic_mode_csrs__DOT__mie_csr_i__DOT__rdata_q 
           & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__gen_basic_interrupt__DOT__int_controller_i__DOT__irq_q);
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__wpt_match = 0U;
    if ((0U != (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__state_q))) {
        if ((1U != (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__state_q))) {
            if ((2U == (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__state_q))) {
                vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__wpt_trans_valid = 1U;
                cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__wpt_match 
                    = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__wpt_match_q;
            }
        }
        if ((1U == (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__state_q))) {
            vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__wpt_block_core = 1U;
        } else if ((2U == (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__state_q))) {
            vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__wpt_block_core = 1U;
        }
    }
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__lsu_interruptible 
        = ((~ (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans_valid_q)) 
           & (0U == (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__cnt_q)));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgRegularize_ha32e4db6_0_23 
        = ((~ (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__csr_flush_ack_q)) 
           & (2U != (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs)));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgRegularize_ha32e4db6_0_19 
        = (1U & (~ (IData)((0x200100U == (0x200100U 
                                          & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[1U])))));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____VdfgExtracted_ha053764d__0 
        = ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__is_clic_ptr_q) 
           | ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__is_mret_ptr_q) 
              | (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__is_tbljmp_ptr_q)));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_async_debug 
        = ((~ (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_q)) 
           & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__woke_to_debug_q));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__imm_i_type 
        = (((- (IData)((1U & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U] 
                              >> 0x1dU)))) << 0xcU) 
           | (0xfffU & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U] 
                        >> 0x12U)));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__rf_rdata_id[0U] 
        = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem
        [(0x1fU & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U] 
                   >> 0xdU))];
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__rf_rdata_id[1U] 
        = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__mem
        [(0x1fU & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U] 
                   >> 0x12U))];
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2 
        = ((2U > (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))
            ? (3U & ((IData)(1U) + (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))
            : 0U);
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____VdfgRegularize_h16c80b4c_4_0 
        = ((2U >= (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)) 
           && (1U & ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_q) 
                     >> (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__fencei_in_wb 
        = (IData)((0x221000U == (0x221000U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[1U])));
    vlSymsp->TOP__cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__m_c_obi_instr_if.resp_payload 
        = (((QData)((IData)(vlSelfRef.instr_rdata_i)) 
            << 1U) | (QData)((IData)(vlSelfRef.instr_err_i)));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____VdfgRegularize_h16c80b4c_0_0 
        = ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr_cnt_q) 
           - (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__pop_q));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0U] 
        = (IData)((1ULL + vlSelfRef.mcycle_o));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[1U] 
        = (IData)(((1ULL + vlSelfRef.mcycle_o) >> 0x20U));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[2U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[3U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[2U])))));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[3U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[3U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[2U])))) 
                   >> 0x20U));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[4U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[5U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[4U])))));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[5U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[5U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[4U])))) 
                   >> 0x20U));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[6U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[7U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[6U])))));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[7U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[7U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[6U])))) 
                   >> 0x20U));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[8U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[9U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[8U])))));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[9U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[9U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[8U])))) 
                   >> 0x20U));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0xaU] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0xbU])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0xaU])))));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0xbU] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0xbU])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0xaU])))) 
                   >> 0x20U));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0xcU] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0xdU])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0xcU])))));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0xdU] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0xdU])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0xcU])))) 
                   >> 0x20U));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0xeU] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0xfU])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0xeU])))));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0xfU] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0xfU])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0xeU])))) 
                   >> 0x20U));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x10U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x11U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x10U])))));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x11U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x11U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x10U])))) 
                   >> 0x20U));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x12U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x13U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x12U])))));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x13U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x13U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x12U])))) 
                   >> 0x20U));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x14U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x15U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x14U])))));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x15U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x15U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x14U])))) 
                   >> 0x20U));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x16U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x17U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x16U])))));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x17U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x17U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x16U])))) 
                   >> 0x20U));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x18U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x19U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x18U])))));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x19U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x19U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x18U])))) 
                   >> 0x20U));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x1aU] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x1bU])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x1aU])))));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x1bU] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x1bU])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x1aU])))) 
                   >> 0x20U));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x1cU] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x1dU])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x1cU])))));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x1dU] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x1dU])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x1cU])))) 
                   >> 0x20U));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x1eU] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x1fU])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x1eU])))));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x1fU] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x1fU])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x1eU])))) 
                   >> 0x20U));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x20U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x21U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x20U])))));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x21U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x21U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x20U])))) 
                   >> 0x20U));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x22U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x23U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x22U])))));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x23U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x23U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x22U])))) 
                   >> 0x20U));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x24U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x25U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x24U])))));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x25U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x25U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x24U])))) 
                   >> 0x20U));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x26U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x27U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x26U])))));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x27U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x27U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x26U])))) 
                   >> 0x20U));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x28U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x29U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x28U])))));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x29U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x29U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x28U])))) 
                   >> 0x20U));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x2aU] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x2bU])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x2aU])))));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x2bU] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x2bU])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x2aU])))) 
                   >> 0x20U));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x2cU] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x2dU])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x2cU])))));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x2dU] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x2dU])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x2cU])))) 
                   >> 0x20U));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x2eU] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x2fU])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x2eU])))));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x2fU] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x2fU])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x2eU])))) 
                   >> 0x20U));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x30U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x31U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x30U])))));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x31U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x31U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x30U])))) 
                   >> 0x20U));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x32U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x33U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x32U])))));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x33U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x33U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x32U])))) 
                   >> 0x20U));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x34U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x35U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x34U])))));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x35U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x35U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x34U])))) 
                   >> 0x20U));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x36U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x37U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x36U])))));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x37U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x37U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x36U])))) 
                   >> 0x20U));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x38U] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x39U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x38U])))));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x39U] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x39U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x38U])))) 
                   >> 0x20U));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x3aU] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x3bU])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x3aU])))));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x3bU] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x3bU])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x3aU])))) 
                   >> 0x20U));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x3cU] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x3dU])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x3cU])))));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x3dU] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x3dU])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x3cU])))) 
                   >> 0x20U));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x3eU] 
        = (IData)((1ULL + (((QData)((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x3fU])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x3eU])))));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_increment[0x3fU] 
        = (IData)(((1ULL + (((QData)((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x3fU])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mhpmcounter_q[0x3eU])))) 
                   >> 0x20U));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl 
        = ((0x20U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[3U])
            ? 0x27d4400000100ULL : vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl_int);
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__tdata1_rdata 
        = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_rdata
        [0U];
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__op_b_is_neg 
        = ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[6U] 
            >> 0x10U) & (IData)(cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__div_signed));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr 
        = ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_3)
            ? (0xfffU & ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[9U] 
                          << 8U) | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[8U] 
                                    >> 0x18U))) : 0U);
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__tdata2_rdata 
        = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
        [0U];
    if ((0U == vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tselect_csr_i__DOT__rdata_q)) {
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__tdata1_rdata 
            = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata1_rdata
            [0U];
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__tdata2_rdata 
            = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tdata2_rdata
            [0U];
    }
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_h161e6967__0 
        = (1U & ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__clic_ptr_in_id) 
                 | ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U] 
                     >> 0x1eU) & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[4U] 
                                  >> 0x18U))));
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_aligned 
        = VL_SHIFTR_QQI(64,64,32, ((((2U == (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__lsu_size_q)) 
                                     & (0U != (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_offset_q))) 
                                    | ((1U == (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__lsu_size_q)) 
                                       & (3U == (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_offset_q))))
                                    ? (((QData)((IData)(
                                                        (vlSymsp->TOP__cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__m_c_obi_data_if.resp_payload 
                                                         >> 3U))) 
                                        << 0x20U) | (QData)((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_q)))
                                    : (((QData)((IData)(
                                                        (vlSymsp->TOP__cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__m_c_obi_data_if.resp_payload 
                                                         >> 3U))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    (vlSymsp->TOP__cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__m_c_obi_data_if.resp_payload 
                                                                     >> 3U))))), 
                        VL_SHIFTL_III(32,32,32, (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_offset_q), 3U));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_nmi_early 
        = ((IData)(vlSelfRef.data_rvalid_i) & (IData)(
                                                      (vlSymsp->TOP__cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__m_c_obi_data_if.resp_payload 
                                                       >> 1U)));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__csr_impl_write_in_wb 
        = (1U & ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[1U] 
                  >> 0x15U) & ((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_1_6) 
                               | ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[1U] 
                                   >> 0x19U) | ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[1U] 
                                                 >> 0x18U) 
                                                | ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                                    >> 0xeU) 
                                                   & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[0U]))))));
    if (cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater) {
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__min_minu_result 
            = ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[9U] 
                << 8U) | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[8U] 
                          >> 0x18U));
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__max_maxu_result 
            = ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                << 8U) | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[9U] 
                          >> 0x18U));
    } else {
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__min_minu_result 
            = ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                << 8U) | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[9U] 
                          >> 0x18U));
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__max_maxu_result 
            = ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[9U] 
                << 8U) | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[8U] 
                          >> 0x18U));
    }
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__ebreak_in_wb 
        = ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgRegularize_ha32e4db6_0_12) 
           & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[1U] 
              >> 0x15U));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__csr_wr_in_wb_flush 
        = ((IData)(cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_5) 
           & (((1U == (3U & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U] 
                             >> 0xcU))) | ((2U == (3U 
                                                   & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                                      >> 0xcU))) 
                                           | (3U == 
                                              (3U & 
                                               (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                                >> 0xcU))))) 
              & (0x17U == (0xfffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U]))));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT____VdfgExtracted_h4f034531__0 
        = ((IData)(cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_greater) 
           | (IData)(cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__irq_req_ctrl 
        = ((0U != cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__gen_basic_interrupt__DOT__int_controller_i__DOT__irq_local_qual) 
           & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_csr_i__DOT__rdata_q 
              >> 3U));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT____Vcellout__gen_basic_interrupt__DOT__int_controller_i__irq_id_ctrl_o 
        = ((cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__gen_basic_interrupt__DOT__int_controller_i__DOT__irq_local_qual 
            >> 0x1fU) ? 0x1fU : ((0x40000000U & cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__gen_basic_interrupt__DOT__int_controller_i__DOT__irq_local_qual)
                                  ? 0x1eU : ((0x20000000U 
                                              & cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__gen_basic_interrupt__DOT__int_controller_i__DOT__irq_local_qual)
                                              ? 0x1dU
                                              : ((0x10000000U 
                                                  & cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__gen_basic_interrupt__DOT__int_controller_i__DOT__irq_local_qual)
                                                  ? 0x1cU
                                                  : 
                                                 ((0x8000000U 
                                                   & cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__gen_basic_interrupt__DOT__int_controller_i__DOT__irq_local_qual)
                                                   ? 0x1bU
                                                   : 
                                                  ((0x4000000U 
                                                    & cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__gen_basic_interrupt__DOT__int_controller_i__DOT__irq_local_qual)
                                                    ? 0x1aU
                                                    : 
                                                   ((0x2000000U 
                                                     & cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__gen_basic_interrupt__DOT__int_controller_i__DOT__irq_local_qual)
                                                     ? 0x19U
                                                     : 
                                                    ((0x1000000U 
                                                      & cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__gen_basic_interrupt__DOT__int_controller_i__DOT__irq_local_qual)
                                                      ? 0x18U
                                                      : 
                                                     ((0x800000U 
                                                       & cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__gen_basic_interrupt__DOT__int_controller_i__DOT__irq_local_qual)
                                                       ? 0x17U
                                                       : 
                                                      ((0x400000U 
                                                        & cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__gen_basic_interrupt__DOT__int_controller_i__DOT__irq_local_qual)
                                                        ? 0x16U
                                                        : 
                                                       ((0x200000U 
                                                         & cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__gen_basic_interrupt__DOT__int_controller_i__DOT__irq_local_qual)
                                                         ? 0x15U
                                                         : 
                                                        ((0x100000U 
                                                          & cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__gen_basic_interrupt__DOT__int_controller_i__DOT__irq_local_qual)
                                                          ? 0x14U
                                                          : 
                                                         ((0x80000U 
                                                           & cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__gen_basic_interrupt__DOT__int_controller_i__DOT__irq_local_qual)
                                                           ? 0x13U
                                                           : 
                                                          ((0x40000U 
                                                            & cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__gen_basic_interrupt__DOT__int_controller_i__DOT__irq_local_qual)
                                                            ? 0x12U
                                                            : 
                                                           ((0x20000U 
                                                             & cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__gen_basic_interrupt__DOT__int_controller_i__DOT__irq_local_qual)
                                                             ? 0x11U
                                                             : 
                                                            ((0x10000U 
                                                              & cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__gen_basic_interrupt__DOT__int_controller_i__DOT__irq_local_qual)
                                                              ? 0x10U
                                                              : 
                                                             ((0x800U 
                                                               & cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__gen_basic_interrupt__DOT__int_controller_i__DOT__irq_local_qual)
                                                               ? 0xbU
                                                               : 
                                                              ((8U 
                                                                & cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__gen_basic_interrupt__DOT__int_controller_i__DOT__irq_local_qual)
                                                                ? 3U
                                                                : 7U))))))))))))))))));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__wpt_match_wb 
        = ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__wb_stage_i__DOT__lsu_valid_q)
            ? vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__wb_stage_i__DOT__lsu_wpt_match_q
            : cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__wpt_match);
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____VdfgRegularize_h16c80b4c_4_4 
        = ((2U >= (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2)) 
           && (1U & ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid_q) 
                     >> (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr2))));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_hebfcbc4a__0 
        = ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__fencei_in_wb) 
           | (0x222000U == (0x222000U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[1U])));
    vlSelfRef.fencei_flush_req_o = ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__fencei_in_wb) 
                                    & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__fence_req_q));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr 
        = ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____VdfgRegularize_h16c80b4c_4_0)
            ? ((0x68U >= ((IData)(3U) + (0x7fU & ((IData)(0x23U) 
                                                  * (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))))
                ? (((0U == (0x1fU & ((IData)(3U) + 
                                     (0x7fU & ((IData)(0x23U) 
                                               * (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))))))
                     ? 0U : (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                             (((IData)(0x22U) + (0x7fU 
                                                 & ((IData)(0x23U) 
                                                    * (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))) 
                              >> 5U)] << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((IData)(3U) 
                                                + (0x7fU 
                                                   & ((IData)(0x23U) 
                                                      * (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))))))) 
                   | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_q[
                      (((IData)(3U) + (0x7fU & ((IData)(0x23U) 
                                                * (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))) 
                       >> 5U)] >> (0x1fU & ((IData)(3U) 
                                            + (0x7fU 
                                               & ((IData)(0x23U) 
                                                  * (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))))))
                : 0U) : (IData)((vlSymsp->TOP__cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__m_c_obi_instr_if.resp_payload 
                                 >> 1U)));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT____VdfgRegularize_h6404b41a_0_3 
        = ((IData)(cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__div_signed) 
           & ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[7U] 
               >> 0x10U) ^ (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__op_b_is_neg)));
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
        = ((0x20000U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[7U])
            ? ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__op_b_is_neg)
                ? (1U | ((~ ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[6U] 
                              << 0xfU) | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[5U] 
                                          >> 0x11U))) 
                         << 1U)) : ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[6U] 
                                     << 0xfU) | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[5U] 
                                                 >> 0x11U)))
            : ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[6U] 
                << 0xfU) | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[5U] 
                            >> 0x11U)));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__csr_counter_read = 0U;
    if ((0x800U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
        if ((0x400U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
            if ((1U & (~ ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr) 
                          >> 9U)))) {
                if ((1U & (~ ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr) 
                              >> 8U)))) {
                    if ((0x80U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                        if ((1U & (~ ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr) 
                                      >> 6U)))) {
                            if ((1U & (~ ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr) 
                                          >> 5U)))) {
                                if ((0x10U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__csr_counter_read = 1U;
                                } else if ((8U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__csr_counter_read = 1U;
                                } else if ((4U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__csr_counter_read = 1U;
                                } else if ((2U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__csr_counter_read = 1U;
                                } else if ((1U & (~ (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)))) {
                                    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__csr_counter_read = 1U;
                                }
                            }
                        }
                    } else if ((1U & (~ ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr) 
                                         >> 6U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr) 
                                      >> 5U)))) {
                            if ((0x10U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__csr_counter_read = 1U;
                            } else if ((8U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__csr_counter_read = 1U;
                            } else if ((4U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__csr_counter_read = 1U;
                            } else if ((2U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__csr_counter_read = 1U;
                            } else if ((1U & (~ (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)))) {
                                vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__csr_counter_read = 1U;
                            }
                        }
                    }
                }
            }
        } else if ((0x200U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
            if ((0x100U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                if ((0x80U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                    if ((1U & (~ ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr) 
                                  >> 6U)))) {
                        if ((1U & (~ ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr) 
                                      >> 5U)))) {
                            if ((0x10U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__csr_counter_read = 1U;
                            } else if ((8U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__csr_counter_read = 1U;
                            } else if ((4U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__csr_counter_read = 1U;
                            } else if ((2U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__csr_counter_read = 1U;
                            } else if ((1U & (~ (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)))) {
                                vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__csr_counter_read = 1U;
                            }
                        }
                    }
                } else if ((1U & (~ ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr) 
                                     >> 6U)))) {
                    if ((1U & (~ ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr) 
                                  >> 5U)))) {
                        if ((0x10U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                            vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__csr_counter_read = 1U;
                        } else if ((8U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                            vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__csr_counter_read = 1U;
                        } else if ((4U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                            vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__csr_counter_read = 1U;
                        } else if ((2U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                            vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__csr_counter_read = 1U;
                        } else if ((1U & (~ (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)))) {
                            vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__csr_counter_read = 1U;
                        }
                    }
                }
            }
        }
    }
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__csr_hz 
        = (0x3ffffffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__csr_hz);
    if ((1U & (~ ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr) 
                  >> 0xbU)))) {
        if ((0x400U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
            if ((0x200U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                if ((0x100U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                    if ((0x80U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                        if ((1U & (~ ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr) 
                                      >> 6U)))) {
                            if ((0x20U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr))) {
                                if ((1U & (~ ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr) 
                                              >> 4U)))) {
                                    if ((1U & (~ ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr) 
                                                  >> 3U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr) 
                                                    >> 2U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr) 
                                                     >> 1U)))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr)))) {
                                                    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__csr_hz 
                                                        = 
                                                        (0x4000000U 
                                                         | vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__csr_hz);
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
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__csr_hz 
        = ((0xc000000U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__csr_hz) 
           | (((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_3) 
               << 0x19U) | ((((IData)(cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT____VdfgRegularize_h3edf1550_1_5) 
                              & (0U != (3U & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                              >> 0xcU)))) 
                             << 0x18U) | (((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_raddr) 
                                           << 0xcU) 
                                          | (0xfffU 
                                             & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U])))));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_ext 
        = ((0U == (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__lsu_size_q))
            ? (((- (IData)(((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__lsu_sext_q) 
                            & (IData)((cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_aligned 
                                       >> 7U))))) << 8U) 
               | (0xffU & (IData)(cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_aligned)))
            : ((1U == (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__lsu_size_q))
                ? (((- (IData)(((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__lsu_sext_q) 
                                & (IData)((cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_aligned 
                                           >> 0xfU))))) 
                    << 0x10U) | (0xffffU & (IData)(cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_aligned)))
                : (IData)(cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_aligned)));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__lsu_err_wb 
        = (((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_nmi_early) 
            << 1U) | ((5U >= (7U & VL_SHIFTL_III(3,3,32, (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__response_filter_i__DOT__bus_cnt_q), 1U))) 
                      && (1U & ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__response_filter_i__DOT__outstanding_q) 
                                >> (7U & VL_SHIFTL_III(3,3,32, (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__response_filter_i__DOT__bus_cnt_q), 1U))))));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__csr_write_in_wb 
        = (1U & ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[1U] 
                  >> 0x15U) & ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                >> 0xeU) | (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__csr_impl_write_in_wb))));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgRegularize_ha32e4db6_0_21 
        = ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__ebreak_in_wb) 
           & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_q));
    __Vtableidx2 = ((0x200U & ((~ (IData)(cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal)) 
                               << 9U)) | ((0x100U & 
                                           ((~ (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT____VdfgExtracted_h4f034531__0)) 
                                            << 8U)) 
                                          | (((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT____VdfgExtracted_h4f034531__0) 
                                              << 7U) 
                                             | ((0x7eU 
                                                 & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                                    >> 0x17U)) 
                                                | (IData)(cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__is_equal)))));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_cmp_result 
        = Vcv32e40x_gvsoc_core_lint_top__ConstPool__TABLE_h6c26a863_0
        [__Vtableidx2];
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__trigger_match_in_wb 
        = ((0U != (((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[4U] 
                     << 2U) | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[3U] 
                               >> 0x1eU)) | vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__wpt_match_wb)) 
           & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[1U] 
              >> 0x15U));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgRegularize_ha32e4db6_0_18 
        = (1U & (~ ((IData)(vlSelfRef.fencei_flush_req_o) 
                    | (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__fencei_req_and_ack_q))));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__aligned_is_compressed 
        = ((~ (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____VdfgExtracted_ha053764d__0)) 
           & (3U != (3U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr)));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__unaligned_is_compressed 
        = ((~ (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____VdfgExtracted_ha053764d__0)) 
           & (3U != (3U & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr 
                           >> 0x10U))));
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__div_clz_data_rev 
        = ((cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
            << 0x1fU) | ((0x40000000U & (cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                                         << 0x1dU)) 
                         | ((0x20000000U & (cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                                            << 0x1bU)) 
                            | ((0x10000000U & (cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                                               << 0x19U)) 
                               | ((0x8000000U & (cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                                                 << 0x17U)) 
                                  | ((0x4000000U & 
                                      (cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                                       << 0x15U)) | 
                                     ((0x2000000U & 
                                       (cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                                        << 0x13U)) 
                                      | ((0x1000000U 
                                          & (cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                                             << 0x11U)) 
                                         | ((0x800000U 
                                             & (cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                                                << 0xfU)) 
                                            | ((0x400000U 
                                                & (cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                                                   << 0xdU)) 
                                               | ((0x200000U 
                                                   & (cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                                                      << 0xbU)) 
                                                  | ((0x100000U 
                                                      & (cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                                                         << 9U)) 
                                                     | ((0x80000U 
                                                         & (cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                                                            << 7U)) 
                                                        | ((0x40000U 
                                                            & (cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                                                               << 5U)) 
                                                           | ((0x20000U 
                                                               & (cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                                                                  << 3U)) 
                                                              | ((0x10000U 
                                                                  & (cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                                                                     << 1U)) 
                                                                 | ((0x8000U 
                                                                     & (cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                                                                        >> 1U)) 
                                                                    | ((0x4000U 
                                                                        & (cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                                                                           >> 3U)) 
                                                                       | ((0x2000U 
                                                                           & (cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                                                                              >> 5U)) 
                                                                          | ((0x1000U 
                                                                              & (cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                                                                                >> 7U)) 
                                                                             | ((0x800U 
                                                                                & (cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                                                                                >> 9U)) 
                                                                                | ((0x400U 
                                                                                & (cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                                                                                >> 0xbU)) 
                                                                                | ((0x200U 
                                                                                & (cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                                                                                >> 0xdU)) 
                                                                                | ((0x100U 
                                                                                & (cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                                                                                >> 0xfU)) 
                                                                                | ((0x80U 
                                                                                & (cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                                                                                >> 0x11U)) 
                                                                                | ((0x40U 
                                                                                & (cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                                                                                >> 0x13U)) 
                                                                                | ((0x20U 
                                                                                & (cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                                                                                >> 0x15U)) 
                                                                                | ((0x10U 
                                                                                & (cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                                                                                >> 0x17U)) 
                                                                                | ((8U 
                                                                                & (cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                                                                                >> 0x19U)) 
                                                                                | ((4U 
                                                                                & (cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                                                                                >> 0x1bU)) 
                                                                                | ((2U 
                                                                                & (cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                                                                                >> 0x1dU)) 
                                                                                | (cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__alu_clz_data 
                                                                                >> 0x1fU))))))))))))))))))))))))))))))));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__rf_wdata_wb 
        = ((0x40000000U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[4U])
            ? vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__rdata_ext
            : ((0x100U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[1U])
                ? 0U : ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[7U] 
                         << 0xeU) | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                     >> 0x12U))));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__branch_taken_ex 
        = ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
            >> 0x1fU) & ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[0xbU] 
                          & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[1U] 
                             >> 0xaU)) & ((~ (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__branch_taken_q)) 
                                          & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_cmp_result))));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_ha9ecc2ef__0 
        = ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_async_debug) 
           & ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__lsu_interruptible) 
              & ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgRegularize_ha32e4db6_0_18) 
                 & ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgRegularize_ha32e4db6_0_19) 
                    & ((~ (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__sequence_in_progress_wb)) 
                       & ((~ (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__woke_to_interrupt_q)) 
                          & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgRegularize_ha32e4db6_0_23)))))));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr_n 
        = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr;
    if ((2U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_q)) {
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr_n 
            = ((2U > (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))
                ? (3U & ((IData)(1U) + (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))
                : 0U);
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_n 
            = ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__unaligned_is_compressed)
                ? (0xfffffffcU & ((IData)(4U) + (0xfffffffcU 
                                                 & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_q)))
                : (2U | (0xfffffffcU & ((IData)(4U) 
                                        + (0xfffffffcU 
                                           & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_q)))));
    } else {
        if ((1U & (~ (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__aligned_is_compressed)))) {
            vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr_n 
                = ((2U > (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr))
                    ? (3U & ((IData)(1U) + (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__rptr)))
                    : 0U);
        }
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_n 
            = ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__aligned_is_compressed)
                ? (2U | (0xfffffffcU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_q))
                : (0xfffffffcU & ((IData)(4U) + (0xfffffffcU 
                                                 & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_q))));
    }
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__clz_data_in 
        = ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__div_en)
            ? cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__div_clz_data_rev
            : ((0x28U == (0x3fU & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                   >> 0x18U))) ? ((
                                                   vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                                   << 8U) 
                                                  | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[9U] 
                                                     >> 0x18U))
                : VL_STREAML_FAST_III(32, ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                            << 8U) 
                                           | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[9U] 
                                              >> 0x18U)), 0)));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__rf_wdata[0U] 
        = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__rf_wdata_wb;
}
