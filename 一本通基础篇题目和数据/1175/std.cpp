#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int a[110];
    char str[110];
    int len;
    int i,k=0,b=0,c;

    cin>>str;
    len=strlen(str);

    for(i=len-1;i>=0;i--)
        a[++k]=str[i]-'0';
    a[0]=len;

    i=a[0];//首项处理
    while(b<13)
    {
        b*=10;
        b+=a[i];
        i--;
    }
    cout<<b/13;

    b%=13;
    c=b;
    while(i>=1)//高精除
    {
        b*=10;
        b+=a[i];
        i--;
        cout<<b/13;
        b%=13;
        c=b;
    }
    cout<<endl;
    cout<<c<<endl;
    return 0;
}