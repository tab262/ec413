`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   17:24:22 11/21/2013
// Design Name:   ID_Controller
// Module Name:   C:/Users/Casey/Desktop/ec413/project/project1.0/test_ID_Controller.v
// Project Name:  project
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ID_Controller
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test_ID_Controller;

	// Inputs
	reg [31:0] instructions;

	// Outputs
	wire [31:0] controls;

	// Instantiate the Unit Under Test (UUT)
	ID_Controller uut (
		.instructions(instructions), 
		.controls(controls)
	);

	initial begin
		// Initialize Inputs
		instruction=	32'b110010_01101_00001_1111_1111_1111_1111;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

