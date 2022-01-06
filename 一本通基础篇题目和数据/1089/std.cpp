#include<iostream>
using namespace std;
int main()
{
	int n;
	int sum=0;

	cin>>n;
	if(n<0)//若n为负数
	{
		cout<<"-";//输出负号
		n=-n;//取正
	}
	while(n)//相当于n!=0
	{
		sum=sum*10+n%10;//原数个位相当于新数最高位
		n/=10;//整除10，相当于删除个位
	}
	cout<<sum<<endl;
	return 0;
}