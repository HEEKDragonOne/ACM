#include<iostream>
#include<cstring>
using namespace std;
int a[10100];
int dp[10100][110];
int main()
{
    int n,k,i,j;
    memset(dp,0,sizeof(dp));

    cin>>n>>k;
    for(i=1;i<=n;i++)
        cin>>a[i];
    dp[0][0]=1;
    for(i=1;i<=n;i++)
        for(j=0;j<k;j++)
            dp[i][j]=dp[i-1][(j+a[i])%k]||dp[i-1][(j-a[i]%k+k)%k];
    if(dp[n][0]==0)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
    return 0;
}
