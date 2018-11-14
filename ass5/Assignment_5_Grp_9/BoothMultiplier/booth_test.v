`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   14:31:13 08/26/2018
// Design Name:   booth_multiplier
// Module Name:   D:/chels/embedded/BoothMultiplier/booth_test.v
// Project Name:  BoothMultiplier
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: booth_multiplier
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module booth_test;

	// Inputs
	reg [5:0] a;
	reg [5:0] b;
	reg load;
	reg clk;

	// Outputs
	wire [11:0] product;
	wire ready;

	// Instantiate the Unit Under Test (UUT)
	booth_multiplier uut (
		.a(a), 
		.b(b), 
		.load(load), 
		.clk(clk), 
		.product(product), 
		.ready(ready)
	);

	initial begin
		// Initialize Inputs
		a = 30;
		b = 30;
		load = 0;
		clk = 0;

		// Wait 100 ns for global reset to finish
		#100;
		load=1;
		#20;
		load=0;
		#500;
		a = -25;
		b = 25;
		load=1;
		#20;
		load=0;
		// Add stimulus here

	end
	
	always begin
		#10;
		clk = !clk;
   end
endmodule

