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
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        for(int i=1;i<=n;i++)
            cin>>a[i];

        int maxx1=-INF,maxx2=-INF;
        for(int i=1;i<=n;i++)
        {
            f[i]=1;
            for(int j=1;j<i;j++)
                if(a[j]>a[i]&&f[j]+1>f[i])
                    f[i]=f[j]+1;
                maxx1=max(maxx1,f[i]);
        }
        for(int i=n;i>=1;i--)
        {
            f[i]=1;
            for(int j=n;j>i;j--)
                if(a[j]>a[i]&&f[j]+1>f[i])
                    f[i]=f[j]+1;
            maxx2=max(maxx2,f[i]);
        }
        
        int res=max(maxx1,maxx2);
        cout<<res<<endl;
    }
    return 0;
}
