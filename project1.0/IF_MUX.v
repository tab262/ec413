`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:17:56 11/12/2013 
// Design Name: 
// Module Name:    IF_MUX 
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
module IF_MUX(pcPlusOne, ID_PC, control, muxOut);
    input [15:0] pcPlusOne,ID_Pc;
	 input control;
	 output muxOut;
	 
	 wire select0;
	 not	(select0, control);
	 
	 
	 and	#16	(


endmodule
