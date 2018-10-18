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
	parameter	size=32, MemSize=1024;
	input		clka,wea;
	input	[size-1:0]	addra;
	input	[size-1:0]	dina;
	output [size-1:0]	douta;
	reg	[size-1:0]	IMem[0:MemSize-1];	initial
	begin
		$readmemb ("InstructionMemory.mif", IMem);
		 /*for(i=0; i<MemSize; i=i+1)
            IMem[i] = 32'b0000000000000000000000000000000;
				
		 IMem[1] = 32'b00100100010000110000000000000011; //Sw
		 IMem[2] = 32'b00100000010000010000000000000011; //LW
		 IMem[3] = 32'b00000000010000010000000000000011;*/
		 //IMem[1]	= 32'b00111000001000110000000000000000; //shllv
		 //IMem[2]	= 32'b00110000001000000000000000000011; //shll	
       //IMem[3]	= 32'b00110100001000000000000000000011; //shrl			 
		 //IMem[1] = 32'b01010000000000000000000000000100;IMem[4] = 32'd0;   //b
		 //IMem[3] = 32'b01010111111000000000000000000000; // br
		 //IMem[0] = 32'b01111000000111110000000000000000; // Call
		 //IMem[7] = 32'b01111100000111110000000000000000; //Ret
	end
	

	assign  douta = IMem[addra];


endmodule
