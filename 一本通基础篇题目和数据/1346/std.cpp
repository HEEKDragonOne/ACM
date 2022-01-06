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
#define N 20001
#define MOD 123
#define E 1e-6
using namespace std;
int father[N];
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
    for(int i=1;i<=n;i++)
        father[i]=i;
    for(int i=1;i<=m;i++)
    {
        int x,y;
        cin>>x>>y;
        Union(x,y);
    }

    for(int i=1;i<=n;i++)
        father[i]=Find(i);

    int q;
    cin>>q;
    for(int i=1;i<=q;i++)
    {
        int x,y;
        cin>>x>>y;
        if(father[x]==father[y])
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;
}
