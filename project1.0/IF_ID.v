`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:12:09 11/14/2013 
// Design Name: 
// Module Name:    IF_ID 
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
module IF_ID(
	input Clk, Reset, writeEnable,
	input [31:0] pcPlusOneIn,
	input [31:0] instructionsIn,
	output [31:0] pcPlusOneOut,
	output [31:0] instructionsOut
    );
	 
	 nbit_reg	#(32) INSREG (instructionsIn,instructionsOut, writeEnable, Reset,Clk);
	 
	 nbit_reg 	#(32) PCREG (pcPlusOneIn,pcPlusOneOut,writeEnable,Reset,Clk);
	 


endmodule
