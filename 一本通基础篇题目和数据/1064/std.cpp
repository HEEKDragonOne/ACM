#include<iostream>
using namespace std;
int main()
{
    int n;
	int sum,a[20][3]={0};//初始化
	int i;
    
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>a[i][0]>>a[i][1]>>a[i][2];//每天的奖牌数
		a[0][0]+=a[i][0];//金牌数
		a[0][1]+=a[i][1];//银牌数
		a[0][2]+=a[i][2];//铜牌数
	}

	sum=a[0][0]+a[0][1]+a[0][2];//总数
	cout<<a[0][0]<<" "<<a[0][1]<<" "<<a[0][2]<<" "<<sum<<endl;
    return 0;
}