#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
double calculate(double x,double n);

int main()
{
	double n,x;
	double result;
	cin>>x>>n;
	result=calculate(x,n);
	printf("%.2lf\n",result);
	return 0;
}

double calculate(double x,double n)
{
	if(n==1)//判断是否到达递归边界n=1
		return sqrt(1+x);
	else//否则继续递归
		return sqrt(n+calculate(x,n-1));
}