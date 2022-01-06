#include<iostream>  
#include<cstring>  
#include<string>  
using namespace std;  
int main()  
{  
    char str1[256],str2[256],temp[256];  
    int a[256],b[256],c[256];  
    int lena,lenb,lenc;  
    int i;  
  
    memset(a,0,sizeof(a));  
    memset(b,0,sizeof(b));  
    memset(c,0,sizeof(c));  
  
    cin>>str1;//输入被减数  
    cin>>str2;//输入减数  
  
    lena=strlen(str1);  
    lenb=strlen(str2);  
    if( (lena<lenb) || (lena==lenb&&strcmp(str1,str2)) )//如果被减数小于减数，值为负，两者交换  
    {  
        strcpy(temp,str1);  
        strcpy(str1,str2);  
        strcpy(str2,temp);  
        cout<<"-";//输出-  
    }  
  
    lena=strlen(str1);  
    lenb=strlen(str2);  
  
    for(i=0;i<=lena-1;i++)//被减数str1存入数组a  
        a[lena-i]=str1[i]-'0';  
    for(i=0;i<=lenb-1;i++)//减数str2存入数组b  
        b[lenb-i]=str2[i]-'0';  
  
    i=1;  
    while(i<=lena||i<=lenb)  
    {  
        if(a[i]<b[i])  
        {  
            a[i]+=10;//借位  
            a[i+1]--;//上一位减1  
        }  
        c[i]=a[i]-b[i];//对应位相减  
        i++;  
    }  
    lenc=i;  
    while((c[lenc]==0)&&(lenc>1))//删除前导0  
        lenc--;  
  
    for(i=lenc;i>=1;i--)//倒序输出  
        cout<<c[i];  
    cout<<endl;  
    return 0;  
}  