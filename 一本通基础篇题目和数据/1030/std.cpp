#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double r,v;
	cin>>r;
	v=(4*3.14*r*r*r)/3.0;
	cout<<setiosflags(ios::fixed)<<setprecision(2);
	cout<<v<<endl;
	return 0;
}
