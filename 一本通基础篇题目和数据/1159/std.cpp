#include<iostream>
using namespace std;
int calculate(int n);

int main()
{
	int n;
	cin>>n;//输入n的值
	cout<<calculate(n)<<endl;//调用函数计算并输出斐波那契数列第n项
	return 0;
}

int calculate(int n)
{
	if(n==1)	return 0;//判断是否到达递归边界n=1
	else if(n==2)	return 1;//判断是否到达递归边界n=2
	else	return calculate(n-1)+calculate(n-2);//未到达继续递归
}