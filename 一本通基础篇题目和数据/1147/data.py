#!/usr/bin/env python

from cyaron import * # 引入CYaRon的库

for i in range(1,11):
    io = IO(file_prefix="problem", data_id=i) # test3.in, test3.out

    a = randint(5,100)
    b = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"
    io.input_writeln(a)
    for i in range(0,a):
        _in = [ choice(b) for i in range(2,randint(4,8))]
        x = randint(10,100)
        io.input_writeln(x,''.join(_in))
    io.output_gen("../std")
