#!/usr/bin/env python

from cyaron import * # 引入CYaRon的库

for i in range(1,11):
    io = IO(file_prefix="problem", data_id=i) # test3.in, test3.out

    n = randint(1,100)
    m = randint(n-1,100)
    io.input_writeln(n,m) # 输出无权图，以每条边u v一行的格式
    graph = Graph.DAG(n, m) # 生成一个 n 点，m 边的有向无环图
    io.input_writeln(graph.to_str(output=Edge.unweighted_edge)) # 输出无权图，以每条边u v一行的格式
    io.output_gen("../std")
