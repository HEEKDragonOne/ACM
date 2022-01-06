#!/usr/bin/env python

from cyaron import * # 引入CYaRon的库

for i in range(1,11):
    io = IO(file_prefix="problem", data_id=i) # test3.in, test3.out
    t = randint(1,10)
    for xx in range(0,t):
        a = randint(1,8)
        b = randint(1,a)
        io.input_writeln(a,b)
        x = "#.."
        m = []
        for k in range(0,a):
            _in = [ choice(x) for i in range(0,a)]
            m.append(_in)
        for k in range(0,a):
            io.input_writeln(''.join(m[k]))
    io.input_write(-1,-1)
    io.output_gen("../std")
