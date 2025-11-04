module incell(input logic a, b,
              output wire p, g);
// wire because Verilator can't shut the fuck up
// precompute would be a better name but this one is hilariously
// easy to remember
or(p, a, b);
and(g, a, b);
endmodule

module blackcell(input wire p, p_prev, g, g_prev, 
                 output wire p_next, g_next);
       // Propagate
       and(p_next,p, p_prev);

       // Generate
       wire g_or;
       and(g_or, p, g_prev);
       or(g_next, g_or, g);

endmodule

module graycell(input wire p, g, g_prev,
                output wire g_next);
       // Generate
       wire g_or;
       and(g_or, p, g_prev);
       or(g_next, g_or, g);

endmodule

module outcell(input wire a, b, g, output wire s);
       wire sum_part;
       xor(sum_part, a, b);
       xor(s, sum_part, g);
endmodule

module sklansky_adder(input logic [31:0] a, b,
                      input logic cin,
                      output logic cout, 
                      output logic [31:0] y);
          // I am too lazy to write generate statements
          // and vim does stuff for me
          // ------------------------
          // LEVEL 0
          // genvar top;
          // generate begin
          // for (top = SIZE; top >= 0; top--) insert wire, 
          // end

          wire thirtyone_p;
          wire thirtyone_g;
          incell thirtyone (a[31], b[31], thirtyone_p, thirtyone_g);

          wire thirtyzero_p;
          wire thirtyzero_g;
          incell thirtyzero (a[30], b[30], thirtyzero_p, thirtyzero_g);
          

          wire twentynine_p;
          wire twentynine_g;
          incell twentynine (a[29], b[29], twentynine_p, twentynine_g);

          wire twentyeight_p;
          wire twentyeight_g;
          incell twentyeight (a[28], b[28], thirtyeight_p, thirtyeight_g);

          wire twentyseven_p;
          wire twentyseven_g;
          incell twentyseven (a[27], b[27], twentyseven_p, twentyseven_g);

          wire twentysix_p;
          wire twentysix_g;
          incell twentysix (a[26], b[26], twentysix_p, twentysix_g);
          

          wire twentyfive_p;
          wire twentyfive_g;
          incell twentyfive (a[25], b[25], twentyfive_p, twentyfive_g);

          wire twentyfour_p;
          wire twentyfour_g;
          incell twentyfour (a[24], b[24], twentyfour_p, twentyfour_g);

          wire twentythree_p;
          wire twentythree_g;
          incell twentythree (a[23], b[23], twentythree_p, twentythree_g);

          wire twentytwo_p;
          wire twentytwo_g;
          incell twentytwo (a[22], b[22], twentytwo_p, twentytwo_g);

          wire twentyone_p;
          wire twentyone_g;
          incell twentyone (a[21], b[21], twentyone_p, twentyone_g);

          wire twentyzero_p;
          wire twentyzero_g;
          incell twentyzero (a[20], b[20], twentyzero_p, twentyzero_g);


          wire nineteen_p;
          wire nineteen_g;
          incell nineteen (a[19], b[19], nineteen_p, nineteen_g);


          wire eighteen_p;
          wire eighteen_g;
          incell eighteen (a[18], b[18], eighteen_p, eighteen_g);
          
          wire seventeen_p;
          wire seventeen_g;
          incell seventeen (a[17], b[17], seventeen_p, seventeen_g);


          wire sixteen_p;
          wire sixteen_g;
          incell sixteen (a[16], b[16], sixteen_p, sixteen_g);

          wire fifteen_p;
          wire fifteen_g;
          incell fifteen (a[15], b[15], fifteen_p, fifteen_g);


          wire fourteen_p;
          wire fourteen_g;
          incell fourteen (a[14], b[14], fourteen_p, fourteen_g);


          wire thirteen_p;
          wire thirteen_g;
          incell thirteen (a[13], b[13], thirteen_p, thirteen_g);

          wire twelve_p;
          wire twelve_g;
          incell twelve (a[12], b[12], twelve_p, twelve_g);

          wire eleven_p;
          wire eleven_g;
          incell eleven (a[11], b[11], eleven_p, eleven_g);

          wire ten_p;
          wire ten_g;
          incell ten (a[10], b[10], ten_p, ten_g);
          
          wire nine_p;
          wire nine_g;
          incell nine (a[9], b[9], nine_p, nine_g);

          wire eight_p;
          wire eight_g;
          incell eight (a[8], b[8], eight_p, eight_g);

          wire seven_p;
          wire seven_g;
          incell seven (a[7], b[7], seven_p, seven_g);

          wire six_p;
          wire six_g;
          incell six (a[6], b[6], six_p, six_g);

          wire five_p;
          wire five_g;
          incell five (a[5], b[5], five_p, five_g);

          wire four_p;
          wire four_g;
          incell four (a[4], b[4], four_p, four_g);

          wire three_p;
          wire three_g;
          incell three (a[3], b[3], three_p, three_g);

          wire two_p;
          wire two_g;
          incell two (a[2], b[2], two_p, two_g);


          wire one_p;
          wire one_g;
          incell one (a[1], b[1], one_p, one_g);


          wire zero_p;
          wire zero_g;
          incell zero (a[0], b[0], zero_p, zero_g);

          // LEVEL ONE
          // generate begin
          // genvar k, i;
          // for ( k = 1; k < $clog2(SIZE); k++)
          // for ( i = 0; i < SIZE; i++)
          // if  ( i % 2**k) >= 2**(k-1) -> blackcell\gray cell "painting", insert grays from the back, then blackcells
          // 
          // else ->
          // if  ( i % 2**(k-1) >= 2**(k-1)/2 ) -> buffer
          // else nothing 
          // hmmmm...
          
          wire thirtyone_thirty_p;
          wire thirtyone_thirty_g;

          blackcell blk_31_30(thirtyone_p, thirty_p, thirtyone_g, thirty_g, thirtyone_thirty_p, thirtyone_thirty_p);

          wire twentynine_twentyeight_p;
          wire twentynine_twentyeight_g;

          blackcell blk_29_28(twentynine_p, twentyeight_p, twentynine_g, twentyeight_g, twentynine_twentyeight_p, twentynine_twentyeight_p);

          wire twentyseven_twentysix_p;
          wire twentyseven_twentysix_g;

          blackcell blk_27_26(twentyseven_p, twentysix_p, twentyseven_g, twentysix_g, twentyseven_twentysix_p, twentyseven_twentysix_p);


          wire twentyfive_twentyfour_p;
          wire twentyfive_twentyfour_g;

          blackcell blk_25_24(twentyfive_p, twentyfour_p, twentyfive_g, twentyfour_g, twentyfive_twentyfour_p, twentyfive_twentyfour_p);

          wire twentythree_twentytwo_p;
          wire twentythree_twentytwo_g;

          blackcell blk_23_22(twentythree_p, twentytwo_p, twentythree_g, twentytwo_g, twentythree_twentytwo_p, twentythree_twentytwo_p);


          wire thirtyone_thirty_p;
          wire thirtyone_thirty_g;

          blackcell blk_21_20(twentyone_p, twenty_p, twentyone_g, twenty_g, twentyone_twenty_p, twentyone_twenty_p);


          wire thirtyone_thirty_p;
          wire thirtyone_thirty_g;

          blackcell blk_19_18(nineteen_p, eighteen_p, nineteen_g, eighteen_g, nineteen_eighteen_p, nineteen_eighteen_p);


          wire thirtyone_thirty_p;
          wire thirtyone_thirty_g;

          blackcell blk_17_16(seventeen_p, sixteen_p, seventeen_g, sixteen_g, seventeen_sixteen_p, seventeen_sixteen_p);

          wire thirtyone_thirty_p;
          wire thirtyone_thirty_g;

          blackcell blk_15_14(fifteen_p, fourteen_p, fifteen_g, fourteen_g, fifteen_fourteen_p, fifteen_fourteen_p);


          wire thirtyone_thirty_p;
          wire thirtyone_thirty_g;

          blackcell blk_13_12(thirteen_p, twelve_p, thirteen_g, twelve_g, thirteen_twelve_p, thirteen_twelve_p);


          wire thirtyone_thirty_p;
          wire thirtyone_thirty_g;

          blackcell blk_11_10(eleven_p, ten_p, eleven_g, ten_g, eleven_ten_p, eleven_ten_p);


          wire thirtyone_thirty_p;
          wire thirtyone_thirty_g;

          blackcell blk_9_8(nine_p, eight_p, nine_g, eight_g, nine_eight_p, nine_eight_p);

          wire thirtyone_thirty_p;
          wire thirtyone_thirty_g;

          blackcell blk_7_6(seven_p, six_p, seven_g, six_g, seven_six_p, seven_six_p);











          // LEVEL 2
assign y = 32'hBADADD;

endmodule

