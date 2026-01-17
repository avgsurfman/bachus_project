//// Multiply module. 
/// TODO: replace with comppressors, specialized prefix adder,
// In the future (so probably never)

`include "../multiplier/unsigned/multiplier.sv"
`include "../adder/hdl/sklansky_adder.sv"
`include "./F_isNaN.sv"

module F_mult (input logic [31:0] a, b,
               input logic [2:0]  rounding,  
               input logic clk,
               output logic flags [4:0], // NV DZ OF UF NX
               output logic [31:0] y);

               
//always_ff@(posedge clk) register?

logic isNanA, isInfA, isSubnormalA, isZeroA, isNormalA;
logic isNanB, isInfB, isSubnormalB, isZeroB, isNormalB;

F_isNaN        encoderA(A, isNaNA, isInfA, isSubnormalA, isZeroA, isNormalA);
F_isNaN        encoderB(B, isNaNA, isInfB, isSubnormalB, isZeroB, isNormalB);


//// Exponent
/// Adds expA + expB - 127 (bias)


/// Need a generate statement here

logic [7:0] carry, save, exp;
logic expOverflow;

// Optimized CSA Adder
// See CMOS VLSI 11.3
assign carry[7] = a[30] | b [30];
assign save[7] = ~ (a[30] ^ b[30]);
assign carry[6] = a[29] & b[29];
assign save[6] = a[29] ^ b[29];
assign carry[5] = a[28] & b[28];
assign save[5] = a[28] ^ b[28];
assign carry[4] = a[27] & b[27];
assign save[4] = a[27] ^ b[27];
assign carry[3] = a[26] & b[26];
assign save[3] = a[26] ^ b[26];
assign carry[2] = a[25] & b[25]
assign save[2] = a[25] ^ b[25]
assign carry[1] = a[24] & b[24]
assign save[1] = a[24] ^ b[24]
assign carry[0] = a[23] | b[23];
assign save[0] = ~ (a[23] ^ b[23]);

// maybe 9 to account for overflow?
sklansky_adder #(8) exponent_add( 
                      .a(carry[7:0]), 
                      .b(save[7:0]),
                      .cin(1'b0),
                      .cout(expOverflow), 
                      .y(exp[7:0]);


//// Mantissa, Significand

logic [47:0] mul;

/// Mult with implicit ones
multiplier_bw_unsigned#(SIZE = 24)
                       (.a({1'b1, a[22:0]}), 
                        .b({1'b1, b[22:0]}),
                        .y(mul));

/// shiftDue uses a priority encoder with casez to shift the result until it's normalized? maybe?

logic shiftDue [4:0]; 

 

// need rounding based on FSCR
endmodule
