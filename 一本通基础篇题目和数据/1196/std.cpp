#include<iostream> 
#include<cstring>
using namespace std;
int a[30];
int main()
{
    int n,i;
    cin>>n;
    a[1]=3;
    a[2]=7;
    for(i=3;i<=n;i++)
        a[i]=2*a[i-1]+a[i-2];
    cout<<a[n]<<endl;
    return 0;
}