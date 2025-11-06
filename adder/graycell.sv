module graycell(input wire p, g, g_prev,
                output wire g_next);
       // Generate
       wire g_or;
       and(g_or, p, g_prev);
       or(g_next, g_or, g);

endmodule
