#include<iostream>
#include<cstring>
using namespace std;
int a[100000];
int main()
{
    int n;
    int i,j;

    cin>>n;
    a[0]=1,a[1]=1;
    for(i=1;i<=n;i++)//高精乘
    {
        for(j=1;j<=a[0];j++)
            a[j]*=i;
        for(j=1;j<=a[0];j++)
        {
            a[j+1]+=a[j]/10;
            a[j]%=10;
        }
        if(a[j]>0)//进位处理
        {
            while(a[j]>10)
            {
                a[j+1]+=a[j]/10;
                a[j]%=10;
                j++;
            }
            a[0]=j;
        }
    }
    for(i=a[0];i>=1;i--)
        cout<<a[i];
    return 0;
}