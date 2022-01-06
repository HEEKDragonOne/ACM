#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<string>
#include<cstdlib>
#include<queue>
#include<set>
#include<vector>
#define INF 0x3f3f3f3f
#define PI acos(-1.0)
#define N 5001
#define MOD 123
#define E 1e-6
using namespace std;
int father[N];
int vis[N];
int cnt;
int Find(int x)
{
    if(father[x]==x)
        return x;
    return father[x]=Find(father[x]);
}
void Union(int x,int y)
{
    int xx=Find(x);
    int yy=Find(y);
    if(xx!=yy)
        father[xx]=yy;
}
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=2*n;i++)
        father[i]=i;

    while(m--)
    {
        int p,x,y;
        cin>>p>>x>>y;
        if(p==0)
            Union(x,y);
        else
        {
            Union(x,y+n);
            Union(x+n,y);
        }
    }

    int cnt=0;
    for(int i=1;i<=n;i++)
    {
        int temp=Find(i);
        if(!vis[temp])
        {
            vis[temp]=1;
            cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}
