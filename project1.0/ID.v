`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:42:20 11/14/2013 
// Design Name: 
// Module Name:    ID 
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
module ID(writeData,readData1,readData2,writeSelect,writeEnable,Reset,Clk,instructions,IF_ID_PC,ID_PC,controls,locations,PCSource,SE_Imm,readSelect1,readSelect2);

	parameter REG_SELECT_WIDTH = 5;
	// Register size in bits.
	parameter DATA_WIDTH = 32;

	//-------------Input Ports-----------------------------
	input [DATA_WIDTH-1:0]       writeData,instructions;
	input[4:0] readSelect1,readSelect2;
	input [REG_SELECT_WIDTH-1:0] writeSelect;
	input	[31:0] IF_ID_PC;
	input writeEnable;
	input Reset;
	input Clk;
	//-------------Output Ports----------------------------
	output [DATA_WIDTH-1:0] readData1;
	output [DATA_WIDTH-1:0] readData2;
	output [31:0] ID_PC;
	output [31:0] controls;
	output [25:0] locations;
	output [31:0] SE_Imm;
	output PCSource;

	
	
	
	//Register File
	/*
module nbit_register_file(WriteData,   // Input data
                          ReadData1,   // Output data 1
                          ReadData2,   // Output data 2
                          ReadSelect1, // Select lines for output 1
                          ReadSelect2, // Select lines for output 2
                          WriteSelect, // Select lines for input
                          WriteEnable, // Causes write to take place on posedge
                          Reset,       // Synchronous reset
                          Clk);        // Clock
	*/
	nbit_register_file REG_FILE (writeData,readData1,readData2,readSelect1,
											readSelect2,writeSelect,writeEnable,Reset,Clk);
	
	//Controller
	ID_Controller CONTROL(instructions,controls);
	
	
	//to determine whether we branch or not we have four scenarios
	//1. Not a branch or jump instruction --> output PCSource = 0 ID_PC = DC
	//2. Jump instruction --> PCSource = 1, ID_PC = J_ID_PC
	//3. Branch instruction and Branch = 1 --> PCSource = 1, ID_PC = Branch_ID_PC
	//4. Branch instruction and Branch = 0 --> PCSource = 0, ID_PC = DC
	//So we need J_ID_PC,Branch_ID_PC,Branch, instructions[31:26],selectPCcontrol
	//selectJorBranch JBMUX(J_ID_PC,Branch_ID_PC,Branch,selectPCcontrol,ID_PC, PCSource);
	/*
	input[31:0] instructions,Rs,Rt,
	input signed [31:0] PCplusOne,
	input signed [31:0] SE_Imm,
	//outputs
	output signed [31:0] ID_PC,
	output PCSource
    );
	*/
	wire [31:0] SE_Imm;
	sign_extender SE (instructions[15:0], SE_Imm);
	JumpAndBranchLogic JABL(instructions,readData1,readData2,IF_ID_PC,SE_Imm,ID_PC,PCSource);
	
	
	//data pushing
	//output to ID/EX Regs for use in determining Rs,Rt,Rd and Immediate
	assign locations = instructions[25:0];
	
	
endmodule
