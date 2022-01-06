#!/usr/bin/env python

from cyaron import * # 引入CYaRon的库

for i in range(1,11):
    io = IO(file_prefix="problem", data_id=i) # test3.in, test3.out

    n = randint(1,100)
    io.input_writeln(n)
    for k in range(0,n):
        b = "#.@.."
        _in = [ choice(b) for i in range(0,n)]
        io.input_writeln(_in)
    n = randint(2,100)
    io.input_write(n)
    io.output_gen("../std")
