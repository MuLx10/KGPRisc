`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:20:05 10/31/2018
// Design Name:   G9Processor
// Module Name:   C:/Downloads/KGP_RISC/G9_output_testb.v
// Project Name:  KGP_RISC
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: G9Processor
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module G9_Processor_TB;

	// Inputs
	reg clk;
	reg reset;

	// Outputs
	wire [31:0] led_output;

	// Instantiate the Unit Under Test (UUT)
	G9Processor uut (
		.clk(clk), 
		.reset(reset), 
		.led_output(led_output)
	);

	initial begin
		// Initialize Inputs
		#10;
		clk = 0;
		reset = 1;
		// Wait 100 ns for global reset to finish
		#100;
		reset = 0;
        
		// Add stimulus here

	end
	always 
	begin
	   #10;
		clk = ~clk;

	end
endmodule

