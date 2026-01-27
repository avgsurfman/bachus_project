//// Three-stage Floating-point Multiply module (Calculate, Shift, Round).
/// TODO: replace with a better mult module w/ comppressors 
/// TODO: specialized prefix adder 
/// TODO: Large CSA Array to add stickies, carries, roundcarries together as one
/// TODO: Fix the path. Ercegovac has a nice solution, altough not the best;
/// an LZA/LZD unit could predict a carry out of the mantissa block; better yet, 
/// the addition of final carries could be done in parralel instead of doing this 
/// sequentially like I'm doing ( mantissa csa, then shift, then add +1 based on gt).
/// Right now the critical path goes through the multiplier tree, the adder 
/// then the final exp adder (negligible) and the final mux (n + 2log)
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
// add expA + expB 
// max: FF + FF + -127 = FF + FF + 1FE 
// min: -127 + -127 == 00 + 00 + 181 == 181
// store 9th bit
// Pretty sure this won't work for negative exps...

///// Need a generate statement here?
//
logic [7:0] carry, save;
logic [10:0] exp; // should be 10 bits wide
logic expOverflow, expUnderflow;

// TODO: Change this. This can't detect overflows.
// Optimized CSA Adder
// See CMOS VLSI by Weste&Harris, Chapter 11.3

// assign save[8] ~ (0 ^ 0) == 1;
// assign carry[8] = 0 | 0;
// etc.
assign carry[7] = a[30] | b[30];
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
sklansky_adder #(10) exponent_add( 
                      .a({2'b00, carry[7:0]}), 
                      .b({3'b111, save[7:1]}),
                      .cin(1'b0),
                      .cout(), 
                      .y(exp[10:1]));

assign exp[0] = save[0];

/// Mantissa mult

logic [47:0] mul;

logic isZeroOrSubnormalA, isZeroOrSubnormalB;
assign isZeroOrSubnormalA = isZeroA   | isSubnormalA;   
assign isZeroOrSubnormalB = isZeroB   | isSubnormalB;

// TODO: replace with something less than linear delay.
multiplier_bw_unsigned #(24) multiplier
                       (.a({ ~isZeroOrSubnormalA, a[22:0]}), 
                        .b({ ~isZeroOrSubnormalB, b[22:0]}),
                        .y(mul));
/// NORMALIZED MULTIPLICATION
// might be 01.0000 or 10.00000 so we might have to shift by one

logic shiftDue;
assign shiftDue = mul[47];

/// EXPONENT

logic [10:0] expFinal;
logic expOverflow2; // TODO: REMOVE
logic exponentRoundCarry;

// Add the exponent (OverFlow is bit 9 and 10, UnderFlow is bit 11)
// 9/11 baby
sklansky_adder #(11) exponent_add_2( 
                      .a(exp[10:0]), 
                      .b({10'b0, shiftDue}),
                      .cin(exponentRoundCarry),
                      .cout(), // fixed 
                      .y(expFinal));


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

// Rounding based on FCSR flags
logic rounded_wire[23:0];
logic round_carry, signOfResult;

// signOfResult is needed early for rounding
assign signOfResult = a[31] ^ b[31];

always_comb begin: rounding_mode
    case(rounding)
    3'b000: begin 
                if(guard & (sticky | shiftedVal[0]))
                      round_carry = 1'b1;
                else round_carry = 1'b0;
            end
    3'b001: round_carry = 1'b0;
    3'b010: begin 
                if(signOfResult & (guard | sticky))
                    round_carry = 1'b1;
                else round_carry = 1'b0;
            end
    3'b011: begin 
                if(~signOfResult & (guard | sticky))
                    round_carry = 1'b1;
                else round_carry = 1'b0;
            end
    default: begin //RNE is the default
                if(guard & (sticky | shiftedVal[0]))
                      round_carry = 1'b1;
                else round_carry = 1'b0;
            end
endcase 
end
 
// add the mantissa after rounding (yest this is slow, fma without any of its upsides)

logic [22:0] mantissaFinal;

sklansky_adder#(23) mantissa_add(
                      .a(shiftedVal), 
                      .b('b0),
                      .cin(round_carry),
                      .cout(exponentRoundCarry), // fixed 
                      .y(mantissaFinal));

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
//  DYN
//  Wtf????

//// END OUTPUT

assign expOverflow = expFinal[8] | expFinal[9];
assign expUnderflow = expFinal[10] | (expFinal == 10'b0);


/// UF handling
// zo unit?

/// Final assembly & Exceptions

always_comb begin
    if((isNaNB | isNaNA) | (isZeroA & isInfB) | (isZeroB & isInfA)) 
        y = 32'h7fc00000;
    else if (expOverflow) begin
        y[31] = signOfResult; 
        y[30:0] = 31'h7f80000;
    end
    else if (expUnderflow) begin
        y[31]    = signOfResult;
        y[30:23] = 8'h00; // subnormal exp
        y[22:0]  = 23'hDEAD5B; //TODO: use the priority shift.
    end
    else begin             // normal output 
        y[31]    = signOfResult;
        // Exponent
        y[30:23] = expFinal[7:0]; 
        // Mantissa
        y[22:0] = mantissaFinal;
    end
    //
end


/// Flags
// NV DZ OF UF NX
assign flags[4] = 1'b0;    // TODO: CHANGE THIS
assign flags[3] = 1'b0;    // no division in this mode
assign flags[2] = expOverflow;   // TODO: Implement proper OV/UF detection. 
assign flags[1] = expUnderflow;  // should be set if the exponent underflows, giving a subnormal -- doesn't work
assign flags[0] = guard | sticky;

endmodule
