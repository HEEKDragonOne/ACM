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
int a[N][N],f[N][N];
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            cin>>a[i][j];

    f[1][1]=a[1][1];
    for(int i=2;i<=n;i++)
        f[i][1]=f[i-1][1]+a[i][1];
    for(int j=2;j<=n;j++)
        f[1][j]=f[1][j-1]+a[1][j];

    for(int i=2;i<=n;i++)
        for(int j=2;j<=n;j++)
            f[i][j]=min(f[i-1][j],f[i][j-1])+a[i][j];

    cout<<f[n][n]<<endl;

    return 0;
}