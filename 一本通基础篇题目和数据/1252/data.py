#!/usr/bin/env python

from cyaron import * # 引入CYaRon的库

for i in range(1,11):
    io = IO(file_prefix="problem", data_id=i) # test3.in, test3.out

    r = randint(2,40)
    c = randint(2,40)
    b = "..#"
    io.input_writeln(r,c)
    s = []
    for k in range(0,r):
        _in = [ choice(b) for i in range(0,c)]
        io.input_writeln(''.join(_in))
    io.output_gen("../std")
