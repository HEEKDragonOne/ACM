#!/usr/bin/env python

from cyaron import * # 引入CYaRon的库

for i in range(1,11):
    io = IO(file_prefix="problem", data_id=i) # test3.in, test3.out

    b = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
    _in = [ choice(b) for i in range(3,1000)]
    io.input_writeln(''.join(_in))
    _in = [ choice(b) for i in range(3,1000)]
    io.input_writeln(''.join(_in))
    io.output_gen("../std")
