// 32-bit multiplier. Calculates the difference for each row (d),
// then outputs the quotient and the remainder.

module divider_32(input logic [31:0] a,b,
                  output logic [31:0] rem, q);
      
      // can be parametrized
      logic [31:0] couts [30:0];
      //  D = R - B 
      //  D < 0 ? R' = R : R' = D 
      logic [31:0] difference;
      logic [31:0] remainder [31:0]; // too big
      
      genvar i, k;
      generate begin
      // first layer is different as it has its inputs zeroed
          // bar except the last(first to be generated) column
          //divider_block(r, b, cin, n, cout, d, r_new);
          begin: first_layer
          divider_block layer0(a[31], ~b[0], 1'b1, difference[0], couts[0][0], , remainer[0][0];) // d unconnected
          for (i = 1; i < 30; i++) 
              //the rest of R inputs are pulled down to GND
              //divider_block(r, b, cin, n, cout, d, r_new);
              divider_block(1'b0, ~b[i], couts[0][i-1], difference[0], couts[0][i], , remainder[0][i]); // d unconnected
          //divider_block(r, b, cin, n, cout, d, r_new);
          divider_block layer0(a[0], ~b[31], couts[0][30], difference[0], , difference[0], ); // couts and r_new omitted
          end 
          for (k = 1; k < 31; i++) begin: next_layer
              divider_block(a[31-k], ~b[0], 1'b1, difference[k], couts[k][0], , remainder[k][0]);
              for (i = 1; i < 30; i++)
                  divider_block(remainder[k-1][i-1], ~b[i], couts[k][i-1], difference[k], couts[k][i], , remainder[k][i]);
              divider_block(.r(remainder[k-1][30]), 
                            .b(~b[31]), 
                            .cin(couts[k][i-1]), 
                            .n(difference[k]), 
                            .cout(),
                            .d(difference[k]), 
                            .r_new()); //remainder[k][i]);
          end
      end
      endgenerate


     // quotient generate
     generate
         for(k = 0, k < 31; k++)
            assign q[k] = ~difference[k]; 
     endgenerate
     // remainder
     assign rem[31:0] = remainder[31];

endmodule
