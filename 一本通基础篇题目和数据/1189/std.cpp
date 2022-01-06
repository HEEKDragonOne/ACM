#include<iostream>
using namespace std;
int a[1000100];
int main()
{
    int n,k,i;
    a[1]=1;
    a[2]=2;
    for(i=3;i<=1000000;i++)
        a[i]=(2*a[i-1]+a[i-2])%32767;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>k;
        cout<<a[k]<<endl;
    }
    return 0;
}