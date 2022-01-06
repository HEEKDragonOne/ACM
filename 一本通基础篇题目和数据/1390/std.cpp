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
void Union(int x,int y)
{
    x=Find(x);
    y=Find(y);
    if(x!=y)
        father[y]=x;
}
int main()
{
    int n,k;
    cin>>n>>k;
    for(int i=1;i<=3*n;i++)
        father[i]=i;
    int sum=0;
    for(int i=1;i<=k;i++)
    {
        int t,x,y;
        cin>>t>>x>>y;

        if(x>n||y>n)
            sum++;
        else if(t==1)
        {
            if(Find(x+n)==Find(y)||Find(x+2*n)==Find(y))//x吃y、y吃x、非同类
                sum++;
            else
            {
                Union(x,y);
                Union(x+n,y+n);
                Union(x+2*n,y+2*n);
            }
        }
        else if(t==2)
        {
            if(Find(x)==Find(y)||Find(x+2*n)==Find(y))//同类
                sum++;
            else
            {
                Union(x+n,y);
                Union(x+2*n,y+n);
                Union(x,y+2*n);
            }
        }
    }
    cout<<sum<<endl;
    return 0;
}