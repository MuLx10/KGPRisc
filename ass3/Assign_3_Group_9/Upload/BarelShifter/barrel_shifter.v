//Chelsi Raheja 16CS10013
//Mehul Nirala 16CS10034
//Asignment 3 problem 2
//Group 9
`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    05:40:31 08/08/2018 
// Design Name: 
// Module Name:    barrel_shifter 
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
`include "mux8.v"
module barrel_shifter(in,shift,direction,out);
	input[7:0] in;
	input wire[2:0] shift;
	input direction;
	output wire[7:0] out;
	wire[7:0] out1;
	wire[7:0] out2;
	wire[7:0] out_r;
	wire[7:0] out3;
	wire[7:0] out4;
	wire[7:0] out_l;
	wire[7:0] out_shifted;

	wire s0,s1,s2;
	assign s0=shift[0];
	assign s1=shift[1];
	assign s2=shift[2];
	
	mux8 m1(.select(s0), .a0(in), .a1({in[0],in[7:1]}), .b(out1));
	mux8 m2(.select(s1), .a0(out1), .a1({out1[1:0],out1[7:2]}), .b(out2));
	mux8 m3(.select(s2), .a0(out2), .a1({out2[3:0],out2[7:4]}), .b(out_l));
	
	mux8 m4(.select(s0), .a0(in), .a1({in[6:0],in[7]}), .b(out3));
	mux8 m5(.select(s1), .a0(out3), .a1({out3[5:0],out3[7:6]}), .b(out4));
	mux8 m6(.select(s2), .a0(out4), .a1({out4[3:0],out4[7:4]}), .b(out_r));
	
	mux8 m7(.select(direction), .a0(out_r), .a1(out_l), .b(out_shifted));
	assign out = out_shifted;
endmodule
