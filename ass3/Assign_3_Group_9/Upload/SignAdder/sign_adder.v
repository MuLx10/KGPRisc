//Chelsi Raheja 16CS10013
//Mehul Nirala 16CS10034
// group 9
// Assignment3 _ problem1

`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:58:37 08/07/2018 
// Design Name: 
// Module Name:    sign_adder 
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
`include "mux7.v"
`include "mux1.v"
`include "adder.v"
`include "twos_complement.v"

module sign_adder(
    input [7:0] a,
    input [7:0] b,
    output wire [8:0] sum
    );
	 
	 
	 wire sign_xor;
	 wire sign_xor_not;
	 xor xor1(sign_xor, a[7], b[7]);
	 
	 wire [6:0] a_complement;
	 wire [6:0]	b_complement;
	 
	 assign a_complement = ~(a[6:0]);
	 assign b_complement = ~(b[6:0]);
	 
	 wire [6:0] a_output;
	 wire [6:0] b_output;
	 wire [7:0] c;
	 
	 mux7 mux7a(.select(a[7] & sign_xor),.a0(a[6:0]),.a1(a_complement[6:0]),.b(a_output));
	 mux7 mux7b(.select(b[7] & sign_xor),.a0(b[6:0]),.a1(b_complement[6:0]),.b(b_output));
	 
	 adder main_adder(.a(a_output),.b(b_output),.cin(sign_xor),.sum(c));
	 assign sign_xor_not = ~sign_xor;
	 
	 wire c_mux_select;
	 wire [6:0]c_complement;
	 wire c_opp_sign;
	 assign c_opp_sign = ~c[7];
	 
	 or or1(c_mux_select, sign_xor_not, c[7]);
	 twos_complement two_complement_1(.a(c[6:0]),.a_complement(c_complement[6:0]));
	 mux7 mux7c(.select(c_mux_select),.a1(c[6:0]),.a0(c_complement[6:0]), .b(sum[6:0]));
	 mux1 mux1a(.select(sign_xor_not), .a1(c[7]), .a0(0), .b(sum[7]));
	 mux1 mux1b(.b(sum[8]),.select(sign_xor),.a0(a[7]),.a1(c_opp_sign));
	 
endmodule




