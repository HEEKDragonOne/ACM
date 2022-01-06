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
int n,t;
int w[N];
long long f[N][N];
int main()
{
    cin>>n>>t;
    for(int i=1;i<=n;i++)
    {
        cin>>w[i];
        f[i][w[i]]=1;
    }

    for(int i=1;i<=n;i++)
        for(int j=1;j<=t;j++)
            if(j<w[i])
                f[i][j]+=f[i-1][j];
            else
                f[i][j]+=f[i-1][j]+f[i-1][j-w[i]];
    cout<<f[n][t]<<endl;
    return 0;
}