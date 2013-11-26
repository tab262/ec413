`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:57:24 11/21/2013 
// Design Name: 
// Module Name:    ALU 
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
module ALU(
	input[31:0] A,B,
	input [3:0]ALUOp,
	output [31:0] C
    );
	 
	 //R-TYPE
	 //MOV - 0000
	 //NOT - 0001
	 //ADD - 0010
	 //SUB - 0011
	 //OR  - 0100
	 //AND - 0101
	 //XOR - 0110
	 //SLT - 0111
	 
	 //I-TYPE
	 //ADDI - 0010
	 //SUBI - 0011
	 //ORI  - 0100
	 //ANDI - 0101
	 //XORI - 0110
	 //SLTI - 0111
	 
	 function[31:0] f_ALU;
	 input[31:0] A,B;
	 input[3:0] ALUOp;
		begin
			if(ALUOp[3] == 1'b0) begin
				if(ALUOp == 4'b0000) begin
					//MOV
					f_ALU = A;
				end else if(ALUOp == 4'b0001) begin
					//NOT
					f_ALU = ~A;
				end else if(ALUOp == 4'b0010) begin
					//ADD
					f_ALU = A + B;
				end else if(ALUOp == 4'b0011) begin
					//SUB
					f_ALU = A - B;
				end else if(ALUOp == 4'b0100) begin
					//OR
					f_ALU = A | B;
				end else if(ALUOp == 4'b0101) begin
					//AND
					f_ALU = A & B;
				end else if(ALUOp == 4'b0110) begin
					//XOR
					f_ALU = A ^ B;
				end else if(ALUOp == 4'b0111) begin
					//SLT
					f_ALU = (($signed(A) < $signed(B))? 1:0);	
				end
			end else if(ALUOp[3] == 1'b1) begin
				if(ALUOp == 4'b1001) begin //LI
					f_ALU = {A[31:16],B[15:0]};
				end else if(ALUOp == 4'b1010) begin //LUI
					f_ALU = {B[15:0],A[15:0]};
				end else if(ALUOp == 4'b1011) begin //LWI
					f_ALU = B;
				end else begin //SWI
					f_ALU = A;
				end
			end 
	 
		end
	 endfunction
	
	assign C = f_ALU(A,B,ALUOp);

endmodule
