#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
	double Xa,Xb,Ya,Yb;
	double len;
	cin>>Xa>>Ya;
	cin>>Xb>>Yb;
	len=sqrt( (Xa-Xb)*(Xa-Xb) + (Ya-Yb)*(Ya-Yb) );
	cout<<setiosflags(ios::fixed)<<setprecision(3);
	cout<<len<<endl;
	return 0;
}