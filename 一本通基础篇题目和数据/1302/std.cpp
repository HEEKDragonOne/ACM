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
int a[N],f1[N],f2[N];
int main()
{
    int t,ans;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        for(int i=1;i<=n;i++)
            scanf("%d",&a[i]);

        int minn=INF,maxx=-INF;
        f1[0]=0;
        f2[n+1]=0;
        for(int i=1;i<=n;i++)
        {
            minn=min(minn,a[i]);
            f1[i]=max(f1[i-1],a[i]-minn);
        }
        for(int i=n;i>=1;i--)
        {
            maxx=max(maxx,a[i]);
            f2[i]=max(f2[n+1],maxx-a[i]);
        }

        int ans=-INF;
        for(int i=1;i<=n;i++)
            ans=max(ans,f1[i]+f2[i]);
        printf("%d\n",ans);
    }
    return 0;
}