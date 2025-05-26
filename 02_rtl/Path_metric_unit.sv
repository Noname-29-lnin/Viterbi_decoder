module Path_metric_unit #(
    parameter SIZE_DATA = 2
)(
    input logic     i_clk,
    input logic     i_rst_n,
    input logic     i_valid,
    input logic [SIZE_DATA-1:0] i_PM_0,
    input logic [SIZE_DATA-1:0] i_PM_1,
    input logic [SIZE_DATA-1:0] i_PM_2,
    input logic [SIZE_DATA-1:0] i_PM_3,
    output logic [SIZE_DATA-1:0] o_PM_0,
    output logic [SIZE_DATA-1:0] o_PM_1,
    output logic [SIZE_DATA-1:0] o_PM_2,
    output logic [SIZE_DATA-1:0] o_PM_3
);

// Save the path metrics
always_ff @(posedge i_clk or negedge i_rst_n) begin
    if (~i_rst_n) begin
        o_PM_0 <= 2'b00;
        o_PM_1 <= 2'b11;
        o_PM_2 <= 2'b11;
        o_PM_3 <= 2'b11;
    end else begin
        if(i_valid) begin
            o_PM_0 <= i_PM_0;
            o_PM_1 <= i_PM_1;
            o_PM_2 <= i_PM_2;
            o_PM_3 <= i_PM_3;
        end else begin
            o_PM_0 <= o_PM_0;
            o_PM_1 <= o_PM_1;
            o_PM_2 <= o_PM_2;
            o_PM_3 <= o_PM_3;
        end
    end
end

endmodule
