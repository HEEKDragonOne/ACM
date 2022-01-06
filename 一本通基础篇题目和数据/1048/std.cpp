#include<iostream>
using namespace std;
int main()
{
    int chinese,math;
    cin>>chinese>>math;
    if( (chinese>=60&&math<60) || (math>=60&&chinese<60) )    cout<<1<<endl;
    else    cout<<0<<endl;
    return 0;
}