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
int sum[N],f[N][N];
int main()
{
    int n,a;
    memset(f,INF,sizeof(f));
    
    cin>>n;
    sum[0]=0;
    for(int i=1;i<=n;i++)
    {
        cin>>a;
        sum[i]=sum[i-1]+a;
    }
    for(int i=1;i<=n;i++)
        f[i][i]=0;
    for(int i=n;i>=1;i--)
        for(int j=i+1;j<=n;j++)
            for(int k=i;k<=j-1;k++)
                f[i][j]=min(f[i][j],f[i][k]+f[k+1][j]+sum[j]-sum[i-1]);
    cout<<f[1][n]<<endl;
    return 0;
} 