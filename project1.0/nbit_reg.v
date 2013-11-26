//n bit register

module nbit_reg(nD,    // Register Input
                nQ,    // Register Output
					 Write, // Only accept input when this is set
					 Reset, // Synchronous Reset
					 Clk);  // Clock

// Specifies the register data width.
	parameter DATA_WIDTH = 32;
	
//-------------Input Ports-----------------------------
	input signed [DATA_WIDTH-1:0] nD;
	input Write;
	input Reset;
	input Clk;
//-------------Output Ports----------------------------
	output signed [DATA_WIDTH-1:0] nQ;



	
	DFF DFFs[DATA_WIDTH-1:0] (nD, nQ, Write, Reset, Clk);

endmodule
