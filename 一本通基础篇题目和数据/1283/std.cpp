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
int a[N],f[N],d[N];
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];

    for(int i=1;i<=n;i++)
    {
        f[i]=1;
        for(int j=1;j<i;j++)
            if(a[j]<a[i]&&f[j]+1>f[i])
                f[i]=f[j]+1;
    }
    for(int i=n;i>=1;i--)
    {
        d[i]=1;
        for(int j=n;j>i;j--)
            if(a[j]<a[i]&&d[j]+1>d[i])
                d[i]=d[j]+1;
    }

    int maxx=-INF;
    for(int i=1;i<=n;i++)
        maxx=max(maxx,f[i]+d[i]-1);

    cout<<maxx<<endl;

    return 0;
}