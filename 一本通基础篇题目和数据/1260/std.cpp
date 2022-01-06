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
int a[N],b[N],c[N];
int main()
{
    int n=0,maxx=1;
    
    while(scanf("%d",&a[n++])!=EOF)
        
    for(int i=0;i<n;i++)
    {
        b[i]=1;
        for(int j=0;j<i;j++)
            if(a[j]>=a[i]&&b[j]+1>b[i])
                b[i]=b[j]+1;
        maxx=max(maxx,b[i]);
    }
    printf("%d\n",maxx);
    
    maxx=1;
    for(int i=0;i<n;i++)
    {
        c[i]=1;
        for(int j=0;j<i;j++)
            if(a[j]<a[i]&&c[j]+1>c[i])
                c[i]=c[j]+1;
        maxx=max(maxx,c[i]);
    }
    printf("%d\n",maxx);
    return 0;
}