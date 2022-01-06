#include <iostream>
using namespace std;
int main()
{	
	int s;
 	double bike,walk;
	cin>>s;
  	bike=s/3.0+50;
        walk=s/1.2;
        if(bike==walk)		cout<<"All"<<endl;
 	else if(bike>walk)	cout<<"Walk"<<endl;
 	else              	cout<<"Bike"<<endl;
        return 0;
}