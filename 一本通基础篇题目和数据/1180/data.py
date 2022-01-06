#!/usr/bin/env python

from cyaron import * # 引入CYaRon的库

for i in range(1,11):
    io = IO(file_prefix="problem", data_id=i) # test3.in, test3.out

    n = randint(5,5000)
    m = randint(3,n)
    io.input_writeln(n,m)

    _set = []
    for k in range(0,n):
        x = randint(1000,9999)
        while x in _set:
            x = randint(1000,9999)
        _set.append(x)
        io.input_writeln(x,randint(10,100))
    io.output_gen("../std")
