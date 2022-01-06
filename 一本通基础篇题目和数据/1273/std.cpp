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
long long a[N],f[N];
int main()
{
    int n,m;
    cin>>n>>m;
    f[0]=1;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=1;i<=n;i++)
        for(int j=a[i];j<=m;j++)
            f[j]+=f[j-a[i]];
    cout<<f[m]<<endl;
    return 0;
}