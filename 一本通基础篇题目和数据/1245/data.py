#!/usr/bin/env python

from cyaron import * # 引入CYaRon的库

for i in range(1,11):
    io = IO(file_prefix="problem", data_id=i) # test3.in, test3.out

    a = randint(1,10000)
    io.input_writeln(a)
    _max = ati([1E8])
    s = [0 for i in range(1,_max[0])]
    for k in range(a):
        x = randint(0,_max[0])
        while s[x] > 500:
            x = randint(0,_max[0])
        s[x] = s[x]+1
        io.input_write(x)
    io.output_gen("../std")
