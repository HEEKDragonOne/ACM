#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
	char s[2500];
	int k;
	int len;
	int sum=0;
	int i;

	cin>>k;//输入要找的次数
	cin>>s;//读入字符串
	len=strlen(s);//求字符串长

	for(i=0;i<len;i++)
	{
		if(sum==k)//若次数已达题目要求
		{
			cout<<s[i]<<endl;//输出
			return 0;//结束
		}
		if(s[i]==s[i+1])//若下一项与该项相同
			sum++;//次数加1
		else//否则，次数归1
			sum=1;
	}
	cout<<"No"<<endl;
	return 0;
}