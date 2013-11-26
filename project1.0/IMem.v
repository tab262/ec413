// IMem
//
// A module used to mimic Instruction memory, for the EC413 project.
// Returns hardcoded instructions based on the current PC.
//
// Version2. Posted 7:30PM on Nov 27.
// Fixed a false nop instruction and reg select fields in 1.
//
`timescale 1ns / 1ps
// ----------------------------------------------------
// IMPORTANT!
// Which test program to use:
// - PROGRAM_1: first simple example.
//
// - PROGRAM_2: test remaining instructions 
//              and corner cases.
// - PROGRAM_3: optional LW/SW program.
//
`define PROGRAM_1 // <<<<<<<<<<<< CHANGE TEST PROGRAM HERE!
//
// Change the previous line to try a different program,
// when available.
// ----------------------------------------------------

module IMem(PC,          // PC (address) of instruction in IMem
            Instruction);

`ifdef PROGRAM_1
	parameter PROG_LENGTH= 50;
`else
`ifdef PROGRAM_2
	parameter PROG_LENGTH= 26;
`else
`ifdef PROGRAM_3
	parameter PROG_LENGTH= 12;
`endif
`endif
`endif
//-------------Input Ports-----------------------------
input [31:0] PC;
//-------------Output Ports----------------------------
output [31:0] Instruction;
reg [31:0] Instruction;
//------------Code Starts Here-------------------------
always @(PC)
begin
case(PC)
//-----------------------------------------------------
`ifdef PROGRAM_1
//-----------------------------------------------------

	//
	// PROGRAM_1: Basic Math, Branches and Jump Test
	//

	//
	// 1.1) First part: 
	// Load values into:
	// $R0 = -1
	// $R1 = 0
	// $R2 = 2
	// Add $R0 and $R2 and get an answer in $R3: 
	// -1 + 2 = 1
	//
	
	//LI $1 = 10
	0: Instruction=  32'b111001_00001_00000_0000000000001010;
	//LI $2 = 20
	1: Instruction=  32'b111001_00010_00000_0000000000010100;
	//LI $3 = 30
	2: Instruction=  32'b111001_00011_00000_0000000000011110;
	//LI $4 = 40
	3: Instruction=  32'b111001_00100_00000_0000000000101000;
	//LI $5 = 50
	4: Instruction=  32'b111001_00101_00000_0000000000110010;
	//LI $6 = 60
	5: Instruction=  32'b111001_00110_00000_0000000000111100;
	//LI $7 = 70
	6: Instruction=  32'b111001_00111_00000_0000000001000110;
	//LI $8 = 80
	7: Instruction=  32'b111001_01000_00000_0000000001010000;
	
	//Two uncessary NOPS
	8: Instruction=  32'b0000_0000_0000_0000_0000_0000_0000_0000;
	9: Instruction=  32'b0000_0000_0000_0000_0000_0000_0000_0000;
	
	//Showing contents of $1 - $8
	10: Instruction=	32'b010000_00001_00001_00000_11111111111;
	11: Instruction=	32'b010000_00010_00010_00000_11111111111;
	12: Instruction=  32'b010000_00011_00011_00000_11111111111;
	13: Instruction=  32'b010000_00100_00100_00000_11111111111;
	14: Instruction=  32'b010000_00101_00101_00000_11111111111;	
	15: Instruction=  32'b010000_00110_00110_00000_11111111111;
	16: Instruction=  32'b010000_00111_00111_00000_11111111111;
	17: Instruction=  32'b010000_01000_01000_00000_11111111111;
	//NOPS
	18: Instruction=  32'b0000_0000_0000_0000_0000_0000_0000_0000;
	19: Instruction=  32'b0000_0000_0000_0000_0000_0000_0000_0000;
	20: Instruction=  32'b0000_0000_0000_0000_0000_0000_0000_0000;
	//Let's try out the ALU!
	
	//R-Types
	// NOT $9,$1
	21: Instruction=	32'b010001_01001_00001_00000_00000000000;
	// ADD $10,$2,$4 --> $10 = 20 + 40 = 60
	22: Instruction=	32'b010010_01010_00010_00100_00000000000;
	//SUB $11,$5,$2 --> $11 = 50 - 20 = 30
	23: Instruction=	32'b010011_01011_00101_00010_00000000000;
	//SLT $12,$2,$3 --> $12 = 20 < 30 --> 1
	24: Instruction=	32'b010111_01100_00010_00011_00000000000;
	
	//NOPS
	25: Instruction=  32'b0000_0000_0000_0000_0000_0000_0000_0000;
	26: Instruction=  32'b0000_0000_0000_0000_0000_0000_0000_0000;
	27: Instruction=  32'b0000_0000_0000_0000_0000_0000_0000_0000;
	
	//I-types
	//ADDI $13,$1,-1 --> 9
	28: Instruction=	32'b110010_01101_00001_1111_1111_1111_1111;
	//ORI	$14,$2,1101_0110_0001_0000b
	29: Instruction=	32'b110100_01110_00010_1101_0110_0001_0000;
	
	//NOPS
	30: Instruction=  32'b0000_0000_0000_0000_0000_0000_0000_0000;
	31: Instruction=  32'b0000_0000_0000_0000_0000_0000_0000_0000;
	32: Instruction=  32'b0000_0000_0000_0000_0000_0000_0000_0000;
	
	//SWI
	//Save the contents of %3 into Mem[3]
	//SWI $3,3 --> Mem[3] --> $3
	33: Instruction=	32'b111100_00011_00000_0000_0000_0000_0011;
	
	//NOPS
	34: Instruction=  32'b0000_0000_0000_0000_0000_0000_0000_0000;
	35: Instruction=  32'b0000_0000_0000_0000_0000_0000_0000_0000;
	36: Instruction=  32'b0000_0000_0000_0000_0000_0000_0000_0000;
	
	//LWI
	//Get the contents of Mem[3] and store it in $15
	//LWI $16,3
	37: Instruction=	32'b111011_10001_00000_0000_0000_0000_0011;
	
	
	//NOPS
	38: Instruction=  32'b0000_0000_0000_0000_0000_0000_0000_0000;
	39: Instruction=  32'b0000_0000_0000_0000_0000_0000_0000_0000;
	40: Instruction=  32'b0000_0000_0000_0000_0000_0000_0000_0000;
	
	
	//Branching
	//BEQ $1,$1 1 --> jump to instruction 43 $1 == $1
	41: Instruction=	32'b100000_00001_00001_0000_0000_0000_0001;
	//Flag instruction 1- should be flushed due to above jump
	42: Instruction=	32'b0101_0101_0101_0101_0101_0101_0101_0001;
	//BNE $2,$3, 2 --> jump to instruction 46 if $2 != $3
	43: Instruction=	32'b100001_00010_00011_0000_0000_0000_0010;
	//Flag instructions 2 and 3
	44: Instruction=	32'b0101_0101_0101_0101_0101_0101_0101_0010;
	45: Instruction=	32'b0101_0101_0101_0101_0101_0101_0101_0011;
	//BLT $4,$5, 1 --> jump to instruction 48 is $4 < $5
	46: Instruction=	32'b100010_00100_00101_0000_0000_0000_0001;
	//Flag instruction 4
	47: Instruction=	32'b0101_0101_0101_0101_0101_0101_0101_0100;
	//BLE $6,$7,1 --> jump to instruction 50 if $6 <= $7
	48: Instruction=	32'b100011_00110_00111_0000_0000_0000_0001;
	//Flag instructions 5
	49: Instruction=	32'b0101_0101_0101_0101_0101_0101_0101_1010;
	//J -3 --> jump to instruction 51 - 3 = 48
	50: Instruction=	32'b000001_00_0000_0000_0000_0000_0000_0000;
	
`else
//-----------------------------------------------------
`ifdef PROGRAM_2
//-----------------------------------------------------

	
	//LI $1 = 10
	0: Instruction=  	32'b111001_00001_00000_0000000000001010;
	//LI $2 = 20
	1: Instruction=  	32'b111001_00010_00000_0000000000010100;
	//LI $3 = 30
	2: Instruction=  	32'b111001_00011_00000_0000000000011110;
	//LI $4 = 40
	3: Instruction=  	32'b111001_00100_00000_0000000000101000;
	//LI $5 = 50
	4: Instruction=  	32'b111001_00101_00000_0000000000110010;
	//LI $6 = 60
	5: Instruction=	32'b111001_00110_00000_0000000000111100;
	//LI $7 = 70
	6: Instruction=	32'b111001_00111_00000_0000000001000110;
	//LI $8 = 80
	7: Instruction=	32'b111001_01000_00000_0000000001010000;
	
	//DATA HAZARD
	//ADD	$9,$1,$2 --> $9 = $3 + $6  = 40 + 50 = 90
	8: Instruction=	32'b010010_01001_00011_00110_00000000000;
	//!!!DATA HAZARD!!!//
	//ADD	$10,$9,$1 --> $10 = 90 + 10 = 100 --> We actually get ten though
	9: Instruction=	32'b010010_01010_01001_00001_00000000000;
	
	
`else
//-----------------------------------------------------
`ifdef PROGRAM_3
//-----------------------------------------------------

   // Simple LW and SW test.

	//
	// 3.1) First part: 
	// Load values into:
	// $R0 = 0    (0x00000000)
	// $R1 = 10   (0x0000000A)
	//

	// LI   $R0, 0x0000
	0: Instruction=  32'b111001_00000_00000_0000000000000000;
	// LUI  $R0, 0x0000
	1: Instruction=  32'b111010_00000_00000_0000000000000000;
	// LI   $R1, 0x000A
	2: Instruction=  32'b111001_00001_00000_0000000000001010;
	// LUI  $R1, 0x0000
	3: Instruction=  32'b111010_00001_00000_0000000000000000;

	//
	// 3.2) Second part: 
	// Loop with SW test.
	// Stores the following:
	//
	// Address 1:  0
	// Address 2:  1
	// ...
	// Address 9:  8
	// Address 10: 9
	//
	
	// SW  $R0, $R0[0x1]
	4: Instruction=  32'b111110_00000_00000_0000000000000001;
	// ADDI $R0, $R0, 0x0001
	5: Instruction=  32'b110010_00000_00000_0000000000000001;
	// BLT	$R0, $R1, 0xFFFD
	6: Instruction=  32'b100010_00000_00001_1111111111111101;
	
	//
	// 3.3) Third part: 
	// Loop with LW test.
	// Should output out of the ALU on instruction 11: 1, 2, ..., 10
	//
	
	// LI   $R0, 0x0000
	7: Instruction=  32'b111001_00000_00000_0000000000000000;
	// LUI  $R0, 0x0000
	8: Instruction=  32'b111010_00000_00000_0000000000000000;
	// LW  $R19, $R0[0x0001]
	9: Instruction= 32'b111101_10011_00000_0000000000000001;
	// ADDI $R19, $R19, 0x0001
	10: Instruction= 32'b110010_10011_10011_0000000000000001;
	// ADDI $R0, $R0, 0x0001
	11: Instruction= 32'b110010_00000_00000_0000000000000001;
	// BLT $R0, $R1 0xFFFC
	12: Instruction= 32'b100001_11111_00000_1111111111111100;

`endif
`endif
`endif
	default: Instruction= 0; //NOOP
endcase
end

endmodule
	
