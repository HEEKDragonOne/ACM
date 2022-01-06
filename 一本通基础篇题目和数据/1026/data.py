#!/usr/bin/env python

from cyaron import * # 引入CYaRon的库

for i in range(0,10):
    a = choice("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ")
    _max = ati([1E5])
    b = randint(10,_max[0])
    _in = [ round(randint(-1000,_max[0])*random(),8) for i in range(0,1)]
    __in = [ round(randint(-1000,_max[0])*random(),13) for i in range(0,1)]
    io = IO(file_prefix="problem", data_id=i) # test3.in, test3.out
    io.input_writeln(a,b,_in[0],__in[0])
    io.output_gen("../std")
