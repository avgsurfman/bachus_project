//// M extension module. Combines Modulus, Division, 
/// mul/h/u/su, etc. Returns both high portions/remainder in case of subsequent ops 
// requiring both the higher and upper mult part, as well as quotient and the remainder. 
// TODO: replace this with a SRT divider in the future.
// CC Franciszek Moszczuk, Kamil Mielcarek and the University of Zielona Góra


module M_ext_32(input logic [31:0] a,b,
             input logic sign, mix, mult_or_div,
             //input logic clk,
             output logic [31:0] uh, lh);
// mult_or_div --- signal for mux AKA funct3[0]
// mult_or_div - default 0 for mult, 1 for division


// A and B temporary registers ? 
///always_ff@(posedge clk)

/* 

   Divider block instantiation

*/

logic isSignedA, isSignedB;
// I hate this
assign isSignedA = a[31] & sign;
assign isSignedB = b[31] & sign; 

logic [31:0] a_neg, b_neg;
logic [31:0] a_abs, b_abs;

sklansky_adder #(.SIZE(32)) a_adder (~a, 0, 1'b1, , a_neg);
sklansky_adder #(.SIZE(32)) b_adder (~b, 0, 1'b1, , b_neg);

// 2:1 mux
assign a_abs = isSignedA ? a_neg : a;
assign b_abs = isSignedB ? b_neg : b; 

logic [31:0] div_q, div_rem;

//// Divider instantiation

//                       dividend  divisor    
divider_32 div_unsigned(.a(a_abs), .b(b_abs), .rem(div_rem), .q(div_q));

// Another mux to convert the results back on the fly

logic [31:0] div_q_neg, div_rem_neg;
logic [31:0] div_q_res, div_rem_res;

sklansky_adder #(.SIZE(32)) rem_adder (~div_rem, 32'b0, 1'b1, , div_rem_neg);
sklansky_adder #(.SIZE(32)) q_adder   (~div_q,   32'b0, 1'b1, , div_q_neg);

//assign result_sign = sign & (a[31] ^ b[31]);

logic q_sign, rem_sign;

// Computer Organization and Design, 3.4 Signed Division

assign q_sign = a[31] ^ b[31];
assign rem_sign = a[31];
 
assign div_rem_res = (sign & rem_sign) ? div_rem_neg : div_rem; 
assign div_q_res   = (sign & q_sign) ? div_q_neg   : div_q; 


////   Mult instantiation


logic [63:0] mult_vec;

// hello my name is 
multiplier_msu   #(.SIZE(32)) multiplier 
                            (.a(a), 
                             .b(b), 
                             .sign(sign), 
                             .mix(mix), 
                             .y(mult_vec));
// and welcome to five nights at verilog

//// Final Mux 

assign uh = mult_or_div ? div_q_res   : mult_vec[63:32];
assign lh = mult_or_div ? div_rem_res : mult_vec[31:0];

endmodule
