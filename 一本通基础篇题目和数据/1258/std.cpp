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
        for(int j=1;j<=i;j++)
            cin>>a[i][j];

    for(int j=1;j<=n;j++)
        f[n][j]=a[n][j];
    for(int i=n-1;i>=1;i--)
        for(int j=1;j<=i;j++)
            f[i][j]=max(f[i+1][j]+a[i][j],f[i+1][j+1]+a[i][j]);

    cout<<f[1][1]<<endl;

    return 0;
}