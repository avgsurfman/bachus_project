/// Full adder with XOR for the multiply module specifically for signed multiplication.
// XOR acts as a toggle switch.

module fulladder_xor(input logic a, b, sin, cin, toggle,
                    output logic sout, cout);
  
    logic a_and_b;
    assign a_and_b = toggle ^ (a & b);
    //        0         0        0
    //        1         0        1
    //        1         1        0
    //        0         1        1
    assign sout = a_and_b ^ sin ^ cin;
    assign cout = a_and_b & sin | a_and_b & cin | sin & cin;
    
endmodule
