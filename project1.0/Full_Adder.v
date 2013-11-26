`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:04:37 10/10/2013 
// Design Name: 
// Module Name:    Full_Adder 
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
module Full_Adder(input x,y,c_in, output C,S); //a,b,carry_in, carry_out, sum

    wire S1,C1,C2;

    //instantiate half adders
    Half_Adder HA1 (S1,C1,x,y);
    Half_Adder HA2    (S,C2,S1,c_in);
    or	 or1	(C,C2,C1);
    
endmodule
