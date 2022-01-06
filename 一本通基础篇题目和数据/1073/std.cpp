#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double n,people,x,y;
	double l,time=0;
	int i;

	cin>>n;//输入屋顶数
	for(i=1;i<=n;i++)//每一个屋顶
	{		
		cin>>x>>y;
		cin>>people;
		l=sqrt(1.0*x*x+1.0*y*y);
		time+=2*l/50+people*1.5;//计算时间
	}
	cout<<ceil(time)<<endl;//向上取整
	return 0;
}