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
int a[N][N],f[N][N];
int r,c;
int dir[4][2]={{-1,0},{1,0},{0,-1},{0,1}};
int dfs(int x,int y,int step)
{
    int temp=1;

    if(f[x][y]>0)
        return f[x][y];

    for(int i=0;i<4;i++)
    {
        int nx=x+dir[i][0];
        int ny=y+dir[i][1];
        if(nx>=1&&nx<=r&&ny>=1&&ny<=c&&a[x][y]>a[nx][ny])
            temp=max(temp,dfs(nx,ny,step+1)+1);
    }
    f[x][y]=temp;
    return temp;
}
int main()
{
    cin>>r>>c;
    for(int i=1;i<=r;i++)
        for(int j=1;j<=c;j++)
            cin>>a[i][j];

    int maxx=-INF;
    for(int i=1;i<=r;i++)
        for(int j=1;j<=c;j++)
            maxx=max(maxx,dfs(i,j,1));

    cout<<maxx<<endl;
    return 0;
}