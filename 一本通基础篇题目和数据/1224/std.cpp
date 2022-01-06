#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<algorithm>
#define INF 999999999
#define N 1001
using namespace std;
int a[N][N],b[N][N];
int main()
{
    int n;
    int x,y;
    int num,sum;

    cin>>n;
    for(int i=1;i<=n*n;i++)
    {
        cin>>num;
        x=(i-1)/n+1;
        y=i%n;
        if(y==0)
            y=n;
        a[x][y]=num;
    }

    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            b[i][j]=b[i-1][j]+a[i][j];
    int max=b[1][1];
    for(int i=1;i<=n;i++)
        for(int j=i;j<=n;j++)
        {
            sum=0;
            for(int k=1;k<=n;k++)
            {
                if(sum>0)
                    sum+=b[j][k]-b[i-1][k];
                else
                    sum=b[j][k]-b[i-1][k];
                if(sum>max)
                    max=sum;
            }
        }
    cout<<max<<endl;
    return 0;
}