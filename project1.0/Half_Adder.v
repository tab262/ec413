`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:05:11 10/10/2013 
// Design Name: 
// Module Name:    Half_Adder 
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
module Half_Adder(output S,C, input a,b);
	wire nA,nB,aNb,bNa;
	
	and 		and1	(C,a,b);
	not 		not1	(nA,a);
	not		not2	(nB,b);
	
	and		and2	(aNb,a,nB);
	and		and3	(bNa,b,nA);
	
	or			or1	(S,aNb,bNa);
		
	 
	 //Instantiate primitive gates
    //xor (S,x,y); //need to fix this
    //and (C,x,y);
endmodule
