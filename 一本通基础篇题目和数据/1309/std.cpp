#include<iostream>
#include<cstring>
using namespace std;
int n;
int a[500],b[500],step=0;
char str[500];
void add(int a[],int b[])//高精加
{
    int i;
    for(i=1;i<=a[0];i++)
    {
        a[i]+=b[i];
        a[i+1]+=a[i]/n;
        a[i]%=n;
    }
    if(a[a[0]+1]>0)
        a[0]+=1;
}
bool judge(int a[])//判断回文数
{
    int i;
    for(i=1;i<=a[0]/2;i++)
        if(a[i]!=a[a[0]-i+1])
            return false;
    return true;
}
void overturn(int a[])//倒序存储
{
    int i,j;
    b[0]=a[0];
    j=1;
    for(i=a[0];i>=1;i--)
    {
        b[j]=a[i];
        j++;
    }
}
void print(int a[])//数据输出
{
    int i;
    for(i=a[0];i>=1;i--)
        cout<<a[i];
    cout<<endl;
}
int main()
{
    int len;
    int i;

    cin>>n>>str;
    len=strlen(str);

    int k=1;
    for(i=len-1;i>=0;i--)//数据处理
    {
        if('0'<=str[i]&&str[i]<='9')
        {
            a[k]=str[i]-'0';
            k++;
        }
        if('a'<=str[i]&&str[i]<='z')
        {
            a[k]=str[i]-'a'+10;
            k++;
        }
        if('A'<=str[i]&&str[i]<='Z')
        {
            a[k]=str[i]-'A'+10;
            k++;
        }
    }

    a[0]=len;
    while(judge(a)==0)
    {
        overturn(a);
        add(a,b);
        step++;
        if(step>30)
            break;
    }

    if(step>30)
        cout<<"Impossible"<<endl;
    else
        cout<<step<<endl;
    return 0;
}