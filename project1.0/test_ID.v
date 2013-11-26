`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   23:38:43 11/22/2013
// Design Name:   ID
// Module Name:   C:/Users/Casey/Desktop/ec413/project/project1.0/test_ID.v
// Project Name:  project
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ID
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test_ID;

	// Inputs
	reg [31:0] writeData;
	reg [4:0] writeSelect;
	reg writeEnable;
	reg Reset;
	reg Clk;
	reg [31:0] instructions;
	reg [31:0] IF_ID_PC;
	reg [4:0] readSelect1;
	reg [4:0] readSelect2;

	// Outputs
	wire [31:0] readData1;
	wire [31:0] readData2;
	wire [31:0] ID_PC;
	wire [31:0] controls;
	wire [25:0] locations;
	wire PCSource;
	wire [31:0] SE_Imm;

	// Instantiate the Unit Under Test (UUT)
	ID uut (
		.writeData(writeData), 
		.readData1(readData1), 
		.readData2(readData2), 
		.writeSelect(writeSelect), 
		.writeEnable(writeEnable), 
		.Reset(Reset), 
		.Clk(Clk), 
		.instructions(instructions), 
		.IF_ID_PC(IF_ID_PC), 
		.ID_PC(ID_PC), 
		.controls(controls), 
		.locations(locations), 
		.PCSource(PCSource), 
		.SE_Imm(SE_Imm), 
		.readSelect1(readSelect1), 
		.readSelect2(readSelect2)
	);
	always begin
		#5 Clk = ~Clk;
	end
	initial begin
		// Initialize Inputs
		writeData = 1;
		writeSelect = 1;
		writeEnable = 1;
		Reset = 1;
		Clk = 1;
		instructions = 0;
		IF_ID_PC = 0;
		readSelect1 = 5'b00001;
		readSelect2 = 5'b00010;


		#20;
		Reset = 0;
		// Wait 100 ns for global reset to finish
		#100;
		instructions = 32'b100001_00000_00001_0000_0000_0001_0000;
      #20;  
		instructions = 32'b100100_00000_00001_1111_1111_1111_1011;
        


	end
      
endmodule
        


