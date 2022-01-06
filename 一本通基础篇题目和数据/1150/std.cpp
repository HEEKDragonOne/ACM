#include<iostream>
using namespace std;
int judge(int x);
int main()
{
	int n;
	int i;

	cin>>n;
	for(i=2;i<=n;i++)
		if(judge(i)==i)//judge(i)为i的因子之和，judge(i)若与i相等，满足条件，输出
			cout<<i<<endl;
	return 0;
}
int judge(int x)
{
	int i;
	int sum=0;
	for(i=1;i<=x-1;i++)//枚举1到x中，判断是否为x的因子
		if(x%i==0)//若是x的因子，累加
			sum+=i;
	return sum;
}