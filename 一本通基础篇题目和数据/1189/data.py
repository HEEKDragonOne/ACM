#!/usr/bin/env python

from cyaron import * # 引入CYaRon的库

for i in range(1,11):
    io = IO(file_prefix="problem", data_id=i) # test3.in, test3.out

    a = randint(1,1000)
    io.input_writeln(a)
    for k in range(0,a):
        b = randint(10,1000000)
        io.input_writeln(b)
    io.output_gen("../std")
