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
#define N 3001
#define MOD 123
#define E 1e-6
using namespace std;
int n;
char a[N],b[N];
void build(char *s,int n)
{
    int k=0;
    for(int i=(1<<n);i<=(1<<(n+1))-1;i++)
    {
        if(a[k++]=='0')
            b[i]='B';
        else
            b[i]='I';
    }

    for(int i=n-1;i>=0;i--)
        for(int j=(1<<i);j<=(1<<(i+1))-1;j++)
        {
            if(b[2*j]=='B'&&b[2*j+1]=='B')
                b[j]='B';
            else if(b[2*j]=='I'&&b[2*j+1]=='I')
                b[j]='I';
            else
                b[j]='F';
        }
}
void visit(int node)
{
    if(node>( 1<<(n+1))-1 )
        return;
    visit(node*2);
    visit(node*2+1);
    cout<<b[node];
}
int main()
{
    cin>>n;
    cin>>a;
    build(a,n);
    visit(1);
    return 0;
}