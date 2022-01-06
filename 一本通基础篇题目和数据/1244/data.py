#!/usr/bin/env python

from cyaron import * # 引入CYaRon的库

for i in range(1,11):
    io = IO(file_prefix="problem", data_id=i) # test3.in, test3.out

    n = randint(1,100000)
    io.input_writeln(n)
    _max = ati([1E8])
    _in = [ randint(1,_max[0]) for i in range(0,n)]
    io.input_writeln(_in)
    io.input_writeln(randint(0,pow(2,30)))
    io.output_gen("../std")
