`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:27:17 08/07/2018
// Design Name:   mux1
// Module Name:   D:/chels/embedded/sign_magnitude_adder/mux1_test.v
// Project Name:  sign_magnitude_adder
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: mux1
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module mux1_test;

	// Inputs
	reg select;
	reg a0;
	reg a1;

	// Outputs
	wire b;

	// Instantiate the Unit Under Test (UUT)
	mux1 uut (
		.select(select), 
		.a0(a0), 
		.a1(a1), 
		.b(b)
	);

	initial begin
		// Initialize Inputs

		select = 1'b0;
		a0 = 1'b0;
		a1 = 1'b1;
		
		// Wait 100 ns for global reset to finish
		#100;
		select=1'b1;
		#500;
		select=1'b0;
	end
      
endmodule

