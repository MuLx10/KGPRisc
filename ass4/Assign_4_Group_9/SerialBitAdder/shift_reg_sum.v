`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:03:19 08/16/2018 
// Design Name: 
// Module Name:    shift_reg_sum 
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
module shift_reg_sum(
    input clk,
    input rst,
	 input load,
    input  in,
    output reg[7:0] out
    );
	 
	reg[7:0] o;
	always @(posedge clk)
	begin
			if(rst || load)
				out=8'b0;
			else
				begin
					out={in,o[7:1]};
				end			
	end
	always @(negedge clk)
	begin
			if(rst || load)
				o<=8'b0;
			else
				o<=out;
	end
	endmodule
