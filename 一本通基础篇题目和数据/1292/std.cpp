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
int V,U,n;
int v[N],u[N],f[N][N];
void TwoDimensionPack(int weight_1,int weight_2)
{
    for(int j=V;j>=weight_1;j--)
            for(int k=U;k>=weight_2;k--)
                f[j][k]=max(f[j][k],f[j-weight_1][k-weight_2]+1);
}
int main()
{
    cin>>V>>U>>n;
    for(int i=1;i<=n;i++)
        cin>>v[i]>>u[i];

    for(int i=0;i<=V;i++)//边界设定
      for(int j=0;j<=U;j++)
          f[i][j]=0;

    for(int i=1;i<=n;i++)
        TwoDimensionPack(v[i],u[i]);

    int cnt=0;
    for(int i=1;i<=U;i++)
    {
        if(f[V][i]==f[V][U])
        {
            cnt=i;
            break;
        }
    }
    cout<<f[V][U]<<" "<<U-cnt<<endl;
    return 0;
}
