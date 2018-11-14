`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:21:09 08/29/2018 
// Design Name: 
// Module Name:    multiple_of_3 
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
module multiple_of_3(
		input in,
		input clk,
		input reset,
		output reg out
    );
	 reg [1:0] state;
	 always@(posedge clk)
	 begin
	    if(reset)state=0;
		 case (state)
		      0: begin
						if(in)
						begin
							state=1;
							out=0;
						end
						else
							out = 1;
					end
				1: begin
						if(in)
						begin
							state=0;
							out=1;
						end
						else
						begin
							out = 0;
							state=2;
						end
					end
				2: begin
						if(in)
						begin
							out=0;
							state=2;
						end
						else
						begin
							out = 0;
							state = 1;
						end
					end
		 endcase
	 end



endmodule
