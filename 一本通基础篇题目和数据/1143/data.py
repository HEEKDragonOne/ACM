#!/usr/bin/env python

from cyaron import * # 引入CYaRon的库

for i in range(1,11):
    io = IO(file_prefix="problem", data_id=i) # test3.in, test3.out

    a = randint(1,1000)
    b = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"

    dans = []
    for i in range(20,100):
        _in = [ choice(b) for x in range(2, randint(3,10))]
        dan = ''.join(_in) + choice(", ")
        dans.append(dan)
    _in = [ choice(b) for x in range(2, randint(3,10))]
    dan = ''.join(_in)
    dans.append(dan)
    io.input_writeln(''.join(dans))
    io.output_gen("../std")
