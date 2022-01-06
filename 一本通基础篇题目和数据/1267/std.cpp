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
#define N 1001
#define MOD 2520
#define E 1e-12
using namespace std;
int m,n;
int w[N],c[N],f[N];
void ZeroOnePack(int cost,int weight)
{
    for(int v=m;v>=weight;v--)
        f[v]=max(f[v],f[v-weight]+cost);
}

int main()
{
    cin>>m>>n;
    for(int i=1;i<=n;i++)
        cin>>w[i]>>c[i];
    for(int i=1;i<=n;i++)
        ZeroOnePack(c[i],w[i]);
    cout<<f[m]<<endl;
    return 0;
}