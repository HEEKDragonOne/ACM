#!/usr/bin/env python

from cyaron import * # 引入CYaRon的库

for i in range(1,11):
    io = IO(file_prefix="problem", data_id=i) # test3.in, test3.out

    n = randint(3,9999)
    k = randint(3,99)
    io.input_writeln(n,k)
    _in = [ randint(0,10000) for i in range(0,n)]
    io.input_write(_in)
    io.output_gen("../std")
