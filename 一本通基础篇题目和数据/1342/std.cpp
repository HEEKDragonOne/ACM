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
#define N 1001
#define MOD 123
#define E 1e-6
using namespace std;
int x[N],y[N];
double g[N][N];
double calculate(int x1,int y1,int x2,int y2)
{
    return sqrt((double)(x1-x2)*(x1-x2)+(double)(y1-y2)*(y1-y2));
}
int main()
{
    int n,m;
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>x[i]>>y[i];
    cin>>m;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            g[i][j]=INF;
            g[j][i]=INF;
        }
        g[i][i]=0;
    }

    for(int i=1;i<=m;i++)
    {
        int u,v;
        cin>>u>>v;
        double temp=calculate(x[u],y[u],x[v],y[v]);
        g[u][v]=temp;
        g[v][u]=temp;
    }

    for(int k=1;k<=n;k++)
        for(int i=1;i<=n;i++)
            for(int j=1;j<=n;j++)
                if(g[i][j]>g[i][k]+g[k][j])
                    g[i][j]=g[i][k]+g[k][j];
    int u,v;
    cin>>u>>v;
    printf("%.2lf",g[u][v]);

    return 0;
}