#include<iostream>
#include<iomanip>
using namespace std;
int main()
{ 
	char ch;
	int a;
	float b;
	double c;
	cin>>ch>>a>>b>>c;
	cout<<ch<<" "<<a<<" ";
	cout<<setiosflags(ios::fixed)<<setprecision(6);
	cout<<b<<" "<<c<<endl;
  	return 0;
}