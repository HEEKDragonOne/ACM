#include<iostream>
using namespace std;
int main()
{
	double a,b,r;
	cin>>a>>b;
	r=a-int(a/b)*b;//根据所给公式计算，其中k=int(a/b)
	cout<<r<<endl;
	return 0;
}