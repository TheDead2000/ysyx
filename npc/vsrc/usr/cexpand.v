
module c_instruction_expander (
    input [31:0] compressed_inst_i,
    output reg [31:0] expanded_inst_o
);

    // 提取指令字段
    wire [1:0] opcode = compressed_inst_i[1:0];
    wire [2:0] funct3 = compressed_inst_i[15:13];


    always @(*) begin
        expanded_inst_o = 32'h00000013;  // 默认NOP
        
        case (opcode)
            2'b00: begin
                // C0格式：ADDI4SPN, LW, SW等
                case (funct3)
                    3'b000: begin  // C.ADDI4SPN
                        // addi rd', x2, nzuimm
                        expanded_inst_o = {2'b0, compressed_inst_i[10:7], 
                                          compressed_inst_i[12:11], compressed_inst_i[5], 
                                          compressed_inst_i[6], 2'b00,
                                          5'h02, 3'b000, {2'b01, compressed_inst_i[4:2]}, 
                                          7'b0010011};
                    end
                    3'b010: begin  // C.LW pass
                        // lw rd', offset(rs1')
                        expanded_inst_o = {5'b0, compressed_inst_i[5], 
                                          compressed_inst_i[12:10], compressed_inst_i[6], 
                                          2'b00,
                                          {2'b01, compressed_inst_i[9:7]}, 3'b010, 
                                          {2'b01, compressed_inst_i[4:2]}, 7'b0000011};
                    end
                    3'b110: begin  // C.SW
                        // sw rs2', offset(rs1')
                        expanded_inst_o = {5'b0, compressed_inst_i[5], 
                                          compressed_inst_i[12:10], compressed_inst_i[6], 
                                          2'b00,
                                          {2'b01, compressed_inst_i[9:7]}, 3'b010, 
                                          {2'b01, compressed_inst_i[4:2]}, 7'b0100011};
                    end
                    default: begin
                        expanded_inst_o = 32'h00000013;  // NOP
                    end
                endcase
            end
            
            2'b01: begin
                // C1格式：ADDI, JAL, LI, LUI, 算术指令等
                case (funct3)
                    3'b000: begin  // C.ADDI pass
                        // addi rd, rd, imm
                        expanded_inst_o = {{7{compressed_inst_i[12]}}, 
                                          compressed_inst_i[6:2], 
                                          compressed_inst_i[11:7], 3'b000, 
                                          compressed_inst_i[11:7], 7'b0010011};
                    end
                    3'b001: begin  // C.JAL pass
                        // jal x1, offset
                        // imm[20|10:1|11|19:12]
                        expanded_inst_o = {compressed_inst_i[12], 
                                          compressed_inst_i[8], compressed_inst_i[10:9], 
                                          compressed_inst_i[6], compressed_inst_i[7], 
                                          compressed_inst_i[2], compressed_inst_i[11], 
                                          compressed_inst_i[5:3],
                                          compressed_inst_i[12], // 11
                                          {8{compressed_inst_i[12]}}, //19:12
                                          5'h01, 7'b1101111};
                    end
                    3'b010: begin  // C.LI  pass
                        // addi rd, x0, imm
                        expanded_inst_o = {{7{compressed_inst_i[12]}}, 
                                          compressed_inst_i[6:2], 
                                          5'b0, 3'b000, 
                                          compressed_inst_i[11:7], 7'b0010011};
                    end
                    3'b011: begin  // C.LUI / C.ADDI16SP
                        if (compressed_inst_i[11:7] == 5'b00010) begin
                            // C.ADDI16SP: addi x2, x2, nzimm
                            expanded_inst_o = {{3{compressed_inst_i[12]}}, 
                                              compressed_inst_i[4:3], compressed_inst_i[5], 
                                              compressed_inst_i[2], compressed_inst_i[6], 
                                              4'b0, 5'h02, 3'b000, 5'h02, 7'b0010011};
                        end else begin
                            // C.LUI: lui rd, nzimm
                            expanded_inst_o = {{15{compressed_inst_i[12]}}, 
                                              compressed_inst_i[6:2], 
                                              compressed_inst_i[11:7], 7'b0110111};
                        end
                    end
                    /* verilator lint_off CASEINCOMPLETE */
                    3'b100: begin  // C.算术指令
                        case (compressed_inst_i[11:10])
                            2'b00: begin  // C.SRLI / C.SRAI
                                if (compressed_inst_i[12] == 0) begin
                                    // C.SRLI: srli rd', rd', shamt
                                    expanded_inst_o = {7'b0, compressed_inst_i[6:2], 
                                                      {2'b01, compressed_inst_i[9:7]}, 
                                                      3'b101, {2'b01, compressed_inst_i[9:7]}, 
                                                      7'b0010011};
                                    expanded_inst_o[31:26] = 6'b000000;  // srli
                                end else begin
                                    // C.SRAI: srai rd', rd', shamt
                                    expanded_inst_o = {7'b0, compressed_inst_i[6:2], 
                                                      {2'b01, compressed_inst_i[9:7]}, 
                                                      3'b101, {2'b01, compressed_inst_i[9:7]}, 
                                                      7'b0010011};
                                    expanded_inst_o[31:26] = 6'b010000;  // srai的特殊编码
                                end
                            end
                            2'b01: begin  // C.ANDI
                                // andi rd', rd', imm
                                expanded_inst_o = {{7{compressed_inst_i[12]}}, 
                                                  compressed_inst_i[6:2], 
                                                  {2'b01, compressed_inst_i[9:7]}, 
                                                  3'b111, {2'b01, compressed_inst_i[9:7]}, 
                                                  7'b0010011};
                            end
                            2'b10: begin  // C.SUB, C.XOR, C.OR, C.AND
                                case (compressed_inst_i[6:5])
                                    2'b00: begin  // C.SUB
                                        // sub rd', rd', rs2'
                                        expanded_inst_o = {7'b0, {2'b01, compressed_inst_i[4:2]}, 
                                                          {2'b01, compressed_inst_i[9:7]}, 
                                                          3'b000, {2'b01, compressed_inst_i[9:7]}, 
                                                          7'b0110011};
                                        expanded_inst_o[31:26] = 6'b010000;
                                    end
                                    2'b01: begin  // C.XOR
                                        // xor rd', rd', rs2'
                                        expanded_inst_o = {7'b0, {2'b01, compressed_inst_i[4:2]}, 
                                                          {2'b01, compressed_inst_i[9:7]}, 
                                                          3'b100, {2'b01, compressed_inst_i[9:7]}, 
                                                          7'b0110011};
                                    end
                                    2'b10: begin  // C.OR
                                        // or rd', rd', rs2'
                                        expanded_inst_o = {7'b0, {2'b01, compressed_inst_i[4:2]}, 
                                                          {2'b01, compressed_inst_i[9:7]}, 
                                                          3'b110, {2'b01, compressed_inst_i[9:7]}, 
                                                          7'b0110011};
                                    end
                                    2'b11: begin  // C.AND
                                        // and rd', rd', rs2'
                                        expanded_inst_o = {7'b0, {2'b01, compressed_inst_i[4:2]}, 
                                                          {2'b01, compressed_inst_i[9:7]}, 
                                                          3'b111, {2'b01, compressed_inst_i[9:7]}, 
                                                          7'b0110011};
                                    end
                                endcase
                            end
                        endcase
                    end
                    3'b101: begin  // C.J
                        // jal x0, offset pass 
                        expanded_inst_o = {compressed_inst_i[12], 
                                          compressed_inst_i[8], compressed_inst_i[10:9], 
                                          compressed_inst_i[6], compressed_inst_i[7], 
                                          compressed_inst_i[2], compressed_inst_i[11], 
                                          compressed_inst_i[5:3],
                                          {9{compressed_inst_i[12]}},  // 8位符号扩展（不是9位！）
                                          5'h00, 7'b1101111};
                    end
                    3'b110: begin  // C.BEQZ pass
                        // c.beqz rs1', offset
                        // 32-bit: beq rs1', x0, offset      
                        expanded_inst_o = {
                            // imm[12] (1位) - bit 31
                            compressed_inst_i[12],
                            // imm[10:5] (6位) - bits 30:25
                            compressed_inst_i[12], compressed_inst_i[12],compressed_inst_i[12],
                            compressed_inst_i[6:5], compressed_inst_i[2],
                            // rs2 (5位) = x0 - bits 24:20
                            5'b00000,
                            // rs1 (5位) = {2'b01, inst[9:7]} - bits 19:15
                            {2'b01, compressed_inst_i[9:7]},
                            // funct3 (3位) = 000 (beq) - bits 14:12
                            3'b000,
                            // imm[4:1] (4位) 
                           compressed_inst_i[10],compressed_inst_i[9], compressed_inst_i[4:3],
                            // imm[11] (1位)
                            compressed_inst_i[12],
                            // opcode (7位) = 1100011 - bits 6:0
                            7'b1100011
                        };
                    end
                    3'b111: begin  // C.BNEZ
                        // c.bnez rs1', offset
                        expanded_inst_o = {
                            // imm[12] (1位)
                            compressed_inst_i[12],
                            // imm[10:5] (6位)
                            compressed_inst_i[6], compressed_inst_i[5], compressed_inst_i[2],
                            compressed_inst_i[11], compressed_inst_i[10], compressed_inst_i[4],
                            // rs2 (5位) = x0
                            5'b00000,
                            // rs1 (5位) = {2'b01, inst[9:7]}
                            {2'b01, compressed_inst_i[9:7]},
                            // funct3 (3位) = 001 (bne)
                            3'b001,
                            // imm[4:1] (4位)
                            compressed_inst_i[3], compressed_inst_i[9], compressed_inst_i[8], compressed_inst_i[7],
                            // imm[11] (1位) = inst[6]
                            compressed_inst_i[6],
                            // opcode (7位) = 1100011
                            7'b1100011
                        };
                    end
                endcase
            end
            
            2'b10: begin
                // C2格式：SLLI, LWSP, SWSP, JALR, ADD, MV, BREAK等
                case (funct3)
                    3'b000: begin  // C.SLLI
                        // slli rd, rd, shamt
                        expanded_inst_o = {7'b0, compressed_inst_i[6:2], 
                                          compressed_inst_i[11:7], 3'b001, 
                                          compressed_inst_i[11:7], 7'b0010011};
                    end
                    3'b010: begin  // C.LWSP pass
                        // lw rd, offset(x2)
                        expanded_inst_o = {4'b0, compressed_inst_i[3:2], 
                                          compressed_inst_i[12], compressed_inst_i[6:4], 
                                          2'b00, 5'h02, 3'b010, 
                                          compressed_inst_i[11:7], 7'b0000011};
                    end
                    3'b100: begin  // C.JR, C.MV, C.EBREAK, C.JALR, C.ADD
                        // 根据RISC-V规范：
                        // C.JR: funct3=100, inst[12]=0, inst[6:2]=0, rd!=0
                        // C.MV: funct3=100, inst[12]=0, inst[6:2]!=0
                        // C.EBREAK: funct3=100, inst[12]=1, inst[6:2]=0, rd=0
                        // C.JALR: funct3=100, inst[12]=1, inst[6:2]=0, rd!=0
                        // C.ADD: funct3=100, inst[12]=1, inst[6:2]!=0
                        
                        if (compressed_inst_i[12] == 1'b0) begin
                            // inst[12]=0
                            if (compressed_inst_i[6:2] == 5'b00000) begin
                                // C.JR: jalr x0, rs1, 0  pass
                                expanded_inst_o = {12'b0, compressed_inst_i[11:7], 
                                                  3'b000, 5'b0, 7'b1100111};
                            end else begin
                                // C.MV: add rd, x0, rs2  pass
                                expanded_inst_o = {7'b0, compressed_inst_i[6:2], 
                                                  5'b0, 3'b000, compressed_inst_i[11:7], 
                                                  7'b0110011};
                            end
                        end else begin
                            // inst[12]=1
                            if (compressed_inst_i[6:2] == 5'b00000) begin
                                if (compressed_inst_i[11:7] == 5'b00000) begin
                                    // C.EBREAK: ebreak pass
                                    expanded_inst_o = 32'h00100073;
                                end else begin
                                    // C.JALR: jalr x1, rs1, 0
                                    expanded_inst_o = {12'b0, compressed_inst_i[11:7], 
                                                      3'b000, 5'h01, 7'b1100111};
                                end
                            end else begin
                                // C.ADD: add rd, rd, rs2
                                expanded_inst_o = {7'b0, compressed_inst_i[6:2], 
                                                  compressed_inst_i[11:7], 3'b000, 
                                                  compressed_inst_i[11:7], 7'b0110011};
                            end
                        end
                    end
                    3'b110: begin  // C.SWSP pass
                            expanded_inst_o = {
                            // imm[11:5] = 4'b0000 + offset[7:6] + offset[5]
                            4'b0000, compressed_inst_i[8:7], compressed_inst_i[12],
                            compressed_inst_i[6:2],  // rs2
                            5'b00010,       // rs1=x2(sp)
                            3'b010,         // funct3=010
                            //offset[4 3 2] + 2'b00
                            compressed_inst_i[11], compressed_inst_i[10], compressed_inst_i[9],2'b00,
                            7'b0100011      // opcode
                        };
                    end
                    default: begin
                        expanded_inst_o = 32'h00000013;  // NOP
                    end
                endcase
            end
            
            default: begin
                // 不是压缩指令（opcode为2'b11）或其他情况
                expanded_inst_o = compressed_inst_i;  // NOP
            end
        endcase
    end




endmodule