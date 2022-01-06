#!/usr/bin/env python

from cyaron import * # 引入CYaRon的库

for i in range(1,11):
    io = IO(file_prefix="problem", data_id=i) # test3.in, test3.out

    b = "abcd0123456789efghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"

    a = randint(1,100)
    io.input_writeln(a)
    s = []
    for k in range(0,a):
        x = ''.join( [ choice(b) for i in range(0,10)])
        while x in s:
            x = ''.join( [ choice(b) for i in range(0,10)])
        s.append(x)
        io.input_writeln(x,randint(10,100))

    io.output_gen("../std")
