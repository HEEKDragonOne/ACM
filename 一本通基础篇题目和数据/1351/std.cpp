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
struct Node{
    int pre;
    int next;
}g[N*N];
int head[N],vis[N],q[N],dis[N];
int cnt;
void add(int x,int y)
{
    cnt++;
    g[cnt].pre=y;
    g[cnt].next=head[x];
    head[x]=cnt;
}
void top_sort(int k)
{
    vis[k]=1;

    int headd=1,tail=1;
    q[tail]=k;
    tail++;

    while(headd<tail)
    {
        int x=q[headd];
        cout<<x<<" ";
        for(int b=head[x];b;b=g[b].next)
        {
            int y=g[b].pre;
            dis[y]--;
            if(!dis[y])
            {
                vis[y]=1;
                q[tail]=y;
                tail++;
            }
        }
        headd++;
    }
}
int main()
{
    int n;
    cin>>n;

    int j;
    for(int i=1;i<=n;i++)
        while(cin>>j&&j)
        {
            add(i,j);
            dis[j]++;
        }

    for(int i=1;i<=n;i++)
        if(!vis[i]&&!dis[i])
            top_sort(i);

    return 0;
}