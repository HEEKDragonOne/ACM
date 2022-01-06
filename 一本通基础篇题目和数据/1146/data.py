#!/usr/bin/env python

from cyaron import * # 引入CYaRon的库

for i in range(1,11):
    io = IO(file_prefix="problem", data_id=i) # test3.in, test3.out

    a = randint(6,50)
    b = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"
    _in = [ choice(b) for i in range(0,a)]

    s1 = ''.join(_in)
    s2 = ''.join(_in[::-1])
    if a > 20:
        io.input_writeln(s1)
    else:
        io.input_writeln(s1 +s2)


    io.output_gen("../std")
