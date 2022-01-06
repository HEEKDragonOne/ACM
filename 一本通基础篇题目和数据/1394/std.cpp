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
#define N 1000001
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
    int m,n;
    cin>>m>>n;

    for(int i=1;i<=m*n;i++)
        father[i]=i;

    int x1,x2,y1,y2;
    while(scanf("%d%d%d%d",&x1,&y1,&x2,&y2)==4)
        Union((x1-1)*n+y1,(x2-1)*n+y2);

    int sum=0;
    for(int j=1;j<=n;j++)//连竖线需要一个单位
        for(int i=1;i<m;i++)
            if(Union((i-1)*n+j,(i)*n+j))
                sum+=1;
    for(int i=1;i<=m;i++)//连横线需要两个单位
        for(int j=1;j<n;j++)
            if(Union((i-1)*n+j,(i-1)*n+j+1))
                sum+=2;

    printf("%d\n",sum);
    return 0;
}