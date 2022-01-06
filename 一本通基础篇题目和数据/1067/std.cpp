#include<iostream>
using namespace std;
int main()
{
	int n,number;
	int sum_1=0,sum_5=0,sum_10=0;
	int i;

	cin>>n;//输入数字个数
	for(i=1;i<=n;i++)
	{
		cin>>number;//输入各个数字
		if(number==1)	sum_1++;//统计等于1的个数
		if(number==5)	sum_5++;//统计等于5的个数
		if(number==10)	sum_10++;//统计等于10的个数
	}
	cout<<sum_1<<endl;
	cout<<sum_5<<endl;
	cout<<sum_10<<endl;
        return 0;
}