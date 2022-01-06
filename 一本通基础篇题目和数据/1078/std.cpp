#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int n;
	double a=1,b=1,c,sum=0;
	int i;

	cin>>n;//前n项
	for(i=1;i<=n;i++)
	{		
		c=a+b;a=b;b=c;//数列规律
		sum+=1.0*b/a;//求和
	}
	printf("%.4lf\n",sum);
	return 0;
}