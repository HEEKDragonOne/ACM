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
#define N 11
#define MOD 123
#define E 1e-6
using namespace std;
int a[N][N];
int vis[N][N];
int dir[4][2]={{-1,0},{1,0},{0,-1},{0,1}};
int cnt=0;
struct node{
    int x;
    int y;
}q[200];
void bfs(int x0,int y0)
{
    a[x0][y0]=1;
    vis[x0][y0]=1;

    int head=1,tail=1;
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
            if(1<=nx&&nx<=10&&1<=ny&&ny<=10&&a[nx][ny]==0&&vis[nx][ny]==0)
            {
                vis[nx][ny]=1;
                a[nx][ny]=1;
                q[tail].x=nx;
                q[tail].y=ny;
                tail++;
            }
        }
        head++;
    }
}
void bfs_cnt(int x0,int y0)
{
    vis[x0][y0]=1;
    cnt++;

    int head=1,tail=1;
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
            if(1<=nx&&nx<=10&&1<=ny&&ny<=10&&a[nx][ny]==0&&vis[nx][ny]==0)
            {
                vis[nx][ny]=1;
                q[tail].x=nx;
                q[tail].y=ny;
                tail++;
                cnt++;
            }
        }
        head++;
    }
}
int main()
{
    for(int i=1;i<=10;i++)
        for(int j=1;j<=10;j++)
            cin>>a[i][j];

    for(int j=1;j<=10;j++)
        if(a[1][j]==0)
            bfs(1,j);
    for(int j=1;j<=10;j++)
        if(a[10][j]==0)
            bfs(10,j);
    for(int i=1;i<=10;i++)
        if(a[1][i]==0)
            bfs(1,i);
    for(int i=1;i<=10;i++)
        if(a[10][i]==0)
            bfs(10,i);

    for(int i=1;i<=10;i++)
        for(int j=1;j<=10;j++)
            if(a[i][j]==0&&vis[i][j]==0)
                bfs_cnt(i,j);

    cout<<cnt<<endl;
    return 0;
}