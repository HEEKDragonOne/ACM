#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<algorithm>
#define INF 999999999
#define N 101
using namespace std;
int x[N],y[N],vis[N];
int main()
{
    int n,cnt=0;
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>x[i]>>y[i];
    for(int i=1;i<=n;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            if(x[i]>x[j])
            {
                swap(x[i],x[j]);
                swap(y[i],y[j]);
            }
            else if(x[i]==x[j]&&y[i]>y[j])
            {
                swap(x[i],x[j]);
                swap(y[i],y[j]);
            }
        }
    }
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            if(i!=j&&x[j]>=x[i]&&y[j]>=y[i])
                {
                    vis[i]=1;
                    break;
                }
    for(int i=1;i<=n;i++)
        if(vis[i]==0)
        {
            cnt++;
            if(cnt==1)
                printf("(%d,%d)",x[i],y[i]);
            else
                printf(",(%d,%d)",x[i],y[i]);
        }
    return 0;
}