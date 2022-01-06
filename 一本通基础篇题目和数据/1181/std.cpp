#include<iostream>
using namespace std;
int main()
{
    int d;
    int a[20],b[20];
    int m=0,n=0;
    int temp;
    int i,j;
    
    while(cin>>d)
    {
        if(d%2==1)
            a[m++]=d;
        else 
            b[n++]=d;
    }
    
    for(i=0;i<m;i++)
        for(j=i+1;j<m;j++)
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
            
    for(i=0;i<n;i++)
        for(j=i+1;j<n;j++)
            if(b[i]>b[j])
            {
                temp=b[i];
                b[i]=b[j];
                b[j]=temp;
            }
            
    for(i=0;i<m;i++)
        cout<<a[i]<<" ";
    for(i=0;i<n;i++)
        cout<<b[i]<<" ";
    cout<<endl;
    return 0;
}