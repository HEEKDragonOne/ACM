#!/usr/bin/env python

from cyaron import * # 引入CYaRon的库

for i in range(1,11):
    io = IO(file_prefix="problem", data_id=i) # test3.in, test3.out

    _max = ati([1E100])
    _in = [ randint(100,_max[0]) for i in range(0,1)]
    io.input_writeln(_in)
    _in = [ randint(100,_max[0]) for i in range(0,1)]
    io.input_write(_in)

    io.output_gen("../std")
