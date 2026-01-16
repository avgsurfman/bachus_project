module F_isNaN       (input logic [31:0] a,
                     output logic isNaN, isInf, 
                     isSubnormal, isZero, isNormal);
   
    /// IEEE754-2008 3.4 Binary Interchange format encodings
    logic expOnes, expZeroes, sigZeroes;
    
    assign expOnes   =  &a[30:23];
    assign expZeroes = ~|a[30:23];
    assign sigZeroes = ~|a[22:0];
    
    assign isNaN         = ~a[31] & expOnes & a[22] & ~|a[21:0]; //0x7fc00000
    assign isInf         = expOnes & sigZeroes;
    assign isZero        = expZeroes & sigZeroes;
    assign isSubnormal   = expZeroes & ~sigZeroes; 
    assign isNormal      = ~expOnes & ~expZeroes;

endmodule
