// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcv32e40x_gvsoc_core_lint_top.h for the primary calling header

#include "Vcv32e40x_gvsoc_core_lint_top__pch.h"
#include "Vcv32e40x_gvsoc_core_lint_top___024root.h"

VL_INLINE_OPT void Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__4(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcv32e40x_gvsoc_core_lint_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__4\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_byp 
        = (0x3f7ffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_byp);
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_byp 
        = (0x3ffefU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_byp);
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_byp 
        = (0x3f9ffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_byp);
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_byp 
        = (0x3ffdfU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_byp);
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_byp 
        = (0x3fffdU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_byp);
    if ((1U & (IData)(((0U != (0x3b000000U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[4U])) 
                       | (0U != ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[3U] 
                                  << 0x1dU) | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[2U] 
                                               >> 3U))))))) {
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_byp 
            = (0x10U | vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_byp);
    }
    if ((((((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[5U] 
             >> 0xdU) | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[1U] 
                         >> 7U)) & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__rf_we_ex)) 
          & (0U != (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_ex_match))) 
         | (((~ (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__wb_ready)) 
             & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__rf_we_wb)) 
            & (0U != (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_wb_match))))) {
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_byp 
            = (0x800U | vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_byp);
    }
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_byp 
        = ((0x3efffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_byp) 
           | (0x3000U & (((((~ (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[3U] 
                                >> 5U)) & (IData)((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                                   >> 0x33U))) 
                           << 0xcU) & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                       >> 0x12U)) & 
                         ((((((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__rf_we_wb) 
                              & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_wb_jalr_match)) 
                             & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__lsu_en_wb)) 
                            << 0xcU) | (0x1000U & (
                                                   (((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__rf_we_wb) 
                                                     & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_wb_jalr_match)) 
                                                    << 0xcU) 
                                                   & ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[4U] 
                                                       >> 0x13U) 
                                                      & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                                         >> 2U))))) 
                          | (((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__rf_we_ex) 
                              & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__rf_rd_ex_jalr_match)) 
                             << 0xcU)))));
    if ((1U & (((IData)(vlSelfRef.__VdfgRegularize_hd87f99a1_1_5) 
                | ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[4U] 
                    >> 0x17U) & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U] 
                                 >> 0x1eU))) & (((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[1U] 
                                                  >> 0xaU) 
                                                 & ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[5U] 
                                                     >> 0x10U) 
                                                    | ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[1U] 
                                                        >> 0xaU) 
                                                       & (((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[5U] 
                                                            >> 2U) 
                                                           & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[4U] 
                                                              >> 0x1cU)) 
                                                          | ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[1U] 
                                                              >> 0xeU) 
                                                             | ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[1U] 
                                                                 >> 0xdU) 
                                                                | ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[5U] 
                                                                    >> 0x10U) 
                                                                   & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__csr_hz 
                                                                      >> 0x1aU)))))))) 
                                                | (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__csr_write_in_wb))))) {
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_byp 
            = (0x400U | vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_byp);
    }
    if (((((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__csr_hz 
            >> 0x1bU) & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__csr_write_in_wb)) 
          | (((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[5U] 
               >> 0x10U) & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[1U] 
                            >> 0xaU)) & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT__csr_impl_write_in_wb))) 
         | (IData)(((0x3000000U == (0x3000000U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__csr_hz)) 
                    & ((0xfffU & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__csr_hz 
                                  >> 0xcU)) == (0xfffU 
                                                & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__csr_hz)))))) {
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_byp 
            = (0x200U | vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_byp);
    }
    if (((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__csr_counter_read) 
         & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[1U] 
            >> 0x15U))) {
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_byp 
            = (0x20U | vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_byp);
    }
    if ((((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mie_we) 
          | ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_we) 
             | (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__priv_lvl_we))) 
         & ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[1U] 
             >> 0xaU) & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[5U] 
                         >> 0xdU)))) {
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_byp 
            = (2U | vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_byp);
    }
}

VL_INLINE_OPT void Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__5(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcv32e40x_gvsoc_core_lint_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__5\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__done_0 
        = (((~ (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__lsu_valid_ex)) 
            | (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT____VdfgRegularize_h39df9a1d_1_1)) 
           & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__wb_ready));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_valid 
        = ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__instr_valid) 
           & ((((0U != (0x6080U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[1U])) 
                | (0U != (0x10004U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[5U]))) 
               | vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[0xbU]) 
              | (((((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[7U] 
                     >> 0x17U) & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__mul_valid)) 
                   | ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[7U] 
                       >> 0x13U) & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__div_valid))) 
                  | ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[5U] 
                      >> 0xdU) & ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT____VdfgRegularize_h39df9a1d_1_1) 
                                  & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__lsu_valid_ex)))) 
                 | (1U & ((((0U != (0x70000U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[1U])) 
                            | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[4U] 
                               >> 0x19U)) | (0U != 
                                             ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[4U] 
                                               << 7U) 
                                              | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[3U] 
                                                 >> 0x19U)))) 
                          & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[1U] 
                             >> 0xaU))))));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__ctrl_update 
        = ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__done_0) 
           & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__lsu_valid_ex));
}

VL_INLINE_OPT void Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__6(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcv32e40x_gvsoc_core_lint_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__6\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_valid 
        = ((1U & (~ (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U] 
                     >> 0x10U))) && ((2U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__addr_q)
                                      ? ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid) 
                                         && ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____VdfgExtracted_ha053764d__0)
                                              ? (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid)
                                              : ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__unaligned_is_compressed)
                                                  ? (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid)
                                                  : 
                                                 ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____VdfgRegularize_h16c80b4c_4_4) 
                                                  | ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT____VdfgRegularize_h16c80b4c_4_0) 
                                                     & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_valid_gated))))))
                                      : (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__valid)));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_valid 
        = ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_valid) 
           & (IData)((0U == (0x210000U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U]))));
}

VL_INLINE_OPT void Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__7(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcv32e40x_gvsoc_core_lint_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__7\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__rf_we[0U] 
        = ((~ (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__wb_stage_i__DOT__lsu_exception)) 
           & ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[7U] 
               >> 0x17U) & ((~ (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__wb_stage_i__DOT__xif_waiting)) 
                            & ((~ (IData)((0U != vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__wpt_match_wb))) 
                               & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__wb_stage_i__DOT__instr_valid)))));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xfffffffeU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | ((0U == vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__rf_waddr
                      [0U]) & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__rf_we
                     [0U]));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xfffffffdU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((1U == vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__rf_waddr
                       [0U]) & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__rf_we
                      [0U]) << 1U));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xfffffffbU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((2U == vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__rf_waddr
                       [0U]) & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__rf_we
                      [0U]) << 2U));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xfffffff7U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((3U == vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__rf_waddr
                       [0U]) & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__rf_we
                      [0U]) << 3U));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xffffffefU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((4U == vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__rf_waddr
                       [0U]) & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__rf_we
                      [0U]) << 4U));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xffffffdfU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((5U == vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__rf_waddr
                       [0U]) & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__rf_we
                      [0U]) << 5U));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xffffffbfU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((6U == vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__rf_waddr
                       [0U]) & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__rf_we
                      [0U]) << 6U));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xffffff7fU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((7U == vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__rf_waddr
                       [0U]) & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__rf_we
                      [0U]) << 7U));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xfffffeffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((8U == vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__rf_waddr
                       [0U]) & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__rf_we
                      [0U]) << 8U));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xfffffdffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((9U == vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__rf_waddr
                       [0U]) & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__rf_we
                      [0U]) << 9U));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xfffffbffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0xaU == vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__rf_waddr
                       [0U]) & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__rf_we
                      [0U]) << 0xaU));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xfffff7ffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0xbU == vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__rf_waddr
                       [0U]) & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__rf_we
                      [0U]) << 0xbU));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xffffefffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0xcU == vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__rf_waddr
                       [0U]) & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__rf_we
                      [0U]) << 0xcU));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xffffdfffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0xdU == vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__rf_waddr
                       [0U]) & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__rf_we
                      [0U]) << 0xdU));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xffffbfffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0xeU == vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__rf_waddr
                       [0U]) & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__rf_we
                      [0U]) << 0xeU));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xffff7fffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0xfU == vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__rf_waddr
                       [0U]) & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__rf_we
                      [0U]) << 0xfU));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xfffeffffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0x10U == vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__rf_waddr
                       [0U]) & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__rf_we
                      [0U]) << 0x10U));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xfffdffffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0x11U == vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__rf_waddr
                       [0U]) & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__rf_we
                      [0U]) << 0x11U));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xfffbffffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0x12U == vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__rf_waddr
                       [0U]) & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__rf_we
                      [0U]) << 0x12U));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xfff7ffffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0x13U == vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__rf_waddr
                       [0U]) & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__rf_we
                      [0U]) << 0x13U));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xffefffffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0x14U == vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__rf_waddr
                       [0U]) & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__rf_we
                      [0U]) << 0x14U));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xffdfffffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0x15U == vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__rf_waddr
                       [0U]) & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__rf_we
                      [0U]) << 0x15U));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xffbfffffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0x16U == vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__rf_waddr
                       [0U]) & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__rf_we
                      [0U]) << 0x16U));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xff7fffffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0x17U == vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__rf_waddr
                       [0U]) & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__rf_we
                      [0U]) << 0x17U));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xfeffffffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0x18U == vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__rf_waddr
                       [0U]) & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__rf_we
                      [0U]) << 0x18U));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xfdffffffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0x19U == vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__rf_waddr
                       [0U]) & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__rf_we
                      [0U]) << 0x19U));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xfbffffffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0x1aU == vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__rf_waddr
                       [0U]) & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__rf_we
                      [0U]) << 0x1aU));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xf7ffffffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0x1bU == vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__rf_waddr
                       [0U]) & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__rf_we
                      [0U]) << 0x1bU));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xefffffffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0x1cU == vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__rf_waddr
                       [0U]) & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__rf_we
                      [0U]) << 0x1cU));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xdfffffffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0x1dU == vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__rf_waddr
                       [0U]) & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__rf_we
                      [0U]) << 0x1dU));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xbfffffffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0x1eU == vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__rf_waddr
                       [0U]) & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__rf_we
                      [0U]) << 0x1eU));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0x7fffffffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0x1fU == vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__rf_waddr
                       [0U]) & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__rf_we
                      [0U]) << 0x1fU));
}

