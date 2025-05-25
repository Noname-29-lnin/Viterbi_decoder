module SIPO #(
    parameter SIZE_DATA_IN = 16,
    parameter SIZE_DATA_OUT = 2
)(
    input logic i_clk,
    input logic i_rst_n,
    input logic i_start,
    input logic [SIZE_DATA_IN-1:0] i_data,
    output logic [SIZE_DATA_OUT-1:0] o_data,
    output logic o_valid,
    output logic o_done
);

parameter DEPTH = SIZE_DATA_IN / SIZE_DATA_OUT;
parameter SIZE_DEPTH = $clog2(DEPTH);
logic [SIZE_DATA_OUT-1:0] shift_reg [0:DEPTH-1];

// Setup counter
logic [SIZE_DEPTH-1:0] count, ncount;
logic w_update_count;
logic w_count, w_count_next;
assign w_update_count = i_start & (~o_done);
assign w_count_next = w_update_count & w_count;
assign ncount = w_count_next ? count + 1'b1 : '0;
always_ff @(posedge i_clk or negedge i_rst_n) begin : proc_count
    if(~i_rst_n) begin
        count   <= '0;
        w_count <= 1'b0;
    end else begin
        count   <= ncount;
        w_count <= w_update_count;
    end
end

// Setup shift register
always_comb begin : proc_shift_reg
    shift_reg[0] = i_data[1:0];
    shift_reg[1] = i_data[3:2];
    shift_reg[2] = i_data[5:4];
    shift_reg[3] = i_data[7:6];
    shift_reg[4] = i_data[9:8];
    shift_reg[5] = i_data[11:10];
    shift_reg[6] = i_data[13:12];
    shift_reg[7] = i_data[15:14];
end

// Setup output data
logic [SIZE_DATA_OUT-1:0] w_output;
// logic w_valid;
always_ff @(posedge i_clk or negedge i_rst_n) begin : proc_outut_data
    if(~i_rst_n) begin
        w_output <= '0;
    end else begin
        // if(w_update_count) begin
        //     w_output <= shift_reg[count];
        //     w_valid <= 1'b1; 
        // end else begin
        //     w_output <= '0;
        //     w_valid <= 1'b0;
        // end
        w_output <= shift_reg[count];
    end
end
assign o_data = w_count_next ? w_output : '0;
assign o_valid = w_count_next ? 1'b1 : 1'b0;

// Setup Output done signal
logic w_done;
assign w_done = &count;
always_ff @(posedge i_clk or negedge i_rst_n) begin : proc_done
    if(~i_rst_n) begin
        o_done <= 1'b0;
    end else begin
        o_done <= w_done;
    end
end

endmodule
