// Unsigned 32-bit divider. Calculates the difference for each row (d),
// then outputs the quotient and the remainder.

`include "divider_block.sv"

module divider_32(input logic [31:0] a,b,
                  output logic [31:0] rem, q);
      
      // can be parametrized
      logic [31:0] couts [31:0];
      //  D = R - B 
      //  D < 0 ? R' = R : R' = D 
      logic [31:0] difference;
      logic [31:0] remainder [31:0]; // too big
      
      genvar i, k;
      generate begin
      // first layer is different as it has its inputs zeroed
          // bar except the last(first to be generated) column
          //divider_block(r, b, cin, n, cout, d, r_new);
          for (i = 0; i < 32; i++) begin: first_layer 
              if (i == 0)
                  divider_block layer0(
                                      .r(a[31]), 
                                      .b(~b[0]),
                                      .cin(1'b1),
                                      .n(difference[0]),
                                      .cout(couts[0][0]),
                                      .d(),
                                      .r_new(remainder[0][0])
                                      ); // d unconnected
              else if (i == 31)
                  divider_block layer0(.r(1'b0), 
                                       .b(~b[31]), 
                                       .cin(couts[0][30]), 
                                       .n(difference[0]),
                                       .cout(), 
                                       .d(difference[0]),
                                       .r_new()); // couts and r_new omitted
              else
                  //divider_block(r, b, cin, n, cout, d, r_new);
                  //the rest of R inputs are pulled down to GND
                  divider_block layer0(.r(1'b0),
                                       .b(~b[i]), 
                                       .cin(couts[0][i-1]), 
                                       .n(difference[0]),
                                       .cout(couts[0][i]),
                                       .d(), 
                                       .r_new(remainder[0][i])); // d unconnected
          
          //divider_block(r, b, cin, n, cout, d, r_new);
          end 
          for (k = 1; k < 32; k++) begin: next_layer
              for (i = 0; i < 32; i++) begin
                  if (i == 0)
                     divider_block layerk_first(a[31-k], ~b[0], 1'b1, difference[k], couts[k][0], , remainder[k][0]);
                  else if (i == 31)
                      divider_block layerk_last(
                            .r(remainder[k-1][30]), 
                            .b(~b[31]), 
                            .cin(couts[k][i-1]), 
                            .n(difference[k]), 
                            .cout(),
                            .d(difference[k]), 
                            .r_new(remainder[k][i])); 
                  else 
                     divider_block layerk(remainder[k-1][i-1], ~b[i], couts[k][i-1], difference[k], couts[k][i], , remainder[k][i]);
          end
          end
      end
      endgenerate


     // quotient generate
     //
     generate
         for(k = 0; k < 32; k++)
            assign q[k] = ~difference[31-k]; 
     endgenerate
     // remainder
     assign rem[31:0] = remainder[31];

endmodule
