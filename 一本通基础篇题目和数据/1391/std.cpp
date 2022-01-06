#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<string>
#include<cstdlib>
#include<queue>
#include<set>
#include<map>
#include<stack>
#include<vector>
#define INF 0x3f3f3f3f
#define PI acos(-1.0)
#define N 1001
#define MOD 123
#define E 1e-6
using namespace std;
int father[N];
struct Node{
    int a;
    int b;
    int w;
}g[N*N];
void quick_sort(int left,int right)
{
    int i=left,j=right;
    int mid=g[(left+right)/2].w;
    while(i<=j)
    {
        while(g[i].w<mid)
            i++;
        while(g[j].w>mid)
            j--;
        if(i<=j)
        {
            swap(g[i],g[j]);
            i++;
            j--;
        }
    }
    if(i<right)
        quick_sort(i,right);
    if(left<j)
        quick_sort(left,j);
}
int Find(int x)
{
    if(father[x]==x)
        return x;
    return father[x]=Find(father[x]);
}
int Union(int x,int y)
{
    x=Find(x);
    y=Find(y);
    if(x!=y)
    {
        father[y]=x;
        return 1;
    }
    return 0;
}
int main()
{
    int n,k;
    cin>>n>>k;
    for(int i=1;i<=n;i++)
        father[i]=i;
    for(int i=1;i<=k;i++)
        cin>>g[i].a>>g[i].b>>g[i].w;

    int sum=0;
    quick_sort(1,k);
    for(int i=1;i<=k;i++)
        sum+=g[i].w;

    int cnt=0,ans=0;
    for(int i=1;i<=k;i++)
        if(Union(g[i].a,g[i].b))
        {
            ans+=g[i].w;
            cnt++;
            if(cnt==n-1)
                break;
        }

    cout<<sum-ans<<endl;
    return 0;
}