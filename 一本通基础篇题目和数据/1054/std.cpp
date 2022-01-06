#include <iostream>
using namespace std;
int main()
{	
	double a,b,c;
 	cin>>a>>b>>c;
 	if((a+b>c)&&(a+c>b)&&(b+c>a))		cout<<"yes"<<endl;
 	else      cout<<"no"<<endl;
  	return 0;
}