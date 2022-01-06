#include<iostream>
using namespace std;
int main()
{
	int m,n,a[101];
	int sum=0;
	int i;

	cin>>m>>n;//药品总量、取药人数
	for(i=1;i<=n;i++)//每个病人取药数量
	{		
		cin>>a[i];
		if(m>=a[i])	m-=a[i];//判断第i个人的取药情况
		else	sum++;
	}
	cout<<sum<<endl;
	return 0;
}