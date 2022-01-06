#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
	char a[256];
	int len;
	int i;
		
	scanf("%s",a);
	len=strlen(a);//计算字符串长度

	if(a[0]>='0'&&a[0]<='9')	
	{
		cout<<"no"<<endl;//开头是数字，不满足条件
		return 0;
	}
	for(i=0;i<len;i++)//若不含包含字母、数字、下划线，不满足条件
		if(!( (a[i]>='0'&&a[i]<='9') || (a[i]>='A'&&a[i]<='Z') || (a[i]>='a'&&a[i]<='z') || a[i]=='_') )
		{
			cout<<"no"<<endl;
			return 0;
		}
	cout<<"yes"<<endl;
	return 0;
}
