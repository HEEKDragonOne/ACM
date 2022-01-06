#!/usr/bin/env python

from cyaron import * # 引入CYaRon的库

for i in range(1,11):
    io = IO(file_prefix="problem", data_id=i) # test3.in, test3.out

    t = randint(1,1000)
    io.input_writeln(t)
    for k1 in range(0,t):
        n = randint(1,100)
        k = randint(1,1000)
        io.input_writeln(n,k)
        _in = [randint(1,1000000) for i in range(0,n)]
        _in.sort()
        io.input_writeln(_in)
        _in = [randint(1,1000) for i in range(0,n)]
        io.input_writeln(_in)
    io.output_gen("../std")
