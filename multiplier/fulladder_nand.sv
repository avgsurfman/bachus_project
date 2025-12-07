/// Full adder with NAND for the multiply module specifically for signed multiplication.

module fulladder_nand(input logic a, b, sin, cin, 
                     output logic sout, cout);
  
    logic a_and_b;
    assign a_and_b = a ~& b;
    assign sout = a_and_b ^ sin ^ cin;
    assign cout = a_and_b & sin | a_and_b & cin | sin & cin;
      
endmodule
