`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:24:47 11/12/2013 
// Design Name: 
// Module Name:    Basic_SRAM 
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
module Basic_SRAM(
	input[15:0] address,
	input[31:0] inputData,
	output [31:0] outputData,
	input Clk, writeEnable
    );
	 
	 
	reg [31:0] sram[0:1023];
	//ADD	R0,R0,R1
	//assign sram[0] = 
	//MOVE R2 = R1
	//assign sram[1] = 32'b010000_00010_00001_00000_0000000000;
	
	always @ (posedge Clk) begin
		if(writeEnable) begin
			sram[address] = inputData;
		end
		
	end
	
	
	assign outputData = sram[address];
	
	
		
endmodule
