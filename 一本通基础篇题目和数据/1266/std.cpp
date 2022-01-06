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
#define N 100
#define MOD 2520
#define E 1e-12
using namespace std;
int a[N][N],f[N][N],res[N][N];
void print(int x,int y)
{
    if(x==0)
        return;
    print(x-1,y-res[x][y]);
    printf("%d %d\n",x,res[x][y]);
}
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            cin>>a[i][j];

    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            for(int k=0;k<=j;k++)
                if(f[i][j]<=f[i-1][j-k]+a[i][k])
                {
                    f[i][j]=f[i-1][j-k]+a[i][k];
                    res[i][j]=k;
                }

    cout<<f[n][m]<<endl;
    print(n,m);

    return 0;
}
