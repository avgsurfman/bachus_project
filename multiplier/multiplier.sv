/// Multiplier using carry-save adders and valency-2 sklansky adder at the final stage. 
/// Outputs: 64-bit rail.


module mutliplier_unsigned_32(input logic [31:0] a, b,
                              output logic [63:0] y);
    
    // First layer
    // Each layer has 32 bits, shifting to the left every layer by one
    // so 32x32 wires.
    // 32x32 fucking wires.
    logic [31:0] layers [4:0];
    // carry logic?
    logic [31:0] carry_logic[4:0]; // should be smaller, there's one less carry wire
    
    genvar i,k;
    generate begin
    for (k = 0; k < 32; i++) begin 
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
            fulladder_and fa_and1(a[0], b[1], layers[0][1], 0, layers[1][0],  carry_logic[0][0]);
            for (i = 1; i < 31; i++) begin
                //            current ab  previous layer  previous carry       current layer current carry
                fulladder_and(a[i], b[k], layers[0][i+1], carry_logic[0][i-1], layers[1][i], carry_logic[0][i]);
            end
            // s              current ab   zeroed sum     previous carry       current layer current carry
            fulladder_and(a[31], b[1],     0,             carry_logic[0][31],  layers[1][31], carry_logic[0][31]);
        end
        else begin: regular_layer
           for (i = 0; i < 32; i++) begin 
               if ( i == 0)
                   fulladder_and fa_and2(a[i], b[k], layers[k][i], 0, layers[k][i], carry_logic[k][i]);
               else 
                   fulladder_and fa_and2(a[i], b[k], layers[k][i], carry_logic[0][i-1], layers[k][i], carry_logic[k][i]);
           end
        end
    end
    // lower 32-bits
    // every last ith sum will be added to the pile.
    for( i = 0; i < 32; i++) begin
       assign y[i] = layers[i][0];
    end 
    // upper 31-bits
    for( i = 1; i < 32; i++) begin
       assign y[i] = layers[31][i];
    end

    endgenerate

    // 63th bit
    assign y[63] = carry_logic[31][63];
endmodule
