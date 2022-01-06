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
#define N 101
#define MOD 123
#define E 1e-6
using namespace std;
int g[N][N];
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i==j)
                g[i][j]=0;
            else
                g[i][j]=INF;
        }
    }

    for(int i=1;i<=m;i++)
    {
        int x,y,w;
        cin>>x>>y>>w;
        g[x][y]=w;
        g[y][x]=w;
    }

    for(int k=1;k<=n;k++)
        for(int i=1;i<=n;i++)
            for(int j=1;j<=n;j++)
                if(g[i][j]>g[i][k]+g[k][j])
                    g[i][j]=g[i][k]+g[k][j];

    int maxx=-INF;
    for(int i=1;i<=n;i++)
        if(g[1][i]>maxx)
            maxx=g[1][i];

    if(maxx==INF)
        cout<<"-1"<<endl;
    else
        cout<<maxx<<endl;

    return 0;
}