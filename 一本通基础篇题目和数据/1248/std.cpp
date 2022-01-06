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
int X,Y,Z;
char a[N][N][N];
bool vis[N][N][N];
int dir[6][3]={{1,0,0},{-1,0,0},{0,1,0},{0,-1,0},{0,0,1},{0,0,-1}};
struct node
{
    int x;
    int y;
    int z;
    int step;
}q[N*10000];
void bfs(int sx,int sy,int sz,int ex,int ey,int ez)
{
    int head=1,tail=1;
    bool flag=true;
    memset(vis,0,sizeof(vis));

    vis[sx][sy][sz]=1;
    q[tail].x=sx;
    q[tail].y=sy;
    q[tail].z=sz;
    q[tail].step=0;
    tail++;

    while(head<tail)
    {
        int x=q[head].x;
        int y=q[head].y;
        int z=q[head].z;
        int step=q[head].step;
        if(x==ex&&y==ey&&z==ez)
        {
            flag=false;
            printf("Escaped in %d minute(s).\n",step);
            break;
        }
        for(int i=0;i<6;i++)
        {
            int nx=x+dir[i][0];
            int ny=y+dir[i][1];
            int nz=z+dir[i][2];
            if(0<=nx&&nx<X&&0<=ny&&ny<Y&&0<=nz&&nz<Z&&a[nx][ny][nz]=='.'&&vis[nx][ny][nz]==0)
            {
                vis[nx][ny][nz]=1;
                q[tail].x=nx;
                q[tail].y=ny;
                q[tail].z=nz;
                q[tail].step=step+1;
                tail++;
            }
        }
        head++;
    }
    if(flag)
        printf("Trapped!\n");

}
int main()
{
    int sx,sy,sz,ex,ey,ez;
    while(scanf("%d%d%d",&X,&Y,&Z)!=EOF&&X&&Y&&Z)
    {
        for(int i=0;i<X;i++)
            for(int j=0;j<Y;j++)
                scanf("%s",a[i][j]);
        for(int i=0;i<X;i++)
            for(int j=0;j<Y;j++)
                for(int k=0;k<Z;k++)
                {
                    if(a[i][j][k]=='S')
                    {
                        sx=i;
                        sy=j;
                        sz=k;
                    }
                    if(a[i][j][k]=='E')
                    {
                        ex=i;
                        ey=j;
                        ez=k;
                        a[i][j][k]='.';
                    }
                }
        bfs(sx,sy,sz,ex,ey,ez);
    }
    return 0;
}