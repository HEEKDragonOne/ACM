#!/usr/bin/env python

from cyaron import * # 引入CYaRon的库

for i in range(1,11):
    io = IO(file_prefix="problem", data_id=i) # test3.in, test3.out
    m = randint(20,300)
    n = randint(1,100)
    io.input_writeln(m)
    io.input_writeln(n)
    _max = ati([50])
    _in = [ randint(0,_max[0]) for i in range(0,n)]
    io.input_writeln(_in)
    io.output_gen("../std")
