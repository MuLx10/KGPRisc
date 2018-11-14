`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:06:43 10/09/2018
// Design Name:   DMem
// Module Name:   /home/nirala/Documents/grive/codes/Autumn2018/5thSem/COA/Spartan/KGPRisc/DMem_TB.v
// Project Name:  KGPRisc
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: DMem
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module DMem_TB;

	// Inputs
	reg clk;
	reg [31:0] address;
	reg mem_write;
	reg mem_read;
	reg [31:0] write_data;

	// Outputs
	wire [31:0] read_data;

	// Instantiate the Unit Under Test (UUT)
	DataMemory uut (
		.clk(clk), 
		.address(address), 
		.mem_write(mem_write), 
		.mem_read(mem_read), 
		.write_data(write_data), 
		.read_data(read_data)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		address = 0;
		write_data = 0;
		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
	always
	begin
	   #100;
	   clk=~clk;
	   
		mem_write = 0;
		mem_read = 1;
		
		#100;
		clk=~clk;
		
		#100;
		clk=~clk;
	   
		mem_write = 1;
		mem_read = 0;
		address = 4;
		write_data=16;
		
		#100;
		clk=~clk;
		
		#100;
		clk=~clk;

	   
		mem_write = 0;
		mem_read = 1;
		address = 4;
		
		#100;
		clk=~clk;
		

	end
      
endmodule

