#!/usr/bin/env python

from cyaron import * # 引入CYaRon的库

for i in range(1,11):
    io = IO(file_prefix="problem", data_id=i) # test3.in, test3.out

    a = randint(1,100)
    for k in range(0,a):
        io.input_writeln(randint(1,100),randint(1,10))
    io.output_gen("../std")
