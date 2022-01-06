#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int dis[510];
int a[510][510];
int dp[510][510];
int main()
{
    int m,n;
    int i,j,k;

    memset(a,0,sizeof(a));

    cin>>m>>n;
    dis[1]=0;
    for(i=2;i<=m;i++)
    {
        cin>>dis[i];
        dis[i]+=dis[i-1];
    }

    for(i=1;i<=m;i++)//学校建在i村j村的中间村落
        for(j=i+1;j<=m;j++)
            a[i][j]=a[i][j-1]+dis[j]-dis[(i+j)/2];

    for(i=1;i<=m;i++)
        for(j=1;j<=i&&j<=n;j++)
           dp[i][j]=9999999999;
    for(i=1;i<=m;i++)//dp[i][j]前i个村建j所学校,最短距离
        dp[i][1]=a[1][i];

    for(i=2;i<=m;i++)
        for(j=2;j<=i&&j<=n;j++)
            for(k=j-1;k<i;k++)
               dp[i][j]=min(dp[i][j],dp[k][j-1]+a[k+1][i]);

    cout<<dp[m][n]<<endl;
    return 0;
}
