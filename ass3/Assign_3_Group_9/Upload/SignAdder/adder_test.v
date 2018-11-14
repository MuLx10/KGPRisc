`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:12:34 08/07/2018
// Design Name:   adder
// Module Name:   D:/chels/embedded/sign_magnitude_adder/adder_test.v
// Project Name:  sign_magnitude_adder
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: adder
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module adder_test;

	// Inputs
	reg [6:0] a;
	reg [6:0] b;
	reg cin;

	// Outputs
	wire [7:0] sum;

	// Instantiate the Unit Under Test (UUT)
	adder uut (
		.a(a), 
		.b(b), 
		.cin(cin), 
		.sum(sum)
	);

	initial begin
		// Initialize Inputs
		// Wait 100 ns for global reset to finish
		#100;
      a = 7'b1010101;
		b = 7'b0101000;
		cin = 0;
		// Add stimulus here
	end
      
endmodule

