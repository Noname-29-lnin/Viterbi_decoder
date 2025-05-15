module Compare_unit(
    input logic [1:0] i_metric_path_0,  // A
    input logic [1:0] i_metric_path_1,  // B
    output logic o_compare_less      
);
    // Correct implementation
    assign o_compare_less = (~i_metric_path_0[0] & ~i_metric_path_0[1]) |
                            ( i_metric_path_1[0] &  i_metric_path_1[1]) |
                            (~i_metric_path_0[1] &  i_metric_path_1[0]) |
                            (~i_metric_path_0[1] &  i_metric_path_1[1]) |
                            (~i_metric_path_0[0] &  i_metric_path_1[1]) ;
endmodule