VL_INLINE_OPT void Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__8(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcv32e40x_gvsoc_core_lint_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__8\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__wpt_block_bus;
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__wpt_block_bus = 0;
    // Body
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__trigger_match_ex 
        = ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT____VdfgRegularize_h1be56877_2_7) 
           & ((((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
                 >> 6U) & (0x300U == (0x300U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[1U]))) 
               | ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
                   >> 3U) & (0U == (0x300U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[1U])))) 
              & (((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__lsu_valid_ex) 
                  & ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
                      & (~ (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                            >> 0xaU))) | ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
                                           >> 1U) & 
                                          (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                           >> 0xaU)))) 
                 & ((~ (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[4U] 
                        >> 0x13U)) & ((0U == (0xfU 
                                              & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
                                                 >> 7U)))
                                       ? (((0x3fffffffU 
                                            & ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__wpt_trans[2U] 
                                                << 0xdU) 
                                               | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                                  >> 0x13U))) 
                                           == (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q 
                                               >> 2U)) 
                                          & (0U != 
                                             vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__lsu_byte_addr_match
                                             [0U]))
                                       : ((2U == (0xfU 
                                                  & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
                                                     >> 7U)))
                                           ? (((0xfffffffcU 
                                                & ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__wpt_trans[2U] 
                                                    << 0xfU) 
                                                   | (0x7ffcU 
                                                      & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                                         >> 0x11U)))) 
                                               | (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__lsu_addr_high_lsb)) 
                                              >= vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q)
                                           : (((0xfffffffcU 
                                                & ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__wpt_trans[2U] 
                                                    << 0xfU) 
                                                   | (0x7ffcU 
                                                      & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                                                         >> 0x11U)))) 
                                               | (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__lsu_addr_low_lsb)) 
                                              < vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata2_csr_i__DOT__rdata_q)))))));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__mpu_i__DOT__pma_err = 0U;
    if ((0x10000U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__wpt_trans[1U])) {
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__mpu_i__DOT__pma_err = 1U;
    }
    if ((((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__misaligned_access) 
          | (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__modified_access)) 
         & (~ (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__mpu_i__DOT__pma_i__DOT__pma_cfg[0U] 
               >> 3U)))) {
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__mpu_i__DOT__pma_err = 1U;
    }
    if ((1U & ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[1U] 
                >> 0xbU) & (~ (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__mpu_i__DOT__pma_i__DOT__pma_cfg[0U] 
                               >> 3U))))) {
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__mpu_i__DOT__pma_err = 1U;
    }
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__wpt_match_n 
        = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__wpt_match_q;
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__wpt_trans_ready = 0U;
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__wpt_block_bus = 0U;
    if ((0U == (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__state_q))) {
        if (((0U != vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__trigger_match_ex) 
             & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans_valid))) {
            vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__wpt_match_n 
                = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__trigger_match_ex;
            vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__wpt_trans_ready = 1U;
            cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__wpt_block_bus = 1U;
        }
    } else {
        if ((1U != (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__state_q))) {
            if ((2U == (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__state_q))) {
                vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__wpt_match_n = 0U;
            }
        }
        if ((1U == (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__state_q))) {
            cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__wpt_block_bus = 1U;
        } else if ((2U == (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__state_q))) {
            cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__wpt_block_bus = 1U;
        }
    }
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__mpu_trans_valid 
        = ((~ (IData)(cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__wpt_block_bus)) 
           & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans_valid));
}

VL_INLINE_OPT void Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__10(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcv32e40x_gvsoc_core_lint_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__10\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U] 
        = ((0xffffe000U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U]) 
           | (((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__exception_in_wb) 
               << 0xbU) | (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__exception_cause_wb)));
}

VL_INLINE_OPT void Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__12(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcv32e40x_gvsoc_core_lint_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__12\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__wb_valid 
        = ((((~ (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[4U] 
                 >> 0x1eU)) & (~ (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__wb_stage_i__DOT__xif_waiting))) 
            | ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[4U] 
                >> 0x1eU) & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__wb_stage_i__DOT__lsu_valid))) 
           & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__wb_stage_i__DOT__instr_valid));
}

VL_INLINE_OPT void Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__13(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcv32e40x_gvsoc_core_lint_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__13\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__csr_flush_ack_n = 0U;
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__fence_req_clr = 1U;
    if ((1U & (~ ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs) 
                  >> 1U)))) {
        if ((1U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs))) {
            if ((1U & (~ (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_ha7292f8a__0)))) {
                if ((1U & (~ (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_ha9ecc2ef__0)))) {
                    if ((1U & (~ (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_h225c6b2f__0)))) {
                        if ((1U & (~ (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_h7c88e781__0)))) {
                            if ((1U & (~ (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__exception_in_wb)))) {
                                if ((1U & (~ (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_h7e4cdf56__0)))) {
                                    if ((1U & (~ (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_hebfcbc4a__0)))) {
                                        if ((1U & (~ (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__dret_in_wb)))) {
                                            if (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__csr_wr_in_wb_flush) {
                                                vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__csr_flush_ack_n = 1U;
                                            }
                                        }
                                    }
                                    if (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_hebfcbc4a__0) {
                                        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__fence_req_clr = 0U;
                                        if (((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__fencei_in_wb)
                                              ? (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__fencei_req_and_ack_q)
                                              : (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__fence_req_q))) {
                                            vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__fence_req_clr = 1U;
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

VL_INLINE_OPT void Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__14(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcv32e40x_gvsoc_core_lint_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__14\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*31:0*/ __Vtemp_1;
    // Body
    __Vtemp_1 = (((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__nmi_pending_q) 
                  << 6U) | (((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__wb_counter_event_gated) 
                             << 5U) | ((0x3f0U & (((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__wb_counter_event_gated) 
                                                   << 4U) 
                                                  & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[1U] 
                                                     >> 0x16U))) 
                                       | ((0x3fff8U 
                                           & (((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__wb_counter_event_gated) 
                                               << 3U) 
                                              & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                                 >> 0xeU))) 
                                          | ((0x3fffcU 
                                              & (((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__wb_counter_event_gated) 
                                                  << 2U) 
                                                 & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                                    >> 0xeU))) 
                                             | ((0x3fffeU 
                                                 & (((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__wb_counter_event_gated) 
                                                     << 1U) 
                                                    & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                                       >> 0xeU))) 
                                                | (1U 
                                                   & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[5U] 
                                                      >> 0xbU))))))));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U] 
        = ((0x7fffffffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U]) 
           | (0x80000000U & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[5U] 
                             << 0x14U)));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[1U] 
        = ((0xffffffc0U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[1U]) 
           | (__Vtemp_1 >> 1U));
}

VL_INLINE_OPT void Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__15(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcv32e40x_gvsoc_core_lint_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__15\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*5:0*/ cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_shamt;
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_shamt = 0;
    // Body
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__div_clz_result 
        = ((1U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__sel_nodes)
            ? (0x1fU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__ff_one_i__DOT__index_nodes[0U])
            : 0x20U);
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_shamt 
        = (0x3fU & ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__div_en)
                     ? (0x1fU & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__div_clz_result))
                     : ((0x4000000U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[0xaU])
                         ? (- (0x1fU & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[8U] 
                                        >> 0x18U)))
                         : (0x1fU & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[8U] 
                                     >> 0x18U)))));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp 
        = (((QData)((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_bb)) 
            << 0x20U) | (QData)((IData)(((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__div_en)
                                          ? ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[6U] 
                                              << 0xfU) 
                                             | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[5U] 
                                                >> 0x11U))
                                          : ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                              << 8U) 
                                             | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[9U] 
                                                >> 0x18U))))));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp 
        = ((0x20U & (IData)(cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_shamt))
            ? (((QData)((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp)) 
                << 0x20U) | (QData)((IData)((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp 
                                             >> 0x20U))))
            : vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp);
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp 
        = ((0x10U & (IData)(cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_shamt))
            ? ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp 
                << 0x10U) | (QData)((IData)((0xffffU 
                                             & (IData)(
                                                       (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp 
                                                        >> 0x30U))))))
            : vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp);
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp 
        = ((8U & (IData)(cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_shamt))
            ? ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp 
                << 8U) | (QData)((IData)((0xffU & (IData)(
                                                          (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp 
                                                           >> 0x38U))))))
            : vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp);
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp 
        = ((4U & (IData)(cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_shamt))
            ? ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp 
                << 4U) | (QData)((IData)((0xfU & (IData)(
                                                         (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp 
                                                          >> 0x3cU))))))
            : vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp);
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp 
        = ((2U & (IData)(cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_shamt))
            ? ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp 
                << 2U) | (QData)((IData)((3U & (IData)(
                                                       (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp 
                                                        >> 0x3eU))))))
            : vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp);
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp 
        = ((1U & (IData)(cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_shamt))
            ? ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp 
                << 1U) | (QData)((IData)((1U & (IData)(
                                                       (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp 
                                                        >> 0x3fU))))))
            : vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp);
}

