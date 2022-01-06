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
#define N 100001
#define MOD 100001
#define E 1e-12
using namespace std;
int a[N],f[N];
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        for(int i=1;i<=n;i++)
            cin>>a[i];
        f[0]=0;
        f[1]=a[1];
        for(int i=2;i<=n;i++)
            f[i]=max(f[i-1],f[i-2]+a[i]);
        cout<<f[n]<<endl;
    }
    return 0;
}
