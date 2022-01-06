#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<algorithm>
#define N 200
using namespace std;
int main()
{
    int a[N]={0};
    int b[N]={0};
    int n;
    int maxx;

    int t=0;
    while(scanf("%d",&n)!=EOF)
    {
        a[t]=n;
        t++;
    }
    b[0]=1;
    for(int i=1;i<t;i++)
    {
        b[i]=1;
        for(int j=0;j<i;j++)
            if(a[j]<a[i]&&b[j]+1>b[i])
                b[i]=b[j]+1;
    }
    maxx=1;
    for(int i=0;i<t;i++)
        if(maxx<b[i])
            maxx=b[i];
    cout<<maxx<<endl;
    return 0;
}