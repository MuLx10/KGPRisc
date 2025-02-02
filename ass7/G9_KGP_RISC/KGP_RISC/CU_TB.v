`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:40:23 10/10/2018
// Design Name:   ControlUnit
// Module Name:   /home/nirala/Documents/grive/codes/Autumn2018/5thSem/COA/Spartan/KGPRisc/CU_TB.v
// Project Name:  KGPRisc
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ControlUnit
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module CU_TB;

	// Inputs
	reg [5:0] opcode;

	// Outputs
	wire [2:0] alu_op;
	wire mem_read;
	wire mem_write;
	wire alu_src;
	wire mem_to_reg;
	wire reg_write;
	wire b;
	wire br;
	wire bz;
	wire bnz;
	wire bcy;
	wire bncy;
	wire bs;
	wire bns;
	wire bv;
	wire bnv;
	wire Call;
	wire Ret;

	// Instantiate the Unit Under Test (UUT)
	ControlUnit uut (
		.opcode(opcode), 
		.alu_op(alu_op), 
		.mem_read(mem_read), 
		.mem_write(mem_write), 
		.alu_src(alu_src), 
		.mem_to_reg(mem_to_reg), 
		.reg_write(reg_write), 
		.b(b), 
		.br(br), 
		.bz(bz), 
		.bnz(bnz), 
		.bcy(bcy), 
		.bncy(bncy), 
		.bs(bs), 
		.bns(bns), 
		.bv(bv), 
		.bnv(bnv), 
		.Call(Call), 
		.Ret(Ret)
	);

	initial begin
		// Initialize Inputs
		opcode = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
	integer i;
	always begin
		for(i=0; i<32; i=i+1)
		begin
            opcode = i; 
				#100;
		end
	end
      
endmodule

