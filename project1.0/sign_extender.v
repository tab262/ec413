`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:14:59 11/14/2013 
// Design Name: 
// Module Name:    sign_extender 
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
module sign_extender(
	input[15:0] numberIn,
	output[31:0] numberOut
    );
	
	assign numberOut[31:16] = {16{numberIn[15]}};
	assign numberOut[15:0] = numberIn[15:0];
	
	

endmodule
