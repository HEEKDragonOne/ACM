#!/usr/bin/env python

from cyaron import * # 引入CYaRon的库

for i in range(1,11):
    io = IO(file_prefix="problem", data_id=i) # test3.in, test3.out

    a = randint(1,1000000000)
    b = randint(1,100000)
    io.input_write(a,b)
    io.output_gen("../std")
