#!/usr/bin/env python

from cyaron import * # 引入CYaRon的库

for i in range(1,11):
    io = IO(file_prefix="problem", data_id=i) # test3.in, test3.out

    t = randint(2,10)
    io.input_writeln(t)
    for t1 in range(0,t):
        n = randint(2,200)
        m = randint(2,200)
        io.input_writeln(n,m)
        b = "..#"
        s = []
        for k in range(0,n):
            _in = [ choice(b) for i in range(0,m)]
            s.append(_in)
        x = randint(1,n)
        y = randint(1,m)
        s[x-1][y-1] = 'S'

        x1 = randint(1,n)
        y1 = randint(1,m)
        while x1 == x and y1 == y:
            x1 = randint(1,n)
            y1 = randint(1,m)
        s[x1-1][y1-1] = 'E'

        for k in range(0,n):
            io.input_writeln(''.join(s[k]))
    io.output_gen("../std")
