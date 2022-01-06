#!/usr/bin/env python

from cyaron import * # 引入CYaRon的库

for i in range(1,11):
    io = IO(file_prefix="problem", data_id=i) # test3.in, test3.out

    t = randint(1,5)
    io.input_writeln(t)
    for t1 in range(0,t):
        n = randint(4,300)
        io.input_writeln(n)

        a = randint(0,n-1)
        b = randint(0,n-1)
        io.input_writeln(a,b)

        a = randint(0,n-1)
        b = randint(0,n-1)
        io.input_writeln(a,b)
    io.output_gen("../std")
