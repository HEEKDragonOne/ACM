#!/usr/bin/env python

from cyaron import * # 引入CYaRon的库

for i in range(1,11):
    io = IO(file_prefix="problem", data_id=i) # test3.in, test3.out

    b = "..#"
    t = randint(1,5)
    for k in range(0,t):
        m = randint(1,20)
        n = randint(1,20)
        io.input_writeln(m,n)
        s = []
        for x1 in range(0,m): 
            _in = [choice(b) for i in range(0,n)]
            s.append(_in)
        x = randint(0,m-1)
        y = randint(0,n-1)
        s[x][y] = '@'

        x = randint(0,m-1)
        y = randint(0,n-1)
        s[x][y] = '*'
        for k1 in range(0,m):
            io.input_writeln(''.join(s[k1]))

    io.input_writeln(0,0)
    io.output_gen("../std")
