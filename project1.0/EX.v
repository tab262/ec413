`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:54:53 11/14/2013 
// Design Name: 
// Module Name:    EX 
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
module EX(
	input [31:0] data1,data2,controls,
	input [25:0] locations,
	
	output[31:0] ALUOut,
	output[31:0] ImmMemAddress,
	output[31:0] MUXA_OUT,
	output[4:0] EX_DEST
);

	//select destination
	assign EX_DEST = locations[25:21];
	
	//SE Immediate
	wire[31:0] SE_Imm;
	sign_extender SE (locations[15:0], SE_Imm);
	

	//MUXA 
	wire[31:0] MUXA_OUT;
	//rd1,
	EX_MUX	MUXA	(data1,0,0,0,0,controls[27:25],MUXA_OUT);
	
	//MUXB
	//rd1,SE_Imm,ZE_imm
	//wire[31:0] MUXB_OUTl;
	//We always forward a the ZE_Imm as a potential memory address for Immediate loads and saves. We use this
	//same MUX output for both the ALU input and the memory address output
	EX_MUX	MUXB	(data2,{0,locations[15:0]},SE_Imm,0,0,controls[24:22],ImmMemAddress);
	
	
	/*
	module ALU(
	input[31:0] A,B,
	input [3:0]ALUOp,
	output [31:0] C
    );
	*/

	ALU	EX_ALU(MUXA_OUT,ImmMemAddress,controls[31:28], ALUOut);
	
	
	

endmodule
