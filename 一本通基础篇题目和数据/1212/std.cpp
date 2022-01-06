#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#define N 30
using namespace std;
int r,s;
char a[N][N];
int vis[N][N];
int num[26];
int dir[4][2]={{0,1},{0,-1},{1,0},{-1,0}};
int maxx=0;
void dfs(int x,int y,int step)
{
    if(maxx<step)
        maxx=step;
    for(int i=0;i<4;i++)
    {
        int nx=x+dir[i][0];
        int ny=y+dir[i][1];
        if(nx>=0&&nx<r&&ny>=0&&ny<s&&vis[nx][ny]==0&&num[a[nx][ny]-'A']==0)
        {
            vis[nx][ny]=1;
            num[a[nx][ny]-'A']=1;
            dfs(nx,ny,step+1);
            vis[nx][ny]=0;
            num[a[nx][ny]-'A']=0;
        }
    }
}
int main()
{
    cin>>r>>s;
    for(int i=0;i<r;i++)
        for(int j=0;j<s;j++)
            cin>>a[i][j];
    num[a[0][0]-'A']=1;
    vis[0][0]=1;
    dfs(0,0,1);
    cout<<maxx<<endl;
    return 0;
}