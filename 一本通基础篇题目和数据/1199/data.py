#!/usr/bin/env python

from cyaron import * # 引入CYaRon的库

for i in range(1,11):
    io = IO(file_prefix="problem", data_id=i) # test3.in, test3.out

    a = randint(1,6)
    b = "abcdefghijklmnopqrstuvwxyz"
    s = []
    for k in range(0,a):
        x = choice(b)
        while x in s:
            x = choice(b)
        s.append(x)
    s.sort()
    io.input_write(''.join(s))
    io.output_gen("../std")
