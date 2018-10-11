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
module DataMemory(clk,address,mem_write,mem_read,write_data,read_data);

   parameter size=32, MemSize=32;
	input	clk;
	input	[size-1:0]	address;
	input mem_write, mem_read;
	input [size-1:0]	write_data;
	output reg [size-1:0]	read_data;
	
	reg	[size-1:0]	DMem[0:MemSize];
	integer i;
	initial
	begin
	   //	The D-Memory is initially loaded
		//$readmemb ("DMem.data", Imem);
		 for(i=0; i<MemSize; i=i+1)
            DMem[i] = 32'd0; 
	end
	
	always @(clk) 
	begin
		if (mem_read)
			read_data = DMem[address];	
		if (mem_write)	
			DMem[address] = write_data;
		$strobe("%t: DMEM3: %b ", $time,DMem[32'b00000000000000000000000000000011]);
	end
endmodule
