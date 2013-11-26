`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:06:36 11/22/2013
// Design Name:   MEM
// Module Name:   C:/Users/Casey/Desktop/ec413/project/project1.0/test_MEM.v
// Project Name:  project
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: MEM
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test_MEM;

	// Inputs
	reg Clk;
	reg [31:0] ALUOut;
	reg [31:0] MemoryWriteData;
	reg [31:0] Controls;

	// Outputs
	wire [31:0] out_MemoryData;

	// Instantiate the Unit Under Test (UUT)
	MEM uut (
		.Clk(Clk), 
		.ALUOut(ALUOut), 
		.MemoryWriteData(MemoryWriteData), 
		.Controls(Controls), 
		.out_MemoryData(out_MemoryData)
	);
	always begin
		#5 Clk = ~Clk;
	end
	
	initial begin
		// Initialize Inputs
		Clk = 0;
		ALUOut = 1;
		MemoryWriteData = 10;
		Controls = 32'b1111_1111_1111_1111_1111_1111_1111_1111;

		// Wait 100 ns for global reset to finish
		#15;
		Controls = 0;
		ALUOut = 0;
        
		// Add stimulus here

	end
      
endmodule

