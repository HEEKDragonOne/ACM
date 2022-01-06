#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int n,a[10001];
	double average;
	int i;
    
	cin>>n;//输入数据数
	a[0]=0;//用于存储数据和
	for(i=1;i<=n;i++)
	{
		cin>>a[i];//输入数据
		a[0]+=a[i];//求和
	}

	average=1.0*a[0]/n;//求平均值
	printf("%d %.5lf\n",a[0],average);
    return 0;
}