`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:40:32 10/11/2013 
// Design Name: 
// Module Name:    IDEAL_ALU 
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
module IDEAL_ALU(R2,R3,ALUOp,ALU_ideal_out,error_bits,error_flag, R1);



parameter	word_size = 5;		// word_size default value = 32		

input		[word_size-1:0] R1,R2,R3;
input		[2:0] ALUOp;

output [word_size-1:0] ALU_ideal_out;
output [word_size-1:0] error_bits;
output	error_flag;




// ---- ideal ALU ------
function [word_size:0]		ALU_ideal;  // include c_out;
input		[word_size-1:0] 	R2, R3;
input		[2:0]			ALUOp;
			
	begin
	case (ALUOp[2:0])
	3'h0: ALU_ideal = R2;
	3'h1: ALU_ideal = ~R2;
	3'h2: ALU_ideal = (R2 + R3);
	3'h3: ALU_ideal = (R2 - R3);
	3'h4: ALU_ideal = (R2 | R3);
	3'h5: ALU_ideal = (R2 & R3);
	3'h6: ALU_ideal = (($signed(R2) < $signed(R3))? 1:0);	
	endcase
	end
	
	endfunction
// ---- ideal ALU end------
		
	assign ALU_ideal_out = ALU_ideal(R2, R3, ALUOp);
	assign error_bits = ALU_ideal_out^R1;	//comparison
	assign error_flag = |error_bits;

endmodule
