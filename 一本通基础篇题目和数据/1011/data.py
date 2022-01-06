#!/usr/bin/env python

from cyaron import * # 引入CYaRon的库

for i in range(0,10):
    a = randint(1000,10000000)
    b = randint(0,a+1)
    io = IO(file_prefix="problem", data_id=i) # test3.in, test3.out
    io.input_writeln(a,b)
    io.output_gen("../std")
