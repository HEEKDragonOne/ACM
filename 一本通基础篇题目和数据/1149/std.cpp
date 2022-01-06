#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
	char s[2500];
	int k;
	int len;
	int max_len=0,max_position;
	int sum=0;
	int i;

	fgets(s,2500,stdin);//读入字符串
	len=strlen(s)-1;//求字符串长

	for(i=0;i<=len;i++)
	{
		if(s[i]!=' '&&s[i]!='.')	sum++;//若不是空格或句号，累加长度
		else if(sum>0)
		{
			if(sum>max_len)//若当前单词长度大于最长单词
			{
				max_len=sum;//替换最长单词长度
				max_position=i-sum;//记录最长单词起始位置
			}
			sum=0;//长度清零
		}
	}
	for(i=max_position;i<=max_len+max_position-1;i++)
		cout<<s[i];

	cout<<endl;
	return 0;
}
