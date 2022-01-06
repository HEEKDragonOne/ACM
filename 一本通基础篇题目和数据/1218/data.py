#!/usr/bin/env python

from cyaron import * # 引入CYaRon的库

for i in range(1,11):
    io = IO(file_prefix="problem", data_id=i) # test3.in, test3.out

    a = randint(3,100)
    for a in range(0,a):
        io.input_writeln(randint(1,1000),randint(1,1000))
    io.input_writeln(0,0)
    io.output_gen("../std")
