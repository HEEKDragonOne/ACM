#include <iostream>
using namespace std;
int main()
{
	int a,b;
	int n=1;
	int i;

	cin>>a>>b;
	for(i=1;i<=b;i++)	n=n*a%7;//循环计算n天后是周几
	switch(n)
	{
		case 0:cout<<"Sunday"<<endl;	break;
		case 1:cout<<"Monday"<<endl;	break;
		case 2:cout<<"Tuesday"<<endl;	break;
		case 3:cout<<"Wednesday"<<endl;	break;
		case 4:cout<<"Thursday"<<endl;	break;
		case 5:cout<<"Friday"<<endl;	break;
		case 6:cout<<"Saturday"<<endl;	break;
	}
	return 0;
}
