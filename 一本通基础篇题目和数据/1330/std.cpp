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
#define N 101
#define MOD 2520
#define E 1e-12
using namespace std;
int a[N][N];
bool vis[N][N];
int dir[][2]={{-2,1},{-2,-1},{-2,2},{-2,-2},{-1,-2},{-1,2},{1,-2},{1,2},{2,-1},{2,1},{2,-2},{2,2}};
struct node
{
    int x;
    int y;
    int step;
}q[N*100];
void bfs(int x0,int y0)
{
    int head=1,tail=1;
    memset(vis,0,sizeof(vis));

    q[tail].x=x0;
    q[tail].y=y0;
    q[tail].step=0;
    tail++;
    vis[x0][y0]=1;
    while(head<tail)
    {
        int x=q[head].x;
        int y=q[head].y;
        int step=q[head].step;
        if(x==1&&y==1)
        {
            printf("%d\n",step);
            break;
        }
        for(int i=0;i<12;i++)
        {
            int nx=x+dir[i][0];
            int ny=y+dir[i][1];
            if(nx>=1&&nx<=100&&ny>=1&&ny<=100&&vis[nx][ny]==0)
            {
                vis[nx][ny]=1;
                q[tail].x=nx;
                q[tail].y=ny;
                q[tail].step=step+1;
                tail++;
            }
        }
        head++;
    }
}
int main()
{
    int xa,ya,xb,yb;
    scanf("%d%d%d%d",&xa,&ya,&xb,&yb);
    bfs(xa,ya);
    bfs(xb,yb);
    return 0;
}