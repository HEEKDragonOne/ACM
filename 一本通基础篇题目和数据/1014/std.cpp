#include<iostream>
#include<iomanip>
using namespace std;
int main()
{ 
	double r,d,c,s,pi;
	pi=3.14159;
	cin>>r;
	d=2*r;
	c=2*pi*r;
	s=pi*r*r;
	cout<<setiosflags(ios::fixed)<<setprecision(4);
	cout<<d<<" "<<c<<" "<<s<<endl;
  	return 0;
}