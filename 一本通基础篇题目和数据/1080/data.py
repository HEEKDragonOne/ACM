#!/usr/bin/env python

from cyaron import * # 引入CYaRon的库

for i in range(1,11):
    _max = ati([1E3])

    _in = [ randint(-1000,_max[0]) for i in range(0,3)]
    x = randint(10,100)
    y = randint(10,100)
    a = randint(2,10001);
    b = randint(2,10001);
    c = randint(2,10001);
    io = IO(file_prefix="problem", data_id=i) # test3.in, test3.out
    io.input_writeln(a*x+y,b*x+y,c*x+y)
    io.output_gen("../std")
