#!/usr/bin/env python

from cyaron import * # 引入CYaRon的库

for i in range(1,11):
    io = IO(file_prefix="problem", data_id=i) # test3.in, test3.out

    b = [2,3,4,5,6,7,8,9,10,16]
    io.input_write(choice(b))
    io.input_write(randint(30,100))
    io.output_gen("../std")
