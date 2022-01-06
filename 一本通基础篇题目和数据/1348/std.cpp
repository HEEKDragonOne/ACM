#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<string>
#include<cstdlib>
#include<queue>
#include<set>
#include<map>
#include<stack>
#include<vector>
#define INF 0x3f3f3f3f
#define PI acos(-1.0)
#define N 1001
#define MOD 123
#define E 1e-6
using namespace std;
int father[N];
struct Node{
    int u;
    int v;
    int w;
}g[N*N],dis[N];
void quick_sort(int left,int right)
{
    int i=left,j=right;
    int mid=g[(left+right)/2].w;
    while(i<=j)
    {
        while(g[i].w<mid)
            i++;
        while(g[j].w>mid)
            j--;
        if(i<=j)
        {
            swap(g[i],g[j]);
            i++;
            j--;
        }
    }
    if(i<right)
        quick_sort(i,right);
    if(left<j)
        quick_sort(left,j);
}
int Find(int x)
{
    if(father[x]==x)
        return x;
    return father[x]=Find(father[x]);
}
int Union(int x,int y)
{
    x=Find(x);
    y=Find(y);
    if(x!=y)
    {
        father[y]=x;
        return 1;
    }
    return 0;
}
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        father[i]=i;
    for(int i=1;i<=m;i++)
    {
        int u,v,w;
        cin>>u>>v>>w;
        if(u>v)//小点在前
            swap(u,v);
        g[i].u=u;
        g[i].v=v;
        g[i].w=w;
    }

    int sum=0;
    quick_sort(1,m);
    for(int i=1;i<=m;i++)
        sum+=g[i].w;

    int cnt=0;
    for(int i=1;i<=m;i++)
        if(Union(g[i].u,g[i].v))
        {
            cnt++;
            dis[cnt].u=g[i].u;
            dis[cnt].v=g[i].v;
            dis[cnt].w=g[i].w;
            if(cnt==n-1)
                break;
        }
    for(int i=1;i<=cnt;i++)
        for(int j=i+1;j<=cnt;j++)
        {
            if(dis[i].u>dis[j].u)
                swap(dis[i],dis[j]);
            else if(dis[i].u==dis[j].u&&dis[i].v>dis[j].v)
                swap(dis[i],dis[j]);
        }

    for(int i=1;i<=cnt;i++)
        cout<<dis[i].u<<" "<<dis[i].v<<endl;
    return 0;
}