VL_INLINE_OPT void Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__17(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcv32e40x_gvsoc_core_lint_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__17\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__abort_op_id 
        = (1U & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[0U] 
                 | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_byp 
                    >> 3U)));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__lsu_en 
        = (1U & ((~ (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_byp 
                     >> 4U)) & (IData)((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                        >> 0x14U))));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__div_en 
        = (1U & ((~ (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_byp 
                     >> 4U)) & ((~ (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[3U] 
                                    >> 5U)) & (IData)(
                                                      (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl_int 
                                                       >> 0x1dU)))));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__mul_en 
        = (1U & ((~ (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_byp 
                     >> 4U)) & ((~ (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[3U] 
                                    >> 5U)) & (IData)(
                                                      (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_m_ctrl_int 
                                                       >> 0x21U)))));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__csr_en 
        = (1U & ((~ (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_byp 
                     >> 4U)) & ((~ (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[3U] 
                                    >> 5U)) & (IData)(
                                                      (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_i_ctrl_int 
                                                       >> 0x17U)))));
}

VL_INLINE_OPT void Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__18(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcv32e40x_gvsoc_core_lint_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__18\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_ready 
        = (1U & ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U] 
                  >> 0xeU) | ((((((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__wb_ready) 
                                  & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__mul_ready)) 
                                 & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__div_ready)) 
                                & (~ (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__lsu_split_ex))) 
                               & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__done_0)) 
                              & (~ (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U] 
                                    >> 0x13U)))));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgRegularize_ha32e4db6_0_22 
        = ((~ (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_valid)) 
           & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_ready));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ready 
        = (1U & ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U] 
                  >> 0xfU) | ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_ready) 
                              & (~ (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U] 
                                    >> 0x14U)))));
}

extern const VlUnpacked<CData/*2:0*/, 128> Vcv32e40x_gvsoc_core_lint_top__ConstPool__TABLE_h928c1eb8_0;
extern const VlUnpacked<CData/*1:0*/, 128> Vcv32e40x_gvsoc_core_lint_top__ConstPool__TABLE_hcacbed6f_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vcv32e40x_gvsoc_core_lint_top__ConstPool__TABLE_h38655317_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vcv32e40x_gvsoc_core_lint_top__ConstPool__TABLE_h8ce825a6_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vcv32e40x_gvsoc_core_lint_top__ConstPool__TABLE_h230fdf7d_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vcv32e40x_gvsoc_core_lint_top__ConstPool__TABLE_hd6aeed19_0;
extern const VlUnpacked<CData/*2:0*/, 128> Vcv32e40x_gvsoc_core_lint_top__ConstPool__TABLE_hc01e932a_0;
extern const VlUnpacked<CData/*1:0*/, 128> Vcv32e40x_gvsoc_core_lint_top__ConstPool__TABLE_h7adbf5ec_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vcv32e40x_gvsoc_core_lint_top__ConstPool__TABLE_h652a5a6c_0;
extern const VlUnpacked<CData/*0:0*/, 16> Vcv32e40x_gvsoc_core_lint_top__ConstPool__TABLE_h7a7988dd_0;

