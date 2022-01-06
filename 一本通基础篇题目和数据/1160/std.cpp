#include<iostream>
using namespace std;
void calculate(int n);

int main()
{
	int n;
	cin>>n;//输入n的值
	calculate(n);//调用函数计算并输出n的倒序数
	cout<<endl;
	return 0;
}

void calculate(int n)
{
	cout<<n%10;//输出n的最后一位
	if(n>=10)	calculate(n/10);//判断是否到达递归边界x<10
}