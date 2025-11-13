module blackcell(input wire p, p_prev, g, g_prev, 
                 output wire p_next, g_next);
       // Propagate
       and(p_next,p, p_prev);

       // Generate
       wire g_or;
       and(g_or, p, g_prev);
       or(g_next, g_or, g);

endmodule

