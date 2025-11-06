`include "incell.sv"
`include "blackcell.sv"
`include "graycell.sv"
`include "outcell.sv"

module sklansky_adder #( parameter SIZE=32)
                      (input logic [SIZE-1:0] a, b,
                      input logic cin,
                      output logic cout, 
                      output logic [SIZE-1:0] y);
          
          // level zero
          
          // special thanks to nikosdelijohn
          // the total number of p,g levels (k)
          localparam num_steps = $clog2(SIZE);

          wire [SIZE-1:0] generates  [num_steps:0]; 
          wire [SIZE-1:0] propagates [num_steps:0];
       
          genvar i;
          generate
             for ( i = 0; i < SIZE; i++) begin: entry
             incell pg_generate (a[i], b[i], propagates[0][i], generates[0][i]);
             end
          endgenerate 

          // level one

          genvar k;
          generate begin
          for ( k = 1; k <= num_steps; k++) begin
              for ( i = 0; i < SIZE; i++) begin     // this could be a pain in the ass if i consider carry ins                                  
                  if (( i % 2**k) >= 2**(k-1)) begin : blackcell_insertion // black cells are inserted every 2**(k-1) cells  
                      // this calls for a rewrite
                      if ( i  < 2**k ) begin    // enough graycells/level?
                          graycell gr0(propagates[k-1][i], generates[k-1][i], 
                          generates[k-1][i - (1 << (k-1))], generates[k][i] 
                          );// insert grays from the back
                          assign propagates[k][i] = propagates[k-1][i];
                      end
                      else blackcell bl0(propagates[k-1][i],propagates[k-1][i - (1 << (k-1))], // i - (1 << (k-1))
                                     generates[k-1][i], generates[k-1][i - (1 << (k-1))], //modulo 1, 2,4
                                     propagates[k][i], generates[k][i]
                                    );
                  end 
                  else begin: buffer_insertion
                      //if  ( i % 2**(k-1) >= 2**(k-1)/2 ) begin
                      //    buf (propagates[k][i], propagates[k-1][i]);
                      //    buf (generates[k][i], generates[k-1][i]);
                      //end
                      //else begin
                      //    // intermediary wire
                          assign propagates[k][i] = propagates[k-1][i];
                          assign generates[k][i] =  generates[k-1][i];
                  end
              end
           end
        end 

        // level last
        // note: in cin version create a propagate step
        //copypasted code        
        for (i = 0; i < SIZE; i++) begin: sum 
        outcell ou(a[i], b[i], generates[num_steps][i], y[i]);
        end
        
        endgenerate 

endmodule
