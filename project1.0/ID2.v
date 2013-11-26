`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    02:00:08 11/23/2013 
// Design Name: 
// Module Name:    ID2 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module ID2(
		input WriteData,   // Input data
      output[31:0] ReadData1,   // Output data 1
      output[31:0] ReadData2,   // Output data 2
      input[4:0] ReadSelect1, // Select lines for output 1
      input[4:0] ReadSelect2, // Select lines for output 2
      input WriteSelect, // Select lines for input
      input WriteEnable, // Causes write to take place on posedge
      input Reset,       // Synchronous reset
      input Clk
		
		//stuff besides RF
		
		);        
						
	 nbit_register_file	RF	(WriteData,ReadData1,ReadData2,ReadSelect1,ReadSelect2,WriteSelect,WriteEnable,Reset,Clk);
	 
	 //Controller
	// ID_Controller CONTROL(instructions,controls);


endmodule
