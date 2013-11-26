`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:09:53 11/22/2013 
// Design Name: 
// Module Name:    MEM 
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
module MEM(
	input Clk,
	input[31:0] ALUOut,MemoryWriteData,Controls,
	
	output[31:0]out_MemoryData
    );
	 
	 
	 /*
	 module DMem(WriteData,   // Input data into the memory
            MemData,     // Output data from the memory
            Address,     // Address of data to be read/written
            MemWrite,    // When high, causes write to take place on posedge
            Clk);        // Clock
	 */

	DMem	DATA_MEMORY (ALUOut,out_MemoryData,MemoryWriteData,Controls[21],Clk);
	

	
	
endmodule
