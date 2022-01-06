#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{  
    char a[256];  
    int len;  
    int i;  
          
    fgets(a,255,stdin);  
    len=strlen(a);//计算字符串长度  
    for(i=0;i<len;i++)//按规则进行加密  
    {  
        if(a[i]=='Z'||a[i]=='z')    a[i]-=25;  
        else if(a[i]>='A'&&a[i]<'Z')  a[i]+=1;  
        else if(a[i]>='a'&&a[i]<'z')  a[i]+=1;  
          
    }  
    for(i=0;i<len;i++)  
        cout<<a[i];  
    cout<<endl;  
    return 0;  
}  
