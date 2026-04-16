/*
 * cv32e40x_gvsoc_dummy.sv
 *
 * Dummy core matching the cv32e40x_core port contract.
 *
 * PURPOSE
 * -------
 * This module is a drop-in behavioral substitute for cv32e40x_core when
 * testing the GVSoC DPI bridge (dpi_mcu_wrapper.cpp) before the real
 * Verilated RTL is ready.  It does NOT execute instructions.
 *
 * WHAT IT DOES
 * ------------
 *   - OBI instruction channel: issues sequential 32-bit fetch requests
 *     starting from boot_addr_i, ignores rdata (no decode).
 *   - OBI data channel: after 16 fetches, performs a single 32-bit write
 *     to boot_addr_i+0x100 with the canary value 0xDEAD_BEEF, then idles.
 *     Purpose: smoke-test the data IoMaster path in dpi_mcu_wrapper.cpp.
 *   - XIF: all cpu_* outputs are tied off; no coprocessor offloads are
 *     ever issued.  mem_ready and result_ready are hardwired 1 (vacuous
 *     acceptance).
 *
 * WHAT IT DOES NOT DO
 * -------------------
 *   - Does not decode or execute any instruction.
 *   - Does not handle interrupts (irq_i captured, not acted on).
 *   - Does not implement fence.i, WFI, or debug.
 *   - CLIC mode is not instantiated (CLIC=0 assumed).
 *   - PMA/MPU/scan ports are not present (non-essential for bridge test).
 *
 * INTEGRATION PATH
 * ----------------
 *   Phase 1 (current): used with Verilator --lint-only to verify interface
 *     coverage; will be compiled into a DPI .so for dpi_mcu_wrapper.cpp.
 *   Phase 2: replace this module with the real cv32e40x_core instantiation
 *     inside a GVSoC Verilated wrapper.
 *
 * LINT
 * ----
 *   verilator --lint-only -Wall --sv \
 *     smartnic_rdma/mcu/cv32e40x/rtl/cv32e40x_if_xif.sv \
 *     smartnic_rdma/mcu/cv32e40x_dummy/cv32e40x_gvsoc_dummy.sv
 */

