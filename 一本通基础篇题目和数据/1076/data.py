#!/usr/bin/env python

from cyaron import * # 引入CYaRon的库

for i in range(1,11):
    io = IO(file_prefix="problem", data_id=i) # test3.in, test3.out
    n = randint(1,100)
    io.input_writeln(n)
    _max = ati([230])
    for k in range(0,n):
        _in = [ randint(10,_max[0]) for i in range(0,2)]
        io.input_writeln(_in)
    io.output_gen("../std")
