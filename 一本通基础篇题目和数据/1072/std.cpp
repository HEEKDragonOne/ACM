#include<iostream>
using namespace std;
int main()
{
	int n,a[30][2];
	double x,y;
	int i;

	cin>>n;//输入组数

	for(i=0;i<n;i++)//输入数据
		cin>>a[i][0]>>a[i][1];
	x=1.0*a[0][1]/a[0][0];//计算第一种数据
	for(i=1;i<n;i++)//进行比较
	{		
		y=1.0*a[i][1]/a[i][0];//每组数据
		if(y-x>0.05)	cout<<"better"<<endl;
		else if(x-y>0.05)	cout<<"worse"<<endl;
		else	cout<<"same"<<endl;
	}
	return 0;
}