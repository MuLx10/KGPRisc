`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   10:57:24 08/08/2018
// Design Name:   barrel_shifter
// Module Name:   D:/chels/embedded/barrel_shifter/shifter_test.v
// Project Name:  barrel_shifter
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: barrel_shifter
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module shifter_test;

	// Inputs
	reg [7:0] in;
	reg [2:0] shift;
	reg direction;

	// Outputs
	wire [7:0] out;

	// Instantiate the Unit Under Test (UUT)
	barrel_shifter uut (
		.in(in), 
		.shift(shift), 
		.direction(direction), 
		.out(out)
	);

	initial begin
		// Initialize Inputs
		in = 0;
		shift = 0;
		direction = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		in = 8'b11110000;
		shift = 3'b010;
		direction = 1;
	end
      
endmodule

