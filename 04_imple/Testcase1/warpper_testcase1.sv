module warpper_testcase1(
    input logic         CLOCK_50,
    input logic [17:0]  SW      ,
	 input logic [3:0]   KEY	  ,
    output logic [17:0] LEDR    ,
    output logic [6:0]  LEDG    ,
    output logic [6:0]  HEX0    ,
    output logic [6:0]  HEX1    
);

parameter SIZE_COUNT = 32;
parameter CLOCK_DIV = 500000;
logic [SIZE_COUNT-1:0] count;
logic w_clk;
always_ff @( posedge CLOCK_50) begin
	count <= (count == CLOCK_DIV) ? '0 : count + 1'b1;
end
always_ff @( posedge CLOCK_50) begin
	w_clk <= (count == CLOCK_DIV) ? ~w_clk : w_clk;
end

logic w_key;
assign w_key = ~KEY[0];

Testcase1 #(
    .SIZE_DATA_IN  (16    ),
    .SIZE_DATA_OUT (8     ),
    .SIZE_PISO     (2     ),
    .SIZE_SIPO     (1     ),
    .SIZE_7SEG     (7     )
) uut (
    .i_clk          (w_clk)  ,
    .i_rst_n        (SW[17])    ,
    .i_start        (w_key)    ,
    .i_data         (SW[15:0])  ,
	 
    .o_HEX_0        (HEX0)      ,
    .o_HEX_1        (HEX1)      ,
    .o_done_PISO    (LEDG[1])   ,
    .o_done_SIPO    (LEDG[2])   
);

assign LEDR[17:0] = SW[17:0];
assign LEDG[0] = w_key;
endmodule
