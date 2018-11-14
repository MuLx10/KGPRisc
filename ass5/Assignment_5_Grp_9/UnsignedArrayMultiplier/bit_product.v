`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:23:27 08/26/2018 
// Design Name: 
// Module Name:    bit_product 
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
module bit_product(
    input [7:0] a,
    input b,
    output [7:0] out
    );
	 
	 assign out =( b )?  a : 0 ;


endmodule
