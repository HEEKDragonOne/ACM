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
#define N 10001
#define MOD 123
#define E 1e-6
using namespace std;
int vis[N];
char q[N][10];
struct node{
    int x;
    int y;
}b[20];
int turn(char s[],int len)
{
    int ans=0;
    for(int i=0;i<len;i++)
    {
        ans*=10;
        ans+=s[i]-'0';
    }
    return ans;
}
int main()
{
    char s_t[10];
    char s[10];
    int k;

    cin>>s;
    int len=strlen(s);
    cin>>k;
    for(int i=1;i<=k;i++)
        cin>>b[i].x>>b[i].y;

    int head=1,tail=1;
    int cnt=1;

    strcpy(q[tail],s);
    tail++;
    vis[turn(s,len)]=1;

    while(head<tail)
    {
        for(int i=1;i<=k;i++)
        {
            strcpy(s_t,q[head]);
            for(int j=0;j<len;j++)
                if(s_t[j]==b[i].x+'0')
                {
                    s_t[j]=b[i].y+'0';
                    int d=turn(s_t,len);
                    if(vis[d]==0)
                    {
                        vis[d]=1;
                        strcpy(q[tail],s_t);
                        tail++;
                        cnt++;
                    }
                    strcpy(s_t,q[head]);//初始化s_t
                }
        }
        head++;
    }
    cout<<cnt<<endl;
    return 0;
}