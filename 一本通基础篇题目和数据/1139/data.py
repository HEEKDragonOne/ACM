#!/usr/bin/env python

from cyaron import * # 引入CYaRon的库

for i in range(1,11):
    io = IO(file_prefix="problem", data_id=i) # test3.in, test3.out

    a = randint(1,100)
    io.input_writeln(a)
    b = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZ01234567890123456789----------"
    for k in range(0,a):
        _in = [ choice(b) for i in range(0,randint(2,20))]
        io.input_writeln(''.join(_in))
    io.output_gen("../std")
