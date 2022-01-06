#include<iostream>
using namespace std;
int main()
{
        int n,a[1001];
	int min=9999,max=0;//初始化
	int i;
    
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
		if(a[i]>max)//最大值
			max=a[i];
		if(a[i]<min)//最小值
			min=a[i];
	}

	cout<<max-min<<endl;//跨度值
        return 0;
}