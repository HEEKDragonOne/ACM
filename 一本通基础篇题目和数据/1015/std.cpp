#include<iostream>
#include<iomanip>
using namespace std;
int main()
{ 
	double r1,r2,R;
	cin>>r1>>r2;
	R=1.0/((1/r1)+(1/r2));
	cout<<setiosflags(ios::fixed)<<setprecision(2);
        cout<<R<<endl;
  	return 0;
}