VL_INLINE_OPT void Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__19(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcv32e40x_gvsoc_core_lint_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__19\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__alcheck_trans_valid;
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__alcheck_trans_valid = 0;
    CData/*0:0*/ cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_block_bus;
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_block_bus = 0;
    CData/*1:0*/ cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_status;
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_status = 0;
    CData/*0:0*/ cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__align_check_i__DOT__align_block_bus;
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__align_check_i__DOT__align_block_bus = 0;
    CData/*1:0*/ cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__align_check_i__DOT__align_status;
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__align_check_i__DOT__align_status = 0;
    CData/*0:0*/ cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__response_filter_i__DOT__bus_count_up;
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__response_filter_i__DOT__bus_count_up = 0;
    CData/*6:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    CData/*6:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    CData/*3:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    // Body
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__state_n 
        = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__state_q;
    if ((0U == (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__state_q))) {
        if (((0U != vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__trigger_match_ex) 
             & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans_valid))) {
            vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__state_n 
                = ((1U == (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__next_cnt))
                    ? 2U : 1U);
        }
    } else if ((1U == (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__state_q))) {
        if ((1U == (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__next_cnt))) {
            vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__state_n = 2U;
        }
    } else if ((2U == (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__state_q))) {
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__state_n = 0U;
    }
    __Vtableidx4 = ((0x40U & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__wpt_trans[1U] 
                              >> 4U)) | (((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__mpu_trans_valid) 
                                          << 5U) | 
                                         (((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__mpu_i__DOT__pma_err) 
                                           << 4U) | 
                                          (((1U == (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__next_cnt)) 
                                            << 3U) 
                                           | (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__mpu_i__DOT__state_q)))));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__mpu_i__DOT__state_n 
        = Vcv32e40x_gvsoc_core_lint_top__ConstPool__TABLE_h928c1eb8_0
        [__Vtableidx4];
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_status 
        = Vcv32e40x_gvsoc_core_lint_top__ConstPool__TABLE_hcacbed6f_0
        [__Vtableidx4];
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_block_core 
        = Vcv32e40x_gvsoc_core_lint_top__ConstPool__TABLE_h38655317_0
        [__Vtableidx4];
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_block_bus 
        = Vcv32e40x_gvsoc_core_lint_top__ConstPool__TABLE_h8ce825a6_0
        [__Vtableidx4];
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_err_trans_valid 
        = Vcv32e40x_gvsoc_core_lint_top__ConstPool__TABLE_h230fdf7d_0
        [__Vtableidx4];
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_err_trans_ready 
        = Vcv32e40x_gvsoc_core_lint_top__ConstPool__TABLE_hd6aeed19_0
        [__Vtableidx4];
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__alcheck_trans_valid 
        = ((~ (IData)(cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_block_bus)) 
           & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__mpu_trans_valid));
    __Vtableidx5 = ((0x40U & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__alcheck_trans[1U] 
                              >> 4U)) | (((IData)(cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__alcheck_trans_valid) 
                                          << 5U) | 
                                         ((0xffff0U 
                                           & ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__alcheck_trans[1U] 
                                               >> 0xcU) 
                                              & ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__misaligned_access) 
                                                 << 4U))) 
                                          | (((1U == (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__next_cnt)) 
                                              << 3U) 
                                             | (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__align_check_i__DOT__state_q)))));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__align_check_i__DOT__state_n 
        = Vcv32e40x_gvsoc_core_lint_top__ConstPool__TABLE_hc01e932a_0
        [__Vtableidx5];
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__align_check_i__DOT__align_block_core 
        = Vcv32e40x_gvsoc_core_lint_top__ConstPool__TABLE_h38655317_0
        [__Vtableidx5];
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__align_check_i__DOT__align_block_bus 
        = Vcv32e40x_gvsoc_core_lint_top__ConstPool__TABLE_h8ce825a6_0
        [__Vtableidx5];
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__align_check_i__DOT__align_trans_valid 
        = Vcv32e40x_gvsoc_core_lint_top__ConstPool__TABLE_h230fdf7d_0
        [__Vtableidx5];
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__align_check_i__DOT__align_trans_ready 
        = Vcv32e40x_gvsoc_core_lint_top__ConstPool__TABLE_hd6aeed19_0
        [__Vtableidx5];
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__align_check_i__DOT__align_status 
        = Vcv32e40x_gvsoc_core_lint_top__ConstPool__TABLE_h7adbf5ec_0
        [__Vtableidx5];
    if (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__wb_stage_i__DOT__lsu_valid_q) {
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__mpu_status_wb 
            = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__wb_stage_i__DOT__lsu_mpu_status_q;
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__align_status_wb 
            = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__wb_stage_i__DOT__lsu_align_status_q;
    } else {
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__mpu_status_wb 
            = cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_status;
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__align_status_wb 
            = cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__align_check_i__DOT__align_status;
    }
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__wpt_resp_valid 
        = ((((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__align_check_i__DOT__align_trans_valid) 
             | (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__filter_resp_valid)) 
            | (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_err_trans_valid)) 
           | (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__wpt_trans_valid));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__count_up 
        = ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans_valid) 
           & (((~ (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__wpt_block_core)) 
               & (((~ (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_block_core)) 
                   & (((~ (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__align_check_i__DOT__align_block_core)) 
                       & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__filter_trans_ready)) 
                      | (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__align_check_i__DOT__align_trans_ready))) 
                  | (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__mpu_i__DOT__mpu_err_trans_ready))) 
              | (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__gen_wpt__DOT__wpt_i__DOT__wpt_trans_ready)));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__filter_trans_valid 
        = ((~ (IData)(cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__align_check_i__DOT__align_block_bus)) 
           & (IData)(cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__alcheck_trans_valid));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__response_filter_i__DOT__core_next_cnt 
        = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__response_filter_i__DOT__core_cnt_q;
    if (((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__filter_trans_ready) 
         & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__filter_trans_valid))) {
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__response_filter_i__DOT__core_next_cnt 
            = (3U & ((IData)(1U) + (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__response_filter_i__DOT__core_next_cnt)));
    }
    if (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__filter_resp_valid) {
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__response_filter_i__DOT__core_next_cnt 
            = (3U & ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__response_filter_i__DOT__core_next_cnt) 
                     - (IData)(1U)));
    }
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__lsu_busy 
        = (((0U != (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__response_filter_i__DOT__bus_cnt_q)) 
            | (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__filter_trans_valid)) 
           | ((0U < (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__cnt_q)) 
              | (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__trans_valid)));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__buffer_trans_valid 
        = ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__filter_trans_valid) 
           & (2U > (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__response_filter_i__DOT__bus_cnt_q)));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__bus_trans_valid 
        = ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__state) 
           | (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__buffer_trans_valid));
    __Vtableidx6 = (((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__buffer_trans_valid) 
                     << 3U) | ((4U & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__alcheck_trans[0U] 
                                      >> 2U)) | (((IData)(vlSelfRef.data_gnt_i) 
                                                  << 1U) 
                                                 | (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__state))));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__next_state 
        = Vcv32e40x_gvsoc_core_lint_top__ConstPool__TABLE_h652a5a6c_0
        [__Vtableidx6];
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__write_buffer_i__DOT__push 
        = Vcv32e40x_gvsoc_core_lint_top__ConstPool__TABLE_h7a7988dd_0
        [__Vtableidx6];
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__response_filter_i__DOT__bus_count_up 
        = ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__buffer_trans_ready) 
           & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__buffer_trans_valid));
    vlSelfRef.data_req_o = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__bus_trans_valid;
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__response_filter_i__DOT__outstanding_next 
        = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__response_filter_i__DOT__outstanding_q;
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__response_filter_i__DOT__bus_next_cnt 
        = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__response_filter_i__DOT__bus_cnt_q;
    if (cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__response_filter_i__DOT__bus_count_up) {
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__response_filter_i__DOT__outstanding_next 
            = ((3U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__response_filter_i__DOT__outstanding_next)) 
               | (0x3cU & ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__response_filter_i__DOT__outstanding_q) 
                           << 2U)));
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__response_filter_i__DOT__outstanding_next 
            = ((0x30U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__response_filter_i__DOT__outstanding_next)) 
               | ((8U & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__alcheck_trans[0U] 
                         >> 1U)) | (4U & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__alcheck_trans[1U] 
                                          >> 8U))));
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__response_filter_i__DOT__bus_next_cnt 
            = (3U & ((IData)(1U) + (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__response_filter_i__DOT__bus_next_cnt)));
    }
    if (vlSelfRef.data_rvalid_i) {
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__response_filter_i__DOT__bus_next_cnt 
            = (3U & ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__load_store_unit_i__DOT__response_filter_i__DOT__bus_next_cnt) 
                     - (IData)(1U)));
    }
}

VL_INLINE_OPT void Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__20(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcv32e40x_gvsoc_core_lint_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__20\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__etrigger_in_wb 
        = (((5U == (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
                    >> 0x1cU)) & ((((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
                                     >> 9U) & (0xc0000U 
                                               == (0xc0000U 
                                                   & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[1U]))) 
                                   | ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__tmatch_csr__BRA__0__KET____DOT__tdata1_csr_i__DOT__rdata_q 
                                       >> 6U) & (0U 
                                                 == 
                                                 (0xc0000U 
                                                  & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[1U])))) 
                                  & ((~ (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[4U] 
                                         >> 0x13U)) 
                                     & (0U != vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__debug_triggers_i__DOT__gen_triggers__DOT__exception_match
                                        [0U])))) & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__wb_valid));
}

VL_INLINE_OPT void Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__21(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcv32e40x_gvsoc_core_lint_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__21\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U] 
        = ((0xe03fffffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U]) 
           | (0xffc00000U & ((((~ (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_valid)) 
                               & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ready)) 
                              << 0x1cU) | (((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgRegularize_ha32e4db6_0_22) 
                                            << 0x1bU) 
                                           | ((((~ (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_valid)) 
                                                & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__wb_ready)) 
                                               << 0x1aU) 
                                              | ((0x2000000U 
                                                  & ((~ (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__wb_valid)) 
                                                     << 0x19U)) 
                                                 | ((0xff000000U 
                                                     & ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_byp 
                                                         << 0xdU) 
                                                        & ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgRegularize_ha32e4db6_0_22) 
                                                           << 0x18U))) 
                                                    | ((0xff800000U 
                                                        & ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_byp 
                                                            << 0xbU) 
                                                           & ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgRegularize_ha32e4db6_0_22) 
                                                              << 0x17U))) 
                                                       | (0xc00000U 
                                                          & ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[4U] 
                                                              >> 8U) 
                                                             & (((~ (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__wb_stage_i__DOT__lsu_valid)) 
                                                                 & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__wb_stage_i__DOT__instr_valid)) 
                                                                << 0x16U)))))))))));
}

VL_INLINE_OPT void Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__22(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcv32e40x_gvsoc_core_lint_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__22\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__cnt_d 
        = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__cnt_q;
    if (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__init_en) {
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__cnt_d 
            = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__div_clz_result;
    } else if (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__init_dummy_cnt) {
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__cnt_d 
            = (0x3fU & (((IData)(0x20U) - (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__div_clz_result)) 
                        - (IData)(1U)));
    } else if ((0U != (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__cnt_q))) {
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__cnt_d 
            = (0x3fU & ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__cnt_q) 
                        - (IData)(1U)));
    }
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__divisor_d 
        = ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__divisor_en)
            ? ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__init_en)
                ? (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp)
                : (((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__comp_inv_q) 
                    << 0x1fU) | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__divisor_q 
                                 >> 1U))) : vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__div__DOT__div_i__DOT__divisor_q);
}

VL_INLINE_OPT void Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__23(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcv32e40x_gvsoc_core_lint_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__23\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_result = 0U;
    if ((0x20000000U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[0xaU])) {
        if ((0x10000000U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[0xaU])) {
            if ((0x8000000U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[0xaU])) {
                if ((0x4000000U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[0xaU])) {
                    if ((0x2000000U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[0xaU])) {
                        if ((1U & (~ (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                      >> 0x18U)))) {
                            vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_result 
                                = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__max_maxu_result;
                        }
                    } else {
                        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_result 
                            = ((0x1000000U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[0xaU])
                                ? (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp)
                                : vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__min_minu_result);
                    }
                } else if ((1U & (~ (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                     >> 0x19U)))) {
                    if ((0x1000000U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[0xaU])) {
                        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_result 
                            = (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp);
                    }
                }
            } else if ((0x4000000U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[0xaU])) {
                if ((0x2000000U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[0xaU])) {
                    if ((0x1000000U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[0xaU])) {
                        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_result 
                            = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__max_maxu_result;
                    }
                } else {
                    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_result 
                        = ((0x1000000U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[0xaU])
                            ? vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__min_minu_result
                            : ((0xff000000U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[9U]) 
                               | ((0xff0000U & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                                << 0x10U)) 
                                  | ((0xff00U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[0xaU]) 
                                     | (0xffU & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                                 >> 0x10U))))));
                }
            } else if ((0x2000000U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[0xaU])) {
                if ((1U & (~ (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                              >> 0x18U)))) {
                    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_result 
                        = (((- (IData)((0U != (0xffU 
                                               & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                                  >> 0x10U))))) 
                            << 0x18U) | ((0xff0000U 
                                          & ((- (IData)(
                                                        (0U 
                                                         != 
                                                         (0xffU 
                                                          & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                                             >> 8U))))) 
                                             << 0x10U)) 
                                         | ((0xff00U 
                                             & ((- (IData)(
                                                           (0U 
                                                            != 
                                                            (0xffU 
                                                             & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[0xaU])))) 
                                                << 8U)) 
                                            | (0xffU 
                                               & (- (IData)(
                                                            (0U 
                                                             != 
                                                             (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[9U] 
                                                              >> 0x18U))))))));
                }
            } else if ((0x1000000U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[0xaU])) {
                vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_result 
                    = (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp);
            }
        } else if ((0x8000000U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[0xaU])) {
            if ((0x4000000U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[0xaU])) {
                if ((0x2000000U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[0xaU])) {
                    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_result 
                        = ((0x1000000U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[0xaU])
                            ? (((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                 << 8U) | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[9U] 
                                           >> 0x18U)) 
                               & (~ ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[9U] 
                                      << 8U) | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[8U] 
                                                >> 0x18U))))
                            : (((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                 << 8U) | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[9U] 
                                           >> 0x18U)) 
                               | (~ ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[9U] 
                                      << 8U) | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[8U] 
                                                >> 0x18U)))));
                } else if ((1U & (~ (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                     >> 0x18U)))) {
                    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_result 
                        = (((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                             << 8U) | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[9U] 
                                       >> 0x18U)) ^ 
                           (~ ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[9U] 
                                << 8U) | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[8U] 
                                          >> 0x18U))));
                }
            } else {
                vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_result 
                    = ((0x2000000U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[0xaU])
                        ? 0U : ((0x1000000U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[0xaU])
                                 ? (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp)
                                 : (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__div_clz_result)));
            }
        } else {
            vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_result 
                = ((0x4000000U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[0xaU])
                    ? ((0x2000000U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[0xaU])
                        ? ((0x1000000U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[0xaU])
                            ? 0U : vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__result_shnadd)
                        : ((0x1000000U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[0xaU])
                            ? (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp)
                            : vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__result_shnadd))
                    : ((0x2000000U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[0xaU])
                        ? ((0x1000000U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[0xaU])
                            ? (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__alu_b_cpop_i__DOT__sum[5U] 
                               >> 0x1aU) : vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__result_shnadd)
                        : ((0x1000000U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[0xaU])
                            ? (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp)
                            : (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__div_clz_result))));
        }
    } else if ((0x10000000U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[0xaU])) {
        if ((0x8000000U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[0xaU])) {
            if ((1U & (~ (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                          >> 0x1aU)))) {
                if ((0x2000000U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[0xaU])) {
                    if ((1U & (~ (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                  >> 0x18U)))) {
                        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_result 
                            = (1U & (~ (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT____VdfgExtracted_h4f034531__0)));
                    }
                }
            }
        } else if ((0x4000000U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[0xaU])) {
            if ((1U & (~ (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                          >> 0x19U)))) {
                vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_result 
                    = ((0x1000000U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[0xaU])
                        ? (0xffffU & ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                       << 8U) | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[9U] 
                                                 >> 0x18U)))
                        : (((- (IData)((1U & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                              >> 7U)))) 
                            << 0x10U) | (0xffffU & 
                                         ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                                           << 8U) | 
                                          (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[9U] 
                                           >> 0x18U)))));
            }
        } else if ((0x2000000U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[0xaU])) {
            vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_result 
                = ((0x1000000U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[0xaU])
                    ? (1U & (~ (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT____VdfgExtracted_h4f034531__0)))
                    : (((- (IData)((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[9U] 
                                    >> 0x1fU))) << 8U) 
                       | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[9U] 
                          >> 0x18U)));
        }
    } else if ((0x8000000U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[0xaU])) {
        if ((0x4000000U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[0xaU])) {
            if ((1U & (~ (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                          >> 0x19U)))) {
                if ((0x1000000U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[0xaU])) {
                    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_result 
                        = (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp);
                }
            }
        } else if ((1U & (~ (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                             >> 0x19U)))) {
            if ((1U & (~ (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                          >> 0x18U)))) {
                vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_result 
                    = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_result;
            }
        }
    } else if ((0x4000000U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[0xaU])) {
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_result 
            = ((0x2000000U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[0xaU])
                ? ((0x1000000U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[0xaU])
                    ? (((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                         << 8U) | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[9U] 
                                   >> 0x18U)) & ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[9U] 
                                                  << 8U) 
                                                 | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[8U] 
                                                    >> 0x18U)))
                    : (((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                         << 8U) | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[9U] 
                                   >> 0x18U)) | ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[9U] 
                                                  << 8U) 
                                                 | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[8U] 
                                                    >> 0x18U))))
                : ((0x1000000U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[0xaU])
                    ? (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp)
                    : (((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                         << 8U) | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[9U] 
                                   >> 0x18U)) ^ ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[9U] 
                                                  << 8U) 
                                                 | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[8U] 
                                                    >> 0x18U)))));
    } else if ((1U & (~ (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[0xaU] 
                         >> 0x19U)))) {
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_result 
            = ((0x1000000U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[0xaU])
                ? (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__shifter_tmp)
                : vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__alu_i__DOT__adder_result);
    }
}

VL_INLINE_OPT void Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__26(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcv32e40x_gvsoc_core_lint_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__26\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__clic_ptr_in_progress_id_clear = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs) 
                  >> 1U)))) {
        if ((1U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs))) {
            if ((1U & (~ (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_ha7292f8a__0)))) {
                if ((1U & (~ (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_ha9ecc2ef__0)))) {
                    if ((1U & (~ (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_h225c6b2f__0)))) {
                        if ((1U & (~ (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_h7c88e781__0)))) {
                            if ((((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__clic_ptr_in_id) 
                                  & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_valid)) 
                                 & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_ready))) {
                                vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__clic_ptr_in_progress_id_clear = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__27(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcv32e40x_gvsoc_core_lint_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__27\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__branch_taken_n 
        = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__branch_taken_q;
    if ((1U & (~ ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs) 
                  >> 1U)))) {
        if ((1U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs))) {
            if ((1U & (~ (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_ha7292f8a__0)))) {
                if ((1U & (~ (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_ha9ecc2ef__0)))) {
                    if ((1U & (~ (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_h225c6b2f__0)))) {
                        if ((1U & (~ (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_h7c88e781__0)))) {
                            if ((1U & (~ (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__exception_in_wb)))) {
                                if ((1U & (~ (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_h7e4cdf56__0)))) {
                                    if ((1U & (~ (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_hebfcbc4a__0)))) {
                                        if ((1U & (~ (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__dret_in_wb)))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__csr_wr_in_wb_flush)))) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__csr_flush_ack_q)))) {
                                                    if (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__branch_taken_ex) {
                                                        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__branch_taken_n = 1U;
                                                    } else if (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__jump_taken_id) {
                                                        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__branch_taken_n = 1U;
                                                    } else if (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_h161e6967__0) {
                                                        if (
                                                            (1U 
                                                             & (~ (IData)(
                                                                          (0U 
                                                                           != 
                                                                           (0x38000000U 
                                                                            & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[4U])))))) {
                                                            if (
                                                                (1U 
                                                                 & (~ (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__branch_taken_q)))) {
                                                                vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__branch_taken_n = 1U;
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
    }
    if ((((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__branch_taken_q) 
          & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_valid)) 
         & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ready))) {
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__branch_taken_n = 0U;
    }
}

VL_INLINE_OPT void Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__28(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcv32e40x_gvsoc_core_lint_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__28\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__fence_req_set = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs) 
                  >> 1U)))) {
        if ((1U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs))) {
            if ((1U & (~ (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_ha7292f8a__0)))) {
                if ((1U & (~ (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_ha9ecc2ef__0)))) {
                    if ((1U & (~ (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_h225c6b2f__0)))) {
                        if ((1U & (~ (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_h7c88e781__0)))) {
                            if ((1U & (~ (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__exception_in_wb)))) {
                                if ((1U & (~ (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_h7e4cdf56__0)))) {
                                    if (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_hebfcbc4a__0) {
                                        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__fence_req_set 
                                            = (1U & 
                                               (~ (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__lsu_busy)));
                                        if (((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__fencei_in_wb)
                                              ? (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__fencei_req_and_ack_q)
                                              : (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__fence_req_q))) {
                                            vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__fence_req_set = 0U;
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

VL_INLINE_OPT void Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__29(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcv32e40x_gvsoc_core_lint_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__29\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_h9c43ac38__0 
        = (1U & (((~ (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_q)) 
                  & ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__dcsr 
                      >> 2U) & (((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__wb_valid) 
                                 & ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__abort_op_wb) 
                                    | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[0U] 
                                       >> 2U))) | (
                                                   (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[5U] 
                                                    >> 0xbU) 
                                                   | (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_ha7292f8a__0))))) 
                 | (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__etrigger_in_wb)));
}

VL_INLINE_OPT void Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__31(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcv32e40x_gvsoc_core_lint_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__31\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*1:0*/ cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_incoming_ins;
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_incoming_ins = 0;
    CData/*1:0*/ cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_flush_branch;
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_flush_branch = 0;
    // Body
    if (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__state_q) {
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__next_state = 1U;
        if (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__state_q) {
            if (((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_trans_valid) 
                 & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_trans_ready))) {
                vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__next_state = 0U;
            }
        }
    } else {
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__next_state = 0U;
        if ((1U & ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[6U] 
                    >> 6U) & (~ ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_trans_valid) 
                                 & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_trans_ready)))))) {
            vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__next_state = 1U;
        }
    }
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__aligned_n 
        = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__aligned_q;
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__complete_n 
        = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__complete_q;
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_flush_branch 
        = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__outstanding_cnt_q;
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_incoming_ins = 0U;
    if ((1U & (~ (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[6U] 
                  >> 6U)))) {
        if (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_valid_gated) {
            cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_incoming_ins 
                = ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__aligned_q)
                    ? ((3U == (3U & (IData)((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_inst_resp 
                                             >> 3U))))
                        ? 1U : ((3U == (3U & (IData)(
                                                     (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_inst_resp 
                                                      >> 0x13U))))
                                 ? 1U : 2U)) : ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__complete_q)
                                                 ? 
                                                ((3U 
                                                  == 
                                                  (3U 
                                                   & (IData)(
                                                             (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_inst_resp 
                                                              >> 0x13U))))
                                                  ? 0U
                                                  : 1U)
                                                 : 
                                                ((3U 
                                                  == 
                                                  (3U 
                                                   & (IData)(
                                                             (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_inst_resp 
                                                              >> 0x13U))))
                                                  ? 1U
                                                  : 2U)));
        }
    }
    if ((0x10000U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U])) {
        if (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_resp_valid) {
            cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_flush_branch 
                = (3U & ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__outstanding_cnt_q) 
                         - (IData)(1U)));
        }
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr_cnt_n = 0U;
    } else {
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr_cnt_n 
            = (7U & (((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr_cnt_q) 
                      + (IData)(cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_incoming_ins)) 
                     - ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__pop_q)
                         ? 1U : 0U)));
    }
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_flush_n 
        = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_flush_q;
    if ((0x40U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[6U])) {
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__aligned_n 
            = (1U & (~ (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__branch_addr_n 
                        >> 1U)));
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__complete_n 
            = (1U & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__branch_addr_n 
                     >> 1U));
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_flush_n 
            = cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_flush_branch;
    } else {
        if (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_valid_gated) {
            if (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__aligned_q) {
                if ((3U != (3U & (IData)((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_inst_resp 
                                          >> 3U))))) {
                    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__aligned_n 
                        = (3U != (3U & (IData)((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_inst_resp 
                                                >> 0x13U))));
                    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__complete_n 
                        = (3U != (3U & (IData)((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_inst_resp 
                                                >> 0x13U))));
                }
            } else if (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__complete_q) {
                vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__aligned_n 
                    = (3U != (3U & (IData)((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_inst_resp 
                                            >> 0x13U))));
                vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__complete_n 
                    = (3U != (3U & (IData)((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_inst_resp 
                                            >> 0x13U))));
            } else {
                vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__aligned_n 
                    = (3U != (3U & (IData)((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_inst_resp 
                                            >> 0x13U))));
                vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__complete_n 
                    = (3U != (3U & (IData)((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_inst_resp 
                                            >> 0x13U))));
            }
        }
        if (((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_resp_valid) 
             & (0U < (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_flush_q)))) {
            vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_flush_n 
                = (3U & ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_flush_q) 
                         - (IData)(1U)));
        }
    }
}

