module Testcase1 #(
    parameter SIZE_DATA_IN  = 16,
    parameter SIZE_DATA_OUT = 8,
    parameter SIZE_PISO     = 2,
    parameter SIZE_SIPO     = 1
)(
    input logic i_clk,
    input logic i_rst_n,
    input logic i_start,
	 input logic i_init_lcd,
	 input logic i_on_lcd,
	 input logic i_lcd_blon,
    input logic [SIZE_DATA_IN-1:0] i_data,
	 
    output logic [SIZE_DATA_OUT-1:0] o_LCD_DATA  ,
    output logic                     o_LCD_E     ,
    output logic                     o_LCD_RW    ,
    output logic                     o_LCD_RS    ,
    output logic                     o_LCD_ON    ,
    output logic                     o_LCD_BLON  ,
    output logic                     o_done_lcd  
);

logic [SIZE_PISO-1:0] w_data_PISO;
logic w_valid_PISO, w_start_PISO;
assign w_start_PISO = i_start & w_start_LCD;
PISO #(
    .SIZE_DATA_IN  (16),
    .SIZE_DATA_OUT ( 2)
) PISO_unit (
    .i_clk          (i_clk),
    .i_rst_n        (i_rst_n),
    .i_start        (w_start_PISO),
    .i_data         (i_data),
    .o_data         (w_data_PISO),
    .o_valid        (w_valid_PISO),
    .o_done         (w_done_PISO)
);

logic w_valid_VD;
Viterbi_decoding VD_unit(
    .i_clk          (i_clk),      // Clock input
    .i_rst_n        (i_rst_n),    // Active-low reset
    .i_valid        (w_valid_PISO),    
    .i_data         (w_data_PISO),     // 2-bit input data
    .o_decision     (w_data_SIPO),     // Decoded output bit
    .o_valid        (w_valid_VD) // Valid output indicator
);

logic [SIZE_SIPO-1:0] w_data_SIPO;
logic w_done_SIPO;
SIPO #(
    .SIZE_DATA_IN  ( 1),
    .SIZE_DATA_OUT ( 8)
) SIPO_unit (
    .i_clk          (i_clk),
    .i_rst_n        (i_rst_n),
    .i_start        (w_valid_VD),
    .i_data         (w_data_SIPO),
    .o_data         (o_data),
    .o_done         (w_done_SIPO)
);
 logic w_done_PISO;
 logic w_en_lcd, w_done_LCD, w_start_LCD;
 logic [SIZE_DATA_OUT-1:0] w_LCD_idata;
 logic [3:0] w_LCD_func;
 LCD_control #(
     .SIZE_DATA (8),
     .SIZE_FUNC (4)
 ) LCD_control (
     .i_clk              (i_clk),
     .i_rst_n            (i_rst_n),
     .i_en_init          (i_init_lcd),
     .i_done_PISO        (w_done_PISO),
     .i_done_SIPO        (w_done_SIPO),
     .i_done_LCD         (w_done_LCD),
     .i_data             (o_data),

     .o_en_lcd           (w_en_lcd),
     .o_data             (w_LCD_idata),    
     .o_func             (w_LCD_func),
     .o_done             (w_start_LCD)
 );
 IP_LCD_timer_counter #(
     .SIZE_DATA(8) ,
     .SIZE_FUNC(4) //,
     // parameter FREQ          = 50_000_000
 )(
     .i_clk              (i_clk),
     .i_rst_n            (i_rst_n),
     .i_en_lcd           (w_en_lcd),
     .i_on_lcd           (i_on_lcd),
     .i_lcd_blon         (i_lcd_blon),
     .i_data             (w_LCD_idata),
     .i_func             (w_LCD_func),

     .o_LCD_DATA         (o_LCD_DATA),
     .o_LCD_E            (o_LCD_E),
     .o_LCD_RW           (o_LCD_RW),
     .o_LCD_RS           (o_LCD_RS),
     .o_LCD_ON           (o_LCD_ON),
     .o_LCD_BLON         (o_LCD_BLON),
     .o_done_lcd         (w_done_LCD)
 );
assign o_done_lcd = w_done_LCD;
endmodule
