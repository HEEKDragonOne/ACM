### 【题目描述】

给定两个整数序列，写一个程序求它们的最长上升公共子序列。

当以下条件满足的时候，我们将长度$N$的序列$S\_1,S\_2,...,S\_N$ 称为长度为$M$的序列$A\_1,A\_2,...,A\_M$的上升子序列：

存在$1≤i\_1

### 【输入】

每个序列用两行表示，第一行是长度$M(1≤M≤500)$，第二行是该序列的M个整数$A\_i(-2^{31}≤A\_i<2^{31} )$

### 【输出】

在第一行，输出两个序列的最长上升公共子序列的长度$L$。在第二行，输出该子序列。如果有不止一个符合条件的子序列，则输出任何一个即可。

### 【输入样例】

```
5
1 4 2 5 -12
4
-12 1 2 4
```

### 【输出样例】

```
2
1 4
```

### 【提示】

经典算法Baidu搜索，深刻体会。


 ### 【来源】

 一本通在线评测 