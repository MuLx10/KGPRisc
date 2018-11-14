`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:17:51 08/08/2018 
// Design Name: 
// Module Name:    hybrid_adder 
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
`include "carry_look_ahead_adder.v"
module hybrid_adder(
    input [7:0] a,
    input [7:0] b,
    input cy_in,
    output [7:0] sum,
    output cy_out
    );
	 wire cout;
	 carry_look_ahead_adder c0(.a(a[3:0]),.b(b[3:0]),.cin(cy_in),.sum(sum[3:0]),.cout(cout));
	 carry_look_ahead_adder c1(.a(a[7:4]),.b(b[7:4]),.cin(cout),.sum(sum[7:4]),.cout(cy_out));


endmodule
