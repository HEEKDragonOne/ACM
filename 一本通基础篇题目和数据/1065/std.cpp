#include<iostream>
using namespace std;
int main()
{
        int a,b;
	int sum=0;//初始化
	int i;
    
	cin>>a>>b;
	if(a%2==0)	a++;//保证从奇数开始加
	for(i=a;i<=b;i+=2)//计算奇数和
		sum+=i;	

	cout<<sum<<endl;
        return 0;
}