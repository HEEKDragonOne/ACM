#!/usr/bin/env python

from cyaron import * # 引入CYaRon的库

for i in range(1,11):
    io = IO(file_prefix="problem", data_id=i) # test3.in, test3.out

    n = randint(1,100)
    m = randint(n-1,pow(n,2))
    io.input_writeln(n,m)
    graph = Graph.graph(n, m, weight_limit=(5, 300)) # 生成一个n点，m边的有向图，边权范围是5到300
    io.input_writeln(graph)
    io.output_gen("../std")
