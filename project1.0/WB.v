`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:48:59 11/22/2013 
// Design Name: 
// Module Name:    WB 
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
module WB(
	input[31:0] ALUOut, MemoryOut, Controls,
	
	output[31:0] writeBackData,
	output regWrite
    );
	 
	 
	 function[31:0] f_WBD;
		input[31:0] ALUOut, MemoryOut, Controls;
		begin
			if(Controls[20] == 0) begin
				f_WBD = ALUOut;
			end else begin
				f_WBD = MemoryOut;
			end
		end
	endfunction
	
	function f_regWrite;
		input[31:0] Controls;
		begin
			if(Controls[19] == 1'b1) begin
				f_regWrite = 1;
			end else begin
				f_regWrite = 0;
			end
		end
	endfunction
	
	assign writeBackData = f_WBD(ALUOut,MemoryOut,Controls);
	assign regWrite = f_regWrite(Controls);


endmodule
