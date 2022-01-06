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
#define N 201
#define MOD 2520
#define E 1e-12
using namespace std;
int g[N][N];
int w[N],pre[N];
int f[N];
void print(int k)
{
    if(k==0)
        return;

    print(pre[k]);

    if(pre[k]==0)
        cout<<k;
    else
        cout<<"-"<<k;
}
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>w[i];
        f[i]=w[i];
    }

    int x,y;
    while(scanf("%d%d",&x,&y)!=EOF&&x&&y)
        g[x][y]=1;

    int maxx=-INF,k;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if( g[j][i]==1 && f[j]+w[i]>f[i] )
            {
                f[i]=f[j]+w[i];
                pre[i]=j;
            }
        }
        if(f[i]>maxx)
        {
            maxx=f[i];
            k=i;
        }
    }
    print(k);
    cout<<endl<<maxx;
    return 0;
}
