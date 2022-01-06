#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#define N 10
using namespace std;
int n,k;
char maps[N][N];
int vis[N];
int dir[4][2]={{0,1},{0,-1},{1,0},{-1,0}};
int cnt;
void dfs(int x,int y)
{
    if(y==k)
    {
        cnt++;
        return;
    }
    for(int i=x;i<=n;i++)
        for(int j=1;j<=n;j++)
            if(maps[i][j]=='#'&&vis[j])
            {
                vis[j]=0;
                dfs(i+1,y+1);
                vis[j]=1;
            }
    return;
}
int main()
{
    while(scanf("%d%d",&n,&k)!=EOF)
    {
        if(n==-1&&k==-1)
            break;

        memset(vis,1,sizeof(vis));

        for(int i=1;i<=n;i++)
            for(int j=1;j<=n;j++)
                cin>>maps[i][j];

        cnt=0;
        dfs(1,0);
        cout<<cnt<<endl;
    }
    return 0;
}