VL_INLINE_OPT void Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__33(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcv32e40x_gvsoc_core_lint_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__33\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_cause_n = 0U;
    if ((1U & (~ ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs) 
                  >> 1U)))) {
        if ((1U & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__ctrl_fsm_cs))) {
            if ((1U & (~ (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_ha7292f8a__0)))) {
                if (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_ha9ecc2ef__0) {
                    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_cause_n = 3U;
                } else if ((1U & (~ (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_h225c6b2f__0)))) {
                    if (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_h7c88e781__0) {
                        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_cause_n 
                            = ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__trigger_match_in_wb)
                                ? 2U : ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgRegularize_ha32e4db6_0_25)
                                         ? 1U : ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgRegularize_ha32e4db6_0_21)
                                                  ? 1U
                                                  : 0U)));
                    }
                }
            }
            if (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgExtracted_h9c43ac38__0) {
                vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_cause_n 
                    = ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__etrigger_in_wb)
                        ? 2U : 4U);
            }
        }
    }
}

VL_INLINE_OPT void Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__34(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcv32e40x_gvsoc_core_lint_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__34\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
}

VL_INLINE_OPT void Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__35(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcv32e40x_gvsoc_core_lint_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__35\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
}

void Vcv32e40x_gvsoc_core_lint_top___024root___nba_sequent__TOP__0(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf);
void Vcv32e40x_gvsoc_core_lint_top___024root___nba_sequent__TOP__1(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf);
void Vcv32e40x_gvsoc_core_lint_top___024root___act_sequent__TOP__3(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf);
void Vcv32e40x_gvsoc_core_lint_top___024root___nba_comb__TOP__1(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf);
void Vcv32e40x_gvsoc_core_lint_top___024root___act_sequent__TOP__6(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf);
void Vcv32e40x_gvsoc_core_lint_top___024root___act_sequent__TOP__8(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf);
void Vcv32e40x_gvsoc_core_lint_top___024root___nba_comb__TOP__4(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf);
void Vcv32e40x_gvsoc_core_lint_top___024root___act_sequent__TOP__7(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf);
void Vcv32e40x_gvsoc_core_lint_top___024root___nba_comb__TOP__6(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf);
void Vcv32e40x_gvsoc_core_lint_top___024root___act_sequent__TOP__14(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf);
void Vcv32e40x_gvsoc_core_lint_top___024root___act_sequent__TOP__17(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf);
void Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__0(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf);
void Vcv32e40x_gvsoc_core_lint_top___024root___act_sequent__TOP__16(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf);
void Vcv32e40x_gvsoc_core_lint_top___024root___act_sequent__TOP__5(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf);
void Vcv32e40x_gvsoc_core_lint_top___024root___act_sequent__TOP__1(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf);
void Vcv32e40x_gvsoc_core_lint_top___024root___act_sequent__TOP__12(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf);
void Vcv32e40x_gvsoc_core_lint_top___024root___nba_comb__TOP__14(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf);
void Vcv32e40x_gvsoc_core_lint_top___024root___act_sequent__TOP__4(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf);
void Vcv32e40x_gvsoc_core_lint_top___024root___act_sequent__TOP__18(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf);
void Vcv32e40x_gvsoc_core_lint_top___024root___act_sequent__TOP__15(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf);
void Vcv32e40x_gvsoc_core_lint_top___024root___act_sequent__TOP__20(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf);
void Vcv32e40x_gvsoc_core_lint_top___024root___act_sequent__TOP__21(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf);
void Vcv32e40x_gvsoc_core_lint_top___024root___act_sequent__TOP__9(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf);
void Vcv32e40x_gvsoc_core_lint_top___024root___act_sequent__TOP__13(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf);
void Vcv32e40x_gvsoc_core_lint_top___024root___act_sequent__TOP__22(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf);
void Vcv32e40x_gvsoc_core_lint_top___024root___act_sequent__TOP__23(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf);
void Vcv32e40x_gvsoc_core_lint_top___024root___nba_sequent__TOP__2(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf);
void Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__1(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf);
void Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__3(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf);
void Vcv32e40x_gvsoc_core_lint_top___024root___ico_comb__TOP__0(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf);
void Vcv32e40x_gvsoc_core_lint_top___024root___ico_comb__TOP__3(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf);
void Vcv32e40x_gvsoc_core_lint_top___024root___nba_comb__TOP__36(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf);
void Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__2(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf);
void Vcv32e40x_gvsoc_core_lint_top___024root___nba_comb__TOP__48(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf);
void Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__16(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf);
void Vcv32e40x_gvsoc_core_lint_top___024root___nba_comb__TOP__53(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf);
void Vcv32e40x_gvsoc_core_lint_top___024root___ico_comb__TOP__4(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf);
void Vcv32e40x_gvsoc_core_lint_top___024root___ico_comb__TOP__5(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf);
void Vcv32e40x_gvsoc_core_lint_top___024root___ico_comb__TOP__8(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf);

