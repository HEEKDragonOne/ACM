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
#define MOD 2520
#define E 1e-12
using namespace std;
int v,n,t;
int group[N][N],w[N],c[N],f[N];
void GroupPack(int groupp,int num)
{
    for(int j=v;j>=0;j--)
        for(int k=1;k<=groupp;k++)
        {
            int q=group[num][k];//物品序号
            if(j>=w[q])
                f[j]=max(f[j],f[j-w[q]]+c[q]);
        }
}
int main()
{
    int p;
    cin>>v>>n>>t;
    for(int i=1;i<=n;i++)
    {
        cin>>w[i]>>c[i]>>p;
        group[p][++group[p][0]]=i;//group[p][0]存储p组元素个数
    }

    for(int i=1;i<=t;i++)
        GroupPack(group[i][0],i);
    cout<<f[v]<<endl;
    return 0;
}