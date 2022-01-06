#!/usr/bin/env python

from cyaron import * # 引入CYaRon的库

for i in range(1,11):
    io = IO(file_prefix="problem", data_id=i) # test3.in, test3.out
    n = randint(2,20)
    io.input_writeln(n)
    for k in range(0,n):
        a = randint(10,10001);
        b = randint(1,a+1)
        io.input_writeln(a,b)
    io.output_gen("../std")
