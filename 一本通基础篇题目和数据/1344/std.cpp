#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<string>
#include<cstdlib>
#include<queue>
#include<vector>
#include<set>
#define INF 0x3f3f3f3f
#define PI acos(-1.0)
#define N 10001
#define MOD 123
#define E 1e-6
using namespace std;
int n,m;
double g[N][N],f[N];
int vis[N];
void Dijkstra()
{
    int sum=1,k;
    while(sum<n)
    {
        double minn=INF;
        for(int i=1;i<=n;i++)
            if(vis[i]==0&&f[i]<minn)
            {
                minn=f[i];
                k=i;
            }
        vis[k]=1;
        sum++;
        for(int i=1;i<=n;i++)
            if(vis[i]==0&&f[i]>f[k]*g[k][i])
                f[i]=f[k]*g[k][i];
    }
}
int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            if(i==j)
                g[i][j]=0;
            else
                g[i][j]=INF;

    for(int i=1;i<=m;i++)
    {
        int x,y,w;
        cin>>x>>y>>w;
        g[x][y]=100.0/(100-w);
        g[y][x]=100.0/(100-w);
    }

    int A,B;
    cin>>A>>B;
    vis[A]=1;
    for(int i=1;i<=n;i++)
        if(g[A][i])
            f[i]=g[A][i];

    Dijkstra();
    printf("%.8lf",f[B]*100);
    return 0;
}