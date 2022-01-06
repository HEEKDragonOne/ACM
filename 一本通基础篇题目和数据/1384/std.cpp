#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<string>
#include<cstdlib>
#include<queue>
#include<vector>
#include<set>
#define INF 0x3f3f3f3f
#define PI acos(-1.0)
#define N 501
#define MOD 123
#define E 1e-6
using namespace std;
int g[N][N];
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=m;i++)
    {
        int x,y;
        cin>>x>>y;
        g[x][y]=1;
    }

    for(int i=1;i<=n;i++)
        for(int k=1;k<=n;k++)
            for(int j=1;j<=n;j++)
                if(g[k][i]&&g[i][j])
                    g[k][j]=1;

    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
        {
            g[0][j]+=g[i][j];
            g[i][0]+=g[i][j];
        }

    int cnt=0;
    for(int i=1;i<=n;i++)
        if( g[0][i]>n/2 || g[i][0]>n/2 )
            cnt++;

    cout<<cnt<<endl;
    return 0;
}