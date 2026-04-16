/*
 * cv32e40x_clock_gate.sv — behavioral clock gate for simulation.
 *
 * In real silicon, this is a technology cell (ICG).  For Verilator simulation
 * we provide a simple behavioral model: when enabled (en_i=1 or scan_cg_en_i=1)
 * the output follows the input clock; otherwise the output is held low.
 *
 * The latch-based ICG is modeled with a latch on the enable so that the
 * enable is sampled on the falling edge of clk_i, avoiding glitches.
 */

module cv32e40x_clock_gate
#(
  parameter int LIB = 0
) (
  input  logic clk_i,
  input  logic en_i,
  input  logic scan_cg_en_i,
  output logic clk_o
);

  logic en_latch;

  /* Latch the enable on the low phase of clk_i (negedge) */
  always_latch begin
    if (!clk_i) begin
      en_latch = en_i | scan_cg_en_i;
    end
  end

  assign clk_o = clk_i & en_latch;

endmodule : cv32e40x_clock_gate
