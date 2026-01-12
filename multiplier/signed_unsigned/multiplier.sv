/// Parametrized signed/unsigned/mixed BW multiplier using carry-save adders.
//  CC 2025 Franciszek Moszczuk, Kamil Mielcarek and the University of Zielona Gora.
//  Licensed under the BSD 3-clause license and the Apache License 2.0.


// maybe a different kind of adder?

`include "../fulladder_and.sv"
`include "./fulladder_xor.sv"
`include "../../adder/hdl/sklansky_adder.sv"

module multiplier_msu   #(parameter size = 32)
                         (input logic [size-1:0] a, b,
                          input logic sign, mix,
                          output logic [2*size-1:0] y);
    // First layer
    logic [SIZE-1:0] layers [SIZE-1:0];
    // carry logic?
    logic [SIZE-1:0] carry_logic[SIZE-1:0]; 
    
    logic sign_or_mix; 
    assign sign_or_mix = sign | mix; // intermediate 
    
    genvar i, k;
    generate begin
    for (k = 0; k < SIZE; k++) begin   
        if (k == 0) begin: zero_layer
        // instantiate ands in the first layer
           for (i = 0; i < SIZE-1; i++) begin
               assign layers[0][i] = a[i] & b[0];
           end
               assign layers[0][SIZE-1] = sign         ? ~(a[SIZE-1] & b[0]) 
                                                       :   a[SIZE-1] & b[0];
        end // OK
        
        else if (k == 1) begin: first_layer
            //                current ab  previous layer        previous carry       current layer  current carry
            fulladder_and     f0(a[0], b[k], layers[k-1][1],    1'b0,                 layers[k][0],  carry_logic[k][0]);
            for (i = 1; i < SIZE-1; i++) begin
                //            current ab  previous layer        previous carry       current layer current carry
                fulladder_and f1(a[i],  b[k], layers[k-1][i+1], 1'b0,              layers[k][i], carry_logic[k][i]);
            end
            // sin being unconditional ruined my unsigned results
            // ouch
            logic mixed_mult;
            assign mixed_mult = ~layers[0][SIZE-1] & mix; 
            fulladder_xor     f2(.a(a[SIZE-1]), 
                                 .b(b[k]),     
                                 .sin(sign | mixed_mult),    
                                 .cin(1'b0),
                                 .toggle(sign_or_mix),
                                 .sout(layers[k][SIZE-1]), 
                                 .cout(carry_logic[k][SIZE-1]));
        end
        else if (k == SIZE-1) begin: last_layer
           for (i = 0; i < SIZE; i++) begin 
               if ( i == 0)
                   //               current ab  previous layer  previous carry          current layer     current carry
                   // PRESENT DAY
                   // PRESENT TIME
                   //fulladder_nand f3(a[i], b[k], layers[k-1][i+1], carry_logic[k-1][i], layers[k][i], carry_logic[k][i]);
                   fulladder_xor  f3(.a(a[i]), 
                                 .b(b[k]),     
                                 .sin(layers[k-1][i+1]),    
                                 .cin(carry_logic[k-1][i]),
                                 .toggle(sign),
                                 .sout(layers[k][i]), 
                                 .cout(carry_logic[k][i]));
               else if ( i < SIZE-1)  
                   //fulladder_nand f4(a[i], b[k], layers[k-1][i+1], carry_logic[k-1][i], layers[k][i], carry_logic[k][i]);
                   fulladder_xor f4(.a(a[i]), 
                                 .b(b[k]),     
                                 .sin(layers[k-1][i+1]),    
                                 .cin(carry_logic[k-1][i]),
                                 .toggle(sign),
                                 .sout(layers[k][i]), 
                                 .cout(carry_logic[k][i]));
               else
                   // TODO: Toggleable in the next version
                   //fulladder_and  f5(a[i], b[k], 1'b0, carry_logic[k-1][i], layers[k][i], carry_logic[k][i]);
                   // toggle set to GND
                   fulladder_xor  f5(.a(a[i]), 
                                 .b(b[k]),     
                                 .sin(1'b0),    
                                 .cin(carry_logic[k-1][i]),
                                 .toggle(mix),
                                 .sout(layers[k][i]), 
                                 .cout(carry_logic[k][i]));
           end
        end
        else begin: regular_layer
           for (i = 0; i < SIZE; i++) begin 
               if ( i == 0)
                   //               current ab  previous layer  previous carry       current layer current carry
                   fulladder_and f3(a[i], b[k], layers[k-1][i+1], carry_logic[k-1][i],                   layers[k][i],     carry_logic[k][i]);
               else if ( i < SIZE-1)  
                   fulladder_and f4(a[i], b[k], layers[k-1][i+1], carry_logic[k-1][i], layers[k][i], carry_logic[k][i]);
               else
                   // special case because carry_logic is the last layer
                   // fulladder_nand f5(a[i], b[k], 1'b0, carry_logic[k-1][i], layers[k][i], carry_logic[k][i]);
                   fulladder_xor  f5(.a(a[i]), 
                                 .b(b[k]),     
                                 .sin(1'b0),    
                                 .cin(carry_logic[k-1][i]),
                                 .toggle(sign_or_mix),
                                 .sout(layers[k][i]), 
                                 .cout(carry_logic[k][i]));
           end
        end
    end
    end
    endgenerate
    
   
    generate begin
    // lower 32-bits
    // every last ith sum will be added to the pile.
    for( i = 0; i < SIZE; i++) begin  // replace by size
       assign y[i] = layers[i][0];
    end
    end
    endgenerate
    // upper 32-bits
    // aka the cpa layer
    // probably fails due to the wrong order of the operands
    sklansky_adder     #(SIZE) cpa_layer(
                      .a({sign_or_mix, layers[SIZE-1][SIZE-1:1]}), 
                      .b(carry_logic[SIZE-1][SIZE-1:0]),
                      .cin(1'b0),
                      .cout(), 
                      .y(y[2*SIZE-1:SIZE]));

endmodule
