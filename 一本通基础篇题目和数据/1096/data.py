#!/usr/bin/env python

from cyaron import * # 引入CYaRon的库

for i in range(1,11):
    _max = ati([1E3])
    _in = [ randint(2,_max[0]) for i in range(0,3)]
    a = randint(1,100)
    b = randint(a,10000)
    io = IO(file_prefix="problem", data_id=i) # test3.in, test3.out
    io.input_writeln(a,b)
    io.output_gen("../std")
