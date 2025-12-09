/// Parametrized signed multiplier using carry-save adders. 
//  CC 2025 Franciszek Moszczuk, Kamil Mielcarek and the University of Zielona Gora.
//  Licensed under the BSD 3-clause license and the Apache License 2.0.


// maybe a different kind of adder?

`include "../fulladder_and.sv"
`include "../fulladder_nand.sv"
`include "../../adder/hdl/sklansky_adder.sv"

module multiplier_signed#(parameter SIZE = 32)
                         (input logic [SIZE-1:0] a, b,
                         output logic [2*SIZE-1:0] y);
    // First layer
    logic [SIZE-1:0] layers [SIZE-1:0];
    // carry logic?
    logic [SIZE-1:0] carry_logic[SIZE-1:0]; 
    
    genvar i, k;
    generate begin
    for (k = 0; k < SIZE; k++) begin   
        if (k == 0) begin: zero_layer
        // instantiate ands in the first layer
           for (i = 0; i < SIZE-1; i++) begin
               assign layers[0][i] = a[i] & b[0];
           end
               // Last and's different
               // TODO: Proper NAND.
               assign layers[0][SIZE-1] = ~(a[SIZE-1] & b[0]);
        end // OK
        
        else if (k == 1) begin: first_layer
            //                current ab  previous layer        previous carry       current layer  current carry
            fulladder_and     f0(a[0], b[k], layers[k-1][1],    1'b0,                 layers[k][0],  carry_logic[k][0]);
            for (i = 1; i < SIZE-1; i++) begin
                //            current ab  previous layer        previous carry       current layer current carry
                fulladder_and f1(a[i],  b[k], layers[k-1][i+1], 1'b0,              layers[k][i], carry_logic[k][i]);
            end
            fulladder_nand     f2(a[SIZE-1], b[k],     1'b1,    1'b0,  layers[k][SIZE-1], carry_logic[k][SIZE-1]);
        end
        else if (k == SIZE-1) begin: last_layer
        // !!! COPY-PASTED !!!
        //     (from below)
        // PROCEED WITH CAUTION
           for (i = 0; i < SIZE; i++) begin 
               if ( i == 0)
                   //               current ab  previous layer  previous carry          current layer     current carry
                   // PRESENT DAY
                   // PRESENT TIME
                   fulladder_nand f3(a[i], b[k], layers[k-1][i+1], carry_logic[k-1][i], layers[k][i], carry_logic[k][i]);
               else if ( i < SIZE-1)  
                   fulladder_nand f4(a[i], b[k], layers[k-1][i+1], carry_logic[k-1][i], layers[k][i], carry_logic[k][i]);
               else
                   // TODO: Toggleable in the next version
                   fulladder_and  f5(a[i], b[k], 1'b0, carry_logic[k-1][i], layers[k][i], carry_logic[k][i]);
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
                   fulladder_nand f5(a[i], b[k], 1'b0, carry_logic[k-1][i], layers[k][i], carry_logic[k][i]);
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
    sklansky_adder     #(SIZE) cpa_layer(
                      .a({1'b1, layers[SIZE-1][SIZE-1:1]}), 
                      .b(carry_logic[SIZE-1][SIZE-1:0]),
                      .cin(1'b0),
                      .cout(), 
                      .y(y[2*SIZE-1:SIZE]));

endmodule
