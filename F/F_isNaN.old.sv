module F_isNaN       (input logic [31:0] a,
                     output logic isNaN, isInf, isNegInf, 
                     isSubnormal, isZero, isNormal);
   
    /// IEEE754-2008 3.4 Binary Interchange format encodings
    //logic expOnes, expZeroes, sigZeroes;
    //
    //assign expOnes   =  &a[30:23];
    //assign expZeroes = ~|a[30:23];
    //assign sigZeroes = ~|a[22:0];
    //
    //assign isNaN         = 
    //assign isInf         = expOnes & sigZeroes;
    //assign isZero        = expOnes & sigZeroes;
    //assign isSubnormal   = expZeroes & ~sigZeroes; 
    //assign isNormal      = ~expOnes & -expZeroes;
  
    // Detect a NaN
    always_comb begin
        if (a == 32'h7fc00000) isNaN = 1;
        else                   isNaN = 0;
        if (a == 32'h7f800000) isInf =   1;
        else                   isInf =   0;
        if (a == 32'hff800000) isNegInf =  1;
        else                   isNegInf =  0;
        if (a == 32'h80000000 || a == 32'h00000000) isZero = 1;
        else                                        isZero = 0;
        if (~|a[30:23] && |a[22:0])       isSubnormal = 1;
        else                              isSubnormal = 0;
        if (~&a[30:23]  && ~|a[30:23])    isNormal = 1;
        else                              isNormal = 0;
   end
                
endmodule
