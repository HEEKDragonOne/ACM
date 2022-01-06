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
#define N 10001
#define MOD 2520
#define E 1e-12
using namespace std;
int m,n;
int w[N],c[N],num[N],f[N];
void ZeroOnePack(int cost,int weight)
{
    for(int v=m;v>=weight;v--)
        f[v]=max(f[v],f[v-weight]+cost);
}
void CompletePack(int cost,int weight)
{
    for(int v=weight;v<=m;v++)
        f[v]=max(f[v],f[v-weight]+cost);
}
void MultiplePack(int cost,int weight,int num)
{
    for(int j=m;j>=0;j--)
        for(int k=0;k<=num;k++)
            if(j-k*weight>=0)
                f[j]=max(f[j],f[j-k*weight]+k*cost);
}
int main()
{
    cin>>m>>n;
    for(int i=1;i<=n;i++)
        cin>>w[i]>>c[i]>>num[i];

    for(int i=1;i<=n;i++)
    {
        if(num[i]==1)//0-1背包
            ZeroOnePack(c[i],w[i]);
        else if(num[i]==0)//完全背包
            CompletePack(c[i],w[i]);
        else//多重背包
            MultiplePack(c[i],w[i],num[i]);
    }
    cout<<f[m]<<endl;
    return 0;
}