`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   22:38:16 10/10/2018
// Design Name:   ProgramCounter
// Module Name:   /home/nirala/Documents/grive/codes/Autumn2018/5thSem/COA/Spartan/G9Processor/PC_TB.v
// Project Name:  G9Processor
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ProgramCounter
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module PC_TB;

	// Inputs
	reg clk;
	reg reset;
	reg pc_next;

	// Outputs
	wire [31:0] pc;

	// Instantiate the Unit Under Test (UUT)
	ProgramCounter uut (
		.clk(clk), 
		.reset(reset), 
		.pc_next(pc_next), 
		.pc(pc)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 0;
		pc_next = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
   always
	begin
		clk=~clk;
	end
endmodule

