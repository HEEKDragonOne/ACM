#include <iostream>  
using namespace std;
int main()  
{ 
	int day;
	int date=1,sum=0;
	int i,j=1;

  	cin>>day;
  	for(i=1;i<=day;i++)
  	{
		sum+=date;//累加金币数
		if(i==j)//目前天数
     	{
			date++;
			j+=date;
     	}
  	}
  	cout<<sum<<endl;

  	return 0;
}