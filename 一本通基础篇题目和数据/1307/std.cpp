#include<iostream>  
#include<cstring>  
#include<string>  
using namespace std;  
int main()  
{  
    char str1[256],str2[256];  
    int a[256],b[256],c[256];  
    int lena,lenb,lenc;  
    int x;  
    int i,j;  
  
    memset(a,0,sizeof(a));  
    memset(b,0,sizeof(b));  
    memset(c,0,sizeof(c));  
  
    cin>>str1;//输入乘数str1  
    cin>>str2;//输入乘数str2  
  
    lena=strlen(str1);  
    lenb=strlen(str2);  
    for(i=0;i<=lena-1;i++)//乘数str1存入数组a  
        a[lena-i]=str1[i]-'0';  
    for(i=0;i<=lenb-1;i++)//乘数str2存入数组b  
        b[lenb-i]=str2[i]-'0';  
  
    for(i=1;i<=lenb;i++)  
    {  
        x=0;//用于存放进位  
        for(j=1;j<=lena;j++)//对乘数每一位进行处理  
        {  
            c[i+j-1]=a[j]*b[i]+x+c[i+j-1];//当前乘积+上次乘积进位+原数  
            x=c[i+j-1]/10;  
            c[i+j-1]%=10;  
        }  
        c[i+lena]=x;//进位  
    }  
    lenc=lena+lenb;  
    while((c[lenc]==0)&&(lenc>1))//删除前导0  
        lenc--;  
    for(i=lenc;i>=1;i--)//倒序输出  
        cout<<c[i];  
    cout<<endl;  
    return 0;  
}  