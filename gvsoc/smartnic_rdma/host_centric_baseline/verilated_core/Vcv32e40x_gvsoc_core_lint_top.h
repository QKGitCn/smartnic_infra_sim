// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VCV32E40X_GVSOC_CORE_LINT_TOP_H_
#define VERILATED_VCV32E40X_GVSOC_CORE_LINT_TOP_H_  // guard

#include "verilated.h"

class Vcv32e40x_gvsoc_core_lint_top__Syms;
class Vcv32e40x_gvsoc_core_lint_top___024root;
class Vcv32e40x_gvsoc_core_lint_top_cv32e40x_if_c_obi;
class Vcv32e40x_gvsoc_core_lint_top_cv32e40x_if_c_obi__Tz3_TBz4;


// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) Vcv32e40x_gvsoc_core_lint_top VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vcv32e40x_gvsoc_core_lint_top__Syms* const vlSymsp;

  public:

    // CONSTEXPR CAPABILITIES
    // Verilated with --trace?
    static constexpr bool traceCapable = false;

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clk_i,0,0);
    VL_IN8(&rst_ni,0,0);
    VL_OUT8(&instr_req_o,0,0);
    VL_IN8(&instr_gnt_i,0,0);
    VL_IN8(&instr_rvalid_i,0,0);
    VL_IN8(&instr_err_i,0,0);
    VL_OUT8(&data_req_o,0,0);
    VL_IN8(&data_gnt_i,0,0);
    VL_IN8(&data_rvalid_i,0,0);
    VL_OUT8(&data_be_o,3,0);
    VL_OUT8(&data_we_o,0,0);
    VL_IN8(&data_err_i,0,0);
    VL_IN8(&data_exokay_i,0,0);
    VL_IN8(&fetch_enable_i,0,0);
    VL_OUT8(&core_sleep_o,0,0);
    VL_OUT8(&fencei_flush_req_o,0,0);
    VL_IN8(&fencei_flush_ack_i,0,0);
    VL_OUT8(&debug_havereset_o,0,0);
    VL_OUT8(&debug_running_o,0,0);
    VL_OUT8(&debug_halted_o,0,0);
    VL_OUT8(&debug_pc_valid_o,0,0);
    VL_IN(&boot_addr_i,31,0);
    VL_OUT(&instr_addr_o,31,0);
    VL_IN(&instr_rdata_i,31,0);
    VL_OUT(&data_addr_o,31,0);
    VL_OUT(&data_wdata_o,31,0);
    VL_IN(&data_rdata_i,31,0);
    VL_IN(&irq_i,31,0);
    VL_OUT(&debug_pc_o,31,0);
    VL_OUT64(&mcycle_o,63,0);
    VL_IN64(&time_i,63,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.
    Vcv32e40x_gvsoc_core_lint_top_cv32e40x_if_c_obi* const __PVT__cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__m_c_obi_instr_if;
    Vcv32e40x_gvsoc_core_lint_top_cv32e40x_if_c_obi__Tz3_TBz4* const __PVT__cv32e40x_gvsoc_core_lint_top__DOT__u_core__DOT__m_c_obi_data_if;

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vcv32e40x_gvsoc_core_lint_top___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vcv32e40x_gvsoc_core_lint_top(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vcv32e40x_gvsoc_core_lint_top(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vcv32e40x_gvsoc_core_lint_top();
  private:
    VL_UNCOPYABLE(Vcv32e40x_gvsoc_core_lint_top);  ///< Copying not allowed

  public:
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
    /// Are there scheduled events to handle?
    bool eventsPending();
    /// Returns time at next time slot. Aborts if !eventsPending()
    uint64_t nextTimeSlot();
    /// Trace signals in the model; called by application code
    void trace(VerilatedTraceBaseC* tfp, int levels, int options = 0) { contextp()->trace(tfp, levels, options); }
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
    /// Prepare for cloning the model at the process level (e.g. fork in Linux)
    /// Release necessary resources. Called before cloning.
    void prepareClone() const;
    /// Re-init after cloning the model at the process level (e.g. fork in Linux)
    /// Re-allocate necessary resources. Called after cloning.
    void atClone() const;
  private:
    // Internal functions - trace registration
    void traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options);
};

#endif  // guard
