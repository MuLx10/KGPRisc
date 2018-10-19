get_bin = lambda x,n : ''.join(reversed( [str((x >> i) & 1) for i in range(n)] ) )

fout = open('DataMemory.mif','w')
n = int(raw_input('Number of elementts: '))
fout.write(get_bin(n,32)+'\n')
nos = map(int,raw_input().strip('\n').split(' '))
for no in nos:
    fout.write(get_bin(no,32)+'\n')
fout.close()
