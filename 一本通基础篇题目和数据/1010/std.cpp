#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int a,b;
	double result;
	cin>>a>>b;
	result=1.0*a/b;
	cout<<setiosflags(ios::fixed)<<setprecision(9);
	cout<<result<<endl;
	return 0;
}