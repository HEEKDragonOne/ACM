#!/usr/bin/env python

from cyaron import * # 引入CYaRon的库

for i in range(1,11):
    io = IO(file_prefix="problem", data_id=i) # test3.in, test3.out

    a = randint(1,20)
    io.input_writeln(a)
    for k in range(0,a):
        io.input_writeln(randint(3,32767))
    io.output_gen("../std")
