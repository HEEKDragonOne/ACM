#include<iostream>
#include<iomanip>
using namespace std;
int main()
{ 
	double a,b,num;
	cin>>a>>b;
	num=100*b/a;
	cout<<setiosflags(ios::fixed)<<setprecision(3);
	cout<<num<<"%"<<endl;
  	return 0;
}