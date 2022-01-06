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
#define INF 0x3f3f3f3f
#define PI acos(-1.0)
#define N 1001
#define MOD 123
#define E 1e-6
using namespace std;
int g[N][N];
int dis[N],vis[N];
int main()
{
    int n,m;
    cin>>n>>m;
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
        int x,y,w;
        cin>>x>>y>>w;
        g[x][y]=w;
        g[y][x]=w;
    }

    memset(vis,0,sizeof(vis));
    for(int i=1;i<=n;i++)
        dis[i]=g[1][i];
    for(int i=1;i<=n;i++)
    {
        int k;
        int minn=INF;
        for(int j=1;j<=n;j++)
            if(!vis[j]&&dis[j]<minn)
            {
                minn=dis[j];
                k=j;
            }

        vis[k]=1;
        for(int j=1;j<=n;j++)
            if(!vis[j]&&dis[j]>g[k][j])
                dis[j]=g[k][j];
    }

    int maxx=-INF;
    for(int i=1;i<=n;i++)
        maxx=max(maxx,dis[i]);

    cout<<n-1<<" "<<maxx<<endl;
    return 0;
}