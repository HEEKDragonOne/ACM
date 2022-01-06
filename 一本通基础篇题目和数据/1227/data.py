#!/usr/bin/env python

from cyaron import * # 引入CYaRon的库

for i in range(1,11):
    io = IO(file_prefix="problem", data_id=i) # test3.in, test3.out


    t = randint(1,3)
    for k in range(0,t):
        a = randint(1,10000)
        io.input_writeln(a)
        for x in range(0,a):
            io.input_writeln(randint(1,1000),randint(-500,1000))
    io.input_write(0)
    io.output_gen("../std")
