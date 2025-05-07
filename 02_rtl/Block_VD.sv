module Block_VD(
    input logic         i_clk   ,
    input logic         i_rst_n ,
    input logic         i_start ,
    input logic [15:0]  i_data  ,
    output logic [7:0]  o_data  ,
    output logic        o_valid 
);

logic [1:0] w_idata;
logic       w_valid_IIB, w_valid_VD;
logic       w_stop_IIB, w_start_OIB; 
logic       w_odata;
Input_interface_block #(
    .SIZE_IN(16),
    .SIZE_OUT(2)
    ) IIB (
    .i_clk   (i_clk),
    .i_rst_n (i_rst_n),
    .i_start (i_start),
    .i_data  (i_data),
    .o_data  (w_idata),
    .o_valid (w_valid_IIB),
    .o_stop  (w_stop_IIB) 
);


Viterbi_decoding VD(
    .i_clk      (i_clk),      // Clock input
    .i_rst_n    (i_rst_n),    // Active-low reset
    .i_valid    (w_valid_IIB),    
    .i_data     (w_idata),     // 2-bit input data
    .o_decision (w_odata),     // Decoded output bit
    .o_valid    (w_valid_VD)     // Valid output indicator
);
always_ff @(posedge i_clk or negedge i_rst_n) begin
    if(~i_rst_n) begin
        w_start_OIB <= 1'b0;
    end else begin
        w_start_OIB <= w_stop_IIB;
    end     
end 
// assign w_start_OIB = w_stop_IIB;
Output_interface_block #(
    .SIZE_IN(1),
    .SIZE_OUT(8)
) OIB (
    .i_clk      (i_clk),
    .i_rst_n    (i_rst_n),
    .i_start    (w_start_OIB),
    .i_valid    (w_valid_VD),
    .i_data     (w_odata),
    .o_data     (o_data),
    .o_valid    (o_valid)
);

endmodule
