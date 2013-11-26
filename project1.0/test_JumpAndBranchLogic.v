`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   14:14:46 11/17/2013
// Design Name:   JumpAndBranchLogic
// Module Name:   C:/Users/Casey/Desktop/ec413/project/project1.0/test_JumpAndBranchLogic.v
// Project Name:  project
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: JumpAndBranchLogic
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test_JumpAndBranchLogic;

	// Inputs
	reg [31:0] instructions;
	reg [31:0] Rs;
	reg [31:0] Rt;
	reg [31:0] PCplusOne;
	reg [31:0] SE_Imm;

	// Outputs
	wire [31:0] ID_PC;
	wire PCSource;

	// Instantiate the Unit Under Test (UUT)
	JumpAndBranchLogic uut (
		.instructions(instructions), 
		.Rs(Rs), 
		.Rt(Rt), 
		.PCplusOne(PCplusOne), 
		.SE_Imm(SE_Imm), 
		.ID_PC(ID_PC), 
		.PCSource(PCSource)
	);

	initial begin
		// Initialize Inputs
		// Initialize Inputs
		instructions = 32'b100000_00000_00000_00000_00000_100000;
		Rs = 15;
		Rt = 15;
		PCplusOne = 32'b000000_00000_00000_00000_00000_001110; 
		SE_Imm = -3;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

