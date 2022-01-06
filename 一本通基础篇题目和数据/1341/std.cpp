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
#define N 501
#define MOD 123
#define E 1e-6
using namespace std;
int n,m;
int g[N][N];
int dis[N],path[N*2];
int cnt;
void dfs(int i)
{
    for(int j=1;j<=n;j++)
        if(g[i][j])
        {
            g[i][j]=0;
            g[j][i]=0;
            dfs(j);
        }
    path[cnt++]=i;
}
int main()
{
    cin>>n>>m;
    for(int i=1;i<=m;i++)
    {
        int x,y;
        cin>>x>>y;
        g[x][y]=1;
        g[y][x]=1;
        dis[x]++;
        dis[y]++;
    }

    int start=1;
    int sum=0;
    for(int i=1;i<=n;i++)
        if(dis[i]%2)
        {
            sum++;
            if(sum==1)
                start=i;
        }

    dfs(start);

    for(int i=cnt-1;i>=0;i--)
        cout<<path[i]<<" ";
    return 0;
}