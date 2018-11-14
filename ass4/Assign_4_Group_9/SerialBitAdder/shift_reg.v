`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:14:14 08/13/2018 
// Design Name: 
// Module Name:    shift_reg 
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

module shift_reg(
    input clk,
    input rst,
    input load,
    input [7:0] in,
    output reg[7:0] out
    );


	always @(posedge clk)
	begin
			if(rst)
				out=8'b0;
			else
				begin
				if(load)out=in;
				else
					out=out>>1;				
				end			
	end
	
endmodule



