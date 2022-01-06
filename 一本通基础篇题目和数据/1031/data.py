#!/usr/bin/env python

from cyaron import * # 引入CYaRon的库

for i in range(1,11):
    a = choice("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ")
    _max = ati([1E5])
    b = randint(10,_max[0])
    _in = [ randint(-1000,_max[0]) for i in range(0,1)]
    io = IO(file_prefix="problem", data_id=i) # test3.in, test3.out
    io.input_writeln(_in)
    io.output_gen("../std")
