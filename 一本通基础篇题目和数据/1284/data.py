#!/usr/bin/env python

from cyaron import * # 引入CYaRon的库

for i in range(1,11):
    io = IO(file_prefix="problem", data_id=i) # test3.in, test3.out

    t = randint(1,10)
    io.input_writeln(t)
    for k in range(0,t):
        r = randint(1,100)
        c = randint(1,100)
        io.input_writeln(r,c)
        for k1 in range(0,r):
            _max = ati([1E3])
            _in = [ randint(0,_max[0]) for i in range(0,c)]
            io.input_writeln(_in)
    io.output_gen("../std")
