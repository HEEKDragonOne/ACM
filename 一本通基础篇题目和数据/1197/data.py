#!/usr/bin/env python

from cyaron import * # 引入CYaRon的库

for i in range(1,11):
    io = IO(file_prefix="problem", data_id=i) # test3.in, test3.out

    m = randint(10,500)
    n = randint(2,m)
    io.input_writeln(m,n)
    _in = [ randint(1,100) for i in range(0,m-1)]
    io.input_write(_in)
    io.output_gen("../std")
