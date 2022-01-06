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
#define N 310
#define MOD 2520
#define E 1e-12
using namespace std;
int n;
char a[N][N];
bool vis[N][N];
int dir[8][2]={{-2,1},{-1,2},{1,2},{2,1},{2,-1},{1,-2},{-1,-2},{-2,-1}};
struct node
{
    int x;
    int y;
    int step;
}q[100000];
void bfs(int sx,int sy,int ex,int ey)
{
    int head=1,tail=1;
    memset(vis,0,sizeof(vis));

    vis[sx][sy]=1;
    q[tail].x=sx;
    q[tail].y=sy;
    q[tail].step=0;
    tail++;

    while(head<tail)
    {
        int x=q[head].x;
        int y=q[head].y;
        int step=q[head].step;
        if(x==ex&&y==ey)
        {
            printf("%d\n",step);
            break;
        }
        for(int i=0;i<8;i++)
        {
            int nx=x+dir[i][0];
            int ny=y+dir[i][1];
            if(nx>=0&&nx<n&&ny>=0&&ny<n&&vis[nx][ny]==0)
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
    int t;
    int sx,sy,ex,ey;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        scanf("%d%d%d%d",&sx,&sy,&ex,&ey);
        bfs(sx,sy,ex,ey);
    }


    return 0;
}