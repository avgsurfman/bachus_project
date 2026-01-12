//// M extension module. Combines Modulus, Division, 
/// mul/h/u/su, etc. Returns two ops in case of subsequent ops requiring both
// the higher and upper mult part, as well as quotient and the remainded. 
// Last Mux wasn't included on purpose.


`include "../multiplier/signed_unsigned/multiplier.sv"
`include "../divider/divider32.sv"

module M_ext_32(input logic [31:0] a,b,
             input logic sign, mix, mult_or_div,
             input logic clk,
             output logic [31:0] uh, lh);
// mult_or_div --- signal for mux
// mult_or_div - default 1 for mult, 0 for division

// A and B temporary registers, are they needed?
///always_ff@(posedge clk)

// Divider instantiation

logic isSignedA, isSignedB;
// I hate this
assign isSignedA = a[31];
assign isSignedB = b[31]; 


logic [31:0] div_q, div_rem;

divider32 div_unsigned(.a(a), .b(b), .rem(div_rem), .q(div_q));

// extra signal for mux?

// Mult instantiation

logic [63:0] mult_vec;

// hello my name is 
multiplier_msu   multiplier #(SIZE = 32)
                            (.a(a), 
                             .b(b), 
                             .sign(sign), 
                             .mix(mix), 
                             .y(mult_vec));
// and welcome to five nights at verilog

// Mux instantiation

assign uh = mult_or_div ? mult_vec[63:32] : div_rem;
assign lh = mult_or_div ? mult_vec[31:0] : div_q;

endmodule
