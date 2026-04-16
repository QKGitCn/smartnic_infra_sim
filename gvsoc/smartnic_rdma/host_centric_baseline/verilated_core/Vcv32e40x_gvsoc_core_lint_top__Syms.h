// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VCV32E40X_GVSOC_CORE_LINT_TOP__SYMS_H_
#define VERILATED_VCV32E40X_GVSOC_CORE_LINT_TOP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vcv32e40x_gvsoc_core_lint_top.h"

// INCLUDE MODULE CLASSES
#include "Vcv32e40x_gvsoc_core_lint_top___024root.h"
#include "Vcv32e40x_gvsoc_core_lint_top_cv32e40x_if_c_obi.h"
#include "Vcv32e40x_gvsoc_core_lint_top_cv32e40x_if_c_obi__Tz3_TBz4.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vcv32e40x_gvsoc_core_lint_top__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vcv32e40x_gvsoc_core_lint_top* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vcv32e40x_gvsoc_core_lint_top___024root TOP;
    Vcv32e40x_gvsoc_core_lint_top_cv32e40x_if_c_obi__Tz3_TBz4 TOP__cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__m_c_obi_data_if;
    Vcv32e40x_gvsoc_core_lint_top_cv32e40x_if_c_obi TOP__cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__m_c_obi_instr_if;

    // CONSTRUCTORS
    Vcv32e40x_gvsoc_core_lint_top__Syms(VerilatedContext* contextp, const char* namep, Vcv32e40x_gvsoc_core_lint_top* modelp);
    ~Vcv32e40x_gvsoc_core_lint_top__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
