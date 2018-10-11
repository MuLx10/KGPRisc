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
	reg wea;
	reg [31:0] addra;
	reg [31:0] dina;

	// Outputs
	wire [31:0] douta;

	// Instantiate the Unit Under Test (UUT)
	InstructionMemory uut (
		.clka(clka), 
		.wea(wea), 
		.addra(addra), 
		.dina(dina), 
		.douta(douta)
	);

	initial begin
		// Initialize Inputs
		clka = 0;
		wea = 0;
		addra = 0;
		dina = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
	integer i;
	always
	begin
		for(i=0;i<32;i=i+1)
		begin
			addra = i;
			clka=~clka;
			#100;
			clka=~clka;
			#100;
		end

	end
      
endmodule

