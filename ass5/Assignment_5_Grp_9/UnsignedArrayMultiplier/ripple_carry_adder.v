`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:47:36 08/08/2018 
// Design Name: 
// Module Name:    ripple_carry_adder 
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
`include "adder.v"
module ripple_carry_adder(
    input [7:0] a,
    input [7:0] b,
    input cy_in,
    output [7:0] sum,
    output cy_out
    );
	 wire cout,cout1,cout2,cout3,cout4,cout5,cout6;
	 adder ad0(.a(a[0]),.b(b[0]), .cin(cy_in), .cout(cout), .s(sum[0]));
	 adder ad1(.a(a[1]),.b(b[1]), .cin(cout), .cout(cout1), .s(sum[1]));
	 adder ad2(.a(a[2]),.b(b[2]), .cin(cout1), .cout(cout2), .s(sum[2]));
	 adder ad3(.a(a[3]),.b(b[3]), .cin(cout2), .cout(cout3), .s(sum[3]));
	 adder ad4(.a(a[4]),.b(b[4]), .cin(cout3), .cout(cout4), .s(sum[4]));
	 adder ad5(.a(a[5]),.b(b[5]), .cin(cout4), .cout(cout5), .s(sum[5]));
	 adder ad6(.a(a[6]),.b(b[6]), .cin(cout5), .cout(cout6), .s(sum[6]));
    adder ad7(.a(a[7]),.b(b[7]), .cin(cout6), .cout(cy_out), .s(sum[7]));

endmodule
