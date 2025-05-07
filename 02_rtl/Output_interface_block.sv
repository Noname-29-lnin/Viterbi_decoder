module Output_interface_block #(
    parameter SIZE_IN = 1,
    parameter SIZE_OUT = 8
)(
    input logic                 i_clk,
    input logic                 i_rst_n,
    input logic                 i_start,
    input logic                 i_valid,
    input logic [SIZE_IN-1:0]   i_data,
    output logic [SIZE_OUT-1:0] o_data,
    output logic                o_valid
);

    logic [SIZE_IN-1:0] shift_reg [0:SIZE_OUT-1];
    // logic [$clog2(SIZE_OUT)-1:0] count;

    always_ff @(posedge i_clk or negedge i_rst_n) begin
        if (~i_rst_n) begin
            for (int i = 0; i < SIZE_OUT; i++) begin
                shift_reg[i] <= '0;
            end
        end else begin
            if (i_valid) begin
                shift_reg[0] <= i_data;
                for (int i = 1; i < SIZE_OUT; i++) begin
                    shift_reg[i] <= shift_reg[i-1];
                end
            end 
        end
    end
    always_comb begin
        if(~i_rst_n) begin
            o_valid = 1'b0;
            o_data  = '0;
        end else if (i_start) begin
            o_data  = {shift_reg[SIZE_OUT-1], shift_reg[SIZE_OUT-2], shift_reg[SIZE_OUT-3], shift_reg[SIZE_OUT-4], shift_reg[SIZE_OUT-5], shift_reg[SIZE_OUT-6], shift_reg[SIZE_OUT-7], shift_reg[0]};
            o_valid = 1'b1;
        end else begin
            o_valid = 1'b0;
            o_data  = '0;
        end
    end 
endmodule
// module Output_interface_block #(
//     parameter SIZE_IN  = 1,
//     parameter SIZE_OUT = 8
// )(
//     input  logic                 i_clk,      // Clock input
//     input  logic                 i_rst_n,    // Active-low reset
//     input  logic                 i_start,    // Start signal
//     input  logic                 i_valid,    // Input data valid
//     input  logic [SIZE_IN-1:0]   i_data,     // Input data
//     output logic [SIZE_OUT-1:0]  o_data,     // Output data
//     output logic                 o_valid     // Output valid
// );

//     // Shift register to store SIZE_OUT chunks of SIZE_IN-bit data
//     logic [SIZE_IN-1:0] shift_reg [0:SIZE_OUT-1];
//     logic [$clog2(SIZE_OUT)-1:0] count;

//     // Sequential logic for shift register
//     always_ff @(posedge i_clk or negedge i_rst_n) begin
//         if (~i_rst_n) begin
//             count <= '0;
//             for (int i = 0; i < SIZE_OUT; i++) begin
//                 shift_reg[i] <= '0;
//             end
//         end else begin
//             if (i_valid) begin
//                 shift_reg[0] <= i_data;
//                 for (int i = 1; i < SIZE_OUT; i++) begin
//                     shift_reg[i] <= shift_reg[i-1];
//                 end
//             end
//         end
//     end

//     // Combinational logic for output
//     always_comb begin
//         if (~i_rst_n) begin
//             o_valid = 1'b0;
//             o_data  = '0;
//         end else if (i_start) begin
//             o_valid = 1'b1;
//             // Dynamically assign shift register contents to o_data
//             for (int i = 0; i < SIZE_OUT; i++) begin
//                 o_data[SIZE_OUT-1-i] = shift_reg[i][0]; // Assuming SIZE_IN=1 for bit selection
//             end
//         end else begin
//             o_valid = 1'b0;
//             o_data  = '0;
//         end
//     end

// endmodule
