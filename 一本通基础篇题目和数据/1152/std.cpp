#include<iostream>
#include<cstdio>
using namespace std;
int max(int a,int b,int c);

int main()
{
	int a,b,c;
	double m;

	cin>>a>>b>>c;//输入a、b、c
	m=1.0*max(a,b,c)/(max(a+b,b,c)*max(a,b,b+c));//计算m
	printf("%.3lf\n",m);
	return 0;
}

int max(int a,int b,int c)//求三个数中的最大值
{
	int temp=a;
	if(a<b)
		temp=b;
	if(temp<c)
		temp=c;
	return temp;

}