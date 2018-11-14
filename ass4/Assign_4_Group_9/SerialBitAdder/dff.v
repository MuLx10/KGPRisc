`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:16:48 08/13/2018 
// Design Name: 
// Module Name:    dff 
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
module dff(
    input clk,
	 input rst,
	 input load,
	 input cin,
    input d,
    output reg q
    );

	
	always @(posedge clk)
	begin
	if(rst ||load )
		q = cin;
	else
		q = d;
	end

endmodule 
