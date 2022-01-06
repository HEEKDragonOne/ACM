#!/usr/bin/env python

from cyaron import * # 引入CYaRon的库

for i in range(1,11):
    io = IO(file_prefix="problem", data_id=i) # test3.in, test3.out

    a = randint(1,10)
    io.input_writeln(a)
    for k in range(0,a):
        n = randint(1,5)
        m = randint(1,5)
        x = randint(0,n-1)
        y = randint(0,m-1)
        io.input_writeln(n,m,x,y)
    io.output_gen("../std")
