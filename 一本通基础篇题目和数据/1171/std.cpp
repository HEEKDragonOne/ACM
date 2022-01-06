#include<iostream>
#include<cstring>
using namespace std;
int a[50],b[50];
char str[50];
int divide(int x)//高精除
{
    int i=a[0],res=0;
    while(i>0)
    {
        res*=10;
        res+=a[i];
        res%=x;
        i--;
    }
    return res;
}
int main()
{
    int len;
    bool flag=false;
    int i;

    cin>>str;
    len=strlen(str);

    int k=1;
    for(i=len-1;i>=0;i--)//数据处理
    {
        a[k]=str[i]-'0';
        k++;
    }

    a[0]=len;
    for(i=2;i<=9;i++)
    {
        if(divide(i)==false)//判断是否能整除，可以就输出
        {
            flag=true;
            cout<<i<<" ";
        }
    }
    if(flag==false)
        cout<<"none"<<endl;
    return 0;
}