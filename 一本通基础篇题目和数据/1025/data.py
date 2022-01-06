#!/usr/bin/env python

from cyaron import * # 引入CYaRon的库

for i in range(0,10):
    _max = ati([1E3])
    _in = [ round(randint(-1000,_max[0])*random(),16) for i in range(0,1)]
    io = IO(file_prefix="problem", data_id=i) # test3.in, test3.out
    io.input_writeln(_in)
    io.output_gen("../std")
