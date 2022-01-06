#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#define N 100
using namespace std;
int a[N][N],b[N];
int vis[N][N];
int tot;
int dir[4][2]={{0,1},{0,-1},{1,0},{-1,0}};
void dfs(int step)
{
    if(step==8+1)
    {
        tot++;
        for(int i=1;i<=8;i++)
            a[tot][i]=b[i];
        return;
    }
    for(int i=1;i<=8;i++)
    {
        if(vis[0][i]==0&&vis[1][step+i]==0&&vis[2][step-i+8]==0)
        {
            vis[0][i]=1;
            vis[1][i+step]=1;
            vis[2][step-i+8]=1;
            b[step]=i;
            dfs(step+1);
            vis[0][i]=0;
            vis[1][i+step]=0;
            vis[2][step-i+8]=0;
        }
    }
}
int main()
{
    int n;
    cin>>n;
    dfs(1);
    while(n--)
    {
        int i;
        cin>>i;
        for(int j=1;j<=8;j++)
            cout<<a[i][j];
        cout<<endl;
    }
    return 0;
}