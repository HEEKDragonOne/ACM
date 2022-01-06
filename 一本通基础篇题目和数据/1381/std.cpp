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
#define N 3001
#define MOD 123
#define E 1e-6
using namespace std;
struct node{
    int pre;
    int next;
    int w;
}a[N*10];
int n,m;
int cnt;
int head[N],vis[N],f[N];
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
    cin>>n>>m;
    for(int i=1;i<=m;i++)
    {
        int x,y,w;
        cin>>x>>y>>w;
        add(x,y,w);
    }
    
    memset(f,INF,sizeof(f));
    f[1]=0;
    vis[1]=1;

    int x=head[1];
    while(x!=0)
    {
        int y=a[x].pre;
        if(f[y]>a[x].w)
            f[y]=a[x].w;
        x=a[x].next;
    }

    int cnt=0;
    while(cnt<n)
    {
        cnt++;
        int k;
        int minn=INF;
        for(int i=1;i<=n;i++)
            if(vis[i]==0&&f[i]<minn)
            {
                minn=f[i];
                k=i;
            }
        vis[k]=1;

        int x=head[k];
        while(x!=0)
        {
            int y=a[x].pre;
            int w=a[x].w;
            if(vis[y]==0&&f[y]>f[k]+w)
                f[y]=f[k]+w;
            x=a[x].next;
        }
    }
    
    if(f[n]==INF)
        cout<<"-1"<<endl;
    else
        cout<<f[n]<<endl;
    return 0;
}
