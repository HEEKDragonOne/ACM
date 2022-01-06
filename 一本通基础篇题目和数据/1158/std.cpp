#include<iostream>
using namespace std;
int calculate(int n);

int main()
{
	int n;
	cin>>n;//输入n的值
	cout<<calculate(n)<<endl;//调用函数计算从1—n的累加值
	return 0;
}

int calculate(int n)
{
	if(n==0)	return 0;//判断是否到达递归边界
	else	return n+calculate(n-1);//未到达继续递归
}