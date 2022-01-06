#include<iostream>
using namespace std;
int main()
{
	int n,m;
	int a,b,c,d,sum=0;
	int i;

	cin>>n;//数字个数
	for(i=1;i<=n;i++)
	{		
		cin>>m;//每个四位数
		a=m/1000;//千位
		b=m/100%10;//百位
		c=m/10%10;//十位
		d=m%10;//个位
		if(d-a-b-c>0)	sum++;//满足条件，累加
	}
	cout<<sum<<endl;
	return 0;
}