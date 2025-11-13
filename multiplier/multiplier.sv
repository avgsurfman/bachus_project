/// Multiplier using carry-save adders and valency-2 sklansky adder at the final stage. 
/// Outputs: 64-bit rail.


module mutliplier_unsigned_32(input logic [31:0] a, b
                           output logic [63:0] y);
    genvar i,k;
    generate begin
    for (k = 0; k < 31; i++) begin
        if( == 0) begin: first_layer
        // instantiate and ands in the first layer 
           
           for (i = 0; i < 32; i++) begin
           // fulladder_and
           end
        end
        else begin: regular_layer
        
        end
    end
    endgenerate
endmodule
