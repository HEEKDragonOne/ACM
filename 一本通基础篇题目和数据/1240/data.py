#!/usr/bin/env python

from cyaron import * # 引入CYaRon的库

for i in range(1,11):
    io = IO(file_prefix="problem", data_id=i) # test3.in, test3.out

    a = randint(1,10000)
    io.input_writeln(a)
    _max = ati([1E9])
    _in = [ randint(1,_max[0]) for i in range(0,a)]
    io.input_writeln(_in)

    a = randint(1,1000)
    io.input_writeln(a)
    for k in range(0,a):
        io.input_writeln(randint(1,_max[0]))

    io.output_gen("../std")
