#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int a[100100],n,b[100100];
long long sum=0;
void msort(int left,int right)
{
    if(left>=right)
        return;

    int mid=(left+right)/2;

    msort(left,mid);
    msort(mid+1,right);

    int i=left,j=mid+1,k=left;
    while(i<=mid&&j<=right)
    {
        if(a[i]>a[j])
        {
            b[k++]=a[j++];
            sum+=mid-i+1;
        }
        else
            b[k++]=a[i++];
    }
    while(i<=mid)
        b[k++]=a[i++];
    while(j<=right)
        b[k++]=a[j++];
    for(i=left;i<=right;i++)
        a[i]=b[i];
}
int main()
{
    int i,j;
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>a[i];
    msort(1,n);
    cout<<sum<<endl;
    return 0;
}