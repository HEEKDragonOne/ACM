#include  <iostream>
using namespace std;
int main()
{
	int a,b;
	int k=1;
	int i;

	cin>>a>>b;
	for(i=1;i<=b;i++)
	{
		k*=a;
		k%=1000;//k存储a^i的后三位
	}
	
	if(k>=100)	cout<<k<<endl;
	else if(k>=10)	cout<<"0"<<k<<endl;
	else	cout<<"00"<<k<<endl;
	return 0;
}
