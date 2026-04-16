// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vcv32e40x_gvsoc_dummy_lint_top__Syms.h"
#include "Vcv32e40x_gvsoc_dummy_lint_top.h"



// FUNCTIONS
Vcv32e40x_gvsoc_dummy_lint_top__Syms::Vcv32e40x_gvsoc_dummy_lint_top__Syms(Vcv32e40x_gvsoc_dummy_lint_top* topp, const char* namep)
    // Setup locals
    : __Vm_namep(namep)
    , __Vm_didInit(false)
    // Setup submodule names
{
    // Pointer to top level
    TOPp = topp;
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOPp->__Vconfigure(this, true);
}
