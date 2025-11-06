module outcell(input wire a, b, g, output wire s);
       wire sum_part;
       xor(sum_part, a, b);
       xor(s, sum_part, g);
endmodule

