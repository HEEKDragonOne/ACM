#include<iostream>
#include<cstdio>
#define INF 0x3f3f3f3f
#define N 100100
using namespace std;
struct node{
    int pre;
    int next;
    int w;
}a[N*10];
int q[N*10],head[N];
int vis[N],f[N];
int cnt;
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
    int n,m;
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

    int headd=1,tail=1;
    q[tail]=1;
    tail++;
    while(headd<tail)
    {
        int x=q[headd];
        int temp=head[x];
        while(temp!=0)
        {
           int y=a[temp].pre;
            if(f[y]>f[x]+a[temp].w)
            {
                f[y]=f[x]+a[temp].w;
                if(vis[y]==0)
                {
                    vis[y]=1;
                    q[tail]=y;
                    tail++;
                }
            }
            temp=a[temp].next;
        }
        vis[x]=0;
        headd++;
    }
    cout<<f[n]<<endl;
    return 0;
}