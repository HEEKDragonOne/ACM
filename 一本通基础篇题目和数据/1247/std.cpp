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
#define E 1e-12
using namespace std;
int l,n,m;
int a[N];
int judge(int x)
{
    int i,dis=0,num=0;
    for(int i=1;i<=n;i++)
        if(a[i]-dis<x)
            num++;
        else
            dis=a[i];
    if(l-dis<x)
        num++;
    return num<=m;
}
int main()
{
    int left,right,mid;
    cin>>l>>n>>m;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    left=0;
    right=l;
    while(left+1<right)
    {
        mid=(left+right)/2;
        if(judge(mid))
            left=mid;
        else
            right=mid;
    }
    cout<<left<<endl;
    return 0;
}