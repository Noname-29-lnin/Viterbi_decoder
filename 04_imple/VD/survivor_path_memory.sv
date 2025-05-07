module survivor_path_memory(
    input logic         i_clk,
    input logic         i_rst_n,
    input logic [1:0]   i_path_metric_0,
    input logic [1:0]   i_path_metric_1,
    input logic [1:0]   i_path_metric_2, 
    input logic [1:0]   i_path_metric_3,
    
    output logic        o_decision_bit,
    output logic        o_done
);
parameter logic [1:0] S0 = 2'b00;
parameter logic [1:0] S1 = 2'b01;
parameter logic [1:0] S2 = 2'b10;
parameter logic [1:0] S3 = 2'b11;

logic [1:0] state;
logic [1:0] nstate;
wire       compare_less_0, compare_less_1;
wire       w_decision_bit;

Compare_unit CP_02(
    .i_path_metric_0    (i_path_metric_0),
    .i_path_metric_1    (i_path_metric_2),
    .o_less_select      (compare_less_0) 
);

Compare_unit CP_13(
    .i_path_metric_0    (i_path_metric_1),
    .i_path_metric_1    (i_path_metric_3),
    .o_less_select      (compare_less_1) 
);
state_machine(
    .i_clk          (i_clk),
    .i_rst_n        (i_rst_n),
    .i_comare_02    (compare_less_0),
    .i_comare_13    (compare_less_1),
    .o_data         (o_decision_bit),
    .o_done         (o_done)
);

endmodule
