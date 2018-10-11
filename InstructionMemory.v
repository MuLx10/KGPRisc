`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:14:30 10/09/2018 
// Design Name: 
// Module Name:    IMem 
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
module InstructionMemory(clka, wea, addra, dina, douta);
	parameter	size=32, MemSize=32;
	input		clka,wea;
	input	[size-1:0]	addra;
	input	[size-1:0]	dina;
	output reg[size-1:0]	douta;
	reg	[size-1:0]	IMem[0:MemSize-1];
   integer i;
	initial
	begin
		//$readmemb ("Imem.data", Imem);
		 for(i=0; i<MemSize; i=i+1)
            IMem[i] = 32'b00000000001000100000000000000000;
	end
	
	always @(clka) 
	begin
		  douta = IMem[addra];
	end

endmodule
