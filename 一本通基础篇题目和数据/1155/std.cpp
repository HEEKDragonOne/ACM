#include<iostream>
#include<cmath>
using namespace std;
bool judge(int x);

int main()
{
	int i;
	for(i=100;i<=999;i++)//从枚举所有三位数
		if( judge(i) && (i/100==i%10))//该数是素数且百位与个位相同
			cout<<i<<endl;//输出该数
	return 0;
}

bool judge(int x)//判断素数
{
	int i=2;
	while( i<=floor(sqrt(x)) && (x%i!=0) )
		i++;
	if(i>floor(sqrt(x)))
		return true;
	return false;
}