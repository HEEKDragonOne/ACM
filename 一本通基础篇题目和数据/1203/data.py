#!/usr/bin/env python

from cyaron import * # 引入CYaRon的库

for i in range(1,11):
    io = IO(file_prefix="problem", data_id=i) # test3.in, test3.out

    b = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"
    c = "()"
    for i in range(0,randint(3,20)):
        s = []
        for k in range(0,randint(10,100)):
            a = randint(1,100)
            if a > 50:
                s.append( choice(b))
            else:
                s.append( choice(c))
        io.input_writeln(''.join(s))
    io.output_gen("../std")
