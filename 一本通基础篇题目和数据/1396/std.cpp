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
#define N 50001
#define MOD 123
#define E 1e-6
using namespace std;
int n;
int a[N][101],g[27][27];
int enter[27],vis[27],sum[27];
int cnt;
int p;
void judge(int x,int y)
{
    if(a[x][y]==0||a[x+1][y]==0)
        return ;
    if(a[x][y]!=a[x+1][y])
    {
        g[a[x][y]][a[x+1][y]]=1;
        enter[a[x+1][y]]++;
    }
    else
        judge(x,y+1);
}
bool topsort()
{
    for(int i=1;i<=27;++i)
        if(vis[i])
            cnt++;
    for(int i=1;i<n;++i)
        judge(i,1);

    int work,temp;
    while(p!=cnt)
    {
        work=0;
        for(int i=1;i<=cnt;++i)
        {
            if(enter[i]==0)
            {
                temp=i;
                enter[i]=-1;
                work++;
            }
        }
        if(work!=1)
            return false;
        sum[++p]=temp;
        for(int i=1;i<=cnt;++i)
        {
            if(g[temp][i])
            {
                g[temp][i]=0;
                enter[i]--;
            }
        }
    }
    return true;
}
int main()
{
    cin>>n;
    for(int i=1;i<=(n+1);i++)
    {
        string str;
        cin>>str;
        for(int j=0;j<str.size();j++)
        {
            a[i][++a[i][0]]=int(str[j]+1-'a');
            vis[str[j]+1-'a']=1;
        }
    }

    if(!topsort())
        cout<<0;
    else
    {
        for(int i=1;i<=a[n+1][0];++i)
        {
            for(int j=1;j<=cnt;++j)
            {
                if(a[n+1][i]==sum[j])
                {
                    cout<<char(j-1+'a');
                    break;
                }
            }
        }
    }
    return 0;
}
