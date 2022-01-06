#!/usr/bin/env python

from cyaron import * # 引入CYaRon的库

for i in range(1,11):
    io = IO(file_prefix="problem", data_id=i) # test3.in, test3.out
    x = i +10
    io.input_writeln(x)
    for k in range(0,x):
        io.input_writeln(randint(2,20))
    io.output_gen("../std")
