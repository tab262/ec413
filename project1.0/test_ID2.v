`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   02:04:01 11/23/2013
// Design Name:   ID2
// Module Name:   C:/Users/Casey/Desktop/ec413/project/project1.0/test_ID2.v
// Project Name:  project
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ID2
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test_ID2;

	// Inputs
	reg WriteData;
	reg [4:0] ReadSelect1;
	reg [4:0] ReadSelect2;
	reg WriteSelect;
	reg WriteEnable;
	reg Reset;
	reg Clk;

	// Outputs
	wire [31:0] ReadData1;
	wire [31:0] ReadData2;

	// Instantiate the Unit Under Test (UUT)
	ID2 uut (
		.WriteData(WriteData), 
		.ReadData1(ReadData1), 
		.ReadData2(ReadData2), 
		.ReadSelect1(ReadSelect1), 
		.ReadSelect2(ReadSelect2), 
		.WriteSelect(WriteSelect), 
		.WriteEnable(WriteEnable), 
		.Reset(Reset), 
		.Clk(Clk)
	);
	always begin
		#5 Clk = ~Clk;
	end
	initial begin
		// Initialize Inputs
		WriteData = 0;
		ReadSelect1 = 1;
		ReadSelect2 = 0;
		WriteSelect = 0;
		WriteEnable = 0;
		Reset = 1;
		Clk = 0;

		// Wait 100 ns for global reset to finish
		#10;
		Reset = 0;
		
        
		// Add stimulus here

	end
      
endmodule

