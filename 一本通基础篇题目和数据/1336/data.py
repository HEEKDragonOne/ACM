#!/usr/bin/env python

from cyaron import * # 引入CYaRon的库

for i in range(1,11):
    io = IO(file_prefix="problem", data_id=i) # test3.in, test3.out

    n = randint(1,100)
    m = randint(1,100)
    io.input_writeln(n,m)
    tree = Graph.tree(n)
    for edge in tree.iterate_edges(): # 遍历所有边，其中edge内保存的也是Edge对象
        io.input_writeln(edge.start,edge.end) # 输出这条边，以u v w的形式
    io.output_gen("../std")
