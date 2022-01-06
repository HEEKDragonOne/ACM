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
#define MOD 123
#define E 1e-6
using namespace std;
int a[N][N],b[N],sum[N];
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
        {
            if(i==j)
                a[i][j]=0;
            else
                a[i][j]=INF;
        }
    for(int i=1;i<=n;i++)
    {
        int left,right;
        cin>>b[i]>>left>>right;
        if(left!=0)
            a[i][left]=a[left][i]=1;
        if(right!=0)
            a[i][right]=a[right][i]=1;
    }

    for(int k=1;k<=n;k++)
        for(int i=1;i<=n;i++)
            for(int j=1;j<=n;j++)
                if(a[i][j]>a[i][k]+a[k][j])
                    a[i][j]=a[i][k]+a[k][j];

    int minn=INF;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
            sum[i]+=a[i][j]*b[j];
        if(sum[i]<minn)
            minn=sum[i];
    }
    cout<<minn<<endl;
    return 0;
}