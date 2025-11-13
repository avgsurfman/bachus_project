module incell(input wire a, b,
              output wire p, g);
// precompute would be a better name but this one is hilariously
// easy to remember
xor(p, a, b);
and(g, a, b);
endmodule

