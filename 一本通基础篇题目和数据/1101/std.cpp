#include <iostream>  
using namespace std;
int main()  
{ 
	int a,b,c;
	int x,y;
	int sum=0;

  	cin>>a>>b>>c;
  	for(x=0;x<=c/a;x++)//由题意得：(c-by)/a=x,可知：c/a>=x
  	{
		y=(c-a*x)/b;//由题意得：(c-ax)/b=y
		if(a*x+b*y==c)	sum++;//符合条件，记录
  	}
  	cout<<sum<<endl;

  	return 0;
}