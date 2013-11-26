`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   13:17:48 11/21/2013
// Design Name:   ALU
// Module Name:   C:/Users/Casey/Desktop/ec413/project/project1.0/test_ALU.v
// Project Name:  project
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ALU
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test_ALU;

	// Inputs
	reg [31:0] A;
	reg [31:0] B;
	reg [3:0] ALUOp;

	// Outputs
	wire [31:0] C;

	// Instantiate the Unit Under Test (UUT)
	ALU uut (
		.A(A), 
		.B(B), 
		.ALUOp(ALUOp), 
		.C(C)
	);

	initial begin
		// Initialize Inputs
		A = 32'b1100_0000_0000_0000_0000_0000_0000_0101;
		B = 32'b0000_0000_0000_0000_0000_0000_0000_0100;
		ALUOp = 0;

		// Wait 100 ns for global reset to finish
		#10;
		ALUOp = 1;
      #10;
		ALUOp = 2;
		#10;
		ALUOp = 3;
		#10;
		ALUOp = 4;
		#10;
		ALUOp = 5;
		#10;
		ALUOp = 6;
		#10;
		ALUOp = 7;
		#10;
		ALUOp = 8;
		#10;
		ALUOp = 9;
		#10;
		ALUOp = 10;
		#10;
		ALUOp = 11;
		#10;
		ALUOp = 12;
		// Add stimulus here

	end
      
endmodule

