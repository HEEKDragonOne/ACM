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
#define N 1001
#define MOD 2520
#define E 1e-12
int dir[4][2]={{1,0},{-1,0},{0,1},{0,-1}};
using namespace std;
int n,m;
char g[N][N];
struct node{
    int x;
    int y;
}q[N*1000];
void bfs(int x0,int y0)
{
    int head=1,tail=1;

    q[tail].x=x0;
    q[tail].y=y0;
    tail++;

    while(head<tail)
    {
        int x=q[head].x;
        int y=q[head].y;
        g[x][y]='0';
        for(int i=0;i<4;i++)
        {
            int nx=x+dir[i][0];
            int ny=y+dir[i][1];
            if(0<=nx&&nx<n&&0<=ny&&ny<m&&g[nx][ny]!='0')
            {
                q[tail].x=nx;
                q[tail].y=ny;
                tail++;
            }
        }
        head++;
    }
}
int main()
{
    int cnt=0;
    scanf("%d%d",&n,&m);
    for(int i=0;i<n;i++)
        scanf("%s",g[i]);
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            if(g[i][j]!='0')
            {
                cnt++;
                bfs(i,j);
            }
    printf("%d\n",cnt);
    return 0;
}