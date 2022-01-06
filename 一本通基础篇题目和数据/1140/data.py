#!/usr/bin/env python

from cyaron import * # 引入CYaRon的库

for i in range(1,11):
    io = IO(file_prefix="problem", data_id=i) # test3.in, test3.out

    a = randint(1,1000)
    b = choice("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ")

    _max = ati([1E3])
    _in = [ choice("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ") for i in range(0,100)]
    io.input_writeln(''.join(_in))

    if a>300:
        io.input_writeln(''.join(_in[randint(1,29):30]))
    else:
        _in = [ choice("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ") for i in range(0,50)]
        io.input_writeln(''.join(_in))

    io.output_gen("../std")
