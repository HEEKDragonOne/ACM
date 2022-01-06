#include<iostream>
using namespace std;
int main()
{
	int k,n=1;
	double sum=1;
	
	cin>>k;
	while(sum<=k)
	{
		n++;//累加n的值
		sum+=1.0/n;//计算n项和
	}
	cout<<n<<endl;
	return 0;
}