void Vcv32e40x_gvsoc_core_lint_top___024root___eval_nba(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcv32e40x_gvsoc_core_lint_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_gvsoc_core_lint_top___024root___eval_nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x6000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcv32e40x_gvsoc_core_lint_top___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((0x3000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcv32e40x_gvsoc_core_lint_top___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((0x6000000004ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcv32e40x_gvsoc_core_lint_top___024root___act_sequent__TOP__3(vlSelf);
    }
    if ((0x6000000002ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcv32e40x_gvsoc_core_lint_top___024root___nba_comb__TOP__1(vlSelf);
    }
    if ((0x6040000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcv32e40x_gvsoc_core_lint_top___024root___act_sequent__TOP__6(vlSelf);
    }
    if ((0x6040000080ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcv32e40x_gvsoc_core_lint_top___024root___act_sequent__TOP__8(vlSelf);
    }
    if ((0x6000000020ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcv32e40x_gvsoc_core_lint_top___024root___nba_comb__TOP__4(vlSelf);
    }
    if ((0x6000000200ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcv32e40x_gvsoc_core_lint_top___024root___act_sequent__TOP__7(vlSelf);
    }
    if ((0x6020000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcv32e40x_gvsoc_core_lint_top___024root___nba_comb__TOP__6(vlSelf);
    }
    if ((0x6380000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcv32e40x_gvsoc_core_lint_top___024root___act_sequent__TOP__14(vlSelf);
    }
    if ((0x6000000080ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcv32e40x_gvsoc_core_lint_top___024root___act_sequent__TOP__17(vlSelf);
    }
    if ((0x6000000082ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__0(vlSelf);
    }
    if ((0x6000008000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcv32e40x_gvsoc_core_lint_top___024root___act_sequent__TOP__16(vlSelf);
    }
    if ((0x6000000800ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcv32e40x_gvsoc_core_lint_top___024root___act_sequent__TOP__5(vlSelf);
    }
    if ((0x6010000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcv32e40x_gvsoc_core_lint_top___024root___act_sequent__TOP__1(vlSelf);
    }
    if ((0x6030000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcv32e40x_gvsoc_core_lint_top___024root___act_sequent__TOP__12(vlSelf);
    }
    if ((0x6000000102ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcv32e40x_gvsoc_core_lint_top___024root___nba_comb__TOP__14(vlSelf);
    }
    if ((0x6002000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcv32e40x_gvsoc_core_lint_top___024root___act_sequent__TOP__4(vlSelf);
    }
    if ((0x6000004000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcv32e40x_gvsoc_core_lint_top___024root___act_sequent__TOP__18(vlSelf);
    }
    if ((0x6000000012ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcv32e40x_gvsoc_core_lint_top___024root___act_sequent__TOP__15(vlSelf);
    }
    if ((0x6000001040ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcv32e40x_gvsoc_core_lint_top___024root___act_sequent__TOP__20(vlSelf);
    }
    if ((0x6000003140ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcv32e40x_gvsoc_core_lint_top___024root___act_sequent__TOP__21(vlSelf);
    }
    if ((0x6001010800ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcv32e40x_gvsoc_core_lint_top___024root___act_sequent__TOP__9(vlSelf);
    }
    if ((0x600c000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcv32e40x_gvsoc_core_lint_top___024root___act_sequent__TOP__13(vlSelf);
    }
    if ((0x6c00000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcv32e40x_gvsoc_core_lint_top___024root___act_sequent__TOP__22(vlSelf);
    }
    if ((0x6400000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcv32e40x_gvsoc_core_lint_top___024root___act_sequent__TOP__23(vlSelf);
    }
    if ((0x6000000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcv32e40x_gvsoc_core_lint_top___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((0x6000000802ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__1(vlSelf);
    }
    if ((0x6010000002ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__3(vlSelf);
    }
    if ((0x600c000012ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__4(vlSelf);
    }
    if ((0x6040000012ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__5(vlSelf);
    }
    if ((0x6000000202ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__6(vlSelf);
    }
    if ((0x6380000100ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__10(vlSelf);
    }
    if ((0x6000200080ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__12(vlSelf);
    }
    if ((0x6030000002ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__8(vlSelf);
    }
    if ((0x6030000001ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcv32e40x_gvsoc_core_lint_top___024root___ico_comb__TOP__0(vlSelf);
    }
    if ((0x638000c000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__13(vlSelf);
    }
    if ((0x73811ff968ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcv32e40x_gvsoc_core_lint_top___024root___ico_comb__TOP__3(vlSelf);
    }
    if ((0x6c00000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__15(vlSelf);
    }
    if ((0x6000000002ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcv32e40x_gvsoc_core_lint_top___024root___nba_comb__TOP__36(vlSelf);
    }
    if ((0x600c000812ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__17(vlSelf);
    }
    if ((0x6050000012ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__18(vlSelf);
    }
    if ((0x6000200082ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__20(vlSelf);
    }
    if ((0x6000e40898ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__21(vlSelf);
    }
    if ((0x6070000082ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__19(vlSelf);
    }
    if ((0x6c00000012ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__22(vlSelf);
    }
    if ((0x6c02000000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__23(vlSelf);
    }
    if ((0x6000000602ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__2(vlSelf);
    }
    if ((0x605000c012ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__26(vlSelf);
    }
    if ((0x63d101ca12ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__27(vlSelf);
    }
    if ((0x60002000e2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__29(vlSelf);
    }
    if ((0x73b1fff9fbULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcv32e40x_gvsoc_core_lint_top___024root___nba_comb__TOP__48(vlSelf);
    }
    if ((0x63f000c082ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__28(vlSelf);
    }
    if ((0x6000000e02ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__16(vlSelf);
    }
    if ((0x600020c0e2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__33(vlSelf);
    }
    if ((0x7fb3fff9fbULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__34(vlSelf);
    }
    if ((0x73b1fffffbULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcv32e40x_gvsoc_core_lint_top___024root___nba_comb__TOP__53(vlSelf);
    }
    if ((0x6000000e06ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcv32e40x_gvsoc_core_lint_top___024root___ico_comb__TOP__4(vlSelf);
    }
    if ((0x6000000e0eULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcv32e40x_gvsoc_core_lint_top___024root___ico_comb__TOP__5(vlSelf);
    }
    if ((0x7fbffff9fbULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcv32e40x_gvsoc_core_lint_top___024root___act_comb__TOP__35(vlSelf);
    }
    if ((0x73f1ffffffULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcv32e40x_gvsoc_core_lint_top___024root___ico_comb__TOP__8(vlSelf);
    }
}

VL_INLINE_OPT void Vcv32e40x_gvsoc_core_lint_top___024root___nba_sequent__TOP__1(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcv32e40x_gvsoc_core_lint_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_gvsoc_core_lint_top___024root___nba_sequent__TOP__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__sleep_unit_i__DOT__fetch_enable_q 
        = ((IData)(vlSelfRef.rst_ni) && (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__sleep_unit_i__DOT__fetch_enable_d));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__sleep_unit_i__DOT__core_busy_q 
        = ((IData)(vlSelfRef.rst_ni) && (IData)((((
                                                   (0U 
                                                    != (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__outstanding_cnt_q)) 
                                                   | (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_trans_valid)) 
                                                  | (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[6U] 
                                                     >> 8U)) 
                                                 | (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__lsu_busy))));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__sleep_unit_i__DOT__fetch_enable_d 
        = ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__sleep_unit_i__DOT__fetch_enable_q) 
           | (IData)(vlSelfRef.fetch_enable_i));
}

VL_INLINE_OPT void Vcv32e40x_gvsoc_core_lint_top___024root___nba_comb__TOP__1(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcv32e40x_gvsoc_core_lint_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_gvsoc_core_lint_top___024root___nba_comb__TOP__1\n"); );
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
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__dcsr 
        = ((0xfffffff0U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT__rdata_q) 
           | ((8U & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[1U] 
                     >> 2U)) | (7U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__gen_debug_csr__DOT__dcsr_csr_i__DOT__rdata_q)));
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
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__wb_stage_i__DOT__instr_valid 
        = ((~ (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U] 
               >> 0xdU)) & ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[1U] 
                             >> 0x15U) & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__wb_stage_i__DOT____VdfgRegularize_h5fe00629_0_5)));
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__csr_en_gated 
        = (1U & ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U] 
                  >> 0xeU) & ((~ (IData)((0U != (0x42000U 
                                                 & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U])))) 
                              & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[1U] 
                                 >> 0x15U))));
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
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__instr_valid 
        = ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[1U] 
            >> 0xaU) & (0U == (0x84000U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U])));
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
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_valid 
        = (IData)(((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U] 
                    >> 0x1eU) & (0U == (0x108000U & 
                                        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U]))));
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
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__rf_we[0U] 
        = ((~ (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__wb_stage_i__DOT__lsu_exception)) 
           & ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[7U] 
               >> 0x17U) & ((~ (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__wb_stage_i__DOT__xif_waiting)) 
                            & ((~ (IData)((0U != vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__wpt_match_wb))) 
                               & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__wb_stage_i__DOT__instr_valid)))));
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
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__lsu_valid_ex 
        = ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_ex_pipe[5U] 
            >> 0xdU) & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_stage_i__DOT__instr_valid));
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
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xfffffffeU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | ((0U == vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__rf_waddr
                      [0U]) & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__rf_we
                     [0U]));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xfffffffdU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((1U == vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__rf_waddr
                       [0U]) & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__rf_we
                      [0U]) << 1U));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xfffffffbU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((2U == vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__rf_waddr
                       [0U]) & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__rf_we
                      [0U]) << 2U));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xfffffff7U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((3U == vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__rf_waddr
                       [0U]) & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__rf_we
                      [0U]) << 3U));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xffffffefU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((4U == vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__rf_waddr
                       [0U]) & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__rf_we
                      [0U]) << 4U));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xffffffdfU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((5U == vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__rf_waddr
                       [0U]) & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__rf_we
                      [0U]) << 5U));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xffffffbfU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((6U == vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__rf_waddr
                       [0U]) & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__rf_we
                      [0U]) << 6U));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xffffff7fU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((7U == vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__rf_waddr
                       [0U]) & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__rf_we
                      [0U]) << 7U));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xfffffeffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((8U == vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__rf_waddr
                       [0U]) & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__rf_we
                      [0U]) << 8U));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xfffffdffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((9U == vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__rf_waddr
                       [0U]) & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__rf_we
                      [0U]) << 9U));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xfffffbffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0xaU == vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__rf_waddr
                       [0U]) & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__rf_we
                      [0U]) << 0xaU));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xfffff7ffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0xbU == vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__rf_waddr
                       [0U]) & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__rf_we
                      [0U]) << 0xbU));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xffffefffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0xcU == vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__rf_waddr
                       [0U]) & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__rf_we
                      [0U]) << 0xcU));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xffffdfffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0xdU == vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__rf_waddr
                       [0U]) & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__rf_we
                      [0U]) << 0xdU));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xffffbfffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0xeU == vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__rf_waddr
                       [0U]) & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__rf_we
                      [0U]) << 0xeU));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xffff7fffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0xfU == vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__rf_waddr
                       [0U]) & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__rf_we
                      [0U]) << 0xfU));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xfffeffffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0x10U == vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__rf_waddr
                       [0U]) & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__rf_we
                      [0U]) << 0x10U));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xfffdffffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0x11U == vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__rf_waddr
                       [0U]) & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__rf_we
                      [0U]) << 0x11U));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xfffbffffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0x12U == vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__rf_waddr
                       [0U]) & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__rf_we
                      [0U]) << 0x12U));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xfff7ffffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0x13U == vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__rf_waddr
                       [0U]) & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__rf_we
                      [0U]) << 0x13U));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xffefffffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0x14U == vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__rf_waddr
                       [0U]) & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__rf_we
                      [0U]) << 0x14U));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xffdfffffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0x15U == vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__rf_waddr
                       [0U]) & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__rf_we
                      [0U]) << 0x15U));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xffbfffffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0x16U == vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__rf_waddr
                       [0U]) & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__rf_we
                      [0U]) << 0x16U));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xff7fffffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0x17U == vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__rf_waddr
                       [0U]) & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__rf_we
                      [0U]) << 0x17U));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xfeffffffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0x18U == vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__rf_waddr
                       [0U]) & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__rf_we
                      [0U]) << 0x18U));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xfdffffffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0x19U == vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__rf_waddr
                       [0U]) & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__rf_we
                      [0U]) << 0x19U));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xfbffffffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0x1aU == vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__rf_waddr
                       [0U]) & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__rf_we
                      [0U]) << 0x1aU));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xf7ffffffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0x1bU == vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__rf_waddr
                       [0U]) & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__rf_we
                      [0U]) << 0x1bU));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xefffffffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0x1cU == vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__rf_waddr
                       [0U]) & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__rf_we
                      [0U]) << 0x1cU));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xdfffffffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0x1dU == vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__rf_waddr
                       [0U]) & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__rf_we
                      [0U]) << 0x1dU));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0xbfffffffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0x1eU == vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__rf_waddr
                       [0U]) & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__rf_we
                      [0U]) << 0x1eU));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec[0U] 
        = ((0x7fffffffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__register_file_wrapper_i__DOT__register_file_i__DOT__we_dec
            [0U]) | (((0x1fU == vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__rf_waddr
                       [0U]) & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__rf_we
                      [0U]) << 0x1fU));
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
        if ((1U & (~ (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[4U] 
                      >> 0xfU)))) {
            vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_we = 1U;
        }
    } else if ((0x100U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[1U])) {
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__cs_registers_i__DOT__mstatus_we = 1U;
    } else if ((0x80U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[1U])) {
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
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__bypass_i__DOT____VdfgRegularize_h300e3022_0_8 
        = ((0U != (0x1fU & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_id_pipe[5U] 
                            >> 0x12U))) & (IData)((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__id_stage_i__DOT__decoder_i__DOT__decoder_ctrl_mux 
                                                   >> 0x1aU)));
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
}

