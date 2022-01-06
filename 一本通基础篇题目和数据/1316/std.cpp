#include<iostream>
using namespace std;
int main()
{
    int n;
    int a[1100];
    
    cin>>n;
    a[1]=1;
    a[2]=2;
    for(int i=3;i<=n;i++)
    {
        if(i%2==0)
            a[i]=a[i-1]+a[i/2];
    	else 
            a[i]=a[i-1];
    }
    cout<<a[n]<<endl; 
    return 0;
}