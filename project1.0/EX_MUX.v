`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:45:28 11/21/2013 
// Design Name: 
// Module Name:    EX_MUX 
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
module EX_MUX(
	input[31:0] i0,i1,i2,i3,i4,
	input [2:0] control,
	output[31:0] out
    );
	 
	 function [31:0] f_out;
		input [31:0] i0,i1,i2,i3,i4;
		input[2:0] control;
		begin
		
			if(control == 3'b000) begin
				f_out = i0;	
			end else if(control == 3'b001) begin
				f_out = i1;
			end else if(control == 3'b010) begin
				f_out = i2;
			end else if(control == 3'b011) begin
				f_out = i3;
			end else begin
				f_out = i4;
			end
		end
	endfunction
	
	assign out = f_out(i0,i1,i2,i3,i4,control);


endmodule
