#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<string>
#define INF 999999999
#define N 100001
#define MOD 1000000007
#define E 1e-3
using namespace std;
int n,k,a[N];
int judge(int x)
{
    int i,ans=0;
    for(i=1;i<=n;i++)
        ans+=a[i]/x;
    return ans>=k;
}
int main()
{
    double b;
    int i,j;
    int left=0,right=0,mid;

    cin>>n>>k;
    for(i=1;i<=n;i++)
    {
        cin>>b;
        a[i]=(int)(b*100+0.5);
        if(right<a[i])
            right=a[i];
    }

    right+=1;
    while(left+1<right)
    {
        mid=(left+right)/2;
        if(judge(mid))
            left=mid;
        else
            right=mid;
    }
    printf("%.2lf",left/100.0);
    return 0;
}