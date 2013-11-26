`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   23:06:58 11/22/2013
// Design Name:   readSelect_SELECTOR
// Module Name:   C:/Users/Casey/Desktop/ec413/project/project1.0/test_readSelect_SELECTOR.v
// Project Name:  project
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: readSelect_SELECTOR
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test_readSelect_SELECTOR;

	// Inputs
	reg [31:0] instructions;

	// Outputs
	wire [4:0] readSelect1;
	wire [4:0] readSelect2;

	// Instantiate the Unit Under Test (UUT)
	readSelect_SELECTOR uut (
		.instructions(instructions), 
		.readSelect1(readSelect1), 
		.readSelect2(readSelect2)
	);


	initial begin
		// Initialize Inputs
		//Rtype
		instructions = 32'b010010_00011_00000_00001_00000000000;
		#10;
		//Branch
		instructions = 32'b100000_00001_00010_00011_00000000000;
      #10;
		//I-type ALU
		instructions = 32'b110011_00001_00010_00011_00000000000;
		#10;
		//I-type MEM
		instructions = 32'b111010_00001_00010_00011_00000000000;		
		// Add stimulus here

	end
      
endmodule
