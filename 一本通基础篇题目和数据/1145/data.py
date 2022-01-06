#!/usr/bin/env python

from cyaron import * # 引入CYaRon的库

for i in range(1,11):
    io = IO(file_prefix="problem", data_id=i) # test3.in, test3.out

    a = randint(1,1000)
    b = choice("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ")
    c = "0123456789"
    _max = ati([1E3])
    _in = [ choice(c) for i in range(0,randint(100,1000))]
    io.input_writeln(''.join(_in))
    io.output_gen("../std")
