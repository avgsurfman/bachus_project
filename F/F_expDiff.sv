// Exponent Difference submodule.
// Technically a wrapper around the adder except it does two substractions
// in parallel so we don't have to invert the exponent.

module F_expDiff(input logic [7:0] a, b,
                 output logic alessb,
                 output logic [8:0] y);
       // Nine Inch Bits
       logic [8:0] aMinusB, bMinusA;
       logic aLessThanB;
       
       // add a little violence
       sklansky_adder #(9) exponent_aminusb( 
                      .a({1'b0, a}), 
                      .b(~{1'b0,b}),
                      .cin(1'b1),
                      .cout(), 
                      .y(aMinusB);
       
       sklansky_adder #(9) exponent_bminusa( 
                      .a(~{1'b0, a}), 
                      .b({1'b0, b}),
                      .cin(1'b1),
                      .cout(), 
                      .y(bMinusA);
       // max normal exp diff is 001 - 0FF = 001 + F00 + 1 = F02;
       // min normal exp diff is 080 - 080 = 080 + F7F + 1 = 000
       // max subnormal exp diff is 00 - FF = 000 + F00 + 1 = F01;
       
       // look what you've gotten down
       assign aLessThanb = aMinusB[8];
       // come welcome oblivion
       // didn't fix what was wrong inside
       assign y = aLessThanb ? bMinusA : aMinusB;
       // are you Less Than...? 
       
endmodule
