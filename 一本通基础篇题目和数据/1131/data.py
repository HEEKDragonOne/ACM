#!/usr/bin/env python

from cyaron import * # 引入CYaRon的库

for i in range(1,11):
    io = IO(file_prefix="problem", data_id=i) # test3.in, test3.out

    a = randint(1,1000)
    y = round(random(),2)
    io.input_writeln(y)
    _max = ati([255])

    _in = [ choice("ATCG") for i in range(0,255)]
    io.input_writeln(''.join(_in))

    _in = [ choice("ATCG") for i in range(0,255)]
    io.input_writeln(''.join(_in))

    io.output_gen("../std")
