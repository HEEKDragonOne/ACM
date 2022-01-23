#include <iostream>  
#include <cstdio>  
#include <algorithm>  
  
using namespace std;  
const int N = 1e6 + 5, LogN = 20;   
                                     //表示定义整型常量，1e6 + 5即为106+5  
int log[N], f[N][LogN + 5], a[N];  
int n, m, x, y;  
  
int main()  
{  
	freopen("test10.in","r",stdin);
	freopen("test10.out","w",stdout);
    scanf("%d%d", &n, &m);  
    for (int i = 1; i <= n; ++i)  
       scanf("%d", &a[i]);              //读入n个数据  
    log[0] = -1;                        //log[0]设为-1，这样才能使log[1]为0  
    for (int i = 1; i <= n; ++i)  
     f[i][0] = a[i], log[i] = log[i >> 1] + 1;  //预处理出长度为1~n的log值  
    for (int j = 1; j <= LogN; ++j)         //计算f[i][j]  
     for (int i = 1; i + (1 << j) - 1 <= n; ++i) //注意区间边界不能超过n  
      f[i][j] = max(f[i][j - 1], f[i + (1 << j - 1)][j - 1]);  
                                     //2j可以用右移运算符"<<"很快算出  
                                     //注意加减乘除运算符的优先级高于位移运算符   
    while (m--)  
    {  
        scanf("%d%d", &x, &y);  
        int s = log[y - x + 1];            //求log2(y-x-1)下取整的值  
        printf("%d\n", max(f[x][s], f[y - (1 << s) + 1][s]));    //回答每个提问  
    }  
    return 0;  
}  
