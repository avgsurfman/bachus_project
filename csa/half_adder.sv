/// idfk if I need this
/// s = a ^ b, b 
module half_adder(input logic a, b,
                  output logic cout, s);
    assign s = a ^ b;
    assign cout = a & b;
endmodule
