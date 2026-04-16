/*
 * cv32e40x_gvsoc_core_lint_top.sv
 *
 * Verilator top-level wrapper for cv32e40x_core.
 *
 * Verilator < 5.x does not support interface ports on the top-level module,
 * so this wrapper exposes only flat I/O, instantiates the six cv32e40x_if_xif
 * interface objects, ties off the coprocessor-side inputs (no XIF coprocessor
 * present), and connects everything to cv32e40x_core.
 *
 * Static configuration inputs that are not driven from GVSoC at runtime
 * (debug module addresses, hart ID, etc.) are tied to safe defaults.
 * boot_addr_i is exposed as a top-level port so the DPI bridge can set it
 * before the first eval().
 *
 * Verilate command:
 *   verilator --cc --sv                                    \
 *     --top-module cv32e40x_gvsoc_core_lint_top            \
 *     --Mdir verilated_core                                \
 *     -I<rtl/include>                                      \
 *     <rtl/include>/cv32e40x_pkg.sv                        \
 *     <rtl>/cv32e40x_if_xif.sv                             \
 *     <all other rtl/*.sv>                                 \
 *     cv32e40x_gvsoc_core_lint_top.sv
 */

`default_nettype none

module cv32e40x_gvsoc_core_lint_top (
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

  // Debug status outputs
  output logic        debug_havereset_o,
  output logic        debug_running_o,
  output logic        debug_halted_o,
  output logic        debug_pc_valid_o,
  output logic [31:0] debug_pc_o
);

  // =========================================================================
  // Six XIF interface objects — X_EXT=0, so coprocessor never used
  // =========================================================================

  cv32e40x_if_xif #() xif_compressed ();
  cv32e40x_if_xif #() xif_issue      ();
  cv32e40x_if_xif #() xif_commit     ();
  cv32e40x_if_xif #() xif_mem        ();
  cv32e40x_if_xif #() xif_mem_result ();
  cv32e40x_if_xif #() xif_result     ();

  // Tie off coprocessor-side inputs
  assign xif_compressed.compressed_ready = 1'b0;
  assign xif_compressed.compressed_resp  = '0;
  assign xif_issue.issue_ready           = 1'b0;
  assign xif_issue.issue_resp            = '0;
  assign xif_mem.mem_valid               = 1'b0;
  assign xif_mem.mem_req                 = '0;
  assign xif_result.result_valid         = 1'b0;
  assign xif_result.result               = '0;

  // =========================================================================
  // Real cv32e40x_core instantiation
  //
  // Parameters:
  //   X_EXT=0     — no XIF coprocessor
  //   CLIC=0      — standard CLINT interrupt mode
  //   DEBUG=1     — keep debug support (debug_pc_o is observable)
  //   PMA_NUM_REGIONS=0 — no PMA regions (all memory accessible)
  // =========================================================================

  /* verilator lint_off PINCONNECTEMPTY */
  /* verilator lint_off UNUSED */
  cv32e40x_core #(
    .X_EXT          (1'b0),
    .CLIC           (1'b0),
    .DEBUG          (1'b1),
    .PMA_NUM_REGIONS(0)
  ) u_core (
    .clk_i                  (clk_i),
    .rst_ni                 (rst_ni),
    .scan_cg_en_i           (1'b0),

    // Static configuration — tie to safe defaults
    .boot_addr_i            (boot_addr_i),
    .dm_exception_addr_i    (32'h1A110808),  // typical PULP debug ROM exception
    .dm_halt_addr_i         (32'h1A110800),  // typical PULP debug ROM halt
    .mhartid_i              (32'h0000_0000),
    .mimpid_patch_i         (4'h0),
    .mtvec_addr_i           (32'h0000_0000), // trap vector — unused for smoke test

    // OBI Instruction
    .instr_req_o            (instr_req_o),
    .instr_gnt_i            (instr_gnt_i),
    .instr_rvalid_i         (instr_rvalid_i),
    .instr_addr_o           (instr_addr_o),
    .instr_memtype_o        (),
    .instr_prot_o           (),
    .instr_dbg_o            (),
    .instr_rdata_i          (instr_rdata_i),
    .instr_err_i            (instr_err_i),

    // OBI Data
    .data_req_o             (data_req_o),
    .data_gnt_i             (data_gnt_i),
    .data_rvalid_i          (data_rvalid_i),
    .data_addr_o            (data_addr_o),
    .data_be_o              (data_be_o),
    .data_we_o              (data_we_o),
    .data_wdata_o           (data_wdata_o),
    .data_memtype_o         (),
    .data_prot_o            (),
    .data_dbg_o             (),
    .data_atop_o            (),
    .data_rdata_i           (data_rdata_i),
    .data_err_i             (data_err_i),
    .data_exokay_i          (data_exokay_i),

    // Cycle / time
    .mcycle_o               (mcycle_o),
    .time_i                 (time_i),

    // XIF
    .xif_compressed_if      (xif_compressed.cpu_compressed),
    .xif_issue_if           (xif_issue.cpu_issue),
    .xif_commit_if          (xif_commit.cpu_commit),
    .xif_mem_if             (xif_mem.cpu_mem),
    .xif_mem_result_if      (xif_mem_result.cpu_mem_result),
    .xif_result_if          (xif_result.cpu_result),

    // Interrupts
    .irq_i                  (irq_i),
    .wu_wfe_i               (1'b0),

    // CLIC (disabled)
    .clic_irq_i             (1'b0),
    .clic_irq_id_i          ('0),
    .clic_irq_level_i       (8'h0),
    .clic_irq_priv_i        (2'h0),
    .clic_irq_shv_i         (1'b0),

    // Fence.i
    .fencei_flush_req_o     (fencei_flush_req_o),
    .fencei_flush_ack_i     (fencei_flush_ack_i),

    // Debug
    .debug_req_i            (1'b0),
    .debug_havereset_o      (debug_havereset_o),
    .debug_running_o        (debug_running_o),
    .debug_halted_o         (debug_halted_o),
    .debug_pc_valid_o       (debug_pc_valid_o),
    .debug_pc_o             (debug_pc_o),

    // Control
    .fetch_enable_i         (fetch_enable_i),
    .core_sleep_o           (core_sleep_o)
  );
  /* verilator lint_on UNUSED */
  /* verilator lint_on PINCONNECTEMPTY */

endmodule : cv32e40x_gvsoc_core_lint_top

`default_nettype wire
