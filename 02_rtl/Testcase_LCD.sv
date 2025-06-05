module Testcase_LCD #(
    parameter SIZE_DATA_IN  = 16    ,
    parameter SIZE_DATA_OUT = 8     ,
    parameter SIZE_PISO     = 2     ,
    parameter SIZE_SIPO     = 1     ,
    parameter SIZE_DATA     = 8     ,
    parameter SIZE_FUNC     = 2     
)(
    input logic i_clk                       ,
    input logic i_rst_n                     ,
    input logic i_start                     ,
    input logic [SIZE_DATA_IN-1:0]  i_data  ,
	input logic                     i_en_LCD,
    input logic                     i_on_LCD,
    input logic                     i_blon_LCD,
    output logic                    o_done_PISO ,
    output logic                    o_done_SIPO ,
    output logic [SIZE_DATA-1:0]    o_LCD_DATA  ,
    output logic                    o_LCD_E     ,
    output logic                    o_LCD_RW    ,
    output logic                    o_LCD_RS    ,
    output logic                    o_LCD_ON    ,
    output logic                    o_LCD_BLON  ,
    output logic                    o_done_lcd  
);

logic [SIZE_PISO-1:0] w_data_PISO;
logic w_valid_PISO;
logic [SIZE_DATA_OUT-1:0] o_data;
wire w_start_PISO;

assign w_start_PISO = i_start & w_done_LCD_control;

PISO #(
    .SIZE_DATA_IN  (16),
    .SIZE_DATA_OUT ( 2)
) PISO_unit (
    .i_clk          (i_clk)         ,
    .i_rst_n        (i_rst_n)       ,
    .i_start        (w_start_PISO)       ,
    .i_data         (i_data)        ,
    .o_data         (w_data_PISO)   ,
    .o_valid        (w_valid_PISO)  ,
    .o_done         (o_done_PISO)   
);

logic w_valid_VD;
Viterbi_decoding VD_unit(
    .i_clk          (i_clk)         ,
    .i_rst_n        (i_rst_n)       ,
    .i_valid        (w_valid_PISO)  ,    
    .i_data         (w_data_PISO)   ,
    .o_decision     (w_data_SIPO)   ,
    .o_valid        (w_valid_VD)    
);

logic [SIZE_SIPO-1:0] w_data_SIPO;
SIPO #(
    .SIZE_DATA_IN  ( 1),
    .SIZE_DATA_OUT ( 8)
) SIPO_unit (
    .i_clk          (i_clk)         ,
    .i_rst_n        (i_rst_n)       ,
    .i_start        (w_valid_VD)    ,
    .i_data         (w_data_SIPO)   ,
    .o_data         (o_data)        ,
    .o_done         (o_done_SIPO)   
);

logic w_done_LCD_control;
logic [SIZE_DATA-1:0] w_data_LCD_control;
logic [SIZE_FUNC-1:0] w_func_LCD_control;
LCD_control #(
    .SIZE_CONV (16),
    .SIZE_DATA (8),
    .SIZE_FUNC (2)
) LCD_control_uut (
    .i_clk          (i_clk),
    .i_rst_n        (i_rst_n),
    .i_en_LCD       (i_en_LCD),
    .i_done_PISO    (o_done_SIPO),
    .i_done_SIPO    (o_done_SIPO),
    .i_done_LCD     (w_done_IP_LCD),
    .i_conv         (i_data),
    .i_data         (o_data),

    .o_en_lcd       (w_en_lcd),
    .o_data         (w_data_LCD_control),
    .o_func         (w_func_LCD_control),
    .o_done         (w_done_LCD_control)
);
logic w_en_lcd;
logic w_done_IP_LCD;
assign o_done_lcd = w_done_IP_LCD;
IP_LCD_timer_counter #(
    .SIZE_DATA     (8) ,
    .SIZE_FUNC     (2) ,
    .FREQ          (50_000_000)
) IP_LCD_timer_counter_uut (
    .i_clk          (i_clk),
    .i_rst_n        (i_rst_n),
    .i_en_lcd       (w_en_lcd), 
    .i_on_lcd       (i_on_LCD),
    .i_lcd_blon     (i_blon_LCD),
    .i_data         (w_data_LCD_control),
    .i_func         (w_func_LCD_control),

    .o_LCD_DATA     (o_LCD_DATA),
    .o_LCD_E        (o_LCD_E),
    .o_LCD_RW       (o_LCD_RW),
    .o_LCD_RS       (o_LCD_RS),
    .o_LCD_ON       (o_LCD_ON),
    .o_LCD_BLON     (o_LCD_BLON),
    .o_done_lcd     (w_done_IP_LCD)
);

endmodule
