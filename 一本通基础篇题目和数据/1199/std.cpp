#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
using namespace std;
char str[10],temp[10];
int n;
bool vis[10];
void dfs(int step)
{
    if(step==n)
    {
        temp[step]='\0';
        cout<<temp<<endl;
    }

    for(int i=0;i<n;i++)
        if(vis[i]==0)
        {
            vis[i]=1;
            temp[step]=str[i];
            dfs(step+1);
            vis[i]=0;
        }
}
int main()
{
    memset(vis,0,sizeof(vis));
    scanf("%s",str);
    n=strlen(str);
    dfs(0);
    return 0;
}
