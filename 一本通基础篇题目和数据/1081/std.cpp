#include<iostream>
using namespace std;
int main()
{
	int n,sum=0;
	int i;

	cin>>n;//人数
	for(i=1;i<=n;i++)//第一个从1开始，其后每人比前一人多一个
		sum+=i;//累计
	cout<<sum<<endl;
	return 0;
}