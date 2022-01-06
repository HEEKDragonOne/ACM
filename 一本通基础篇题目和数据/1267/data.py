#!/usr/bin/env python

from cyaron import * # 引入CYaRon的库

for i in range(1,11):
    io = IO(file_prefix="problem", data_id=i) # test3.in, test3.out

    m = randint(1,200)
    n = randint(1,30)
    io.input_writeln(m,n)
    for k in range(0,n):
        io.input_writeln(randint(1,100),randint(1,100))
    io.output_gen("../std")
