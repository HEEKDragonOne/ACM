#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int m,money;
 	char ch;
 	cin>>m>>ch;
 	if(m>1000)	money=8+ceil((m-1000)/500.0)*4;
	else          	money=8;
 	if(ch=='y')	money=money+5;
         cout<<money<<endl;
  	return 0;
}