`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   23:37:45 10/10/2018
// Design Name:   G9Processor
// Module Name:   /home/nirala/Documents/grive/codes/Autumn2018/5thSem/COA/Spartan/G9Processor/G9_TB.v
// Project Name:  G9Processor
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

module G9_TB;

	// Inputs
	reg clk;



	// Instantiate the Unit Under Test (UUT)
	G9Processor uut (
		.clk(clk)
	);

	initial begin
		// Initialize Inputs
		clk = 1;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
	always 
	begin
	   #100;
		clk = ~clk;

	end
      
endmodule

