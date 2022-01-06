#include<iostream>  
#include<cstring>  
using namespace std;  
int a[100],b[100],c[100];  
int compare(int a[],int b[])//比较a、b，若a>b为1；若a<b为-1；若a=b为0  
{  
    int i;  
    if(a[0]>b[0])  
        return 1;  
    if(a[0]<b[0])  
        return -1;  
    for(i=a[0];i>0;i--)//从高位到低位比较  
    {  
        if(a[i]>b[i])  
            return 1;  
        if(a[i]<b[i])  
            return -1;  
    }  
    return 0;  
}  
  
void subduction(int a[],int b[])//计算a=a-b  
{  
    int flag;  
    int i;  
  
    flag=compare(a,b);  
    if(flag==0)//相等  
    {  
        a[0]=0;  
        return;  
    }  
    if(flag==1)//大于  
    {  
        for(i=1;i<=a[0];i++)  
        {  
            if(a[i]<b[i])//若不够向上借位  
            {  
                a[i+1]--;  
                a[i]+=10;  
            }  
            a[i]-=b[i];  
        }  
        while(a[0]>0&&a[a[0]]==0)//删除前导0  
            a[0]--;  
        return;  
    }  
}  
int main()  
{  
    char str1[100],str2[100];  
    int i,j;  
  
    memset(a,0,sizeof(a));  
    memset(b,0,sizeof(b));  
    memset(c,0,sizeof(c));  
  
    cin>>str1>>str2;  
    a[0]=strlen(str1);//a[0]存储串1的位数  
    b[0]=strlen(str2);//b[0]存储串2的位数  
    for(i=1;i<=a[0];i++)  
        a[i]=str1[a[0]-i]-'0';  
    for(i=1;i<=b[0];i++)  
        b[i]=str2[b[0]-i]-'0';  
  
  
    int temp[100];  
    c[0]=a[0]-b[0]+1;  
    for(i=c[0];i>0;i--)  
    {  
        memset(temp,0,sizeof(temp));  
  
        for(j=1;j<=b[0];j++)//从i开始的地方，复制数组b到数组temp  
            temp[j+i-1]=b[j];  
        temp[0]=b[0]+i-1;  
  
        while(compare(a,temp)>=0)//用减法模拟  
        {  
            c[i]++;  
            subduction(a,temp);  
        }  
    }  
  
    while(c[0]>0&&c[c[0]]==0)//删除前导0  
        c[0]--;  
  
    if(c[0]==0)//输出结果  
        cout<<0<<endl;  
    else  
    {  
        for(i=c[0];i>0;i--)  
            cout<<c[i];  
        cout<<endl;  
    }  
  
    if(a[0]==0)//输出余数  
        cout<<0<<endl;  
    else  
    {  
        for(i=a[0];i>0;i--)  
            cout<<a[i];  
        cout<<endl;  
    }  
  
    return 0;  
} 
