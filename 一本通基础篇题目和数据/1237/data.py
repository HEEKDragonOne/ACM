#!/usr/bin/env python

from cyaron import * # 引入CYaRon的库

for i in range(1,11):
    io = IO(file_prefix="problem", data_id=i) # test3.in, test3.out

    n = randint(1,10000)
    io.input_writeln(n)
    s = []
    for k in range(0,n):
        a = randint(1,100000000)
        while  a in s:
            a = randint(1,100000000)
        print(a)
        s.append(a)
    io.input_write(s)
    io.output_gen("../std")
