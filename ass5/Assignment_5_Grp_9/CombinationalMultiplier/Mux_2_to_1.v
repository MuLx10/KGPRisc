`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:55:26 08/26/2018 
// Design Name: 
// Module Name:    Mux_2_to_1 
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
module mux8_2_to_1(
    input select,
    input [7:0]a0,
    input [7:0]a1,
    output wire [7:0] b
    );
	 assign b = (select)? a1 : a0;
endmodule