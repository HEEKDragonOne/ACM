#!/usr/bin/env python

from cyaron import * # 引入CYaRon的库

for i in range(1,11):
    io = IO(file_prefix="problem", data_id=i) # test3.in, test3.out

    n = randint(2,10000)
    io.input_writeln(n)
    a = randint(1,1000)
    _in = [ str(randint(1,100000000))for i in range(0,n)]
    io.input_writeln(' '.join(_in))
    io.input_writeln(randint(1,n-1))

    io.output_gen("../std")
