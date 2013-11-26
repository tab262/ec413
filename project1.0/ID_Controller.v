`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:57:35 11/14/2013 
// Design Name: 
// Module Name:    ID_Controller 
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

//instruction format//
/*
aluop(4)31:28 || ALUSrcA(3)27:25 || ALUSrcB(3)24:22 || MemWrite(1) 21 || WBDSelect 20 || RegFileWrite 19
*/

module ID_Controller(
	input [31:0] instructions,
	output [31:0] controls
	);
	
	 function [31:0] f_controls;
		input [31:0] instructions;
		
		begin
			
			if(instructions[31:29] == 3'b010) begin
				//RTYPE
				f_controls[31:28] = instructions[29:26];
				f_controls[27:25] = 0;
				f_controls[24:22] = 0;
				f_controls[21] = 0;
				f_controls[20] = 0;
				f_controls[19] = 1;
				f_controls[18:0] = 0;
			end else if(instructions[31:29] == 3'b100) begin
				//BRANCH
				f_controls = 0;
			end else if(instructions[31:29] == 3'b110) begin
				//ITYPE
				f_controls[31:28] = instructions[29:26];
				f_controls[27:25] = 3'b000;
				
				
				//dealing with which immediate to use -- SE or ZE
				if(instructions[28] == 0 || instructions[28:26] == 3'b111) begin
					f_controls[24:22] = 3'b010;
				end else begin
					f_controls[24:22] = 3'b001;
				end
				
				f_controls[21] = 0;
				f_controls[20] = 0;
				f_controls[19] = 1;
				f_controls[18:0] = 0;
			
			end else if(instructions[31:29] == 3'b111) begin //Memory
				f_controls[31:28] = instructions[29:26];
				f_controls[27:25] = 3'b000;
				f_controls[24:22] = 3'b001;
				f_controls[21:0] = 0;
				if(instructions[28] == 1) begin
					//SWI
					f_controls[21] = 1;
				end else begin
					//Write back for LW
					f_controls[19] = 1;
				end
				
				//LWI
				if(instructions[31:26] == 6'b111011) begin
					f_controls[20] = 1;
				end
			end else begin
				f_controls = 0;
			end
		
		end
	 
	 endfunction

	assign controls = f_controls(instructions);





endmodule
