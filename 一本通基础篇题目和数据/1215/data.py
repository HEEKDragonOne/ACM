#!/usr/bin/env python

from cyaron import * # 引入CYaRon的库

for i in range(1,11):
    io = IO(file_prefix="problem", data_id=i) # test3.in, test3.out

    k = randint(1,10)
    io.input_writeln(k)
    for x1 in range(0,k):
        a = randint(2,100)
        io.input_writeln(a)
        for x2 in range(0,a):
            _in = [ choice("#..") for i in range(0,a)]
            io.input_writeln(''.join(_in))
        io.input_writeln(randint(0,a-1),randint(0,a-1),randint(0,a-1),randint(0,a-1))
    io.output_gen("../std")
