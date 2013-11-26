`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:44:40 11/14/2013 
// Design Name: 
// Module Name:    JConcat 
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
module JConcat(
	input[2:0] PC,
	input [12:0] LImm,
	output [15:0] J_IP_PC);
	 
	assign J_IP_PC = {PC, LImm};


endmodule
