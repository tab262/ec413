`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   10:36:30 11/14/2013
// Design Name:   pcSourceMUX
// Module Name:   C:/Users/Casey/Desktop/ec413/project/project1.0/test_pcSourceMUX.v
// Project Name:  project
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: pcSourceMUX
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test_pcSourceMUX;

	// Inputs
	reg [15:0] currentPC;
	reg [15:0] ID_PC;
	reg ID_HazardControl;

	// Outputs
	wire [15:0] newPC;

	// Instantiate the Unit Under Test (UUT)
	pcSourceMUX uut (
		.currentPC(currentPC), 
		.ID_PC(ID_PC), 
		.ID_HazardControl(ID_HazardControl), 
		.newPC(newPC)
	);

	initial begin
		// Initialize Inputs
		currentPC = 1000;
		ID_PC = 1500;
		ID_HazardControl = 0;

		// Wait 100 ns for global reset to finish
		#10;
		ID_HazardControl = 1;
        
		// Add stimulus here

	end
      
endmodule

