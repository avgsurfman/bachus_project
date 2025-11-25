//`include "hdl/sklansky_adder.sv"

module sklansky_adder_dff_test #( parameter SIZE=32)
                      (input logic [SIZE-1:0] a, b,
                      input logic cin, clk,
                      output logic cout, 
                      output logic [SIZE-1:0] y);
      logic [SIZE-1:0] q, d;
      always_ff@(posedge clk)
             q <= d;
      sklansky_adder adder(a, b, cin, cout, d);
      assign y = q;
endmodule

