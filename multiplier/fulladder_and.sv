/// Full adder with AND for the multiply module

module fulladder_and(logic a, b, sin, cin, 
                     output logic s, cout);


    assign s = a ^ b ^ c;
    assign cout = a & b | a & c | b & c;
      
endmodule
