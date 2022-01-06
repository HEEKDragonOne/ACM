#include<iostream> 
using namespace std;
int a[30];
int main()
{
    int n,i;
    a[1]=1;
    a[2]=1+a[2-1];
    for(i=3;i<20;i++)
        a[i]=a[i-1]+a[i-2];
    cin>>n;
    cout<<a[n]<<endl;
    return 0;
}