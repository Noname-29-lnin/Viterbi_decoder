module Hex_to_7seg #(
    parameter SIZE_DATA = 4,
    parameter SIZE_7SEG = 7
)(
    input  logic                     i_en_hex   ,  
    input  logic [SIZE_DATA-1:0]     i_data     ,  
    output logic [SIZE_7SEG-1:0]     o_HEX      
);

    logic [SIZE_7SEG-1:0] seg;

    always @(*) begin
        case (i_data)
            4'h0:    seg = 7'b1000000;  // 0
            4'h1:    seg = 7'b1111001;  // 1
            4'h2:    seg = 7'b0100100;  // 2
            4'h3:    seg = 7'b0110000;  // 3
            4'h4:    seg = 7'b0011001;  // 4
            4'h5:    seg = 7'b0010010;  // 5
            4'h6:    seg = 7'b0000010;  // 6
            4'h7:    seg = 7'b1111000;  // 7
            4'h8:    seg = 7'b0000000;  // 8
            4'h9:    seg = 7'b0010000;  // 9
            4'hA:    seg = 7'b0001000;  // A
            4'hB:    seg = 7'b0000011;  // b
            4'hC:    seg = 7'b1000110;  // C
            4'hD:    seg = 7'b0100001;  // d
            4'hE:    seg = 7'b0000110;  // E
            4'hF:    seg = 7'b0001110;  // F
            default: seg = 7'b1111111;  // Default: all segments off
        endcase
    end

    assign o_HEX = (i_en_hex) ? seg : 7'b1111111;

endmodule
