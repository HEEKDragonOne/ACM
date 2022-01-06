#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	int i,j;

	cin>>n;
	for(i=2;i<=sqrt(n);i++)//两个不同质数，其中必有一个≤sqrt(n)
	{
		if(n%i==0)//找到质数
		{
			cout<<n/i<<endl;//较大质数=n/较小质数，输出
			break;//输出后，终止
		}
	}

 	return 0;
}