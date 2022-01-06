#!/usr/bin/env python

from cyaron import * # 引入CYaRon的库

for i in range(1,11):
    io = IO(file_prefix="problem", data_id=i) # test3.in, test3.out

    a = randint(1,100)
    io.input_writeln(a)
    for k in range(0,a):
        n = randint(2,9)
        _in = [ choice("123456789") for i in range(0,n)]
        io.input_writeln(''.join(_in),randint(1,n-1))
    io.output_gen("../std")
