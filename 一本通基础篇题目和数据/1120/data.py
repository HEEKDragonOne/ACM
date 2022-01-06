#!/usr/bin/env python

from cyaron import * # 引入CYaRon的库

for i in range(1,11):
    io = IO(file_prefix="problem", data_id=i) # test3.in, test3.out

    a = randint(1,10)
    b = randint(1,a)
    c = randint(1,a)
    io.input_writeln(a,b,c)

    b = choice("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ")
    _max = ati([1E3])
    _in = [ randint(-1000,_max[0]) for i in range(0,3)]
    io.output_gen("../std")
