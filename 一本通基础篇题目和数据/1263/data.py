#!/usr/bin/env python

from cyaron import * # 引入CYaRon的库

for i in range(1,11):
    io = IO(file_prefix="problem", data_id=i) # test3.in, test3.out

    a = randint(1,5000)
    io.input_writeln(a)
    for k in range(0,a):
        io.input_writeln(randint(0,10000),randint(0,10000))
    io.output_gen("../std")
