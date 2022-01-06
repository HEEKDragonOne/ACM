#include<iostream>
using namespace std;
int main()
{
	int a,b,n;
	int temp;
	int i;

	cin>>a>>b>>n;
	for(i=1;i<=n;i++)
	{
		a*=10;
		temp=a/b;//temp模拟存储第i为小数
		a%=b;
	}
	cout<<temp<<endl;
	return 0;
}