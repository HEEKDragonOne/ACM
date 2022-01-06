#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int n;
    int i,j;
    int a[110];
    memset(a,0,sizeof(a));
    cin>>n;
    a[0]=1,a[1]=1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=a[0];j++)//计算
            a[j]*=2;
        for(j=1;j<=a[0];j++)//转为高精加
        {
            a[j+1]+=a[j]/10;
            a[j]%=10;
        }
        if(a[a[0]+1]>0)//进位
            a[0]+=1;
    }
    for(i=a[0];i>=1;i--)//倒序输出
        cout<<a[i];
    return 0;
}
