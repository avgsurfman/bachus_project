module sklansky_adder #( parameter SIZE=32)
                      (input logic [SIZE-1:0] a, b,
                      input logic cin,
                      output logic cout, 
                      output logic [SIZE-1:0] y);
          
          // special thanks to NikosDelijohn
          // total number of P,G levels (k);
          localparam num_steps = $clog2(SIZE);

          wire [SIZE-1:0] propagates [0:num_steps];
          wire [SIZE-1:0] generates [0:num_steps-1];
          

          // LEVEL ZERO
 
          genvar i;
          generate
             for ( i = 0; i < SIZE; i++) begin: entry
             incell pg_generate (a[i], b[i], propagates[0][i], generates[0][i]);
             end
          endgenerate 

          // LEVEL ONE
          genvar k;
          
          //TODO: REWIRE

          generate begin : sklansky_tree
          for ( k = 1; k < $clog2(SIZE); k++) begin
              for ( i = 0; i < SIZE; i++) begin                                             
                  if (( i % 2**k) >= 2**(k-1)) begin : blackcell_insertion//-> blackcell\gray cell "painting", 
                      if ( i  < 2**k ) graycell( //propagates[k-1][i], generates[k-1][i], generates[k-1][i - (1 << (k-1))], generates[k][i] );// insert grays from the back
                      else blackcell(//propagates[k-1][i], propagates[k-1][i - (1 << (k-1))], 
                                     //generates[k-1][i], generates[k-1][i - (1 << (k-1))],
                                     //propagates[k][i], generates[k][i]
                                    );
                  end 
                  else begin: buffer_insertion
                  //    if  ( i % 2**(k-1) >= 2**(k-1)/2 )
                  //            buf ()
                  //   else nothing
                  // hmmmm...
                  end
              end
         end
         

         // LEVEL LAST
         assign cout = generates[num_steps][SIZE-1];


endmodule;
