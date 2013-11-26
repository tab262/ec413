`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:11:07 11/21/2013
// Design Name:   EX_MUX
// Module Name:   C:/Users/Casey/Desktop/ec413/project/project1.0/test_EX_MUX.v
// Project Name:  project
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: EX_MUX
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test_EX_MUX;

	// Inputs
	reg [31:0] i0;
	reg [31:0] i1;
	reg [31:0] i2;
	reg [31:0] i3;
	reg [31:0] i4;
	reg [2:0] control;

	// Outputs
	wire [31:0] out;

	// Instantiate the Unit Under Test (UUT)
	EX_MUX uut (
		.i0(i0), 
		.i1(i1), 
		.i2(i2), 
		.i3(i3), 
		.i4(i4), 
		.control(control), 
		.out(out)
	);

	initial begin
		// Initialize Inputs
		i0 = 0;
		i1 = 1;
		i2 = 2;
		i3 = 3;
		i4 = 4;
		control = 0;

		// Wait 100 ns for global reset to finish
		#10;
		control  = 1;
      #10;
		control  = 2;
		#10;
		control  = 3;
		#10;
		control  = 4;
		#10;
		control  = 5;
		// Add stimulus here

	end
      
endmodule

