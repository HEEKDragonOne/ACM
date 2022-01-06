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
#define N 301
#define MOD 123
#define E 1e-6
using namespace std;
int dp[N],k[N];
int main()
{
    int n,a,b;
    bool flag=true;

    cin>>n>>a>>b;
    for(int i=1;i<=n;i++)
        cin>>k[i];
        
    dp[a]=1;
    while(flag)
    {
        flag=false;
        for(int i=1;i<=n;i++)
        {
            if(dp[i]>0)
            {
                if(i-k[i]>0)
                {
                    if(dp[i-k[i]]==0||dp[i-k[i]]>dp[i]+1)
                    {
                        dp[i-k[i]]=dp[i]+1;
                        flag=true;
                    }
                }
                if(i+k[i]<=n)
                {
                    if(dp[i+k[i]]==0||dp[i+k[i]]>dp[i]+1)
                    {						
                        dp[i+k[i]]=dp[i]+1;
                        flag=true;
                    }
                }
            }
        }
    }
    cout<<dp[b]-1<<endl;

    return 0;
}