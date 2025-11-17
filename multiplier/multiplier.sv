/// Multiplier using carry-save adders and valency-2 sklansky adder at the final stage. 
/// Outputs: 64-bit rail.
//  CC Franciszek Moszczuk, Kamil Mielcarek and the University of Zielona Gora.
//  Licensed under the GPL.

`include "fulladder_and.sv"

module multiplier_unsigned_32(input logic [31:0] a, b,
                              output logic [63:0] y);
    // TODO: parametrize
    // 32x32 
    // First layer
    // Each layer has 32 bits, shifting to the left every layer by one
    // so 32x32 wires.
    // 32x32 fucking wires.
    logic [31:0] layers [31:0];
    // carry logic?
    logic [31:0] carry_logic[31:0]; // should be smaller, there's one less carry wire
    // not that critical doe
    // SIZE-1, SIZE-1 array
    
    genvar i, k;
    generate begin
    for (k = 0; k < 32; k++) begin   // replace by SIZE 
        if (k == 0) begin: zero_layer
        // instantiate ands in the first layer
           for (i = 0; i < 32; i++) begin
               assign layers[0][i] = a[i] & b[0];
           end
        end // OK

        else if (k == 1) begin: first_layer
            // first case when cin == 0, shifted by one
            // ale chujowy kod.
            // fulladder_and fa_and2(a[i], b[k], sin, cin, output logic sout, cout);
            //assign layers[1][0] = fulladder_and fa_and1(a[0], b[1], layers[0][1], 0, ;
            // ... o japierdole. Jak ja bylem spizgany jak to pisalem?
             
            // fulladder_and fa_and2(a[i], b[k], sin, cin, output logic sout, cout);
            //TODO: Change indexing from 0 to 1
            //TODO: CHECK Indexing

            //                current ab  previous layer        previous carry       current layer  current carry
            fulladder_and     f0(a[0], b[k], layers[k-1][1],    0,                 layers[k][0],  carry_logic[k][0]);
            for (i = 1; i < 31; i++) begin
                //            current ab  previous layer        previous carry       current layer current carry
                fulladder_and f1(a[i],  b[k], layers[k-1][i+1], carry_logic[k][i-1], layers[k][i], carry_logic[k][i]);
            end
            // s              current ab     zeroed sum         previous carry       current layer current carry
            fulladder_and     f2(a[31], b[k],     0,            carry_logic[k][30],  layers[k][31], carry_logic[k][31]);
        end
        else begin: regular_layer
           for (i = 0; i < 32; i++) begin 
               if ( i == 0)
                   //               current ab  previous layer  previous carry       current layer current carry
                   fulladder_and f3(a[i], b[k], layers[k-1][i+1], 0,                   layers[k][i],     carry_logic[k][i]);
               else if ( i < 31)  
                   fulladder_and f4(a[i], b[k], layers[k-1][i+1], carry_logic[k][i-1], layers[k][i], carry_logic[k][i]);
               else
                   // special case because carry_logic is the last layer
                   fulladder_and f5(a[i], b[k], carry_logic[k-1][i], carry_logic[k][i-1], layers[k][i], carry_logic[k][i]);
           end
        end
    end
    end
    endgenerate


    generate begin
    // lower 32-bits
    // every last ith sum will be added to the pile.
    for( i = 0; i < 32; i++) begin  // replace by size
       assign y[i] = layers[i][0];
    end 
    // upper 31-bits
    // problematic part
    //for( i = 1; i < 32; i++) begin
    //   assign y[i+31] = layers[31][i]; // obvious mistake but at least I don't get misassignments on 64 bits
    //end
    end
    endgenerate
    assign y[62:32] = layers[31][31:1];  // two times size -2 : size 
    assign y[63] = carry_logic[31][31];
endmodule
