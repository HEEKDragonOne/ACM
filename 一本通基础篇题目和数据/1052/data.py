#!/usr/bin/env python

from cyaron import * # 引入CYaRon的库

for i in range(1,11):
    c= choice("ny")
    _max = ati([1500])
    _in = [ randint(100,_max[0]) for i in range(0,1)]
    io = IO(file_prefix="problem", data_id=i) # test3.in, test3.out
    io.input_writeln(_in[0],c)
    io.output_gen("../std")
