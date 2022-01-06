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
#define MOD 100001
#define E 1e-12
using namespace std;
int f[N][N];
int main()
{
    int n,k;
    cin>>n>>k;
    f[0][0]=1;
    for(int i=1;i<=k;i++)
        for(int j=i;j<=n;j++)
            f[i][j]=f[i][j-i]+f[i-1][j-1];
    cout<<f[k][n]<<endl;
    return 0;
}