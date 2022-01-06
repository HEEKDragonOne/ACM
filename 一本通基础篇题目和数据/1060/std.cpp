#include <iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
	int  num,i;
 	double n,arr,sum=0;
 	cin>>num;
 	for(i=1;i<=num;i++)
 	{
		cin>>n;//输入数据
  		sum=sum+n;//数据和
 	}
 	arr=sum*1.0/num;//均值
 	cout<<setprecision(4)<<setiosflags(ios::fixed);
 	cout<<arr<<endl;
 	return 0;
}