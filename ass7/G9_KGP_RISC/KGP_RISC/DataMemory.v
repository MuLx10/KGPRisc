`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:38:59 10/09/2018 
// Design Name: 
// Module Name:    DMem 
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
module DataMemory(clk,reset,address,mem_write,mem_read,write_data,read_data);

   parameter size=32, MemSize=32;
	input	clk;
	input	reset;
	input	[size-1:0]	address;
	input mem_write, mem_read;
	input [size-1:0]	write_data;
	output  [size-1:0]	read_data;
	
	reg	[size-1:0]	DMem[0:MemSize];


	assign read_data = DMem[address];

	always @(posedge clk ) 
	begin
		if(reset)
		begin
			DMem[0] = 10;
			DMem[1] = 23;
			DMem[2] = 1023;
			DMem[3] = 6;
			DMem[4] = 45;
			DMem[5] = 7;
			DMem[6] = 89;
			DMem[7] = 24;
			DMem[8] = 74;
			DMem[9] = 32;
			DMem[10] = 2;
		end
		if (mem_write)	
			DMem[address] = write_data;
	end	
endmodule
