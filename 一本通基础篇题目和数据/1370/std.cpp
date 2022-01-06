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
#define MOD 123
#define E 1e-6
using namespace std;
int a[N],b[N],c[N];
int f[N];
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i]>>b[i]>>c[i];
        f[i]=1;
    }
    int minn;
    for(int i=1;i<=m;i++)
    {
        int temp=INF;
        for(int j=1;j<=n;j++)
        {
            if(a[j]*f[j]*f[j]+b[j]*f[j]+c[j]<temp)
            {
                temp=a[j]*f[j]*f[j]+b[j]*f[j]+c[j];
                minn=j;
            }
        }
        cout<<a[minn]*f[minn]*f[minn]+b[minn]*f[minn]+c[minn]<<" ";
        f[minn]++;
    }
    return 0;
}