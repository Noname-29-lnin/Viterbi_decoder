module Compare_unit(
    input logic [1:0]   i_path_metric_0,
    input logic [1:0]   i_path_metric_1,
    output logic        o_less_select 
);
assign o_less_select = (~i_path_metric_0[0] & ~i_path_metric_0[1]) | (~i_path_metric_0[1] & i_path_metric_1[1]) | (~i_path_metric_0[1] & i_path_metric_1[0]) | (i_path_metric_1[1] & i_path_metric_1[0]) | (i_path_metric_0[1] & ~i_path_metric_0[0] & i_path_metric_1);
endmodule
