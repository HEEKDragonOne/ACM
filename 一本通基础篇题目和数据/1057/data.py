#!/usr/bin/env python

from cyaron import * # 引入CYaRon的库

for i in range(1,11):
    _max = ati([1E3])
    _in = [ randint(-100,_max[0]) for i in range(0,2)]
    c = choice("+-*/")
    io = IO(file_prefix="problem", data_id=i) # test3.in, test3.out
    io.input_writeln(_in[0],_in[1],c)
    io.output_gen("../std")
