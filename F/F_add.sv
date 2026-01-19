//// Add-substract module. 
/// 		ADD MODULE
/// 		24-bit output, sklansky addder
///           Is Special?        
///         Y/return NAN     N/return res
///	      >ROUNDING UNIT <
`include "../multiplier/unsigned/multiplier.sv"
`include "../adder/hdl/sklansky_adder.sv"
`include "./F_isNaN.sv"


module F_add   (input logic [31:0] a, b,
               input logic [2:0]  rounding,  
               //input logic clk,
               output logic flags [4:0], // NV DZ OF UF NX
               output logic [31:0] y);

//always_ff@(posedge clk) register?

logic isNanA, isInfA, isSubnormalA, isZeroA, isNormalA;
logic isNanB, isInfB, isSubnormalB, isZeroB, isNormalB;

F_isNaN        encoderA(A, isNaNA, isInfA, isSubnormalA, isZeroA, isNormalA);
F_isNaN        encoderB(B, isNaNA, isInfB, isSubnormalB, isZeroB, isNormalB);

// 1.Calculate difference of the exponents

// 2. Shift them (with guard bits)

// 3. Add/substract (26-bit adder) based on a[31] and b[31]
// REMEMBER IMPLICIT ONE!!!


// 4. Normalize exp (+1, 2/-23)
// 1.999 + 1.9999 == 3.9999999999 > max shift two
// -1.00...1 - 1.9999999 == about -3 >> max one shift
// 1.0000..1 - 1.999 ==  -0.999...(8) == one shift 

// 5. Normalize it again (optional)

// Outside of flow: mux that overrides results based on NaN, Inf, basically uses the isNormal flag first.
// maybe a PLA?

endmodule
