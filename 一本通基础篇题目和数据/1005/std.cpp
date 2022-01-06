#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int x,y,a,b;
	double z;
	cin>>x>>a>>y>>b;
	z=(y*b-x*a)/(b-a);//计算最多人数
	cout<<setiosflags(ios::fixed)<<setprecision(2);//保留两位小数
	cout<<z<<endl;
	return 0;
}