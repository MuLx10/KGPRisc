`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:42:17 08/07/2018 
// Design Name: 
// Module Name:    mux7 
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
module mux7(
    input select,
    input [6:0] a0,
    input [6:0] a1,
    output wire [6:0] b
    );
	assign b =( select )?  a1 : a0 ;
endmodule
