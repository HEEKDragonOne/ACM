#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#define N 101
using namespace std;
char ch;
int n,xa,ya,xb,yb;
bool flag;
int vis[N][N];
int dir[4][2]={{0,1},{0,-1},{1,0},{-1,0}};
void dfs(int x,int y)
{
    for(int i=0;i<4;i++)
    {
        int nx=x+dir[i][0];
        int ny=y+dir[i][1];
        if(nx>=0&&nx<n&&ny>=0&&ny<n&&vis[nx][ny]==0)
        {
            vis[nx][ny]=1;
            if(nx==xb&&ny==yb)
            {
                cout<<"YES"<<endl;
                flag=true;
                break;
            }
            else
                dfs(nx,ny);
        }
    }
}
int main()
{
    int k;
    cin>>k;

    while(k--)
    {
        memset(vis,0,sizeof(vis));
        flag=false;
        cin>>n;
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
            {
                cin>>ch;
                if(ch=='#')
                    vis[i][j]=1;
            }
        cin>>xa>>ya;
        cin>>xb>>yb;
        if(vis[xa][ya]||vis[xb][yb])
        {
            cout<<"NO"<<endl;
            continue;
        }
        else
            dfs(xa,ya);
        if(!flag)
            cout<<"NO"<<endl;
    }
    return 0;
}