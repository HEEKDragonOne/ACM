#include <iostream>
using namespace std;
int main()
{
	int a;
 	cin>>a;
 	if(a%4==0)
        {
	    if(a%100==0)
            {
		if(a%400)       cout<<"N"<<endl;
                else            cout<<"Y"<<endl;
            }
            else             	cout<<"Y"<<endl;
        }
        else		cout<<"N"<<endl;
 	return 0;
}