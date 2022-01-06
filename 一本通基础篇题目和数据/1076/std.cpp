#include<iostream>
using namespace std;
int main()
{
	int n,a[101][2];
	int max=0,sum=0;
	int i;

	cin>>n;//测量n次
	for(i=1;i<=n;i++)//每个小时的情况
	{		
		cin>>a[i][0]>>a[i][1];//收缩压、舒张压
		if(a[i][0]>=90&&a[i][0]<=140&&a[i][1]>=60&&a[i][1]<=90)//判断是否正常
		{
			sum++;
			if(sum>max)//如果大于目前连续正常最长小时数
				max=sum;//替换max的值
		}
		else sum=0;//若不这个小时内不正常，清零sum
	}
	cout<<max<<endl;
	return 0;
}