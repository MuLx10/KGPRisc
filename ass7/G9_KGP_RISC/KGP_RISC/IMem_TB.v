`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   23:06:10 10/10/2018
// Design Name:   InstructionMemory
// Module Name:   /home/nirala/Documents/grive/codes/Autumn2018/5thSem/COA/Spartan/G9Processor/IMem_TB.v
// Project Name:  G9Processor
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: InstructionMemory
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module IMem_TB;

	// Inputs
	reg clka;

	reg [6:0] addra;


	// Outputs
	wire [31:0] douta;

	// Instantiate the Unit Under Test (UUT)
	InstructionMemory uut (
		.clka(clka), 
 
		.addra(addra), 
		.douta(douta)
	);

	initial begin
		// Initialize Inputs
		clka = 0;

		addra = 0;


		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
	integer i;
	always
	begin
		#100;
		clka=~clka;
		addra = addra+1;
		#100;
		clka=~clka;
		


	end
      
endmodule

