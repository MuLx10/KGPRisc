`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:52:07 08/26/2018 
// Design Name: 
// Module Name:    combinational_multiplier 
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
module combinational_multiplier(
	input [7:0] a,
	input [7:0] b,
	output [15:0] product); 
	
	wire [7:0]x;
	wire [7:0]y;
	wire [15:0] temp;
	mux8_2_to_1 mux1(a[7],a,~a+1,x);
	mux8_2_to_1 mux2(b[7],b,~b+1,y);
	array_multiplier mult(x,y,temp);
	mux16_2_to_1 mux3(a[7]^b[7],temp,~temp+1,product);
endmodule