VL_INLINE_OPT void Vcv32e40x_gvsoc_core_lint_top___024root___nba_comb__TOP__4(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcv32e40x_gvsoc_core_lint_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_gvsoc_core_lint_top___024root___nba_comb__TOP__4\n"); );
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
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgRegularize_ha32e4db6_0_25 
        = ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__ebreak_in_wb) 
           & ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__dcsr 
               >> 0xfU) & ((~ (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__debug_mode_q)) 
                           & (0xc0000U == (0xc0000U 
                                           & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[1U])))));
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
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__pending_sync_debug 
        = ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__trigger_match_in_wb) 
           | ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgRegularize_ha32e4db6_0_25) 
              | (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT____VdfgRegularize_ha32e4db6_0_21)));
}

VL_INLINE_OPT void Vcv32e40x_gvsoc_core_lint_top___024root___nba_comb__TOP__6(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcv32e40x_gvsoc_core_lint_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_gvsoc_core_lint_top___024root___nba_comb__TOP__6\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

VL_INLINE_OPT void Vcv32e40x_gvsoc_core_lint_top___024root___nba_comb__TOP__14(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcv32e40x_gvsoc_core_lint_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_gvsoc_core_lint_top___024root___nba_comb__TOP__14\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*31:0*/ __Vtemp_1;
    // Body
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__wb_counter_event_gated 
        = (((((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__wb_counter_event) 
              & (~ (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__exception_in_wb))) 
             & (~ (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__ebreak_in_wb))) 
            & (~ (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__trigger_match_in_wb))) 
           & (0U == (0x62000U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U])));
    __Vtemp_1 = (((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__nmi_pending_q) 
                  << 6U) | (((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__wb_counter_event_gated) 
                             << 5U) | ((0x3f0U & (((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__wb_counter_event_gated) 
                                                   << 4U) 
                                                  & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[1U] 
                                                     >> 0x16U))) 
                                       | ((0x3fff8U 
                                           & (((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__wb_counter_event_gated) 
                                               << 3U) 
                                              & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                                 >> 0xeU))) 
                                          | ((0x3fffcU 
                                              & (((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__wb_counter_event_gated) 
                                                  << 2U) 
                                                 & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                                    >> 0xeU))) 
                                             | ((0x3fffeU 
                                                 & (((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__controller_i__DOT__controller_fsm_i__DOT__wb_counter_event_gated) 
                                                     << 1U) 
                                                    & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ex_wb_pipe[6U] 
                                                       >> 0xeU))) 
                                                | (1U 
                                                   & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[5U] 
                                                      >> 0xbU))))))));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U] 
        = ((0x7fffffffU & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U]) 
           | (0x80000000U & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[5U] 
                             << 0x14U)));
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[1U] 
        = ((0xffffffc0U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[1U]) 
           | (__Vtemp_1 >> 1U));
}

