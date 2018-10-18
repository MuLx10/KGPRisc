`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:37:59 10/10/2018 
// Design Name: 
// Module Name:    RegisterFile 
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
module RegisterFile(clk,
							reg_write, 
							read_reg_1,read_reg_2,
							write_register,
							write_data,
							read_data_1,read_data_2);
	 parameter size=32;
	 input    clk;
	 // write port
	 input  reg_write;
	 input  [4:0] write_register;
	 input  [size-1:0] write_data;
	 //read port 1
	 input  [4:0]  read_reg_1;
	 output   [size-1:0] read_data_1;
	 //read port 2
	 input  [4:0]  read_reg_2;
	 output  [size-1:0] read_data_2;

	 reg [size-1:0] RF [size:0];
	 integer i,j;
	 // write port
	 //reg [2:0] i;
	 assign read_data_2 = RF[read_reg_2];
	 assign read_data_1 = RF[read_reg_1];
	 
	 initial begin
	  for(i=0;i<size;i=i+1)
			RF[i] = 32'b00000000000000000000000000000000;
	 end
	 always @(posedge clk)
	 begin
		if(reg_write) 
		   RF[write_register] <= write_data;
		//$strobe("%t: Write_reg %b Write Data %b", $time, reg_write, RF[write_register]);
	 end

		//$strobe("%t: Read Values1 RF(%d)  %b ", $time, read_reg_1, read_data_1);
		//$strobe("%t: Read Values2 RF(%d)  %b ", $time, read_reg_2, read_data_2);
	 always @(clk)
	 begin
		$strobe("%t: RF(%d)  %b ", $time,0, RF[0]);
		$strobe("%t: RF(%d)  %b ", $time,1, RF[1]);
		$strobe("%t: RF(%d)  %b ", $time,2, RF[2]);
		$strobe("%t: RF(%d)  %b \n\n", $time,31, RF[31]);
	 end
endmodule
