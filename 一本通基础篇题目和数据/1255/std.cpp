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
#define N 26
#define MOD 2520
#define E 1e-12
using namespace std;
int n=5;
char a[N][N];
bool vis[N][N];
int dir[4][2]={{-1,0},{1,0},{0,-1},{0,1}};
struct node
{
    int x;
    int y;
}q[N*100],res[N][N];
void print(int x,int y)
{
    if(x==-1&&y==-1)
        return;
    print(res[x][y].x,res[x][y].y);
    printf("(%d, %d)\n",x,y);
}
void bfs(int sx,int sy,int ex,int ey)
{
    int head=1,tail=1;
    memset(vis,0,sizeof(vis));

    vis[sx][sy]=1;
    res[sx][sy].x=-1;
    res[sx][sy].y=-1;
    q[tail].x=sx;
    q[tail].y=sy;
    tail++;

    while(head<tail)
    {
        int x=q[head].x;
        int y=q[head].y;
        if(x==ex&&y==ey)
        {
            print(x,y);
            break;
        }
        for(int i=0;i<4;i++)
        {
            int nx=x+dir[i][0];
            int ny=y+dir[i][1];
            if(nx>=0&&nx<n&&ny>=0&&ny<n&&vis[nx][ny]==0&&a[nx][ny]==0)
            {
                vis[nx][ny]=1;
                q[tail].x=nx;
                q[tail].y=ny;
                tail++;
                res[nx][ny].x=x;
                res[nx][ny].y=y;
            }
        }
        head++;
    }
}
int main()
{
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    bfs(0,0,n-1,n-1);

    return 0;
}