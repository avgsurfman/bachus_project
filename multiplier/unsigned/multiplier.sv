/// Multiplier using carry-save adders and valency-2 sklansky adder at the final stage. 
/// Outputs: 64-bit rail.
//  CC Franciszek Moszczuk, Kamil Mielcarek and the University of Zielona Gora.
//  Licensed under the GPL.

`include "../fulladder_and.sv"

module multiplier_unsigned#(parameter SIZE = 32)
                              (input logic [SIZE-1:0] a, b,
                              output logic [2*SIZE-1:0] y);
    // TODO: parametrize
    // 32x32 
    // First layer
    // Each layer has 32 bits, shifting to the left every layer by one
    // so 32x32 wires.
    // 32x32 fucking wires.
    logic [SIZE-1:0] layers [SIZE-1:0];
    // carry logic?
    logic [SIZE-1:0] carry_logic[SIZE-1:0]; // should be smaller, there's one less carry wire
    // not that critical doe
    // SIZE-1, SIZE-1 array
    
    genvar i, k;
    generate begin
    for (k = 0; k < SIZE; k++) begin   
        if (k == 0) begin: zero_layer
        // instantiate ands in the first layer
           for (i = 0; i < SIZE; i++) begin
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
            for (i = 1; i < SIZE-1; i++) begin
                //            current ab  previous layer        previous carry       current layer current carry
                fulladder_and f1(a[i],  b[k], layers[k-1][i+1], carry_logic[k][i-1], layers[k][i], carry_logic[k][i]);
            end
            // s              current ab     zeroed sum         previous carry       current layer current carry
            fulladder_and     f2(a[SIZE-1], b[k],     0,            carry_logic[k][SIZE-2],  layers[k][SIZE-1], carry_logic[k][SIZE-1]);
        end
        else begin: regular_layer
           for (i = 0; i < SIZE; i++) begin 
               if ( i == 0)
                   //               current ab  previous layer  previous carry       current layer current carry
                   fulladder_and f3(a[i], b[k], layers[k-1][i+1], 0,                   layers[k][i],     carry_logic[k][i]);
               else if ( i < SIZE-1)  
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
    for( i = 0; i < SIZE; i++) begin  // replace by size
       assign y[i] = layers[i][0];
    end
    end
    endgenerate
    // upper 31-bits
    // problematic part
    //for( i = 1; i < 32; i++) begin
    //   assign y[i+31] = layers[31][i]; // obvious mistake but at least I don't get misassignments on 64 bits
    //end
    assign y[2*SIZE-2:SIZE] = layers[SIZE-1][SIZE-1:1];  // two times size -2 : size 
    assign y[2*SIZE-1] = carry_logic[SIZE-1][SIZE-1];
endmodule
