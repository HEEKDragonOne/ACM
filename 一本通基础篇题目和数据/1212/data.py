#!/usr/bin/env python

from cyaron import * # 引入CYaRon的库

for i in range(1,11):
    io = IO(file_prefix="problem", data_id=i) # test3.in, test3.out

    a = randint(1,20)
    b = randint(1,20)
    io.input_writeln(a,b)
    for k in range(0,a):
        _in = [ choice("ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZ") for i in range(0,b)]
        io.input_writeln(''.join(_in))
    io.output_gen("../std")

