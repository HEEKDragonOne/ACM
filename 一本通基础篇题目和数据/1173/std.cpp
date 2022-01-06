#include<iostream>
#include<cstring>
using namespace std;
int a[500],sum[500];
void mul(int x)//高精乘
{
    int i;
    for(i=1;i<=a[0];i++)
        a[i]*=x;
    for(i=1;i<=a[0];i++)
    {
        a[i+1]+=a[i]/10;
        a[i]%=10;
    }

    i=a[0];
    while(a[i+1]>0)
        i++;

    a[0]=i;
    i=a[0];
    while(a[i]>10)
    {
        a[i+1]+=a[i]/10;
        a[i]%=10;
        i++;
    }
    a[0]=i;
}
void add()//高精加
{
    int i;
    if(sum[0]>a[0])
        sum[0]=sum[0];
    else
        sum[0]=a[0];
    for(i=1;i<=sum[0];i++)
    {
        sum[i]+=a[i];
        sum[i+1]+=sum[i]/10;
        sum[i]%=10;
    }
    if(sum[sum[0]+1]>0)
        sum[0]+=1;
}
int main()
{
    int n;
    int i;

    cin>>n;
    a[0]=1;a[1]=1;sum[0]=1;sum[1]=0;
    for(i=1;i<=n;i++)
    {
        mul(i);//计算阶乘
        add();//计算阶乘和
    }
    for(i=sum[0];i>=1;i--)
        cout<<sum[i];
    cout<<endl;
    return 0;
}
