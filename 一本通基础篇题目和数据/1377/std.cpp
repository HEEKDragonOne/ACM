#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<string>
#include<cstdlib>
#include<queue>
#include<set>
#include<map>
#include<stack>
#include<vector>
#include<sstream>
#define INF 0x3f3f3f3f
#define PI acos(-1.0)
#define N 1001
#define MOD 123
#define E 1e-6
using namespace std;
int g[N][N];
int a[N];
int main()
{
    int n,m;
    scanf("%d%d\n",&m,&n);

    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
        {
            if(i==j)
                g[i][j]=0;
            else
                g[i][j]=INF;
        }

    for(int i=1;i<=m;i++)
    {
        string str;
        getline(cin,str);
        stringstream input(str);//创建一个流
        int len=0;
        int x;
        while(input>>x)//把值传递流中
        {
            len++;
            a[len]=x;//获取转换后的字符转并将其写入a[len]
        }
        for(int j=1;j<=len;j++)
            for(int k=j+1;k<=len;k++)
                g[a[j]][a[k]]=1;
    }
    for(int k=1;k<=n;k++)
        for(int i=1;i<=n;i++)
            for(int j=1;j<=n;j++)
                g[i][j]=min(g[i][j],g[i][k]+g[k][j]);

    if(g[1][n]>=INF)
        cout<<"NO"<<endl;
    else
        cout<<g[1][n]-1<<endl;

    return 0;
}