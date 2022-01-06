#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#define N 30
using namespace std;
int n,r;
int a[N];
int vis[N];
void dfs(int step)
{
    int i;

    if(step==r+1)
    {
        for(i=1;i<=r;i++)
            cout<<"  "<<a[i];
        cout<<endl;
        return;
    }

    for(i=a[step-1];i<=n;i++)
    {
        if(vis[i]==0)
        {
            a[step]=i;
            vis[i]=1;

            dfs(step+1);

            vis[i]=0;
        }
    }
}
int main()
{
    cin>>n>>r;
    a[0]=1;
    dfs(1);
    return 0;
}