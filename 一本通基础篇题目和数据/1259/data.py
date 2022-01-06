#!/usr/bin/env python

from cyaron import * # 引入CYaRon的库

for i in range(1,11):
    io = IO(file_prefix="problem", data_id=i) # test3.in, test3.out

    a = randint(1,200)
    io.input_writeln(a)
    _in = [ randint(1,10000) for i in range(0,a)]
    io.input_write(_in)
    io.output_gen("../std")
