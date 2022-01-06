#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<string>
#include<cstdlib>
#include<queue>
#include<set>
#include<vector>
#define INF 0x3f3f3f3f
#define PI acos(-1.0)
#define N 101
#define MOD 123
#define E 1e-6
using namespace std;
int a[N][N];
int main()
{
    int n,s;
    cin>>n>>s;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            int b;
            if(scanf("%d",&b)==1)//如果b是整数
                a[i][j]=b;
            else
                a[i][j]=INF;
        }
    }

    for(int k=1;k<=n;k++)
        for(int i=1;i<=n;i++)
            for(int j=1;j<=n;j++)
                if(a[i][j]>a[i][k]+a[k][j])
                    a[i][j]=a[i][k]+a[k][j];

    for(int i=1;i<=n;i++)
        if(i!=s)
            printf("(%d -> %d) = %d\n",s,i,a[s][i]);

    return 0;
}