module top(
    input clk,
    input rst,
    input [4:0] btn,
    input [15:0] sw,
    input ps2_clk,
    input ps2_data,
    input uart_rx,
    output uart_tx,
    output [15:0] ledr,
    output VGA_CLK,
    output VGA_HSYNC,
    output VGA_VSYNC,
    output VGA_BLANK_N,
    output [7:0] VGA_R,
    output [7:0] VGA_G,
    output [7:0] VGA_B,
    output [7:0] seg0,
    output [7:0] seg1,
    output [7:0] seg2,
    output [7:0] seg3,
    output [7:0] seg4,
    output [7:0] seg5,
    output [7:0] seg6,
    output [7:0] seg7
);

// ALU实现
wire [3:0] A = sw[3:0];  // 操作数A
wire [3:0] B = sw[7:4];  // 操作数B
wire [2:0] op = sw[15:13]; // 功能选择

reg [3:0] result;        // 运算结果
reg CF, OF, ZF;          // 标志位

// 算术运算的中间信号
wire [4:0] add_result = {1'b0, A} + {1'b0, B};
wire [4:0] sub_result = {1'b0, A} - {1'b0, B};

// 输出到LED
assign ledr[3:0] = result;
assign ledr[12] = ZF;
assign ledr[13] = OF;
assign ledr[14] = CF;

always @(*) begin
    CF = 1'b0;
    OF = 1'b0;
    ZF = 1'b0;
    
    case(op)
        // 加法
        3'b000: begin
            result = add_result[3:0];
            CF = add_result[4];
            // 溢出判断：两个正数相加得负数，或两个负数相加得正数
            OF = (~A[3] & ~B[3] & result[3]) | (A[3] & B[3] & ~result[3]);
        end
        
        // 减法
        3'b001: begin
            result = sub_result[3:0];
            CF = sub_result[4];
            // 溢出判断：正数减负数得负数，或负数减正数得正数
            OF = (~A[3] & B[3] & result[3]) | (A[3] & ~B[3] & ~result[3]);
        end
        
        // 取反
        3'b010: result = ~A;
        
        // 与
        3'b011: result = A & B;
        
        // 或
        3'b100: result = A | B;
        
        // 异或
        3'b101: result = A ^ B;
        
        // 比较大小（有符号）
        3'b110: begin
            // 有符号比较：先判断符号位，再比较数值
            if (A[3] != B[3]) 
                result = {3'b000, A[3]}; // 符号不同，负数为小
            else 
                result = {3'b000, (A < B)}; // 符号相同，直接比较
        end
        
        // 判断相等
        3'b111: result = {3'b000, (A == B)};
        
        default: result = 4'b0000;
    endcase
    
    // 零标志
    ZF = (result == 4'b0000);
end

// 数码管显示
reg [5:0] seg0_data; // 第5位:显示负号, 第4位:关闭数码管, 低4位:数值
reg [5:0] seg1_data;
reg [5:0] seg2_data;
reg [5:0] seg3_data;
reg [5:0] seg4_data;
reg [5:0] seg5_data;
reg [5:0] seg6_data;
reg [5:0] seg7_data;

// 数码管数值到段码的解析
seg_decoder u_seg_decoder0(
    .binary_input ( seg0_data ),
    .seg_output   ( seg0    )
);

seg_decoder u_seg_decoder1(
    .binary_input ( seg1_data ),
    .seg_output   ( seg1    )
);

seg_decoder u_seg_decoder2(
    .binary_input ( seg2_data ),
    .seg_output   ( seg2    )
);

seg_decoder u_seg_decoder3(
    .binary_input ( seg3_data ),
    .seg_output   ( seg3    )
);

seg_decoder u_seg_decoder4(
    .binary_input ( seg4_data ),
    .seg_output   ( seg4    )
);

seg_decoder u_seg_decoder5(
    .binary_input ( seg5_data ),
    .seg_output   ( seg5    )
);

seg_decoder u_seg_decoder6(
    .binary_input ( seg6_data ),
    .seg_output   ( seg6    )
);

seg_decoder u_seg_decoder7(
    .binary_input ( seg7_data ),
    .seg_output   ( seg7    )
);

// 获取数值的绝对值和符号
function [3:0] get_abs;
    input [3:0] value;
    begin
        get_abs = value[3] ? (~value + 1'b1) : value;
    end
endfunction

// 数码管显示内容设置
always @(*) begin
    // seg0: 显示A的数值（绝对值）
    seg0_data = {1'b0, 1'b0, get_abs(A)};
    
    // seg1: 显示A的符号（如果是负数则显示负号，否则关闭）
    if (A[3]) begin // 负数
        seg1_data = {1'b1, 1'b0, 4'b0000}; // 显示负号
    end else begin // 正数或零
        seg1_data = {1'b0, 1'b1, 4'b0000}; // 关闭数码管
    end
    
    // seg2: 显示B的数值（绝对值）
    seg2_data = {1'b0, 1'b0, get_abs(B)};
    
    // seg3: 显示B的符号（如果是负数则显示负号，否则关闭）
    if (B[3]) begin // 负数
        seg3_data = {1'b1, 1'b0, 4'b0000}; // 显示负号
    end else begin // 正数或零
        seg3_data = {1'b0, 1'b1, 4'b0000}; // 关闭数码管
    end
    
    // seg4: 显示结果的数值（绝对值）
    seg4_data = {1'b0, 1'b0, get_abs(result)};
    
    // seg5: 显示结果的符号（如果是负数则显示负号，否则关闭）
    if (result[3]) begin // 负数
        seg5_data = {1'b1, 1'b0, 4'b0000}; // 显示负号
    end else begin // 正数或零
        seg5_data = {1'b0, 1'b1, 4'b0000}; // 关闭数码管
    end
    
    // seg6: 显示标志位ZF
    seg6_data = {1'b0, 1'b0, 3'b000, ZF};
    
    // seg7: 显示标志位OF
    seg7_data = {1'b0, 1'b0, 3'b000, OF};
end

endmodule
module seg_decoder(
    input [5:0] binary_input, // 第5位:显示负号, 第4位:关闭数码管, 低4位:数值
    output reg [7:0] seg_output // 8-bit 段码值
);

always @(binary_input) begin
    if (binary_input[4]) begin // 第4位为1，关闭数码管
        seg_output = 8'b11111111; // 关闭数码管
    end else if (binary_input[5]) begin // 第5位为1，显示负号
        seg_output = 8'b11111101; // 负号显示（中间横线）
    end else begin // 正常数字显示
        case(binary_input[3:0])
            4'h0: seg_output = 8'b00000011; // 0
            4'h1: seg_output = 8'b10011111; // 1
            4'h2: seg_output = 8'b00100101; // 2
            4'h3: seg_output = 8'b00001101; // 3
            4'h4: seg_output = 8'b10011001; // 4
            4'h5: seg_output = 8'b01001001; // 5
            4'h6: seg_output = 8'b01000001; // 6
            4'h7: seg_output = 8'b00011111; // 7
            4'h8: seg_output = 8'b00000001; // 8
            4'h9: seg_output = 8'b00001001; // 9
            4'hA: seg_output = 8'b00010001; // A
            4'hB: seg_output = 8'b11000001; // B
            4'hC: seg_output = 8'b01100011; // C
            4'hD: seg_output = 8'b10000101; // D
            4'hE: seg_output = 8'b01100001; // E
            4'hF: seg_output = 8'b01110001; // F
            default: seg_output = 8'b11111111; // 关闭数码管
        endcase
    end
end

endmodule
