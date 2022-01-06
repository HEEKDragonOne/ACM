#!/usr/bin/env python

from cyaron import * # 引入CYaRon的库

for i in range(1,11):
    io = IO(file_prefix="problem", data_id=i) # test3.in, test3.out

    a = randint(2,40)
    io.input_writeln(a)
    b = ["male","female"]
    for k in range(0,a):
        io.input_writeln( choice(b), "1."+str( randint(1,100)))
    io.output_gen("../std")
