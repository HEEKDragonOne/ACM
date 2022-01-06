#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<algorithm>
#define INF 999999999
#define N 101
using namespace std;
struct node{
    int w;
    int c;
    double g;
}a[N],temp;
int main()
{
    int t;
    int W,m;

    cin>>t;
    while(t--)
    {
        double cnt=0;
        cin>>W>>m;
        for(int i=1;i<=m;i++)
        {
            cin>>a[i].w>>a[i].c;
            a[i].g=a[i].c*1.0/a[i].w;
        }
        for(int i=1;i<=m;i++)
            for(int j=i+1;j<=m;j++)
                if(a[i].g<a[j].g)
                {
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }
        for(int i=1;i<=m;i++)
        {
            if(W>=a[i].w)
            {
                cnt+=a[i].c;
                W-=a[i].w;
            }
            else
            {
                cnt+=a[i].g*W;
                break;
            }
        }
        printf("%.2lf\n",cnt);
    }
    return 0;
}