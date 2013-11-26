`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   13:48:36 11/18/2013
// Design Name:   CPU2
// Module Name:   C:/Users/Casey/Desktop/ec413/project/project1.0/test_CPU2.v
// Project Name:  project
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: CPU2
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test_CPU2;

	// Inputs
	reg generalWrite;
	reg Reset;
	reg Clk;
	reg tempPCWrite;
	reg [31:0] tempWriteData;
	reg [5:0] tempWriteSelect;

	// Outputs
	wire PCSource;
	wire [31:0] readData1;
	wire [31:0] readData2;
	wire [31:0] controls;
	wire [31:0] IF_ID_INSTRUCTIONS;
	wire [31:0] IFinstructions;
	wire [25:0] locations;

	// Instantiate the Unit Under Test (UUT)
	CPU2 uut (
		.PCSource(PCSource),
		.IFinstructions(IFinstructions),
		.IF_ID_INSTRUCTIONS(IF_ID_INSTRUCTIONS),
		.generalWrite(generalWrite), 
		.Reset(Reset), 
		.Clk(Clk), 
		.tempPCWrite(tempPCWrite), 
		.tempWriteData(tempWriteData), 
		.tempWriteSelect(tempWriteSelect), 
		.readData1(readData1), 
		.readData2(readData2), 
		.controls(controls), 
		.locations(locations)
	);
	always begin
		#5 Clk = ~Clk;
	end
	
	initial begin
		// Initialize Inputs
		generalWrite = 1;
		Reset = 1;
		Clk = 0;
		tempPCWrite = 1;
		tempWriteData = 4;
		tempWriteSelect = 0;

		// Wait 100 ns for global reset to finish
		#10;
		Reset = 0;
        
		// Add stimulus here

	end
      
endmodule

