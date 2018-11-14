`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: IIT Kharargpur
// Engineer: Mehul Kumar Nirala
// Roll : 16CS10034
// Scenario : COA Lab Test
//
// Create Date:   16:11:52 09/05/2018
// Design Name:   bin_frac_seq_mult
// Module Name:   E:/FPGA/LabTest/tb_bin_frac_seq_mult.v
// Project Name:  LabTest
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: bin_frac_seq_mult
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb_bin_frac_seq_mult;

	// Inputs
	reg clk;
	reg start;
	reg [6:0] a;
	reg [6:0] b;

	// Outputs
	wire done;
	wire [12:0] product;

	// Instantiate the Unit Under Test (UUT)
	bin_frac_seq_mult uut (
		.clk(clk), 
		.start(start), 
		.a(a), 
		.b(b), 
		.done(done), 
		.product(product)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		
		#100;

		// Wait 100 ns for global reset to finish
		start = 0;
		a = 7'b0000100;
		b = 7'b0000010;
		
		#5;
      start = 1;
		#5;
		start = 0;
		
		#100;
		
		// Add stimulus here
		
	end
   always begin
			#5;
			clk = ~clk;
	end  
      
endmodule

