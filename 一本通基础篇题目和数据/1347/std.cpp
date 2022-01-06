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
struct Node{
    int x;
    int y;
}father[210][210],a,b;
Node Find(Node temp)
{
    if(father[temp.x][temp.y].x==temp.x&&father[temp.x][temp.y].y==temp.y)
        return temp;
    return father[temp.x][temp.y]=Find(father[temp.x][temp.y]);
}
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
        {
            father[i][j].x=i;
            father[i][j].y=j;
        }

    for(int i=1;i<=m;i++)
    {
        int x,y;
        char ch[10];
        cin>>x>>y>>ch;
        if(ch[0]=='D')
        {
            a=Find(father[x][y]);
            b=Find(father[x+1][y]);
        }
        else if(ch[0]=='R')
        {
            a=Find(father[x][y]);
            b=Find(father[x][y+1]);
        }
        if(a.x==b.x&&a.y==b.y)
        {
            cout<<i<<endl;
            return 0;
        }
        else
            father[b.x][b.y]=a;
    }
    cout<<"draw"<<endl;
    return 0;
}