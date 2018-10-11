`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:27:32 10/10/2018 
// Design Name: 
// Module Name:    SignExtend 
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
module SignExtend(input [15:0] imm16, output reg [31:0] imm32);
	 always @( * ) 
	 begin
			imm32[31:0] = { {16{imm16[15]}},imm16[15:0] };
	 end
endmodule
