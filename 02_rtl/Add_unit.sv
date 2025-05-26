module Add_unit(
    input logic [1:0]       i_BM    ,
    input logic [1:0]       i_PM    ,
    output logic [1:0]      o_PM    
);

assign o_PM[0] = (!i_PM[0]&i_BM[0]) | (i_PM[0]&!i_BM[0]) | 
                 (i_PM[0]&i_BM[1]) | (i_PM[1]&i_BM[0])   | 
                 (i_PM[1]&i_BM[1]);
assign o_PM[1] = (i_PM[1] | i_BM[1]) | (i_PM[0] & i_BM[0]);

endmodule
