#include<iostream>
using namespace std;
int ack(int m,int n);

int main()
{
	int m,n;
	cin>>m>>n;
	cout<<ack(m,n)<<endl;
	return 0;
}

int ack(int m,int n)
{
	if(m==0)//判断是否到达递归边界m=0
		return (n+1);
	else if(n==0)//判断是否到达递归边界n=0
		return (ack(m-1,1));
	else//否则继续递归
		return (ack(m-1,ack(m,n-1)));
}