#include<iostream>
using namespace std;
int main()
{
        int n,a[101];
	int i;
    
	cin>>n;//输入人数
	a[0]=0;
	for(i=1;i<=n;i++)
	{
		cin>>a[i];//输入成绩
		if(a[i]>a[0])//进行比较
		a[0]=a[i];
	}

	cout<<a[0]<<endl;
        return 0;
}