#!/usr/bin/env python

from cyaron import * # 引入CYaRon的库

for i in range(1,11):
    io = IO(file_prefix="problem", data_id=i) # test3.in, test3.out

    a = randint(10,100)
    for k in range(0,a):
        b = randint(3,71)
        io.input_writeln(b)
    io.input_write(0)
    io.output_gen("../std")
