#!/usr/bin/env python

from cyaron import * # 引入CYaRon的库

for i in range(1,11):
    io = IO(file_prefix="problem", data_id=i) # test3.in, test3.out

    a = randint(3,100)
    b = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"
    for k in range(0,a-1):
        _in = [ choice(b) for i in range(0,randint(1,50))]
        io.input_write(''.join(_in))
    io.output_gen("../std")
