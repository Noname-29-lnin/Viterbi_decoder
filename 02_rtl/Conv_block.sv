module Conv_block #(
    parameter SIZE_IN       = 8,
    parameter SIZE_OUT      = 16,
    parameter SIZE_LENGTH   = 3
)(
    input logic                 i_clk   ,
    input logic                 i_rst_n ,
    input logic                 i_start ,
    input logic [SIZE_IN-1:0]   i_data  ,
    
    output logic [SIZE_OUT-1:0] o_data  ,
    output logic                o_valid 
);

// Shift register 
logic shift_reg [SIZE_LENGTH-1:0];

always_ff @(posedge i_clk or negedge i_rst_n) begin : proc_shift_reg
    if(~i_rst_n) begin
        for (int i = 0; i < SIZE_LENGTH; i++) begin
            shift_reg[i] <= '0;
        end
    end else if (i_start) begin
        shift_reg[0] <= i_data;
        for (int i = 1; i < SIZE_LENGTH; i++) begin
            shift_reg[i] <= shift_reg[i-1];
        end
    end 
    
end

endmodule
