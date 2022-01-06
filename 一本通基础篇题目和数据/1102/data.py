#!/usr/bin/env python

from cyaron import * # 引入CYaRon的库

for i in range(1,11):
    io = IO(file_prefix="problem", data_id=i) # test3.in, test3.out

    a = randint(1,100)
    b = randint(1,100)
    _max = ati([1E2])
    _in = [ randint(1,_max[0]) for i in range(0,a)]
    io.input_writeln(a)
    io.input_writeln(_in)
    io.input_writeln(b)
    io.output_gen("../std")
