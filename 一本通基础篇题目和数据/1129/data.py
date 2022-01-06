#!/usr/bin/env python

from cyaron import * # 引入CYaRon的库

for i in range(1,11):
    io = IO(file_prefix="problem", data_id=i) # test3.in, test3.out

    a = randint(1,255)
    for k in range(0,a):
        b = choice("abcdefghijklmnopqrstuvwxyzABCD01234567890  !,.")
        io.input_write(b)
    io.output_gen("../std")
