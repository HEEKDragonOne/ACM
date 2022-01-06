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

	for(i=0;i<len;i++)//小写转换为大写
		if(a[i]>='a'&&a[i]<='z')
			a[i]-=32;

	puts(a);

	return 0;
}
