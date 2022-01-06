#include<iostream>
using namespace std;
int a[10100];
int main()
{
    int n;
    int i,j;
    int temp,sum=0;

    cin>>n;
    for(i=1;i<=n;i++)
        cin>>a[i];
    for(i=1;i<=n;i++)
        for(j=i+1;j<=n;j++)
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
                sum++;
            }
    cout<<sum<<endl;
    return 0;
}