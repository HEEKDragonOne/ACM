#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#define N 1000010
using namespace std;
int calculate(int a,int b)
{
    if(b==0)
        return a;
    return calculate(b,a%b);
}
int main()
{
    int a,b;
    cin>>a>>b;
    if(a>b)
        cout<<calculate(a,b)<<endl;
    else
        cout<<calculate(b,a)<<endl;
    return 0;
}