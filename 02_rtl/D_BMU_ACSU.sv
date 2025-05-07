module D_BMU_ACSU(
    input logic             i_clk       ,
    input logic             i_rst_n     ,
    input logic             i_valid     ,
    input logic [1:0]   i_BM_0      ,
    input logic [1:0]   i_BM_1      ,
    input logic [1:0]   i_BM_2      ,
    input logic [1:0]   i_BM_3      ,
    input logic [1:0]   i_PM_0     ,
    input logic [1:0]   i_PM_1     ,
    input logic [1:0]   i_PM_2     ,
    input logic [1:0]   i_PM_3     ,
    output logic [1:0]   o_BM_0      ,
    output logic [1:0]   o_BM_1      ,
    output logic [1:0]   o_BM_2      ,
    output logic [1:0]   o_BM_3      ,
    output logic [1:0]   o_PM_0     ,
    output logic [1:0]   o_PM_1     ,
    output logic [1:0]   o_PM_2     ,
    output logic [1:0]   o_PM_3     ,
    output logic         o_valid    
);

always_ff @(posedge i_clk or negedge i_rst_n) begin
    if(~i_rst_n) begin
       o_BM_0       <=  0;     
       o_BM_1       <=  0;
       o_BM_2       <=  0;
       o_BM_3       <=  0;
       o_PM_0       <=  2'b00;
       o_PM_1       <=  2'b11;
       o_PM_2       <=  2'b11;
       o_PM_3       <=  2'b11;
       o_valid      <=  0;
   end else if(i_valid) begin
        o_BM_0       <=  i_BM_0;     
        o_BM_1       <=  i_BM_1;
        o_BM_2       <=  i_BM_2;
        o_BM_3       <=  i_BM_3;
        o_PM_0       <=  i_PM_0;
        o_PM_1       <=  i_PM_1;
        o_PM_2       <=  i_PM_2;
        o_PM_3       <=  i_PM_3;
        o_valid      <=  1;
   end else begin
        o_BM_0       <=  o_BM_0;     
        o_BM_1       <=  o_BM_1;
        o_BM_2       <=  o_BM_2;
        o_BM_3       <=  o_BM_3;
        o_PM_0       <=  o_PM_0;
        o_PM_1       <=  o_PM_1;
        o_PM_2       <=  o_PM_2;
        o_PM_3       <=  o_PM_3;
        o_valid      <=  0;
   end 
end 

endmodule


