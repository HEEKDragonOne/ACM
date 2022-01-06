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
#define N 10001
#define MOD 123
#define E 1e-6
using namespace std;
int father[N];
struct Node{
    int p;
    int u;
    int v;
    int w;
}g[N*N];
int cmp(Node a,Node b)
{
    if(a.p==2&&b.p==2)
        return a.w<b.w;
    return a.p<b.p;
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
        cin>>g[i].p>>g[i].u>>g[i].v>>g[i].w;

    sort(g+1,g+1+m,cmp);
    int sum=0;
    for(int i=1;i<=m;i++)
    {
        if(g[i].p==1)
        {
            sum+=g[i].w;
            Union(g[i].u,g[i].v);
        }
        else if(g[i].p==2)
        {
            if(Union(g[i].u,g[i].v))
                sum+=g[i].w;
        }
    }
    cout<<sum<<endl;
    return 0;
}
