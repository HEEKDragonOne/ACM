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
#define N 3001
#define MOD 2520
#define E 1e-12
using namespace std;
char a[N],b[N];
int f[N][N];
int main()
{
    scanf("%s%s",a+1,b+1);
    int n=strlen(a+1);
    int m=strlen(b+1);

    for(int i=1;i<=n;i++)
        f[i][0]=i;
    for(int i=1;i<=m;i++)
        f[0][i]=i;

    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            if(a[i]==b[j])
                f[i][j]=f[i-1][j-1];
            else
                f[i][j]=min(f[i-1][j],min(f[i][j-1],f[i-1][j-1]))+1;
                
    cout<<f[n][m]<<endl;
    
    return 0;
}