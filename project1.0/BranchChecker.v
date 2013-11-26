`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:08:28 11/17/2013 
// Design Name: 
// Module Name:    BranchChecker 
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
module BranchChecker(
	input[1:0] opcode,
	input [31:0] Rd1,Rd2,
	output branch
    );
	 
	 
	 function f_branch;
		input [1:0] opcode;
		input[31:0] Rd1,Rd2;
		
		begin
			if(opcode == 2'b00 && Rd1 == Rd2) begin
				f_branch = 1;
			end else if (opcode == 2'b01 && Rd1 != Rd2) begin
				f_branch = 1;
			end else if (opcode == 2'b10 && Rd1 < Rd2) begin
				f_branch = 1;
			end else if (opcode == 2'b11 && Rd1 <= Rd2) begin
				f_branch = 1;
			end else begin
				f_branch = 0;
			end
		end
	endfunction
	
	assign branch = f_branch(opcode, Rd1,Rd2);
			


endmodule
