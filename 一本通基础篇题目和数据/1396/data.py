#!/usr/bin/env python

from cyaron import * # 引入CYaRon的库

for i in range(1,11):
    io = IO(file_prefix="problem", data_id=i) # test3.in, test3.out

    a = randint(1,50000)
    io.input_writeln(a)
    b = "abcdefghijklmnopqrstuvwxyz"
    for k in range(0,a+1):
        _in = [ choice(b) for x in range(0,randint(5,30))]
        io.input_writeln(''.join(_in))
    io.output_gen("../std")
