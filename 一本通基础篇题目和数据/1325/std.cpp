#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<algorithm>
#include<string>
#define INF 999999999
#define N 1001
#define MOD 1000000007
using namespace std;
int a[N][N];
int main()
{
    int m;
    int k=1,half=1;
    cin>>m;

    int n=1<<m;
    a[0][0]=1;
    while(k<=m)
    {
        for(int i=0;i<half;i++)
            for(int j=0;j<half;j++)
                a[i][j+half]=a[i][j]+half;

        for(int i=0;i<half;i++)
            for(int j=0;j<half;j++)
            {
                a[i+half][j]=a[i][j+half];
                a[i+half][j+half]=a[i][j];
            }
        half*=2;
        k++;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            printf("%d ",a[i][j]);
        cout<<endl;
    }
    return 0;
}