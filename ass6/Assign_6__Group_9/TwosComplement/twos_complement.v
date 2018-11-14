`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:50:20 08/29/2018 
// Design Name: 
// Module Name:    twos_complement 
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
module twos_complement(
		input in,
		input clk,
		input reset,
		output reg out
    );
	 reg invert;
	 always@(posedge clk)
	 begin
		 if(reset)invert=0;
		 if(invert)out = ~in;
		 else
		 begin
			if(in)
				invert=1;
			out=in;
		 end
	 end
endmodule
