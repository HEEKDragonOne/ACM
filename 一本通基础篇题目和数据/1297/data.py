#!/usr/bin/env python

from cyaron import * # 引入CYaRon的库

for i in range(1,11):
    io = IO(file_prefix="problem", data_id=i) # test3.in, test3.out

    a = randint(1,10)
    b = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"
    for k in range(0,a):
        _in1 = [ choice(b) for i in range(0,randint(10,200))]
        _in2 = [ choice(b) for i in range(0,randint(10,200))]
        io.input_writeln(''.join(_in1),''.join(_in2))
    io.output_gen("../std")
