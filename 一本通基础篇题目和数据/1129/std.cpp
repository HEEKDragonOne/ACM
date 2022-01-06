#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    char ch[256];
	int len;
    int sum=0;
    int i;
    
    fgets(ch,256,stdin);//获取一行字符串
    len=strlen(ch);//求字符串长度
    
    for(i=0;i<=len;i++)//对字符串进行遍历
    	if(ch[i]>='0'&&ch[i]<='9')//如果是数字
            sum++;//计数器+1
    
    cout<<sum<<endl;//输入统计的个数
    
    return 0;
}
