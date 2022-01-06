#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<string>
#include<cstdlib>
#include<queue>
#include<set>
#include<stack>
#include<vector>
#define INF 0x3f3f3f3f
#define PI acos(-1.0)
#define N 10001
#define MOD 123
#define E 1e-6
using namespace std;
int father[N];
int c[N],d[N];
int dp[N];
int Find(int x)
{
    if(father[x]==x)
        return x;
    return father[x]=Find(father[x]);
}
void Union(int x,int y)
{
    x=Find(x);
    y=Find(y);
    if(x!=y)
    {
        father[y]=x;
        c[x]+=c[y];
        d[x]+=d[y];
    }
}
int main()
{
    int n,m,w;
    cin>>n>>m>>w;
    for(int i=1;i<=n;i++)
        father[i]=i;
    for(int i=1;i<=n;i++)
        cin>>c[i]>>d[i];
    for(int i=1;i<=m;i++)
    {
        int u,v;
        cin>>u>>v;
        Union(u,v);
    }

    for(int i=1;i<=n;i++)
        Find(i);

    for(int i=1;i<=n;i++)
        if(father[i]==i)
            for(int j=w;j>=c[i];j--)
                dp[j]=max(dp[j],dp[j-c[i]]+d[i]);

    cout<<dp[w]<<endl;
    return 0;
}