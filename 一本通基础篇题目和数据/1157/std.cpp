#include<iostream>
#include<cmath>
using namespace std;
bool judge(int x);

int main()
{
	int x;
	int i;

	for(x=6;x<=100;x+=2)//枚举6-100的偶数
		for(i=2;i<=x/2;i++)//将x分解为i与x-i两个数
			if(judge(i)&&judge(x-i))//若被分解的两个数皆为素数
			{
				cout<<x<<"="<<i<<"+"<<x-i<<endl;//输出
				break;//终止循环
			}
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