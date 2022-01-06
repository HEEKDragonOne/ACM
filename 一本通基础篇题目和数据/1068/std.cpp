#include<iostream>
using namespace std;
int main()
{
	int n,number,N;
	int sum=0;
	int i;

	cin>>n>>number;//输入长度、指定数字
	for(i=1;i<=n;i++)
	{
		cin>>N;//输入各个数字
		if(N==number)	sum++;//统计相同的个数
	}
	cout<<sum<<endl;
        return 0;
}