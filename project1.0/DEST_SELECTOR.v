`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:15:53 11/22/2013 
// Design Name: 
// Module Name:    DEST_SELECTOR 
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
module DEST_SELECTOR(
	input[5:0] A,B,
	input control,
	output[5:0] out
    );
	 
	 function [5:0] f_out;
		input[5:0] A,B;
		input control;
		begin
			if(control == 0) begin
				f_out = A;
			end else begin
				f_out = A;
			end
		end
	endfunction


	assign out = f_out(A,B,control);

endmodule
