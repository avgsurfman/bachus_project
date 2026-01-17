//// Full adder for the compressor module.
/// Also known as the [3:2] compressor
// Named differently to avoid conflicts 

module   3_2adder(input  logic a, b, cin, 
                 output logic s, cout);

    assign s = a ^ b ^ cin;
    assign cout = a & b | a & cin | b & cin;

endmodule
