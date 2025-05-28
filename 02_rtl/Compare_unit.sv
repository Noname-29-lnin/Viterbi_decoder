module Compare_unit(
    input logic [1:0] i_metric_path_0,  // A
    input logic [1:0] i_metric_path_1,  // B
    output logic o_compare_less      
);

// | A  | B  | C  |
// | 00 | 00 |  1 |
// | 00 | 01 |  1 |
// | 00 | 10 |  1 |
// | 00 | 11 |  1 |
// | 01 | 00 |  0 |
// | 01 | 01 |  1 |
// | 01 | 10 |  1 |
// | 01 | 11 |  1 |
// | 10 | 00 |  0 |
// | 10 | 01 |  0 |
// | 10 | 10 |  1 |
// | 10 | 11 |  1 |
// | 11 | 00 |  0 |
// | 11 | 01 |  0 |
// | 11 | 10 |  0 |
// | 11 | 11 |  1 |

    // Correct implementation
    assign o_compare_less = (~i_metric_path_0[0] & ~i_metric_path_0[1]) |
                            ( i_metric_path_1[0] &  i_metric_path_1[1]) |
                            (~i_metric_path_0[1] &  i_metric_path_1[0]) |
                            (~i_metric_path_0[1] &  i_metric_path_1[1]) |
                            (~i_metric_path_0[0] &  i_metric_path_1[1]) ;
endmodule
