#include <iostream>
using namespace std;
int main()
{
	int a,b;
	char ch;
	bool x;
 	int i,j;

	cin>>a>>b;//行、列
	cin>>ch;//填充符号
	cin>>x;//空心或实心

 	if(x)//实心
		for(i=1;i<=a;i++)
		{
			for(j=1;j<=b;j++)   cout<<ch;
			cout<<endl;
		}
	else//空心
		for(i=1;i<=a;i++)
		{
			for(j=1;j<=b;j++)
			{
				if((i==1)||(i==a)||(j==1)||(j==b))//四条边均按条件输出
					cout<<ch;
				else
					cout<<" ";
			}
			cout<<endl;
		}

 	cout<<endl;
 	return 0;
}