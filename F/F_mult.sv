//// Three-stage Floating-point Multiply module (Calculate, Shift, Round).
/// TODO: replace with a better mult module w/ 
// comppressors specialized prefix adder in the future (so probably never)
// CC Franciszek Moszczuk

module F_mult (input logic [31:0] a, b,
               input logic [2:0]  rounding,  
               input logic clk,
               output logic flags [4:0], // NV DZ OF UF NX
               output logic [31:0] y);

               
//always_ff@(posedge clk) register?

logic isNaNA, isInfA, isSubnormalA, isZeroA, isNormalA;
logic isNaNB, isInfB, isSubnormalB, isZeroB, isNormalB;

F_isNaN        encoder_a(a, isNaNA, isInfA, isSubnormalA, isZeroA, isNormalA);
F_isNaN        encoder_b(b, isNaNB, isInfB, isSubnormalB, isZeroB, isNormalB);


//// Exponent
/// Adds expA + expB - 127 (bias)


///// Need a generate statement here
//
logic [7:0] carry, save;
logic [8:0] exp;
logic expOverflow;

// Optimized CSA Adder
// See CMOS VLSI by Weste&Harris, Chapter 11.3
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
assign carry[2] = a[25] & b[25];
assign save[2] = a[25] ^ b[25];
assign carry[1] = a[24] & b[24];
assign save[1] = a[24] ^ b[24];
assign carry[0] = a[23] | b[23];
assign save[0] = ~ (a[23] ^ b[23]);

// maybe 9 to account for overflow?
sklansky_adder #(8) exponent_add( 
                      .a(carry[7:0]), 
                      .b({1'b0, save[7:1]}),
                      .cin(1'b0),
                      .cout(expOverflow), 
                      .y(exp[8:1]));

assign exp[0] = save[0];

/// Mantissa mult

logic [47:0] mul;

logic isZeroOrSubnormalA, isZeroOrSubnormalB;
assign isZeroOrSubnormalA = isZeroA   | isSubnormalA;   
assign isZeroOrSubnormalB = isZeroB   | isSubnormalB;

multiplier_bw_unsigned #(24) multiplier
                       (.a({ ~isZeroOrSubnormalA, a[22:0]}), 
                        .b({ ~isZeroOrSubnormalB, b[22:0]}),
                        .y(mul));
/// NORMALIZED MULTIPLICATION
// might be 01.0000 or 10.00000 so we might have to shift by one

logic shiftDue;
assign shiftDue = mul[47];

/// EXPONENT

logic [7:0] exp_2;
logic expOverflow2;

// Add the exponent (might overflow or underflow)
sklansky_adder #(8) exponent_add_2( 
                      .a(exp[7:0]), 
                      .b({7'b0, shiftDue}),
                      .cin(1'b0),
                      .cout(expOverflow2), // TODO: FIX!!! 
                      .y(exp_2));


/// MANTISSA
// shift by one if necessary, omit implicit zero
logic [22:0] shiftedVal;    // 23 bits wide
logic guard, sticky;

assign shiftedVal = shiftDue ? mul[46:24] : mul[45:23];
assign guard = shiftDue ? mul[23] : mul[22];
assign sticky = shiftDue ? | mul[22:0] : |mul[21:0];    

//assign shiftedVal = mul >> shiftDue;

//assign shiftedVal = (|shiftDue [4:0]) ? 
//    (mul >> shiftDue) : mul[23:0]; 

 
//// ROUNDING

//    RNE       = 3'b000,
//    RTZ       = 3'b001,
//    RDN       = 3'b010,
//    RUP       = 3'b011,
//    RMM       = 3'b100,
//    RESERVED  = 3'b101,
//    RESERVED2 = 3'b110,
//    DYN       = 3'b111

// chooses rounding based on FCSR flags
//logic rounded_wire[22:0];
//
//always_comb begin: rounding_mode
//    case(rounding)
//    3'b000:
//    3'b001: 
//    default:
//endcase 
//end
  
/// RNE:
// 1)
//perform second rounding once for RNE if not yet normalized.
/// RTZ:
// Truncate (current implementation)
/// RDN
// Truncate for positive, add 1 for negative
/// RUP
// Add 1 to positive, truncate for negatives
/// RMM:
//  Round to nearest but ties to magnitude (???)

//// END OUTPUT

/// exceptions

//always_comb begin
//    if((isNaNB | isNaNA) | (isZeroA & isInfB) | (isZeroB & isInfA)) 
//        y =  
//    else if 


/// Final assembly 

// Sign
assign y[31] = a[31] ^ b[31];

// Exponent
assign y[30:23] = exp_2;

// Mantissa
assign y[22:0] = shiftedVal;


/// Flags
// NV DZ OF UF NX
assign flags[4] = 1'b0;    // TODO: CHANGE THIS
assign flags[3] = 1'b0;    // no division in this mode
assign flags[2] = expOverflow | expOverflow2;  // bad and doesn't work
assign flags[1] = 1'b0;    // should be set if the exponent underflows, giving a subnormal
assign flags[0] = guard | sticky;

endmodule
