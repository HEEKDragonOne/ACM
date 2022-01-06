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
int g[N][N],pre[N];
int main()
{
    int n,j;
    cin>>n;
    for(int i=1;i<=n;i++)
        while(scanf("%d",&j)!=EOF && j)
            g[i][j]=1;
    
    for(int i=1;i<=n;i++)
        for(int k=1;k<=n;k++)
            for(int j=1;j<=n;j++)
                if(g[i][k]&&g[k][j])
                    g[i][j]=1;

    for(int i=1;i<=n;i++)
        pre[i]=i;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            if(g[i][j])
                pre[j]=pre[i];

    int cnt=0;
    for(int i=1;i<=n;i++)
        if(pre[i]==i)
            cnt++;
    cout<<cnt<<endl;
    return 0;
}