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
#define N 100001
#define MOD 123
#define E 1e-6
using namespace std;
int father[N];
int cnt[N];
int Find(int x)
{
    if(father[x]==x)
        return x;
    return father[x]=Find(father[x]);
}
void Union(int x,int y)
{
    x=Find(x);
    y=Find(y);
    if(x!=y)
    {
        father[y]=x;
        cnt[x]+=cnt[y];
    }
}
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++)
    {
        father[i]=i;
        cnt[i]=1;
    }
    while(m--)
    {
        char ch[10];
        scanf("%s",ch);
        if(ch[0]=='M')
        {
            int a,b;
            scanf("%d%d",&a,&b);
            Union(a,b);
        }
        if(ch[0]=='Q')
        {
            int a;
            scanf("%d",&a);
            printf("%d\n",cnt[Find(a)]);
        }
    }
    return 0;
}