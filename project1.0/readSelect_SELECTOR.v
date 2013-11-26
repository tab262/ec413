`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:36:54 11/22/2013 
// Design Name: 
// Module Name:    readSelect_SELECTOR 
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
module readSelect_SELECTOR(
	input[31:0] instructions,
	output[4:0] readSelect1, readSelect2
    );

	function[4:0] f_RS1;
		input[31:0] instructions;
		begin
			if(instructions[31:29] == 3'b010 || instructions[31:29] == 3'b110) begin
				f_RS1 = instructions[20:16];
			end else begin
				f_RS1 = instructions[25:21];
			end
		end
	endfunction

	function[4:0] f_RS2;
		input[31:0] instructions;
		begin
			if(instructions[31:29] == 3'b010) begin
				f_RS2 = instructions[15:11];
			end else begin
				f_RS2 = instructions[20:16];
			end
		end
	endfunction
	
	assign readSelect1 = f_RS1(instructions);
	assign readSelect2 = f_RS2(instructions);

endmodule
