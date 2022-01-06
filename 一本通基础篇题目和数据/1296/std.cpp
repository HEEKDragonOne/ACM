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
int w[N],c[N],f[N];
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        for(int i=1;i<=n;i++)
            cin>>w[i];
        for(int i=1;i<=n;i++)
        {
            cin>>c[i];
            f[i]=c[i];
        }

        for(int i=1;i<=n;i++)
            for(int j=1;j<=n;j++)
                if(w[i]-w[j]>k)
                    f[i]=max(f[i],f[j]+c[i]);

        int maxx=-INF;
        for(int i=1;i<=n;i++)
            maxx=max(f[i],maxx);
        cout<<maxx<<endl;
    }
    return 0;
}