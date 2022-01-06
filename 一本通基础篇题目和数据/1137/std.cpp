#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()

{
	char a[256],temp;
	int len;
	int i;
		
	scanf("%s",a);
	len=strlen(a);//计算字符串长度

	for(i=0;i<len;i++)//按规则进行加密
	{
		if(a[i]>='a'&&a[i]<='z')//小写的情况
		{
			temp=a[i];temp+=3;//向右移动3个字符
			if(temp>122)	temp-=26;//若为x，y，z，转换为a，b，c
			temp-=32;a[i]=temp;//小写转换为大写

		}
		else if(a[i]>='A'&&a[i]<='Z')//大写的情况
		{
			temp=a[i];temp+=3;//向右移动3个字符
			if(temp>90)	temp-=26;//若为X，Y，Z，转换为A，B，C
			temp+=32;a[i]=temp;//大写转换为小写

		}
	}

	for(i=len-1;i>=0;i--)//逆序输出
		cout<<a[i];
	cout<<endl;

	return 0;
}
