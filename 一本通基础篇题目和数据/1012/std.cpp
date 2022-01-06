#include<iostream>
#include<iomanip>
using namespace std;
int main()
{ 
	double x,a,b,c,d,num;
	cin>>x>>a>>b>>c>>d;
	num=a*x*x*x+b*x*x+c*x+d;
	cout<<setiosflags(ios::fixed)<<setprecision(7);
        cout<<num<<endl;
  	return 0;
}