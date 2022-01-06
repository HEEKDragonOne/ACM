#!/usr/bin/env python

from cyaron import * # 引入CYaRon的库

for i in range(1,11):
    io = IO(file_prefix="problem", data_id=i) # test3.in, test3.out

    n = randint(1,10000)
    k = randint(1,10000)
    io.input_writeln(n,k)
    for k in range(0,n):
        _in = str( randint(1,100)) +'.'+str( randint(10,100))
        io.input_writeln(_in)
    io.output_gen("../std")
