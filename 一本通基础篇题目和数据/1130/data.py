#!/usr/bin/env python

from cyaron import * # 引入CYaRon的库

for i in range(1,11):
    io = IO(file_prefix="problem", data_id=i) # test3.in, test3.out

    a = randint(1,100000)
    b = choice("abcdefghijklmnopqrstuvwxyz")
    _max = ati([1E3])
    _in = [ choice("abcdefghijklmnopqrstuvwxyz") for i in range(0,a)]
    
    io.input_writeln(''.join(_in))
    io.output_gen("../std")
