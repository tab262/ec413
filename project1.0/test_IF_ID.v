`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:17:45 11/14/2013
// Design Name:   IF_ID
// Module Name:   C:/Users/Casey/Desktop/ec413/project/project1.0/test_IF_ID.v
// Project Name:  project
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: IF_ID
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test_IF_ID;

	// Inputs
	reg Clk;
	reg Reset;
	reg writeEnable;
	reg [31:0] pcPlusOneIn;
	reg [31:0] instructionsIn;

	// Outputs
	wire [31:0] pcPlusOneOut;
	wire [31:0] instructionsOut;

	// Instantiate the Unit Under Test (UUT)
	IF_ID uut (
		.Clk(Clk), 
		.Reset(Reset), 
		.writeEnable(writeEnable), 
		.pcPlusOneIn(pcPlusOneIn), 
		.instructionsIn(instructionsIn), 
		.pcPlusOneOut(pcPlusOneOut), 
		.instructionsOut(instructionsOut)
	);
	always begin
		#5 Clk = ~Clk;
	end
	initial begin
		// Initialize Inputs
		Clk = 0;
		Reset = 1;
		writeEnable = 1;
		pcPlusOneIn = 2;
		instructionsIn = 32'b010001_00111_00001_00000_00000000000;

		// Wait 100 ns for global reset to finish
		#10;
		Reset = 0;
      #20;
		pcPlusOneIn = 10;
		instructionsIn = 32'b011010_00010_00010_1111111111111000;
		// Add stimulus here

	end
      
endmodule

