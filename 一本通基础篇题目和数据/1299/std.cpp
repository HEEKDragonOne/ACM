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
int a[N];
int f[N][N];
int main()
{
    int n,k;
    cin>>n>>k;
    for(int i=1;i<=n;i++)
        cin>>a[i];

    for(int i=1;i<k;i++)
        f[0][i]=-INF;
    for(int i=1;i<=n;i++)
        for(int j=0;j<k;j++)
            f[i][j]=max(f[i-1][j],f[i-1][(k+j-a[i]%k)%k]+a[i]);

    cout<<f[n][0]<<endl;
    return 0;
}