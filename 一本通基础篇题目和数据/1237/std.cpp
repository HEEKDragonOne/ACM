#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<algorithm>
#include<string>
#define INF 999999999
#define N 1000001
#define MOD 1000000007
using namespace std;
int n;
int a[N],b[N];
long long ans=0;
void msort(int left,int right)
{
    int mid=(left+right)/2;
    if(left>=right)
        return ;
    msort(left,mid);
    msort(mid+1,right);

    int i=left,j=mid+1,n=mid,m=right,k=0;
    while(i<=n&&j<=m)
        if(a[i]>a[j])
        {
            ans+=n-i+1;
            b[k++]=a[j++];
        }
        else
            b[k++]=a[i++];
    while(i<=n)
        b[k++]=a[i++];
    while(j<=m)
        b[k++]=a[j++];
    for(i=0;i<k;i++)
        a[left+i]=b[i];
}
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    msort(1,n);
    cout<<ans<<endl;
    return 0;
}