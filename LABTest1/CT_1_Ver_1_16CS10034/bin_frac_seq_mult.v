`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: IIT Kharagpur
// Engineer: Mehul Kumar Nirala
// Roll : 16CS10034
// Scenario : COA Lab Test
// 
// Create Date:    16:10:23 09/05/2018 
// Design Name: 
// Module Name:    bin_frac_seq_mult 
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



module bin_frac_seq_mult(
		input clk,
		input start,
		input[6:0] a,
		input[6:0] b,
		output done,
		output[12:0] product
	 );
   parameter N = 7;
	reg[N-1:0] A; 
	reg[N-1:0] Q, M;
	wire[N-1:0] AplusM;
	
	assign AplusM = A + M;
	
	counter m(clk, start, done);
	
	always@(posedge clk)
	begin
		if(start)
		begin
			A <= 7'b0;
			M <= b;
			Q <= a;
		end
		else if(~done)
		begin
			if(Q[0])
			begin
				{A, Q} <= {AplusM, Q[N-1:1]};
			end
			else		
			begin
				{A, Q} <= {A, Q[N-1:1]};
			end
		end
	end
	
	assign product = {A[N-1:0], Q};
	
endmodule

module counter(
		input clk,
		input start,
		output done
	);
      parameter N = 7;
		reg[8:0] count = 0;
		assign done = (count==N)? 1 : 0;
		always@(posedge clk)
		begin
			if(start)
			begin
				count <= 0;
			end
			else if (~done)
			begin
				count <= count+1;
			end
		end
endmodule
