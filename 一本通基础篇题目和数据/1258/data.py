#!/usr/bin/env python

from cyaron import * # 引入CYaRon的库

for i in range(0,10):
    io = IO(file_prefix="shuta", data_id=i) # test3.in, test3.out
    io.output_gen("../std")
