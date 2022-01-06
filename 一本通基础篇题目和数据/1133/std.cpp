#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
	char a[101];
	int len;
	int i;
		
	scanf("%s",a);
	len=strlen(a);//计算字符串长度

	for(i=0;i<=len-2;i++)//除最后一位，其他依次变换输出
		cout<<char(a[i]+a[i+1]);
	cout<<char(a[len-1]+a[0])<<endl;//输出变化后的最后一位
	return 0;
}
