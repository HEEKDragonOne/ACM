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
#define N 1001
#define MOD 123
#define E 1e-6
using namespace std;
struct node{
    int pre;
    int next;
}a[N*N];
int father[N];
int head[N],ans[N];
int cnt;
void add(int x,int y)
{
    cnt++;
    a[cnt].pre=y;
    a[cnt].next=head[x];
    head[x]=cnt;

    cnt++;
    a[cnt].pre=x;
    a[cnt].next=head[y];
    head[y]=cnt;
}
int Find(int x)
{
    if(father[x]==x)
        return x;
    return father[x]=Find(father[x]);
}
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        father[i]=i;
        ans[i]=1;

        int m;
        cin>>m;
        for(int j=1;j<=m;j++)
        {
            int k;
            cin>>k;
            add(i,k);
        }
    }

    for(int i=n;i>=1;i--)
    {
        int x=Find(i);
        int k=head[i];
        while(k!=0)
        {
            int j=a[k].pre;
            if(j>i)
            {
                int y=Find(j);
                if(x!=y)
                {
                    father[y]=x;
                    ans[x]+=ans[y];
                    if(ans[x]>n/2)
                    {
                        cout<<i<<endl;
                        return 0;
                    }
                }
            }
            k=a[k].next;
        }
    }
    return 0;
}
