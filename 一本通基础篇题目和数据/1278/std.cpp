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
#define N 101
#define MOD 2520
#define E 1e-12
using namespace std;
int a[N],b[N],c[N][N];
int sum[N],f[N][N];
int main()
{
    int m,n;
    cin>>m>>n;
    for(int i=1;i<=m;i++)
    {
        cin>>a[i];
        sum[i]=sum[i-1]+a[i];
    }

    sum[0]=0;
    memset(f,INF,sizeof(f));
    for(int i=1;i<=m;i++)
        f[1][i]=sum[i];

    for(int i=2;i<=n;i++)
        for(int j=1;j<=m;j++)
            for(int k=i-1;k<j;k++)
                f[i][j]=min(f[i][j],max(f[i-1][k],sum[j]-sum[k]));

    int maxx=f[n][m];
    int temp=n;
    for(int i=m;i>0;i--)
    {
        if(a[i]+b[temp]>maxx)
            temp--;
        b[temp]+=a[i];
        c[temp][++c[temp][0]]=i;
    }

    for(int i=1;i<=n;i++)
        cout<<c[i][c[i][0]]<<" "<<c[i][1]<<endl;
    return 0;
}