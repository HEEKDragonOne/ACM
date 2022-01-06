#include<iostream>
#include<cstring>
using namespace std;
char s[110];
int a[110][110];
struct node{
    int r;//r行
    int c;//c列
    int d;//d天
}q[10100];
int nextt[][2]={{-1,0},{1,0},{0,-1},{0,1}};
int main()
{
    int n,m;
    int h=1,t=1;
    int r,c,d;
    int nr,nc,cnt=0;
    int i,j;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>s;
        for(j=0;j<n;j++)
            if(s[j]=='.')
                a[i][j]=0;
            else if(s[j]=='@')
            {
                a[i][j]=1;
                q[t].r=i;
                q[t].c=j;
                q[t].d=1;
                t++;
            }
            else if(s[j]=='#')
                a[i][j]=2;
    }
    cin>>m;
    while(h<t)
    {
        r=q[h].r;
        c=q[h].c;
        d=q[h].d;
        if(d==m)
            break;
        for(i=0;i<4;i++)
        {
            nr=r+nextt[i][0];
            nc=c+nextt[i][1];
            if(a[nr][nc]==0&&0<=nr&&nr<n&&0<=nc&&nc<n)
            {
                q[t].r=nr;
            	q[t].c=nc;
                q[t].d=d+1;
                a[nr][nc]=1;
                 t++;
            }
        }
        h++;
    }
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            if(a[i][j]==1)
                cnt++;
    cout<<cnt<<endl;
    return 0;
}
