`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   03:57:30 08/08/2018
// Design Name:   sign_adder
// Module Name:   D:/chels/embedded/sign_magnitude_adder/sign_adder_test.v
// Project Name:  sign_magnitude_adder
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: sign_adder
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module sign_adder_test;

	// Inputs
	reg [7:0] a;
	reg [7:0] b;

	// Outputs
	wire [8:0] sum;

	// Instantiate the Unit Under Test (UUT)
	sign_adder uut (
		.a(a), 
		.b(b), 
		.sum(sum)
	);

	initial begin
		// Initialize Inputs
		a = 0;
		b = 0;

		// Wait 100 ns for global reset to finish
		#100;
      a = 8'b00010101;   // 21
		b = 8'b10101000;   // -40
		// sum = 100010011 // -19
		#300;
		a = 8'b11101110;   // -110
		b = 8'b01100110;   // 102
		// sum = 100001000;// -8
		#300;
		a = 8'b11101110;  // -110
		b = 8'b11100110;  // -102
		// sum = 111010100 // -212
		// Add stimulus here

	end
      
endmodule

