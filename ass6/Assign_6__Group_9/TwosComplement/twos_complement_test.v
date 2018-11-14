`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:14:13 08/29/2018
// Design Name:   twos_complement
// Module Name:   E:/Spartan/TwosComplement/twos_complement_test.v
// Project Name:  TwosComplement
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: twos_complement
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module twos_complement_test;

	// Inputs
	reg in;
	reg clk;
	reg reset;

	// Outputs
	wire out;

	// Instantiate the Unit Under Test (UUT)
	twos_complement uut (
		.in(in), 
		.clk(clk), 
		.reset(reset), 
		.out(out)
	);

	initial begin
		// Initialize Inputs
		in = 0;
		clk = 0;
		reset = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
	
	always begin
		
		#20;
		in=0;
		#20;
		in=0;
		#20;
		in=1;
		#20;
		in=1;
		#20;
		in=1;#20;
		in=1;#20;
		in=1;#20;
		in=0;#20;
		in=1;#20;
		in=1;#20;
		in=0;#20;
		reset=1;
		in=0;
		#20;
		in=1;#20;
		in=0;#20;
		#300;
		reset=0;
	end
	always  begin
		clk = !clk;
		#10;
	end
      
endmodule

