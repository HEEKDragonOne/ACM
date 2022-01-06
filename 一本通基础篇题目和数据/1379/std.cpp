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
int head[N],vis[N],f[N];
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
    int t,c,start,endd;
    cin>>t>>c>>start>>endd;
    for(int i=1;i<=c;i++)
    {
        int x,y,w;
        cin>>x>>y>>w;
        add(x,y,w);
    }
    memset(f,INF,sizeof(f));
    f[start]=0;

    for(int i=1;i<=t;i++)
    {
        int x=0;
        int minn=INF;
        for(int j=1;j<=t;j++)
            if(vis[j]==0&&f[j]<minn)
            {
                minn=f[j];
                x=j;
            }
        vis[x]=1;

        int k=head[x];
        while(k!=0)
        {
            int y=a[k].pre;
            if(vis[y]==0&&f[x]+a[k].w<f[y])
                f[y]=f[x]+a[k].w;
            k=a[k].next;
        }
    }
    cout<<f[endd]<<endl;
    return 0;
}
