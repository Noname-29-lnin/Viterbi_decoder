module Testcase1 #(
    parameter SIZE_DATA_IN  = 16    ,
    parameter SIZE_DATA_OUT = 8     ,
    parameter SIZE_PISO     = 2     ,
    parameter SIZE_SIPO     = 1     ,
    parameter SIZE_7SEG     = 7     
)(
    input logic i_clk                       ,
    input logic i_rst_n                     ,
    input logic i_start                     ,
    input logic [SIZE_DATA_IN-1:0]  i_data  ,
	 
    output logic [SIZE_7SEG-1:0]    o_HEX_0 ,
    output logic [SIZE_7SEG-1:0]    o_HEX_1 ,
    output logic                    o_done_PISO ,
    output logic                    o_done_SIPO 
);

logic [SIZE_PISO-1:0] w_data_PISO;
logic w_valid_PISO;
logic [SIZE_DATA_OUT-1:0] o_data;

PISO #(
    .SIZE_DATA_IN  (16),
    .SIZE_DATA_OUT ( 2)
) PISO_unit (
    .i_clk          (i_clk)         ,
    .i_rst_n        (i_rst_n)       ,
    .i_start        (i_start)       ,
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

Hex_to_7seg #(
    .SIZE_DATA (4),
    .SIZE_7SEG (7)
) HEX_0_unit (
    .i_en_hex       (i_rst_n)       ,
    .i_data         (o_data[3:0])   ,
    .o_HEX          (o_HEX_0)       
);

Hex_to_7seg #(
    .SIZE_DATA (4),
    .SIZE_7SEG (7)
) HEX_1_unit (
    .i_en_hex       (i_rst_n)       ,
    .i_data         (o_data[7:4])   ,
    .o_HEX          (o_HEX_1)       
);

endmodule
