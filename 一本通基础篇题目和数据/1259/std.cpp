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
int a[N],f[N],c[N];
int main()
{
    int n;
    int maxx=-INF;


    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];

    int k;
    for(int i=1;i<=n;i++)
    {
        f[i]=1;
        for(int j=1;j<i;j++)
            if(a[j]<=a[i]&&f[j]+1>f[i])
                f[i]=f[j]+1;
        if(f[i]>maxx)
        {
            maxx=f[i];
            k=i;
        }
    }
    int q=0,m=maxx,i=k-1;
    c[q++]=k;
    while(m>1)
    {
        if(f[i]==m-1&&a[i]<=a[k])
        {
            c[q++]=i;
            k=i;
            m--;
        }
        i--;
    }

    printf("max=%d\n",maxx);
    for(i=q-1;i>=0;i--)
        printf("%d ",a[c[i]]);

    return 0;
}