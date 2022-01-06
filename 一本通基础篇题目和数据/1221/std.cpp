#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<algorithm>
#define N 20
using namespace std;
int n;
int a[N];
int cnt=99999;
long long vis[N];
long long gcd(long long a,long long b)
{
    if(b==0)
        return a;
    return
        gcd(b,a%b);
}
void dfs(int k,int step)
{
    if(step==n+1)
    {
        if(k<cnt)
            cnt=k;
        return;
    }
    for(int i=1;i<=k;i++)
        if(gcd(vis[i],a[step])==1)
        {
            vis[i]*=a[step];
            dfs(k,step+1);
            vis[i]/=a[step];
        }
    vis[k+1]*=a[step];
    dfs(k+1,step+1);
    vis[k+1]/=a[step];
}
int main()
{
    int temp;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        vis[i]=1;
    }
    sort(a+1,a+1+n);
    dfs(1,1);
    cout<<cnt<<endl;
    return 0;
}