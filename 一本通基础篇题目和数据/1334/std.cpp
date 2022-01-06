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
#define N 1001
#define MOD 123
#define E 1e-6
using namespace std;
int q[N];
int main()
{
    int n,m;
    cin>>n>>m;

    for(int i=1;i<=n;i++)
        q[i]=i;

    int head=1,tail=n+1;
    int cnt=0;
    while(head<tail)
    {
        cnt++;
        int p=q[head];
        if(cnt==m)
        {
            cnt=0;
            cout<<p<<" ";
        }
        else
        {
            q[tail]=p;
            tail++;
        }
        head++;
    }
    cout<<endl;
    return 0;
}