#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<string>
#include<cstdlib>
#include<queue>
#include<vector>
#include<set>
#define INF 0x3f3f3f3f
#define PI acos(-1.0)
#define N 101
#define MOD 123
#define E 1e-6
using namespace std;
int g[N][N],side[N],sum[N];
int main()
{
    int n;
    int x1[27],x2[27],y1[27],y2[27];
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>x1[i]>>x2[i]>>y1[i]>>y2[i];

    for(int i=1;i<=n;i++)
    {
        int x,y;
        cin>>x>>y;
        for(int j=1;j<=n;j++)
            if(x1[j]<=x && x<=x2[j] && y1[j]<=y && y<=y2[j])
            {
                g[i][j]=1;
                side[j]++;
            }
    }

    int num=0;
    int temp;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            if(side[j]==1)
            {
                num++;
                side[j]--;
                for(int k=1;k<=n;k++)
                    if(g[k][j])
                    {
                        g[k][j]=0;
                        temp=k;
                        sum[j]=k;
                        break;
                    }
                for(int k=1;k<=n;k++)
                    if(g[temp][k])
                    {
                        g[temp][k]=0;
                        side[k]--;
                    }
            }

    if(num==n)
        for(int i=1;i<=n;i++)
            cout<<(char)(i-1+'A')<<" "<<sum[i]<<endl;
    else
        cout<<"None"<<endl;

    return 0;
}