`default_nettype none

module cv32e40x_gvsoc_dummy
#(
  // XIF parameters — kept to allow future coprocessor instantiation without
  // changing the top-level parameter list.
  parameter int unsigned X_ID_WIDTH  = 4,
  parameter int unsigned X_NUM_RS    = 2,
  parameter int unsigned X_MEM_WIDTH = 32,
  parameter int unsigned X_RFR_WIDTH = 32,
  parameter int unsigned X_RFW_WIDTH = 32
) (
  // -----------------------------------------------------------------------
  // Clock and reset (active-low)
  // -----------------------------------------------------------------------
  input  logic        clk_i,
  input  logic        rst_ni,

  // -----------------------------------------------------------------------
  // Boot
  // -----------------------------------------------------------------------
  input  logic [31:0] boot_addr_i,

  // -----------------------------------------------------------------------
  // OBI — Instruction channel
  // Matches cv32e40x_core instr_* ports exactly (exc. memtype/prot/dbg
  // which are output-only and tied to 0 below).
  // -----------------------------------------------------------------------
  output logic        instr_req_o,
  input  logic        instr_gnt_i,
  input  logic        instr_rvalid_i,
  output logic [31:0] instr_addr_o,
  output logic [ 1:0] instr_memtype_o,
  output logic [ 2:0] instr_prot_o,
  output logic        instr_dbg_o,
  input  logic [31:0] instr_rdata_i,
  input  logic        instr_err_i,

  // -----------------------------------------------------------------------
  // OBI — Data channel
  // -----------------------------------------------------------------------
  output logic        data_req_o,
  input  logic        data_gnt_i,
  input  logic        data_rvalid_i,
  output logic [31:0] data_addr_o,
  output logic [ 3:0] data_be_o,
  output logic        data_we_o,
  output logic [31:0] data_wdata_o,
  output logic [ 1:0] data_memtype_o,
  output logic [ 2:0] data_prot_o,
  output logic        data_dbg_o,
  output logic [ 5:0] data_atop_o,
  input  logic [31:0] data_rdata_i,
  input  logic        data_err_i,
  input  logic        data_exokay_i,

  // -----------------------------------------------------------------------
  // XIF — 6 interface ports (cpu_* modports)
  // The interface is parameterized; callers must pass instances with
  // matching parameter values.
  // -----------------------------------------------------------------------
  cv32e40x_if_xif.cpu_compressed  xif_compressed_if,
  cv32e40x_if_xif.cpu_issue       xif_issue_if,
  cv32e40x_if_xif.cpu_commit      xif_commit_if,
  cv32e40x_if_xif.cpu_mem         xif_mem_if,
  cv32e40x_if_xif.cpu_mem_result  xif_mem_result_if,
  cv32e40x_if_xif.cpu_result      xif_result_if,

  // -----------------------------------------------------------------------
  // Interrupts (standard CLINT vector)
  //   bit  3 = MSI  (machine software)
  //   bit  7 = MTI  (machine timer)
  //   bit 11 = MEI  (machine external)
  // Captured into irq_q but not acted on by the dummy.
  // -----------------------------------------------------------------------
  input  logic [31:0] irq_i,

  // -----------------------------------------------------------------------
  // Control
  // -----------------------------------------------------------------------
  input  logic        fetch_enable_i,
  output logic        core_sleep_o,

  // Fence.i flush handshake — dummy never requests a fence flush
  output logic        fencei_flush_req_o,
  input  logic        fencei_flush_ack_i,

  // -----------------------------------------------------------------------
  // Cycle / time
  // -----------------------------------------------------------------------
  output logic [63:0] mcycle_o,
  input  logic [63:0] time_i,

  // -----------------------------------------------------------------------
  // Debug status outputs
  // -----------------------------------------------------------------------
  output logic        debug_havereset_o,
  output logic        debug_running_o,
  output logic        debug_halted_o,
  output logic        debug_pc_valid_o,
  output logic [31:0] debug_pc_o
);

  // =========================================================================
  // FSM state encoding
  // =========================================================================

  typedef enum logic [2:0] {
    ST_IDLE,       // waiting for fetch_enable_i
    ST_FETCH_REQ,  // instr_req_o high, waiting for gnt
    ST_FETCH_WAIT, // waiting for instr_rvalid_i
    ST_DATA_REQ,   // single data write: waiting for gnt
    ST_DATA_WAIT   // single data write: waiting for rvalid
  } state_t;

  // =========================================================================
  // Registered state
  // =========================================================================

  state_t      state_q;
  logic [31:0] pc_q;            // current fetch address
  logic [15:0] fetch_count_q;   // number of completed fetches
  logic        data_done_q;     // data smoke-test already executed
  logic [31:0] irq_q;           // latched interrupt vector (observability)
  logic [63:0] cycle_count_q;   // free-running cycle counter

  // =========================================================================
  // Sequential block
  // =========================================================================

  always_ff @(posedge clk_i or negedge rst_ni) begin
    if (!rst_ni) begin
      state_q       <= ST_IDLE;
      pc_q          <= 32'h0000_0000;
      fetch_count_q <= 16'h0000;
      data_done_q   <= 1'b0;
      irq_q         <= 32'h0000_0000;
      cycle_count_q <= 64'h0;
    end else begin
      irq_q         <= irq_i;   // latch for observability only
      cycle_count_q <= cycle_count_q + 64'h1;

      case (state_q)

        ST_IDLE: begin
          if (fetch_enable_i) begin
            pc_q    <= boot_addr_i;
            state_q <= ST_FETCH_REQ;
          end
        end

        ST_FETCH_REQ: begin
          if (!fetch_enable_i) begin
            state_q <= ST_IDLE;
          end else if (instr_gnt_i) begin
            state_q <= ST_FETCH_WAIT;
          end
        end

        ST_FETCH_WAIT: begin
          if (!fetch_enable_i) begin
            state_q <= ST_IDLE;
          end else if (instr_rvalid_i) begin
            // Discard instr_rdata_i — dummy does not decode
            pc_q          <= pc_q + 32'h4;
            fetch_count_q <= fetch_count_q + 16'h1;
            // After 16 fetches trigger the data channel smoke test once
            if ((fetch_count_q == 16'hF) && !data_done_q) begin
              state_q <= ST_DATA_REQ;
            end else begin
              state_q <= ST_FETCH_REQ;
            end
          end
        end

        ST_DATA_REQ: begin
          if (data_gnt_i) begin
            state_q <= ST_DATA_WAIT;
          end
        end

        ST_DATA_WAIT: begin
          if (data_rvalid_i) begin
            data_done_q <= 1'b1;
            state_q     <= ST_FETCH_REQ;  // resume fetching
          end
        end

        default: state_q <= ST_IDLE;

      endcase
    end
  end

  // =========================================================================
  // Combinational output drive
  // =========================================================================

  // --- OBI Instruction channel ---

  assign instr_req_o  = (state_q == ST_FETCH_REQ) && fetch_enable_i;
  assign instr_addr_o = pc_q;

  // Tie-off: memory type / protection / debug (not used in behavioral sim)
  assign instr_memtype_o = 2'b00;
  assign instr_prot_o    = 3'b000;
  assign instr_dbg_o     = 1'b0;

  // --- OBI Data channel ---

  assign data_req_o   = (state_q == ST_DATA_REQ);
  assign data_addr_o  = boot_addr_i + 32'h0000_0100;
  assign data_we_o    = 1'b1;                    // always a write
  assign data_wdata_o = 32'hDEAD_BEEF;           // canary value
  assign data_be_o    = 4'hF;                    // full 32-bit lane

  // Tie-off: memory type / protection / debug / atomic
  assign data_memtype_o = 2'b00;
  assign data_prot_o    = 3'b000;
  assign data_dbg_o     = 1'b0;
  assign data_atop_o    = 6'h00;

  // --- Control / status ---

  assign core_sleep_o       = 1'b0;
  assign fencei_flush_req_o = 1'b0;
  assign mcycle_o           = cycle_count_q;

  assign debug_havereset_o  = ~rst_ni;
  assign debug_halted_o     = ~fetch_enable_i;
  assign debug_running_o    = fetch_enable_i;
  assign debug_pc_valid_o   = fetch_enable_i;
  assign debug_pc_o         = pc_q;

  // =========================================================================
  // XIF — cpu_* side: no coprocessor offloads issued
  //
  // cpu_compressed: core → coprocessor (we are the core)
  // =========================================================================

  // Compressed offload: dummy never issues one
  assign xif_compressed_if.compressed_valid = 1'b0;
  assign xif_compressed_if.compressed_req   = '0;

  // Issue offload: dummy never issues one
  assign xif_issue_if.issue_valid = 1'b0;
  assign xif_issue_if.issue_req   = '0;

  // Commit: dummy never commits an offloaded instruction
  assign xif_commit_if.commit_valid = 1'b0;
  assign xif_commit_if.commit       = '0;

  // Memory request from coprocessor (cpu_mem: core side receives from copro)
  //   mem_ready: core is ready to accept a load/store from coprocessor
  //   mem_resp:  core's response (no exception)
  assign xif_mem_if.mem_ready = 1'b1;
  assign xif_mem_if.mem_resp  = '0;

  // Memory result: core returns read data to coprocessor after its LSU
  //   — dummy LSU never issued a request, so there is never a result
  assign xif_mem_result_if.mem_result_valid = 1'b0;
  assign xif_mem_result_if.mem_result       = '0;

  // Result from coprocessor back to core register file
  //   result_ready: core is ready to receive a writeback
  assign xif_result_if.result_ready = 1'b1;

  // =========================================================================
  // Unused input suppression (Verilator -Wall)
  //
  // All these inputs are intentionally not used in the dummy.  Aggregate
  // them into a single logic to keep the suppression local.
  // =========================================================================

  /* verilator lint_off UNUSED */
  logic _unused_inputs;
  assign _unused_inputs = ^{
    instr_rdata_i,
    instr_err_i,
    data_rdata_i,
    data_err_i,
    data_exokay_i,
    irq_q,                                    // latched only for observability
    fencei_flush_ack_i,
    time_i,
    xif_compressed_if.compressed_ready,
    xif_compressed_if.compressed_resp,
    xif_issue_if.issue_ready,
    xif_issue_if.issue_resp,
    xif_mem_if.mem_valid,
    xif_mem_if.mem_req,
    xif_result_if.result_valid,
    xif_result_if.result
  };
  /* verilator lint_on UNUSED */

endmodule : cv32e40x_gvsoc_dummy

`default_nettype wire
