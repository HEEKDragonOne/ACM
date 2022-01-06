#!/usr/bin/env python

from cyaron import * # 引入CYaRon的库

for i in range(1,11):
    io = IO(file_prefix="problem", data_id=i) # test3.in, test3.out

    b = choice("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ")
    _max = ati([9])
    _in = [ randint(1,_max[0]) for i in range(0,5)]
    io.input_writeln(_in)

    _in = [ randint(1,_max[0]) for i in range(0,5)]
    io.input_writeln(_in)

    _in = [ randint(1,_max[0]) for i in range(0,5)]
    io.input_writeln(_in)

    _in = [ randint(1,_max[0]) for i in range(0,5)]
    io.input_writeln(_in)

    _in = [ randint(1,_max[0]) for i in range(0,5)]
    io.input_writeln(_in)

    a = randint(1,5)
    b = randint(1,5)
    io.input_writeln(a,b)

    io.output_gen("../std")
