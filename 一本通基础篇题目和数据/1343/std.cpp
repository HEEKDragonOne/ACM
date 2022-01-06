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
#define N 1001
#define MOD 123
#define E 1e-6
using namespace std;
int x[N],y[N];
char s[N];
double g[150+10][150+10],f[150+10];
double calculate(int x1,int y1,int x2,int y2)
{
    return sqrt((double)(x1-x2)*(x1-x2)+(double)(y1-y2)*(y1-y2));
}
int main()
{
    int n;
    cin>>n;

    for(int i=1;i<=n;i++)
        cin>>x[i]>>y[i];
    for(int i=1;i<=n;i++)
    {
        scanf("%s",s+1);
        for(int j=1;j<=n;j++)
        {
            if(i!=j)
            {
                if(s[j]=='0')
                {
                    g[i][j]=INF;
                    g[i][j]=INF;
                }
                else
                {
                    g[i][j]=calculate(x[i],y[i],x[j],y[j]);
                    g[j][i]=calculate(x[i],y[i],x[j],y[j]);
                }
            }
            else
                g[i][j]=0;
        }
    }

    for(int k=1;k<=n;k++)
        for(int i=1;i<=n;i++)
            for(int j=1;j<=n;j++)
                if(g[i][j]>g[i][k]+g[k][j])
                    g[i][j]=g[i][k]+g[k][j];

    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            if(g[i][j]<INF&&g[i][j]>f[i])
                f[i]=g[i][j];

    double minn=INF;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            if( g[i][j]==INF && minn>f[i]+f[j]+calculate(x[i],y[i],x[j],y[j]) )
                minn=f[i]+f[j]+calculate(x[i],y[i],x[j],y[j]);

    for(int i=1;i<=n;i++)
        if(minn<f[i])
            minn=f[i];

    printf("%.6lf\n",minn);
    return 0;
}