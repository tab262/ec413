`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   10:43:02 11/12/2013
// Design Name:   Basic_SRAM
// Module Name:   C:/Users/Casey/Desktop/ec413/project/project1.0/test_Basic_SRAM.v
// Project Name:  project
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Basic_SRAM
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test_Basic_SRAM;

	// Inputs
	reg [15:0] address;
	reg [31:0] inputData;
	reg Clk;
	reg writeEnable;

	// Outputs
	wire [31:0] outputData;

	// Instantiate the Unit Under Test (UUT)
	Basic_SRAM uut (
		.address(address), 
		.inputData(inputData), 
		.outputData(outputData), 
		.Clk(Clk), 
		.writeEnable(writeEnable)
	);
	always begin
		#10 Clk = ~Clk;
	end

	initial begin
		// Initialize Inputs
		address = 1;
		inputData = 0;
		Clk = 0;
		writeEnable = 0;

		// Wait 100 ns for global reset to finish
		#100;
      inputData = 32'b010010_00000_00001_00000_0000000000;
		writeEnable = 1;
		#12;
		writeEnable = 0;
		inputData = 0;
		
		// Add stimulus here

	end
      
endmodule

