`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:16:18 08/07/2018
// Design Name:   mux7
// Module Name:   D:/chels/embedded/sign_magnitude_adder/mux7_test.v
// Project Name:  sign_magnitude_adder
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: mux7
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module mux7_test;

	// Inputs
	reg select;
	reg [6:0] a0;
	reg [6:0] a1;

	// Outputs
	wire [6:0] b;

	// Instantiate the Unit Under Test (UUT)
	mux7 uut (
		.select(select), 
		.a0(a0), 
		.a1(a1), 
		.b(b)
	);

	initial begin
		// Initialize Inputs
		select = 0;
		a0 = 7'b1010101;
		a1 = 7'b0101000;

		// Wait 100 ns for global reset to finish
		#100;
		
		select=1;
		#500;
		select=0;    
		// Add stimulus here

	end
      
endmodule

