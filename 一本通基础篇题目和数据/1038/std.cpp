#include<iostream>
#include<cmath>
using namespace std;
int main()
{ 
	double n,x,y,c;
	cin>>n>>x>>y;
	c=n-ceil(y*1.0/x);//ceil作用：返回大于或者等于指定表达式的最小整数
	if(c<0)	c=0;//需考虑c<0的情况
	cout<<c<<endl;
	return 0;
}