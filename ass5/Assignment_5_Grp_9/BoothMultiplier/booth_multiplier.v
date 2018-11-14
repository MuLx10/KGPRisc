`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:51:17 08/26/2018 
// Design Name: 
// Module Name:    booth_multiplier 
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
module booth_multiplier(
    input [5:0] a,
    input [5:0] b,
	 input load,
	 input clk,
    output wire[11:0] product,
	 output ready
    );
	 
	 reg [5:-1]q;
	 reg [3:0]count;
	 reg [5:0]m;
	 reg [5:0]Acc;
	 wire [5:0]sum;
	 wire [5:0]diff;
	 wire cout,c;
	 always @ (posedge clk)
	 begin
		if(load)
		begin
			Acc<=0;
			q[5:0]<=a;
			q[-1]<=0;
			m<=b;
			count<=0;	
		end
		else if(!ready)
		begin
			case(q[0:-1])
				2'b01 : {Acc,q}<={sum[5],sum,q[5:0]};
				2'b10 : {Acc,q}<={diff[5],diff,q[5:0]};
				default: {Acc,q}<={Acc[5],Acc,q[5:0]};
			endcase
			count <= count+1;
		end
	 end
	 ripple_carry_adder add(Acc,m,0,sum,cout);
	 ripple_carry_adder differ(Acc,~m,1,diff,c);
	 assign product = {Acc,q[5:0]};
	 assign ready = {count==6};
endmodule
