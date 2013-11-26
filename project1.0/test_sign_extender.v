`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:17:19 11/14/2013
// Design Name:   sign_extender
// Module Name:   C:/Users/Casey/Desktop/ec413/project/project1.0/test_sign_extender.v
// Project Name:  project
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: sign_extender
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test_sign_extender;

	// Inputs
	reg [15:0] numberIn;

	// Outputs
	wire [31:0] numberOut;

	// Instantiate the Unit Under Test (UUT)
	sign_extender uut (
		.numberIn(numberIn), 
		.numberOut(numberOut)
	);

	initial begin
		// Initialize Inputs
		numberIn = 16'b0000_0000_0000_0000;

		// Wait 100 ns for global reset to finish
		#10;
		numberIn = 16'b1000_0000_0000_0000;
      #10;
		numberIn = 16'b0000_0000_0000_0001;		
		// Add stimulus here

	end
      
endmodule

