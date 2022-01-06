#include<iostream>
#include<iomanip>
using namespace std;
int main()
{ 
	double c,f;
	cin>>f;
	c=5.0*(f-32)/9;
	cout<<setiosflags(ios::fixed)<<setprecision(5);
        cout<<c<<endl;
  	return 0;
}