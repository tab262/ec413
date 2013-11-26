`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:12:47 11/12/2013 
// Design Name: 
// Module Name:    IF 
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
module IF(
	//inputs//
	input PCWrite, //from ID stage
	input Reset,Clk,
	input PCSource, //from ID stage
	input signed [31:0]ID_PC, //from ID stage
	
	//outputs//
	output signed [31:0] PCtoID,
	output [31:0] instructions,
	output signed [31:0] PCtoInsMem
    );

	/////WIRES/////
	
	
	//Program Counter. A single 32bit dff

	//Next PCInput, PC we pass to IMem, Whether we write to PC or not, Reset, Clk
	//wire[31:0] PCtoInsMem;
	wire	[31:0]	PCInput;
	
	nbit_reg	#(32)	PC (PCInput,PCtoInsMem,PCWrite,Reset,Clk);

	
	
	//IMem PC, instruction output
	IMem	IM(PCtoInsMem, instructions);
	

	//address, inputData,outputData,Clk, WriteEnable
	//Basic_SRAM	INSTRUCT_MEM (actualInstruction, instructionMemoryInput, instructions, Clk, instructionWriteEnable);
	
	//Increment to PC+1. Pass result to ID and to PCSourceMUX
	assign PCtoID = $signed(PCtoInsMem) + 1'b1; 
	
	//if PCSource == 1, then we take the ID_PC, else we take PC+1(PCtoID)
	//currentPC+1,ID_PC,ID_HazardControl,newPC)
	
	
	pcSourceMUX		PCMUX	(PCtoID, ID_PC, PCSource, PCInput);  
	
	
	
	
	
	
	
	
	
	
	
	//wire [15:0] actualInstruction;
	//myMUX	#(16) INS_ADDR_SRC (instructionWriteEnable, PCtoInsMem,instructionWriteAddress, actualInstruction);
	
	
	//not using these as we manually enter the instructions in the IMem file
	//input [31:0] instructionMemoryInput, //used for directly writing instructions to instruction memory
	//input instructionWriteEnable, 				//used only when we want to load the original set of instructions.
	//input [15:0] instructionWriteAddress,
	

endmodule
