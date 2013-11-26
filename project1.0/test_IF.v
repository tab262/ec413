`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   14:31:08 11/17/2013
// Design Name:   IF
// Module Name:   C:/Users/Casey/Desktop/ec413/project/project1.0/test_IF.v
// Project Name:  project
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: IF
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test_IF;

	// Inputs
	reg PCWrite;
	reg Reset;
	reg Clk;
	reg PCSource;
	reg [31:0] ID_PC;

	// Outputs
	wire [31:0] PCtoID;
	wire [31:0] instructions;
	wire [31:0] PCtoInsMem;

	// Instantiate the Unit Under Test (UUT)
	IF uut (
		.PCWrite(PCWrite), 
		.Reset(Reset), 
		.Clk(Clk), 
		.PCSource(PCSource), 
		.ID_PC(ID_PC), 
		.PCtoID(PCtoID), 
		.instructions(instructions), 
		.PCtoInsMem(PCtoInsMem)
	);
	always begin
		#5 Clk = ~Clk;
	end
	
	initial begin
		// Initialize Inputs
		PCWrite = 0;
		Reset = 1;
		Clk = 0;
		PCSource = 0;
		ID_PC = 3;

		// Wait 100 ns for global reset to finish
		#10;
		Reset = 0;
		#10;
		PCWrite = 1;
		#40;
		PCSource = 1;
        
		// Add stimulus here

	end
      
endmodule

