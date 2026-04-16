// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcv32e40x_gvsoc_core_lint_top.h for the primary calling header

#ifndef VERILATED_VCV32E40X_GVSOC_CORE_LINT_TOP_CV32E40X_IF_C_OBI__TZ3_TBZ4_H_
#define VERILATED_VCV32E40X_GVSOC_CORE_LINT_TOP_CV32E40X_IF_C_OBI__TZ3_TBZ4_H_  // guard

#include "verilated.h"


class Vcv32e40x_gvsoc_core_lint_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcv32e40x_gvsoc_core_lint_top_cv32e40x_if_c_obi__Tz3_TBz4 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    QData/*34:0*/ resp_payload;

    // INTERNAL VARIABLES
    Vcv32e40x_gvsoc_core_lint_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcv32e40x_gvsoc_core_lint_top_cv32e40x_if_c_obi__Tz3_TBz4(Vcv32e40x_gvsoc_core_lint_top__Syms* symsp, const char* v__name);
    ~Vcv32e40x_gvsoc_core_lint_top_cv32e40x_if_c_obi__Tz3_TBz4();
    VL_UNCOPYABLE(Vcv32e40x_gvsoc_core_lint_top_cv32e40x_if_c_obi__Tz3_TBz4);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

std::string VL_TO_STRING(const Vcv32e40x_gvsoc_core_lint_top_cv32e40x_if_c_obi__Tz3_TBz4* obj);

#endif  // guard
