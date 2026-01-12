//// Multiply and Multiply-Add module.
/// TODO: replace final add with a 4-input CSA
// Preferably with [4:2] compressors. 

module F_fma (input logic [22:0] a, b, 
              output logic [47:0] mac); 

/// 		MULT MODULE
/// 		46-bit output
/// 	           + Adder
///              47-bit out
///         |			|
///	      >ROUNDING UNIT <



endmodule
