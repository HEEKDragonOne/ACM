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
#define N 101
#define MOD 123
#define E 1e-6
int tree[101];
using namespace std;
int main()
{
    int n,m;
    int x,y;

    cin>>n>>m;
    for(int i=1;i<=m;i++)
    {
        cin>>x>>y;
        tree[y]=x;
    }

    int root;
    for(int i=1;i<=n;i++)
        if(tree[i]==0)
        {
            root=i;
            break;

        }
    int maxx=-INF;
    int maxroot;
    for(int i=1;i<=n;i++)
    {
        int sum=0;
        for(int j=1;j<=n;j++)
            if(tree[j]==i)
                sum++;
        if(maxx<sum)
        {
            maxx=sum;
            maxroot=i;
        }
    }

    cout<<root<<endl;
    cout<<maxroot<<endl;
    for(int i=1;i<=n;i++)
        if(tree[i]==maxroot)
            cout<<i<<" ";
    cout<<endl;

    return 0;
}