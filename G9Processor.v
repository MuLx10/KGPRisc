`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:05:57 10/10/2018 
// Design Name: 
// Module Name:    G9Processor 
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
module G9Processor(clk);
	parameter	size=32,hsize=16,opsize=6, MemSize=512,RegFileSize=5;
	wire  [4:0] RA = 5'b11111;
	
	input	clk;
	
	wire [size-1:0] address;
	wire [size-1:0] instruction;
	
	wire [RegFileSize-1:0] read_reg_1;
	wire [RegFileSize-1:0] read_reg_2;
	wire [RegFileSize-1:0] write_register; 
	wire [RegFileSize-1:0] write_registeri;
	wire [size-1:0] write_data;
	wire [size-1:0]write_datai;
	wire [size-1:0] reg_read_data_1;
	wire [size-1:0] reg_read_data_2;
	wire [size-1:0] read_data_2;
	wire [size-1:0] RA_data;
	wire [size-1:0] temp;
	
	wire [size-1:0] pc;
	wire [size-1:0] pc_4;
	wire [size-1:0] pc_next;
	wire [size-1:0] pc_branch;
	
	wire [size-1:0] pc_bz;
	wire [size-1:0] pc_bnz;
	wire [size-1:0] pc_bcy;
	wire [size-1:0] pc_bncy;
	wire [size-1:0] pc_bs;
	wire [size-1:0] pc_bns;
	wire [size-1:0] pc_bv;
	wire [size-1:0] pc_bnv;
	wire [size-1:0] pc_b;
	wire [size-1:0] pc_br;

	
	wire reset = 0,wea=0;
	
	wire [opsize-1:0] OpCode;
	wire [2:0] AluOp;
	
	wire [hsize-1:0] imm16;
	wire [size-1:0] imm32;
	
	wire [size-1:0] ALUResult;
	wire 	 carryflag,	 signflag, overflowflag,zflag ,branch;
	
	wire mem_read,mem_write,alu_src,mem_to_reg,reg_write,b,br,bz,bnz,bcy,bncy,bs,bns,bv,bnv,Call,Ret;
	wire [size-1:0] read_data;
	
	
	
	ProgramCounter PC(.clk(clk), .reset(reset), .branch(branch), .pc_next(pc_next), .pc(pc));

	InstructionMemory IMem(.clka(clk),
								  .wea(wea), 
								  .addra(pc), 
								  .dina(32'b0), 
								  .douta(instruction));
						
	
	
	
	assign imm16 = instruction[15:0];//imm
	SignExtend SE(imm16, imm32);
	
	/*/////Debug
	output reg  [size-1:0] instr;
	output reg	[size-1:0] addr;
	always begin
		addr=address;
		instr=instruction;
	end
	/////*/
	assign OpCode = instruction[31:26];//opp
	
	ControlUnit CU(OpCode, AluOp,
						mem_read,mem_write,alu_src,mem_to_reg,reg_write,
						b,br,bz,bnz,bcy,bncy,bs,bns,bv,bnv,Call,Ret);
						
	assign read_reg_1 = (Ret) ? RA : instruction[25:21];//rs
   assign read_reg_2 = instruction[20:16];//rt
	
	assign write_registeri = (Call)? RA : instruction[25:21];//rs<-rs op rt
	assign write_register = (mem_to_reg)? read_reg_2:write_registeri;
	
	RegisterFile RF(.clk(clk),
						 .reg_write(reg_write|Call|mem_to_reg),
						 .read_reg_1(read_reg_1),.read_reg_2(read_reg_2),
						 .write_register(write_register),
						 .write_data(write_data),
						 .read_data_1(reg_read_data_1),.read_data_2(reg_read_data_2));
	
	 /*always @(clk) begin
	   $strobe("%t: IMem :%b   PC: %b ", $time, instruction,pc);
		$strobe("%t: rs(%b): %b ", $time,read_reg_1,reg_read_data_1);
		$strobe("%t: rt(%b): %b ", $time,read_reg_2,reg_read_data_2);
		$strobe("%t: imm: %b ", $time,imm32);
	 end*/
	// Arithmetic



	
	
	assign read_data_2 = (alu_src==1'b1) ? imm32 : reg_read_data_2;
						
	ArithmeticLogicUnit ALU (
		.alu_control(AluOp), 
		.operand0(reg_read_data_1), 
		.operand1(read_data_2), 
		.ALUResult(ALUResult), 
		.carryflag(carryflag), 
		.signflag(signflag), 
		.overflowflag(overflowflag), 
		.zflag(zflag)
	 );
	
	 assign pc_4 = pc + 1;
	 assign pc_branch = pc_4 + imm32;
	 
	 assign pc_bz = (zflag & bz == 1'b1) ? pc_branch : pc_4;
	 assign pc_bnz = (~zflag & bnz == 1'b1) ? pc_branch :pc_bz;
	 
	 assign pc_bcy = (carryflag & bcy == 1'b1) ? pc_branch : pc_bnz;
	 assign pc_bncy = (~carryflag & bncy == 1'b1) ? pc_branch : pc_bcy;
	 
	 assign pc_bs = (signflag & bs == 1'b1) ? pc_branch : pc_bncy;
	 assign pc_bns = (~signflag & bns == 1'b1) ? pc_branch : pc_bs;
	 
	 assign pc_bv = (overflowflag & bv == 1'b1) ? pc_branch : pc_bns;
	 assign pc_bnv = (~overflowflag & bnv == 1'b1) ? pc_branch : pc_bv;
	 
	 assign pc_b = (b == 1'b1)?pc_branch:pc_bnv;
	 assign pc_br = (br == 1'b1)?reg_read_data_1:pc_b;
	 
	 assign branch = b | br | bz | bnz | bcy | bncy | bs | bns | bv | bnv | Ret ;
	 
	 /*RegisterFile RF_ClRt(.clk(clk),
					 .reg_write(Call),
					 .read_reg_1(RA),.read_reg_2(RA),
					 .write_register(RA),
					 .write_data(pc_4),
					 .read_data_1(RA_data),.read_data_2(temp));*/
				 
	 assign pc_next = (Ret)?reg_read_data_1:pc_br;
	 	
	 DataMemory DMem (
		.clk(clk), 
		.address(ALUResult), // imm +(rs)
		.mem_write(mem_write), 
		.mem_read(mem_read), 
		.write_data(reg_read_data_2), //(rt)
		.read_data(read_data)
	 );
	 assign write_datai = (mem_to_reg == 1)?  read_data: ALUResult;
	 assign write_data = (Call)?pc_4:write_datai;
	 
	 always @(clk) begin
	   $strobe("\n\n");
	   $strobe("%t: PC:        %d ", $time, pc);
		$strobe("%t: IMem :     %b ", $time, instruction);
		$strobe("%t: rs(%b):    %d ", $time,read_reg_1,reg_read_data_1);
		$strobe("%t: rt(%b):    %d ", $time,read_reg_2,reg_read_data_2);
		$strobe("%t: AluOp:     %b ", $time,AluOp);
		$strobe("%t: ALUResult  %d ", $time, ALUResult);
		$strobe("%t: PC_NXT:    %d ", $time,pc_next);
	 end
	
endmodule
