`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:53:55 08/26/2018 
// Design Name: 
// Module Name:    array_multiplier 
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
module array_multiplier(
    input [7:0] a,
    input [7:0] b,
    output [15:0] product
    );
	
	wire [7:0] s1[7:0];
	wire [7:0]c;
	wire [7:0] s2[7:0]; 
	
	bit_product ins(a,b[0],s2[0]);
	ripple_carry_adder inst0(0,s2[0],0,s1[0],c[0]);
	assign product[0]=s1[0];
	generate
		genvar i;	
		for(i=1;i<8;i=i+1)
		begin : bb0
			bit_product instabit(a,b[i],s2[i]);
			ripple_carry_adder inst({c[i-1],s1[i-1][7:1]}, s2[i],0, s1[i], c[i]);
			assign product[i]=s1[i][0];
		end
		assign product[15:8] = {c[7],s1[7][7:1]};
	endgenerate
	
endmodule
