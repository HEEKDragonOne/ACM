#!/usr/bin/env python

from cyaron import * # 引入CYaRon的库

for i in range(1,11):
    io = IO(file_prefix="problem", data_id=i) # test3.in, test3.out

    a = randint(2,1000)
    dc = [ 3,5]
    for k in range(0,a):
        b = randint(2,100)
        io.input_writeln(b)
        _in = [ choice(dc) for i in range(0,b)]
        io.input_writeln(_in)
    io.output_gen("../std")
