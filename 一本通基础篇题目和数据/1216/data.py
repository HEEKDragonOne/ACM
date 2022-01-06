#!/usr/bin/env python

from cyaron import * # 引入CYaRon的库

for i in range(1,11):
    io = IO(file_prefix="problem", data_id=i) # test3.in, test3.out
    t = randint(1,10)
    for xx in range(0,t):
        a = randint(1,20)
        b = randint(1,20)
        io.input_writeln(a,b)
        x = "#.."
        m = []
        for k in range(0,b):
            _in = [ choice(x) for i in range(0,a)]
            m.append(_in)
        m[randint(1,b)-1][randint(1,a)-1] = '@'
        for k in range(0,b):
            io.input_writeln(''.join(m[k]))
    io.input_write(0,0)
    io.output_gen("../std")
