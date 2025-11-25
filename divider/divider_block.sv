// Divider basic block.

module divider_block(input logic r, b, cin, n,
                     output logic cout, d, r_new);
    assign d = r ^ b ^ cin;
    assign cout = r & b | r & cin | b & cin;
    assign r_new = n ? r : d; 
endmodule