VL_INLINE_OPT void Vcv32e40x_gvsoc_core_lint_top___024root___nba_sequent__TOP__2(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcv32e40x_gvsoc_core_lint_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_gvsoc_core_lint_top___024root___nba_sequent__TOP__2\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__outstanding_cnt_q 
        = ((IData)(vlSelfRef.rst_ni) ? (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__outstanding_cnt_n)
            : 0U);
}

VL_INLINE_OPT void Vcv32e40x_gvsoc_core_lint_top___024root___nba_comb__TOP__36(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcv32e40x_gvsoc_core_lint_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_gvsoc_core_lint_top___024root___nba_comb__TOP__36\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
}

VL_INLINE_OPT void Vcv32e40x_gvsoc_core_lint_top___024root___nba_comb__TOP__53(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcv32e40x_gvsoc_core_lint_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_gvsoc_core_lint_top___024root___nba_comb__TOP__53\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*1:0*/ cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_incoming_ins;
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_incoming_ins = 0;
    CData/*1:0*/ cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_flush_branch;
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_flush_branch = 0;
    // Body
    if (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__state_q) {
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__next_state = 1U;
        if (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__state_q) {
            if (((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_trans_valid) 
                 & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_trans_ready))) {
                vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__next_state = 0U;
            }
        }
    } else {
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__next_state = 0U;
        if ((1U & ((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[6U] 
                    >> 6U) & (~ ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_trans_valid) 
                                 & (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_trans_ready)))))) {
            vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__prefetcher_i__DOT__next_state = 1U;
        }
    }
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_flush_branch 
        = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__outstanding_cnt_q;
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__aligned_n 
        = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__aligned_q;
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__complete_n 
        = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__complete_q;
    cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_incoming_ins = 0U;
    if ((1U & (~ (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[6U] 
                  >> 6U)))) {
        if (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_valid_gated) {
            cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_incoming_ins 
                = ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__aligned_q)
                    ? ((3U == (3U & (IData)((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_inst_resp 
                                             >> 3U))))
                        ? 1U : ((3U == (3U & (IData)(
                                                     (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_inst_resp 
                                                      >> 0x13U))))
                                 ? 1U : 2U)) : ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__complete_q)
                                                 ? 
                                                ((3U 
                                                  == 
                                                  (3U 
                                                   & (IData)(
                                                             (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_inst_resp 
                                                              >> 0x13U))))
                                                  ? 0U
                                                  : 1U)
                                                 : 
                                                ((3U 
                                                  == 
                                                  (3U 
                                                   & (IData)(
                                                             (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_inst_resp 
                                                              >> 0x13U))))
                                                  ? 1U
                                                  : 2U)));
        }
    }
    if ((0x10000U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[0U])) {
        if (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_resp_valid) {
            cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_flush_branch 
                = (3U & ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__outstanding_cnt_q) 
                         - (IData)(1U)));
        }
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr_cnt_n = 0U;
    } else {
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr_cnt_n 
            = (7U & (((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__instr_cnt_q) 
                      + (IData)(cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_incoming_ins)) 
                     - ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__pop_q)
                         ? 1U : 0U)));
    }
    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_flush_n 
        = vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_flush_q;
    if ((0x40U & vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__ctrl_fsm[6U])) {
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__aligned_n 
            = (1U & (~ (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__branch_addr_n 
                        >> 1U)));
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__complete_n 
            = (1U & (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__branch_addr_n 
                     >> 1U));
        vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_flush_n 
            = cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_flush_branch;
    } else {
        if (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__resp_valid_gated) {
            if (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__aligned_q) {
                if ((3U != (3U & (IData)((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_inst_resp 
                                          >> 3U))))) {
                    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__aligned_n 
                        = (3U != (3U & (IData)((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_inst_resp 
                                                >> 0x13U))));
                    vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__complete_n 
                        = (3U != (3U & (IData)((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_inst_resp 
                                                >> 0x13U))));
                }
            } else if (vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__complete_q) {
                vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__aligned_n 
                    = (3U != (3U & (IData)((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_inst_resp 
                                            >> 0x13U))));
                vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__complete_n 
                    = (3U != (3U & (IData)((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_inst_resp 
                                            >> 0x13U))));
            } else {
                vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__aligned_n 
                    = (3U != (3U & (IData)((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_inst_resp 
                                            >> 0x13U))));
                vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__complete_n 
                    = (3U != (3U & (IData)((vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_inst_resp 
                                            >> 0x13U))));
            }
        }
        if (((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_resp_valid) 
             & (0U < (IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_flush_q)))) {
            vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_flush_n 
                = (3U & ((IData)(vlSelfRef.cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__if_stage_i__DOT__prefetch_unit_i__DOT__alignment_buffer_i__DOT__n_flush_q) 
                         - (IData)(1U)));
        }
    }
}

void Vcv32e40x_gvsoc_core_lint_top___024root___eval_triggers__act(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf);
void Vcv32e40x_gvsoc_core_lint_top___024root___eval_act(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf);

bool Vcv32e40x_gvsoc_core_lint_top___024root___eval_phase__act(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcv32e40x_gvsoc_core_lint_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_gvsoc_core_lint_top___024root___eval_phase__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<39> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vcv32e40x_gvsoc_core_lint_top___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vcv32e40x_gvsoc_core_lint_top___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vcv32e40x_gvsoc_core_lint_top___024root___eval_phase__nba(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcv32e40x_gvsoc_core_lint_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_gvsoc_core_lint_top___024root___eval_phase__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vcv32e40x_gvsoc_core_lint_top___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcv32e40x_gvsoc_core_lint_top___024root___dump_triggers__ico(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf);
#endif  // VL_DEBUG
bool Vcv32e40x_gvsoc_core_lint_top___024root___eval_phase__ico(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcv32e40x_gvsoc_core_lint_top___024root___dump_triggers__nba(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcv32e40x_gvsoc_core_lint_top___024root___dump_triggers__act(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vcv32e40x_gvsoc_core_lint_top___024root___eval(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcv32e40x_gvsoc_core_lint_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_gvsoc_core_lint_top___024root___eval\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
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
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            Vcv32e40x_gvsoc_core_lint_top___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/../mcu/cv32e40x_core_wrap/cv32e40x_gvsoc_core_lint_top.sv", 29, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vcv32e40x_gvsoc_core_lint_top___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelfRef.__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vcv32e40x_gvsoc_core_lint_top___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/../mcu/cv32e40x_core_wrap/cv32e40x_gvsoc_core_lint_top.sv", 29, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vcv32e40x_gvsoc_core_lint_top___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/home/kunq/smartnic_infra_sim/gvsoc/smartnic_rdma/host_centric_baseline/../mcu/cv32e40x_core_wrap/cv32e40x_gvsoc_core_lint_top.sv", 29, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vcv32e40x_gvsoc_core_lint_top___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vcv32e40x_gvsoc_core_lint_top___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vcv32e40x_gvsoc_core_lint_top___024root___eval_debug_assertions(Vcv32e40x_gvsoc_core_lint_top___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcv32e40x_gvsoc_core_lint_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcv32e40x_gvsoc_core_lint_top___024root___eval_debug_assertions\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((vlSelfRef.clk_i & 0xfeU))) {
        Verilated::overWidthError("clk_i");}
    if (VL_UNLIKELY((vlSelfRef.rst_ni & 0xfeU))) {
        Verilated::overWidthError("rst_ni");}
    if (VL_UNLIKELY((vlSelfRef.instr_gnt_i & 0xfeU))) {
        Verilated::overWidthError("instr_gnt_i");}
    if (VL_UNLIKELY((vlSelfRef.instr_rvalid_i & 0xfeU))) {
        Verilated::overWidthError("instr_rvalid_i");}
    if (VL_UNLIKELY((vlSelfRef.instr_err_i & 0xfeU))) {
        Verilated::overWidthError("instr_err_i");}
    if (VL_UNLIKELY((vlSelfRef.data_gnt_i & 0xfeU))) {
        Verilated::overWidthError("data_gnt_i");}
    if (VL_UNLIKELY((vlSelfRef.data_rvalid_i & 0xfeU))) {
        Verilated::overWidthError("data_rvalid_i");}
    if (VL_UNLIKELY((vlSelfRef.data_err_i & 0xfeU))) {
        Verilated::overWidthError("data_err_i");}
    if (VL_UNLIKELY((vlSelfRef.data_exokay_i & 0xfeU))) {
        Verilated::overWidthError("data_exokay_i");}
    if (VL_UNLIKELY((vlSelfRef.fetch_enable_i & 0xfeU))) {
        Verilated::overWidthError("fetch_enable_i");}
    if (VL_UNLIKELY((vlSelfRef.fencei_flush_ack_i & 0xfeU))) {
        Verilated::overWidthError("fencei_flush_ack_i");}
}
#endif  // VL_DEBUG
