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
int m,n,k;
int a[N],b[N],c[N],f[N][N];
void TwoDimensionPack(int weight_1,int weight_2,int cost)
{
    for(int j=m;j>=0;j--)
        for(int k=n;k>=0;k--)
            {
                int u=j+weight_1;
                int v=k+weight_2;
                if(u>=m)
                    u=m;
                if(v>=n)
                    v=n;
                f[u][v]=min(f[u][v],f[j][k]+cost);
            }
}
int main()
{
    cin>>m>>n>>k;
    for(int i=1;i<=k;i++)
        cin>>a[i]>>b[i]>>c[i];

    memset(f,INF,sizeof(f));
    f[0][0]=0;

    for(int i=1;i<=k;i++)
        TwoDimensionPack(a[i],b[i],c[i]);
    cout<<f[m][n]<<endl;
    return 0;
}