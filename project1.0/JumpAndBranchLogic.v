`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:30:16 11/17/2013 
// Design Name: 
// Module Name:    JumpAndBranchLogic 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module JumpAndBranchLogic(
	input[31:0] instructions,Rs,Rt,
	input signed [31:0] PCplusOne,
	input signed [31:0] SE_Imm,
	//outputs
	output signed [31:0] ID_PC,
	output PCSource
    );
	
	
	

	//selecting PCSource
	function f_PCSource;
		input[31:0]Rs;
		input[31:0]Rt;
		input[5:0] opcode;
		begin
			if(opcode == 6'b000001) begin
				f_PCSource = 1'b1;
			end else if(opcode[5:2] == 4'b1000) begin
				if(opcode[1:0] == 2'b00 && Rs == Rt) begin //BEQ
					f_PCSource = 1'b1;
				end else if(opcode[1:0] == 2'b01 && Rs != Rt) begin //BNE
					f_PCSource = 1'b1;
				end else if(opcode[1:0] == 2'b10 && Rs < Rt) begin //BLT
					f_PCSource = 1'b1;
				end else if(opcode[1:0] == 2'b11 && Rs <= Rt) begin //BLE
					f_PCSource = 1'b1;
				end
			end else begin
				f_PCSource = 1'b0;
			end
		end
	endfunction

	assign PCSource= f_PCSource(Rs,Rt,instructions[31:26]);
	

	
	//Calculating the branch address
	function   signed [31:0]f_ID_PC;
		input[31:0] instructions;
		input signed [31:0]  PCplusOne;
		input signed [31:0]  SE_Imm;
		
		begin 
			if(instructions[31:26] == 6'b000001) begin
				f_ID_PC = {PCplusOne[31:26], instructions[25:0]};
			end else if(instructions[31:28] == 4'b1000) begin
				if(instructions[27:26] == 2'b00 && Rs == Rt) begin //BEQ
					f_ID_PC = $signed(PCplusOne) + $signed(SE_Imm);
				end else if(instructions[27:26] == 2'b01 && Rs != Rt) begin //BNE
					f_ID_PC = $signed(PCplusOne) + $signed(SE_Imm);
					//f_ID_PC = PCplusOne + SE_Imm;
				end else if(instructions[27:26] == 2'b10 && Rs < Rt) begin //BLT
					f_ID_PC = $signed(PCplusOne) + $signed(SE_Imm);
					//f_ID_PC = PCplusOne + SE_Imm;
				end else if(instructions[27:26] == 2'b11 && Rs <= Rt) begin //BLE
					f_ID_PC = $signed(PCplusOne) + $signed(SE_Imm);
					//f_ID_PC = PCplusOne + SE_Imm;
				end
			end else begin
				f_ID_PC = 0; //don't care
			end
		end
	endfunction

	assign ID_PC = f_ID_PC(instructions,PCplusOne,SE_Imm);

endmodule
