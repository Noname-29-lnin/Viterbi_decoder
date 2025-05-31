// module SIPO #(
//     parameter SIZE_DATA_IN  = 1,
//     parameter SIZE_DATA_OUT = 8
// )(
//     input logic i_clk,
//     input logic i_rst_n,
//     input logic i_start,
//     input logic [SIZE_DATA_IN-1:0] i_data,
//     output logic [SIZE_DATA_OUT-1:0] o_data,
//     output logic o_done
// );

// parameter DEPTH = SIZE_DATA_OUT / SIZE_DATA_IN;
// parameter SIZE_DEPTH = $clog2(DEPTH);
// logic [SIZE_DATA_IN-1:0] shift_reg [0:DEPTH-1];

// // Setup counter
// logic [SIZE_DEPTH-1:0] count, ncount;
// logic w_update_count;
// logic w_count, w_count_next;
// // assign w_update_count = i_start & (~o_done);
// assign w_update_count = i_start;
// assign w_count_next = w_update_count & w_count;
// assign ncount = w_count_next ? count + 1'b1 : count;
// always_ff @(posedge i_clk or negedge i_rst_n) begin : proc_count
//     if(~i_rst_n) begin
//         count   <= '0;
//         w_count <= 1'b0;
//     end else begin
//         count   <= ncount;
//         w_count <= w_update_count;
//     end
// end

// // Setup shift register
// logic [SIZE_DATA_IN-1:0] w_idata;
// logic [SIZE_DATA_IN-1:0] w_idata_next;
// always_ff @(posedge i_clk or negedge i_rst_n) begin : proc_save_idata
//     if(~i_rst_n) begin
//         w_idata_next <= '0;
//     end else begin
//         w_idata_next <= w_idata;
//     end
// end
// assign w_idata = (w_update_count) ? i_data : w_idata_next;
// always_ff @(posedge i_clk or negedge i_rst_n) begin : proc_shift_count
//     if(~i_rst_n) begin
//         for (int i = 0; i < DEPTH; i++) begin
//             shift_reg[i] <= '0;
//         end
//     end else begin
//         shift_reg[count] <= w_idata;
//     end
// end

// // Setup output data
// logic [SIZE_DATA_OUT-1:0] w_odata;
// logic [SIZE_DATA_OUT-1:0] w_odata_next;
// always_comb begin : proc_output_data
//     w_odata[0] = shift_reg[0];
//     w_odata[1] = shift_reg[1];
//     w_odata[2] = shift_reg[2];
//     w_odata[3] = shift_reg[3];
//     w_odata[4] = shift_reg[4];
//     w_odata[5] = shift_reg[5];
//     w_odata[6] = shift_reg[6];
//     w_odata[7] = shift_reg[7];
// end
// always_ff @(posedge i_clk or negedge i_rst_n) begin : proc_save_odata
//     if(~i_rst_n) begin
//         w_odata_next <= '0;
//     end else begin
//         w_odata_next <= w_odata;
//     end
// end
// assign o_data = (o_done) ? w_odata_next : '0;

// // Setup done signal
// logic w_done;
// assign w_done = &count;
// always_ff @(posedge i_clk or negedge i_rst_n) begin : proc_done
//     if(~i_rst_n) begin
//         o_done <= 1'b0;
//     end else begin
//         o_done <= w_done;
//     end
// end
// endmodule

module SIPO #(
    parameter SIZE_DATA_IN  = 1,
    parameter SIZE_DATA_OUT = 8
)(
    input logic i_clk,
    input logic i_rst_n,
    input logic i_start,
    input logic [SIZE_DATA_IN-1:0] i_data,
    output logic [SIZE_DATA_OUT-1:0] o_data,
    output logic o_done
);

// Counter
parameter SIZE_DEPTH = SIZE_DATA_OUT/SIZE_DATA_IN;
parameter SIZE_COUNT = $clog2(SIZE_DEPTH);
logic [SIZE_COUNT-1:0] count, n_count;
logic w_update_count, w_start_next;
always_ff @( posedge i_clk or negedge i_rst_n ) begin 
    if(~i_rst_n) begin
        w_start_next <= 1'b0;
    end else begin
        w_start_next <= i_start;
    end
end
assign w_update_count = i_start & w_start_next & ~o_done;
assign n_count = (w_update_count) ? count + 1'b1 : count;
always_ff @( posedge i_clk or negedge i_rst_n ) begin 
    if(~i_rst_n) begin
        count <= '0;
    end else begin
        count <= n_count;
    end
end

// Save input 
logic [SIZE_DATA_IN-1:0] w_idata;
logic [SIZE_DATA_IN-1:0] w_idata_next;
assign w_idata = (i_start) ? i_data : w_idata_next;
always_ff @( posedge i_clk or negedge i_rst_n ) begin : proc_save_in_data
    if(~i_rst_n) 
        w_idata_next <= '0;
    else
        w_idata_next <= w_idata;
end

// shift_reg
logic [SIZE_DATA_IN-1:0] shift_reg [SIZE_DEPTH-1:0];
always_ff @( posedge i_clk or negedge i_rst_n ) begin : proc_shift_reg
    if(~i_rst_n) begin
        for(int i = 0; i < SIZE_DEPTH; i++) begin
            shift_reg[i] <= '0;
        end
    end else begin
        shift_reg[count] <= w_idata;
    end
end

// Output Data
logic [SIZE_DATA_OUT-1:0] w_odata;
always @(*) begin : proc_output_data
    for(int i = 0; i < SIZE_DEPTH; i++) begin
        w_odata[i] = shift_reg[i];
    end
end
// Data thay doi sau xung clock
always @( posedge i_clk or negedge i_rst_n ) begin
    if(~i_rst_n) begin
        o_data <= '0;
    end else begin
        if(o_done)
            o_data <= w_odata;
        else
            o_data <= o_data;
    end
end
// Code danh cho viec lay data thay doi lien
// logic [SIZE_DATA_OUT-1:0] w_odata_next;
// assign o_data = (o_done) ? w_odata : w_odata_next;
// always_ff @( posedge i_clk or negedge i_rst_n ) begin : proc_output_data_save
//     if(~i_rst_n)
//         w_odata_next <= '0;
//     else 
//         w_odata_next <= o_data;
// end

// Done Signal
logic w_done;
assign w_done = (&count);
always_ff @( posedge i_clk or negedge i_rst_n ) begin : proc_done_signal
    if(~i_rst_n)
        o_done <= 1'b0;
    else
        o_done <= (o_done) ? 1'b0 : w_done;
end
endmodule
