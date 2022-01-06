#!/usr/bin/env python

from cyaron import * # 引入CYaRon的库

for i in range(1,11):
    io = IO(file_prefix="problem", data_id=i) # test3.in, test3.out

    fa = randint(100,10000)
    io.input_writeln(fa)
    io.output_gen("../std")
