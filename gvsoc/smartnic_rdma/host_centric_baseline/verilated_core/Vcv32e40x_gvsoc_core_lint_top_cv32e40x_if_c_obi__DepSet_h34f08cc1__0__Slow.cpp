// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcv32e40x_gvsoc_core_lint_top.h for the primary calling header

#include "Vcv32e40x_gvsoc_core_lint_top__pch.h"
#include "Vcv32e40x_gvsoc_core_lint_top_cv32e40x_if_c_obi.h"

VL_ATTR_COLD void Vcv32e40x_gvsoc_core_lint_top_cv32e40x_if_c_obi___ctor_var_reset(Vcv32e40x_gvsoc_core_lint_top_cv32e40x_if_c_obi* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vcv32e40x_gvsoc_core_lint_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcv32e40x_gvsoc_core_lint_top_cv32e40x_if_c_obi___ctor_var_reset\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->req_payload = VL_RAND_RESET_Q(38);
    vlSelf->resp_payload = VL_RAND_RESET_Q(33);
}
