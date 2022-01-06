#include<iostream>
using namespace std;
int a[510];
int main()
{
    int n,b;
    int k=0;
    int temp;
    int i,j;

    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>b;
        if(b%2==1)
        {
            k++;
            a[k]=b;
        }
    }
    for(i=1;i<=k;i++)
        for(j=i+1;j<=k;j++)
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }

    cout<<a[1];
    for(i=2;i<=k;i++)
        cout<<","<<a[i];
    return 0;
}
