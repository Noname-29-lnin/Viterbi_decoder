module path_metric_unit(
    input logic         i_clk,
    input logic         i_rst_n,
    input logic         i_en,

    input logic [1:0] i_path_metric_0,
    input logic [1:0] i_path_metric_1,
    input logic [1:0] i_path_metric_2,
    input logic [1:0] i_path_metric_3,

    output logic [1:0] o_path_metric_0,
    output logic [1:0] o_path_metric_1,
    output logic [1:0] o_path_metric_2,
    output logic [1:0] o_path_metric_3
);

always_ff @(posedge i_clk or negedge i_rst_n) begin
    if(!i_rst_n) begin
        o_path_metric_0 <= 0; 
        o_path_metric_1 <= 0; 
        o_path_metric_2 <= 0;
        o_path_metric_3 <= 0; 
    end else if(i_en) begin
        o_path_metric_0 <= i_path_metric_0; 
        o_path_metric_1 <= i_path_metric_1;
        o_path_metric_2 <= i_path_metric_2;
        o_path_metric_3 <= i_path_metric_3;
    end else begin
        o_path_metric_0 <= o_path_metric_0; 
        o_path_metric_1 <= o_path_metric_1;
        o_path_metric_2 <= o_path_metric_2;
        o_path_metric_3 <= o_path_metric_3;
    end 
end 

endmodule
