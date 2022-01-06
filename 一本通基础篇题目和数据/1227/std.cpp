#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<algorithm>
#define INF 999999999
#define N 10001
using namespace std;
struct node{
    int v;
    int start;
    int endd;
}a[N];
int main()
{
    int n;
    int t;

    while(cin>>n&&n)
    {
        for(int i=1;i<=n;i++)
        {
            cin>>a[i].v>>a[i].start;
            t=16200/a[i].v;
            if(16200.0/a[i].v>t)
                t++;
            a[i].endd=a[i].start+t;
        }
        int min=INF;
        for(int i=1;i<=n;i++)
            if(a[i].start==0&&a[i].endd<min)
                min=a[i].endd;
        for(int i=1;i<=n;i++)
            if(a[i].start>0&&a[i].endd<min)
                min=a[i].endd;
        cout<<min<<endl;
    }
    return 0;
}