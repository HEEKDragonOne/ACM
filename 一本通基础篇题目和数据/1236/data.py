#!/usr/bin/env python

from cyaron import * # 引入CYaRon的库

for i in range(1,11):
    io = IO(file_prefix="problem", data_id=i) # test3.in, test3.out

    a = randint(3,50000)
    for k in range(0,a):
        x = randint(1,10000)
        y = randint(x,10000)
        io.input_writeln(x,y)
    io.output_gen("../std")
