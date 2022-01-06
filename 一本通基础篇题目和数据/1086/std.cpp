#include<iostream>
using namespace std;
int main()
{
	long int n,a;
	
	cin>>n;
	while(n!=1)
	{
		if(n%2)//n为奇数
		{
			cout<<n<<"*3+1="<<n*3+1<<endl;
			n=n*3+1;
		}
		else//n为偶数
		{
			cout<<n<<"/2="<<n/2<<endl;
			n/=2;
		}
	}
	cout<<"End"<<endl;
	return 0;
}