#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<string>
#include<cstdlib>
#include<queue>
#include<vector>
#include<set>
#define INF 0x3f3f3f3f
#define PI acos(-1.0)
#define N 100001
#define MOD 123
#define E 1e-6
using namespace std;
int n,m;
int head[N],side[N];
int f[N],q[N];
int vis[N];
int cnt;
struct node{
    int pre;
    int next;
}a[N];
void add_edge(int x,int y)
{
    cnt++;
    a[cnt].pre=y;
    a[cnt].next=head[x];
    head[x]=cnt;
}
void topsort(int x)
{
    int headd=1,tail=1;
    vis[x]=1;
    q[tail]=x;
    tail++;
    while(headd<tail)
    {
        int u=q[headd];
        for(int b=head[u];b;b=a[b].next)
        {
            int v=a[b].pre;
            side[v]--;
            f[v]=max(f[v],f[u]+1);
            if(side[v]==0)
            {
                q[tail]=v;
                tail++;
                vis[v]=1;
            }
        }
        headd++;
    }
}
int main()
{
    int sum=0;
    cin>>n>>m;

    for(int i=1;i<=n;i++)
        f[i]=100;

    for(int i=1;i<=m;i++)
    {
        int x,y;
        cin>>y>>x;
        add_edge(x,y);
        side[y]++;
    }

    for(int i=1;i<=n;i++)
        if(!vis[i]&&!side[i])
            topsort(i);

    for(int i=1;i<=n;i++)
        if(!vis[i])
        {
            cout<<"Poor Xed"<<endl;
            return 0;
        }

    for(int i=1;i<=n;i++)
        sum+=f[i];

    cout<<sum<<endl;
    return 0;
}