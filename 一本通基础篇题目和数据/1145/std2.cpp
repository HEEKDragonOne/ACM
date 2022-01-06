
#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
	char s[1000];
	int len,position;
	int sum=1;
	int i;
 
	fgets(s,1000,stdin);//获取字符串s
	len=strlen(s);//求字符串长度
 
	for(i=0;i<len;i++)
	{
		if(s[i]==s[i+1])	sum++;//若第i个与第i+1个数字相同，累加连续出现次数
		else
		{
			cout<<sum<<s[i];//无法连续时，输出第i个数字连续出现次数与该数字
			sum=1;//开始累加第i+1个数字的连续出现次数
		}
	}
	cout<<endl;
	return 0;
}
