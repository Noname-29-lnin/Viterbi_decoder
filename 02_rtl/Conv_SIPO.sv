/////////////////////////////////////////////////////////////////////////////////
// File Name: Conv_SIPO.sv
// Author: Noname-29-lnin
// Description: Serial in Parallel out
///////////////////////////////////////////////////////////////////////////////////
module Conv_SIPO #(
    parameter SIZE_IN       = 2 ,
    parameter SIZE_OUT      = 16
)(
    input logic                 i_clk   ,
    input logic                 i_rst_n ,
    input logic                 i_start , // Start signal input buffer
    input logic [SIZE_IN-1:0]   i_data  ,
    
    output logic [SIZE_OUT-1:0] o_data  ,
    output logic                o_valid      
);

reg [SIZE_OUT-1:0] shift_reg;

reg [SIZE_]
always_ff @(posedge i_clk or negedge i_rst_n) begin : proc_shift_reg
    if(~i_rst_n) begin
        for(int i = 0; i < SIZE_OUT; i++) begin
            shift_reg[i] <= '0;
        end
    end else begin
        if(i_start) begin
            
        end else begin
            
        end
    end
end

endmodule
