#!/usr/bin/env python

from cyaron import * # 引入CYaRon的库

for i in range(1,11):
    n = randint(1,101)
    _max = ati([100])
    _in = [ randint(5,_max[0]) for i in range(0,n)]
    io = IO(file_prefix="problem", data_id=i) # test3.in, test3.out
    io.input_writeln(n)
    for k in _in:
        io.input_writeln(k)
    io.output_gen("../std")
