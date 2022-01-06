#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
using namespace std;
int Fibonacci(int n)
{
    if(n==1)
        return 1;
    if(n==2)
        return 1;
    return Fibonacci(n-1)+Fibonacci(n-2);
}
int main()
{
    int n,x;
    cin>>n;
    while(n--)
    {
        cin>>x;
        cout<<Fibonacci(x)<<endl;
    }
    return 0;
}
