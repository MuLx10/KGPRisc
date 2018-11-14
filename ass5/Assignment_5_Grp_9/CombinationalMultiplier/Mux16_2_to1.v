`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:52:57 08/26/2018 
// Design Name: 
// Module Name:    Mux16_2_to1 
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
module mux16_2_to_1(input s,input [15:0] a0,input [15:0] a1,output reg[15:0] out);
   always @(*)
	begin
		if(s==0)
			begin
			out=a0;
			end
		else
			begin
			out=a1;
			end
	end	
endmodule
