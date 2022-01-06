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
#define N 5001
#define MOD 2520
#define E 1e-12
using namespace std;
struct Node{
    int a;
    int b;
}q[N];
int f[N];
int main()
{
    int n;

    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>q[i].a>>q[i].b;

    for(int i=1;i<=n;i++)
        for(int j=i+1;j<=n;j++)
        {
            if(q[i].a>q[j].a)
                swap(q[i],q[j]);
            else if(q[i].a==q[j].a)
            {
                if(q[i].b>q[j].b)
                    swap(q[i],q[j]);
            }
        }

    int maxx=-INF;
    for(int i=1;i<=n;i++)
    {
        f[i]=1;
        for(int j=1;j<i;j++)
            if(q[j].b<=q[i].b&&f[j]+1>f[i])
                f[i]=f[j]+1;
        maxx=max(maxx,f[i]);
    }
    cout<<maxx<<endl;
    return 0;
}