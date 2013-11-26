`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:05:10 11/17/2013 
// Design Name: 
// Module Name:    IF_ID_PCplusOne 
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
module IF_ID_PCplusOne(
	input Clk,Reset,writeEnable,
	input[31:0] PCplusOne,
	output[31:0]PCplusOneOut
    );
	 
	 nbit_reg	#(32) PR	(PCplusOne,PCplusOneOut,writeEnable,Reset,Clk);


endmodule
