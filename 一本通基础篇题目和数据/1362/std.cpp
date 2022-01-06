#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<string>
#include<cstdlib>
#include<queue>
#include<vector>
#define INF 0x3f3f3f3f
#define PI acos(-1.0)
#define N 301
#define MOD 123
#define E 1e-6
using namespace std;
int father[N];
int a[N];
int Find(int x)
{
    if(father[x]==x)
        return x;
    return father[x]=Find(father[x]);
}
void Union(int x,int y)
{
    int f1=Find(x);
    int f2=Find(y);
    if(f1!=f2)
        father[f2]=f1;
}
int main()
{
    int n,k;

    cin>>n>>k;
    for(int i=1;i<=n;i++)
        father[i]=i;
    for(int i=1;i<=k;i++)
    {
        int x,y;
        cin>>x>>y;
        Union(x,y);
    }

    for(int i=1;i<=n;i++)
        a[Find(i)]++;

    int cnt_1=0,cnt_2=0;
    for(int i=1;i<=n;i++)
        if(a[i]>cnt_2)
            cnt_2=a[i];
    for(int i=1;i<=n;i++)
        if(father[i]==i)
            cnt_1++;

    cout<<cnt_1<<" "<<cnt_2<<endl;
    return 0;
}