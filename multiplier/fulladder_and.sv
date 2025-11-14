/// Full adder with AND for the multiply module

module fulladder_and(input logic a, b, sin, cin, 
                     output logic sout, cout);
  
    logic a_and_b;
    assign a_and_b = a & b;
    assign sout = a_and_b ^ sin ^ cin;
    assign cout = a_and_b & sin | a_and_b & cin | sin & cin;
      
endmodule
