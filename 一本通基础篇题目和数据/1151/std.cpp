#include<iostream>
#include<cmath>
using namespace std;
bool judge(int x);
int main()
{
	int n;
	int i;
	int sum=0;

	cin>>n;
	for(i=2;i<=n;i++)
		if(judge(i))//若是素数
			sum++;//累加素数个数
	cout<<sum<<endl;

	return 0;
}
bool judge(int x)//判断素数
{
	int i=2;
	while(i<=floor(sqrt(x))&&(x%i)!=0)
		i++;
	if(i>floor(sqrt(x)))
		return true;
	return false;
}