#include<iostream>
#include<cstdio>
using namespace std;
void calculate(int n);
char ch[10000];
int main()
{
	fgets(ch,10000,stdin);//获取一行字符串
	calculate(0);//调用函数
	cout<<endl;
	return 0;
}

void calculate(int n)
{
	if(ch[n]!='!')//判断是否到达边界ch[x]=!
		calculate(n+1);
	else return;
	cout<<ch[n];
}
