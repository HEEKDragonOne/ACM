#include<iostream>
#include<cmath>
using namespace std;
bool judge(int x);

int main()
{
	int i;
	
	for(i=10;i<=99;i++)//从10枚举到99
		if( judge(i) && judge((i%10)*10+(i/10)) )//分别判断i以及i变换后是否是素数
			cout<<i<<endl;
	return 0;
}

bool judge(int x)
{
	int i=2;
	while( i<=floor(sqrt(x)) && (x%i!=0) )
		i++;
	if(i>floor(sqrt(x)))
		return true;
	return false;
}