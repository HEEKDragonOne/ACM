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
int a[N],f[N];
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];

    int maxx=-INF;
    for(int i=1;i<=n;i++)
    {
        f[i]=a[i];
        for(int j=1;j<i;j++)
            if(a[j]<a[i]&&f[j]+a[i]>f[i])
                f[i]=f[j]+a[i];
        maxx=max(maxx,f[i]);
    }

    cout<<maxx<<endl;

    return 0;
}