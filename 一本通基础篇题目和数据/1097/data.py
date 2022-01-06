#!/usr/bin/env python

from cyaron import * # 引入CYaRon的库

for i in range(1,11):
    _max = ati([1E3])
    _in = [ randint(-1000,_max[0]) for i in range(0,3)]
    io = IO(file_prefix="problem", data_id=i) # test3.in, test3.out
    a = randint(3,11)
    b = randint(5,11)
    c = choice("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ")
    d = choice("01")
    io.input_writeln(a,b,c,d)
    io.output_gen("../std")
