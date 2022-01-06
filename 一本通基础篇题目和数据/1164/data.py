#!/usr/bin/env python

from cyaron import * # 引入CYaRon的库

for i in range(1,11):
    io = IO(file_prefix="problem", data_id=i) # test3.in, test3.out

    a = randint(1,1000)
    len = randint(5,9)
    _in = [ choice("123456789") for i in range(0,len)]
    io.input_write(''.join(_in),randint(1,len))
    io.output_gen("../std")
