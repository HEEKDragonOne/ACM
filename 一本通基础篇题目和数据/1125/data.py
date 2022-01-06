#!/usr/bin/env python

from cyaron import * # 引入CYaRon的库

for i in range(1,11):
    io = IO(file_prefix="problem", data_id=i) # test3.in, test3.out

    n = randint(1,100)
    m = randint(1,100)
    k = randint(1,100)
    io.input_writeln(n,m,k)

    for i in range(0,n):
        _in = [ randint(0,1000) for i in range(0,m)]
        io.input_writeln(_in)

    for i in range(0,m):
        _in = [ randint(0,1000) for i in range(0,k)]
        io.input_writeln(_in)


    io.output_gen("../std")
