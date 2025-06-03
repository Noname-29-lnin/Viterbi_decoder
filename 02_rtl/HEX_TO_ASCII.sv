module HEX_TO_ASCII #(
    parameter SIZE_DATA_IN  = 4 ,
    parameter SIZE_DATA_OUT = 8 
)(
    input  logic [SIZE_DATA_IN-1:0]   i_data  ,
    output logic [SIZE_DATA_OUT-1:0]  o_data  
);

always @(*) begin : proc_hex_to_ascii_using_LCD
    case (i_data)
        4'h0: o_data = 8'h30; // '0'
        4'h1: o_data = 8'h31; // '1'
        4'h2: o_data = 8'h32; // '2'
        4'h3: o_data = 8'h33; // '3'
        4'h4: o_data = 8'h34; // '4'
        4'h5: o_data = 8'h35; // '5'
        4'h6: o_data = 8'h36; // '6'
        4'h7: o_data = 8'h37; // '7'
        4'h8: o_data = 8'h38; // '8'
        4'h9: o_data = 8'h39; // '9'
        4'hA: o_data = 8'h41; // 'A'
        4'hB: o_data = 8'h42; // 'B'
        4'hC: o_data = 8'h43; // 'C'
        4'hD: o_data = 8'h44; // 'D'
        4'hE: o_data = 8'h45; // 'E'
        4'hF: o_data = 8'h46; // 'F'
        default: o_data = 8'h20; // space (not displayable)
    endcase
end

endmodule
