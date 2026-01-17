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

/// CSA Adder
// Adds expA + expB - 127 (bias)


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
