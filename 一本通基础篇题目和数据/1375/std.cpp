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
int dis[N],path[2*N];
int beginn=INF;
int cnt;
void dfs(int i)
{
    for(int j=beginn;j<=n;j++)
        if(g[i][j])
        {
            g[i][j]--;
            g[j][i]--;
            dfs(j);
        }
    path[cnt++]=i;
}
int main()
{
    cin>>m;
    for(int i=1;i<=m;i++)
    {
        int x,y;
        cin>>x>>y;
        g[x][y]++;
        g[y][x]++;
        dis[x]++;
        dis[y]++;
        n=max(n,max(x,y));
        beginn=min(beginn,min(x,y));
    }
    int start=beginn;
    int sum=0;
    for(int i=beginn;i<=n;i++)
        if(dis[i]%2)
        {
            sum++;
            if(sum==1)
                start=i;
        }
    dfs(start);
    for(int i=cnt-1;i>=0;i--)
        cout<<path[i]<<endl;
    return 0;
}