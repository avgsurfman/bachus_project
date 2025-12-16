//// M extension module. Combines Modulus, Division, 
/// mul/h/u/su, etc. Returns two ops in case of subsequent ops requiring both
// the higher and upper mult part, as well as quotient and the remainded. 
// Last Mux wasn't included on purpose.

module M_ext_32(input logic [31:0] a,b,
             input logic sign, mix,
             output logic [31:0] uh, lh);

// Divider instantiation


// Mult instantiation



// Mux instantiation

endmodule
