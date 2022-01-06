#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
	char s[1000];
	int len,position;
	int i,j;
    scanf("%s",&s);
	len=strlen(s);//求字符串长度
	i=0;j=len-1;//记录字符串首、尾位置

	while( (i<j) &&(s[i]==s[j]) )//从首尾同时向中间判定，若不是回文串，则退出循环
	{
		i++;
		j--;
	}

	if(i>=j)	cout<<"yes"<<endl;
	else	cout<<"no"<<endl;
	
	return 0;
}
