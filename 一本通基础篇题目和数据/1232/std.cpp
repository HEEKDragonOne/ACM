#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<algorithm>
#define INF 999999999
#define N 1001
using namespace std;
int a[N],dp[N];
int main()
{
    int t;
    int n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        dp[0]=a[0];
        dp[1]=a[1];
        for(int i=2;i<n;i++)
            dp[i]=min(dp[i-1]+a[0]+a[i],dp[i-2]+a[0]+a[i]+a[1]*2);
        cout<<dp[n-1]<<endl;
    }
    return 0;
}