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
#define N 10001
#define MOD 123
#define E 1e-6
using namespace std;
int n,p,c;
int g[N],head[N];
int vis[N],f[N],q[N];
int cnt;
struct node{
    int pre;
    int next;
    int w;
}a[N];
void SPFA(int s)
{
    int headd=1,tail=1;

    q[tail]=s;
    tail++;

    memset(vis,0,sizeof(vis));
    for(int i=1;i<=p;i++)
        f[i]=INF;

    f[s]=0;
    vis[s]=1;


    while(headd<tail)
    {
        int u=q[headd];
        for(int b=head[u];b;b=a[b].next)
        {
            int v=a[b].pre;
            int w=a[b].w;
            if(f[v]>f[u]+w)
            {
                f[v]=f[u]+w;
                if(vis[v]==0)
                {
                    q[tail]=v;
                    tail++;
                    vis[v]=1;
                }
            }
        }
        vis[u]=0;
        headd++;
    }
}
void add_edge(int x,int y,int w)
{
    cnt++;
    a[cnt].pre=y;
    a[cnt].w=w;
    a[cnt].next=head[x];
    head[x]=cnt;
}
int main()
{
    cin>>n>>p>>c;
    for(int i=1;i<=n;i++)
        cin>>g[i];
    for(int i=1;i<=c;i++)
    {
        int x,y,w;
        cin>>x>>y>>w;
        add_edge(x,y,w);
        add_edge(y,x,w);
    }

    int sum=0;
    int minn=INF;
    for(int i=1;i<=p;i++)
    {
        SPFA(i);
        sum=0;
        for(int j=1;j<=n;j++)
            sum+=f[g[j]];
        minn=min(sum,minn);
    }
    cout<<minn<<endl;
    return 0;
}