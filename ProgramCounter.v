`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:42:37 10/09/2018 
// Design Name: 
// Module Name:    PCounter 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module ProgramCounter(clk, reset,branch, pc_next, pc);
	parameter	size=32;
	input		clk,branch;
	input		reset;
	input    [size-1:0] pc_next;
	output	[size-1:0]	pc;

	//	The outputs are defined as registers too
	reg	[size-1:0]	pc;
	
	initial 
	begin
		pc = -1;
	end

	always @(posedge clk)
	begin
		if (reset)
			pc = -1;
		if (branch)
			pc = pc_next;
		else
			pc = pc+1;
	end
	/*always @(clk)
	begin
		$strobe("%t: PC: %d, PC_NXT: %d, BRANCH %d ", $time, pc,pc_next,branch);
	end*/
endmodule
