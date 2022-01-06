#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
long long a[60],b[60];
int main()
{
    int x,y,z;
    int i;

    cin>>x>>y>>z;
    for(i=1;i<=x;i++)
    {
        a[i]=1;//a[i]第i个月的成虫
        b[i]=0;//b[i]第i个月的卵
    }
    for(i=x+1;i<=z+1;i++)
    {
        b[i]=a[i-x]*y;//第i-x月的成虫在x个月后产下y个卵
        a[i]=a[i-1]+b[i-2];//第i个月的成虫等于第i-1个月的成虫数加上第i-2个月的卵
    }

    cout<<a[z+1]<<endl;
    return 0;
}