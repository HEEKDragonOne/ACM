#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,a[10000];
    int sum=0,average,step=0;
    int i,j;

    cin>>n;
    for(i=1;i<=n;i++)	
    {
        cin>>a[i];
        sum+=a[i];
    }
    
    average=sum/n;
    for(i=1;i<=n;i++)	a[i]-=average;
    
    for(i=1;a[i]==0&&i<n;)i++;
    for(j=n;a[j]==0&&j>1;)j--;

    for(;i<j;)
    {
        a[i+1]+=a[i];
        a[i]=0;
        i++;
        step++;
        while(a[i]==0&&i<j)	
            i++;
    } 

    cout<<step<<endl;

    return 0;
}