`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:08:37 11/14/2013 
// Design Name: 
// Module Name:    pcSourceMUX 
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
module pcSourceMUX(currentPC, ID_PC, PCSource, newPC);

	input signed [31:0] currentPC, ID_PC;
	input PCSource;
	output [31:0] newPC;
	
	
	function	signed [31:0] f_newPC;
		input signed [31:0] currentPC, ID_PC;
		input PCSource;
		
		begin
			case(PCSource)
				0: f_newPC = currentPC;
				1: f_newPC = ID_PC;
			endcase
		end
	endfunction
	

	assign newPC = f_newPC(currentPC,ID_PC,PCSource);


endmodule
