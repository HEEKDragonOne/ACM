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
int V;
int w[4]={10,20,50,100};
int f[N];
int main()
{
    memset(f,0,sizeof(f));
    cin>>V;
    f[0]=1;
    for(int i=0;i<4;i++)
        for(int j=w[i];j<=V;j++)
            f[j]+=f[j-w[i]];
    cout<<f[V]<<endl;
    return 0;
}