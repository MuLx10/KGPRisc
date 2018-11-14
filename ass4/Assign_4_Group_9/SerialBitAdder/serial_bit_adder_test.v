`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:20:22 08/16/2018
// Design Name:   bitSerialAdder
// Module Name:   D:/chels/embedded/SerialBitAdderr/serial_bit_adder_test.v
// Project Name:  SerialBitAdderr
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: bitSerialAdder
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module serial_bit_adder_test;

	// Inputs
	reg clk;
	reg rst;
	reg load;
	reg [7:0] a;
	reg [7:0] b;
	reg cin;

	// Outputs
	wire [7:0] sum;
	wire cout;

	// Instantiate the Unit Under Test (UUT)
	bitSerialAdder uut (
		.clk(clk), 
		.rst(rst), 
		.load(load), 
		.a(a), 
		.b(b), 
		.cin(cin), 
		.sum(sum), 
		.cout(cout)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		rst = 1;
		load = 0;
		a = 0;
		b = 0;
		cin = 1;

		// Wait 100 ns for global reset to finish
		#100;
      rst= 0;
		load = 1'b1;
		a = 8'b10000101;
		b = 8'b10000100;
		#20;
		load = 1'b0;
		
		#200;
	end
	
		
	always
		begin
		#10 clk = !clk;
		end
      
      
endmodule

