#!/usr/bin/env python

from cyaron import * # 引入CYaRon的库

for i in range(1,11):
    io = IO(file_prefix="problem", data_id=i) # test3.in, test3.out

    a = randint(10,100)
    b = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"
    _max = ati([1E3])
    juzi = []
    for k in range(0,a):
        _in = [ choice(b) for i in range(0,randint(3,8))]
        dan = ''.join(_in)
        juzi.append(dan+' ')
    _in = [ choice(b) for i in range(0,randint(3,8))]
    dan = ''.join(_in)
    juzi.append(dan+'.')
    io.input_write(''.join(juzi))
    io.output_gen("../std")
