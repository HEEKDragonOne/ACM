#include<iostream>
using namespace std;
void calculate(int n,int k);

int main()
{
	int x,m;
	cin>>x>>m;//输入十进制数x与要转换成的进制m
	calculate(x,m);//调用函数进行转换
	cout<<endl;
	return 0;
}

void calculate(int n,int k)
{
	char num[16]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
	int temp;
	temp=n%k;
	n/=k;
	if(n!=0)//判断是否到达边界n=0
		calculate(n,k);
	cout<<num[temp];
}