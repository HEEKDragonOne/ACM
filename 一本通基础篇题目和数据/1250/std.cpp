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
#define N 51
#define MOD 2520
#define E 1e-12
using namespace std;
int n,m;
int a[N][N];
int b[4]={1,2,4,8};
bool vis[N][N];
int sum,maxx;
int dir[4][2]={{0,-1},{-1,0},{0,1},{1,0}};
struct node
{
    int x;
    int y;
}q[N*100];
void bfs(int x0,int y0)
{
    int head=1,tail=1;
    int cnt=1;

    vis[x0][y0]=1;
    q[tail].x=x0;
    q[tail].y=y0;
    tail++;

    while(head<tail)
    {
        int x=q[head].x;
        int y=q[head].y;
        for(int i=0;i<4;i++)
        {
            int nx=x+dir[i][0];
            int ny=y+dir[i][1];
            if(nx>=1&&nx<=n&&ny>=1&&ny<=m&&vis[nx][ny]==0&&(a[x][y]&b[i])==0)
            {
                cnt++;
                vis[nx][ny]=1;
                q[tail].x=nx;
                q[tail].y=ny;
                tail++;
            }
        }
        head++;
    }
    if(cnt>maxx)
        maxx=cnt;
    sum++;
}
int main()
{
    memset(vis,0,sizeof(vis));
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            scanf("%d",&a[i][j]);

     for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            if(vis[i][j]==0)
                bfs(i,j);
    printf("%d\n%d\n",sum,maxx);
    return 0;
}