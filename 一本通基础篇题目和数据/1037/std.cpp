#include<iostream>
#include<cmath>//pow()函数需调用<cmath>
using namespace std;
int main()
{
	int n,result;
	cin>>n;
	result=pow(2,n);//power(x,y)，求x^y,其中x为底数，y为指数
	cout<<result<<endl;
	return 0;
}