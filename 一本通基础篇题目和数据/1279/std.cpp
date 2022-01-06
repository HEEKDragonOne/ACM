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
int a[N][N],b[N][N],c[N][N],d[N];
int main()
{
    int f,v;
    cin>>f>>v;
    for(int i=1;i<=f;i++)
        for(int j=1;j<=v;j++)
            cin>>a[i][j];

    memset(b,128,sizeof(b));
    for(int i=1;i<=v-(f-1);i++)
        b[1][i]=a[1][i];
    for(int i=1;i<=f;i++)
        for(int j=i;j<=v-(f-i);j++)
            for(int k=i-1;k<=j-1;k++)
                if(b[i][j]<b[i-1][k]+a[i][j])
                {
                    b[i][j]=b[i-1][k]+a[i][j];
                    c[i][j]=k;
                }

    int maxx=-INF;
    int temp;
    for(int i=f;i<=v;i++)
        if(b[f][i]>maxx)
        {
            maxx=b[f][i];
            temp=i;
        }
    cout<<maxx<<endl;

    for(int i=f;i>=1;i--)
    {
        d[f-(i-1)]=temp;
        temp=c[i][temp];
    }

    for(int i=f;i>=1;i--)
        cout<<d[i]<<" ";
    return 0;
}