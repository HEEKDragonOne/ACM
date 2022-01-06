#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<algorithm>
#define INF 999999999
#define N 10001
using namespace std;
int a[N],s[101];
int main()
{
    int n,m;
    int k;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=1;i<=n;i++)
    {
        int min=INF;
        for(int j=1;j<=m;j++)
            if(s[j]<min)
            {
                min=s[j];
                k=j;
            }
        s[k]+=a[i];
    }
    int max=-INF;
    for(int i=1;i<=m;i++)
        if(s[i]>max)
            max=s[i];
    cout<<max<<endl;
    return 0;
}