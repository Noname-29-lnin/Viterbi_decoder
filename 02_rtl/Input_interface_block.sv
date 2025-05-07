module Input_interface_block #(
    parameter SIZE_IN   = 16,
    parameter SIZE_OUT  = 2
    )(
    input logic                     i_clk   ,
    input logic                     i_rst_n ,

    input logic                     i_start ,
    input logic [SIZE_IN - 1: 0]    i_data  ,
    output logic [SIZE_OUT - 1:0]   o_data  ,
    output logic                    o_valid ,
    output logic                    o_stop     
);

logic [3:0] state;

next_state_block nsb(
    .i_clk   (i_clk),
    .i_rst_n (i_rst_n),
    .i_start (i_start),

    .o_state (state),
    .o_valid (o_valid),
    .o_stop  (o_stop)   
);
output_block #(
    .SIZE_IN(16),
    .SIZE_OUT(2)
    ) ob(
    .i_state     (state),
    .i_data      (i_data),
    .o_data      (o_data) 
);

endmodule

module next_state_block(
    input logic                     i_clk   ,
    input logic                     i_rst_n ,
    input logic                     i_start ,

    output logic [3:0]              o_state ,
    output logic                    o_valid ,
    output logic                    o_stop     
);

logic [3:0] state, nstate;

always_ff @(posedge i_clk or negedge i_rst_n) begin
    if(~i_rst_n) begin
        o_valid <= 1'b0;
        o_stop  <= 1'b0;
        state   <= 4'b0000;
    end else begin
        if(i_start) begin
            state <= nstate;
            if(state == 4'b1000) begin
                o_stop  <= 1'b1;
                o_valid <= 1'b0;
                state   <= 4'b0000;
            end else begin
                o_stop  <= 1'b0;
                o_valid <= 1'b1;
            end 
        end else begin
            o_stop   <= 1'b0;
            o_valid  <= 1'b0;
            state    <= 4'b0000;
        end 
    end 
end

always_comb begin
    nstate = state + 1;
    o_state = state;
end 

endmodule
module output_block #(
    parameter SIZE_IN   = 16,
    parameter SIZE_OUT  = 2
    )(
    input logic [3:0]               i_state     ,
    input logic [SIZE_IN - 1:0]     i_data      ,
    output logic [SIZE_OUT - 1:0]   o_data       
    );

    logic [1:0] shift_reg [7:0];

assign shift_reg[7] = i_data[1:0];
assign shift_reg[6] = i_data[3:2];
assign shift_reg[5] = i_data[5:4];
assign shift_reg[4] = i_data[7:6];
assign shift_reg[3] = i_data[9:8];
assign shift_reg[2] = i_data[11:10];
assign shift_reg[1] = i_data[13:12];
assign shift_reg[0] = i_data[15:14];

// always_comb begin
//     o_data = shift_reg[i_state]; 
// end

always_comb begin
    case(i_state) 
        4'b0001: o_data = shift_reg[0];
        4'b0010: o_data = shift_reg[1];
        4'b0011: o_data = shift_reg[2];
        4'b0100: o_data = shift_reg[3];
        4'b0101: o_data = shift_reg[4];
        4'b0110: o_data = shift_reg[5];
        4'b0111: o_data = shift_reg[6];
        4'b1000: o_data = shift_reg[7];
    endcase
end 

endmodule
 
