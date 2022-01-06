#!/usr/bin/env python

from cyaron import * # 引入CYaRon的库

for i in range(1,11):
    io = IO(file_prefix="problem", data_id=i) # test3.in, test3.out

    io.input_writeln(1)
    n = randint(2,50000)
    io.input_writeln(n)
    _max = ati([1E4])
    _in = [ randint(-10000,_max[0]) for i in range(0,n)]
    io.input_writeln(_in)
    io.output_gen("../std")
