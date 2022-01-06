#include<iostream>
using namespace std;
int judge(int n);

int main()
{
	long int i;
	
	for(i=1;;i++)//从1开始枚举
		if( i==judge(judge(i)) && i!=judge(i) )//num(num(i))即为i因子之和的因子之和
		{
			cout<<i<<" "<<judge(i)<<endl;//i与judge(i)即满足条件的一组亲和数
			break;//退出
		}
	return 0;
}

int judge(int n)
{
	long int sum=0;
	long int i;

	for(i=1;i<n/2+1;i++)
		if(n%i==0)
			sum+=i;
	return sum;
}