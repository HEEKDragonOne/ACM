#include <iostream>
using namespace std;
int main()
{
	int a,b;
 	char ch;
 	cin>>a>>b>>ch;
 	if((ch=='+')||(ch=='-')||(ch=='*')||(ch=='/'))
        {
	    switch (ch)
	    {
	        case '+':cout<<a+b<<endl;break;
               	case '-':cout<<a-b<<endl;break;
               	case '*':cout<<a*b<<endl;break;
               	case '/':
		{
                    if(b==0) cout<<"Divided by zero!"<<endl;
                    else       cout<<a/b<<endl;
                }
             }
        }
 	else    cout<<"Invalid operator!"<<endl;
 	return 0;
}