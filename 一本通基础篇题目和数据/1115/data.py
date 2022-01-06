#!/usr/bin/env python

from cyaron import * # 引入CYaRon的库

for i in range(1,11):
    io = IO(file_prefix="problem", data_id=i) # test3.in, test3.out

    a = randint(1,10000)
    io.input_writeln(a)
    b = choice("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ")
    _max = ati([1E4])
    _in = [ randint(1,_max[0]) for i in range(0,a)]
    io.input_writeln(_in)
    io.output_gen("../std")
