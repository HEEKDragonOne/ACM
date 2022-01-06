#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int mp[105][105],f[105],a[105];
const int maxn=10000005;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            cin>>mp[i][j];
    for(int i=1;i<=n;i++)f[i]=maxn;
    f[n]=0;a[n]=0;
    for(int i=n-1;i>0;i--)
        for(int j=i+1;j<=n;j++)
            if(mp[i][j]&&mp[i][j]+f[j]<f[i])
            {
                f[i]=mp[i][j]+f[j];
                a[i]=j;
            }            
    
    cout<<"minlong="<<f[1]<<endl;
    int k=1;
    printf("1");
    while(k)
    {
        if(k!=1)printf(" %d",k);
        k=a[k];
    }
}
