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
int a[N][N],f[N];
int maxArray(int t[],int n)
{
    int sum=0,maxx=-INF;
    for(int i=1;i<=n;i++)
    {
        if(sum>0)
            sum+=t[i];
        else
            sum=t[i];
        if(sum>maxx)
            maxx=sum;
    }
    return maxx;
}
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            cin>>a[i][j];

    int maxx=-INF;
    for(int i=1;i<=n;i++)
    {
        memset(f,0,sizeof(f));
        for(int j=i;j<=n;j++)
        {
            for(int k=1;k<=n;k++)
                f[k]+=a[j][k];

            int temp=maxArray(f,n);
            if(temp>maxx)
                maxx=temp;
        }
    }

    cout<<maxx<<endl;

    return 0;
}