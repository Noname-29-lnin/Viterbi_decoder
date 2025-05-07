module wrapper(
    input       CLOCK_50,
    input [17:0]    SW,
    // input [3:0]     KEY,
    output [17:0]   LEDR,
    output [6:0]    LEDG
    );

logic w_start, w_rst_n;
logic [1:0] w_idata;
logic       w_odata;
logic       w_valid_IIB, w_valid_VD;
logic       w_start_OIB, w_start_IIB;
assign w_start = SW[16];
assign w_rst_n = SW[17];
// Clock div
int count = 0;
logic clock_div = 1'b0;
always_ff @(posedge CLOCK_50) begin
    count ++;
    if(count == 25) begin
        count <= 0;
        clock_div <= ~clock_div;
    end 
end 

    Input_interface_block #(
        .SIZE_IN(16),
        .SIZE_OUT(7)
) IIB (
    .i_clk      (clock_div),
    .i_rst_n    (w_rst_n),
    .i_start    (w_start),
    .i_data     (SW[15:0]),
    .o_data     (w_idata),
    .o_valid    (w_valid_IIB),
    .o_stop     (w_start_IIB)
);

Viterbi_decoding VD(
    .i_clk        (clock_div),     // Clock input
    .i_rst_n      (w_rst_n),     // Active-low reset
    .i_valid      (w_valid_IIB),    
    .i_data       (w_idata),     // 2-bit input data
    .o_decision   (w_odata),     // Decoded output bit
    .o_valid      (w_valid_VD)    // Valid output indicator
);

always_ff @(posedge i_clk) begin
    w_start_OIB <= w_start_IIB;
end 
Output_interface_block #(
    .SIZE_IN(1),
    .SIZE_OUT(8)
) OIB (
    .i_clk          (clock_div),
    .i_rst_n        (w_rst_n),
    .i_start        (w_start_OIB),
    .i_valid        (w_valid_VD),
    .i_data         (w_odata),
    .o_data         (LEDR[7:0]),
    .o_valid        (LEDR[8])
);

endmodule
