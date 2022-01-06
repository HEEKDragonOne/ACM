#!/usr/bin/env python

from cyaron import * # 引入CYaRon的库

for i in range(1,11):
    io = IO(file_prefix="problem", data_id=i) # test3.in, test3.out

    k = randint(1,50)
    io.input_writeln(k)
    for k1 in range(0,k):
        w = randint(1,10000)
        io.input_writeln(w)
        s = randint(1,100)
        io.input_writeln(s)
        _in = [ randint(1,10000) for i in range(0,s*2)]
        io.input_writeln(_in)
    io.output_gen("../std")
