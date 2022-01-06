#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<string>
#include<cstdlib>
#include<queue>
#include<vector>
#define INF 0x3f3f3f3f
#define PI acos(-1.0)
#define N 1001
#define MOD 2520
#define E 1e-12
using namespace std;
int f[110][20];
int main()
{
    int n,m;
    while(scanf("%d%d",&n,&m)!=EOF)
    {
        for(int i=1;i<=n;i++)
            for(int j=1;j<=m;j++)
                f[i][j]=i;

        for(int i=1;i<=n;i++)
            for(int j=1;j<=i;j++)
                for(int k=2;k<=m;k++)
                    f[i][k]=min(f[i][k],max(f[j-1][k-1],f[i-j][k])+1);

        cout<<f[n][m]<<endl;
    }
    return 0;
}