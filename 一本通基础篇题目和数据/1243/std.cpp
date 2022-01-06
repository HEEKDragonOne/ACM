#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<string>
#define INF 999999999
#define N 1000001
#define MOD 1000000007
#define E 1e-3
using namespace std;
int n,m,a[N];
int judge(int x)
{
    int money=0,month=0,d,i;
    for(i=1;i<=n;i++)
    {
        money+=a[i];
        if(money>=x)
        {
            month++;
            if(a[i]<x)
                money=a[i];
            else
                return 1;
        }
    }
    return month>=m;
}
int main()
{
    int left,right,mid;
    int tot=0;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        tot+=a[i];
    }
    left=1;
    right=tot;
    while(left+1<right)
    {
        mid=(left+right)/2;
        if(judge(mid))
            left=mid;
        else
            right=mid;
    }
    if(judge(left))
        cout<<left<<endl;
    else
        cout<<right<<endl;
    return 0;
}