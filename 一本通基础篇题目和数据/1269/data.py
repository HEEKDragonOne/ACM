#!/usr/bin/env python

from cyaron import * # 引入CYaRon的库

for i in range(1,11):
    io = IO(file_prefix="problem", data_id=i) # test3.in, test3.out

    n = randint(1,500)
    m = randint(300,6000)
    io.input_writeln(n,m)
    for k in range(0,n):
        io.input_writeln(randint(1,100),randint(1,1000),randint(0,10))
    io.output_gen("../std")
