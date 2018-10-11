`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   23:10:50 10/09/2018
// Design Name:   ALU
// Module Name:   /home/nirala/Documents/grive/codes/Autumn2018/5thSem/COA/Spartan/KGPRisc/ALU_TB.v
// Project Name:  KGPRisc
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ALU
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////
 
module ALU_TB;

	// Inputs
	reg [2:0] alu_control;
	reg [31:0] operand0;
	reg [31:0] operand1;

	// Outputs
	wire [31:0] ALUResult;
	wire carryflag;
	wire signflag;
	wire overflowflag;
	wire zflag;

	// Instantiate the Unit Under Test (UUT)
	ArithmeticLogicUnit uut (
		.alu_control(alu_control), 
		.operand0(operand0), 
		.operand1(operand1), 
		.ALUResult(ALUResult), 
		.carryflag(carryflag), 
		.signflag(signflag), 
		.overflowflag(overflowflag), 
		.zflag(zflag)
	);
	integer i;
	initial begin
		// Initialize Inputs

		operand0 = 10;
		operand1 = 15;
		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
	always
	begin
		for(i=0; i<12; i=i+1)
		begin
         alu_control = i;
			#100;
		end
	end
      
endmodule

