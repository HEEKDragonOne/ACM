#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<algorithm>
#include<string>
#define INF 999999999
#define N 1000001
#define MOD 1000000007
using namespace std;
int a[N];
int cmp(int a,int b)
{
    return a>b;
}
int main()
{
    int n,k;
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    cin>>k;
    sort(a+1,a+1+n,cmp);
    for(int i=1;i<=k;i++)
        cout<<a[i]<<endl;
    return 0;
}