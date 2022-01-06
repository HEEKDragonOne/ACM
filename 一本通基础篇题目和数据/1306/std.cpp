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
#define N 501
#define MOD 100001
#define E 1e-12
using namespace std;
struct Node{
    int len;
    int ans[N];
}order[N],now;
int a[N],b[N];
int main()
{
    int n,m;
    cin>>n;
    for(int i=1;i<=n;++i)
        cin>>a[i];
    cin>>m;
    for(int i=1;i<=m;++i)
        cin>>b[i];

    for(int i=1;i<=m;++i)
    {
        now.len=0;
        memset(now.ans,0,sizeof(now.ans));

        for(int j=1;j<=n;++j)
        {
            if(a[j]<b[i]&&order[j].len>now.len)
                now=order[j];

            if(a[j]==b[i])
            {
                order[j]=now;
                order[j].len++;
                order[j].ans[order[j].len]=a[j];
            }
        }
    }

    int flag=0;
    int maxx=-INF;
    for(int i=1;i<=n;++i)
        if(order[i].len>maxx)
        {
            maxx=order[i].len;
            flag=i;
        }

    cout<<order[flag].len<<endl;
    for(int i=1;i<=order[flag].len;++i)
        cout<<order[flag].ans[i]<<" ";
    cout<<endl;
    return 0;
}