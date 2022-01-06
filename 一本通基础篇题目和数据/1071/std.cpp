#include<iostream>
using namespace std;
int main()
{
	int k;
	int a=1,b=1,temp;//a、b为第1、2个数，temp用于存储第i个数
	int i;

	cin>>k;
	
	for(i=3;i<=k;i++)
	{
		temp=a+b;//每个数都为前两数之和
		a=b;
		b=temp;
	}
	cout<<b<<endl;
        return 0;
}