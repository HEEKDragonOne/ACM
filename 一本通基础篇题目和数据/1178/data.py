#!/usr/bin/env python

from cyaron import * # 引入CYaRon的库

for i in range(1,11):
    io = IO(file_prefix="problem", data_id=i) # test3.in, test3.out

    a = randint(1,20)
    b = randint(1,a)
    io.input_writeln(a)
    for k in range(0,a):
        _in = [ choice("abcdefghijklmnoptrsquvwxyz") for i in range(0,5)]
        io.input_writeln(''.join(_in),randint(1,100))
    io.output_gen("../std")
