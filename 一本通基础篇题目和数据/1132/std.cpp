#include<iostream>
using namespace std;
int main()
{
	char a[101],b[101];
	int n;
	int i;
		
	cin>>n;
	
	for(i=0;i<n;i++)
	{
		cin>>a>>b;
		if(a[0]=='R'&&b[0]=='S'||a[0]=='S'&&b[0]=='P'||a[0]=='P'&&b[0]=='R')//判断第一个字母即可
			cout<<"Player1"<<endl;
		else if(a[0]==b[0])
			cout<<"Tie"<<endl;
		else
			cout<<"Player2"<<endl;
	}

	return 0;
}