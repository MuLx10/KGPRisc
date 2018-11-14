`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   13:01:43 08/26/2018
// Design Name:   combinational_multiplier
// Module Name:   D:/chels/embedded/CombinationalMultiplier/test.v
// Project Name:  CombinationalMultiplier
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: combinational_multiplier
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test;

	// Inputs
	reg [7:0] a;
	reg [7:0] b;

	// Outputs
	wire [15:0] product;
	wire [7:0] x;
	wire [7:0] y;
	wire [15:0] temp;

	// Instantiate the Unit Under Test (UUT)
	combinational_multiplier uut (
		.a(a), 
		.b(b), 
		.product(product), 
		.x(x), 
		.y(y), 
		.temp(temp)
	);

	initial begin
		// Initialize Inputs
		a = 125;
		b = -125;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

