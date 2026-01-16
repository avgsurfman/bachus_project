//// Multiply module. 
/// TODO: replace with comppressors, specialized prefix adder,
// In the future (so probably never)

`include "../multiplier/unsigned/multiplier.sv"
`include "./F_isNaN.sv"

module F_mult (input logic [31:0] a, b,
               input logic clk,
               output logic [31:0] y);

always_ff@(posedge clk)
//

logic [47:0] mul;

/// Mult with implicit one
multiplier_bw_unsigned#(SIZE = 24)
                       (.a({1'b1, a[22:0]}), 
                        .b({1'b1, b[22:0]}),
                        .y(mul));

/// Shift-due uses a priority encoder with casez? maybe?



// need rounding based on FSCR
endmodule
