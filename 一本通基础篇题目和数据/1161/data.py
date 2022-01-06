#!/usr/bin/env python

from cyaron import * # 引入CYaRon的库

for i in range(1,11):
    io = IO(file_prefix="problem", data_id=i) # test3.in, test3.out

    a = randint(2,30)
    b = randint(10,1000)
    io.input_writeln(b,a)
    io.output_gen("../std")
