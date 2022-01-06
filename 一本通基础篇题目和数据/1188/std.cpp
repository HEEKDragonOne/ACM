#include<iostream>
using namespace std;
int a[1000100];
int main()
{
    int n,x,i;
    a[1]=1;
    a[2]=1;
    for(i=3;i<=1000000;i++)
        a[i]=(a[i-1]+a[i-2])%1000;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>x;
        cout<<a[x]<<endl;
    }
    return 0;
}