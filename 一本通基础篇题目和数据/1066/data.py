#!/usr/bin/env python

from cyaron import * # 引入CYaRon的库

for i in range(1,11):
    io = IO(file_prefix="problem", data_id=i) # test3.in, test3.out
    n = randint(1,1000)
    m = randint(n,1001)
    io.input_writeln(n,m)
    io.output_gen("../std")
