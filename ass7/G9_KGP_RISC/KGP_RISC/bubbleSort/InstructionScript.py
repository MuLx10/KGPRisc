OPCODE = {}
OPCODE['add'] = "000000"
OPCODE['addi'] = "000001"
OPCODE['comp'] = "000010"
OPCODE['compi'] = "000011"

OPCODE['and'] = "000100"
OPCODE['xor'] = "000101"

OPCODE['lw'] = "001000"
OPCODE['sw'] = "001001"

OPCODE['shll'] = "001100"
OPCODE['shrl'] = "001101"
OPCODE['shllv'] = "001110"

OPCODE['shrlv'] = "010000"
OPCODE['shra'] = "010001"
OPCODE['shrav'] = "010010"

OPCODE['b'] = "010100"
OPCODE['br'] = "010101"
OPCODE['bz'] = "010110"
OPCODE['bnz'] = "010111"

OPCODE['bcy'] = "011000"
OPCODE['bncy'] = "011001"
OPCODE['bs'] = "011010"
OPCODE['bns'] = "011011"

OPCODE['bv'] = "011100"
OPCODE['bnv'] = "011101"
OPCODE['call'] = "011110"
OPCODE['ret'] = "011111"

get_bin = lambda x,n : ''.join(reversed( [str((x >> i) & 1) for i in range(n)] ) )

registers = {}
registers['$zero'] = get_bin(0,5)
registers['$rs'] = get_bin(1,5)
registers['$rt'] = get_bin(2,5)
registers['$ra'] = get_bin(31,5)
registers['$sp'] = get_bin(30,5)
for i in range(4):
    registers['$a'+str(i)] = get_bin(2+i,5) 
    registers['$v'+str(i)] = get_bin(6+i,5) 
for i in range(8):
    registers['$t'+str(i)] = get_bin(10+i,5) 
    registers['$s'+str(i)] = get_bin(18+i,5) 

zero_16 = '0'*16
zero_5  = '0'*5

op1 = ["add", "comp", "and", "xor", "shllv", "shrlv", "shrav", "lw", "sw"]
op2 = ["addi", "compi", "shll", "shrl", "shra", "br"]
op3 = ["b", "bz", "bnz", "bcy", "bncy", "bs", "bns", "bv", "bnv"]
 
import sys
filename = sys.argv[1]
instructions = []
instr_cnt = 0
with open(filename,'r') as instrfile:
    while True:
        line = instrfile.readline()
        if not line:
            break
        if '#' in line[:3]:
            continue
        line = line.split('#')[0].strip(' ').strip('\n').split(' ')
        op = line[0]
        args = ' '.join(line[1:]).replace(' ','')

        if op in op1:
            rs = args.split(',')[0].strip(' ')
            rt = args.split(',')[1].strip(' ')
            if op in ['lw','sw']:
                imm = rt.split('(')[0].strip(' ')
                if not imm:
                    imm = 0
                rt = rt.split('(')[1].strip(' ').split(')')[0].strip(' ')
                rs,rt = rt,rs
                instr = OPCODE[op]+registers[rs]+registers[rt]+get_bin(int(imm),16)
            else:
                instr = OPCODE[op]+registers[rs]+registers[rt]+zero_16

        if op in op2:
            rs = args.split(',')[0].strip(' ')
            try:
                imm = args.split(',')[1].strip(' ')
            except:
                imm = 0
            instr = OPCODE[op]+registers[rs]+zero_5+get_bin(int(imm),16)

        if op in op3:
            imm = args.split(' ')[0].strip(' ')
            instr = OPCODE[op]+zero_5+zero_5+get_bin(int(imm),16)

        if op in ["Call", "Ret"]:
            ra = registers['ra']
            instr = OPCODE[op]+registers[ra]+zero_5+zero_16

        print(' '.join(line)+': '+instr)
        instructions.append(instr)
        instr_cnt+=1




for i in range(32-instr_cnt):
    instructions.append('1'*32 )


fout = open('BubbleSortIMem.coe','w')
fout2 = open('IMem.mif','w')
fout.write('memory_initialization_radix = 2;,\nmemory_initialization_vector = \n')
for e,x in enumerate(instructions[:-1]):
    fout.write(x+',\n')
    fout2.write('IMem['+str(e)+"] = 32'b"+x+';\n')

fout.write(instructions[-1]+';')
fout2.write('IMem['+str(len(instructions)-1)+"] = 32'b"+x+';\n')

fout.close()
fout2.close()