#include<iostream>
using namespace std;
int main()
{
	long int n;
	
	cin>>n;
	while(n)//相当于n!=0
	{
		cout<<n%10<<" ";//分离当前个位
		n/=10;//整除10，相当于删除个位
	}
	cout<<endl;
	return 0;
}