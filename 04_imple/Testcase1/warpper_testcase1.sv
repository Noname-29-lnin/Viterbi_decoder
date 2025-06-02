module warpper_testcase1(
    input logic         CLOCK_50,
    input logic [17:0]  SW      ,
    output logic [17:0] LEDR    ,
    output logic [6:0]  LEDG    ,
    output logic [6:0]  HEX0    ,
    output logic [6:0]  HEX1    
);

Testcase1 #(
    .SIZE_DATA_IN  (16    ),
    .SIZE_DATA_OUT (8     ),
    .SIZE_PISO     (2     ),
    .SIZE_SIPO     (1     ),
    .SIZE_7SEG     (7     )
) uut (
    .i_clk          (CLOCK_50)  ,
    .i_rst_n        (SW[17])    ,
    .i_start        (SW[16])    ,
    .i_data         (SW[15:0])  ,
	 
    .o_HEX_0        (HEX0)      ,
    .o_HEX_1        (HEX1)      ,
    .o_done_PISO    (LEDG[0])   ,
    .o_done_SIPO    (LEDG[1])   
);

assign LEDR[17:0] = SW[17:0];

endmodule
