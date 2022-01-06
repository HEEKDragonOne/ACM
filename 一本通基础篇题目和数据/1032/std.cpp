#include<iostream>
#include<cmath>
using namespace std;
int main()
{ 
	double r,c,h,pi,v,water;
	pi=3.14159;
	cin>>h>>r;
	v=pi*r*r*h/1000.0;
	water=20.0/v;
	c=ceil(water);//ceil作用：返回大于或者等于指定表达式的最小整数
	cout<<c<<endl;
	return 0;
}