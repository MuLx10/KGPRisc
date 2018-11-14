`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:01:08 08/13/2018 
// Design Name: 
// Module Name:    bitSerialAdder 
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
module bitSerialAdder(
    input clk,
    input rst,
    input load,
    input [7:0] a,
    input [7:0] b,
    input cin,
    output [7:0] sum,
    output cout
    );

	wire [7:0] x,z;
	wire c_out,su;

	shift_reg sr1(clk,rst,load,a,x);                      //shifts the input a
	shift_reg sr2(clk,rst,load,b,z);                      //shifts the input b
	dff ff(clk,rst,load,cin,c_out,cout);
	adder fa(x[0],z[0],cout,su,c_out);             //1 bit full adder
	shift_reg_sum sr3(clk,rst,load,su,sum);
	
endmodule 
