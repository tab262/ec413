`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:47:50 11/14/2013 
// Design Name: 
// Module Name:    BranchCalc 
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
module BranchCalc(
	input [31:0] PC,
	input [31:0] BImm,
	output Branch_ID_PC
    );
	 
	 assign Branch_ID_PC = PC + BImm;


endmodule
