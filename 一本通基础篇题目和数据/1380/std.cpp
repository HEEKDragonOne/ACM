#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<string>
#include<cstdlib>
#include<queue>
#include<set>
#include<vector>
#define INF 0x3f3f3f3f
#define PI acos(-1.0)
#define N 10010
#define MOD 123
#define E 1e-6
using namespace std;
struct node{
    int pre;
    int next;
    int w;
}a[N*20];
int cnt;
int head[N],q[N*10];
int vis[N],f[N];
void add(int x,int y,int w)
{
    cnt++;
    a[cnt].pre=y;
    a[cnt].next=head[x];
    a[cnt].w=w;
    head[x]=cnt;

    cnt++;
    a[cnt].pre=x;
    a[cnt].next=head[y];
    a[cnt].w=w;
    head[y]=cnt;
}

int main()
{
    int n,m,c,p;
    cin>>n>>p>>c>>m;
    for(int i=1;i<=p;i++)
    {
        int x,y;
        cin>>x>>y;
        add(x,y,1);
    }

    memset(f,INF,sizeof(f));
    f[c]=0;
    vis[c]=1;

    int headd=1,tail=1;
    q[tail]=c;
    tail++;

    while(headd<tail)
    {
        int x=q[headd];
        int k=head[x];
        while(k!=0)
        {
            int y=a[k].pre;
            if(f[y]>f[x]+a[k].w)
            {
                f[y]=f[x]+a[k].w;
                if(vis[y]==0)
                {
                    q[tail]=y;
                    vis[y]=1;
                    tail++;
                }
            }
            k=a[k].next;
        }
        headd++;
    }

    int maxx=-INF;
    for(int i=1;i<=n;i++)
        maxx=max(maxx,f[i]);
    cout<<maxx+m+1<<endl;
    return 0;
}