`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:21:57 11/24/2013
// Design Name:   CPU
// Module Name:   C:/Users/Casey/Desktop/ec413/project/project1.0/test_CPU.v
// Project Name:  project
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: CPU
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test_CPU; 

	// Inputs
	reg tempPCWrite;
	reg Reset;
	reg Clk;
	reg tempPCSource;
	reg tempGeneralWrite;
	reg [31:0] tempID_PC;
	reg [31:0] tempWriteData;
	reg [5:0] tempWriteSelect;

	// Outputs
	wire [31:0] PCtoInsMem;
	wire [31:0] PCtoID;
	wire [31:0] IFinstructions;
	wire [31:0] IF_ID_PC;
	wire [31:0] IF_ID_INSTRUCTIONS;
	wire [31:0] readData1;
	wire [31:0] readData2;
	wire [31:0] controls;
	wire [31:0] ID_PC;
	wire PCSource;
	wire [25:0] locations;
	wire [31:0] SE_Imm;
	wire [4:0] rs1;
	wire [4:0] rs2;
	wire [31:0] ID_EX_Rdata1;
	wire [31:0] ID_EX_Rdata2;
	wire [31:0] ID_EX_Controls;
	wire [25:0] ID_EX_Locations;
	wire [31:0] tempALUOut;
	wire [31:0] ImmMemData;
	wire [31:0] MUXA_Out;
	wire [31:0] EX_MEM_ImmMemData;
	wire [4:0] EX_DEST;
	wire [31:0] EX_MEM_CONTROLS;
	wire [31:0] EX_MEM_ALUOut;
	wire [4:0] EX_MEM_DEST;
	wire [31:0] MEM_MemoryOut;
	wire [31:0] MEM_WB_CONTROLS;
	wire [31:0] MEM_WB_ALUout;
	wire [31:0] MEM_WB_MemoryOut;
	wire [4:0] MEM_WB_DEST;
	wire [31:0] WB_writeBackData;
	wire WB_RegWrite;

	// Instantiate the Unit Under Test (UUT)
	CPU uut (
		.tempPCWrite(tempPCWrite), 
		.Reset(Reset), 
		.Clk(Clk), 
		.tempPCSource(tempPCSource), 
		.tempGeneralWrite(tempGeneralWrite), 
		.tempID_PC(tempID_PC), 
		.PCtoInsMem(PCtoInsMem), 
		.PCtoID(PCtoID), 
		.IFinstructions(IFinstructions), 
		.IF_ID_PC(IF_ID_PC), 
		.IF_ID_INSTRUCTIONS(IF_ID_INSTRUCTIONS), 
		.tempWriteData(tempWriteData), 
		.tempWriteSelect(tempWriteSelect), 
		.readData1(readData1), 
		.readData2(readData2), 
		.controls(controls), 
		.ID_PC(ID_PC), 
		.PCSource(PCSource), 
		.locations(locations), 
		.SE_Imm(SE_Imm), 
		.rs1(rs1), 
		.rs2(rs2), 
		.ID_EX_Rdata1(ID_EX_Rdata1), 
		.ID_EX_Rdata2(ID_EX_Rdata2), 
		.ID_EX_Controls(ID_EX_Controls), 
		.ID_EX_Locations(ID_EX_Locations), 
		.tempALUOut(tempALUOut), 
		.ImmMemData(ImmMemData), 
		.MUXA_Out(MUXA_Out), 
		.EX_MEM_ImmMemData(EX_MEM_ImmMemData), 
		.EX_DEST(EX_DEST), 
		.EX_MEM_CONTROLS(EX_MEM_CONTROLS), 
		.EX_MEM_ALUOut(EX_MEM_ALUOut), 
		.EX_MEM_DEST(EX_MEM_DEST), 
		.MEM_MemoryOut(MEM_MemoryOut), 
		.MEM_WB_CONTROLS(MEM_WB_CONTROLS), 
		.MEM_WB_ALUout(MEM_WB_ALUout), 
		.MEM_WB_MemoryOut(MEM_WB_MemoryOut), 
		.MEM_WB_DEST(MEM_WB_DEST), 
		.WB_writeBackData(WB_writeBackData), 
		.WB_RegWrite(WB_RegWrite)
	);
	always begin
		#5 Clk = ~Clk;
	end
	initial begin
		// Initialize Inputs
		tempPCWrite = 1;
		Reset = 1;
		Clk = 0;
		tempPCSource = 0;
		tempGeneralWrite = 1;
		tempID_PC = 0;
		tempWriteData = 1;
		tempWriteSelect = 0;

		#10;
		Reset = 0;
        
		// Add stimulus here

	end
      
endmodule

