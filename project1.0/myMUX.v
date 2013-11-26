`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:21:21 10/22/2013 
// Design Name: 
// Module Name:    myMUX 
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
module myMUX(select,A,B,C);

	//when select is 0, we take A
	//when select is 1, we take B

	parameter	DATA_WIDTH = 32;
	
	input select;
	input [31:0] A, B;
	output [31:0] C;
	wire [31:0] wA,wB;
	wire SelectIsZero;
	not	(SelectIsZero,select);
	
	generate
		genvar k;
	
		for(k = 0; k < DATA_WIDTH; k = k + 1)
		begin:mux_loop
			and (wA[k], A[k], SelectIsZero);
			and (wB[k], B[k], select);
			or	 (C[k],wA[k],wB[k]);
		end
	endgenerate

endmodule
