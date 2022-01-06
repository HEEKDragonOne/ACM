#include<iostream>
using namespace std;
int main()
{
        int n,sum=1;
	int i,j;
	
        cin>>n;
	for(i=2;i<=n;i++)//从2开始枚举
		for(j=i;j>0;j/=10)//分离个位
			if(j%10==1)	sum++;//若个位为1，计数器+1

	cout<<sum<<endl;
	return 0;
}