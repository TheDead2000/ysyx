// module c_instruction_expander (
//     input [15:0] compressed_inst_i,
//     output reg [31:0] expanded_inst_o
// );
    
//     // 提取指令字段
//     wire [1:0] opcode = compressed_inst_i[1:0];
//     wire [4:0] funct3 = {1'b0, compressed_inst_i[15:13]};  // 扩展到5位便于比较
    
//     always @(*) begin
//         case (opcode)
//             2'b00: begin
//                 // C0格式：ADDI4SPN, LW, SW等
//                 case (compressed_inst_i[15:13])
//                     3'b000: begin  // C.ADDI4SPN
//                         // addi rd', x2, nzuimm
//                         expanded_inst_o = {2'b0, compressed_inst_i[10:7], 
//                                           compressed_inst_i[12:11], compressed_inst_i[5], 
//                                           compressed_inst_i[6], 2'b00,
//                                           5'h02, 3'b000, {2'b01, compressed_inst_i[4:2]}, 
//                                           7'b0010011};
//                     end
//                     3'b010: begin  // C.LW
//                         // lw rd', offset(rs1')
//                         expanded_inst_o = {5'b0, compressed_inst_i[5], 
//                                           compressed_inst_i[12:10], compressed_inst_i[6], 
//                                           2'b00,
//                                           {2'b01, compressed_inst_i[9:7]}, 3'b010, 
//                                           {2'b01, compressed_inst_i[4:2]}, 7'b0000011};
//                     end
//                     3'b110: begin  // C.SW
//                         // sw rs2', offset(rs1')
//                         expanded_inst_o = {5'b0, compressed_inst_i[5], 
//                                           compressed_inst_i[12:10], compressed_inst_i[6], 
//                                           2'b00,
//                                           {2'b01, compressed_inst_i[9:7]}, 3'b010, 
//                                           {2'b01, compressed_inst_i[4:2]}, 7'b0100011};
//                     end
//                     default: begin
//                         // 其他C0指令暂时返回NOP
//                         expanded_inst_o = 32'h00000013;
//                     end
//                 endcase
//             end
            
//             2'b01: begin
//                 // C1格式：ADDI, JAL, LI, LUI等
//                 case (compressed_inst_i[15:13])
//                     3'b000: begin  // C.ADDI
//                         // addi rd, rd, imm
//                         expanded_inst_o = {{7{compressed_inst_i[12]}}, 
//                                           compressed_inst_i[6:2], 
//                                           compressed_inst_i[11:7], 3'b000, 
//                                           compressed_inst_i[11:7], 7'b0010011};
//                     end
//                     3'b001: begin  // C.JAL
//                         // jal x1, offset
//                         expanded_inst_o = {compressed_inst_i[12], 
//                                           compressed_inst_i[8], compressed_inst_i[10:9], 
//                                           compressed_inst_i[6], compressed_inst_i[7], 
//                                           compressed_inst_i[2], compressed_inst_i[11], 
//                                           compressed_inst_i[5:3],
//                                           {9{compressed_inst_i[12]}}, 4'b0, 
//                                           5'h01, 7'b1101111};
//                     end
//                     3'b010: begin  // C.LI
//                         // addi rd, x0, imm
//                         expanded_inst_o = {{7{compressed_inst_i[12]}}, 
//                                           compressed_inst_i[6:2], 
//                                           5'b0, 3'b000, 
//                                           compressed_inst_i[11:7], 7'b0010011};
//                     end
//                     3'b011: begin  // C.LUI / C.ADDI16SP
//                         if (compressed_inst_i[11:7] == 5'b00010) begin
//                             // C.ADDI16SP: addi x2, x2, nzimm
//                             expanded_inst_o = {{3{compressed_inst_i[12]}}, 
//                                               compressed_inst_i[4:3], compressed_inst_i[5], 
//                                               compressed_inst_i[2], compressed_inst_i[6], 
//                                               4'b0, 5'h02, 3'b000, 5'h02, 7'b0010011};
//                         end else begin
//                             // C.LUI: lui rd, nzimm
//                             expanded_inst_o = {{15{compressed_inst_i[12]}}, 
//                                               compressed_inst_i[6:2], 
//                                               compressed_inst_i[11:7], 7'b0110111};
//                         end
//                     end
//                     default: begin
//                         expanded_inst_o = 32'h00000013;
//                     end
//                 endcase
//             end
            
//             2'b10: begin
//                 // C2格式：SLLI, LWSP, SWSP等
//                 case (compressed_inst_i[15:13])
//                     3'b000: begin  // C.SLLI
//                         // slli rd, rd, shamt
//                         expanded_inst_o = {7'b0, compressed_inst_i[6:2], 
//                                           compressed_inst_i[11:7], 3'b001, 
//                                           compressed_inst_i[11:7], 7'b0010011};
//                     end
//                     3'b010: begin  // C.LWSP
//                         // lw rd, offset(x2)
//                         expanded_inst_o = {4'b0, compressed_inst_i[3:2], 
//                                           compressed_inst_i[12], compressed_inst_i[6:4], 
//                                           2'b00, 5'h02, 3'b010, 
//                                           compressed_inst_i[11:7], 7'b0000011};
//                     end
//                     3'b110: begin  // C.SWSP
//                         // sw rs2, offset(x2)
//                         expanded_inst_o = {4'b0, compressed_inst_i[8:7], 
//                                           compressed_inst_i[12:9], 2'b00, 
//                                           5'h02, 3'b010, compressed_inst_i[6:2], 
//                                           7'b0100011};
//                     end
//                     default: begin
//                         expanded_inst_o = 32'h00000013;
//                     end
//                 endcase
//             end
            
//             default: begin
//                 // 不是压缩指令（opcode为2'b11）或其他情况
//                 expanded_inst_o = 32'h00000013;
//             end
//         endcase
//     end
// endmodule