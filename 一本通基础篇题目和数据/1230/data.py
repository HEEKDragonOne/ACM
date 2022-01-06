#!/usr/bin/env python

from cyaron import * # 引入CYaRon的库

for i in range(1,11):
    io = IO(file_prefix="problem", data_id=i) # test3.in, test3.out

    a = randint(1,100)
    io.input_writeln(a)
    s = []
    for k in range(0,a):
        x = randint(0,100)
        y = randint(0,100)
        while [x,y] in s:
            x = randint(0,100)
            y = randint(0,100)
        s.append([x,y])
        io.input_write(x,y)
    io.output_gen("../std")
