#!/usr/bin/env python

from cyaron import * # 引入CYaRon的库

for i in range(1,11):
    a = choice("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ")
    _max = ati([1E3])
    b = randint(10,_max[0])
    _in = [ round(randint(10,_max[0])*random(),8) for i in range(0,2)]
    __in = [ round(randint(10,_max[0])*random(),8) for i in range(0,2)]
    io = IO(file_prefix="problem", data_id=i) # test3.in, test3.out
    io.input_writeln(_in+__in)
    io.output_gen("../std")
