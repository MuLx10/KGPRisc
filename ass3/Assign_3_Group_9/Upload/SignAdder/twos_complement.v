`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:05:34 08/07/2018 
// Design Name: 
// Module Name:    twos_complement 
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
module twos_complement(
    input [6:0] a,
    output wire [6:0] a_complement
    );
	assign a_complement = (~a) + 1;

endmodule
