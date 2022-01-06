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
int a[N][N],f[N][N];
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        memset(f,0,sizeof(f));
        int m,n;
        cin>>m>>n;
        for(int i=1;i<=m;i++)
            for(int j=1;j<=n;j++)
                cin>>a[i][j];
        for(int i=1;i<=m;i++)
            for(int j=1;j<=n;j++)
                f[i][j]=max(f[i-1][j],f[i][j-1])+a[i][j];
        cout<<f[m][n]<<endl;
    }
    return 0;
}