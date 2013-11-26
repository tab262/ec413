`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:21:28 11/14/2013 
// Design Name: 
// Module Name:    CPU 
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
module CPU(
    //IF inputs
	 input tempPCWrite, Reset,Clk, tempPCSource,tempGeneralWrite,
	 input[31:0] tempID_PC,
	 //IF outputs
	 output[31:0] PCtoInsMem,
	 output  [31:0] PCtoID,
	 output [31:0] IFinstructions,
	 
	 //IF_ID outputs
	 output [31:0] IF_ID_PC, 
	 output[31:0] IF_ID_INSTRUCTIONS,
	 
	 //ID Inputs
	 input[31:0] tempWriteData,
	 input[5:0] tempWriteSelect,
	 
	 //ID Outputs
	 output[31:0] readData1, readData2,controls,
	 output signed [31:0] ID_PC, 
	 output PCSource,
	 output[25:0] locations,
	 output [31:0] SE_Imm,
	 output[4:0] rs1,rs2,
	 
	 //ID_EX outputs
	 output[31:0] ID_EX_Rdata1,ID_EX_Rdata2,ID_EX_Controls,
	 output[25:0]ID_EX_Locations,
	 
	 //EX outputs
	 output[31:0] tempALUOut,ImmMemData,MUXA_Out,EX_MEM_ImmMemData,
	 output[4:0] EX_DEST,
	 
	 //EM_MEM outputs
	 output[31:0] EX_MEM_CONTROLS,EX_MEM_ALUOut,
	 output[4:0] EX_MEM_DEST,

	//MEM outputs
	output[31:0] MEM_MemoryOut,
	
	//MEM_WB outputs
	output[31:0] MEM_WB_CONTROLS,MEM_WB_ALUout,MEM_WB_MemoryOut,
	output[4:0] MEM_WB_DEST,
	
	//WB Outputs
	output[31:0] WB_writeBackData,
	output WB_RegWrite
	);
	
/////////////////////////// Instruction Fetch  ///////////////////////////	
	/*
	//inputs//
	input PCWrite, //from ID stage
	input Reset,Clk,
	input PCSource, //from ID stage
	input [31:0]ID_PC, //from ID stage
	
	//outputs//
	output [31:0] PCtoID,
	output [31:0] instructions,
	output [31:0]PCtoInsMem
    );
	*/
	
	
	//instruction fetch
	//wire[31:0] PCtoID,IFinstructions; 
	IF	INSFETCH(tempPCWrite, Reset, Clk, PCSource, ID_PC, PCtoID,IFinstructions,PCtoInsMem);
	
	


/////////////////////////// IF/ID Registers  ///////////////////////////
	
	//wire[31:0] IF_ID_PC;
	nbit_reg	#(32) PC_REG (PCtoID,IF_ID_PC,tempGeneralWrite,PCSource,Clk);
	
	//wire[31:0] IF_ID_INSTRUCTIONS;
	nbit_reg	#(32) IN_REG	(IFinstructions,IF_ID_INSTRUCTIONS,tempGeneralWrite,PCSource,Clk);


/////////////////////////// Instruction Decode ///////////////////////////
	/*
	parameter REG_SELECT_WIDTH = 5;
	// Register size in bits.
	parameter DATA_WIDTH = 32;

	//-------------Input Ports-----------------------------
	input [DATA_WIDTH-1:0]       writeData,instructions;
	input [REG_SELECT_WIDTH-1:0] readSelect1;
	input [REG_SELECT_WIDTH-1:0] readSelect2;
	input [REG_SELECT_WIDTH-1:0] writeSelect;
	input	[31:0] IF_ID_PC;
	input writeEnable;
	input Reset;
	input Clk;
	//-------------Output Ports----------------------------
	output [DATA_WIDTH-1:0] readData1;
	output [DATA_WIDTH-1:0] readData2;
	output [31:0] ID_PC;
	output [31:0] controls;
	output [25:0] locations;
	output [31:0] SE_Imm;
	output PCSource;
	*/
	
	//wire[31:0] SE_Imm;
	//(writeData,readData1,readData2,readSelect1,readSelect2,writeSelect,writeEnable,Reset,Clk,instructions,IF_ID_PC,ID_PC,controls,locations,PCSource,SE_Imm);
	
	//wire[4:0] rs1,rs2;
	readSelect_SELECTOR RSS (IF_ID_INSTRUCTIONS, rs1,rs2);
	
	ID			INSTRUCTDECODE(WB_writeBackData,readData1,readData2,MEM_WB_DEST,WB_RegWrite, Reset,Clk,IF_ID_INSTRUCTIONS,IF_ID_PC,
				ID_PC,controls,locations,PCSource,SE_Imm,rs1,rs2);



	//controller regs
	//wire[31:0] ID_EX_Controls;
	nbit_reg	#(32) ID_EX_REG1 (controls,ID_EX_Controls,tempGeneralWrite,Reset,Clk);

	//locations
	//wire[31:0] ID_EX_Locations;
	nbit_reg	#(32)	ID_EX_REG2 (locations,ID_EX_Locations,tempGeneralWrite,Reset,Clk);
	
	//Read data 1
	//wire[31:0] ID_EX_Rdata1, ID_EX_Rdata2;
	nbit_reg	#(32)	ID_EX_REG3 (readData1,ID_EX_Rdata1,tempGeneralWrite,Reset,Clk);
	nbit_reg	#(32)	ID_EX_REG4 (readData2,ID_EX_Rdata2,tempGeneralWrite,Reset,Clk);



	////////////EX STAGE////////////////
	/*
	module EX(
	input [31:0] data1,data2,controls,
	input [25:0] locations,
	
	output[31:0] ALUOut,
	output[31:0] ImmMemAddress
);
	*/
	
	//wire[31:0] ImmMemAddress;
	EX	EXEC (ID_EX_Rdata1,ID_EX_Rdata2,ID_EX_Controls,ID_EX_Locations,tempALUOut,ImmMemData,MUXA_Out,EX_DEST);


	/// EX/MEM ///
	//nbit_reg	#(32)	ID_EX_REG4 (readData2,ID_EX_Rdata2,tempGeneralWrite,Reset,Clk);
	//controls
	nbit_reg	#(32)	EX_MEM_CONTROL_REG(ID_EX_Controls,EX_MEM_CONTROLS,tempGeneralWrite,Reset,Clk);
	//ALUOut
	nbit_reg	#(32)	EX_MEM_ALUOUT(tempALUOut,EX_MEM_ALUOut,tempGeneralWrite,Reset,Clk);
	//Destinations
	nbit_reg	#(5)	EX_MEM_DEST_REG(EX_DEST,EX_MEM_DEST,tempGeneralWrite,Reset,Clk);
	//Immediate Memory Data
	nbit_reg	#(32)	IMM_MEM_DATA_REG(ImmMemData,EX_MEM_ImmMemData,tempGeneralWrite,Reset,Clk);
	
	
	///////////////////// MEM /////////////////////
	
	/*
	module MEM(
	input Clk,
	input[31:0] ALUOut,MemoryWriteData,Controls,
	
	output[31:0]out_MemoryData
    );
	*/
	
	
	MEM	MEMORY	(Clk,EX_MEM_ALUOut,EX_MEM_ImmMemData,EX_MEM_CONTROLS,MEM_MemoryOut);
	
	// MEM/WB //
	//controls
	nbit_reg	#(32)	MEM_WB_CONTROLS_REG(EX_MEM_CONTROLS,MEM_WB_CONTROLS,tempGeneralWrite,Reset,Clk);
	//ALUOut
	nbit_reg	#(32) MEM_WB_ALUOUT_REG(EX_MEM_ALUOut,MEM_WB_ALUout,tempGeneralWrite,Reset,Clk);
	//Memory out
	nbit_reg	#(32)	MEM_WB_MEMOUT_REG(MEM_MemoryOut,MEM_WB_MemoryOut,tempGeneralWrite,Reset,Clk);
	//Dest
	nbit_reg	#(5) MEM_WB_DEST_REG(EX_MEM_DEST,MEM_WB_DEST,tempGeneralWrite,Reset,Clk);
	
	//// WB ////
	/*
	module WB(
	input[31:0] ALUOut, MemoryOut, Controls,
	
	output[31:0] writeBackData
    );
	*/
	
	WB	WRITE_BACK(MEM_WB_ALUout,MEM_WB_MemoryOut,MEM_WB_CONTROLS, WB_writeBackData,WB_RegWrite);
	
	
	
endmodule
