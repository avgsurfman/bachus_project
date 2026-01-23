module F_priority_encoder(input logic [22:0] a,
                          output logic [4:0] y);
    always_comb begin
        // encode y as ff for -1 :)
        if      (a[22]) y = 23'd0;
        else if (a[21]) y = 23'd1;
        else if (a[20]) y = 23'd2;
        else if (a[19]) y = 23'd3;
        else if (a[18]) y = 23'd4;
        else if (a[17]) y = 23'd5;
        else if (a[16]) y = 23'd6;
        else if (a[15]) y = 23'd7;
        else if (a[14]) y = 23'd8;
        else if (a[13]) y = 23'd9;
        else if (a[12]) y = 23'd10;
        else if (a[11]) y = 23'd11;
        else if (a[10]) y = 23'd12;
        else if (a[9])  y = 23'd13;
        else if (a[8])  y = 23'd14;
        else if (a[7])  y = 23'd15;
        else if (a[6])  y = 23'd16;
        else if (a[5])  y = 23'd17;
        else if (a[4])  y = 23'd18;
        else if (a[3])  y = 23'd19; 
        else if (a[2])  y = 23'd20; 
        else if (a[1])  y = 23'd21; 
        else            y = 23'd22; 
    end
endmodule

