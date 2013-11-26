`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:03:04 11/14/2013 
// Design Name: 
// Module Name:    ID_EX 
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
module ID_EX(
	
	//inputs//
	input writeEnable, Reset, Clk,
	input [31:0] readData1, readData2,
	input[25:0] locations,
   input[31:0] controls,

	output [31:0] outData1,outData2,
	output [25:0] outLocations,
	output [31:0] outControls
	 );


	//nbit_reg	#(32)	PC (PCInput,PCtoInsMem,PCWrite,Reset,Clk);

	//data1
	nbit_reg	#(32) 	(readData1,outData1,writeEnable,Reset,Clk);
	
	//data2
	nbit_reg	#(32) 	(readData2,outData2,writeEnable,Reset,Clk);
	
	//controls
	nbit_reg	#(32) 	(controls,outControls,writeEnable,Reset,Clk);
	
	//locations -- Get immediate from here as well
	nbit_reg	#(25) 	(locations,outLocations,writeEnable,Reset,Clk);
	

endmodule
