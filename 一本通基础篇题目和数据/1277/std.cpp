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
#define N 101
#define MOD 2520
#define E 1e-12
using namespace std;
int g[N][N],f[N][N][N][N];
int main()
{
    int n;
    int a,b,c;
    cin>>n;;
    while(scanf("%d%d%d",&a,&b,&c)!=EOF&&a&&b&&c)
        g[a][b]=c;

    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            for(int k=1;k<=n;k++)
                for(int l=1;l<=n;l++)
                {
                    int temp1=max(f[i-1][j][k-1][l],f[i-1][j][k][l-1]);
                    int temp2=max(f[i][j-1][k-1][l],f[i][j-1][k][l-1]);
                    f[i][j][k][l]=max(temp1,temp2)+g[i][j];
                    if(i!=k&&j!=l)
                        f[i][j][k][l]+=g[k][l];
                }

    cout<<f[n][n][n][n]<<endl;
    return 0;
}