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
#define N 50
#define MOD 2520
#define E 1e-12
using namespace std;
int n,V;
int w[50],f[20000];
void ZeroOnePack(int weight)
{
    for(int v=V;v>=weight;v--)
        f[v]=max(f[v],f[v-weight]+weight);
}

int main()
{
    cin>>V>>n;
    for(int i=1;i<=n;i++)
        cin>>w[i];
    for(int i=1;i<=n;i++)
        ZeroOnePack(w[i]);
    cout<<V-f[V]<<endl;
    return 0;
}