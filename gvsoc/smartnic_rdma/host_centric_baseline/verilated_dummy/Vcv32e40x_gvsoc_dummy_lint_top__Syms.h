// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VCV32E40X_GVSOC_DUMMY_LINT_TOP__SYMS_H_
#define _VCV32E40X_GVSOC_DUMMY_LINT_TOP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "Vcv32e40x_gvsoc_dummy_lint_top.h"

// SYMS CLASS
class Vcv32e40x_gvsoc_dummy_lint_top__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_didInit;
    
    // SUBCELL STATE
    Vcv32e40x_gvsoc_dummy_lint_top* TOPp;
    
    // CREATORS
    Vcv32e40x_gvsoc_dummy_lint_top__Syms(Vcv32e40x_gvsoc_dummy_lint_top* topp, const char* namep);
    ~Vcv32e40x_gvsoc_dummy_lint_top__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
