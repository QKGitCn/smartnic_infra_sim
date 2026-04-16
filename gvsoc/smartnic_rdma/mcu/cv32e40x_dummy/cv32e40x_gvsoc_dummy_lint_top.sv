/*
 * cv32e40x_gvsoc_dummy_lint_top.sv
 *
 * Lint/elaboration wrapper for cv32e40x_gvsoc_dummy.
 *
 * Verilator < 5.x does not support interface ports on the top-level module.
 * This wrapper exposes only flat I/O, instantiates the six cv32e40x_if_xif
 * interface objects, ties off the coprocessor-side inputs to 0 (no
 * coprocessor present in the lint environment), and connects everything
 * to the dummy core.
 *
 * Use:
 *   verilator --lint-only -Wall --sv              \
 *     --top-module cv32e40x_gvsoc_dummy_lint_top  \
 *     smartnic_rdma/mcu/cv32e40x/rtl/cv32e40x_if_xif.sv          \
 *     smartnic_rdma/mcu/cv32e40x_dummy/cv32e40x_gvsoc_dummy.sv    \
 *     smartnic_rdma/mcu/cv32e40x_dummy/cv32e40x_gvsoc_dummy_lint_top.sv
 *
 * This file is not part of production compilation — it exists solely for
 * syntax and connectivity verification.
 */

`default_nettype none

module cv32e40x_gvsoc_dummy_lint_top (
  input  logic        clk_i,
  input  logic        rst_ni,
  input  logic [31:0] boot_addr_i,

  // OBI — Instruction
  output logic        instr_req_o,
  input  logic        instr_gnt_i,
  input  logic        instr_rvalid_i,
  output logic [31:0] instr_addr_o,
  input  logic [31:0] instr_rdata_i,
  input  logic        instr_err_i,

  // OBI — Data
  output logic        data_req_o,
  input  logic        data_gnt_i,
  input  logic        data_rvalid_i,
  output logic [31:0] data_addr_o,
  output logic [ 3:0] data_be_o,
  output logic        data_we_o,
  output logic [31:0] data_wdata_o,
  input  logic [31:0] data_rdata_i,
  input  logic        data_err_i,
  input  logic        data_exokay_i,

  // Control
  input  logic [31:0] irq_i,
  input  logic        fetch_enable_i,
  output logic        core_sleep_o,
  output logic        fencei_flush_req_o,
  input  logic        fencei_flush_ack_i,

  // Counters
  output logic [63:0] mcycle_o,
  input  logic [63:0] time_i,

  // Debug
  output logic        debug_havereset_o,
  output logic        debug_running_o,
  output logic        debug_halted_o,
  output logic        debug_pc_valid_o,
  output logic [31:0] debug_pc_o
);

  // =========================================================================
  // Six XIF interface objects — default parameters
  // =========================================================================

  cv32e40x_if_xif #() xif_compressed ();
  cv32e40x_if_xif #() xif_issue      ();
  cv32e40x_if_xif #() xif_commit     ();
  cv32e40x_if_xif #() xif_mem        ();
  cv32e40x_if_xif #() xif_mem_result ();
  cv32e40x_if_xif #() xif_result     ();

  // =========================================================================
  // Tie-off coprocessor-side inputs to 0
  //
  // In a real integration the coprocessor drives these.  In the lint
  // environment there is no coprocessor, so we drive 0.
  // =========================================================================

  // cpu_compressed inputs (normally driven by coprocessor)
  assign xif_compressed.compressed_ready = 1'b0;
  assign xif_compressed.compressed_resp  = '0;

  // cpu_issue inputs
  assign xif_issue.issue_ready = 1'b0;
  assign xif_issue.issue_resp  = '0;

  // cpu_mem inputs (coprocessor issues memory requests to the CPU LSU)
  assign xif_mem.mem_valid = 1'b0;
  assign xif_mem.mem_req   = '0;

  // cpu_result inputs (coprocessor returns register-file writebacks)
  assign xif_result.result_valid = 1'b0;
  assign xif_result.result       = '0;

  // =========================================================================
  // Dummy core instantiation
  //
  // PINCONNECTEMPTY: tied-off output ports (memtype/prot/dbg/atop) are
  //   constant 0 inside the dummy and not needed at the lint top level.
  // UNUSED: XIF output signals driven by the dummy (issue_valid, etc.)
  //   are not consumed by the lint top — no coprocessor.  These signals
  //   will be consumed when a real coprocessor wrapper is added.
  // =========================================================================

  /* verilator lint_off PINCONNECTEMPTY */
  /* verilator lint_off UNUSED */
  cv32e40x_gvsoc_dummy u_dummy (
    .clk_i              (clk_i),
    .rst_ni             (rst_ni),
    .boot_addr_i        (boot_addr_i),

    // OBI Instruction
    .instr_req_o        (instr_req_o),
    .instr_gnt_i        (instr_gnt_i),
    .instr_rvalid_i     (instr_rvalid_i),
    .instr_addr_o       (instr_addr_o),
    .instr_memtype_o    (),
    .instr_prot_o       (),
    .instr_dbg_o        (),
    .instr_rdata_i      (instr_rdata_i),
    .instr_err_i        (instr_err_i),

    // OBI Data
    .data_req_o         (data_req_o),
    .data_gnt_i         (data_gnt_i),
    .data_rvalid_i      (data_rvalid_i),
    .data_addr_o        (data_addr_o),
    .data_be_o          (data_be_o),
    .data_we_o          (data_we_o),
    .data_wdata_o       (data_wdata_o),
    .data_memtype_o     (),
    .data_prot_o        (),
    .data_dbg_o         (),
    .data_atop_o        (),
    .data_rdata_i       (data_rdata_i),
    .data_err_i         (data_err_i),
    .data_exokay_i      (data_exokay_i),

    // XIF
    .xif_compressed_if  (xif_compressed.cpu_compressed),
    .xif_issue_if       (xif_issue.cpu_issue),
    .xif_commit_if      (xif_commit.cpu_commit),
    .xif_mem_if         (xif_mem.cpu_mem),
    .xif_mem_result_if  (xif_mem_result.cpu_mem_result),
    .xif_result_if      (xif_result.cpu_result),

    // Control
    .irq_i              (irq_i),
    .fetch_enable_i     (fetch_enable_i),
    .core_sleep_o       (core_sleep_o),
    .fencei_flush_req_o (fencei_flush_req_o),
    .fencei_flush_ack_i (fencei_flush_ack_i),

    // Counters
    .mcycle_o           (mcycle_o),
    .time_i             (time_i),

    // Debug
    .debug_havereset_o  (debug_havereset_o),
    .debug_running_o    (debug_running_o),
    .debug_halted_o     (debug_halted_o),
    .debug_pc_valid_o   (debug_pc_valid_o),
    .debug_pc_o         (debug_pc_o)
  );
  /* verilator lint_on UNUSED */
  /* verilator lint_on PINCONNECTEMPTY */

endmodule : cv32e40x_gvsoc_dummy_lint_top

`default_nettype wire
