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
#define N 100001
#define MOD 2520
#define E 1e-12
using namespace std;
bool vis[N];
int dir[2]={-1,1};
struct node
{
    int x;
    int step;
}q[N*10];
void bfs(int n,int k)
{
    int head=1,tail=1;
    memset(vis,0,sizeof(vis));

    vis[n]=1;
    q[tail].x=n;
    q[tail].step=0;
    tail++;

    while(head<tail)
    {
        int x=q[head].x;
        int step=q[head].step;
        if(x==k)
        {
            printf("%d\n",step);
            break;
        }
        int nx;
        for(int i=0;i<2;i++)
        {
            nx=x+dir[i];
            if(0<=nx&&nx<N&&vis[nx]==0)
            {
                vis[nx]=1;
                q[tail].x=nx;
                q[tail].step=step+1;
                tail++;
            }
        }
        nx=x*2;
        if(nx>=0&&nx<N&&vis[nx]==0)
        {
            vis[nx]=1;
            q[tail].x=nx;
            q[tail].step=step+1;
            tail++;
        }
        head++;
    }
}
int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    if(k<n)
    {
        printf("%d",n-k);
        exit(0);
    }
    bfs(n,k);

    return 0;
}