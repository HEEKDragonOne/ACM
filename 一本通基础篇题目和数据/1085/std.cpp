#include<iostream>
using namespace std;
int main()
{
	double h,sum;
	int i;

	cin>>h;
	sum=h;
	for(i=1;i<=9;i++)
	{
		h/=2;//每次反弹回原高的一半
		sum+=h*2;//累加反弹与落地的米数
	}
	cout<<sum<<endl;//总米数
	cout<<h/2<<endl;//最后弹跳的高度
	return 0;
}