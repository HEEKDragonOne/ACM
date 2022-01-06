#!/usr/bin/env python

from cyaron import * # 引入CYaRon的库

for i in range(1,11):
    io = IO(file_prefix="problem", data_id=i) # test3.in, test3.out

    n = randint(1,1000)
    m = randint(1,500)
    k = randint(1,100)
    io.input_writeln(n,m,k)
    for k1 in range(0,k):
        io.input_writeln(randint(1,20),randint(0,100))
    io.output_gen("../std")
