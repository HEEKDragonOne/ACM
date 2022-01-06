#!/usr/bin/env python

from cyaron import * # 引入CYaRon的库

for i in range(1,11):
    n = randint(1,18)
    _max = ati([10])
    io = IO(file_prefix="problem", data_id=i) # test3.in, test3.out

    io.input_writeln(n)
    for k in range(0,n):
        _in = [ randint(0,_max[0]) for i in range(0,3)]
        io.input_writeln(_in)
    io.output_gen("../std")
