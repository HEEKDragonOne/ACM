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
#define N 50001
#define MOD 50001
#define E 1e-12
using namespace std;
int a[N];
int leftt[N],rightt[N];
int leftmax[N],rightmax[N];
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

        leftt[1]=a[1];
        leftmax[1]=a[1];
        rightt[n]=a[n];
        rightmax[n]=a[n];

        for(int i=2;i<=n;i++)
            leftt[i]=max(a[i],leftt[i-1]+a[i]);
        for(int i=n-1;i>=1;i--)
            rightt[i]=max(a[i],rightt[i+1]+a[i]);
        for(int i=2;i<=n;i++)
            leftmax[i]=max(leftmax[i-1],leftt[i]);
        for(int i=n-1;i>=1;i--)
            rightmax[i]=max(rightmax[i+1],rightt[i]);

        int ans=a[1];
        for(int i=2;i<=n;i++)
            ans=max(ans,leftmax[i-1]+rightmax[i]);

        cout<<ans<<endl;
    }
    return 0;
}