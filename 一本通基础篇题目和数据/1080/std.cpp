#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	int i;

	cin>>a>>b>>c;
	for(i=2;i<=a;i++)//从2开始寻找
	{		
		if(a%i==b%i&&b%i==c%i)//余数相同
		{
			cout<<i<<endl;//输出
			break;//终止循环，退出
		}
	}
	return 0;
}