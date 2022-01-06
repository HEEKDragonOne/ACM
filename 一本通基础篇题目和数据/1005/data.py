#!/usr/bin/env python

from cyaron import * # 引入CYaRon的库

for i in range(0,10):
    x = randint(110,200),
    a = randint(50,100),
    y = randint(50,100),
    b = randint(150,200),
    io = IO(file_prefix="problem", data_id=i) # test3.in, test3.out
    io.input_writeln(x,a,y,b)
    io.output_gen("../std")
