#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;

    if(x>y)	cout<<">"<<endl;
    else if(x<y)	cout<<"<"<<endl;
    else if(x==y)		cout<<"="<<endl;
    return 0;
}