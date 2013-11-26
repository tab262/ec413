`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:05:23 11/17/2013 
// Design Name: 
// Module Name:    IF_ID_Instructions 
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
module IF_ID_Instructions(
	input Clk,Reset,writeEnable,
	input[31:0] instructions,
	output[31:0] instructionsOut
    );
	 
	 nbit_reg #(32) IR(instructions,instructionsOut,writeEnable,Reset,Clk);


endmodule
