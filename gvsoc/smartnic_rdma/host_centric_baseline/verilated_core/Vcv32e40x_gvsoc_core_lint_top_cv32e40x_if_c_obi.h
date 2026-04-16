// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcv32e40x_gvsoc_core_lint_top.h for the primary calling header

#ifndef VERILATED_VCV32E40X_GVSOC_CORE_LINT_TOP_CV32E40X_IF_C_OBI_H_
#define VERILATED_VCV32E40X_GVSOC_CORE_LINT_TOP_CV32E40X_IF_C_OBI_H_  // guard

#include "verilated.h"


class Vcv32e40x_gvsoc_core_lint_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcv32e40x_gvsoc_core_lint_top_cv32e40x_if_c_obi final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    QData/*37:0*/ req_payload;
    QData/*32:0*/ resp_payload;

    // INTERNAL VARIABLES
    Vcv32e40x_gvsoc_core_lint_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcv32e40x_gvsoc_core_lint_top_cv32e40x_if_c_obi(Vcv32e40x_gvsoc_core_lint_top__Syms* symsp, const char* v__name);
    ~Vcv32e40x_gvsoc_core_lint_top_cv32e40x_if_c_obi();
    VL_UNCOPYABLE(Vcv32e40x_gvsoc_core_lint_top_cv32e40x_if_c_obi);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

std::string VL_TO_STRING(const Vcv32e40x_gvsoc_core_lint_top_cv32e40x_if_c_obi* obj);

#endif  // guard
