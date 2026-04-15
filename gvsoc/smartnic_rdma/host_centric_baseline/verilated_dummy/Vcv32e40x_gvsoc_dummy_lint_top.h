// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VCV32E40X_GVSOC_DUMMY_LINT_TOP_H_
#define _VCV32E40X_GVSOC_DUMMY_LINT_TOP_H_  // guard

#include "verilated.h"

//==========

class Vcv32e40x_gvsoc_dummy_lint_top__Syms;

//----------

VL_MODULE(Vcv32e40x_gvsoc_dummy_lint_top) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk_i,0,0);
    VL_IN8(rst_ni,0,0);
    VL_OUT8(instr_req_o,0,0);
    VL_IN8(instr_gnt_i,0,0);
    VL_IN8(instr_rvalid_i,0,0);
    VL_IN8(instr_err_i,0,0);
    VL_OUT8(data_req_o,0,0);
    VL_IN8(data_gnt_i,0,0);
    VL_IN8(data_rvalid_i,0,0);
    VL_OUT8(data_be_o,3,0);
    VL_OUT8(data_we_o,0,0);
    VL_IN8(data_err_i,0,0);
    VL_IN8(data_exokay_i,0,0);
    VL_IN8(fetch_enable_i,0,0);
    VL_OUT8(core_sleep_o,0,0);
    VL_OUT8(fencei_flush_req_o,0,0);
    VL_IN8(fencei_flush_ack_i,0,0);
    VL_OUT8(debug_havereset_o,0,0);
    VL_OUT8(debug_running_o,0,0);
    VL_OUT8(debug_halted_o,0,0);
    VL_OUT8(debug_pc_valid_o,0,0);
    VL_IN(boot_addr_i,31,0);
    VL_OUT(instr_addr_o,31,0);
    VL_IN(instr_rdata_i,31,0);
    VL_OUT(data_addr_o,31,0);
    VL_OUT(data_wdata_o,31,0);
    VL_IN(data_rdata_i,31,0);
    VL_IN(irq_i,31,0);
    VL_OUT(debug_pc_o,31,0);
    VL_OUT64(mcycle_o,63,0);
    VL_IN64(time_i,63,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    CData/*2:0*/ cv32e40x_gvsoc_dummy_lint_top__DOT__u_dummy__DOT__state_q;
    CData/*0:0*/ cv32e40x_gvsoc_dummy_lint_top__DOT__u_dummy__DOT__data_done_q;
    SData/*15:0*/ cv32e40x_gvsoc_dummy_lint_top__DOT__u_dummy__DOT__fetch_count_q;
    IData/*31:0*/ cv32e40x_gvsoc_dummy_lint_top__DOT__u_dummy__DOT__pc_q;
    QData/*63:0*/ cv32e40x_gvsoc_dummy_lint_top__DOT__u_dummy__DOT__cycle_count_q;
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ __Vclklast__TOP__clk_i;
    CData/*0:0*/ __Vclklast__TOP__rst_ni;
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vcv32e40x_gvsoc_dummy_lint_top__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vcv32e40x_gvsoc_dummy_lint_top);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    Vcv32e40x_gvsoc_dummy_lint_top(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vcv32e40x_gvsoc_dummy_lint_top();
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(Vcv32e40x_gvsoc_dummy_lint_top__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vcv32e40x_gvsoc_dummy_lint_top__Syms* symsp, bool first);
  private:
    static QData _change_request(Vcv32e40x_gvsoc_dummy_lint_top__Syms* __restrict vlSymsp);
    static QData _change_request_1(Vcv32e40x_gvsoc_dummy_lint_top__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__2(Vcv32e40x_gvsoc_dummy_lint_top__Syms* __restrict vlSymsp);
    static void _combo__TOP__5(Vcv32e40x_gvsoc_dummy_lint_top__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(Vcv32e40x_gvsoc_dummy_lint_top__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(Vcv32e40x_gvsoc_dummy_lint_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(Vcv32e40x_gvsoc_dummy_lint_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _initial__TOP__1(Vcv32e40x_gvsoc_dummy_lint_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__4(Vcv32e40x_gvsoc_dummy_lint_top__Syms* __restrict vlSymsp);
    static void _settle__TOP__3(Vcv32e40x_gvsoc_dummy_lint_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
