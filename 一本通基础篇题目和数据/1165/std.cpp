#include<iostream>
#include<cstdio>
using namespace std;
double calculate(int n,int x);

int main()
{
	int n,x;
	double result;
	cin>>n>>x;
	result=calculate(n,x);
	printf("%.2lf\n",result);
	return 0;
}

double calculate(int n,int x)
{
	if(n==0)//判断是否到达递归边界n=0
		return 1;
	else if(n==1)//判断是否到达递归边界n=1
		return 2*x;
	else//否则继续递归
		return ( 2*x*calculate(n-1,x)-2*(n-1)*calculate(n-2,x) );
}